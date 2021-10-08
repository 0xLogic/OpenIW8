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
  const playerState_s *p_ps; 
  __int64 m_movingPlatformEntity; 
  G_PhysicsObject *v11; 
  unsigned int v12; 
  unsigned int RigidBodyID; 
  __int64 value; 
  __int64 v36; 
  vec3_t position; 
  vec3_t angVel; 
  vec3_t linVel; 
  float v40[4]; 
  vec4_t orientation; 

  _RDI = GetEntity(entref);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 222, ASSERT_TYPE_ASSERT, "(mSelf)", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0E8h+value], xmm0
    vmovss  [rsp+0E8h+var_B4], xmm0
    vmovss  dword ptr [rsp+0E8h+var_B0], xmm0
  }
  p_ps = &_RDI->client->ps;
  if ( !p_ps )
  {
    Scr_Error(COM_ERR_4866, scrContext, "Physics_GetPlayerGroundLinVel: Not called on a player");
    p_ps = &_RDI->client->ps;
  }
  if ( BGMovingPlatforms::IsOnMovingPlatform(p_ps) )
  {
    m_movingPlatformEntity = _RDI->client->ps.movingPlatforms.m_movingPlatformEntity;
    if ( (_DWORD)m_movingPlatformEntity == 2047 )
      Scr_Error(COM_ERR_4867, scrContext, "Physics_GetPlayerGroundLinVel: Should be on a moving platform and we aren't");
    if ( !G_IsEntityInUse(m_movingPlatformEntity) )
      Scr_Error(COM_ERR_4868, scrContext, "Physics_GetPlayerGroundLinVel: Moving platform couldn't be found");
    if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals", value, v36) )
      __debugbreak();
    v11 = G_PhysicsObject_Get(&SvGameGlobals::ms_svGameGlobals->gentities[m_movingPlatformEntity]);
    if ( !v11 )
      Scr_Error(COM_ERR_4869, scrContext, "Physics_GetPlayerGroundLinVel: Moving platform has no physics object");
    v12 = v11->physicsInstances[0];
    if ( v12 == -1 )
    {
      Scr_AddVector(scrContext, (const float *)&value);
    }
    else
    {
      __asm
      {
        vmovaps [rsp+0E8h+var_28], xmm6
        vmovaps [rsp+0E8h+var_38], xmm7
        vmovaps [rsp+0E8h+var_48], xmm8
      }
      if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v12) != 1 )
        Scr_Error(COM_ERR_4870, scrContext, "Physics_GetPlayerGroundLinVel: Currently, we only support moving platforms with 1 serverside body");
      RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v12, 0);
      if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF )
        Scr_Error(COM_ERR_4871, scrContext, "Physics_GetBodyId: No body found");
      Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation);
      Physics_GetRigidBodyLinAngVel(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &linVel, &angVel);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+130h]
        vsubss  xmm8, xmm0, dword ptr [rsp+0E8h+position]
        vmovss  xmm0, dword ptr [rdi+138h]
        vsubss  xmm5, xmm0, dword ptr [rsp+0E8h+position+8]
        vmovss  xmm1, dword ptr [rdi+134h]
        vsubss  xmm7, xmm1, dword ptr [rsp+0E8h+position+4]
        vmulss  xmm1, xmm5, dword ptr [rsp+0E8h+angVel+4]
        vmulss  xmm0, xmm7, dword ptr [rsp+0E8h+angVel+8]
        vmulss  xmm3, xmm8, dword ptr [rsp+0E8h+angVel+8]
        vsubss  xmm1, xmm1, xmm0
        vaddss  xmm2, xmm1, dword ptr [rsp+0E8h+linVel]
        vmulss  xmm0, xmm5, dword ptr [rsp+0E8h+angVel]
        vsubss  xmm1, xmm3, xmm0
        vmulss  xmm3, xmm7, dword ptr [rsp+0E8h+angVel]
        vmulss  xmm0, xmm8, dword ptr [rsp+0E8h+angVel+4]
        vmovss  [rsp+0E8h+var_78], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+0E8h+linVel+4]
        vsubss  xmm1, xmm3, xmm0
        vmovss  [rsp+0E8h+var_74], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+0E8h+linVel+8]
        vmovss  [rsp+0E8h+var_70], xmm2
      }
      Scr_AddVector(scrContext, v40);
      __asm
      {
        vmovaps xmm8, [rsp+0E8h+var_48]
        vmovaps xmm7, [rsp+0E8h+var_38]
        vmovaps xmm6, [rsp+0E8h+var_28]
      }
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
  scr_string_t classname; 
  const char *v8; 
  int NumParam; 
  bool v10; 
  G_PhysicsObject *v27; 
  unsigned int v28; 
  unsigned int NumRigidBodys; 
  const DObj *ServerDObjForEnt; 
  const XModel *FirstModel; 
  unsigned int v32; 
  const PhysicsAsset *v33; 
  unsigned int m_serialAndIndex; 
  float fmt; 
  __int64 v43; 
  bool v44; 
  hknpBodyId result[2]; 
  vec3_t v46; 
  vec3_t vectorValue; 
  vec3_t normalizedDirection; 

  entnum = entref.entnum;
  entclass = entref.entclass;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "PhysicsScript_TakeControl");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_4855, scrContext, "not an entity");
    _RDI = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 444, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _RDI = &g_entities[entnum];
    classname = _RDI->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable && _RDI->s.eType != ET_ITEM )
    {
      v8 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item (which are the only script entities supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4854, scrContext, v8);
    }
  }
  __asm { vmovaps [rsp+0D0h+var_40], xmm6 }
  NumParam = Scr_GetNumParam(scrContext);
  v10 = Scr_GetInt(scrContext, 0) != 0;
  v44 = NumParam > 1;
  if ( NumParam <= 1 )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rbp+57h+vectorValue], xmm6
      vmovss  dword ptr [rbp+57h+vectorValue+4], xmm6
      vmovss  dword ptr [rbp+57h+vectorValue+8], xmm6
      vmovss  dword ptr [rbp+57h+var_80], xmm6
      vmovss  dword ptr [rbp+57h+var_80+4], xmm6
      vmovss  dword ptr [rbp+57h+var_80+8], xmm6
      vmovss  dword ptr [rbp+57h+normalizedDirection], xmm6
      vmovss  dword ptr [rbp+57h+normalizedDirection+4], xmm6
      vmovss  dword ptr [rbp+57h+normalizedDirection+8], xmm6
    }
  }
  else
  {
    if ( NumParam == 2 )
      Scr_Error(COM_ERR_4880, scrContext, "Physics_TakeControl: If you set position, you must set impulse too");
    Scr_GetVector(scrContext, 1u, &vectorValue);
    Scr_GetVector(scrContext, 2u, &v46);
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+57h+var_80]
      vmovss  xmm5, dword ptr [rbp+57h+var_80+4]
      vmovss  xmm3, dword ptr [rbp+57h+var_80+8]
      vmulss  xmm1, xmm4, xmm4
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm1, cs:__real@3f800000
      vsqrtss xmm6, xmm0, xmm0
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm1, xmm0
      vdivss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm4, xmm2
      vmovss  dword ptr [rbp+57h+normalizedDirection], xmm0
      vmulss  xmm0, xmm3, xmm2
      vmulss  xmm1, xmm5, xmm2
      vmovss  dword ptr [rbp+57h+normalizedDirection+8], xmm0
      vmovss  dword ptr [rbp+57h+normalizedDirection+4], xmm1
    }
  }
  if ( _RDI->s.eType != ET_SCRIPTMOVER )
    Scr_Error(COM_ERR_4881, scrContext, "Physics_TakeControl: Entity is not a script mover");
  v27 = G_PhysicsObject_Get(_RDI);
  if ( !v27 )
    Scr_Error(COM_ERR_4882, scrContext, "Physics_TakeControl: No physics object found");
  v28 = v27->physicsInstances[0];
  if ( v28 == -1 )
    Scr_Error(COM_ERR_4883, scrContext, "Physics_TakeControl: No physics instance found - physics probably hasn't been instantiated");
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v28);
  if ( !NumRigidBodys )
    Scr_Error(COM_ERR_4884, scrContext, "Physics_TakeControl: No physics bodies in instance");
  ServerDObjForEnt = Com_GetServerDObjForEnt(_RDI);
  if ( !ServerDObjForEnt )
    Scr_Error(COM_ERR_4885, scrContext, "Physics_TakeControl: Entity has no dobj");
  FirstModel = DObjGetFirstModel(ServerDObjForEnt);
  if ( !FirstModel )
    Scr_Error(COM_ERR_4886, scrContext, "Physics_TakeControl: Entity has no xmodel");
  *(_QWORD *)&result[0].m_serialAndIndex = FirstModel->physicsAsset;
  if ( !*(_QWORD *)&result[0].m_serialAndIndex )
    Scr_Error(COM_ERR_4887, scrContext, "Physics_TakeControl: Entity has no physics asset");
  if ( G_SetOriginAndAngle(_RDI, &_RDI->r.currentOrigin, &_RDI->r.currentAngles, 1, 0) )
  {
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
  }
  if ( v10 )
  {
    v27->mapping = PHYSICSOBJECT_MAPPING_PHYSICS_AUTH;
    _RDI->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
    v32 = 0;
    _RDI->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
    if ( NumRigidBodys )
    {
      v33 = *(const PhysicsAsset **)&result[0].m_serialAndIndex;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v28 == -1 )
        {
          LODWORD(v43) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v43) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v43) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v43) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, PHYSICS_WORLD_ID_FIRST, v28, v32)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
          Scr_Error(COM_ERR_4888, scrContext, "Physics_TakeControl: Invalid rigid body found in instance");
        Physics_SetRigidBodyToDefault(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, v33, v32);
        G_PhysicsObject_IdentifyRigidBodyType(_RDI->s.number);
        if ( v44 )
        {
          __asm { vmovss  dword ptr [rsp+0D0h+fmt], xmm6 }
          Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &vectorValue, &normalizedDirection, fmt);
        }
        ++v32;
      }
      while ( v32 < NumRigidBodys );
    }
  }
  else
  {
    G_Utils_DestroyEntityPhysics(_RDI);
    _RDI->s.lerp.pos.trType = TR_PHYSICS_CLIENT_AUTH;
    _RDI->s.lerp.apos.trType = TR_PHYSICS_CLIENT_AUTH;
    if ( v44 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+vectorValue]
        vmovss  dword ptr [rdi+28h], xmm0
        vmovss  xmm1, dword ptr [rbp+57h+vectorValue+4]
        vmovss  dword ptr [rdi+2Ch], xmm1
        vmovss  xmm0, dword ptr [rbp+57h+vectorValue+8]
        vmovss  dword ptr [rdi+30h], xmm0
        vmovss  xmm1, dword ptr [rbp+57h+var_80]
        vmovss  dword ptr [rdi+4Ch], xmm1
        vmovss  xmm0, dword ptr [rbp+57h+var_80+4]
        vmovss  dword ptr [rdi+50h], xmm0
        vmovss  xmm1, dword ptr [rbp+57h+var_80+8]
        vmovss  dword ptr [rdi+54h], xmm1
      }
    }
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+0D0h+var_40] }
}

/*
==============
PhysicsScript_ApplyImpulse
==============
*/
void PhysicsScript_ApplyImpulse(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v5; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v8; 
  G_PhysicsObject *v9; 
  unsigned int v10; 
  unsigned int NumRigidBodys; 
  unsigned int v12; 
  unsigned int m_serialAndIndex; 
  float fmt; 
  __int64 v32; 
  hknpBodyId result; 
  vec3_t v34; 
  vec3_t normalizedDirection; 
  vec3_t vectorValue; 

  __asm { vmovaps [rsp+0C8h+var_48], xmm6 }
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 600, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
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
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v34);
  if ( ((v5->s.eType - 6) & 0xFFF7) != 0 )
    Scr_Error(COM_ERR_4889, scrContext, "Physics_ApplyImpulse: Entity is not a script mover nor vehicle");
  v9 = G_PhysicsObject_Get(v5);
  if ( !v9 )
    Scr_Error(COM_ERR_4890, scrContext, "Physics_ApplyImpulse: No physics object found");
  v10 = v9->physicsInstances[0];
  if ( v10 == -1 )
    Scr_Error(COM_ERR_4891, scrContext, "Physics_ApplyImpulse: No physics instance found - physics probably hasn't been instantiated");
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v10);
  if ( !NumRigidBodys )
    Scr_Error(COM_ERR_4892, scrContext, "Physics_ApplyImpulse: No physics bodies in instance");
  v12 = 0;
  __asm
  {
    vmovss  xmm4, dword ptr [rsp+0C8h+var_80]
    vmovss  xmm5, dword ptr [rsp+0C8h+var_80+4]
    vmovss  xmm3, dword ptr [rsp+0C8h+var_80+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm0, xmm2, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vsqrtss xmm6, xmm0, xmm0
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
    vdivss  xmm2, xmm1, xmm0
    vmulss  xmm0, xmm4, xmm2
    vmovss  dword ptr [rsp+0C8h+normalizedDirection], xmm0
    vmulss  xmm0, xmm3, xmm2
    vmulss  xmm1, xmm5, xmm2
    vmovss  dword ptr [rsp+0C8h+normalizedDirection+8], xmm0
    vmovss  dword ptr [rsp+0C8h+normalizedDirection+4], xmm1
  }
  if ( NumRigidBodys )
  {
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v10 == -1 )
      {
        LODWORD(v32) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v32) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v32) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v32) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v10, v12)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        Scr_Error(COM_ERR_4893, scrContext, "Physics_ApplyImpulse: Invalid rigid body found in instance");
      __asm { vmovss  dword ptr [rsp+0C8h+fmt], xmm6 }
      Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &vectorValue, &normalizedDirection, fmt);
      ++v12;
    }
    while ( v12 < NumRigidBodys );
  }
  __asm { vmovaps xmm6, [rsp+0C8h+var_48] }
}

/*
==============
PhysicsScript_GetCharacterCollisionCapsule
==============
*/
void PhysicsScript_GetCharacterCollisionCapsule(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  const char *v5; 
  entityType_s eType; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4859, scrContext, "not an entity");
    _RDI = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 664, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _RDI = &g_entities[entnum];
    if ( !_RDI->client && !_RDI->agent && !_RDI->sentient && (_RDI->s.eType != ET_SCRIPTMOVER || _RDI->s.un.scriptMoverType != 1) )
    {
      v5 = j_va("entity %i is not a player or AI (which are the only script entities supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4858, scrContext, v5);
    }
  }
  eType = _RDI->s.eType;
  if ( eType == ET_PLAYER )
  {
    Scr_MakeArray(scrContext);
    __asm { vmovss  xmm1, cs:__real@420c0000; value }
    Scr_AddFloat(scrContext, *(float *)&_XMM1);
    Scr_AddArrayStringIndexed(scrContext, scr_const.half_height);
    __asm { vmovss  xmm1, cs:__real@41700000 }
  }
  else
  {
    if ( ((eType - 17) & 0xFFFD) != 0 && (eType != ET_SCRIPTMOVER || _RDI->s.un.scriptMoverType != 1) )
    {
      Scr_Error(COM_ERR_4894, scrContext, "PhysicsScript_GetCharacterCollisionCapsule: Entity doesn't appear to be a player, actor, agent or fakeactor");
      return;
    }
    Scr_MakeArray(scrContext);
    __asm { vmovss  xmm1, dword ptr [rdi+114h]; value }
    Scr_AddFloat(scrContext, *(float *)&_XMM1);
    Scr_AddArrayStringIndexed(scrContext, scr_const.half_height);
    __asm { vmovss  xmm1, dword ptr [rdi+10Ch]; value }
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
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
  scrContext_t *v5; 
  gentity_s *v8; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v11; 
  G_PhysicsObject *v12; 
  unsigned int v13; 
  unsigned int NumRigidBodys; 
  unsigned int v15; 
  unsigned int m_serialAndIndex; 
  __int64 v20; 
  float mass; 
  hknpBodyId result; 

  __asm
  {
    vmovaps [rsp+98h+var_48], xmm6
    vmovaps [rsp+98h+var_58], xmm7
  }
  entnum = entref.entnum;
  v5 = scrContext;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v8 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 710, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v8 = &g_entities[entnum];
    classname = v8->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v8->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v11 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, v5, v11);
      }
    }
  }
  v12 = G_PhysicsObject_Get(v8);
  if ( v12 )
  {
    v13 = v12->physicsInstances[0];
    if ( v13 != -1 )
    {
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v13);
      v15 = 0;
      if ( NumRigidBodys )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v20) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v13, v15)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 734, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          __asm { vmovss  [rsp+98h+mass], xmm6 }
          Physics_GetRigidBodyMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &mass);
          __asm { vaddss  xmm7, xmm7, [rsp+98h+mass] }
          ++v15;
        }
        while ( v15 < NumRigidBodys );
        v5 = scrContext;
      }
      __asm { vmovaps xmm6, xmm7 }
    }
  }
  __asm
  {
    vmovaps xmm1, xmm6; value
    vmovaps xmm6, [rsp+98h+var_48]
    vmovaps xmm7, [rsp+98h+var_58]
  }
  Scr_AddFloat(v5, *(float *)&_XMM1);
}

/*
==============
PhysicsScript_GetEntityDynamicMass
==============
*/
void PhysicsScript_GetEntityDynamicMass(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  scrContext_t *v5; 
  gentity_s *v8; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v11; 
  G_PhysicsObject *v12; 
  unsigned int v13; 
  unsigned int NumRigidBodys; 
  unsigned int v15; 
  unsigned int m_serialAndIndex; 
  __int64 v20; 
  float mass; 
  hknpBodyId result; 

  __asm
  {
    vmovaps [rsp+98h+var_48], xmm6
    vmovaps [rsp+98h+var_58], xmm7
  }
  entnum = entref.entnum;
  v5 = scrContext;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm7, xmm7, xmm7
  }
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v8 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 763, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v8 = &g_entities[entnum];
    classname = v8->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v8->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v11 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, v5, v11);
      }
    }
  }
  v12 = G_PhysicsObject_Get(v8);
  if ( v12 )
  {
    v13 = v12->physicsInstances[0];
    if ( v13 != -1 )
    {
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v13);
      v15 = 0;
      if ( NumRigidBodys )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v20) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v13, v15)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 787, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          __asm { vmovss  [rsp+98h+mass], xmm6 }
          Physics_GetRigidBodyDynamicMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &mass);
          __asm { vaddss  xmm7, xmm7, [rsp+98h+mass] }
          ++v15;
        }
        while ( v15 < NumRigidBodys );
        v5 = scrContext;
      }
      __asm { vmovaps xmm6, xmm7 }
    }
  }
  __asm
  {
    vmovaps xmm1, xmm6; value
    vmovaps xmm6, [rsp+98h+var_48]
    vmovaps xmm7, [rsp+98h+var_58]
  }
  Scr_AddFloat(v5, *(float *)&_XMM1);
}

/*
==============
PhysicsScript_GetEntityCenterOfMass
==============
*/
void PhysicsScript_GetEntityCenterOfMass(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  scrContext_t *v12; 
  gentity_s *v15; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v18; 
  G_PhysicsObject *v19; 
  unsigned int v20; 
  unsigned int NumRigidBodys; 
  unsigned int v22; 
  unsigned int m_serialAndIndex; 
  char v47; 
  bool v48; 
  __int64 v68; 
  float mass; 
  float v70; 
  hknpBodyId result[2]; 
  scrContext_t *v72; 
  float value; 
  float v76; 
  float v79; 
  vec3_t centerOfMass; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vxorps  xmm9, xmm9, xmm9
  }
  v72 = scrContext;
  entnum = entref.entnum;
  v12 = scrContext;
  __asm
  {
    vmovss  [rsp+130h+value], xmm9
    vmovss  [rsp+130h+var_D4], xmm9
    vmovss  [rsp+130h+var_D0], xmm9
    vmovss  [rsp+130h+var_C8], xmm9
    vmovss  [rsp+130h+var_C4], xmm9
    vmovss  [rsp+130h+var_C0], xmm9
    vmovss  [rsp+130h+var_B8], xmm9
    vmovss  [rsp+130h+var_B4], xmm9
    vmovss  [rbp+30h+var_B0], xmm9
    vxorps  xmm11, xmm11, xmm11
    vxorps  xmm10, xmm10, xmm10
  }
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v15 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 827, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v15 = &g_entities[entnum];
    classname = v15->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v15->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v18 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, v12, v18);
      }
    }
  }
  v19 = G_PhysicsObject_Get(v15);
  if ( v19 )
  {
    v20 = v19->physicsInstances[0];
    if ( v20 != -1 )
    {
      __asm { vmovaps xmmword ptr [rsp+130h+var_48+8], xmm6 }
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v20);
      v22 = 0;
      if ( NumRigidBodys )
      {
        __asm
        {
          vmovaps [rsp+130h+var_58+8], xmm7
          vmovaps [rsp+130h+var_68+8], xmm8
        }
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v68) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v68) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, PHYSICS_WORLD_ID_FIRST, v20, v22)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 849, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          __asm
          {
            vmovss  [rsp+130h+mass], xmm9
            vmovss  [rsp+130h+var_EC], xmm9
          }
          Physics_GetRigidBodyMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &mass);
          Physics_GetRigidBodyDynamicMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &v70);
          __asm
          {
            vmovss  dword ptr [rbp+30h+centerOfMass], xmm9
            vmovss  dword ptr [rbp+30h+centerOfMass+4], xmm9
            vmovss  dword ptr [rbp+30h+centerOfMass+8], xmm9
          }
          Physics_GetRigidBodyCenterOfMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &centerOfMass);
          __asm
          {
            vmovss  xmm8, [rsp+130h+mass]
            vmovss  xmm4, [rsp+130h+var_EC]
            vmovss  xmm5, dword ptr [rbp+30h+centerOfMass]
            vmovss  xmm6, dword ptr [rbp+30h+centerOfMass+4]
            vmovss  xmm7, dword ptr [rbp+30h+centerOfMass+8]
            vaddss  xmm1, xmm5, [rsp+130h+value]
            vmovss  [rsp+130h+value], xmm1
            vaddss  xmm1, xmm6, [rsp+130h+var_D4]
            vmovss  [rsp+130h+var_D4], xmm1
            vaddss  xmm1, xmm7, [rsp+130h+var_D0]
            vmovss  [rsp+130h+var_D0], xmm1
            vmulss  xmm2, xmm5, xmm8
            vaddss  xmm1, xmm2, [rsp+130h+var_C8]
            vmovss  [rsp+130h+var_C8], xmm1
            vmulss  xmm3, xmm6, xmm8
            vaddss  xmm1, xmm3, [rsp+130h+var_C4]
            vmovss  [rsp+130h+var_C4], xmm1
            vmulss  xmm2, xmm7, xmm8
            vaddss  xmm1, xmm2, [rsp+130h+var_C0]
            vmovss  [rsp+130h+var_C0], xmm1
            vmulss  xmm2, xmm5, xmm4
            vaddss  xmm1, xmm2, [rsp+130h+var_B8]
            vmovss  [rsp+130h+var_B8], xmm1
            vmulss  xmm3, xmm6, xmm4
            vaddss  xmm1, xmm3, [rsp+130h+var_B4]
            vmulss  xmm2, xmm7, xmm4
            vmovss  [rsp+130h+var_B4], xmm1
            vaddss  xmm1, xmm2, [rbp+30h+var_B0]
          }
          ++v22;
          __asm
          {
            vmovss  [rbp+30h+var_B0], xmm1
            vaddss  xmm11, xmm11, xmm8
            vaddss  xmm10, xmm10, xmm4
          }
        }
        while ( v22 < NumRigidBodys );
        v12 = v72;
        __asm
        {
          vmovaps xmm8, [rsp+130h+var_68+8]
          vmovaps xmm7, [rsp+130h+var_58+8]
        }
      }
      Scr_MakeArray(v12);
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      v47 = 0;
      v48 = NumRigidBodys == 0;
      if ( NumRigidBodys )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, r15
          vdivss  xmm3, xmm6, xmm0
          vmulss  xmm1, xmm3, [rsp+130h+value]
          vmulss  xmm0, xmm3, [rsp+130h+var_D4]
          vmulss  xmm2, xmm3, [rsp+130h+var_D0]
          vmovss  [rsp+130h+value], xmm1
          vmovss  [rsp+130h+var_D4], xmm0
          vmovss  [rsp+130h+var_D0], xmm2
        }
        Scr_AddVector(v12, &value);
        Scr_AddArrayStringIndexed(v12, scr_const.unscaled);
      }
      __asm { vcomiss xmm11, xmm9 }
      if ( !(v47 | v48) )
      {
        __asm
        {
          vdivss  xmm3, xmm6, xmm11
          vmulss  xmm1, xmm3, [rsp+130h+var_C8]
          vmulss  xmm0, xmm3, [rsp+130h+var_C4]
          vmulss  xmm2, xmm3, [rsp+130h+var_C0]
          vmovss  [rsp+130h+var_C8], xmm1
          vmovss  [rsp+130h+var_C4], xmm0
          vmovss  [rsp+130h+var_C0], xmm2
        }
        Scr_AddVector(v12, &v76);
        Scr_AddArrayStringIndexed(v12, scr_const.scaled);
      }
      __asm { vcomiss xmm10, xmm9 }
      if ( !(v47 | v48) )
      {
        __asm
        {
          vdivss  xmm3, xmm6, xmm10
          vmulss  xmm1, xmm3, [rsp+130h+var_B8]
          vmulss  xmm0, xmm3, [rsp+130h+var_B4]
          vmulss  xmm2, xmm3, [rbp+30h+var_B0]
          vmovss  [rsp+130h+var_B8], xmm1
          vmovss  [rsp+130h+var_B4], xmm0
          vmovss  [rbp+30h+var_B0], xmm2
        }
        Scr_AddVector(v12, &v79);
        Scr_AddArrayStringIndexed(v12, scr_const.scaled_dynamic);
      }
      __asm { vmovaps xmm6, xmmword ptr [rsp+130h+var_48+8] }
    }
  }
  _R11 = &v86;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
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
  scr_string_t classname; 
  entityType_s eType; 
  const char *v7; 
  G_PhysicsObject *v8; 
  DObj *ServerDObjForEnt; 
  const char *v10; 
  const char *v18; 
  char *fmt; 
  __int64 v20; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    _RDI = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 950, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    _RDI = &g_entities[entnum];
    classname = _RDI->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = _RDI->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v7 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, scrContext, v7);
      }
    }
  }
  v8 = G_PhysicsObject_Get(_RDI);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 953, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
    __debugbreak();
  if ( v8->physicsInstances[0] == -1 )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(_RDI);
    v10 = "<Unknown>";
    if ( ServerDObjForEnt && ServerDObjForEnt->numModels )
      v10 = **(const char ***)ServerDObjForEnt->models;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+138h]
      vmovss  xmm3, dword ptr [rdi+130h]
      vmovss  xmm1, dword ptr [rdi+134h]
      vcvtss2sd xmm0, xmm0, xmm0
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+38h+var_10], xmm0
      vmovq   r9, xmm3
      vmovsd  [rsp+38h+fmt], xmm1
    }
    v18 = j_va("PhysicsScript_RegisterForCollisionCallback entity %i using model %s at position (%.2f,%.2f,%.2f) doesn't have any physics to register a callback for.  This is commonly caused by missing physAsset or a transient model.", (unsigned int)_RDI->s.number, v10, _R9, fmt, v20);
    Scr_Error(COM_ERR_4895, scrContext, v18);
  }
  G_PhysicsObject_RegisterForCollisionCallback(_RDI);
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
  gentity_s *v6; 
  const char *v7; 
  bool v8; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v6 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1130, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v6 = &g_entities[entnum];
    if ( v6->s.eType != ET_PHYSICS_VOLUME )
    {
      v7 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v7);
    }
  }
  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_4904, scrContext, "Physics_VolumeSetAsGravityScalar should have 2 params - Physics_VolumeSetAsGravityScalar( <enable>, <scale> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4905, scrContext, "Physics_VolumeSetAsGravityScalar: Parameter 0 enable must be the enable flag - see usage");
  v8 = Scr_GetInt(scrContext, 0) != 0;
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4906, scrContext, "Physics_VolumeSetAsGravityScalar: Parameter 1 scale must be the scale - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovaps xmm6, xmm0 }
  if ( G_PhysicsVolume_IsGravityVector(v6) )
    Scr_Error(COM_ERR_4907, scrContext, "Physics_VolumeSetAsGravityScalar: Entity is a gravity vector - you can't also make it a gravity scalar");
  if ( G_PhysicsVolume_IsDirectionForceApplier(v6) )
    Scr_Error(COM_ERR_4908, scrContext, "Physics_VolumeSetAsGravityScalar: Entity is a direction force applier - you can't also make it a gravity scalar");
  if ( G_PhysicsVolume_IsFocalForceApplier(v6) )
    Scr_Error(COM_ERR_4909, scrContext, "Physics_VolumeSetAsGravityScalar: Entity is a focal force applier - you can't also make it a gravity scalar");
  __asm
  {
    vmovaps xmm2, xmm6; scale
    vmovaps xmm6, [rsp+48h+var_18]
  }
  G_PhysicsVolume_SetGravityScalar(v6, v8, *(float *)&_XMM2);
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
  gentity_s *v7; 
  const char *v8; 
  unsigned int NumParam; 
  bool v10; 
  float fmt; 
  vec3_t vectorValue; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
  }
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v7 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1241, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v7 = &g_entities[entnum];
    if ( v7->s.eType != ET_PHYSICS_VOLUME )
    {
      v8 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v8);
    }
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam - 3 > 1 )
    Scr_Error(COM_ERR_4916, scrContext, "Physics_VolumeSetAsDirectionalForce should have 3 or 4 params - Physics_VolumeSetAsDirectionalForce( <enable>, <direction>, <force>, <maxspeed> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4917, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 0 enable must be the enable flag - see usage");
  v10 = Scr_GetInt(scrContext, 0) != 0;
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4918, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 1 direction must be the direction - see usage");
  Scr_GetVector(scrContext, 1u, &vectorValue);
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4919, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 2 force must be the force - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovaps xmm7, xmm0
  }
  if ( NumParam == 4 )
  {
    if ( Scr_GetType(scrContext, 3u) != VAR_FLOAT && Scr_GetType(scrContext, 3u) != VAR_INTEGER )
      Scr_Error(COM_ERR_4920, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 3 maxspeed must be the maximum speed - see usage");
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    __asm { vmovaps xmm6, xmm0 }
  }
  if ( G_PhysicsVolume_IsGravityScalar(v7) )
    Scr_Error(COM_ERR_4921, scrContext, "Physics_VolumeSetAsDirectionalForce: Entity is a gravity scalar - you can't also make it a directional force applier");
  if ( G_PhysicsVolume_IsGravityVector(v7) )
    Scr_Error(COM_ERR_4922, scrContext, "Physics_VolumeSetAsDirectionalForce: Entity is a gravity vector - you can't also make it a directional force applier");
  if ( G_PhysicsVolume_IsFocalForceApplier(v7) )
    Scr_Error(COM_ERR_4923, scrContext, "Physics_VolumeSetAsDirectionalForce: Entity is a focal force applier - you can't also make it a directional force applier");
  __asm
  {
    vmovaps xmm3, xmm7; force
    vmovss  dword ptr [rsp+88h+fmt], xmm6
  }
  G_PhysicsVolume_SetDirectionForceApplier(v7, v10, &vectorValue, *(float *)&_XMM3, fmt);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
}

/*
==============
PhysicsScript_PhysicsVolumeSetAsFocalForce
==============
*/
void PhysicsScript_PhysicsVolumeSetAsFocalForce(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v7; 
  const char *v8; 
  unsigned int NumParam; 
  bool v10; 
  float fmt; 
  vec3_t vectorValue; 

  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps [rsp+88h+var_38], xmm7
  }
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v7 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1314, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v7 = &g_entities[entnum];
    if ( v7->s.eType != ET_PHYSICS_VOLUME )
    {
      v8 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v8);
    }
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam - 3 > 1 )
    Scr_Error(COM_ERR_4924, scrContext, "Physics_VolumeSetAsFocalForce should have 3 or 4 params - Physics_VolumeSetAsFocalForce( <enable>, <point>, <force>, <maxspeed> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4925, scrContext, "Physics_VolumeSetAsFocalForce: Parameter 0 enable must be the enable flag - see usage");
  v10 = Scr_GetInt(scrContext, 0) != 0;
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4926, scrContext, "Physics_VolumeSetAsFocalForce: Parameter 1 point must be the point - see usage");
  Scr_GetVector(scrContext, 1u, &vectorValue);
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4927, scrContext, "Physics_VolumeSetAsFocalForce: Parameter 2 force must be the force - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovaps xmm7, xmm0
  }
  if ( NumParam == 4 )
  {
    if ( Scr_GetType(scrContext, 3u) != VAR_FLOAT && Scr_GetType(scrContext, 3u) != VAR_INTEGER )
      Scr_Error(COM_ERR_4928, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 3 maxspeed must be the maximum speed - see usage");
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
    __asm { vmovaps xmm6, xmm0 }
  }
  if ( G_PhysicsVolume_IsGravityScalar(v7) )
    Scr_Error(COM_ERR_4929, scrContext, "Physics_VolumeSetAsFocalForce: Entity is a gravity scalar - you can't also make it a focal force applier");
  if ( G_PhysicsVolume_IsGravityVector(v7) )
    Scr_Error(COM_ERR_4930, scrContext, "Physics_VolumeSetAsFocalForce: Entity is a gravity vector - you can't also make it a focal force applier");
  if ( G_PhysicsVolume_IsDirectionForceApplier(v7) )
    Scr_Error(COM_ERR_4931, scrContext, "Physics_VolumeSetAsFocalForce: Entity is a direction force applier - you can't also make it a focal force applier");
  __asm
  {
    vmovaps xmm3, xmm7; force
    vmovss  dword ptr [rsp+88h+fmt], xmm6
  }
  G_PhysicsVolume_SetFocalForceApplier(v7, v10, &vectorValue, *(float *)&_XMM3, fmt);
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm7, [rsp+88h+var_38]
  }
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
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+78h+angVel.m_quad]
    vmovss  xmm1, dword ptr [rsp+78h+angVel.m_quad+4]
    vmovss  [rsp+78h+value], xmm0
    vmovss  xmm0, dword ptr [rsp+78h+angVel.m_quad+8]
    vmovss  [rsp+78h+var_30], xmm0
    vmovss  [rsp+78h+var_34], xmm1
  }
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
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *v33; 
  ntl::red_black_tree_node_base *v34; 
  hkMemoryAllocator *v35; 
  hkMemoryAllocator *v36; 
  VariableType failureType[4]; 
  unsigned int count; 
  unsigned int failureIndex; 
  hkMonitorStream *v40; 
  scrContext_t *v41; 
  HavokPhysics_IgnoreBodies v42; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  __m256i v44; 
  __int64 v45; 
  __int64 v46; 
  hkMonitorStream *v47; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<int>,int *,int &> result; 
  vec3_t max; 
  vec3_t vectorValue; 
  ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int> > v51; 
  unsigned int buffer[128]; 

  v46 = -2i64;
  v2 = scrContext;
  v41 = scrContext;
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
  v40 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_AABBBroadphaseQuery");
  v47 = v12;
  BroadphaseCollisionQueryResult = Physics_AllocateBroadphaseCollisionQueryResult(PHYSICS_WORLD_ID_FIRST);
  if ( !BroadphaseCollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1697, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v42, count, 0);
  if ( v4 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v42, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0; i < count; ++i )
    {
      v15 = Scr_GetEntityIdRef(v2, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v42, i, v15, 1, 0, 0, 0, 0);
    }
  }
  extendedData.phaseSelection = All;
  extendedData.contents = Int;
  extendedData.ignoreBodies = &v42;
  Physics_AABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &vectorValue, &max, &extendedData, BroadphaseCollisionQueryResult);
  p_m_freelist = &v51.m_freelist;
  v17 = &v51.m_data.m_buffer[5080];
  do
  {
    *(_QWORD *)v17 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v17;
    v17 -= 40;
  }
  while ( v17 + 40 > (char *)&v51 );
  v51.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v51.m_size = 0i64;
  v51.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v51.m_endNodeBase.mp_parent = NULL;
  v51.m_endNodeBase.mp_left = &v51.m_endNodeBase;
  v51.m_endNodeBase.mp_right = &v51.m_endNodeBase;
  v18 = 0;
  if ( HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(BroadphaseCollisionQueryResult) )
  {
    while ( 1 )
    {
      if ( v51.m_size >= 0x80 )
      {
LABEL_81:
        v12 = v40;
        v2 = v41;
        goto LABEL_82;
      }
      HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(BroadphaseCollisionQueryResult, v18);
      Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, HitBodyId);
      EntityNum = Physics_GetEntityNum(Ref);
      failureIndex = EntityNum;
      p_m_endNodeBase = &v51.m_endNodeBase;
      mp_parent = v51.m_endNodeBase.mp_parent;
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
      if ( p_m_endNodeBase != v51.m_endNodeBase.mp_left )
        break;
      ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int>>::insert_node(&v51, &result, p_m_endNodeBase, (const int *)&failureIndex, 1, 0);
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
      if ( !v51.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v51.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<40> *)v51.m_freelist.m_head.mp_next == &v51.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 0x80ui64) )
        __debugbreak();
      _RCX = v51.m_freelist.m_head.mp_next;
      v51.m_freelist.m_head.mp_next = v51.m_freelist.m_head.mp_next->mp_next;
      v44.m256i_i32[0] = 0;
      v44.m256i_i64[1] = (__int64)p_m_endNodeBase;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+1680h+var_16D0+10h], xmm0
      }
      LODWORD(v45) = EntityNum;
      __asm
      {
        vmovups ymm0, [rbp+1680h+var_16D0]
        vmovups ymmword ptr [rcx], ymm0
        vmovsd  xmm1, [rbp+1680h+var_16B0]
        vmovsd  qword ptr [rcx+20h], xmm1
      }
      if ( p_m_endNodeBase == &v51.m_endNodeBase )
      {
        v51.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
        v51.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
        v51.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
      }
      else if ( EntityNum >= p_m_endNodeBase[1].m_color )
      {
        p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)_RCX;
        mp_right = v51.m_endNodeBase.mp_right;
        if ( p_m_endNodeBase == v51.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)_RCX;
        v51.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)_RCX;
        if ( p_m_endNodeBase == v51.m_endNodeBase.mp_left )
          v51.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &v51.m_endNodeBase.mp_parent);
      ++v51.m_size;
    }
    goto LABEL_80;
  }
LABEL_82:
  Scr_MakeArray(v2);
  next = v51.m_endNodeBase.mp_left;
  if ( v51.m_endNodeBase.mp_left != &v51.m_endNodeBase )
  {
    do
    {
      if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      Scr_AddEntityNum(v2, next[1].m_color, ENTITY_CLASS_GENTITY);
      Scr_AddArray(v2);
      next = ntl::red_black_tree_node_base::get_next(next);
    }
    while ( next != &v51.m_endNodeBase );
    v12 = v40;
  }
  Physics_FreeBroadphaseCollisionQueryResult(BroadphaseCollisionQueryResult);
  if ( v51.m_size )
  {
    v33 = v51.m_endNodeBase.mp_parent;
    if ( v51.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int>>::erase_tree(&v51, (ntl::red_black_tree_node<int> *)v33->mp_right);
        v34 = v33->mp_left;
        *(_QWORD *)&v33->m_color = v51.m_freelist.m_head.mp_next;
        v51.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v33;
        v33 = v34;
      }
      while ( v34 );
    }
    v51.m_endNodeBase.mp_parent = NULL;
    v51.m_endNodeBase.mp_left = &v51.m_endNodeBase;
    v51.m_endNodeBase.mp_right = &v51.m_endNodeBase;
    v51.m_size = 0i64;
  }
  v35 = hkMemHeapAllocator();
  v42.m_ignoreBodies.m_size = 0;
  if ( v42.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v35, v42.m_ignoreBodies.m_data, 4, v42.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v42.m_ignoreBodies.m_data = NULL;
  v42.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v36 = hkMemHeapAllocator();
  v42.m_ignoreEntities.m_size = 0;
  if ( v42.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v36, v42.m_ignoreEntities.m_data, 8, v42.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v42.m_ignoreEntities.m_data = NULL;
  v42.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
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
  scrContext_t *v2; 
  Physics_CollisionQueryCollectionType v3; 
  int Int; 
  char v5; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v9; 
  const char *NameForType; 
  const char *v11; 
  scr_string_t ConstString; 
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned int i; 
  int v17; 
  unsigned int NumHits; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v21; 
  int v22; 
  unsigned int AABBQueryHitBodyId; 
  int Ref; 
  signed int EntityNum; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v28; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v31; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *v37; 
  ntl::red_black_tree_node_base *v38; 
  bool HasHit; 
  hkMemoryAllocator *v40; 
  hkMemoryAllocator *v41; 
  VariableType failureType[4]; 
  unsigned int count; 
  unsigned int failureIndex; 
  unsigned int v45; 
  hkMonitorStream *v46; 
  scrContext_t *v47; 
  Physics_AABBQueryExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v49; 
  __m256i v50; 
  __int64 v51; 
  __int64 v52; 
  hkMonitorStream *v53; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<int>,int *,int &> result; 
  vec3_t max; 
  vec3_t vectorValue; 
  ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int> > v57; 
  unsigned int buffer[128]; 

  v52 = -2i64;
  v2 = scrContext;
  v47 = scrContext;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4945, v2, "Physics_AABBQuery: Parameter 0 aabbMin must be the aabb min vector - see usage");
  Scr_GetVector(v2, 0, &vectorValue);
  v3 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  if ( Scr_GetType(v2, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4946, v2, "Physics_AABBQuery: Parameter 1 aabbMax must be the aabb max vector - see usage");
  Scr_GetVector(v2, 1u, &max);
  if ( Scr_GetType(v2, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4947, v2, "Physics_AABBQuery: Parameter 2 contents must be the contents - see usage");
  Int = Scr_GetInt(v2, 2u);
  if ( !Int )
    Scr_Error(COM_ERR_4948, v2, "Physics_AABBQuery: Parameter 2 contents must be non 0");
  v5 = 0;
  entnum = 0;
  if ( Scr_GetType(v2, 3u) )
  {
    if ( Scr_GetPointerType(v2, 3u) == VAR_ENTITY )
    {
      count = 1;
      entnum = Scr_GetEntityRef(v2, 3u).entnum;
      v5 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(v2, 3u) != VAR_ARRAY )
        Scr_Error(COM_ERR_4949, v2, "Physics_AABBQuery: Parameter 3 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(v2, 3u);
      ArraySize = GetArraySize(v2, ArrayObject);
      count = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v9 = j_va("Physics_AABBQuery: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_4950, v2, 0, v9);
      }
      if ( !Scr_GetEntityArray(v2, ArrayObject, 0x80u, buffer, &count, &failureIndex, failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v11 = j_va("Physics_AABBQuery: element %i of ignore array: type %s is not an entity", failureIndex, NameForType);
        Scr_ParamError(COM_ERR_4951, v2, 0, v11);
      }
    }
  }
  else
  {
    count = 0;
  }
  if ( Scr_GetType(v2, 4u) != VAR_STRING )
    Scr_Error(COM_ERR_4952, v2, "Physics_AABBQuery: Parameter 4 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(v2, 4u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v3 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    Scr_Error(COM_ERR_4954, v2, "Physics_AABBQuery: Parameter 4 collectionType is closest - there isn't a real concept of closest for aabb overlapping");
  }
  else
  {
    v3 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v3 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  v46 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_AABBQuery");
  v53 = v14;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v3);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1852, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v49, count, 0);
  if ( v5 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v49, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0; i < count; ++i )
    {
      v17 = Scr_GetEntityIdRef(v2, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v49, i, v17, 1, 0, 0, 0, 0);
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+1780h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.contents = Int;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v49;
  Physics_AABBQuery(PHYSICS_WORLD_ID_FIRST, &vectorValue, &max, &extendedData, CollisionQueryResult);
  if ( v3 )
  {
    if ( v3 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL )
    {
      HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
      NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
      v45 = NumHits;
      p_m_freelist = &v57.m_freelist;
      v21 = &v57.m_data.m_buffer[5080];
      do
      {
        *(_QWORD *)v21 = p_m_freelist;
        p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v21;
        v21 -= 40;
      }
      while ( v21 + 40 > (char *)&v57 );
      v57.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
      if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      v57.m_size = 0i64;
      v57.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
      v57.m_endNodeBase.mp_parent = NULL;
      v57.m_endNodeBase.mp_left = &v57.m_endNodeBase;
      v57.m_endNodeBase.mp_right = &v57.m_endNodeBase;
      v22 = 0;
      if ( NumHits )
      {
        while ( 1 )
        {
          AABBQueryHitBodyId = HavokPhysics_CollisionQueryResult::GetAABBQueryHitBodyId(CollisionQueryResult, v22);
          Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, AABBQueryHitBodyId);
          EntityNum = Physics_GetEntityNum(Ref);
          failureIndex = EntityNum;
          p_m_endNodeBase = &v57.m_endNodeBase;
          mp_parent = v57.m_endNodeBase.mp_parent;
          v28 = 1;
          while ( mp_parent )
          {
            p_m_endNodeBase = mp_parent;
            v28 = EntityNum < mp_parent[1].m_color;
            if ( EntityNum >= mp_parent[1].m_color )
              mp_parent = mp_parent->mp_right;
            else
              mp_parent = mp_parent->mp_left;
          }
          mp_left = p_m_endNodeBase;
          if ( !v28 )
            goto LABEL_64;
          if ( p_m_endNodeBase != v57.m_endNodeBase.mp_left )
            break;
          ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int>>::insert_node(&v57, &result, p_m_endNodeBase, (const int *)&failureIndex, 1, 0);
LABEL_89:
          if ( ++v22 >= v45 )
          {
            v14 = v46;
            v2 = v47;
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
                v31 = mp_left;
                mp_left = mp_left->mp_parent;
              }
              while ( v31 == mp_left->mp_left );
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
          if ( !v57.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !v57.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<40> *)v57.m_freelist.m_head.mp_next == &v57.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 0x80ui64) )
            __debugbreak();
          _RCX = v57.m_freelist.m_head.mp_next;
          v57.m_freelist.m_head.mp_next = v57.m_freelist.m_head.mp_next->mp_next;
          v50.m256i_i32[0] = 0;
          v50.m256i_i64[1] = (__int64)p_m_endNodeBase;
          __asm
          {
            vpxor   xmm0, xmm0, xmm0
            vmovdqu xmmword ptr [rbp+1680h+var_16D0+10h], xmm0
          }
          LODWORD(v51) = EntityNum;
          __asm
          {
            vmovups ymm0, [rbp+1680h+var_16D0]
            vmovups ymmword ptr [rcx], ymm0
            vmovsd  xmm1, [rbp+1680h+var_16B0]
            vmovsd  qword ptr [rcx+20h], xmm1
          }
          if ( p_m_endNodeBase == &v57.m_endNodeBase )
          {
            v57.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
            v57.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)_RCX;
            v57.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)_RCX;
          }
          else if ( EntityNum >= p_m_endNodeBase[1].m_color )
          {
            p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)_RCX;
            mp_right = v57.m_endNodeBase.mp_right;
            if ( p_m_endNodeBase == v57.m_endNodeBase.mp_right )
              mp_right = (ntl::red_black_tree_node_base *)_RCX;
            v57.m_endNodeBase.mp_right = mp_right;
          }
          else
          {
            p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)_RCX;
            if ( p_m_endNodeBase == v57.m_endNodeBase.mp_left )
              v57.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)_RCX;
          }
          ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)_RCX, &v57.m_endNodeBase.mp_parent);
          ++v57.m_size;
        }
        goto LABEL_89;
      }
LABEL_91:
      Scr_MakeArray(v2);
      next = v57.m_endNodeBase.mp_left;
      if ( v57.m_endNodeBase.mp_left != &v57.m_endNodeBase )
      {
        do
        {
          if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          Scr_AddEntityNum(v2, next[1].m_color, ENTITY_CLASS_GENTITY);
          Scr_AddArray(v2);
          next = ntl::red_black_tree_node_base::get_next(next);
        }
        while ( next != &v57.m_endNodeBase );
        v14 = v46;
      }
      if ( v57.m_size )
      {
        v37 = v57.m_endNodeBase.mp_parent;
        if ( v57.m_endNodeBase.mp_parent )
        {
          do
          {
            ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int>>::erase_tree(&v57, (ntl::red_black_tree_node<int> *)v37->mp_right);
            v38 = v37->mp_left;
            *(_QWORD *)&v37->m_color = v57.m_freelist.m_head.mp_next;
            v57.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v37;
            v37 = v38;
          }
          while ( v38 );
        }
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(v2, HasHit);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v40 = hkMemHeapAllocator();
  v49.m_ignoreBodies.m_size = 0;
  if ( v49.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v40, v49.m_ignoreBodies.m_data, 4, v49.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v49.m_ignoreBodies.m_data = NULL;
  v49.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v41 = hkMemHeapAllocator();
  v49.m_ignoreEntities.m_size = 0;
  if ( v49.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v41, v49.m_ignoreEntities.m_data, 8, v49.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v49.m_ignoreEntities.m_data = NULL;
  v49.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
}

/*
==============
PhysicsScript_Raycast
==============
*/

void __fastcall PhysicsScript_Raycast(scrContext_t *scrContext, __int64 a2, double _XMM2_8)
{
  scrContext_t *v6; 
  int Int; 
  char v8; 
  scr_entref_t EntityRef; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v12; 
  const char *NameForType; 
  const char *v14; 
  bool v15; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v17; 
  hkMonitorStream *Value; 
  hkMonitorStream *v19; 
  Physics_WorldId v20; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  __int64 i; 
  int entnum; 
  VariableType v25; 
  unsigned __int8 *WeaponPriorityMap; 
  int v27; 
  HavokPhysics_CollisionQueryResult *v28; 
  int NumHits; 
  int v31; 
  Physics_WorldId v32; 
  int v33; 
  int ClosestPointHitRef; 
  __int32 v35; 
  int v36; 
  int v37; 
  int v38; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  scr_string_t scriptable; 
  const Physics_DetailHitData *DetailHitData; 
  scr_string_t partName; 
  const char *RigidBodyName; 
  int v47; 
  int EntityNum; 
  Physics_RefSystem v49; 
  scr_string_t hittype; 
  const Physics_DetailHitData *v53; 
  scr_string_t String; 
  const char *v55; 
  bool HasHit; 
  hkMemoryAllocator *v57; 
  hkMemoryAllocator *v58; 
  VariableType failureType[4]; 
  int svEntNum; 
  Physics_WorldId worldId[2]; 
  unsigned int bodyId[2]; 
  hkMonitorStream *v65; 
  HavokPhysics_IgnoreBodies v66; 
  Physics_RaycastExtendedData extendedData; 
  Physics_QueryPointExtendedData v68; 
  __int64 v69; 
  hkMonitorStream *v70; 
  vec3_t vectorValue; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t end; 
  unsigned int buffer[128]; 
  char v76; 
  void *retaddr; 

  _RAX = &retaddr;
  v69 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v6 = scrContext;
  *(_QWORD *)bodyId = scrContext;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4955, v6, "Physics_Raycast: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(v6, 0, &vectorValue);
  if ( Scr_GetType(v6, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4956, v6, "Physics_Raycast: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(v6, 1u, &end);
  if ( Scr_GetType(v6, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4957, v6, "Physics_Raycast: Parameter 2 contents must be the contents - see usage");
  Int = Scr_GetInt(v6, 2u);
  if ( !Int )
    Scr_Error(COM_ERR_4958, v6, "Physics_Raycast: Parameter 2 contents must be non 0");
  v8 = 0;
  svEntNum = 0;
  if ( Scr_GetType(v6, 3u) )
  {
    if ( Scr_GetPointerType(v6, 3u) == VAR_ENTITY )
    {
      EntityRef = Scr_GetEntityRef(v6, 3u);
      if ( EntityRef.entclass )
      {
        worldId[0] = PHYSICS_WORLD_ID_FIRST;
        Scr_Error(COM_ERR_6147, v6, "Physics_Raycast: Parameter 3 must be an entity.");
      }
      else
      {
        worldId[0] = PHYSICS_WORLD_ID_SERVER_DETAIL;
        svEntNum = EntityRef.entnum;
        v8 = 1;
      }
    }
    else
    {
      if ( Scr_GetPointerType(v6, 3u) != VAR_ARRAY )
        Scr_Error(COM_ERR_4959, v6, "Physics_Raycast: Parameter 3 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(v6, 3u);
      ArraySize = GetArraySize(v6, ArrayObject);
      worldId[0] = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v12 = j_va("Physics_Raycast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_4960, v6, 0, v12);
      }
      if ( !Scr_GetEntityArray(v6, ArrayObject, 0x80u, buffer, (unsigned int *)worldId, (unsigned int *)&worldId[1], failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v14 = j_va("Physics_Raycast: element %i of ignore array: type %s is not an entity", (unsigned int)worldId[1], NameForType);
        Scr_ParamError(COM_ERR_4961, v6, 0, v14);
      }
    }
  }
  else
  {
    worldId[0] = PHYSICS_WORLD_ID_FIRST;
  }
  if ( Scr_GetType(v6, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4962, v6, "Physics_Raycast: Parameter 4 detail must be the detail flag - see usage");
  v15 = Scr_GetInt(v6, 4u) != 0;
  failureType[2] = v15;
  if ( Scr_GetType(v6, 5u) != VAR_STRING )
    Scr_Error(COM_ERR_4963, v6, "Physics_Raycast: Parameter 5 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(v6, 5u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v17 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v17 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v17 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v17 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  failureType[0] = VAR_UNDEFINED;
  if ( Scr_GetNumParam(v6) >= 7 )
  {
    if ( Scr_GetType(v6, 6u) != VAR_INTEGER )
      Scr_Error(COM_ERR_4965, v6, "Physics_Raycast: Parameter 6 'ignoreClutter', if provided, must be a flag indicating whether to ignore entities marked as clutter - see usage");
    failureType[0] = Scr_GetInt(v6, 6u) != 0;
  }
  failureType[1] = VAR_UNDEFINED;
  if ( Scr_GetNumParam(v6) >= 8 )
  {
    if ( Scr_GetType(v6, 7u) != VAR_INTEGER && Scr_GetType(v6, 7u) )
      Scr_Error(COM_ERR_6591, v6, "Physics_Raycast: Parameter 7 'allowScriptables', if provided, must be a flag indicating whether to allow scriptables - see usage");
    if ( Scr_GetType(v6, 7u) == VAR_INTEGER )
      failureType[1] = Scr_GetInt(v6, 7u) != 0;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v19 = Value;
  v65 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_Raycast");
  v70 = v19;
  v20 = v15;
  worldId[1] = v15;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult((Physics_WorldId)v15, v17);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 2068, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v66, worldId[0], 0);
  if ( v8 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v66, 0, svEntNum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < worldId[0]; i = (unsigned int)(i + 1) )
    {
      entnum = Scr_GetEntityIdRef(v6, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v66, i, entnum, 1, 0, 0, 0, 0);
    }
  }
  HavokPhysics_IgnoreBodies::SetIsClutter(&v66, failureType[0]);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rbp+270h+extendedData.collisionBuffer], xmm6
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = Int;
  extendedData.ignoreBodies = &v66;
  v25 = failureType[2];
  if ( failureType[2] )
  {
    WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    Physics_AddDetailTrace(CollisionQueryResult, WeaponPriorityMap);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
  }
  Physics_Raycast(v20, &vectorValue, &end, &extendedData, CollisionQueryResult);
  if ( v25 )
  {
    v27 = Int & 0x2004000;
    if ( v27 )
    {
      v68.simplify = 0;
      __asm { vmovss  [rbp+270h+var_2B0.collisionBuffer], xmm6 }
      v68.phaseSelection = All;
      v68.contents = v27;
      v68.ignoreBodies = &v66;
      v68.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
      v28 = Physics_AllocateCollisionQueryResult(v20, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL);
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 2109, ASSERT_TYPE_ASSERT, "(allResult)", (const char *)&queryFormat, "allResult") )
        __debugbreak();
      __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
      Physics_QueryPoint(worldId[1], &vectorValue, *(float *)&_XMM2, &v68, v28);
      NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v28);
      v31 = 0;
      if ( NumHits > 0 )
      {
        v32 = worldId[1];
        v33 = NumHits;
        do
        {
          if ( !HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) || (ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(v28, v31), HavokPhysics_CollisionQueryResult::GetRaycastHitRef(CollisionQueryResult, 0) != ClosestPointHitRef) )
            HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(CollisionQueryResult, v32, v28, v31, &vectorValue, &end, &extendedData);
          ++v31;
        }
        while ( v31 < v33 );
        v19 = v65;
        v6 = *(scrContext_t **)bodyId;
      }
      Physics_FreeCollisionQueryResult(v28);
      v20 = worldId[1];
    }
  }
  if ( v17 )
  {
    v35 = v17 - 1;
    if ( v35 )
    {
      if ( v35 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        v36 = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(v6);
        v37 = 0;
        if ( v36 > 0 )
        {
          v38 = v36;
          do
          {
            bodyId[0] = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(CollisionQueryResult, v37);
            Ref = Physics_GetRef(v20, bodyId[0]);
            svEntNum = Physics_GetEntityNum(Ref);
            RefSystem = Physics_GetRefSystem(Ref);
            HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(CollisionQueryResult, v37, &pos);
            HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(CollisionQueryResult, v37, &normal);
            *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(CollisionQueryResult, v37);
            __asm { vmovaps xmm6, xmm0 }
            worldId[1] = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(CollisionQueryResult, v37);
            Scr_MakeArray(v6);
            if ( svEntNum == 2046 )
            {
              if ( RefSystem == Physics_RefSystem_Scriptable && failureType[1] )
              {
                Scr_AddConstString(v6, scr_const.hittype_scriptable);
                Scr_AddArrayStringIndexed(v6, scr_const.hittype);
                Scr_AddEntityNum(v6, Ref & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
                scriptable = scr_const.scriptable;
              }
              else
              {
                Scr_AddConstString(v6, scr_const.hittype_world);
                scriptable = scr_const.hittype;
              }
            }
            else
            {
              Scr_AddConstString(v6, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(v6, scr_const.hittype);
              Scr_AddEntityNum(v6, svEntNum, ENTITY_CLASS_GENTITY);
              scriptable = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(v6, scriptable);
            Scr_AddVector(v6, pos.v);
            Scr_AddArrayStringIndexed(v6, scr_const.position);
            Scr_AddVector(v6, normal.v);
            Scr_AddArrayStringIndexed(v6, scr_const.normal);
            __asm { vmovaps xmm1, xmm6; value }
            Scr_AddFloat(v6, *(float *)&_XMM1);
            Scr_AddArrayStringIndexed(v6, scr_const.fraction);
            Scr_AddInt(v6, worldId[1]);
            Scr_AddArrayStringIndexed(v6, scr_const.surfaceflags);
            if ( failureType[2] )
            {
              DetailHitData = Physics_GetDetailHitData(CollisionQueryResult, 0, v37);
              if ( DetailHitData && DetailHitData->isValid )
              {
                partName = DetailHitData->partName;
              }
              else
              {
                RigidBodyName = Physics_GetRigidBodyName(v20, bodyId[0]);
                partName = SL_FindString(RigidBodyName);
              }
              if ( partName )
              {
                Scr_AddConstString(v6, partName);
                Scr_AddArrayStringIndexed(v6, scr_const.partName);
              }
            }
            Scr_AddArray(v6);
            ++v37;
          }
          while ( v37 < v38 );
          v19 = v65;
        }
      }
    }
    else
    {
      Scr_MakeArray(v6);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        svEntNum = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(CollisionQueryResult, 0);
        v47 = Physics_GetRef(v20, svEntNum);
        EntityNum = Physics_GetEntityNum(v47);
        v49 = Physics_GetRefSystem(v47);
        HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(CollisionQueryResult, 0, &pos);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(CollisionQueryResult, 0);
        __asm { vmovaps xmm6, xmm0 }
        bodyId[0] = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(v6);
        if ( EntityNum == 2046 )
        {
          if ( v49 == Physics_RefSystem_Scriptable && failureType[1] )
          {
            Scr_AddConstString(v6, scr_const.hittype_scriptable);
            Scr_AddArrayStringIndexed(v6, scr_const.hittype);
            Scr_AddEntityNum(v6, v47 & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
            hittype = scr_const.scriptable;
          }
          else
          {
            Scr_AddConstString(v6, scr_const.hittype_world);
            hittype = scr_const.hittype;
          }
        }
        else
        {
          Scr_AddConstString(v6, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(v6, scr_const.hittype);
          Scr_AddEntityNum(v6, EntityNum, ENTITY_CLASS_GENTITY);
          hittype = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(v6, hittype);
        Scr_AddVector(v6, normal.v);
        Scr_AddArrayStringIndexed(v6, scr_const.position);
        Scr_AddVector(v6, pos.v);
        Scr_AddArrayStringIndexed(v6, scr_const.normal);
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(v6, *(float *)&_XMM1);
        Scr_AddArrayStringIndexed(v6, scr_const.fraction);
        Scr_AddInt(v6, bodyId[0]);
        Scr_AddArrayStringIndexed(v6, scr_const.surfaceflags);
        if ( failureType[2] )
        {
          v53 = Physics_GetDetailHitData(CollisionQueryResult, 0, 0);
          if ( v53 && v53->isValid )
          {
            String = v53->partName;
          }
          else
          {
            v55 = Physics_GetRigidBodyName(v20, svEntNum);
            String = SL_FindString(v55);
          }
          if ( String )
          {
            Scr_AddConstString(v6, String);
            Scr_AddArrayStringIndexed(v6, scr_const.partName);
          }
        }
        Scr_AddArray(v6);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(v6, HasHit);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v57 = hkMemHeapAllocator();
  v66.m_ignoreBodies.m_size = 0;
  if ( v66.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v57, v66.m_ignoreBodies.m_data, 4, v66.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v66.m_ignoreBodies.m_data = NULL;
  v66.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v58 = hkMemHeapAllocator();
  v66.m_ignoreEntities.m_size = 0;
  if ( v66.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v58, v66.m_ignoreEntities.m_data, 8, v66.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v66.m_ignoreEntities.m_data = NULL;
  v66.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v19 )
    hkMonitorStream::timerEnd(v19, "Et");
  _R11 = &v76;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
PhysicsScript_RaycastEnts
==============
*/
void PhysicsScript_RaycastEnts(scrContext_t *scrContext)
{
  int Int; 
  __int64 v6; 
  unsigned int entnum; 
  char v8; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v11; 
  const char *NameForType; 
  const char *v13; 
  Physics_WorldId v14; 
  scr_string_t ConstString; 
  hkMonitorStream *Value; 
  hkMonitorStream *v17; 
  unsigned __int8 *WeaponPriorityMap; 
  __int64 v20; 
  const gentity_s *v21; 
  unsigned int DetailPhysicsInstanceId; 
  unsigned int v23; 
  unsigned int v24; 
  const char *v25; 
  unsigned int NumRigidBodys; 
  unsigned int v27; 
  Physics_WorldId v28; 
  unsigned int m_serialAndIndex; 
  const char *v30; 
  int NumHits; 
  HavokPhysics_CollisionQueryResult *v32; 
  unsigned int v33; 
  int v34; 
  int v35; 
  int v37; 
  scr_string_t entity; 
  __int64 v39; 
  unsigned int v40; 
  gentity_s *v41; 
  entityType_s eType; 
  unsigned int Instance; 
  unsigned int v44; 
  const char *v45; 
  unsigned int i; 
  unsigned int v47; 
  const char *v48; 
  int v50; 
  const Physics_DetailHitData *v51; 
  scr_string_t String; 
  const char *v53; 
  HavokPhysics_CollisionQueryResult *v54; 
  unsigned int RaycastHitBodyId; 
  int Ref; 
  int EntityNum; 
  int RaycastHitSurfFlags; 
  scr_string_t hittype; 
  const Physics_DetailHitData *DetailHitData; 
  scr_string_t partName; 
  const char *RigidBodyName; 
  bool HasHit; 
  VariableType *failureType; 
  VariableType v69[4]; 
  Physics_WorldId worldId; 
  unsigned int count[2]; 
  HavokPhysics_CollisionQueryResult *result; 
  Physics_CollisionQueryCollectionType type[2]; 
  int hitIndex[2]; 
  hkMonitorStream *v75; 
  Physics_RaycastExtendedData extendedData; 
  hknpBodyId v77; 
  __int64 v78; 
  hkMonitorStream *v79; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t end; 
  vec3_t vectorValue; 
  unsigned int buffer[128]; 
  char v85; 
  void *retaddr; 

  _RAX = &retaddr;
  v78 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
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
  LODWORD(v6) = 0;
  *(_QWORD *)hitIndex = 0i64;
  entnum = 0;
  count[0] = 0;
  v8 = 0;
  if ( Scr_GetType(scrContext, 3u) )
  {
    if ( Scr_GetPointerType(scrContext, 3u) == VAR_ENTITY )
    {
      count[0] = 1;
      entnum = Scr_GetEntityRef(scrContext, 3u).entnum;
      v8 = 1;
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
        v11 = j_va("Physics_RaycastEnts: entity array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_4972, scrContext, 0, v11);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, count, (unsigned int *)&worldId, v69) )
      {
        NameForType = Scr_GetNameForType(v69[0]);
        v13 = j_va("Physics_RaycastEnts: element %i of entities array: type %s is not an entity", (unsigned int)worldId, NameForType);
        Scr_ParamError(COM_ERR_4973, scrContext, 0, v13);
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_4970, scrContext, "Physics_RaycastEnts: Parameter 3 must contain some entities");
  }
  if ( Scr_GetType(scrContext, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4974, scrContext, "Physics_RaycastEnts: Parameter 4 detail must be the detail flag - see usage");
  LOBYTE(v14) = Scr_GetInt(scrContext, 4u) != 0;
  v69[0] = v14;
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
    v14 = PHYSICS_WORLD_ID_INVALID;
    if ( ConstString == scr_const.physicsquery_all )
      v14 = PHYSICS_WORLD_ID_CLIENT_FIRST;
    type[0] = v14;
    SLOBYTE(v14) = v69[0];
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v17 = Value;
  v75 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_RaycastEnts");
  v79 = v17;
  v14 = (unsigned __int8)v14;
  worldId = v14;
  result = Physics_AllocateCollisionQueryResult((Physics_WorldId)(unsigned __int8)v14, type[0]);
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 2404, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+230h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = Int;
  if ( v69[0] )
  {
    WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    Physics_AddDetailTrace(result, WeaponPriorityMap);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
  }
  if ( v8 )
  {
    v20 = truncate_cast<unsigned short,unsigned int>(entnum);
    v21 = &g_entities[v20];
    if ( BG_IsCharacterOrFakeActorEntity(&v21->s) )
    {
      if ( v69[0] )
        DetailPhysicsInstanceId = G_PhysicsCharacterProxy_GetDetailPhysicsInstanceId(v21);
      else
        DetailPhysicsInstanceId = G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId(v21);
      v23 = (unsigned __int16)v20;
    }
    else
    {
      v23 = (unsigned __int16)v20;
      DetailPhysicsInstanceId = G_PhysicsObject_GetInstance((Physics_WorldId)(unsigned __int8)v14, (unsigned __int16)v20);
    }
    v24 = DetailPhysicsInstanceId;
    if ( DetailPhysicsInstanceId == -1 )
    {
      v25 = j_va("Physics_RaycastEnts: Entity %i does not have physics", v23);
      Scr_Error(COM_ERR_4977, scrContext, v25);
    }
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)(unsigned __int8)v14, v24);
    v27 = 0;
    if ( NumRigidBodys )
    {
      v28 = worldId;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v24 == -1 )
        {
          LODWORD(failureType) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", failureType) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(failureType) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", failureType) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID((hknpBodyId *)&type[1], v28, v24, v27)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          v30 = j_va("Physics_RaycastEnts: Entity %i has invalid rigid body %i(%i)", v23, v27, m_serialAndIndex);
          Scr_Error(COM_ERR_4978, scrContext, v30);
        }
        Physics_Raycast(v28, m_serialAndIndex, &vectorValue, &end, &extendedData, result);
        ++v27;
      }
      while ( v27 < NumRigidBodys );
      v17 = v75;
    }
    LODWORD(v6) = 0;
    v14 = worldId;
  }
  else
  {
    v39 = 0i64;
    worldId = PHYSICS_WORLD_ID_FIRST;
    if ( count[0] )
    {
      do
      {
        v40 = Scr_GetEntityIdRef(scrContext, buffer[v39]).entnum;
        v41 = &g_entities[v40];
        if ( !v41 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1942, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
        }
        eType = v41->s.eType;
        if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && (eType != ET_SCRIPTMOVER || v41->s.un.scriptMoverType != 1) )
        {
          Instance = G_PhysicsObject_GetInstance((Physics_WorldId)(unsigned __int8)v14, v40);
        }
        else if ( v69[0] )
        {
          Instance = G_PhysicsCharacterProxy_GetDetailPhysicsInstanceId(v41);
        }
        else
        {
          Instance = G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId(v41);
        }
        v44 = Instance;
        if ( Instance == -1 )
        {
          v45 = j_va("Physics_RaycastEnts: Entity %i does not have physics", v40);
          Scr_Error(COM_ERR_4979, scrContext, v45);
        }
        type[1] = Physics_GetNumRigidBodys((const Physics_WorldId)(unsigned __int8)v14, v44);
        for ( i = 0; i < type[1]; ++i )
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( v44 == -1 )
          {
            LODWORD(failureType) = (unsigned __int8)v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", failureType) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(failureType) = (unsigned __int8)v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", failureType) )
              __debugbreak();
          }
          v47 = HavokPhysics_GetRigidBodyID(&v77, (const Physics_WorldId)(unsigned __int8)v14, v44, i)->m_serialAndIndex;
          if ( (v47 & 0xFFFFFF) == 0xFFFFFF )
          {
            v48 = j_va("Physics_RaycastEnts: Entity %i has invalid rigid body %i(%i)", v40, i, v47);
            Scr_Error(COM_ERR_4980, scrContext, v48);
          }
          Physics_Raycast((Physics_WorldId)(unsigned __int8)v14, v47, &vectorValue, &end, &extendedData, result);
        }
        v39 = (unsigned int)(worldId + 1);
        worldId = (int)v39;
      }
      while ( (unsigned int)v39 < count[0] );
      v17 = v75;
    }
  }
  if ( type[0] )
  {
    if ( type[0] == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST )
    {
      Scr_MakeArray(scrContext);
      v54 = result;
      if ( HavokPhysics_CollisionQueryResult::HasHit(result) )
      {
        RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(v54, 0);
        Ref = Physics_GetRef(v14, RaycastHitBodyId);
        EntityNum = Physics_GetEntityNum(Ref);
        HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(v54, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(v54, 0, &pos);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(v54, 0);
        __asm { vmovaps xmm6, xmm0 }
        RaycastHitSurfFlags = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(v54, 0);
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
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(scrContext, *(float *)&_XMM1);
        Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
        Scr_AddInt(scrContext, RaycastHitSurfFlags);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        if ( v69[0] )
        {
          DetailHitData = Physics_GetDetailHitData(v54, 0, 0);
          if ( DetailHitData && DetailHitData->isValid )
          {
            partName = DetailHitData->partName;
          }
          else
          {
            RigidBodyName = Physics_GetRigidBodyName(v14, RaycastHitBodyId);
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
          v32 = result;
          do
          {
            v33 = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(v32, v6);
            v34 = Physics_GetRef(v14, v33);
            v35 = Physics_GetEntityNum(v34);
            HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(v32, v6, &pos);
            HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(v32, v6, &normal);
            *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(v32, v6);
            __asm { vmovaps xmm6, xmm0 }
            v37 = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(v32, v6);
            Scr_MakeArray(scrContext);
            if ( v35 == 2046 )
            {
              Scr_AddConstString(scrContext, scr_const.hittype_world);
              entity = scr_const.hittype;
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, v35, ENTITY_CLASS_GENTITY);
              entity = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(scrContext, entity);
            Scr_AddVector(scrContext, pos.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.position);
            Scr_AddVector(scrContext, normal.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
            __asm { vmovaps xmm1, xmm6; value }
            Scr_AddFloat(scrContext, *(float *)&_XMM1);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, v37);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            v50 = hitIndex[0];
            if ( v69[0] )
            {
              v51 = Physics_GetDetailHitData(v32, 0, hitIndex[0]);
              if ( v51 && v51->isValid )
              {
                String = v51->partName;
              }
              else
              {
                v53 = Physics_GetRigidBodyName(v14, v33);
                String = SL_FindString(v53);
              }
              if ( String )
              {
                Scr_AddConstString(scrContext, String);
                Scr_AddArrayStringIndexed(scrContext, scr_const.partName);
              }
            }
            Scr_AddArray(scrContext);
            v6 = (unsigned int)(v50 + 1);
            *(_QWORD *)hitIndex = v6;
          }
          while ( (int)v6 < NumHits );
          v17 = v75;
        }
      }
      v54 = result;
    }
  }
  else
  {
    v54 = result;
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(result);
    Scr_AddBool(scrContext, HasHit);
  }
  Physics_FreeCollisionQueryResult(v54);
  if ( v17 )
    hkMonitorStream::timerEnd(v17, "Et");
  _R11 = &v85;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
PhysicsScript_Spherecast
==============
*/
void PhysicsScript_Spherecast(scrContext_t *scrContext)
{
  int v6; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v9; 
  const char *NameForType; 
  const char *v11; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v13; 
  Physics_CollisionQueryCollectionType v14; 
  scr_string_t v15; 
  bool v16; 
  hkMonitorStream *v17; 
  hkMonitorStream *v18; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  __int64 i; 
  int v22; 
  HavokPhysics_CollisionQueryResult *v25; 
  __int32 v26; 
  int NumHits; 
  int v28; 
  HavokPhysics_CollisionQueryResult *v29; 
  int v30; 
  unsigned int ShapecastHitBodyId; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  scr_string_t scriptable; 
  unsigned int v48; 
  int v49; 
  Physics_RefSystem v62; 
  scr_string_t hittype; 
  bool HasHit; 
  __int32 v66; 
  int v67; 
  int v68; 
  int v69; 
  unsigned int ClosestPointHitBodyId; 
  int v71; 
  int EntityNum; 
  Physics_RefSystem v74; 
  scr_string_t entity; 
  unsigned int v77; 
  int v78; 
  int v79; 
  int ClosestPointHitHitSurfFlags; 
  Physics_RefSystem v82; 
  scr_string_t v83; 
  bool v85; 
  hkMemoryAllocator *v86; 
  hkMemoryAllocator *v87; 
  char v90; 
  int entnum; 
  unsigned int entnuma; 
  int entnumb; 
  unsigned int entnumc; 
  VariableType count[8]; 
  hknpShape *shape; 
  HavokPhysics_CollisionQueryResult *result; 
  HavokPhysics_CollisionQueryResult *v98; 
  hkMonitorStream *v99; 
  HavokPhysics_IgnoreBodies v100; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v102; 
  hkMonitorStream *v103; 
  vec3_t vectorValue; 
  vec3_t end; 
  float value; 
  vec3_t normal; 
  vec3_t v110; 
  vec3_t pos; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 
  char v114; 
  void *retaddr; 

  _RAX = &retaddr;
  v102 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4981, scrContext, "Physics_Spherecast: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4982, scrContext, "Physics_Spherecast: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(scrContext, 1u, &end);
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4983, scrContext, "Physics_Spherecast: Parameter 2 radius must be the radius - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm { vmovaps xmm6, xmm0 }
  if ( Scr_GetType(scrContext, 3u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4984, scrContext, "Physics_Spherecast: Parameter 3 contents must be the contents - see usage");
  entnum = Scr_GetInt(scrContext, 3u);
  if ( !entnum )
    Scr_Error(COM_ERR_4985, scrContext, "Physics_Spherecast: Parameter 3 contents must be non 0");
  v90 = 0;
  v6 = 0;
  if ( Scr_GetType(scrContext, 4u) )
  {
    if ( Scr_GetPointerType(scrContext, 4u) == VAR_ENTITY )
    {
      *(_DWORD *)&count[4] = 1;
      v6 = Scr_GetEntityRef(scrContext, 4u).entnum;
      v90 = 1;
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
        v9 = j_va("Physics_Spherecast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_4987, scrContext, 0, v9);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, (unsigned int *)&count[4], (unsigned int *)&shape, count) )
      {
        NameForType = Scr_GetNameForType(count[0]);
        v11 = j_va("Physics_Spherecast: element %i of ignore array: type %s is not an entity", (unsigned int)shape, NameForType);
        Scr_ParamError(COM_ERR_4988, scrContext, 0, v11);
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
  v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
  if ( ConstString == scr_const.physicsquery_any )
  {
    v14 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v14 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v14 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v14 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  if ( Scr_GetNumParam(scrContext) >= 7 )
  {
    if ( Scr_GetType(scrContext, 6u) != VAR_STRING && Scr_GetType(scrContext, 6u) )
      Scr_Error(COM_ERR_4991, scrContext, "Physics_Spherecast: Parameter 6 startCollectionType must be the startCollectionType - see usage");
    if ( Scr_GetType(scrContext, 6u) == VAR_STRING )
    {
      v15 = Scr_GetConstString(scrContext, 6u);
      if ( v15 == scr_const.physicsquery_any )
      {
        v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
      }
      else if ( v15 == scr_const.physicsquery_closest )
      {
        v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
      }
      else if ( v15 == scr_const.physicsquery_all )
      {
        v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
      }
    }
  }
  v16 = 0;
  if ( Scr_GetNumParam(scrContext) >= 8 )
  {
    if ( Scr_GetType(scrContext, 7u) != VAR_INTEGER && Scr_GetType(scrContext, 7u) )
      Scr_Error(COM_ERR_6592, scrContext, "Physics_Spherecast: Parameter 7 'allowScriptables', if provided, must be a flag indicating whether to allow scriptables - see usage");
    if ( Scr_GetType(scrContext, 7u) == VAR_INTEGER )
      v16 = Scr_GetInt(scrContext, 7u) != 0;
  }
  v17 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v18 = v17;
  v99 = v17;
  if ( v17 )
    hkMonitorStream::timerBegin(v17, "TtPhysics_Spherecast");
  v103 = v18;
  result = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v14);
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 2786, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( v13 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN )
    CollisionQueryResult = NULL;
  else
    CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v13);
  v98 = CollisionQueryResult;
  __asm { vmovaps xmm1, xmm6; radius }
  shape = Physics_CreateShapeSphere(&vec3_origin, *(float *)&_XMM1, optionalInplaceBuffer, 432);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v100, *(int *)&count[4], 0);
  if ( v90 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v100, 0, v6, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < *(_DWORD *)&count[4]; i = (unsigned int)(i + 1) )
    {
      v22 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v100, i, v22, 1, 0, 0, 0, 0);
    }
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rbp+440h+extendedData.startTolerance], xmm1
    vmovss  xmm0, cs:__real@3c83126f
    vmovss  [rbp+440h+extendedData.accuracy], xmm0
    vmovss  [rbp+440h+extendedData.collisionBuffer], xmm1
    vmovdqu xmmword ptr [rbp+440h+extendedData.nonBrushShape], xmm1
  }
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = entnum;
  extendedData.ignoreBodies = &v100;
  extendedData.simplifyStart = 1;
  v25 = result;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, shape, &vectorValue, &end, &quat_identity, &extendedData, result, CollisionQueryResult);
  if ( CollisionQueryResult )
    Scr_MakeArray(scrContext);
  if ( v14 )
  {
    v26 = v14 - 1;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(v25);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v25);
        Scr_MakeArray(scrContext);
        v28 = 0;
        if ( NumHits > 0 )
        {
          v29 = result;
          v30 = NumHits;
          do
          {
            ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(v29, v28);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ShapecastHitBodyId);
            LODWORD(shape) = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(v29, v28, &pos);
            HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(v29, v28, &normal);
            HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(v29, v28, &v110);
            *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(v29, v28);
            __asm { vmovaps xmm6, xmm0 }
            entnuma = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(v29, v28);
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+440h+end]
              vsubss  xmm2, xmm1, dword ptr [rbp+440h+vectorValue]
              vmulss  xmm3, xmm2, xmm6
              vaddss  xmm4, xmm3, dword ptr [rbp+440h+vectorValue]
              vmovss  [rbp+440h+value], xmm4
              vmovss  xmm1, dword ptr [rbp+440h+end+4]
              vsubss  xmm2, xmm1, dword ptr [rbp+440h+vectorValue+4]
              vmulss  xmm3, xmm2, xmm6
              vaddss  xmm0, xmm3, dword ptr [rbp+440h+vectorValue+4]
              vmovss  [rbp+440h+var_42C], xmm0
              vmovss  xmm1, dword ptr [rbp+440h+end+8]
              vsubss  xmm0, xmm1, dword ptr [rbp+440h+vectorValue+8]
              vmulss  xmm2, xmm0, xmm6
              vaddss  xmm3, xmm2, dword ptr [rbp+440h+vectorValue+8]
              vmovss  [rbp+440h+var_428], xmm3
            }
            Scr_MakeArray(scrContext);
            if ( (_DWORD)shape == 2046 )
            {
              RefSystem = Physics_GetRefSystem(Ref);
              if ( v16 && RefSystem == Physics_RefSystem_Scriptable )
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
            Scr_AddVector(scrContext, v110.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
            __asm { vmovaps xmm1, xmm6; value }
            Scr_AddFloat(scrContext, *(float *)&_XMM1);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, entnuma);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v28;
          }
          while ( v28 < v30 );
          v18 = v99;
          CollisionQueryResult = v98;
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(v25) )
      {
        v48 = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(v25, 0);
        v49 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v48);
        entnumb = Physics_GetEntityNum(v49);
        HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(v25, 0, &v110);
        HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(v25, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(v25, 0, &pos);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(v25, 0);
        __asm { vmovaps xmm6, xmm0 }
        LODWORD(shape) = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(v25, 0);
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+440h+end]
          vsubss  xmm2, xmm1, dword ptr [rbp+440h+vectorValue]
          vmulss  xmm3, xmm2, xmm6
          vaddss  xmm4, xmm3, dword ptr [rbp+440h+vectorValue]
          vmovss  [rbp+440h+value], xmm4
          vmovss  xmm1, dword ptr [rbp+440h+end+4]
          vsubss  xmm2, xmm1, dword ptr [rbp+440h+vectorValue+4]
          vmulss  xmm3, xmm2, xmm6
          vaddss  xmm0, xmm3, dword ptr [rbp+440h+vectorValue+4]
          vmovss  [rbp+440h+var_42C], xmm0
          vmovss  xmm1, dword ptr [rbp+440h+end+8]
          vsubss  xmm0, xmm1, dword ptr [rbp+440h+vectorValue+8]
          vmulss  xmm2, xmm0, xmm6
          vaddss  xmm3, xmm2, dword ptr [rbp+440h+vectorValue+8]
          vmovss  [rbp+440h+var_428], xmm3
        }
        Scr_MakeArray(scrContext);
        if ( entnumb == 2046 )
        {
          v62 = Physics_GetRefSystem(v49);
          if ( v16 && v62 == Physics_RefSystem_Scriptable )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_scriptable);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v49 & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
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
        Scr_AddVector(scrContext, v110.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, &value);
        Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(scrContext, *(float *)&_XMM1);
        Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
        Scr_AddInt(scrContext, (int)shape);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        Scr_AddArray(scrContext);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(v25);
    Scr_AddBool(scrContext, HasHit);
  }
  if ( CollisionQueryResult )
  {
    Scr_AddArray(scrContext);
    if ( v13 )
    {
      v66 = v13 - 1;
      if ( v66 )
      {
        if ( v66 == 1 )
        {
          HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
          v67 = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
          Scr_MakeArray(scrContext);
          v68 = 0;
          if ( v67 > 0 )
          {
            v69 = v67;
            do
            {
              ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, v68);
              v71 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
              EntityNum = Physics_GetEntityNum(v71);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, v68, &v110);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, v68, &normal);
              *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, v68);
              __asm { vmovaps xmm6, xmm0 }
              entnumc = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, v68);
              Scr_MakeArray(scrContext);
              if ( EntityNum == 2046 )
              {
                v74 = Physics_GetRefSystem(v71);
                if ( v16 && v74 == Physics_RefSystem_Scriptable )
                {
                  Scr_AddConstString(scrContext, scr_const.hittype_scriptable);
                  Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                  Scr_AddEntityNum(scrContext, v71 & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
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
              Scr_AddVector(scrContext, v110.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.position);
              Scr_AddVector(scrContext, normal.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
              __asm { vmovaps xmm1, xmm6; value }
              Scr_AddFloat(scrContext, *(float *)&_XMM1);
              Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
              Scr_AddInt(scrContext, entnumc);
              Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
              Scr_AddArray(scrContext);
              ++v68;
            }
            while ( v68 < v69 );
            v18 = v99;
          }
        }
      }
      else
      {
        Scr_MakeArray(scrContext);
        if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
        {
          v77 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
          v78 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v77);
          v79 = Physics_GetEntityNum(v78);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &v110);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &normal);
          *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
          __asm { vmovaps xmm6, xmm0 }
          ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
          Scr_MakeArray(scrContext);
          if ( v79 == 2046 )
          {
            v82 = Physics_GetRefSystem(v78);
            if ( v16 && v82 == Physics_RefSystem_Scriptable )
            {
              Scr_AddConstString(scrContext, scr_const.hittype_scriptable);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, v78 & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
              v83 = scr_const.scriptable;
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_world);
              v83 = scr_const.hittype;
            }
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v79, ENTITY_CLASS_GENTITY);
            v83 = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, v83);
          Scr_AddVector(scrContext, v110.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, normal.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          __asm { vmovaps xmm1, xmm6; value }
          Scr_AddFloat(scrContext, *(float *)&_XMM1);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      v85 = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
      Scr_AddBool(scrContext, v85);
    }
    Scr_AddArray(scrContext);
    Physics_FreeCollisionQueryResult(CollisionQueryResult);
  }
  Physics_FreeCollisionQueryResult(result);
  v86 = hkMemHeapAllocator();
  v100.m_ignoreBodies.m_size = 0;
  if ( v100.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v86, v100.m_ignoreBodies.m_data, 4, v100.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v100.m_ignoreBodies.m_data = NULL;
  v100.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v87 = hkMemHeapAllocator();
  v100.m_ignoreEntities.m_size = 0;
  if ( v100.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v87, v100.m_ignoreEntities.m_data, 8, v100.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v100.m_ignoreEntities.m_data = NULL;
  v100.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v18 )
    hkMonitorStream::timerEnd(v18, "Et");
  _R11 = &v114;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
PhysicsScript_Capsulecast
==============
*/

void __fastcall PhysicsScript_Capsulecast(scrContext_t *scrContext, double _XMM1_8)
{
  char v9; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v13; 
  const char *NameForType; 
  const char *v15; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v17; 
  Physics_CollisionQueryCollectionType v18; 
  scr_string_t v19; 
  hkMonitorStream *v20; 
  hkMonitorStream *v21; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  HavokPhysics_CollisionQueryResult *v23; 
  __int64 i; 
  int v27; 
  __int32 v30; 
  int NumHits; 
  int v32; 
  int v33; 
  unsigned int ShapecastHitBodyId; 
  int Ref; 
  int EntityNum; 
  scr_string_t hittype; 
  unsigned int v51; 
  int v52; 
  int v53; 
  int ShapecastHitHitSurfFlags; 
  scr_string_t entity; 
  bool HasHit; 
  __int32 v70; 
  int v71; 
  int v72; 
  int v73; 
  unsigned int ClosestPointHitBodyId; 
  int v75; 
  int v76; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t v79; 
  unsigned int v81; 
  int v82; 
  int v83; 
  int v85; 
  scr_string_t v86; 
  bool v88; 
  hkMemoryAllocator *v89; 
  hkMemoryAllocator *v90; 
  VariableType failureType[4]; 
  int value; 
  unsigned int count[2]; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v98; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v100; 
  hkMonitorStream *v101; 
  hknpShape *shape; 
  vec3_t vectorValue; 
  vec3_t end; 
  vec3_t normal; 
  vec3_t v107; 
  vec3_t pos; 
  vec3_t angles; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 
  char v113; 
  void *retaddr; 

  _RAX = &retaddr;
  v100 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4993, scrContext, "PhysicsScript_Capsulecast: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4994, scrContext, "PhysicsScript_Capsulecast: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(scrContext, 1u, &end);
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4995, scrContext, "PhysicsScript_Capsulecast: Parameter 2 radius must be the radius - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm { vmovaps xmm6, xmm0 }
  if ( Scr_GetType(scrContext, 3u) != VAR_FLOAT && Scr_GetType(scrContext, 3u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4996, scrContext, "PhysicsScript_Capsulecast: Parameter 3 halfheight must be the half height of the capsule - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm
  {
    vmovaps xmm7, xmm0
    vcomiss xmm0, xmm6
  }
  if ( v9 )
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
        v13 = j_va("PhysicsScript_Capsulecast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5002, scrContext, 0, v13);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, count, (unsigned int *)&failureIndex, &failureType[1]) )
      {
        NameForType = Scr_GetNameForType(failureType[1]);
        v15 = j_va("PhysicsScript_Capsulecast: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5003, scrContext, 0, v15);
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
  v17 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
  if ( ConstString == scr_const.physicsquery_any )
  {
    v18 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v18 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v18 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v18 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  if ( Scr_GetNumParam(scrContext) >= 9 )
  {
    if ( Scr_GetType(scrContext, 8u) != VAR_STRING )
      Scr_Error(COM_ERR_5006, scrContext, "PhysicsScript_Capsulecast: Parameter 8 startCollectionType must be the startCollectionType - see usage");
    v19 = Scr_GetConstString(scrContext, 8u);
    if ( v19 == scr_const.physicsquery_any )
    {
      v17 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
    }
    else if ( v19 == scr_const.physicsquery_closest )
    {
      v17 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
    }
    else if ( v19 == scr_const.physicsquery_all )
    {
      v17 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
    }
  }
  v20 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v21 = v20;
  failureIndex = v20;
  if ( v20 )
    hkMonitorStream::timerBegin(v20, "TtPhysicsScript_Capsulecast");
  v101 = v21;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v18);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3260, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( v17 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN )
    v23 = NULL;
  else
    v23 = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v17);
  __asm
  {
    vsubss  xmm2, xmm7, xmm6; halfHeight
    vmovaps xmm3, xmm6; radius
  }
  shape = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &vec3_origin, *(float *)&_XMM2, *(float *)&_XMM3, optionalInplaceBuffer, 432, Temporary);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v98, count[0], 0);
  if ( failureType[0] )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v98, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < count[0]; i = (unsigned int)(i + 1) )
    {
      v27 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v98, i, v27, 1, 0, 0, 0, 0);
    }
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rbp+460h+extendedData.startTolerance], xmm1
    vmovss  xmm0, cs:__real@3c83126f
    vmovss  [rbp+460h+extendedData.accuracy], xmm0
    vmovss  [rbp+460h+extendedData.collisionBuffer], xmm1
    vmovdqu xmmword ptr [rbp+460h+extendedData.nonBrushShape], xmm1
  }
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = value;
  extendedData.ignoreBodies = &v98;
  extendedData.simplifyStart = 1;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, shape, &vectorValue, &end, &quat, &extendedData, CollisionQueryResult, v23);
  if ( v23 )
    Scr_MakeArray(scrContext);
  if ( v18 )
  {
    v30 = v18 - 1;
    if ( v30 )
    {
      if ( v30 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        v32 = 0;
        if ( NumHits > 0 )
        {
          v33 = NumHits;
          do
          {
            ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, v32);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ShapecastHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, v32, &pos);
            HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, v32, &normal);
            HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, v32, &v107);
            *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, v32);
            __asm { vmovaps xmm6, xmm0 }
            value = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, v32);
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+460h+end]
              vsubss  xmm2, xmm1, dword ptr [rbp+460h+vectorValue]
              vmulss  xmm3, xmm2, xmm6
              vaddss  xmm4, xmm3, dword ptr [rbp+460h+vectorValue]
              vmovss  dword ptr [rbp+460h+shape], xmm4
              vmovss  xmm1, dword ptr [rbp+460h+end+4]
              vsubss  xmm2, xmm1, dword ptr [rbp+460h+vectorValue+4]
              vmulss  xmm3, xmm2, xmm6
              vaddss  xmm0, xmm3, dword ptr [rbp+460h+vectorValue+4]
              vmovss  dword ptr [rbp+460h+shape+4], xmm0
              vmovss  xmm1, dword ptr [rbp+460h+end+8]
              vsubss  xmm0, xmm1, dword ptr [rbp+460h+vectorValue+8]
              vmulss  xmm2, xmm0, xmm6
              vaddss  xmm3, xmm2, dword ptr [rbp+460h+vectorValue+8]
              vmovss  [rbp+460h+var_480], xmm3
            }
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
            Scr_AddVector(scrContext, v107.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
            __asm { vmovaps xmm1, xmm6; value }
            Scr_AddFloat(scrContext, *(float *)&_XMM1);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, value);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v32;
          }
          while ( v32 < v33 );
          v21 = failureIndex;
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v51 = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, 0);
        v52 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v51);
        v53 = Physics_GetEntityNum(v52);
        HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, 0, &v107);
        HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, 0, &pos);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, 0);
        __asm { vmovaps xmm6, xmm0 }
        ShapecastHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, 0);
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+460h+end]
          vsubss  xmm2, xmm1, dword ptr [rbp+460h+vectorValue]
          vmulss  xmm3, xmm2, xmm6
          vaddss  xmm4, xmm3, dword ptr [rbp+460h+vectorValue]
          vmovss  dword ptr [rbp+460h+shape], xmm4
          vmovss  xmm1, dword ptr [rbp+460h+end+4]
          vsubss  xmm2, xmm1, dword ptr [rbp+460h+vectorValue+4]
          vmulss  xmm3, xmm2, xmm6
          vaddss  xmm0, xmm3, dword ptr [rbp+460h+vectorValue+4]
          vmovss  dword ptr [rbp+460h+shape+4], xmm0
          vmovss  xmm1, dword ptr [rbp+460h+end+8]
          vsubss  xmm0, xmm1, dword ptr [rbp+460h+vectorValue+8]
          vmulss  xmm2, xmm0, xmm6
          vaddss  xmm3, xmm2, dword ptr [rbp+460h+vectorValue+8]
          vmovss  [rbp+460h+var_480], xmm3
        }
        Scr_MakeArray(scrContext);
        if ( v53 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          entity = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v53, ENTITY_CLASS_GENTITY);
          entity = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, entity);
        Scr_AddVector(scrContext, v107.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, (const float *)&shape);
        Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(scrContext, *(float *)&_XMM1);
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
  if ( v23 )
  {
    Scr_AddArray(scrContext);
    if ( v17 )
    {
      v70 = v17 - 1;
      if ( v70 )
      {
        if ( v70 == 1 )
        {
          HavokPhysics_CollisionQueryResult::SortResults(v23);
          v71 = HavokPhysics_CollisionQueryResult::GetNumHits(v23);
          Scr_MakeArray(scrContext);
          v72 = 0;
          if ( v71 > 0 )
          {
            v73 = v71;
            do
            {
              ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v23, v72);
              v75 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
              v76 = Physics_GetEntityNum(v75);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v23, v72, &v107);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v23, v72, &normal);
              *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v23, v72);
              __asm { vmovaps xmm6, xmm0 }
              ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v23, v72);
              Scr_MakeArray(scrContext);
              if ( v76 == 2046 )
              {
                Scr_AddConstString(scrContext, scr_const.hittype_world);
                v79 = scr_const.hittype;
              }
              else
              {
                Scr_AddConstString(scrContext, scr_const.hittype_entity);
                Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                Scr_AddEntityNum(scrContext, v76, ENTITY_CLASS_GENTITY);
                v79 = scr_const.entity;
              }
              Scr_AddArrayStringIndexed(scrContext, v79);
              Scr_AddVector(scrContext, v107.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.position);
              Scr_AddVector(scrContext, normal.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
              __asm { vmovaps xmm1, xmm6; value }
              Scr_AddFloat(scrContext, *(float *)&_XMM1);
              Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
              Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
              Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
              Scr_AddArray(scrContext);
              ++v72;
            }
            while ( v72 < v73 );
            v21 = failureIndex;
          }
        }
      }
      else
      {
        Scr_MakeArray(scrContext);
        if ( HavokPhysics_CollisionQueryResult::HasHit(v23) )
        {
          v81 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v23, 0);
          v82 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v81);
          v83 = Physics_GetEntityNum(v82);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v23, 0, &v107);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v23, 0, &normal);
          *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v23, 0);
          __asm { vmovaps xmm6, xmm0 }
          v85 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v23, 0);
          Scr_MakeArray(scrContext);
          if ( v83 == 2046 )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_world);
            v86 = scr_const.hittype;
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v83, ENTITY_CLASS_GENTITY);
            v86 = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, v86);
          Scr_AddVector(scrContext, v107.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, normal.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          __asm { vmovaps xmm1, xmm6; value }
          Scr_AddFloat(scrContext, *(float *)&_XMM1);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, v85);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      v88 = HavokPhysics_CollisionQueryResult::HasHit(v23);
      Scr_AddBool(scrContext, v88);
    }
    Scr_AddArray(scrContext);
    Physics_FreeCollisionQueryResult(v23);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v89 = hkMemHeapAllocator();
  v98.m_ignoreBodies.m_size = 0;
  if ( v98.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v89, v98.m_ignoreBodies.m_data, 4, v98.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v98.m_ignoreBodies.m_data = NULL;
  v98.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v90 = hkMemHeapAllocator();
  v98.m_ignoreEntities.m_size = 0;
  if ( v98.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v90, v98.m_ignoreEntities.m_data, 8, v98.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v98.m_ignoreEntities.m_data = NULL;
  v98.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v21 )
    hkMonitorStream::timerEnd(v21, "Et");
  _R11 = &v113;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
PhysicsScript_Charactercast
==============
*/
void PhysicsScript_Charactercast(scrContext_t *scrContext)
{
  char v15; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v19; 
  const char *NameForType; 
  const char *v21; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v23; 
  Physics_CollisionQueryCollectionType v24; 
  scr_string_t v25; 
  hkMonitorStream *v26; 
  hkMonitorStream *v27; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  HavokPhysics_CollisionQueryResult *v29; 
  __int64 i; 
  int v38; 
  __int32 v40; 
  int NumHits; 
  int v42; 
  int v43; 
  unsigned int ShapecastHitBodyId; 
  int Ref; 
  int EntityNum; 
  scr_string_t hittype; 
  unsigned int v61; 
  int v62; 
  int v63; 
  int ShapecastHitHitSurfFlags; 
  scr_string_t entity; 
  bool HasHit; 
  __int32 v80; 
  int v81; 
  int v82; 
  int v83; 
  unsigned int ClosestPointHitBodyId; 
  int v85; 
  int v86; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t v89; 
  unsigned int v91; 
  int v92; 
  int v93; 
  int v95; 
  scr_string_t v96; 
  bool v98; 
  hkMemoryAllocator *v99; 
  hkMemoryAllocator *v100; 
  VariableType failureType[4]; 
  int value; 
  unsigned int count; 
  HavokPhysics_IgnoreBodies v109; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v111; 
  hkMonitorStream *v112; 
  vec3_t shape; 
  vec3_t normal; 
  vec3_t center; 
  vec3_t vectorValue; 
  vec3_t end; 
  vec3_t v118; 
  vec3_t pos; 
  vec3_t v120; 
  vec3_t angles; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 
  char v125; 
  void *retaddr; 

  _RAX = &retaddr;
  v111 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5008, scrContext, "PhysicsScript_Charactercast: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5009, scrContext, "PhysicsScript_Charactercast: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(scrContext, 1u, &end);
  if ( Scr_GetPointerType(scrContext, 2u) != VAR_ENTITY )
    Scr_Error(COM_ERR_5010, scrContext, "PhysicsScript_Charactercast: Parameter 2 character must be an entity - see usage");
  _RBX = GScr_GetEntity(2u);
  if ( !_RBX )
    Scr_Error(COM_ERR_5011, scrContext, "PhysicsScript_Charactercast: Parameter 2 character must be a valid entity - see usage");
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rbp+490h+center], xmm7
    vmovss  dword ptr [rbp+490h+center+4], xmm7
    vmovss  dword ptr [rbp+490h+center+8], xmm7
  }
  if ( _RBX->client )
  {
    __asm
    {
      vmovss  xmm6, cs:__real@420c0000
      vmovss  xmm8, cs:__real@41700000
    }
LABEL_14:
    __asm { vmovss  dword ptr [rbp+490h+center+8], xmm6 }
    goto LABEL_15;
  }
  if ( ((_RBX->s.eType - 17) & 0xFFFD) == 0 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+114h]
      vmovss  xmm8, dword ptr [rbx+10Ch]
    }
    goto LABEL_14;
  }
  Scr_Error(COM_ERR_5012, scrContext, "PhysicsScript_Charactercast: Parameter 2 character must be a player or ai entity - see usage");
LABEL_15:
  if ( Scr_GetType(scrContext, 3u) != VAR_FLOAT && Scr_GetType(scrContext, 3u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5013, scrContext, "PhysicsScript_Charactercast: Parameter 3 ground clearance must be the clearance distance - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm
  {
    vmulss  xmm3, xmm0, cs:__real@3f000000
    vaddss  xmm2, xmm3, dword ptr [rbp+490h+center+8]
    vmovss  dword ptr [rbp+490h+center+8], xmm2
    vsubss  xmm6, xmm6, xmm3
    vcomiss xmm6, xmm8
  }
  if ( v15 )
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
        v19 = j_va("PhysicsScript_Charactercast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5019, scrContext, 0, v19);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, &count, (unsigned int *)&normal, &failureType[1]) )
      {
        NameForType = Scr_GetNameForType(failureType[1]);
        v21 = j_va("PhysicsScript_Charactercast: element %i of ignore array: type %s is not an entity", normal.v[0], NameForType);
        Scr_ParamError(COM_ERR_5020, scrContext, 0, v21);
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
  v23 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
  if ( ConstString == scr_const.physicsquery_any )
  {
    v24 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v24 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v24 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v24 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  if ( Scr_GetNumParam(scrContext) >= 9 )
  {
    if ( Scr_GetType(scrContext, 8u) != VAR_STRING )
      Scr_Error(COM_ERR_5023, scrContext, "PhysicsScript_Charactercast: Parameter 8 startCollectionType must be the startCollectionType - see usage");
    v25 = Scr_GetConstString(scrContext, 8u);
    if ( v25 == scr_const.physicsquery_any )
    {
      v23 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
    }
    else if ( v25 == scr_const.physicsquery_closest )
    {
      v23 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
    }
    else if ( v25 == scr_const.physicsquery_all )
    {
      v23 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
    }
  }
  v26 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v27 = v26;
  *(_QWORD *)v120.v = v26;
  if ( v26 )
    hkMonitorStream::timerBegin(v26, "TtPhysicsScript_Charactercast");
  v112 = v27;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v24);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3708, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( v23 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN )
    v29 = NULL;
  else
    v29 = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v23);
  __asm
  {
    vsubss  xmm2, xmm6, xmm8; halfHeight
    vmovaps xmm3, xmm8; radius
  }
  *(_QWORD *)pos.v = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &center, *(float *)&_XMM2, *(float *)&_XMM3, optionalInplaceBuffer, 432, Temporary);
  __asm
  {
    vmovaps xmm2, xmm8; radius
    vmovaps xmm1, xmm6; halfHeight
  }
  *(_QWORD *)shape.v = Physics_CreateShapeCylinder(&center, *(float *)&_XMM1, *(float *)&_XMM2, 32, 1);
  __asm
  {
    vmovss  xmm9, cs:__real@3e000000
    vaddss  xmm2, xmm8, xmm9; radius
    vaddss  xmm1, xmm6, xmm9; halfHeight
  }
  *(_QWORD *)normal.v = Physics_CreateShapeCylinder(&center, *(float *)&_XMM1, *(float *)&_XMM2, 32, 1);
  if ( !*(_QWORD *)pos.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3715, ASSERT_TYPE_ASSERT, "(nonBrushShape)", (const char *)&queryFormat, "nonBrushShape") )
    __debugbreak();
  if ( !*(_QWORD *)shape.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3716, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( !*(_QWORD *)normal.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3717, ASSERT_TYPE_ASSERT, "(paddedShape)", (const char *)&queryFormat, "paddedShape") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v109, count, 0);
  if ( failureType[0] )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v109, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < count; i = (unsigned int)(i + 1) )
    {
      v38 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v109, i, v38, 1, 0, 0, 0, 0);
    }
  }
  __asm
  {
    vmovss  [rbp+490h+extendedData.startTolerance], xmm7
    vmovss  xmm0, cs:__real@3c83126f
    vmovss  [rbp+490h+extendedData.accuracy], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = value;
  extendedData.ignoreBodies = &v109;
  extendedData.simplifyStart = 1;
  __asm { vmovss  [rbp+490h+extendedData.collisionBuffer], xmm9 }
  extendedData.nonBrushShape = *(hknpShape **)pos.v;
  extendedData.secondPassShape = *(hknpShape **)normal.v;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, *(hknpShape **)shape.v, &vectorValue, &end, &quat, &extendedData, CollisionQueryResult, v29);
  Physics_ReleaseShape(PHYSICS_WORLD_ID_FIRST, *(hknpShape **)normal.v, 0);
  Physics_ReleaseShape(PHYSICS_WORLD_ID_FIRST, *(hknpShape **)shape.v, 0);
  if ( v29 )
    Scr_MakeArray(scrContext);
  if ( v24 )
  {
    v40 = v24 - 1;
    if ( v40 )
    {
      if ( v40 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        v42 = 0;
        if ( NumHits > 0 )
        {
          v43 = NumHits;
          do
          {
            ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, v42);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ShapecastHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, v42, &pos);
            HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, v42, &normal);
            HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, v42, &v118);
            *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, v42);
            __asm { vmovaps xmm6, xmm0 }
            value = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, v42);
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+490h+end]
              vsubss  xmm2, xmm1, dword ptr [rbp+490h+vectorValue]
              vmulss  xmm3, xmm2, xmm6
              vaddss  xmm4, xmm3, dword ptr [rbp+490h+vectorValue]
              vmovss  dword ptr [rbp+490h+shape], xmm4
              vmovss  xmm1, dword ptr [rbp+490h+end+4]
              vsubss  xmm2, xmm1, dword ptr [rbp+490h+vectorValue+4]
              vmulss  xmm3, xmm2, xmm6
              vaddss  xmm0, xmm3, dword ptr [rbp+490h+vectorValue+4]
              vmovss  dword ptr [rbp+490h+shape+4], xmm0
              vmovss  xmm1, dword ptr [rbp+490h+end+8]
              vsubss  xmm0, xmm1, dword ptr [rbp+490h+vectorValue+8]
              vmulss  xmm2, xmm0, xmm6
              vaddss  xmm3, xmm2, dword ptr [rbp+490h+vectorValue+8]
              vmovss  [rbp+490h+var_4B8], xmm3
            }
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
            Scr_AddVector(scrContext, v118.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
            __asm { vmovaps xmm1, xmm6; value }
            Scr_AddFloat(scrContext, *(float *)&_XMM1);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, value);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v42;
          }
          while ( v42 < v43 );
          v27 = *(hkMonitorStream **)v120.v;
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v61 = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, 0);
        v62 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v61);
        v63 = Physics_GetEntityNum(v62);
        HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, 0, &v118);
        HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, 0, &pos);
        HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, 0, &normal);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, 0);
        __asm { vmovaps xmm6, xmm0 }
        ShapecastHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, 0);
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+490h+end]
          vsubss  xmm2, xmm1, dword ptr [rbp+490h+vectorValue]
          vmulss  xmm3, xmm2, xmm6
          vaddss  xmm4, xmm3, dword ptr [rbp+490h+vectorValue]
          vmovss  dword ptr [rbp+490h+shape], xmm4
          vmovss  xmm1, dword ptr [rbp+490h+end+4]
          vsubss  xmm2, xmm1, dword ptr [rbp+490h+vectorValue+4]
          vmulss  xmm3, xmm2, xmm6
          vaddss  xmm0, xmm3, dword ptr [rbp+490h+vectorValue+4]
          vmovss  dword ptr [rbp+490h+shape+4], xmm0
          vmovss  xmm1, dword ptr [rbp+490h+end+8]
          vsubss  xmm0, xmm1, dword ptr [rbp+490h+vectorValue+8]
          vmulss  xmm2, xmm0, xmm6
          vaddss  xmm3, xmm2, dword ptr [rbp+490h+vectorValue+8]
          vmovss  [rbp+490h+var_4B8], xmm3
        }
        Scr_MakeArray(scrContext);
        if ( v63 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          entity = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v63, ENTITY_CLASS_GENTITY);
          entity = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, entity);
        Scr_AddVector(scrContext, v118.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, shape.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(scrContext, *(float *)&_XMM1);
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
  if ( v29 )
  {
    Scr_AddArray(scrContext);
    if ( v23 )
    {
      v80 = v23 - 1;
      if ( v80 )
      {
        if ( v80 == 1 )
        {
          HavokPhysics_CollisionQueryResult::SortResults(v29);
          v81 = HavokPhysics_CollisionQueryResult::GetNumHits(v29);
          Scr_MakeArray(scrContext);
          v82 = 0;
          if ( v81 > 0 )
          {
            v83 = v81;
            do
            {
              ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v29, v82);
              v85 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
              v86 = Physics_GetEntityNum(v85);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v29, v82, &v118);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v29, v82, &shape);
              *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v29, v82);
              __asm { vmovaps xmm6, xmm0 }
              ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v29, v82);
              Scr_MakeArray(scrContext);
              if ( v86 == 2046 )
              {
                Scr_AddConstString(scrContext, scr_const.hittype_world);
                v89 = scr_const.hittype;
              }
              else
              {
                Scr_AddConstString(scrContext, scr_const.hittype_entity);
                Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                Scr_AddEntityNum(scrContext, v86, ENTITY_CLASS_GENTITY);
                v89 = scr_const.entity;
              }
              Scr_AddArrayStringIndexed(scrContext, v89);
              Scr_AddVector(scrContext, v118.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.position);
              Scr_AddVector(scrContext, shape.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
              __asm { vmovaps xmm1, xmm6; value }
              Scr_AddFloat(scrContext, *(float *)&_XMM1);
              Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
              Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
              Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
              Scr_AddArray(scrContext);
              ++v82;
            }
            while ( v82 < v83 );
            v27 = *(hkMonitorStream **)v120.v;
          }
        }
      }
      else
      {
        Scr_MakeArray(scrContext);
        if ( HavokPhysics_CollisionQueryResult::HasHit(v29) )
        {
          v91 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v29, 0);
          v92 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v91);
          v93 = Physics_GetEntityNum(v92);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v29, 0, &v118);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v29, 0, &v120);
          *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v29, 0);
          __asm { vmovaps xmm6, xmm0 }
          v95 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v29, 0);
          Scr_MakeArray(scrContext);
          if ( v93 == 2046 )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_world);
            v96 = scr_const.hittype;
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v93, ENTITY_CLASS_GENTITY);
            v96 = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, v96);
          Scr_AddVector(scrContext, v118.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, v120.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          __asm { vmovaps xmm1, xmm6; value }
          Scr_AddFloat(scrContext, *(float *)&_XMM1);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, v95);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      v98 = HavokPhysics_CollisionQueryResult::HasHit(v29);
      Scr_AddBool(scrContext, v98);
    }
    Scr_AddArray(scrContext);
    Physics_FreeCollisionQueryResult(v29);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v99 = hkMemHeapAllocator();
  v109.m_ignoreBodies.m_size = 0;
  if ( v109.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v99, v109.m_ignoreBodies.m_data, 4, v109.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v109.m_ignoreBodies.m_data = NULL;
  v109.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v100 = hkMemHeapAllocator();
  v109.m_ignoreEntities.m_size = 0;
  if ( v109.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v100, v109.m_ignoreEntities.m_data, 8, v109.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v109.m_ignoreEntities.m_data = NULL;
  v109.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v27 )
    hkMonitorStream::timerEnd(v27, "Et");
  _R11 = &v125;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
PhysicsScript_Shapecast
==============
*/

void __fastcall PhysicsScript_Shapecast(scrContext_t *scrContext, double _XMM1_8)
{
  gentity_s *Entity; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v11; 
  const char *NameForType; 
  const char *v13; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v15; 
  Physics_CollisionQueryCollectionType v16; 
  scr_string_t v17; 
  hkMonitorStream *v18; 
  hkMonitorStream *v19; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  HavokPhysics_CollisionQueryResult *v21; 
  __int64 i; 
  int v23; 
  __int32 v26; 
  int NumHits; 
  int v28; 
  int v29; 
  unsigned int ShapecastHitBodyId; 
  int Ref; 
  int EntityNum; 
  scr_string_t hittype; 
  unsigned int v47; 
  int v48; 
  int v49; 
  int ShapecastHitHitSurfFlags; 
  scr_string_t v63; 
  bool HasHit; 
  __int32 v66; 
  int v67; 
  int v68; 
  int v69; 
  unsigned int ClosestPointHitBodyId; 
  int v71; 
  int v72; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t v75; 
  unsigned int v77; 
  int v78; 
  int v79; 
  int v81; 
  scr_string_t v82; 
  bool v84; 
  hkMemoryAllocator *v85; 
  hkMemoryAllocator *v86; 
  VariableType failureType[4]; 
  int value; 
  unsigned int count[2]; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v93; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v95; 
  hkMonitorStream *v96; 
  hknpShape *shape; 
  vec3_t vectorValue; 
  vec3_t end; 
  vec3_t normal; 
  vec3_t v102; 
  vec3_t pos; 
  vec3_t angles; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char v107; 
  void *retaddr; 

  _RAX = &retaddr;
  v95 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
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
        v11 = j_va("PhysicsScript_Shapecast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5038, scrContext, 0, v11);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, count, (unsigned int *)&failureIndex, &failureType[1]) )
      {
        NameForType = Scr_GetNameForType(failureType[1]);
        v13 = j_va("PhysicsScript_Shapecast: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5039, scrContext, 0, v13);
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
  v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
  if ( ConstString == scr_const.physicsquery_any )
  {
    v16 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v16 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v16 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v16 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  if ( Scr_GetNumParam(scrContext) > 7 )
  {
    if ( Scr_GetType(scrContext, 7u) != VAR_STRING )
      Scr_Error(COM_ERR_5042, scrContext, "PhysicsScript_Shapecast: Parameter 6 startCollectionType must be the startCollectionType - see usage");
    v17 = Scr_GetConstString(scrContext, 7u);
    if ( v17 == scr_const.physicsquery_any )
    {
      v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
    }
    else if ( v17 == scr_const.physicsquery_closest )
    {
      v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
    }
    else if ( v17 == scr_const.physicsquery_all )
    {
      v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
    }
  }
  v18 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v19 = v18;
  failureIndex = v18;
  if ( v18 )
    hkMonitorStream::timerBegin(v18, "TtPhysicsScript_Shapecast");
  v96 = v19;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v16);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4157, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( v15 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN )
    v21 = NULL;
  else
    v21 = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v15);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v93, count[0], 0);
  if ( failureType[0] )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v93, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < count[0]; i = (unsigned int)(i + 1) )
    {
      v23 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v93, i, v23, 1, 0, 0, 0, 0);
    }
  }
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rbp+2A0h+extendedData.startTolerance], xmm1
    vmovss  xmm0, cs:__real@3c83126f
    vmovss  [rbp+2A0h+extendedData.accuracy], xmm0
    vmovss  [rbp+2A0h+extendedData.collisionBuffer], xmm1
    vmovdqu xmmword ptr [rbp+2A0h+extendedData.nonBrushShape], xmm1
  }
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = value;
  extendedData.ignoreBodies = &v93;
  extendedData.simplifyStart = 1;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, shape, &vectorValue, &end, &quat, &extendedData, CollisionQueryResult, v21);
  if ( v21 )
    Scr_MakeArray(scrContext);
  if ( v16 )
  {
    v26 = v16 - 1;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        v28 = 0;
        if ( NumHits > 0 )
        {
          v29 = NumHits;
          do
          {
            ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, v28);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ShapecastHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, v28, &pos);
            HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, v28, &normal);
            HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, v28, &v102);
            *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, v28);
            __asm { vmovaps xmm6, xmm0 }
            value = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, v28);
            __asm
            {
              vmovss  xmm1, dword ptr [rbp+2A0h+end]
              vsubss  xmm2, xmm1, dword ptr [rbp+2A0h+vectorValue]
              vmulss  xmm3, xmm2, xmm6
              vaddss  xmm4, xmm3, dword ptr [rbp+2A0h+vectorValue]
              vmovss  dword ptr [rbp+2A0h+shape], xmm4
              vmovss  xmm1, dword ptr [rbp+2A0h+end+4]
              vsubss  xmm2, xmm1, dword ptr [rbp+2A0h+vectorValue+4]
              vmulss  xmm3, xmm2, xmm6
              vaddss  xmm0, xmm3, dword ptr [rbp+2A0h+vectorValue+4]
              vmovss  dword ptr [rbp+2A0h+shape+4], xmm0
              vmovss  xmm1, dword ptr [rbp+2A0h+end+8]
              vsubss  xmm0, xmm1, dword ptr [rbp+2A0h+vectorValue+8]
              vmulss  xmm2, xmm0, xmm6
              vaddss  xmm3, xmm2, dword ptr [rbp+2A0h+vectorValue+8]
              vmovss  [rbp+2A0h+var_2C0], xmm3
            }
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
            Scr_AddVector(scrContext, v102.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
            __asm { vmovaps xmm1, xmm6; value }
            Scr_AddFloat(scrContext, *(float *)&_XMM1);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, value);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v28;
          }
          while ( v28 < v29 );
          v19 = failureIndex;
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v47 = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, 0);
        v48 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v47);
        v49 = Physics_GetEntityNum(v48);
        HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, 0, &v102);
        HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, 0, &pos);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, 0);
        __asm { vmovaps xmm6, xmm0 }
        ShapecastHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, 0);
        __asm
        {
          vmovss  xmm1, dword ptr [rbp+2A0h+end]
          vsubss  xmm2, xmm1, dword ptr [rbp+2A0h+vectorValue]
          vmulss  xmm3, xmm2, xmm6
          vaddss  xmm4, xmm3, dword ptr [rbp+2A0h+vectorValue]
          vmovss  dword ptr [rbp+2A0h+shape], xmm4
          vmovss  xmm1, dword ptr [rbp+2A0h+end+4]
          vsubss  xmm2, xmm1, dword ptr [rbp+2A0h+vectorValue+4]
          vmulss  xmm3, xmm2, xmm6
          vaddss  xmm0, xmm3, dword ptr [rbp+2A0h+vectorValue+4]
          vmovss  dword ptr [rbp+2A0h+shape+4], xmm0
          vmovss  xmm1, dword ptr [rbp+2A0h+end+8]
          vsubss  xmm0, xmm1, dword ptr [rbp+2A0h+vectorValue+8]
          vmulss  xmm2, xmm0, xmm6
          vaddss  xmm3, xmm2, dword ptr [rbp+2A0h+vectorValue+8]
          vmovss  [rbp+2A0h+var_2C0], xmm3
        }
        Scr_MakeArray(scrContext);
        if ( v49 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          v63 = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v49, ENTITY_CLASS_GENTITY);
          v63 = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, v63);
        Scr_AddVector(scrContext, v102.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, (const float *)&shape);
        Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(scrContext, *(float *)&_XMM1);
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
  if ( v21 )
  {
    Scr_AddArray(scrContext);
    if ( v15 )
    {
      v66 = v15 - 1;
      if ( v66 )
      {
        if ( v66 == 1 )
        {
          HavokPhysics_CollisionQueryResult::SortResults(v21);
          v67 = HavokPhysics_CollisionQueryResult::GetNumHits(v21);
          Scr_MakeArray(scrContext);
          v68 = 0;
          if ( v67 > 0 )
          {
            v69 = v67;
            do
            {
              ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v21, v68);
              v71 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
              v72 = Physics_GetEntityNum(v71);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v21, v68, &v102);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v21, v68, &normal);
              *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v21, v68);
              __asm { vmovaps xmm6, xmm0 }
              ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v21, v68);
              Scr_MakeArray(scrContext);
              if ( v72 == 2046 )
              {
                Scr_AddConstString(scrContext, scr_const.hittype_world);
                v75 = scr_const.hittype;
              }
              else
              {
                Scr_AddConstString(scrContext, scr_const.hittype_entity);
                Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                Scr_AddEntityNum(scrContext, v72, ENTITY_CLASS_GENTITY);
                v75 = scr_const.entity;
              }
              Scr_AddArrayStringIndexed(scrContext, v75);
              Scr_AddVector(scrContext, v102.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.position);
              Scr_AddVector(scrContext, normal.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
              __asm { vmovaps xmm1, xmm6; value }
              Scr_AddFloat(scrContext, *(float *)&_XMM1);
              Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
              Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
              Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
              Scr_AddArray(scrContext);
              ++v68;
            }
            while ( v68 < v69 );
            v19 = failureIndex;
          }
        }
      }
      else
      {
        Scr_MakeArray(scrContext);
        if ( HavokPhysics_CollisionQueryResult::HasHit(v21) )
        {
          v77 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v21, 0);
          v78 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v77);
          v79 = Physics_GetEntityNum(v78);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v21, 0, &v102);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v21, 0, &normal);
          *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v21, 0);
          __asm { vmovaps xmm6, xmm0 }
          v81 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v21, 0);
          Scr_MakeArray(scrContext);
          if ( v79 == 2046 )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_world);
            v82 = scr_const.hittype;
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v79, ENTITY_CLASS_GENTITY);
            v82 = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, v82);
          Scr_AddVector(scrContext, v102.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, normal.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          __asm { vmovaps xmm1, xmm6; value }
          Scr_AddFloat(scrContext, *(float *)&_XMM1);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, v81);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      v84 = HavokPhysics_CollisionQueryResult::HasHit(v21);
      Scr_AddBool(scrContext, v84);
    }
    Scr_AddArray(scrContext);
    Physics_FreeCollisionQueryResult(v21);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v85 = hkMemHeapAllocator();
  v93.m_ignoreBodies.m_size = 0;
  if ( v93.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v85, v93.m_ignoreBodies.m_data, 4, v93.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v93.m_ignoreBodies.m_data = NULL;
  v93.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v86 = hkMemHeapAllocator();
  v93.m_ignoreEntities.m_size = 0;
  if ( v93.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v86, v93.m_ignoreEntities.m_data, 8, v93.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v93.m_ignoreEntities.m_data = NULL;
  v93.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v19 )
    hkMonitorStream::timerEnd(v19, "Et");
  _R11 = &v107;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
PhysicsScript_QueryPoint
==============
*/
void PhysicsScript_QueryPoint(scrContext_t *scrContext)
{
  int Int; 
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
  unsigned int i; 
  int v20; 
  __int32 v23; 
  int NumHits; 
  bool HasHit; 
  hkMemoryAllocator *v26; 
  hkMemoryAllocator *v27; 
  VariableType count[8]; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v32; 
  Physics_QueryPointExtendedData extendedData; 
  __int64 v34; 
  vec3_t vectorValue; 
  unsigned int buffer[128]; 
  char v37; 
  void *retaddr; 

  _RAX = &retaddr;
  v34 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5044, scrContext, "Physics_QueryPoint: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5045, scrContext, "Physics_QueryPoint: Parameter 1 distance must be the distance - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovaps xmm6, xmm0 }
  if ( Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5046, scrContext, "Physics_QueryPoint: Parameter 2 contents must be the contents - see usage");
  Int = Scr_GetInt(scrContext, 2u);
  if ( !Int )
    Scr_Error(COM_ERR_5047, scrContext, "Physics_QueryPoint: Parameter 2 contents must be non 0");
  v7 = 0;
  entnum = 0;
  if ( Scr_GetType(scrContext, 3u) )
  {
    if ( Scr_GetPointerType(scrContext, 3u) == VAR_ENTITY )
    {
      *(_DWORD *)&count[4] = 1;
      entnum = Scr_GetEntityRef(scrContext, 3u).entnum;
      v7 = 1;
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
        v11 = j_va("Physics_QueryPoint: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5049, scrContext, 0, v11);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, (unsigned int *)&count[4], (unsigned int *)&failureIndex, count) )
      {
        NameForType = Scr_GetNameForType(count[0]);
        v13 = j_va("Physics_QueryPoint: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5050, scrContext, 0, v13);
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
    hkMonitorStream::timerBegin(Value, "TtPhysics_QueryPoint");
  failureIndex = v17;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v15);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4603, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v32, *(int *)&count[4], 0);
  if ( v7 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v32, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)&count[4]; ++i )
    {
      v20 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v32, i, v20, 1, 0, 0, 0, 0);
    }
  }
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+200h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.contents = Int;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v32;
  __asm { vmovaps xmm2, xmm6; maxDistance }
  Physics_QueryPoint(PHYSICS_WORLD_ID_FIRST, &vectorValue, *(float *)&_XMM2, &extendedData, CollisionQueryResult);
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
  v26 = hkMemHeapAllocator();
  v32.m_ignoreBodies.m_size = 0;
  if ( v32.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v26, v32.m_ignoreBodies.m_data, 4, v32.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v32.m_ignoreBodies.m_data = NULL;
  v32.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v27 = hkMemHeapAllocator();
  v32.m_ignoreEntities.m_size = 0;
  if ( v32.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v27, v32.m_ignoreEntities.m_data, 8, v32.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v32.m_ignoreEntities.m_data = NULL;
  v32.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v17 )
    hkMonitorStream::timerEnd(v17, "Et");
  _R11 = &v37;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
PhysicsScript_GetClosestPointToSphere
==============
*/
void PhysicsScript_GetClosestPointToSphere(scrContext_t *scrContext)
{
  Physics_CollisionQueryCollectionType v6; 
  char v9; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v13; 
  const char *NameForType; 
  const char *v15; 
  scr_string_t ConstString; 
  hkMonitorStream *Value; 
  hkMonitorStream *v18; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  hknpShape *ShapeSphere; 
  __int64 i; 
  int v23; 
  int v25; 
  __int32 v26; 
  int NumHits; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t hittype; 
  unsigned int v35; 
  int v36; 
  int v37; 
  int v39; 
  scr_string_t entity; 
  bool HasHit; 
  hkMemoryAllocator *v43; 
  hkMemoryAllocator *v44; 
  float count; 
  VariableType failureType[4]; 
  unsigned int v50; 
  __int64 v51; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v53; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v55; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t vectorValue; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 
  char v61; 
  void *retaddr; 

  _RAX = &retaddr;
  v55 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5053, scrContext, "Physics_GetClosestPointToSphere: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  v6 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5054, scrContext, "Physics_GetClosestPointToSphere: Parameter 1 radius must be the radius - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovaps xmm6, xmm0 }
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5055, scrContext, "Physics_GetClosestPointToSphere: Parameter 2 distance must be the distance - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm { vmovaps xmm7, xmm0 }
  if ( Scr_GetType(scrContext, 3u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5056, scrContext, "Physics_GetClosestPointToSphere: Parameter 3 contents must be the contents - see usage");
  LODWORD(v51) = Scr_GetInt(scrContext, 3u);
  if ( !(_DWORD)v51 )
    Scr_Error(COM_ERR_5057, scrContext, "Physics_GetClosestPointToSphere: Parameter 3 contents must be non 0");
  v9 = 0;
  entnum = 0;
  if ( Scr_GetType(scrContext, 4u) )
  {
    if ( Scr_GetPointerType(scrContext, 4u) == VAR_ENTITY )
    {
      v50 = 1;
      entnum = Scr_GetEntityRef(scrContext, 4u).entnum;
      v9 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 4u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5058, scrContext, "Physics_GetClosestPointToSphere: Parameter 4 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 4u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      v50 = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v13 = j_va("Physics_GetClosestPointToSphere: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5059, scrContext, 0, v13);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, &v50, (unsigned int *)&failureIndex, failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v15 = j_va("Physics_GetClosestPointToSphere: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5060, scrContext, 0, v15);
      }
    }
  }
  else
  {
    v50 = 0;
  }
  if ( Scr_GetType(scrContext, 5u) != VAR_STRING )
    Scr_Error(COM_ERR_5061, scrContext, "Physics_GetClosestPointToSphere: Parameter 5 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 5u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v6 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString != scr_const.physicsquery_closest )
  {
    v6 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v6 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v18 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_GetClosestPointToSphere");
  failureIndex = v18;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v6);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4777, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  __asm { vmovaps xmm1, xmm6; radius }
  ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, *(float *)&_XMM1, optionalInplaceBuffer, 432);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v53, v50, 0);
  if ( v9 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v53, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < v50; i = (unsigned int)(i + 1) )
    {
      v23 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v53, i, v23, 1, 0, 0, 0, 0);
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+3F0h+extendedData.collisionBuffer], xmm0
  }
  v25 = 0;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  extendedData.contents = v51;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v53;
  __asm { vmovss  dword ptr [rsp+4F0h+count], xmm7 }
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, ShapeSphere, &vectorValue, &quat_identity, count, &extendedData, CollisionQueryResult);
  if ( v6 )
  {
    v26 = v6 - 1;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        if ( NumHits > 0 )
        {
          do
          {
            ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, v25);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, v25, &pos);
            HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, v25, &normal);
            *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, v25);
            __asm { vmovaps xmm6, xmm0 }
            ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, v25);
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
            __asm { vmovaps xmm1, xmm6; value }
            Scr_AddFloat(scrContext, *(float *)&_XMM1);
            Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
            Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v25;
          }
          while ( v25 < NumHits );
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v35 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
        v36 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v35);
        v37 = Physics_GetEntityNum(v36);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &pos);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
        __asm { vmovaps xmm6, xmm0 }
        v39 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(scrContext);
        if ( v37 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          entity = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v37, ENTITY_CLASS_GENTITY);
          entity = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, entity);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(scrContext, *(float *)&_XMM1);
        Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
        Scr_AddInt(scrContext, v39);
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
  v53.m_ignoreBodies.m_size = 0;
  if ( v53.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v43, v53.m_ignoreBodies.m_data, 4, v53.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v53.m_ignoreBodies.m_data = NULL;
  v53.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v44 = hkMemHeapAllocator();
  v53.m_ignoreEntities.m_size = 0;
  if ( v53.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v44, v53.m_ignoreEntities.m_data, 8, v53.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v53.m_ignoreEntities.m_data = NULL;
  v53.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v18 )
    hkMonitorStream::timerEnd(v18, "Et");
  _R11 = &v61;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
PhysicsScript_GetClosestPointToCapsule
==============
*/
void PhysicsScript_GetClosestPointToCapsule(scrContext_t *scrContext)
{
  char v9; 
  char v11; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v15; 
  const char *NameForType; 
  const char *v17; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v19; 
  hkMonitorStream *Value; 
  hkMonitorStream *v21; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  hknpShape *ShapeCapsuleUpAxis; 
  unsigned int i; 
  int v27; 
  __int32 v29; 
  signed int NumHits; 
  int j; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t hittype; 
  unsigned int v39; 
  int v40; 
  int v41; 
  int v43; 
  scr_string_t entity; 
  bool HasHit; 
  hkMemoryAllocator *v47; 
  hkMemoryAllocator *v48; 
  float count; 
  VariableType failureType[4]; 
  unsigned int v55; 
  __int64 v56; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v58; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v60; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t angles; 
  vec3_t vectorValue; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  v60 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5063, scrContext, "Physics_GetClosestPointToCapsule: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5064, scrContext, "Physics_GetClosestPointToCapsule: Parameter 1 radius must be the radius - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm { vmovaps xmm6, xmm0 }
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5065, scrContext, "Physics_GetClosestPointToCapsule: Parameter 2 halfheight must be the half height of the capsule - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmovaps xmm7, xmm0
    vcomiss xmm0, xmm6
  }
  if ( v9 )
    Scr_Error(COM_ERR_5066, scrContext, "Physics_GetClosestPointToCapsule: Parameter 2 halfheight must be the at least the size of the radius");
  if ( Scr_GetType(scrContext, 3u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5067, scrContext, "Physics_GetClosestPointToCapsule: Parameter 3 angles must be the angles vector - see usage");
  Scr_GetVector(scrContext, 3u, &angles);
  AnglesToQuat(&angles, &quat);
  if ( Scr_GetType(scrContext, 4u) != VAR_FLOAT && Scr_GetType(scrContext, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5068, scrContext, "Physics_GetClosestPointToCapsule: Parameter 4 distance must be the distance - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
  __asm { vmovaps xmm8, xmm0 }
  if ( Scr_GetType(scrContext, 5u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5069, scrContext, "Physics_GetClosestPointToCapsule: Parameter 5 contents must be the contents - see usage");
  LODWORD(v56) = Scr_GetInt(scrContext, 5u);
  if ( !(_DWORD)v56 )
    Scr_Error(COM_ERR_5070, scrContext, "Physics_GetClosestPointToCapsule: Parameter 5 contents must be non 0");
  v11 = 0;
  entnum = 0;
  if ( Scr_GetType(scrContext, 6u) )
  {
    if ( Scr_GetPointerType(scrContext, 6u) == VAR_ENTITY )
    {
      v55 = 1;
      entnum = Scr_GetEntityRef(scrContext, 6u).entnum;
      v11 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 6u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5071, scrContext, "Physics_GetClosestPointToCapsule: Parameter 6 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 6u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      v55 = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v15 = j_va("Physics_GetClosestPointToCapsule: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5072, scrContext, 0, v15);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, &v55, (unsigned int *)&failureIndex, failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v17 = j_va("Physics_GetClosestPointToCapsule: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5073, scrContext, 0, v17);
      }
    }
  }
  else
  {
    v55 = 0;
  }
  if ( Scr_GetType(scrContext, 7u) != VAR_STRING )
    Scr_Error(COM_ERR_5074, scrContext, "Physics_GetClosestPointToCapsule: Parameter 7 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 7u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v19 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v19 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v19 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v19 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v21 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_GetClosestPointToCapsule");
  failureIndex = v21;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v19);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5045, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  __asm
  {
    vsubss  xmm2, xmm7, xmm6; halfHeight
    vmovaps xmm3, xmm6; radius
  }
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &vec3_origin, *(float *)&_XMM2, *(float *)&_XMM3, optionalInplaceBuffer, 432, Temporary);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v58, v55, 0);
  if ( v11 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v58, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0; i < v55; ++i )
    {
      v27 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v58, i, v27, 1, 0, 0, 0, 0);
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+420h+extendedData.collisionBuffer], xmm0
  }
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  extendedData.contents = v56;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v58;
  __asm { vmovss  dword ptr [rsp+520h+count], xmm8 }
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, ShapeCapsuleUpAxis, &vectorValue, &quat, count, &extendedData, CollisionQueryResult);
  if ( v19 )
  {
    v29 = v19 - 1;
    if ( v29 )
    {
      if ( v29 == 1 )
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
          *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, j);
          __asm { vmovaps xmm6, xmm0 }
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
          __asm { vmovaps xmm1, xmm6; value }
          Scr_AddFloat(scrContext, *(float *)&_XMM1);
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
        v39 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
        v40 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v39);
        v41 = Physics_GetEntityNum(v40);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &pos);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
        __asm { vmovaps xmm6, xmm0 }
        v43 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(scrContext);
        if ( v41 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          entity = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v41, ENTITY_CLASS_GENTITY);
          entity = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, entity);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(scrContext, *(float *)&_XMM1);
        Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
        Scr_AddInt(scrContext, v43);
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
  v47 = hkMemHeapAllocator();
  v58.m_ignoreBodies.m_size = 0;
  if ( v58.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v47, v58.m_ignoreBodies.m_data, 4, v58.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v58.m_ignoreBodies.m_data = NULL;
  v58.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v48 = hkMemHeapAllocator();
  v58.m_ignoreEntities.m_size = 0;
  if ( v58.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v48, v58.m_ignoreEntities.m_data, 8, v58.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v58.m_ignoreEntities.m_data = NULL;
  v58.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v21 )
    hkMonitorStream::timerEnd(v21, "Et");
  _R11 = &v68;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
PhysicsScript_GetClosestPointToCharacter
==============
*/
void PhysicsScript_GetClosestPointToCharacter(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  const char *v20; 
  const char *v21; 
  char v25; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v30; 
  const char *NameForType; 
  const char *v32; 
  scr_string_t v33; 
  Physics_CollisionQueryCollectionType v34; 
  hkMonitorStream *Value; 
  hkMonitorStream *v36; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  hknpShape *v40; 
  hknpShape *v43; 
  __int64 i; 
  int v45; 
  __int32 v46; 
  signed int NumHits; 
  int j; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t hittype; 
  unsigned int v56; 
  int v57; 
  int v58; 
  int v60; 
  scr_string_t entity; 
  bool HasHit; 
  hkMemoryAllocator *v64; 
  hkMemoryAllocator *v65; 
  float count; 
  VariableType failureType[4]; 
  unsigned int v73; 
  __int64 v74; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v76; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v78; 
  vec3_t center; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t angles; 
  vec3_t vectorValue; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 
  char v87; 
  void *retaddr; 

  _RAX = &retaddr;
  v78 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5076, scrContext, "Physics_GetClosestPointToCharacter: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetPointerType(scrContext, 1u) != VAR_ENTITY )
    Scr_Error(COM_ERR_5077, scrContext, "Physics_GetClosestPointToCharacter: Parameter 1 character must be an entity - see usage");
  _RBX = GScr_GetEntity(1u);
  if ( !_RBX )
    Scr_Error(COM_ERR_5078, scrContext, "Physics_GetClosestPointToCharacter: Parameter 1 character must be a valid entity - see usage");
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vxorps  xmm6, xmm6, xmm6
    vxorps  xmm8, xmm8, xmm8
    vmovss  dword ptr [rbp+440h+center], xmm7
    vmovss  dword ptr [rbp+440h+center+4], xmm7
    vmovss  dword ptr [rbp+440h+center+8], xmm7
    vmovss  xmm9, cs:__real@3f000000
  }
  if ( _RBX->client )
  {
    if ( Scr_GetNumParam(scrContext) <= 8 )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@420c0000
        vmovss  xmm8, cs:__real@41700000
      }
    }
    else
    {
      if ( !BG_GetSuitDef(_RBX->client->ps.suitIndex) )
        Scr_Error(COM_ERR_5079, scrContext, "Physics_GetClosestPointToCharacter(): Suit def not found!\n");
      ConstString = Scr_GetConstString(scrContext, 8u);
      if ( ConstString == scr_const.stand )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, dword ptr [rbx+224h]
          vmulss  xmm6, xmm6, xmm9
          vmovss  xmm8, cs:__real@41700000
        }
      }
      else if ( ConstString == scr_const.crouch )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, dword ptr [rbx+228h]
          vmulss  xmm6, xmm6, xmm9
          vmovss  xmm8, cs:__real@41700000
        }
      }
      else if ( ConstString == scr_const.prone )
      {
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, dword ptr [rbx+22Ch]
          vmulss  xmm6, xmm6, xmm9
          vmovss  xmm8, cs:__real@41700000
        }
      }
      else
      {
        v20 = SL_ConvertToString(ConstString);
        v21 = j_va("Physics_GetClosestPointToCharacter(): Unsupported stand %s\n", v20);
        Scr_Error(COM_ERR_5080, scrContext, v21);
        __asm
        {
          vmulss  xmm6, xmm6, xmm9
          vmovss  xmm8, cs:__real@41700000
        }
      }
    }
    goto LABEL_22;
  }
  if ( ((_RBX->s.eType - 17) & 0xFFFD) == 0 )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+114h]
      vmovss  xmm8, dword ptr [rbx+10Ch]
    }
LABEL_22:
    __asm { vmovss  dword ptr [rbp+440h+center+8], xmm6 }
    goto LABEL_23;
  }
  Scr_Error(COM_ERR_5081, scrContext, "Physics_GetClosestPointToCharacter: Parameter 1 character must be a player or ai entity - see usage");
LABEL_23:
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5082, scrContext, "Physics_GetClosestPointToCharacter: Parameter 2 ground clearance must be the clearance distance - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmulss  xmm3, xmm0, xmm9
    vaddss  xmm2, xmm3, dword ptr [rbp+440h+center+8]
    vmovss  dword ptr [rbp+440h+center+8], xmm2
    vsubss  xmm6, xmm6, xmm3
    vcomiss xmm6, xmm8
  }
  if ( v25 )
    Scr_Error(COM_ERR_5083, scrContext, "Physics_GetClosestPointToCharacter: Parameter 2 ground clearance is too high - the capsule has collapsed");
  if ( Scr_GetType(scrContext, 3u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5084, scrContext, "Physics_GetClosestPointToCharacter: Parameter 3 angles must be the angles vector - see usage");
  Scr_GetVector(scrContext, 3u, &angles);
  AnglesToQuat(&angles, &quat);
  if ( Scr_GetType(scrContext, 4u) != VAR_FLOAT && Scr_GetType(scrContext, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5085, scrContext, "Physics_GetClosestPointToCharacter: Parameter 4 distance must be the distance - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
  __asm { vmovaps xmm9, xmm0 }
  if ( Scr_GetType(scrContext, 5u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5086, scrContext, "Physics_GetClosestPointToCharacter: Parameter 5 contents must be the contents - see usage");
  LODWORD(v74) = Scr_GetInt(scrContext, 5u);
  if ( !(_DWORD)v74 )
    Scr_Error(COM_ERR_5087, scrContext, "Physics_GetClosestPointToCharacter: Parameter 5 contents must be non 0");
  failureType[0] = VAR_UNDEFINED;
  entnum = 0;
  if ( Scr_GetType(scrContext, 6u) )
  {
    if ( Scr_GetPointerType(scrContext, 6u) == VAR_ENTITY )
    {
      v73 = 1;
      entnum = Scr_GetEntityRef(scrContext, 6u).entnum;
      failureType[0] = VAR_POINTER;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 6u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5088, scrContext, "Physics_GetClosestPointToCharacter: Parameter 6 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 6u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      v73 = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v30 = j_va("Physics_GetClosestPointToCharacter: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5089, scrContext, 0, v30);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, &v73, (unsigned int *)&failureIndex, &failureType[1]) )
      {
        NameForType = Scr_GetNameForType(failureType[1]);
        v32 = j_va("Physics_GetClosestPointToCharacter: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5090, scrContext, 0, v32);
      }
    }
  }
  else
  {
    v73 = 0;
  }
  if ( Scr_GetType(scrContext, 7u) != VAR_STRING )
    Scr_Error(COM_ERR_5091, scrContext, "Physics_GetClosestPointToCharacter: Parameter 7 collectionType must be the collection type - see usage");
  v33 = Scr_GetConstString(scrContext, 7u);
  if ( v33 == scr_const.physicsquery_any )
  {
    v34 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( v33 == scr_const.physicsquery_closest )
  {
    v34 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v34 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( v33 == scr_const.physicsquery_all )
      v34 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v36 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_GetClosestPointToCharacter");
  failureIndex = v36;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v34);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5372, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  __asm
  {
    vsubss  xmm2, xmm6, xmm8; halfHeight
    vmovaps xmm3, xmm8; radius
  }
  v40 = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &center, *(float *)&_XMM2, *(float *)&_XMM3, optionalInplaceBuffer, 432, Temporary);
  __asm
  {
    vmovaps xmm2, xmm8; radius
    vmovaps xmm1, xmm6; halfHeight
  }
  v43 = Physics_CreateShapeCylinder(&center, *(float *)&_XMM1, *(float *)&_XMM2, 32, 1);
  if ( !v40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5377, ASSERT_TYPE_ASSERT, "(nonBrushShape)", (const char *)&queryFormat, "nonBrushShape") )
    __debugbreak();
  if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5378, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v76, v73, 0);
  if ( failureType[0] )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v76, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < v73; i = (unsigned int)(i + 1) )
    {
      v45 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v76, i, v45, 1, 0, 0, 0, 0);
    }
  }
  __asm { vmovss  [rbp+440h+extendedData.collisionBuffer], xmm7 }
  extendedData.phaseSelection = All;
  extendedData.contents = v74;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v76;
  extendedData.nonBrushShape = v40;
  __asm { vmovss  dword ptr [rsp+540h+count], xmm9 }
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, v43, &vectorValue, &quat, count, &extendedData, CollisionQueryResult);
  Physics_ReleaseShape(PHYSICS_WORLD_ID_FIRST, v43, 0);
  if ( v34 )
  {
    v46 = v34 - 1;
    if ( v46 )
    {
      if ( v46 == 1 )
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
          *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, j);
          __asm { vmovaps xmm6, xmm0 }
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
          __asm { vmovaps xmm1, xmm6; value }
          Scr_AddFloat(scrContext, *(float *)&_XMM1);
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
        v56 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
        v57 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v56);
        v58 = Physics_GetEntityNum(v57);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &pos);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
        __asm { vmovaps xmm6, xmm0 }
        v60 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(scrContext);
        if ( v58 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          entity = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v58, ENTITY_CLASS_GENTITY);
          entity = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, entity);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(scrContext, *(float *)&_XMM1);
        Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
        Scr_AddInt(scrContext, v60);
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
  v64 = hkMemHeapAllocator();
  v76.m_ignoreBodies.m_size = 0;
  if ( v76.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v64, v76.m_ignoreBodies.m_data, 4, v76.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v76.m_ignoreBodies.m_data = NULL;
  v76.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v65 = hkMemHeapAllocator();
  v76.m_ignoreEntities.m_size = 0;
  if ( v76.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v65, v76.m_ignoreEntities.m_data, 8, v76.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v76.m_ignoreEntities.m_data = NULL;
  v76.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v36 )
    hkMonitorStream::timerEnd(v36, "Et");
  _R11 = &v87;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
PhysicsScript_GetClosestPoint
==============
*/
void PhysicsScript_GetClosestPoint(scrContext_t *scrContext)
{
  Physics_CollisionQueryCollectionType v5; 
  gentity_s *Entity; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  int Int; 
  char v11; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v15; 
  const char *NameForType; 
  const char *v17; 
  scr_string_t ConstString; 
  hkMonitorStream *Value; 
  hkMonitorStream *v20; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  __int64 i; 
  int v23; 
  int v25; 
  __int32 v26; 
  int NumHits; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t hittype; 
  unsigned int v35; 
  int v36; 
  int v37; 
  int v39; 
  scr_string_t v40; 
  bool HasHit; 
  hkMemoryAllocator *v43; 
  hkMemoryAllocator *v44; 
  float count; 
  VariableType failureType[8]; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v50; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v52; 
  vec3_t shape; 
  vec3_t normal; 
  vec3_t angles; 
  vec3_t vectorValue; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char v59; 
  void *retaddr; 

  _RAX = &retaddr;
  v52 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5093, scrContext, "Physics_GetClosestPoint: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  v5 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
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
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm { vmovaps xmm6, xmm0 }
  if ( Scr_GetType(scrContext, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5103, scrContext, "Physics_GetClosestPoint: Parameter 4 contents must be the contents - see usage");
  Int = Scr_GetInt(scrContext, 4u);
  if ( !Int )
    Scr_Error(COM_ERR_5104, scrContext, "Physics_GetClosestPoint: Parameter 4 contents must be non 0");
  v11 = 0;
  entnum = 0;
  if ( Scr_GetType(scrContext, 5u) )
  {
    if ( Scr_GetPointerType(scrContext, 5u) == VAR_ENTITY )
    {
      *(_DWORD *)&failureType[4] = 1;
      entnum = Scr_GetEntityRef(scrContext, 5u).entnum;
      v11 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 5u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5105, scrContext, "Physics_GetClosestPoint: Parameter 5 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 5u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      *(_DWORD *)&failureType[4] = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v15 = j_va("Physics_GetClosestPoint: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5106, scrContext, 0, v15);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, (unsigned int *)&failureType[4], (unsigned int *)&failureIndex, failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v17 = j_va("Physics_GetClosestPoint: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5107, scrContext, 0, v17);
      }
    }
  }
  else
  {
    *(_DWORD *)&failureType[4] = 0;
  }
  if ( Scr_GetType(scrContext, 6u) != VAR_STRING )
    Scr_Error(COM_ERR_5108, scrContext, "Physics_GetClosestPoint: Parameter 6 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 6u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v5 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString != scr_const.physicsquery_closest )
  {
    v5 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v5 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v20 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_GetClosestPoint");
  failureIndex = v20;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v5);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5662, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v50, *(int *)&failureType[4], 0);
  if ( v11 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v50, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < *(_DWORD *)&failureType[4]; i = (unsigned int)(i + 1) )
    {
      v23 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v50, i, v23, 1, 0, 0, 0, 0);
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+250h+extendedData.collisionBuffer], xmm0
  }
  v25 = 0;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  extendedData.contents = Int;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v50;
  __asm { vmovss  dword ptr [rsp+350h+count], xmm6 }
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, *(hknpShape **)shape.v, &vectorValue, &quat, count, &extendedData, CollisionQueryResult);
  if ( v5 )
  {
    v26 = v5 - 1;
    if ( v26 )
    {
      if ( v26 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        if ( NumHits > 0 )
        {
          do
          {
            ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, v25);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, v25, &shape);
            HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, v25, &normal);
            *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, v25);
            __asm { vmovaps xmm6, xmm0 }
            ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, v25);
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
            __asm { vmovaps xmm1, xmm6; value }
            Scr_AddFloat(scrContext, *(float *)&_XMM1);
            Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
            Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v25;
          }
          while ( v25 < NumHits );
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v35 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
        v36 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v35);
        v37 = Physics_GetEntityNum(v36);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &shape);
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
        __asm { vmovaps xmm6, xmm0 }
        v39 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(scrContext);
        if ( v37 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          v40 = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v37, ENTITY_CLASS_GENTITY);
          v40 = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, v40);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, shape.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        __asm { vmovaps xmm1, xmm6; value }
        Scr_AddFloat(scrContext, *(float *)&_XMM1);
        Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
        Scr_AddInt(scrContext, v39);
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
  v50.m_ignoreBodies.m_size = 0;
  if ( v50.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v43, v50.m_ignoreBodies.m_data, 4, v50.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v50.m_ignoreBodies.m_data = NULL;
  v50.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v44 = hkMemHeapAllocator();
  v50.m_ignoreEntities.m_size = 0;
  if ( v50.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v44, v50.m_ignoreEntities.m_data, 8, v50.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v50.m_ignoreEntities.m_data = NULL;
  v50.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v20 )
    hkMonitorStream::timerEnd(v20, "Et");
  _R11 = &v59;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  __asm { vmovss  xmm1, [rsp+28h+mass]; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
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
  __asm { vmovss  xmm1, [rsp+28h+mass]; value }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+48h+centerOfMass], xmm0
    vmovss  dword ptr [rsp+48h+centerOfMass+4], xmm0
    vmovss  dword ptr [rsp+48h+centerOfMass+8], xmm0
  }
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
  vec3_t vectorValue; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  vec3_t centerOfMass; 
  char v34; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5114, scrContext, "Physics_SetBodyCenterOfMass: Invalid Body Id");
  Scr_GetVector(scrContext, 1u, &vectorValue);
  Physics_GetRigidBodyAABB(PHYSICS_WORLD_ID_FIRST, Int, &aabbMin, &aabbMax);
  __asm
  {
    vmovss  xmm2, cs:__real@3f000000
    vmovss  xmm0, dword ptr [rsp+0A8h+aabbMax]
    vsubss  xmm1, xmm0, dword ptr [rsp+0A8h+aabbMin]
    vmovss  xmm0, dword ptr [rsp+0A8h+aabbMax+4]
    vmulss  xmm8, xmm1, xmm2
    vsubss  xmm1, xmm0, dword ptr [rsp+0A8h+aabbMin+4]
    vmovss  xmm0, dword ptr [rsp+0A8h+aabbMax+8]
    vmulss  xmm5, xmm8, dword ptr [rsp+0A8h+vectorValue]
    vmulss  xmm7, xmm1, xmm2
    vsubss  xmm1, xmm0, dword ptr [rsp+0A8h+aabbMin+8]
    vaddss  xmm0, xmm8, dword ptr [rsp+0A8h+aabbMin]
    vmulss  xmm4, xmm7, dword ptr [rsp+0A8h+vectorValue+4]
    vmulss  xmm6, xmm1, xmm2
    vaddss  xmm2, xmm7, dword ptr [rsp+0A8h+aabbMin+4]
    vmulss  xmm3, xmm6, dword ptr [rsp+0A8h+vectorValue+8]
    vaddss  xmm1, xmm0, xmm5
    vaddss  xmm0, xmm2, xmm4
    vmovss  dword ptr [rsp+0A8h+centerOfMass], xmm1
    vaddss  xmm1, xmm6, dword ptr [rsp+0A8h+aabbMin+8]
    vaddss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+0A8h+centerOfMass+8], xmm2
    vmovss  dword ptr [rsp+0A8h+vectorValue], xmm5
    vmovss  dword ptr [rsp+0A8h+vectorValue+4], xmm4
    vmovss  dword ptr [rsp+0A8h+vectorValue+8], xmm3
    vmovss  dword ptr [rsp+0A8h+centerOfMass+4], xmm0
  }
  Physics_SetRigidBodyCenterOfMass(PHYSICS_WORLD_ID_FIRST, Int, &centerOfMass);
  _R11 = &v34;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rsp+68h+aabbMin], xmm0
    vmovss  dword ptr [rsp+68h+aabbMin+4], xmm0
    vmovss  dword ptr [rsp+68h+aabbMin+8], xmm0
    vmovss  dword ptr [rsp+68h+aabbMax], xmm0
    vmovss  dword ptr [rsp+68h+aabbMax+4], xmm0
    vmovss  dword ptr [rsp+68h+aabbMax+8], xmm0
  }
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
  gentity_s *v8; 
  vec3_t vectorValue; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam - 2 > 1 )
    Scr_Error(COM_ERR_5116, scrContext, "Physics_VolumeCreate should have 2 or 3 params - Physics_VolumeCreate( <position>, <radius>, <height> )");
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5117, scrContext, "Physics_VolumeCreate: Parameter 0 position must be the position - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5118, scrContext, "Physics_VolumeCreate: Parameter 1 radius must be the radius - see usage");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vmovaps xmm7, xmm0
    vxorps  xmm6, xmm6, xmm6
  }
  if ( NumParam == 3 )
  {
    if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
      Scr_Error(COM_ERR_5119, scrContext, "Physics_VolumeCreate: Parameter 2 height must be the height - see usage");
    *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
    __asm { vmovaps xmm6, xmm0 }
  }
  v8 = G_Utils_SpawnEntity();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 6106, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm6; height
    vmovaps xmm2, xmm7; radius
  }
  G_Create_physicsvolume(v8, &vectorValue, *(float *)&_XMM2, *(float *)&_XMM3);
  GScr_AddEntity(v8);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
PhysicsScript_SetBodyLinVel
==============
*/
void PhysicsScript_SetBodyLinVel(scrContext_t *scrContext)
{
  unsigned int Int; 
  int v10; 
  int v11; 
  int v12; 
  vec3_t linVel; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  if ( Scr_GetNumParam(scrContext) != 4 )
    Scr_Error(COM_ERR_5120, scrContext, "Physics_SetBodyLinVel: Invalid parameter count - check usage");
  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5121, scrContext, "Physics_SetBodyLinVel: Invalid Body Id");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vmovss  dword ptr [rsp+68h+linVel], xmm0
    vmovaps xmm6, xmm0
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmovss  dword ptr [rsp+68h+linVel+4], xmm0
    vmovaps xmm7, xmm0
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm
  {
    vmovss  [rsp+68h+var_48], xmm6
    vmovss  dword ptr [rsp+68h+linVel+8], xmm0
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+68h+var_48], xmm7 }
  if ( (v11 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+68h+var_48], xmm0 }
  if ( (v12 & 0x7F800000) == 2139095040 )
LABEL_8:
    Scr_Error(COM_ERR_5122, scrContext, "Physics_SetBodyLinVel: Invalid Velocity");
  Physics_SetRigidBodyLinVel(PHYSICS_WORLD_ID_FIRST, Int, &linVel);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
PhysicsScript_SetBodyAngVel
==============
*/
void PhysicsScript_SetBodyAngVel(scrContext_t *scrContext)
{
  unsigned int Int; 
  int v10; 
  int v11; 
  int v12; 
  vec3_t angVel; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  if ( Scr_GetNumParam(scrContext) != 4 )
    Scr_Error(COM_ERR_5123, scrContext, "Physics_SetBodyAngVel: Invalid parameter count - check usage");
  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5124, scrContext, "Physics_SetBodyAngVel: Invalid Body Id");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vmovss  dword ptr [rsp+68h+angVel], xmm0
    vmovaps xmm6, xmm0
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmovss  dword ptr [rsp+68h+angVel+4], xmm0
    vmovaps xmm7, xmm0
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm
  {
    vmovss  [rsp+68h+var_48], xmm6
    vmovss  dword ptr [rsp+68h+angVel+8], xmm0
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+68h+var_48], xmm7 }
  if ( (v11 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+68h+var_48], xmm0 }
  if ( (v12 & 0x7F800000) == 2139095040 )
LABEL_8:
    Scr_Error(COM_ERR_5125, scrContext, "Physics_SetBodyAngVel: Invalid Velocity");
  Physics_SetRigidBodyAngVel(PHYSICS_WORLD_ID_FIRST, Int, &angVel);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
}

/*
==============
PhysicsScript_SetBodyLinAngVel
==============
*/
void PhysicsScript_SetBodyLinAngVel(scrContext_t *scrContext)
{
  unsigned int Int; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  vec3_t angVel; 
  vec3_t linVel; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
  }
  if ( Scr_GetNumParam(scrContext) != 7 )
    Scr_Error(COM_ERR_5126, scrContext, "Physics_SetBodyLinAngVel: Invalid parameter count - check usage");
  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5127, scrContext, "Physics_SetBodyLinAngVel: Invalid Body Id");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 1u);
  __asm
  {
    vmovss  dword ptr [rsp+78h+linVel], xmm0
    vmovaps xmm6, xmm0
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 2u);
  __asm
  {
    vmovss  dword ptr [rsp+78h+linVel+4], xmm0
    vmovaps xmm7, xmm0
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 3u);
  __asm
  {
    vmovss  [rsp+78h+var_58], xmm6
    vmovss  dword ptr [rsp+78h+linVel+8], xmm0
  }
  if ( (v12 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+78h+var_58], xmm7 }
  if ( (v13 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+78h+var_58], xmm0 }
  if ( (v14 & 0x7F800000) == 2139095040 )
LABEL_8:
    Scr_Error(COM_ERR_5128, scrContext, "Physics_SetBodyLinAngVel: Invalid Linear Velocity");
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 4u);
  __asm
  {
    vmovss  dword ptr [rsp+78h+angVel], xmm0
    vmovaps xmm6, xmm0
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 5u);
  __asm
  {
    vmovss  dword ptr [rsp+78h+angVel+4], xmm0
    vmovaps xmm7, xmm0
  }
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 6u);
  __asm
  {
    vmovss  [rsp+78h+var_58], xmm6
    vmovss  dword ptr [rsp+78h+angVel+8], xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+78h+var_58], xmm7 }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_12;
  __asm { vmovss  [rsp+78h+var_58], xmm0 }
  if ( (v17 & 0x7F800000) == 2139095040 )
LABEL_12:
    Scr_Error(COM_ERR_5129, scrContext, "Physics_SetBodyLinAngVel: Invalid Angular Velocity");
  Physics_SetRigidBodyLinAngVel(PHYSICS_WORLD_ID_FIRST, Int, &linVel, &angVel);
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
}

/*
==============
PhysicsScript_AddQueryPointResults
==============
*/
void PhysicsScript_AddQueryPointResults(scrContext_t *scrContext, const HavokPhysics_CollisionQueryResult *const result, const int hitCount)
{
  int v8; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  char v12; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t scriptable; 
  vec3_t pos; 
  vec3_t normal; 

  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4433, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( hitCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4434, ASSERT_TYPE_ASSERT, "(hitCount > 0)", (const char *)&queryFormat, "hitCount > 0") )
    __debugbreak();
  v8 = 0;
  if ( hitCount > 0 )
  {
    __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
    while ( 1 )
    {
      ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId((HavokPhysics_CollisionQueryResult *)result, v8);
      Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
      EntityNum = Physics_GetEntityNum(Ref);
      v12 = 0;
      if ( Physics_GetRefSystem(Ref) != Physics_RefSystem_Scriptable )
        goto LABEL_12;
      if ( ((Ref >> 22) & 3) == 0 )
        break;
LABEL_18:
      if ( ++v8 >= hitCount )
      {
        __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
        return;
      }
    }
    v12 = 1;
LABEL_12:
    HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition((HavokPhysics_CollisionQueryResult *)result, v8, &pos);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal((HavokPhysics_CollisionQueryResult *)result, v8, &normal);
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance((HavokPhysics_CollisionQueryResult *)result, v8);
    __asm { vmovaps xmm6, xmm0 }
    ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags((HavokPhysics_CollisionQueryResult *)result, v8);
    Scr_MakeArray(scrContext);
    if ( v12 )
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
    __asm { vmovaps xmm1, xmm6; value }
    Scr_AddFloat(scrContext, *(float *)&_XMM1);
    Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
    Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
    Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
    Scr_AddArray(scrContext);
    goto LABEL_18;
  }
}


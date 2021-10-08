/*
==============
G_PhysicsCharacterProxy_Teleport
==============
*/

void __fastcall G_PhysicsCharacterProxy_Teleport(gentity_s *entity, bool bUpdateBroadphase)
{
  ?G_PhysicsCharacterProxy_Teleport@@YAXPEAUgentity_s@@_N@Z(entity, bUpdateBroadphase);
}

/*
==============
G_PhysicsCharacterProxy_AddCharacter
==============
*/

void __fastcall G_PhysicsCharacterProxy_AddCharacter(gentity_s *entity)
{
  ?G_PhysicsCharacterProxy_AddCharacter@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
G_PhysicsCharacterProxy_DebugDrawEntityData
==============
*/

void __fastcall G_PhysicsCharacterProxy_DebugDrawEntityData(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?G_PhysicsCharacterProxy_DebugDrawEntityData@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
G_PhysicsCharacterProxy_GetCollisionBounds
==============
*/

void __fastcall G_PhysicsCharacterProxy_GetCollisionBounds(const DObj *dobj, const entityState_t *es, int suitIndex, EffectiveStance stance, Bounds *outCollisionBounds)
{
  ?G_PhysicsCharacterProxy_GetCollisionBounds@@YAXPEBUDObj@@PEBUentityState_t@@HW4EffectiveStance@@PEAUBounds@@@Z(dobj, es, suitIndex, stance, outCollisionBounds);
}

/*
==============
G_PhysicsCharacterProxy_DumpCharacterData
==============
*/

void G_PhysicsCharacterProxy_DumpCharacterData(void)
{
  ?G_PhysicsCharacterProxy_DumpCharacterData@@YAXXZ();
}

/*
==============
G_PhysicsCharacterProxy_RemoveCharacter
==============
*/

void __fastcall G_PhysicsCharacterProxy_RemoveCharacter(gentity_s *entity)
{
  ?G_PhysicsCharacterProxy_RemoveCharacter@@YAXPEAUgentity_s@@@Z(entity);
}

/*
==============
G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId
==============
*/

unsigned int __fastcall G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId(const gentity_s *entity)
{
  return ?G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId@@YAIPEBUgentity_s@@@Z(entity);
}

/*
==============
G_PhysicsCharacterProxy_Shutdown
==============
*/

void G_PhysicsCharacterProxy_Shutdown(void)
{
  ?G_PhysicsCharacterProxy_Shutdown@@YAXXZ();
}

/*
==============
G_PhysicsCharacterProxy_DebugDrawEntityShapes
==============
*/

void __fastcall G_PhysicsCharacterProxy_DebugDrawEntityShapes(Physics_WorldId worldId)
{
  ?G_PhysicsCharacterProxy_DebugDrawEntityShapes@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
G_PhysicsCharacterProxy_Update
==============
*/

void __fastcall G_PhysicsCharacterProxy_Update(float velocityScale)
{
  ?G_PhysicsCharacterProxy_Update@@YAXM@Z(velocityScale);
}

/*
==============
G_PhysicsCharacterProxy_GetDetailPhysicsInstanceId
==============
*/

unsigned int __fastcall G_PhysicsCharacterProxy_GetDetailPhysicsInstanceId(const gentity_s *entity)
{
  return ?G_PhysicsCharacterProxy_GetDetailPhysicsInstanceId@@YAIPEBUgentity_s@@@Z(entity);
}

/*
==============
G_PhysicsCharacterProxy_Teleport
==============
*/

void __fastcall G_PhysicsCharacterProxy_Teleport(bool bUpdateBroadphase)
{
  ?G_PhysicsCharacterProxy_Teleport@@YAX_N@Z(bUpdateBroadphase);
}

/*
==============
G_PhysicsCharacterProxy_AntilagRestore
==============
*/

void __fastcall G_PhysicsCharacterProxy_AntilagRestore(G_PhysicsCharacterProxy_AntilagRestoreState *restoreStates, unsigned int numRestoreStates, bool permitInvalidRB)
{
  ?G_PhysicsCharacterProxy_AntilagRestore@@YAXPEAUG_PhysicsCharacterProxy_AntilagRestoreState@@I_N@Z(restoreStates, numRestoreStates, permitInvalidRB);
}

/*
==============
G_PhysicsCharacterProxy_PropagateToDetailWorld
==============
*/

void G_PhysicsCharacterProxy_PropagateToDetailWorld(void)
{
  ?G_PhysicsCharacterProxy_PropagateToDetailWorld@@YAXXZ();
}

/*
==============
G_PhysicsCharacterProxy_RemoveAllCharacters
==============
*/

void G_PhysicsCharacterProxy_RemoveAllCharacters(void)
{
  ?G_PhysicsCharacterProxy_RemoveAllCharacters@@YAXXZ();
}

/*
==============
G_PhysicsCharacterProxy_Load
==============
*/

void __fastcall G_PhysicsCharacterProxy_Load(SaveGame *save)
{
  ?G_PhysicsCharacterProxy_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_PhysicsCharacterProxy_Init
==============
*/

void G_PhysicsCharacterProxy_Init(void)
{
  ?G_PhysicsCharacterProxy_Init@@YAXXZ();
}

/*
==============
G_PhysicsCharacterProxy_AntilagTeleport
==============
*/

unsigned int __fastcall G_PhysicsCharacterProxy_AntilagTeleport(gentity_s *entity, bool mainWorld, bool detailWorld, G_PhysicsCharacterProxy_AntilagRestoreState *restoreStates)
{
  return ?G_PhysicsCharacterProxy_AntilagTeleport@@YAIPEAUgentity_s@@_N1PEAUG_PhysicsCharacterProxy_AntilagRestoreState@@@Z(entity, mainWorld, detailWorld, restoreStates);
}

/*
==============
G_PhysicsCharacterProxy_Write
==============
*/

void __fastcall G_PhysicsCharacterProxy_Write(MemoryFile *memFile)
{
  ?G_PhysicsCharacterProxy_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_PhysicsCharacterProxy_AddCharacter
==============
*/
void G_PhysicsCharacterProxy_AddCharacter(gentity_s *entity)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 
  __int64 v4; 
  gentity_s **v5; 
  __int64 v6; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 363, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity", -2i64) )
    __debugbreak();
  if ( !G_PhysicsCharacterProxy_IsEntityRightType(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 364, ASSERT_TYPE_ASSERT, "( G_PhysicsCharacterProxy_IsEntityRightType( entity ) )", (const char *)&queryFormat, "G_PhysicsCharacterProxy_IsEntityRightType( entity )") )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_AddCharacter");
  v4 = 0i64;
  v5 = s_g_physicsCharacterProxyEntities;
  while ( *v5 != entity )
  {
    if ( !*v5 )
    {
      s_g_physicsCharacterProxyEntities[v4] = entity;
      ++s_g_physicsCharacterProxyEntityCount;
      s_g_physicsCharacterProxyIndices[entity->s.number] = truncate_cast<short,unsigned int>(v4 + 1);
      G_PhysicsCharacterProxy_CreatePhysics(v4);
      break;
    }
    v4 = (unsigned int)(v4 + 1);
    ++v5;
    if ( (unsigned int)v4 >= 0xF8 )
    {
      G_PhysicsCharacterProxy_DumpCharacterData();
      LODWORD(v6) = 248;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 416, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Ran out of Character Proxies on the server - you have more than %i characters (Players/AI/Bots/Drones etc)", v6) )
        __debugbreak();
      break;
    }
  }
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
G_PhysicsCharacterProxy_AntilagRestore
==============
*/
void G_PhysicsCharacterProxy_AntilagRestore(G_PhysicsCharacterProxy_AntilagRestoreState *restoreStates, unsigned int numRestoreStates, bool permitInvalidRB)
{
  __int64 v3; 
  unsigned int *p_bodyId; 
  bool IsRigidBodyValid; 

  v3 = numRestoreStates;
  if ( !restoreStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1019, ASSERT_TYPE_ASSERT, "(restoreStates)", (const char *)&queryFormat, "restoreStates") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x1F0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1020, ASSERT_TYPE_ASSERT, "(numRestoreStates < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS_RESTORE_STATES)", (const char *)&queryFormat, "numRestoreStates < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS_RESTORE_STATES") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "G_PhysicsCharacterProxy_AntilagRestore");
  if ( (_DWORD)v3 )
  {
    p_bodyId = &restoreStates->bodyId;
    while ( 1 )
    {
      if ( *(p_bodyId - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1027, ASSERT_TYPE_ASSERT, "(Physics_IsServerWorld( restoreState.worldId ))", (const char *)&queryFormat, "Physics_IsServerWorld( restoreState.worldId )") )
        __debugbreak();
      IsRigidBodyValid = Physics_IsRigidBodyValid((Physics_WorldId)*(p_bodyId - 1), *p_bodyId);
      if ( !permitInvalidRB )
        break;
      if ( IsRigidBodyValid )
        goto LABEL_18;
LABEL_19:
      p_bodyId += 9;
      if ( !--v3 )
        goto LABEL_20;
    }
    if ( !IsRigidBodyValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1035, ASSERT_TYPE_ASSERT, "(isRigidBodyValid)", (const char *)&queryFormat, "isRigidBodyValid") )
      __debugbreak();
LABEL_18:
    Physics_AntilagRestoreRigidBodyTo((const Physics_WorldId)*(p_bodyId - 1), *p_bodyId, (const vec3_t *)(p_bodyId + 1), (const vec4_t *)p_bodyId + 1);
    goto LABEL_19;
  }
LABEL_20:
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PhysicsCharacterProxy_AntilagTeleport
==============
*/
__int64 G_PhysicsCharacterProxy_AntilagTeleport(gentity_s *entity, bool mainWorld, bool detailWorld, G_PhysicsCharacterProxy_AntilagRestoreState *restoreStates)
{
  __int16 v8; 
  unsigned int v10; 
  const playerState_s *EntityPlayerStateConst; 
  GAntiLag *AntiLag; 
  GHandler *Handler; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  G_PhysicsCharacterProxy_AntilagRestoreState *v22; 
  __int64 v23; 
  hknpBodyId result; 
  vec4_t quat; 
  WorldUpReferenceFrame v26; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 901, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !detailWorld && !mainWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 902, ASSERT_TYPE_ASSERT, "( mainWorld | detailWorld )", (const char *)&queryFormat, "mainWorld | detailWorld") )
    __debugbreak();
  if ( !restoreStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 903, ASSERT_TYPE_ASSERT, "( restoreStates )", (const char *)&queryFormat, "restoreStates") )
    __debugbreak();
  v8 = s_g_physicsCharacterProxyIndices[entity->s.number];
  if ( !v8 )
    return 0i64;
  v10 = v8 - 1;
  if ( !G_PhysicsCharacterProxy_IsEntityRightType(entity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 917, ASSERT_TYPE_ASSERT, "(G_PhysicsCharacterProxy_IsEntityRightType( entity ))", (const char *)&queryFormat, "G_PhysicsCharacterProxy_IsEntityRightType( entity )") )
    __debugbreak();
  AnglesToQuat(&entity->r.currentAngles, &quat);
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(entity);
  if ( EntityPlayerStateConst )
  {
    AntiLag = GAntiLag::GetAntiLag();
    if ( !AntiLag->IsWorldUpIncludedOnEntity(AntiLag, EntityPlayerStateConst->clientNum) )
    {
      Handler = GHandler::getHandler();
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v26, EntityPlayerStateConst, Handler);
      WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v26, &quat);
    }
  }
  v14 = 0;
  if ( mainWorld )
  {
    v15 = s_g_physicsCharacterProxyInstances[v10][1];
    if ( v15 != -1 )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( !g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", 0) )
        __debugbreak();
      if ( !g_havokPhysicsWorlds[0].world )
      {
        LODWORD(v23) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v23) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[0].instanceManager, v15) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 960, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1") )
        __debugbreak();
      v16 = s_g_physicsCharacterProxyBodies[v10][1];
      if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 962, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( PHYSICS_WORLD_ID_SERVER_MAIN, bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( PHYSICS_WORLD_ID_SERVER_MAIN, bodyId )") )
        __debugbreak();
      v17 = s_g_physicsCharacterProxyInstances[v10][1];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v17 == -1 )
      {
        LODWORD(v23) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v23) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v23) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v23) )
          __debugbreak();
      }
      if ( v16 != HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v17, 0)->m_serialAndIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 963, ASSERT_TYPE_ASSERT, "(bodyId == Physics_GetRigidBodyID( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type], 0 ))", (const char *)&queryFormat, "bodyId == Physics_GetRigidBodyID( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type], 0 )") )
        __debugbreak();
      if ( Physics_AntilagWarpRigidBodyTo(PHYSICS_WORLD_ID_FIRST, v16, &entity->r.currentOrigin, &quat, &restoreStates->origin, &restoreStates->orientation) )
      {
        restoreStates->worldId = PHYSICS_WORLD_ID_FIRST;
        v14 = 1;
        restoreStates->bodyId = v16;
      }
    }
  }
  if ( detailWorld )
  {
    v18 = v10;
    if ( s_g_physicsCharacterProxyDetailInstances[v18][0] != -1 )
    {
      if ( G_PhysicsCharacterProxy_EntityChangedShape(v10, PHYSICS_CHARACTERPROXY_TYPE_DETAIL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 985, ASSERT_TYPE_ASSERT, "(!G_PhysicsCharacterProxy_EntityChangedShape( characterIdx, type ))", (const char *)&queryFormat, "!G_PhysicsCharacterProxy_EntityChangedShape( characterIdx, type )") )
        __debugbreak();
      v19 = s_g_physicsCharacterProxyDetailInstances[v18][0];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v19 == -1 )
      {
        LODWORD(v23) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v23) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v23) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v23) )
          __debugbreak();
      }
      if ( v19 == -1 )
      {
        LODWORD(v23) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v23) )
          __debugbreak();
      }
      if ( !g_havokPhysicsWorlds[1].world )
      {
        LODWORD(v23) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v23) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[1].instanceManager, v19) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 991, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1") )
        __debugbreak();
      v20 = s_g_physicsCharacterProxyDetailBodies[v18][0];
      if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_SERVER_DETAIL, v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 993, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyValid( PHYSICS_WORLD_ID_SERVER_DETAIL, bodyDetailId ))", (const char *)&queryFormat, "Physics_IsRigidBodyValid( PHYSICS_WORLD_ID_SERVER_DETAIL, bodyDetailId )") )
        __debugbreak();
      v21 = s_g_physicsCharacterProxyDetailInstances[v18][0];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v21 == -1 )
      {
        LODWORD(v23) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v23) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v23) = 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v23) )
          __debugbreak();
      }
      if ( v20 != HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_SERVER_DETAIL, v21, 0)->m_serialAndIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 994, ASSERT_TYPE_ASSERT, "(bodyDetailId == Physics_GetRigidBodyID( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type], 0 ))", (const char *)&queryFormat, "bodyDetailId == Physics_GetRigidBodyID( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type], 0 )") )
        __debugbreak();
      v22 = &restoreStates[v14];
      if ( Physics_AntilagWarpRigidBodyTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v20, &entity->r.currentOrigin, &quat, &v22->origin, &v22->orientation) )
      {
        v22->worldId = PHYSICS_WORLD_ID_SERVER_DETAIL;
        ++v14;
        v22->bodyId = v20;
      }
    }
  }
  return v14;
}

/*
==============
G_PhysicsCharacterProxy_CalcEncapsulatingShape
==============
*/
void G_PhysicsCharacterProxy_CalcEncapsulatingShape(unsigned int characterIdx, PhysicsCharacterProxy_Capsule *capsule, Physics_CharacterProxy_Type type)
{
  __int64 v5; 
  int v8; 
  gentity_s *v9; 
  DObj *ServerDObjForEntnum; 
  const DObj *v11; 
  EffectiveStance v12; 
  XModelCharCollBoundsType characterCollBoundsType; 
  __int64 v15; 
  __int64 v16; 
  Bounds outCollisionBounds; 

  v5 = characterIdx;
  if ( characterIdx >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 145, ASSERT_TYPE_ASSERT, "(unsigned)( characterIdx ) < (unsigned)( PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS )", "characterIdx doesn't index PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS\n\t%i not in [0, %i)", characterIdx, 248) )
    __debugbreak();
  v8 = 0;
  if ( !capsule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 146, ASSERT_TYPE_ASSERT, "( capsule ) != ( nullptr )", "%s != %s\n\t%p, %p", "capsule", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( (unsigned int)type >= NUM_PHYSICS_CHARACTERPROXY_TYPES )
  {
    LODWORD(v16) = 2;
    LODWORD(v15) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 147, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( NUM_PHYSICS_CHARACTERPROXY_TYPES )", "type doesn't index NUM_PHYSICS_CHARACTERPROXY_TYPES\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v9 = s_g_physicsCharacterProxyEntities[v5];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 151, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  ServerDObjForEntnum = Com_GetServerDObjForEntnum(v9->s.number);
  v11 = ServerDObjForEntnum;
  if ( type )
  {
    if ( type == PHYSICS_CHARACTERPROXY_TYPE_COLLISION )
    {
      v12 = PM_EFF_STANCE_DEFAULT;
      if ( BG_IsPlayerOrAgentEntity(&v9->s) )
      {
        if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
          __debugbreak();
        v8 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)v9->s.number) + 5224);
        v12 = BG_EstimateEffectiveStance(&v9->s);
      }
      G_PhysicsCharacterProxy_GetCollisionBounds(v11, &v9->s, v8, v12, &outCollisionBounds);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 210, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid Character Proxy Type") )
    {
      __debugbreak();
    }
  }
  else if ( ServerDObjForEntnum && ServerDObjForEntnum->numModels )
  {
    if ( (v9->r.svFlags & 8) != 0 )
    {
      *(double *)&_XMM0 = DObjGetRadius(ServerDObjForEntnum);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  dword ptr [rsp+98h+outCollisionBounds.midPoint], xmm1
        vmovss  dword ptr [rsp+98h+outCollisionBounds.midPoint+4], xmm1
        vmovss  dword ptr [rsp+98h+outCollisionBounds.midPoint+8], xmm1
        vmovss  dword ptr [rsp+98h+outCollisionBounds.halfSize], xmm0
        vmovss  dword ptr [rsp+98h+outCollisionBounds.halfSize+4], xmm0
        vmovss  dword ptr [rsp+98h+outCollisionBounds.halfSize+8], xmm0
      }
    }
    else
    {
      characterCollBoundsType = (*ServerDObjForEntnum->models)->characterCollBoundsType;
      if ( (unsigned int)characterCollBoundsType >= CharCollBoundsType_Num )
      {
        LODWORD(v16) = 10;
        LODWORD(v15) = (*ServerDObjForEntnum->models)->characterCollBoundsType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( collBoundsType ) < (unsigned)( XModelCharCollBoundsType::CharCollBoundsType_Num )", "collBoundsType doesn't index XModelCharCollBoundsType::CharCollBoundsType_Num\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      PhysicsCharacterProxy_GetEncapsulatingBounds(&outCollisionBounds, characterCollBoundsType);
    }
  }
  else
  {
    PhysicsCharacterProxy_GetEncapsulatingBounds(&outCollisionBounds);
  }
  PhysicsCharacterProxy_CalcCapsule(&outCollisionBounds, capsule);
}

/*
==============
G_PhysicsCharacterProxy_Clear
==============
*/
__int64 G_PhysicsCharacterProxy_Clear()
{
  __int64 v0; 
  __int64 result; 

  memset_0(s_g_physicsCharacterProxyEntities, 0, sizeof(s_g_physicsCharacterProxyEntities));
  v0 = 0i64;
  s_g_physicsCharacterProxyEntityCount = 0;
  memset_0(s_g_physicsCharacterProxyIndices, 0, sizeof(s_g_physicsCharacterProxyIndices));
  memset_0(s_g_physicsCharacterProxyShapes, 0, sizeof(s_g_physicsCharacterProxyShapes));
  result = 248i64;
  do
  {
    *(_QWORD *)&s_g_physicsCharacterProxyInstances[v0][0] = -1i64;
    *(_QWORD *)&s_g_physicsCharacterProxyDetailInstances[v0][0] = -1i64;
    s_g_physicsCharacterProxyBodies[v0][0] = 0xFFFFFF;
    s_g_physicsCharacterProxyDetailBodies[v0][0] = 0xFFFFFF;
    s_g_physicsCharacterProxyBodies[v0][1] = 0xFFFFFF;
    s_g_physicsCharacterProxyDetailBodies[v0++][1] = 0xFFFFFF;
    --result;
  }
  while ( result );
  return result;
}

/*
==============
G_PhysicsCharacterProxy_CreatePhysics
==============
*/
void G_PhysicsCharacterProxy_CreatePhysics(unsigned int characterIdx)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_CreatePhysics");
  G_PhysicsCharacterProxy_CreatePhysics_0(characterIdx, PHYSICS_CHARACTERPROXY_TYPE_DETAIL);
  G_PhysicsCharacterProxy_CreatePhysics_0(characterIdx, PHYSICS_CHARACTERPROXY_TYPE_COLLISION);
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
G_PhysicsCharacterProxy_DebugDrawEntityData
==============
*/

void __fastcall G_PhysicsCharacterProxy_DebugDrawEntityData(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  hkMonitorStream *Value; 
  unsigned int v17; 
  gentity_s **v19; 
  __int64 v20; 
  gentity_s *v21; 
  __int16 eType; 
  const char *v23; 
  const char *v24; 
  vec4_t *setColor; 
  float v34; 
  float v35; 
  hkMonitorStream *v36; 
  char dest[256]; 
  char v38; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmm7, xmm3
  }
  _R14 = y;
  _RBP = x;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v36 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_DebugDrawEntityData");
  Com_sprintf(dest, 0x100ui64, "Server Entities");
  __asm
  {
    vmovss  xmm6, [rsp+1D8h+charHeight]
    vmovss  [rsp+1D8h+var_1A0], xmm6
    vmovss  xmm2, dword ptr [r14]; y
    vmovss  xmm1, dword ptr [rbp+0]; x
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v34, 0);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [r14]
    vmovss  dword ptr [r14], xmm0
  }
  v17 = 0;
  __asm
  {
    vaddss  xmm0, xmm7, dword ptr [rbp+0]
    vmovss  dword ptr [rbp+0], xmm0
  }
  v19 = s_g_physicsCharacterProxyEntities;
  v20 = 248i64;
  do
  {
    v21 = *v19;
    if ( *v19 )
    {
      eType = v21->s.eType;
      v23 = "UNSUPPORTED TYPE";
      if ( eType == 1 )
        v23 = "PLAYER";
      if ( eType == 17 )
        v23 = "AGENT";
      if ( eType == 19 )
        v23 = "ACTOR";
      if ( eType == 6 )
      {
        v24 = "DRONE";
        if ( v21->s.un.scriptMoverType != 1 )
          v24 = v23;
        v23 = v24;
      }
      LODWORD(setColor) = v21->s.number;
      Com_sprintf(dest, 0x100ui64, "%i entity %i %s", v17, setColor, v23);
      __asm
      {
        vmovss  [rsp+1D8h+var_1A0], xmm6
        vmovss  xmm2, dword ptr [r14]; y
        vmovss  xmm1, dword ptr [rbp+0]; x
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v35, 0);
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [r14]
        vmovss  dword ptr [r14], xmm0
      }
      ++v17;
    }
    ++v19;
    --v20;
  }
  while ( v20 );
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vsubss  xmm1, xmm0, xmm7
    vmovss  dword ptr [rbp+0], xmm1
  }
  if ( v36 )
    hkMonitorStream::timerEnd(v36, "Et");
  _R11 = &v38;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
G_PhysicsCharacterProxy_DebugDrawEntityShapes
==============
*/
void G_PhysicsCharacterProxy_DebugDrawEntityShapes(Physics_WorldId worldId)
{
  hkMonitorStream *Value; 
  __int64 v14; 
  float *v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int *v21; 
  __int64 v23; 
  __int64 v24; 
  unsigned int v25; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v27; 
  unsigned int m_serialAndIndex; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v30; 
  char v54; 
  __int64 duration; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  float *v72; 
  __int64 v73; 
  hknpBodyId result[2]; 
  hkMonitorStream *v75; 
  __int64 v76; 
  __int64 v77; 
  vec3_t center; 
  vec3_t end; 
  int v80[4]; 
  vec3_t in; 
  vec3_t v82; 
  vec4_t out; 
  char v84; 
  void *retaddr; 

  _RAX = &retaddr;
  v76 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = (__int64)Value;
  v75 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_DebugDrawEntityShapes");
  v77 = v14;
  v15 = &s_g_physicsCharacterProxyCapsules[0][0].center.v[1];
  v72 = &s_g_physicsCharacterProxyCapsules[0][0].center.v[1];
  v16 = 0i64;
  v71 = 0i64;
  v17 = 248i64;
  v73 = 248i64;
  __asm
  {
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm13, xmm13, xmm13
    vmovss  xmm14, cs:__real@42000000
  }
  do
  {
    if ( !*(gentity_s **)((char *)s_g_physicsCharacterProxyEntities + v16) )
      goto LABEL_92;
    v21 = (unsigned int *)((char *)s_g_physicsCharacterProxyInstances[0] + v16);
    _R15 = v15;
    v23 = 2i64;
    v70 = 2i64;
    do
    {
      if ( *v21 == -1 )
        goto LABEL_90;
      if ( _R15 == (float *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1416, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
        __debugbreak();
      __asm
      {
        vmovss  [rbp+0B0h+var_110], xmm13
        vmovss  [rbp+0B0h+var_10C], xmm13
        vmovss  [rbp+0B0h+var_108], xmm13
      }
      v24 = *((int *)_R15 + 4);
      if ( (unsigned int)v24 >= 3 )
      {
        LODWORD(v69) = 3;
        *(float *)&duration = _R15[4];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v69) )
          __debugbreak();
      }
      v80[v24] = 1065353216;
      v25 = *v21;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v69) )
          __debugbreak();
      }
      if ( v25 == -1 )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v69) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v69) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        if ( worldId < PHYSICS_WORLD_ID_FIRST )
          goto LABEL_32;
        if ( worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v69) = worldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v69) )
            __debugbreak();
        }
      }
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
LABEL_32:
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v69) )
          __debugbreak();
      }
      if ( v25 == -1 )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v69) )
          __debugbreak();
      }
      ConstWorld = HavokPhysics_GetConstWorld(worldId);
      if ( !ConstWorld->world )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v69) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v25) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1424, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( worldId, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( worldId, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1") )
        __debugbreak();
      v27 = *v21;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v69) )
          __debugbreak();
      }
      if ( v27 == -1 )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v69) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v69) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v69) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, worldId, v27, 0)->m_serialAndIndex;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v69) )
          __debugbreak();
      }
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v69) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v69) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v69) )
          __debugbreak();
      }
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v69) )
          __debugbreak();
      }
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v69) )
          __debugbreak();
      }
      world = HavokPhysics_GetConstWorld(worldId)->world;
      if ( !world )
      {
        LODWORD(v69) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v69) )
          __debugbreak();
      }
      v30 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
      __asm
      {
        vmulss  xmm10, xmm14, dword ptr [rax+30h]
        vmulss  xmm11, xmm14, dword ptr [rax+34h]
        vmulss  xmm12, xmm14, dword ptr [rax+38h]
      }
      Axis34ToQuat(v30, &out);
      __asm
      {
        vmovss  xmm7, dword ptr [r15+8]
        vxorps  xmm2, xmm7, xmm15
        vmulss  xmm0, xmm2, [rbp+0B0h+var_110]
        vaddss  xmm1, xmm0, dword ptr [r13+0]
        vmovss  dword ptr [rbp+0B0h+in], xmm1
        vmulss  xmm0, xmm2, [rbp+0B0h+var_10C]
        vaddss  xmm1, xmm0, dword ptr [r15]
        vmovss  dword ptr [rbp+0B0h+in+4], xmm1
        vmulss  xmm0, xmm2, [rbp+0B0h+var_108]
        vaddss  xmm1, xmm0, dword ptr [r15+4]
        vmovss  dword ptr [rbp+0B0h+in+8], xmm1
        vmulss  xmm0, xmm7, [rbp+0B0h+var_110]
        vaddss  xmm1, xmm0, dword ptr [r13+0]
        vmovss  dword ptr [rbp+0B0h+var_F0], xmm1
        vmulss  xmm2, xmm7, [rbp+0B0h+var_10C]
        vaddss  xmm0, xmm2, dword ptr [r15]
        vmovss  dword ptr [rbp+0B0h+var_F0+4], xmm0
        vmulss  xmm1, xmm7, [rbp+0B0h+var_108]
        vaddss  xmm2, xmm1, dword ptr [r15+4]
        vmovss  dword ptr [rbp+0B0h+var_F0+8], xmm2
      }
      QuatTransform(&out, &in, &center);
      QuatTransform(&out, &v82, &end);
      __asm
      {
        vaddss  xmm1, xmm10, dword ptr [rbp+0B0h+center]
        vmovss  dword ptr [rbp+0B0h+center], xmm1
        vaddss  xmm0, xmm11, dword ptr [rbp+0B0h+center+4]
        vmovss  dword ptr [rbp+0B0h+center+4], xmm0
        vaddss  xmm2, xmm12, dword ptr [rbp+0B0h+center+8]
        vmovss  dword ptr [rbp+0B0h+center+8], xmm2
        vaddss  xmm1, xmm10, dword ptr [rbp+0B0h+end]
        vmovss  dword ptr [rbp+0B0h+end], xmm1
        vaddss  xmm0, xmm11, dword ptr [rbp+0B0h+end+4]
        vmovss  dword ptr [rbp+0B0h+end+4], xmm0
        vaddss  xmm2, xmm12, dword ptr [rbp+0B0h+end+8]
        vmovss  dword ptr [rbp+0B0h+end+8], xmm2
        vucomiss xmm13, dword ptr [r15+8]
      }
      if ( v54 )
      {
        __asm { vmovss  xmm1, dword ptr [r15+0Ch]; radius }
        G_DebugSphere(&center, *(float *)&_XMM1, &colorWhite, 1, 3);
      }
      else
      {
        __asm { vmovss  xmm2, dword ptr [r15+0Ch]; radius }
        G_DebugCapsule(&center, &end, *(float *)&_XMM2, &colorWhite, 1, 3);
      }
      v23 = v70;
LABEL_90:
      _R15 += 6;
      ++v21;
      v70 = --v23;
    }
    while ( v23 );
    v16 = v71;
    v15 = v72;
    v17 = v73;
LABEL_92:
    v16 += 8i64;
    v71 = v16;
    v15 += 12;
    v72 = v15;
    v73 = --v17;
  }
  while ( v17 );
  if ( v75 )
    hkMonitorStream::timerEnd(v75, "Et");
  _R11 = &v84;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
G_PhysicsCharacterProxy_DumpCharacterData
==============
*/
void G_PhysicsCharacterProxy_DumpCharacterData()
{
  const gentity_s **v3; 
  unsigned int v4; 
  const gentity_s *v5; 
  unsigned int number; 
  const char *EntityTypeName; 
  const char *v9; 
  const char *v10; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  scr_string_t UnitType; 
  const char *v17; 
  DObj *ServerDObjForEntnum; 
  double v25; 
  double v26; 
  double v27; 
  AIActorInterface v28; 
  AIAgentInterface v29; 
  AIScriptedInterface *v30; 

  Com_Printf(15, "Physics Character Proxies on the Server:\n");
  v3 = (const gentity_s **)s_g_physicsCharacterProxyEntities;
  v4 = 0;
  __asm
  {
    vmovaps [rsp+0F8h+var_38], xmm6
    vmovaps [rsp+0F8h+var_48], xmm7
    vmovaps [rsp+0F8h+var_58], xmm8
  }
  do
  {
    v5 = *v3;
    if ( !*v3 )
      goto LABEL_26;
    number = v5->s.number;
    EntityTypeName = G_GetEntityTypeName(v5);
    _RBX = *v3;
    v9 = EntityTypeName;
    v10 = "Unknown";
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+130h]
      vmovss  xmm7, dword ptr [rbx+134h]
      vmovss  xmm8, dword ptr [rbx+138h]
    }
    AIActorInterface::AIActorInterface(&v28);
    AIAgentInterface::AIAgentInterface(&v29);
    v30 = NULL;
    v29.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( _RBX->agent && SV_Agent_IsScripted(_RBX->s.number) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(_RBX);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v29, ScriptedAgentInfo);
      v30 = &v29;
    }
    else
    {
      actor = _RBX->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v28, _RBX->actor);
        v30 = &v28;
      }
      else if ( !v30 )
      {
        goto LABEL_22;
      }
    }
    UnitType = AIScriptedInterface::GetUnitType(v30);
    v10 = SL_ConvertToString(UnitType);
LABEL_22:
    v17 = "Unknown";
    ServerDObjForEntnum = Com_GetServerDObjForEntnum(number);
    if ( ServerDObjForEntnum && ServerDObjForEntnum->numModels )
      v17 = **(const char ***)ServerDObjForEntnum->models;
    __asm
    {
      vcvtss2sd xmm0, xmm8, xmm8
      vmovsd  [rsp+0F8h+var_C0], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+0F8h+var_C8], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  [rsp+0F8h+var_D0], xmm2
    }
    Com_Printf(15, " Entry:%i Entity:%i Type:%s Position:(%.2f, %.2f, %.2f) UnitType:%s ModelName:%s\n", v4, number, v9, v25, v26, v27, v10, v17);
LABEL_26:
    ++v4;
    ++v3;
  }
  while ( v4 < 0xF8 );
  __asm
  {
    vmovaps xmm8, [rsp+0F8h+var_58]
    vmovaps xmm7, [rsp+0F8h+var_48]
    vmovaps xmm6, [rsp+0F8h+var_38]
  }
  Com_Printf(15, "End Physics Character Proxies on the Server\n");
}

/*
==============
G_PhysicsCharacterProxy_EntityChangedShape
==============
*/
bool G_PhysicsCharacterProxy_EntityChangedShape(unsigned int entityId, Physics_CharacterProxy_Type type)
{
  __int64 v2; 
  __int64 v3; 
  const gentity_s *v4; 
  bool result; 
  PhysicsCharacterProxy_Capsule capsule; 

  v2 = type;
  v3 = entityId;
  if ( entityId >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 223, ASSERT_TYPE_ASSERT, "(entityId < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS)", (const char *)&queryFormat, "entityId < PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS") )
    __debugbreak();
  v4 = s_g_physicsCharacterProxyEntities[v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 227, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  result = G_PhysicsCharacterProxy_IsEntityValid(v4);
  if ( result )
  {
    G_PhysicsCharacterProxy_CalcEncapsulatingShape(v3, &capsule, (Physics_CharacterProxy_Type)v2);
    return PhysicsCharacterProxy_DoCapsulesVary(&s_g_physicsCharacterProxyCapsules[v3][v2], &capsule);
  }
  return result;
}

/*
==============
G_PhysicsCharacterProxy_GetCollisionBounds
==============
*/
void G_PhysicsCharacterProxy_GetCollisionBounds(const DObj *dobj, const entityState_t *es, int suitIndex, EffectiveStance stance, Bounds *outCollisionBounds)
{
  unsigned int characterCollBoundsType; 
  __int64 v20; 
  __int64 v21; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 557, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  _RBX = outCollisionBounds;
  if ( !outCollisionBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 558, ASSERT_TYPE_ASSERT, "(outCollisionBounds)", (const char *)&queryFormat, "outCollisionBounds") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?playerBox@@3UBounds@@B.midPoint; Bounds const playerBox
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr cs:?playerBox@@3UBounds@@B.halfSize+4; Bounds const playerBox
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((es->eType - 1) & 0xFFEF) == 0 )
  {
    if ( (unsigned int)stance >= PM_EFF_STANCE_COUNT )
    {
      LODWORD(v20) = stance;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( stance ) ) < (unsigned)( static_cast<int>( PM_EFF_STANCE_COUNT ) )", "static_cast<int>( stance ) doesn't index static_cast<int>( PM_EFF_STANCE_COUNT )\n\t%i not in [0, %i)", v20, 4) )
        __debugbreak();
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_OFFHAND_END|0x80) || es->eType != ET_PLAYER )
      stance = PM_EFF_STANCE_DEFAULT;
    _RAX = BG_Suit_GetBounds(suitIndex, stance);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rbx], xmm0
      vmovsd  xmm1, qword ptr [rax+10h]
      vmovsd  qword ptr [rbx+10h], xmm1
    }
  }
  if ( dobj && dobj->numModels )
  {
    characterCollBoundsType = (*dobj->models)->characterCollBoundsType;
    if ( characterCollBoundsType >= 0xA )
    {
      LODWORD(v21) = 10;
      LODWORD(v20) = (*dobj->models)->characterCollBoundsType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 577, ASSERT_TYPE_ASSERT, "(unsigned)( collBoundsType ) < (unsigned)( XModelCharCollBoundsType::CharCollBoundsType_Num )", "collBoundsType doesn't index XModelCharCollBoundsType::CharCollBoundsType_Num\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    if ( characterCollBoundsType == 1 )
    {
      if ( ((es->eType - 19) & 0xFFFD) == 0 && (es->lerp.u.actor.flags & 1) != 0 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?actorBox@@3UBounds@@B.midPoint; Bounds const actorBox
          vmovups xmmword ptr [rbx], xmm0
          vmovsd  xmm1, qword ptr cs:?actorBox@@3UBounds@@B.halfSize+4; Bounds const actorBox
          vshufps xmm2, xmm1, xmm1, 55h ; 'U'
          vsubss  xmm0, xmm2, cs:__real@42240000
          vmovsd  qword ptr [rbx+10h], xmm1
          vmovss  dword ptr [rbx+8], xmm0
          vmovss  dword ptr [rbx+14h], xmm2
        }
      }
    }
    else
    {
      PhysicsCharacterProxy_GetCollisionBounds(outCollisionBounds, characterCollBoundsType != 0);
    }
  }
}

/*
==============
G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId
==============
*/
__int64 G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId(const gentity_s *entity)
{
  unsigned int v2; 
  const gentity_s **v3; 
  __int64 v5; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 509, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v2 = 0;
  v3 = (const gentity_s **)s_g_physicsCharacterProxyEntities;
  while ( entity != *v3 )
  {
    if ( entity == v3[1] )
    {
      ++v2;
      break;
    }
    if ( entity == v3[2] )
    {
      v2 += 2;
      break;
    }
    if ( entity == v3[3] )
    {
      v2 += 3;
      break;
    }
    v3 += 4;
    v2 += 4;
    if ( v2 >= 0xF8 )
      goto LABEL_15;
  }
  if ( v2 < 0xF8 )
    return s_g_physicsCharacterProxyInstances[v2][1];
LABEL_15:
  LODWORD(v5) = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 522, ASSERT_TYPE_ASSERT, "(unsigned)( characterIdx ) < (unsigned)( PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS )", "characterIdx doesn't index PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS\n\t%i not in [0, %i)", v5, 248) )
    __debugbreak();
  return s_g_physicsCharacterProxyInstances[v2][1];
}

/*
==============
G_PhysicsCharacterProxy_GetDetailPhysicsInstanceId
==============
*/
__int64 G_PhysicsCharacterProxy_GetDetailPhysicsInstanceId(const gentity_s *entity)
{
  unsigned int v2; 
  const gentity_s **v3; 
  __int64 v5; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 533, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v2 = 0;
  v3 = (const gentity_s **)s_g_physicsCharacterProxyEntities;
  while ( entity != *v3 )
  {
    if ( entity == v3[1] )
    {
      ++v2;
      break;
    }
    if ( entity == v3[2] )
    {
      v2 += 2;
      break;
    }
    if ( entity == v3[3] )
    {
      v2 += 3;
      break;
    }
    v3 += 4;
    v2 += 4;
    if ( v2 >= 0xF8 )
      goto LABEL_15;
  }
  if ( v2 < 0xF8 )
    return s_g_physicsCharacterProxyDetailInstances[v2][1];
LABEL_15:
  LODWORD(v5) = v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 546, ASSERT_TYPE_ASSERT, "(unsigned)( characterIdx ) < (unsigned)( PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS )", "characterIdx doesn't index PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS\n\t%i not in [0, %i)", v5, 248) )
    __debugbreak();
  return s_g_physicsCharacterProxyDetailInstances[v2][1];
}

/*
==============
G_PhysicsCharacterProxy_Init
==============
*/

void G_PhysicsCharacterProxy_Init(void)
{
  G_PhysicsCharacterProxy_Clear();
}

/*
==============
G_PhysicsCharacterProxy_IsEntityRightType
==============
*/
bool G_PhysicsCharacterProxy_IsEntityRightType(const gentity_s *entity)
{
  entityType_s eType; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 108, ASSERT_TYPE_ASSERT, "( entity ) != ( nullptr )", "%s != %s\n\t%p, %p", "entity", "nullptr", NULL, NULL) )
    __debugbreak();
  eType = entity->s.eType;
  return eType == ET_SCRIPTMOVER && entity->s.un.scriptMoverType == 1 || ((eType - 1) & 0xFFED) == 0 && eType != ET_ITEM;
}

/*
==============
G_PhysicsCharacterProxy_IsEntityValid
==============
*/
bool G_PhysicsCharacterProxy_IsEntityValid(const gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 124, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return G_PhysicsCharacterProxy_IsEntityRightType(entity) && entity->health > 0;
}

/*
==============
G_PhysicsCharacterProxy_Load
==============
*/
void G_PhysicsCharacterProxy_Load(SaveGame *save)
{
  hkMonitorStream *Value; 
  __int16 *v3; 
  unsigned int v4; 
  gentity_s *v5; 
  __int64 v6; 
  hknpShape *(*v7)[248][2]; 
  __int64 v8; 
  _QWORD *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int m_serialAndIndex; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  hknpShape *Shape; 
  hknpShape *v19; 
  __int64 v20; 
  __int64 v21; 
  hkMonitorStream *v22; 
  hknpBodyId p; 
  hknpBodyId result; 
  hknpShape *(*v25)[248][2]; 
  __int64 v26; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v22 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysicsCharacterProxy_Load");
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  s_g_physicsCharacterProxyEntityCount = p.m_serialAndIndex;
  v3 = s_g_physicsCharacterProxyIndices;
  SaveMemory_LoadRead(s_g_physicsCharacterProxyIndices, 4096, save);
  SaveMemory_LoadRead(s_g_physicsCharacterProxyCapsules, 11904, save);
  SaveMemory_LoadRead(s_g_physicsCharacterProxyInstances, 1984, save);
  SaveMemory_LoadRead(s_g_physicsCharacterProxyDetailInstances, 1984, save);
  SaveMemory_LoadRead(s_g_physicsCharacterProxyBodies, 1984, save);
  SaveMemory_LoadRead(s_g_physicsCharacterProxyDetailBodies, 1984, save);
  memset_0(s_g_physicsCharacterProxyEntities, 0, sizeof(s_g_physicsCharacterProxyEntities));
  v4 = 0;
  v5 = g_entities;
  do
  {
    if ( *v3 )
      s_g_physicsCharacterProxyEntities[*v3 - 1] = &v5[v4];
    ++v4;
    ++v3;
  }
  while ( v4 < 0x800 );
  v6 = 0i64;
  v26 = 0i64;
  v7 = (hknpShape *(*)[248][2])s_g_physicsCharacterProxyShapes[1];
  v25 = (hknpShape *(*)[248][2])s_g_physicsCharacterProxyShapes[1];
  v8 = 248i64;
  v21 = 248i64;
  do
  {
    if ( *(gentity_s **)((char *)s_g_physicsCharacterProxyEntities + v6) && *(unsigned int *)((char *)&s_g_physicsCharacterProxyInstances[0][1] + v6) != -1 )
    {
      v9 = v7;
      v10 = v6;
      v11 = 2i64;
      do
      {
        v12 = *(unsigned int *)((char *)s_g_physicsCharacterProxyInstances[0] + v10);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v12 == -1 )
        {
          LODWORD(v20) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v20) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v20) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
            __debugbreak();
        }
        if ( v12 == -1 )
        {
          LODWORD(v20) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v20) )
            __debugbreak();
        }
        if ( !g_havokPhysicsWorlds[0].world )
        {
          LODWORD(v20) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v20) )
            __debugbreak();
        }
        if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[0].instanceManager, v12) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1277, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1") )
          __debugbreak();
        v13 = *(unsigned int *)((char *)s_g_physicsCharacterProxyInstances[0] + v10);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v13 == -1 )
        {
          LODWORD(v20) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v20) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v20) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&p, PHYSICS_WORLD_ID_FIRST, v13, 0)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1279, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyIdMain ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyIdMain )") )
          __debugbreak();
        v15 = *(unsigned int *)((char *)s_g_physicsCharacterProxyDetailInstances[0] + v10);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v15 == -1 )
        {
          LODWORD(v20) = 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v20) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v20) = 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
            __debugbreak();
        }
        if ( v15 == -1 )
        {
          LODWORD(v20) = 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v20) )
            __debugbreak();
        }
        if ( !g_havokPhysicsWorlds[1].world )
        {
          LODWORD(v20) = 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v20) )
            __debugbreak();
        }
        if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[1].instanceManager, v15) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1280, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1") )
          __debugbreak();
        v16 = *(unsigned int *)((char *)s_g_physicsCharacterProxyDetailInstances[0] + v10);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v16 == -1 )
        {
          LODWORD(v20) = 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v20) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v20) = 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
            __debugbreak();
        }
        v17 = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_SERVER_DETAIL, v16, 0)->m_serialAndIndex;
        if ( (v17 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1282, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyIdDetail ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyIdDetail )") )
          __debugbreak();
        Shape = Physics_GetShape(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex);
        v19 = Physics_GetShape(PHYSICS_WORLD_ID_SERVER_DETAIL, v17);
        if ( !Shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1287, ASSERT_TYPE_ASSERT, "( mainShape )", (const char *)&queryFormat, "mainShape") )
          __debugbreak();
        if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1288, ASSERT_TYPE_ASSERT, "( detailShape )", (const char *)&queryFormat, "detailShape") )
          __debugbreak();
        *(v9 - 496) = Shape;
        Physics_AddShapeReference(Shape);
        *v9 = v19;
        Physics_AddShapeReference(v19);
        v10 += 4i64;
        ++v9;
        --v11;
      }
      while ( v11 );
      v6 = v26;
      v7 = v25;
      v8 = v21;
    }
    v7 = (hknpShape *(*)[248][2])((char *)v7 + 16);
    v25 = v7;
    v6 += 8i64;
    v26 = v6;
    v21 = --v8;
  }
  while ( v8 );
  if ( v22 )
    hkMonitorStream::timerEnd(v22, "Et");
}

/*
==============
G_PhysicsCharacterProxy_PropagateToDetailWorld
==============
*/
void G_PhysicsCharacterProxy_PropagateToDetailWorld(void)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v1; 
  __int64 v2; 
  gentity_s *v3; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v1 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_PropagateToDetailWorld");
  v2 = 0i64;
  while ( (unsigned int)v2 < s_g_physicsCharacterProxyEntityCount )
  {
    v3 = s_g_physicsCharacterProxyEntities[v2];
    if ( v3 )
    {
      if ( G_PhysicsCharacterProxy_IsEntityRightType(s_g_physicsCharacterProxyEntities[v2]) && v3->health > 0 )
      {
        if ( G_PhysicsCharacterProxy_ShouldEntityHavePhysics(v3) )
        {
          if ( s_g_physicsCharacterProxyInstances[v2][1] == -1 )
            G_PhysicsCharacterProxy_CreatePhysics(v2);
          G_PhysicsCharacterProxy_TeleportDetailBodies(v2, v3);
          v2 = (unsigned int)(v2 + 1);
        }
        else
        {
          if ( s_g_physicsCharacterProxyInstances[v2][1] != -1 )
            G_PhysicsCharacterProxy_RemovePhysics(v2);
          v2 = (unsigned int)(v2 + 1);
        }
      }
      else
      {
        G_PhysicsChracterProxy_RemoveCharacter(v2);
      }
    }
    else
    {
      v2 = (unsigned int)(v2 + 1);
    }
  }
  if ( v1 )
    hkMonitorStream::timerEnd(v1, "Et");
}

/*
==============
G_PhysicsCharacterProxy_RemoveAllCharacters
==============
*/
void G_PhysicsCharacterProxy_RemoveAllCharacters(void)
{
  unsigned int v0; 
  gentity_s **v1; 
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 

  v0 = 0;
  v1 = s_g_physicsCharacterProxyEntities;
  do
  {
    if ( *v1 )
    {
      Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
      v3 = Value;
      if ( Value )
        hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_RemovePhysics");
      G_PhysicsCharacterProxy_RemovePhysics_0(v0, PHYSICS_CHARACTERPROXY_TYPE_COLLISION);
      G_PhysicsCharacterProxy_RemovePhysics_0(v0, PHYSICS_CHARACTERPROXY_TYPE_DETAIL);
      if ( v3 )
        hkMonitorStream::timerEnd(v3, "Et");
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 0xF8 );
  G_PhysicsCharacterProxy_Clear();
}

/*
==============
G_PhysicsCharacterProxy_RemoveCharacter
==============
*/
void G_PhysicsCharacterProxy_RemoveCharacter(gentity_s *entity)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 
  unsigned int v4; 
  gentity_s **v5; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 463, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity", -2i64) )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_RemoveCharacter");
  if ( G_PhysicsCharacterProxy_IsEntityRightType(entity) )
  {
    v4 = 0;
    v5 = s_g_physicsCharacterProxyEntities;
    while ( *v5 != entity )
    {
      ++v4;
      ++v5;
      if ( v4 >= 0xF8 )
        goto LABEL_12;
    }
    G_PhysicsChracterProxy_RemoveCharacter(v4);
  }
LABEL_12:
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
G_PhysicsCharacterProxy_RemovePhysics
==============
*/
void G_PhysicsCharacterProxy_RemovePhysics(unsigned int characterIdx)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_RemovePhysics");
  G_PhysicsCharacterProxy_RemovePhysics_0(characterIdx, PHYSICS_CHARACTERPROXY_TYPE_COLLISION);
  G_PhysicsCharacterProxy_RemovePhysics_0(characterIdx, PHYSICS_CHARACTERPROXY_TYPE_DETAIL);
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
G_PhysicsCharacterProxy_ShouldEntityHavePhysics
==============
*/
bool G_PhysicsCharacterProxy_ShouldEntityHavePhysics(const gentity_s *entity)
{
  LerpEntityState *p_lerp; 
  bool v3; 
  bool v4; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 133, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  p_lerp = &entity->s.lerp;
  v3 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->s.lerp.eFlags, ACTIVE, 0xCu) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->s.lerp.eFlags, ACTIVE, 0);
  v4 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_lerp->eFlags, ACTIVE, 0x11u);
  return !v3 && !v4;
}

/*
==============
G_PhysicsCharacterProxy_Shutdown
==============
*/
void G_PhysicsCharacterProxy_Shutdown(void)
{
  unsigned int v0; 

  if ( s_g_physicsCharacterProxyEntityCount )
  {
    v0 = s_g_physicsCharacterProxyEntityCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 101, ASSERT_TYPE_ASSERT, "( s_g_physicsCharacterProxyEntityCount ) == ( 0 )", "%s == %s\n\t%u, %u", "s_g_physicsCharacterProxyEntityCount", "0", v0, 0i64) )
      __debugbreak();
  }
}

/*
==============
G_PhysicsCharacterProxy_Teleport
==============
*/
void G_PhysicsCharacterProxy_Teleport(unsigned int characterIdx, const gentity_s *entity)
{
  int v2; 
  __int64 v3; 
  unsigned int v6; 
  unsigned int v7; 
  hknpBodyId *RigidBodyID; 
  unsigned int v9; 
  unsigned int m_serialAndIndex; 
  unsigned int v11; 
  hknpBodyId *v12; 
  unsigned int v16; 
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  __int64 v19; 
  hknpBodyId result; 
  hknpBodyId v21; 
  vec3_t position; 
  vec4_t quat; 
  WorldUpReferenceFrame v24; 

  v2 = 0;
  v3 = 2i64 * characterIdx;
  _R13 = entity;
  do
  {
    if ( G_PhysicsCharacterProxy_EntityChangedShape(characterIdx, (Physics_CharacterProxy_Type)v2) )
    {
      G_PhysicsCharacterProxy_RemovePhysics_0(characterIdx, (Physics_CharacterProxy_Type)v2);
      G_PhysicsCharacterProxy_CreatePhysics_0(characterIdx, (Physics_CharacterProxy_Type)v2);
    }
    v6 = s_g_physicsCharacterProxyInstances[0][v3];
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v6 == -1 )
    {
      LODWORD(v19) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v19) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v19) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v19) )
        __debugbreak();
    }
    if ( v6 == -1 )
    {
      LODWORD(v19) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v19) )
        __debugbreak();
    }
    if ( !g_havokPhysicsWorlds[0].world )
    {
      LODWORD(v19) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v19) )
        __debugbreak();
    }
    if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[0].instanceManager, v6) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 704, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1") )
      __debugbreak();
    v7 = s_g_physicsCharacterProxyInstances[0][v3];
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v7 == -1 )
    {
      LODWORD(v19) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v19) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v19) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v19) )
        __debugbreak();
    }
    RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v7, 0);
    v9 = s_g_physicsCharacterProxyDetailInstances[0][v3];
    m_serialAndIndex = RigidBodyID->m_serialAndIndex;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v9 == -1 )
    {
      LODWORD(v19) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v19) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v19) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v19) )
        __debugbreak();
    }
    if ( v9 == -1 )
    {
      LODWORD(v19) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v19) )
        __debugbreak();
    }
    if ( !g_havokPhysicsWorlds[1].world )
    {
      LODWORD(v19) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v19) )
        __debugbreak();
    }
    if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[1].instanceManager, v9) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 706, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1") )
      __debugbreak();
    v11 = s_g_physicsCharacterProxyDetailInstances[0][v3];
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v11 == -1 )
    {
      LODWORD(v19) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v19) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v19) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v19) )
        __debugbreak();
    }
    v12 = HavokPhysics_GetRigidBodyID(&v21, PHYSICS_WORLD_ID_SERVER_DETAIL, v11, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [r13+130h]
      vmovss  xmm1, dword ptr [r13+134h]
      vmovss  dword ptr [rsp+0D8h+position], xmm0
      vmovss  xmm0, dword ptr [r13+138h]
    }
    v16 = v12->m_serialAndIndex;
    __asm
    {
      vmovss  dword ptr [rsp+0D8h+position+8], xmm0
      vmovss  dword ptr [rsp+0D8h+position+4], xmm1
    }
    AnglesToQuat(&_R13->r.currentAngles, &quat);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(_R13);
    if ( EntityPlayerStateConst )
    {
      if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
        __debugbreak();
      if ( !GAntiLag::ms_gAntiLagData->IsWorldUpIncludedOnEntity(GAntiLag::ms_gAntiLagData, EntityPlayerStateConst->clientNum) )
      {
        Handler = GHandler::getHandler();
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v24, EntityPlayerStateConst, Handler);
        WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v24, &quat);
      }
    }
    Physics_WarpRigidBodyTo(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &position, &quat, 0, 1);
    Physics_WarpRigidBodyTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v16, &position, &quat, 0, 1);
    ++v2;
    ++v3;
  }
  while ( v2 < 2 );
}

/*
==============
G_PhysicsCharacterProxy_Teleport
==============
*/
void G_PhysicsCharacterProxy_Teleport(gentity_s *entity, bool bUpdateBroadphase)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 
  __int16 v6; 
  __int64 v7; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 737, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity", -2i64) )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_Teleport");
  v6 = s_g_physicsCharacterProxyIndices[entity->s.number];
  if ( v6 )
  {
    v7 = (unsigned int)(v6 - 1);
    Sys_ProfBeginNamedEvent(0xFFFF00FF, "G_PhysicsCharacterProxy_Teleport");
    if ( G_PhysicsCharacterProxy_IsEntityValid(entity) )
    {
      if ( G_PhysicsCharacterProxy_ShouldEntityHavePhysics(entity) )
      {
        if ( s_g_physicsCharacterProxyInstances[v7][1] == -1 )
          G_PhysicsCharacterProxy_CreatePhysics(v7);
        G_PhysicsCharacterProxy_Teleport(v7, entity);
        if ( bUpdateBroadphase )
          Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
      }
      else if ( s_g_physicsCharacterProxyInstances[v7][1] != -1 )
      {
        G_PhysicsCharacterProxy_RemovePhysics(v7);
      }
    }
    else
    {
      G_PhysicsChracterProxy_RemoveCharacter(v7);
    }
    Sys_ProfEndNamedEvent();
  }
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
G_PhysicsCharacterProxy_Teleport
==============
*/
void G_PhysicsCharacterProxy_Teleport(bool bUpdateBroadphase)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 
  __int64 v4; 
  gentity_s *v5; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_Teleport");
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "proxy teleport");
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "proxy teleport warp");
  v4 = 0i64;
  while ( (unsigned int)v4 < s_g_physicsCharacterProxyEntityCount )
  {
    v5 = s_g_physicsCharacterProxyEntities[v4];
    if ( v5 )
    {
      if ( G_PhysicsCharacterProxy_IsEntityRightType(s_g_physicsCharacterProxyEntities[v4]) && v5->health > 0 )
      {
        if ( G_PhysicsCharacterProxy_ShouldEntityHavePhysics(v5) )
        {
          if ( s_g_physicsCharacterProxyInstances[v4][1] == -1 )
            G_PhysicsCharacterProxy_CreatePhysics(v4);
          G_PhysicsCharacterProxy_Teleport(v4, v5);
          v4 = (unsigned int)(v4 + 1);
        }
        else
        {
          if ( s_g_physicsCharacterProxyInstances[v4][1] != -1 )
            G_PhysicsCharacterProxy_RemovePhysics(v4);
          v4 = (unsigned int)(v4 + 1);
        }
      }
      else
      {
        G_PhysicsChracterProxy_RemoveCharacter(v4);
      }
    }
    else
    {
      v4 = (unsigned int)(v4 + 1);
    }
  }
  Sys_ProfEndNamedEvent();
  if ( bUpdateBroadphase )
  {
    Sys_ProfBeginNamedEvent(0xFFFF00FF, "proxy teleport update");
    Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
G_PhysicsCharacterProxy_TeleportDetailBodies
==============
*/
void G_PhysicsCharacterProxy_TeleportDetailBodies(unsigned int characterIdx, const gentity_s *entity)
{
  int v4; 
  unsigned int *v5; 
  unsigned int v6; 
  unsigned int v7; 
  hknpBodyId *RigidBodyID; 
  unsigned int m_serialAndIndex; 
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  __int64 v15; 
  hknpBodyId result; 
  vec3_t position; 
  vec4_t quat; 
  WorldUpReferenceFrame v19; 

  _R15 = entity;
  v4 = 0;
  v5 = s_g_physicsCharacterProxyDetailInstances[characterIdx];
  do
  {
    if ( G_PhysicsCharacterProxy_EntityChangedShape(characterIdx, (Physics_CharacterProxy_Type)v4) )
    {
      G_PhysicsCharacterProxy_RemovePhysics_0(characterIdx, (Physics_CharacterProxy_Type)v4);
      G_PhysicsCharacterProxy_CreatePhysics_0(characterIdx, (Physics_CharacterProxy_Type)v4);
    }
    v6 = *v5;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v6 == -1 )
    {
      LODWORD(v15) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v15) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v15) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v15) )
        __debugbreak();
    }
    if ( v6 == -1 )
    {
      LODWORD(v15) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v15) )
        __debugbreak();
    }
    if ( !g_havokPhysicsWorlds[1].world )
    {
      LODWORD(v15) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v15) )
        __debugbreak();
    }
    if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[1].instanceManager, v6) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 664, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1") )
      __debugbreak();
    v7 = *v5;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v7 == -1 )
    {
      LODWORD(v15) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v15) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v15) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v15) )
        __debugbreak();
    }
    RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_SERVER_DETAIL, v7, 0);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+130h]
      vmovss  xmm1, dword ptr [r15+134h]
      vmovss  dword ptr [rsp+0D8h+position], xmm0
      vmovss  xmm0, dword ptr [r15+138h]
    }
    m_serialAndIndex = RigidBodyID->m_serialAndIndex;
    __asm
    {
      vmovss  dword ptr [rsp+0D8h+position+8], xmm0
      vmovss  dword ptr [rsp+0D8h+position+4], xmm1
    }
    AnglesToQuat(&_R15->r.currentAngles, &quat);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(_R15);
    if ( EntityPlayerStateConst )
    {
      if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
        __debugbreak();
      if ( !GAntiLag::ms_gAntiLagData->IsWorldUpIncludedOnEntity(GAntiLag::ms_gAntiLagData, EntityPlayerStateConst->clientNum) )
      {
        Handler = GHandler::getHandler();
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v19, EntityPlayerStateConst, Handler);
        WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v19, &quat);
      }
    }
    Physics_WarpRigidBodyTo(PHYSICS_WORLD_ID_SERVER_DETAIL, m_serialAndIndex, &position, &quat, 0, 1);
    ++v4;
    ++v5;
  }
  while ( v4 < 2 );
}

/*
==============
G_PhysicsCharacterProxy_Update
==============
*/

void __fastcall G_PhysicsCharacterProxy_Update(double velocityScale)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  const char *v5; 
  char v6; 
  __int64 v7; 
  gentity_s *v8; 

  __asm
  {
    vmovaps [rsp+58h+var_28], xmm6
    vmovaps xmm6, xmm0
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_Update");
  v5 = j_va("Server Physics Character Proxy Update %i", s_g_physicsCharacterProxyEntityCount);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v5);
  if ( physics_dumpCharacterProxyServer && physics_dumpCharacterProxyServer->current.enabled )
  {
    Dvar_SetBool_Internal(physics_dumpCharacterProxyServer, 0);
    G_PhysicsCharacterProxy_DumpCharacterData();
  }
  v6 = 0;
  v7 = 0i64;
  if ( s_g_physicsCharacterProxyEntityCount )
  {
    do
    {
      v8 = s_g_physicsCharacterProxyEntities[v7];
      if ( v8 )
      {
        if ( G_PhysicsCharacterProxy_IsEntityRightType(s_g_physicsCharacterProxyEntities[v7]) && v8->health > 0 )
        {
          if ( G_PhysicsCharacterProxy_ShouldEntityHavePhysics(v8) )
          {
            if ( s_g_physicsCharacterProxyInstances[v7][1] == -1 )
              G_PhysicsCharacterProxy_CreatePhysics(v7);
            __asm { vmovaps xmm2, xmm6; velocityScale }
            v6 |= G_PhysicsCharacterProxy_UpdateSimulatingBodiesVelocity(v7, v8, *(float *)&_XMM2);
            v7 = (unsigned int)(v7 + 1);
          }
          else
          {
            if ( s_g_physicsCharacterProxyInstances[v7][1] != -1 )
              G_PhysicsCharacterProxy_RemovePhysics(v7);
            v7 = (unsigned int)(v7 + 1);
          }
        }
        else
        {
          G_PhysicsChracterProxy_RemoveCharacter(v7);
        }
      }
      else
      {
        v7 = (unsigned int)(v7 + 1);
      }
    }
    while ( (unsigned int)v7 < s_g_physicsCharacterProxyEntityCount );
    if ( v6 )
      Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
  }
  Sys_ProfEndNamedEvent();
  if ( v4 )
    hkMonitorStream::timerEnd(v4, "Et");
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
}

/*
==============
G_PhysicsCharacterProxy_UpdateSimulatingBodiesVelocity
==============
*/

__int64 __fastcall G_PhysicsCharacterProxy_UpdateSimulatingBodiesVelocity(unsigned int characterIdx, const gentity_s *entity, double velocityScale)
{
  unsigned __int8 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  hknpBodyId *RigidBodyID; 
  unsigned int m_serialAndIndex; 
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  __int64 v23; 
  float fmt; 
  __int64 updateBroadphaseIfWarping; 
  float v28; 
  hknpBodyId result; 
  vec3_t position; 
  vec4_t quat; 
  WorldUpReferenceFrame v32; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  v6 = 0;
  v7 = characterIdx;
  v8 = 0;
  v9 = 0i64;
  _R15 = entity;
  __asm
  {
    vmovaps xmm6, xmm2
    vxorps  xmm7, xmm7, xmm7
  }
  do
  {
    if ( G_PhysicsCharacterProxy_ShouldEntityHavePhysics(_R15) )
    {
      if ( G_PhysicsCharacterProxy_EntityChangedShape(v7, (Physics_CharacterProxy_Type)v8) )
      {
        G_PhysicsCharacterProxy_RemovePhysics_0(v7, (Physics_CharacterProxy_Type)v8);
        G_PhysicsCharacterProxy_CreatePhysics_0(v7, (Physics_CharacterProxy_Type)v8);
      }
      v13 = v9 + 2 * v7;
      v14 = s_g_physicsCharacterProxyInstances[0][v13];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v14 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(updateBroadphaseIfWarping) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( v14 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_havokPhysicsWorlds[0].world )
      {
        LODWORD(updateBroadphaseIfWarping) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[0].instanceManager, v14) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 617, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1") )
        __debugbreak();
      v15 = s_g_physicsCharacterProxyInstances[0][v13];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v15 == -1 )
      {
        LODWORD(updateBroadphaseIfWarping) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(updateBroadphaseIfWarping) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", updateBroadphaseIfWarping) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v15, 0);
      __asm
      {
        vmovss  xmm0, dword ptr [r15+130h]
        vmovss  xmm1, dword ptr [r15+134h]
      }
      m_serialAndIndex = RigidBodyID->m_serialAndIndex;
      __asm
      {
        vmovss  dword ptr [rsp+0F8h+position], xmm0
        vmovss  xmm0, dword ptr [r15+138h]
        vmovss  dword ptr [rsp+0F8h+position+8], xmm0
        vmovss  dword ptr [rsp+0F8h+position+4], xmm1
      }
      AnglesToQuat(&_R15->r.currentAngles, &quat);
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(_R15);
      if ( EntityPlayerStateConst )
      {
        if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
          __debugbreak();
        if ( !GAntiLag::ms_gAntiLagData->IsWorldUpIncludedOnEntity(GAntiLag::ms_gAntiLagData, EntityPlayerStateConst->clientNum) )
        {
          Handler = GHandler::getHandler();
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v32, EntityPlayerStateConst, Handler);
          WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v32, &quat);
        }
      }
      __asm
      {
        vmovss  [rsp+0F8h+var_C0], xmm7
        vmovss  dword ptr [rsp+0F8h+fmt], xmm6
      }
      v6 |= Physics_KeyframeRigidBodyTo(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &position, &quat, fmt, 1, 0, v28) == Physics_MovementType_Warped;
    }
    ++v8;
    ++v9;
  }
  while ( v8 < 2 );
  v23 = v6;
  __asm
  {
    vmovaps xmm6, [rsp+0F8h+var_48]
    vmovaps xmm7, [rsp+0F8h+var_58]
  }
  return v23;
}

/*
==============
G_PhysicsCharacterProxy_Write
==============
*/
void G_PhysicsCharacterProxy_Write(MemoryFile *memFile)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 
  unsigned int p; 
  hkMonitorStream *v5; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysicsCharacterProxy_Write");
  v5 = v3;
  p = s_g_physicsCharacterProxyEntityCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0x1000ui64, s_g_physicsCharacterProxyIndices);
  MemFile_WriteData(memFile, 0x2E80ui64, s_g_physicsCharacterProxyCapsules);
  MemFile_WriteData(memFile, 0x7C0ui64, s_g_physicsCharacterProxyInstances);
  MemFile_WriteData(memFile, 0x7C0ui64, s_g_physicsCharacterProxyDetailInstances);
  MemFile_WriteData(memFile, 0x7C0ui64, s_g_physicsCharacterProxyBodies);
  MemFile_WriteData(memFile, 0x7C0ui64, s_g_physicsCharacterProxyDetailBodies);
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
G_PhysicsChracterProxy_RemoveCharacter
==============
*/
void G_PhysicsChracterProxy_RemoveCharacter(unsigned int characterIdx)
{
  __int64 v1; 
  gentity_s *v3; 
  __int64 v4; 
  unsigned __int64 number; 
  __int16 v6; 
  __int64 v7; 
  unsigned __int64 v8; 

  v1 = characterIdx;
  G_PhysicsCharacterProxy_RemovePhysics(characterIdx);
  _RSI = 0x140000000ui64;
  v3 = s_g_physicsCharacterProxyEntities[v1];
  v4 = --s_g_physicsCharacterProxyEntityCount;
  number = v3->s.number;
  if ( number >= 2048 )
  {
    j___report_rangecheckfailure(number * 2);
    JUMPOUT(0x140E89F75i64);
  }
  s_g_physicsCharacterProxyEntities[v1] = s_g_physicsCharacterProxyEntities[v4];
  s_g_physicsCharacterProxyEntities[v4] = NULL;
  s_g_physicsCharacterProxyIndices[number] = 0;
  if ( s_g_physicsCharacterProxyEntities[v1] )
  {
    v6 = truncate_cast<short,unsigned int>(v1 + 1);
    LODWORD(v4) = s_g_physicsCharacterProxyEntityCount;
    s_g_physicsCharacterProxyIndices[s_g_physicsCharacterProxyEntities[v1]->s.number] = v6;
  }
  v7 = v1;
  v8 = 2i64 * (unsigned int)v4;
  _RCX = 3 * v8;
  __asm { vmovups xmm0, xmmword ptr rva s_g_physicsCharacterProxyCapsules.center[rsi+rcx*8] }
  _RAX = 6 * v1;
  __asm
  {
    vmovups xmmword ptr rva s_g_physicsCharacterProxyCapsules.center[rsi+rax*8], xmm0
    vmovsd  xmm1, qword ptr rva s_g_physicsCharacterProxyCapsules.radius[rsi+rcx*8]
    vmovsd  qword ptr rva s_g_physicsCharacterProxyCapsules.radius[rsi+rax*8], xmm1
  }
  _RCX = 3 * v8 + 3;
  __asm { vmovups xmm0, xmmword ptr rva s_g_physicsCharacterProxyCapsules.center[rsi+rcx*8] }
  s_g_physicsCharacterProxyShapes[0][v7][0] = s_g_physicsCharacterProxyShapes[0][v8 / 2][0];
  s_g_physicsCharacterProxyShapes[0][v8 / 2][0] = NULL;
  s_g_physicsCharacterProxyShapes[1][v7][0] = s_g_physicsCharacterProxyShapes[1][v8 / 2][0];
  s_g_physicsCharacterProxyInstances[v7][0] = s_g_physicsCharacterProxyInstances[v8 / 2][0];
  s_g_physicsCharacterProxyDetailInstances[v7][0] = s_g_physicsCharacterProxyDetailInstances[v8 / 2][0];
  s_g_physicsCharacterProxyBodies[v7][0] = s_g_physicsCharacterProxyBodies[v8 / 2][0];
  s_g_physicsCharacterProxyDetailBodies[v7][0] = s_g_physicsCharacterProxyDetailBodies[v8 / 2][0];
  _RAX = 6 * v1 + 3;
  __asm
  {
    vmovups xmmword ptr rva s_g_physicsCharacterProxyCapsules.center[rsi+rax*8], xmm0
    vmovsd  xmm1, qword ptr rva s_g_physicsCharacterProxyCapsules.radius[rsi+rcx*8]
  }
  s_g_physicsCharacterProxyShapes[1][v8 / 2][0] = NULL;
  __asm { vmovsd  qword ptr rva s_g_physicsCharacterProxyCapsules.radius[rsi+rax*8], xmm1 }
  s_g_physicsCharacterProxyShapes[0][v7][1] = s_g_physicsCharacterProxyShapes[0][v8 / 2][1];
  s_g_physicsCharacterProxyShapes[0][v8 / 2][1] = NULL;
  s_g_physicsCharacterProxyShapes[1][v7][1] = s_g_physicsCharacterProxyShapes[1][v8 / 2][1];
  s_g_physicsCharacterProxyInstances[v8 / 2][0] = -1;
  s_g_physicsCharacterProxyInstances[v7][1] = s_g_physicsCharacterProxyInstances[v8 / 2][1];
  s_g_physicsCharacterProxyDetailInstances[v8 / 2][0] = -1;
  s_g_physicsCharacterProxyDetailInstances[v7][1] = s_g_physicsCharacterProxyDetailInstances[v8 / 2][1];
  s_g_physicsCharacterProxyBodies[v8 / 2][0] = 0xFFFFFF;
  LODWORD(_RAX) = s_g_physicsCharacterProxyBodies[v8 / 2][1];
  s_g_physicsCharacterProxyDetailBodies[v8 / 2][0] = 0xFFFFFF;
  s_g_physicsCharacterProxyBodies[v7][1] = _RAX;
  s_g_physicsCharacterProxyDetailBodies[v7][1] = s_g_physicsCharacterProxyDetailBodies[v8 / 2][1];
  s_g_physicsCharacterProxyShapes[1][v8 / 2][1] = NULL;
  s_g_physicsCharacterProxyDetailBodies[v8 / 2][1] = 0xFFFFFF;
  s_g_physicsCharacterProxyInstances[v8 / 2][1] = -1;
  s_g_physicsCharacterProxyDetailInstances[v8 / 2][1] = -1;
  s_g_physicsCharacterProxyBodies[v8 / 2][1] = 0xFFFFFF;
}


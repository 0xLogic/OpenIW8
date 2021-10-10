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
  __int64 v3; 
  int v6; 
  gentity_s *v7; 
  DObj *ServerDObjForEntnum; 
  const DObj *v9; 
  EffectiveStance v10; 
  double Radius; 
  XModelCharCollBoundsType characterCollBoundsType; 
  __int64 v13; 
  __int64 v14; 
  Bounds outCollisionBounds; 

  v3 = characterIdx;
  if ( characterIdx >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 145, ASSERT_TYPE_ASSERT, "(unsigned)( characterIdx ) < (unsigned)( PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS )", "characterIdx doesn't index PHYSICS_CHARACTERPROXY_MAXNUMCHARACTERS\n\t%i not in [0, %i)", characterIdx, 248) )
    __debugbreak();
  v6 = 0;
  if ( !capsule && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 146, ASSERT_TYPE_ASSERT, "( capsule ) != ( nullptr )", "%s != %s\n\t%p, %p", "capsule", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( (unsigned int)type >= NUM_PHYSICS_CHARACTERPROXY_TYPES )
  {
    LODWORD(v14) = 2;
    LODWORD(v13) = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 147, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( NUM_PHYSICS_CHARACTERPROXY_TYPES )", "type doesn't index NUM_PHYSICS_CHARACTERPROXY_TYPES\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v7 = s_g_physicsCharacterProxyEntities[v3];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 151, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  ServerDObjForEntnum = Com_GetServerDObjForEntnum(v7->s.number);
  v9 = ServerDObjForEntnum;
  if ( type )
  {
    if ( type == PHYSICS_CHARACTERPROXY_TYPE_COLLISION )
    {
      v10 = PM_EFF_STANCE_DEFAULT;
      if ( BG_IsPlayerOrAgentEntity(&v7->s) )
      {
        if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
          __debugbreak();
        v6 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)v7->s.number) + 5224);
        v10 = BG_EstimateEffectiveStance(&v7->s);
      }
      G_PhysicsCharacterProxy_GetCollisionBounds(v9, &v7->s, v6, v10, &outCollisionBounds);
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 210, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid Character Proxy Type") )
    {
      __debugbreak();
    }
  }
  else if ( ServerDObjForEntnum && ServerDObjForEntnum->numModels )
  {
    if ( (v7->r.svFlags & 8) != 0 )
    {
      Radius = DObjGetRadius(ServerDObjForEntnum);
      outCollisionBounds.midPoint.v[0] = 0.0;
      outCollisionBounds.midPoint.v[1] = 0.0;
      outCollisionBounds.midPoint.v[2] = 0.0;
      outCollisionBounds.halfSize.v[0] = *(float *)&Radius;
      outCollisionBounds.halfSize.v[1] = *(float *)&Radius;
      outCollisionBounds.halfSize.v[2] = *(float *)&Radius;
    }
    else
    {
      characterCollBoundsType = (*ServerDObjForEntnum->models)->characterCollBoundsType;
      if ( (unsigned int)characterCollBoundsType >= CharCollBoundsType_Num )
      {
        LODWORD(v14) = 10;
        LODWORD(v13) = (*ServerDObjForEntnum->models)->characterCollBoundsType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 178, ASSERT_TYPE_ASSERT, "(unsigned)( collBoundsType ) < (unsigned)( XModelCharCollBoundsType::CharCollBoundsType_Num )", "collBoundsType doesn't index XModelCharCollBoundsType::CharCollBoundsType_Num\n\t%i not in [0, %i)", v13, v14) )
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
void G_PhysicsCharacterProxy_DebugDrawEntityData(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  hkMonitorStream *Value; 
  unsigned int v9; 
  gentity_s **v10; 
  __int64 v11; 
  gentity_s *v12; 
  __int16 eType; 
  const char *v14; 
  const char *v15; 
  vec4_t *setColor; 
  hkMonitorStream *v17; 
  char dest[256]; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v17 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_DebugDrawEntityData");
  Com_sprintf(dest, 0x100ui64, "Server Entities");
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  v9 = 0;
  *x = tabWidth + *x;
  v10 = s_g_physicsCharacterProxyEntities;
  v11 = 248i64;
  do
  {
    v12 = *v10;
    if ( *v10 )
    {
      eType = v12->s.eType;
      v14 = "UNSUPPORTED TYPE";
      if ( eType == 1 )
        v14 = "PLAYER";
      if ( eType == 17 )
        v14 = "AGENT";
      if ( eType == 19 )
        v14 = "ACTOR";
      if ( eType == 6 )
      {
        v15 = "DRONE";
        if ( v12->s.un.scriptMoverType != 1 )
          v15 = v14;
        v14 = v15;
      }
      LODWORD(setColor) = v12->s.number;
      Com_sprintf(dest, 0x100ui64, "%i entity %i %s", v9, setColor, v14);
      Physics_DrawDebugString(scrPlace, *x, *y, dest, &colorWhite, 0, 1, charHeight, 0);
      *y = charHeight + *y;
      ++v9;
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  *x = *x - tabWidth;
  if ( v17 )
    hkMonitorStream::timerEnd(v17, "Et");
}

/*
==============
G_PhysicsCharacterProxy_DebugDrawEntityShapes
==============
*/
void G_PhysicsCharacterProxy_DebugDrawEntityShapes(Physics_WorldId worldId)
{
  hkMonitorStream *Value; 
  __int64 v3; 
  float *v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int *v7; 
  float *v8; 
  __int64 v9; 
  float *v10; 
  __int64 v11; 
  unsigned int v12; 
  const HavokPhysicsWorld *ConstWorld; 
  unsigned int v14; 
  unsigned int m_serialAndIndex; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int64 duration; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  float *v26; 
  __int64 v27; 
  hknpBodyId result[2]; 
  hkMonitorStream *v29; 
  __int64 v30; 
  __int64 v31; 
  vec3_t center; 
  vec3_t end; 
  float v34; 
  float v35; 
  float v36; 
  vec3_t in; 
  vec3_t v38; 
  vec4_t out; 

  v30 = -2i64;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = (__int64)Value;
  v29 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_DebugDrawEntityShapes");
  v31 = v3;
  v4 = &s_g_physicsCharacterProxyCapsules[0][0].center.v[1];
  v26 = &s_g_physicsCharacterProxyCapsules[0][0].center.v[1];
  v5 = 0i64;
  v25 = 0i64;
  v6 = 248i64;
  v27 = 248i64;
  do
  {
    if ( !*(gentity_s **)((char *)s_g_physicsCharacterProxyEntities + v5) )
      goto LABEL_92;
    v7 = (unsigned int *)((char *)s_g_physicsCharacterProxyInstances[0] + v5);
    v8 = v4;
    v9 = 2i64;
    v24 = 2i64;
    do
    {
      if ( *v7 == -1 )
        goto LABEL_90;
      v10 = v8 - 1;
      if ( v8 == (float *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1416, ASSERT_TYPE_ASSERT, "(capsule)", (const char *)&queryFormat, "capsule") )
        __debugbreak();
      v34 = 0.0;
      v35 = 0.0;
      v36 = 0.0;
      v11 = *((int *)v8 + 4);
      if ( (unsigned int)v11 >= 3 )
      {
        LODWORD(v23) = 3;
        *(float *)&duration = v8[4];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v23) )
          __debugbreak();
      }
      *(&v34 + v11) = 1.0;
      v12 = *v7;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
          __debugbreak();
      }
      if ( v12 == -1 )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v23) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v23) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        if ( worldId < PHYSICS_WORLD_ID_FIRST )
          goto LABEL_32;
        if ( worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v23) = worldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v23) )
            __debugbreak();
        }
      }
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
LABEL_32:
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
          __debugbreak();
      }
      if ( v12 == -1 )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v23) )
          __debugbreak();
      }
      ConstWorld = HavokPhysics_GetConstWorld(worldId);
      if ( !ConstWorld->world )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v23) )
          __debugbreak();
      }
      if ( HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v12) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 1424, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( worldId, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( worldId, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1") )
        __debugbreak();
      v14 = *v7;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
          __debugbreak();
      }
      if ( v14 == -1 )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v23) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v23) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v23) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, worldId, v14, 0)->m_serialAndIndex;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
          __debugbreak();
      }
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v23) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v23) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v23) )
          __debugbreak();
      }
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
          __debugbreak();
      }
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v23) )
          __debugbreak();
      }
      world = HavokPhysics_GetConstWorld(worldId)->world;
      if ( !world )
      {
        LODWORD(v23) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v23) )
          __debugbreak();
      }
      v17 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
      v18 = 32.0 * v17[1].m[0].v[0];
      v19 = 32.0 * v17[1].m[0].v[1];
      v20 = 32.0 * v17[1].m[0].v[2];
      Axis34ToQuat(v17, &out);
      v21 = v8[2];
      in.v[0] = (float)(COERCE_FLOAT(LODWORD(v21) ^ _xmm) * v34) + *v10;
      in.v[1] = (float)(COERCE_FLOAT(LODWORD(v21) ^ _xmm) * v35) + *v8;
      in.v[2] = (float)(COERCE_FLOAT(LODWORD(v21) ^ _xmm) * v36) + v8[1];
      v38.v[0] = (float)(v21 * v34) + *v10;
      v38.v[1] = (float)(v21 * v35) + *v8;
      v38.v[2] = (float)(v21 * v36) + v8[1];
      QuatTransform(&out, &in, &center);
      QuatTransform(&out, &v38, &end);
      center.v[0] = v18 + center.v[0];
      center.v[1] = v19 + center.v[1];
      center.v[2] = v20 + center.v[2];
      end.v[0] = v18 + end.v[0];
      end.v[1] = v19 + end.v[1];
      end.v[2] = v20 + end.v[2];
      if ( v8[2] == 0.0 )
        G_DebugSphere(&center, v8[3], &colorWhite, 1, 3);
      else
        G_DebugCapsule(&center, &end, v8[3], &colorWhite, 1, 3);
      v9 = v24;
LABEL_90:
      v8 += 6;
      ++v7;
      v24 = --v9;
    }
    while ( v9 );
    v5 = v25;
    v4 = v26;
    v6 = v27;
LABEL_92:
    v5 += 8i64;
    v25 = v5;
    v4 += 12;
    v26 = v4;
    v27 = --v6;
  }
  while ( v6 );
  if ( v29 )
    hkMonitorStream::timerEnd(v29, "Et");
}

/*
==============
G_PhysicsCharacterProxy_DumpCharacterData
==============
*/
void G_PhysicsCharacterProxy_DumpCharacterData()
{
  __int128 v0; 
  __int128 v1; 
  __int128 v2; 
  gentity_s **v3; 
  unsigned int v4; 
  const gentity_s *v5; 
  unsigned int number; 
  const char *EntityTypeName; 
  const gentity_s *v8; 
  const char *v9; 
  const char *v10; 
  float v11; 
  float v12; 
  float v13; 
  ai_agent_t *ScriptedAgentInfo; 
  actor_s *actor; 
  scr_string_t UnitType; 
  const char *v17; 
  DObj *ServerDObjForEntnum; 
  AIActorInterface v19; 
  AIAgentInterface v20; 
  AIScriptedInterface *v21; 
  __int128 v22; 
  __int128 v23; 
  __int128 v24; 

  Com_Printf(15, "Physics Character Proxies on the Server:\n");
  v3 = s_g_physicsCharacterProxyEntities;
  v4 = 0;
  v24 = v0;
  v23 = v1;
  v22 = v2;
  do
  {
    v5 = *v3;
    if ( !*v3 )
      goto LABEL_26;
    number = v5->s.number;
    EntityTypeName = G_GetEntityTypeName(v5);
    v8 = *v3;
    v9 = EntityTypeName;
    v10 = "Unknown";
    v11 = (*v3)->r.currentOrigin.v[0];
    v12 = (*v3)->r.currentOrigin.v[1];
    v13 = (*v3)->r.currentOrigin.v[2];
    AIActorInterface::AIActorInterface(&v19);
    AIAgentInterface::AIAgentInterface(&v20);
    v21 = NULL;
    v20.__vftable = (AIAgentInterface_vtbl *)&AINewAgentInterface::`vftable';
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 79, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( v8->agent && SV_Agent_IsScripted(v8->s.number) )
    {
      ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v8);
      if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 97, ASSERT_TYPE_ASSERT, "( pInfo )", (const char *)&queryFormat, "pInfo") )
        __debugbreak();
      if ( !ScriptedAgentInfo->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 98, ASSERT_TYPE_ASSERT, "( pInfo->sentientInfo )", (const char *)&queryFormat, "pInfo->sentientInfo") )
        __debugbreak();
      AINewAgentInterface::SetAgent((AINewAgentInterface *)&v20, ScriptedAgentInfo);
      v21 = &v20;
    }
    else
    {
      actor = v8->actor;
      if ( actor )
      {
        if ( !actor->sentientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 105, ASSERT_TYPE_ASSERT, "( ent->actor->sentientInfo )", (const char *)&queryFormat, "ent->actor->sentientInfo") )
          __debugbreak();
        AIActorInterface::SetActor(&v19, v8->actor);
        v21 = &v19;
      }
      else if ( !v21 )
      {
        goto LABEL_22;
      }
    }
    UnitType = AIScriptedInterface::GetUnitType(v21);
    v10 = SL_ConvertToString(UnitType);
LABEL_22:
    v17 = "Unknown";
    ServerDObjForEntnum = Com_GetServerDObjForEntnum(number);
    if ( ServerDObjForEntnum && ServerDObjForEntnum->numModels )
      v17 = **(const char ***)ServerDObjForEntnum->models;
    Com_Printf(15, " Entry:%i Entity:%i Type:%s Position:(%.2f, %.2f, %.2f) UnitType:%s ModelName:%s\n", v4, number, v9, v11, v12, v13, v10, v17);
LABEL_26:
    ++v4;
    ++v3;
  }
  while ( v4 < 0xF8 );
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
  float v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 557, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !outCollisionBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 558, ASSERT_TYPE_ASSERT, "(outCollisionBounds)", (const char *)&queryFormat, "outCollisionBounds") )
    __debugbreak();
  *outCollisionBounds = playerBox;
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((es->eType - 1) & 0xFFEF) == 0 )
  {
    if ( (unsigned int)stance >= PM_EFF_STANCE_COUNT )
    {
      LODWORD(v11) = stance;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 566, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( stance ) ) < (unsigned)( static_cast<int>( PM_EFF_STANCE_COUNT ) )", "static_cast<int>( stance ) doesn't index static_cast<int>( PM_EFF_STANCE_COUNT )\n\t%i not in [0, %i)", v11, 4) )
        __debugbreak();
    }
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_OFFHAND_END|0x80) || es->eType != ET_PLAYER )
      stance = PM_EFF_STANCE_DEFAULT;
    *outCollisionBounds = *BG_Suit_GetBounds(suitIndex, stance);
  }
  if ( dobj && dobj->numModels )
  {
    characterCollBoundsType = (*dobj->models)->characterCollBoundsType;
    if ( characterCollBoundsType >= 0xA )
    {
      LODWORD(v12) = 10;
      LODWORD(v11) = (*dobj->models)->characterCollBoundsType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 577, ASSERT_TYPE_ASSERT, "(unsigned)( collBoundsType ) < (unsigned)( XModelCharCollBoundsType::CharCollBoundsType_Num )", "collBoundsType doesn't index XModelCharCollBoundsType::CharCollBoundsType_Num\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( characterCollBoundsType == 1 )
    {
      if ( ((es->eType - 19) & 0xFFFD) == 0 && (es->lerp.u.actor.flags & 1) != 0 )
      {
        *outCollisionBounds = actorBox;
        v10 = _mm_shuffle_ps((__m128)*(unsigned __int64 *)&actorBox.halfSize.y, (__m128)*(unsigned __int64 *)&actorBox.halfSize.y, 85).m128_f32[0];
        outCollisionBounds->midPoint.v[2] = v10 - 41.0;
        outCollisionBounds->halfSize.v[2] = v10;
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
  float v13; 
  unsigned int v14; 
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  __int64 v17; 
  hknpBodyId result; 
  hknpBodyId v19; 
  vec3_t position; 
  vec4_t quat; 
  WorldUpReferenceFrame v22; 

  v2 = 0;
  v3 = 2i64 * characterIdx;
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
      LODWORD(v17) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v17) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v17) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v17) )
        __debugbreak();
    }
    if ( v6 == -1 )
    {
      LODWORD(v17) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v17) )
        __debugbreak();
    }
    if ( !g_havokPhysicsWorlds[0].world )
    {
      LODWORD(v17) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v17) )
        __debugbreak();
    }
    if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[0].instanceManager, v6) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 704, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1") )
      __debugbreak();
    v7 = s_g_physicsCharacterProxyInstances[0][v3];
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v7 == -1 )
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
    RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v7, 0);
    v9 = s_g_physicsCharacterProxyDetailInstances[0][v3];
    m_serialAndIndex = RigidBodyID->m_serialAndIndex;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v9 == -1 )
    {
      LODWORD(v17) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v17) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v17) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v17) )
        __debugbreak();
    }
    if ( v9 == -1 )
    {
      LODWORD(v17) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v17) )
        __debugbreak();
    }
    if ( !g_havokPhysicsWorlds[1].world )
    {
      LODWORD(v17) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v17) )
        __debugbreak();
    }
    if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[1].instanceManager, v9) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 706, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1") )
      __debugbreak();
    v11 = s_g_physicsCharacterProxyDetailInstances[0][v3];
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v11 == -1 )
    {
      LODWORD(v17) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v17) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v17) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v17) )
        __debugbreak();
    }
    v12 = HavokPhysics_GetRigidBodyID(&v19, PHYSICS_WORLD_ID_SERVER_DETAIL, v11, 0);
    v13 = entity->r.currentOrigin.v[1];
    position.v[0] = entity->r.currentOrigin.v[0];
    v14 = v12->m_serialAndIndex;
    position.v[2] = entity->r.currentOrigin.v[2];
    position.v[1] = v13;
    AnglesToQuat(&entity->r.currentAngles, &quat);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(entity);
    if ( EntityPlayerStateConst )
    {
      if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
        __debugbreak();
      if ( !GAntiLag::ms_gAntiLagData->IsWorldUpIncludedOnEntity(GAntiLag::ms_gAntiLagData, EntityPlayerStateConst->clientNum) )
      {
        Handler = GHandler::getHandler();
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v22, EntityPlayerStateConst, Handler);
        WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v22, &quat);
      }
    }
    Physics_WarpRigidBodyTo(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &position, &quat, 0, 1);
    Physics_WarpRigidBodyTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v14, &position, &quat, 0, 1);
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
  float v9; 
  unsigned int m_serialAndIndex; 
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  __int64 v13; 
  hknpBodyId result; 
  vec3_t position; 
  vec4_t quat; 
  WorldUpReferenceFrame v17; 

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
      LODWORD(v13) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v13) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v13) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v13) )
        __debugbreak();
    }
    if ( v6 == -1 )
    {
      LODWORD(v13) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v13) )
        __debugbreak();
    }
    if ( !g_havokPhysicsWorlds[1].world )
    {
      LODWORD(v13) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v13) )
        __debugbreak();
    }
    if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[1].instanceManager, v6) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 664, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_DETAIL, s_g_physicsCharacterProxyDetailInstances[characterIdx][type] ) == 1") )
      __debugbreak();
    v7 = *v5;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( v7 == -1 )
    {
      LODWORD(v13) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v13) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated )
    {
      LODWORD(v13) = 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v13) )
        __debugbreak();
    }
    RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_SERVER_DETAIL, v7, 0);
    v9 = entity->r.currentOrigin.v[1];
    position.v[0] = entity->r.currentOrigin.v[0];
    m_serialAndIndex = RigidBodyID->m_serialAndIndex;
    position.v[2] = entity->r.currentOrigin.v[2];
    position.v[1] = v9;
    AnglesToQuat(&entity->r.currentAngles, &quat);
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(entity);
    if ( EntityPlayerStateConst )
    {
      if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
        __debugbreak();
      if ( !GAntiLag::ms_gAntiLagData->IsWorldUpIncludedOnEntity(GAntiLag::ms_gAntiLagData, EntityPlayerStateConst->clientNum) )
      {
        Handler = GHandler::getHandler();
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v17, EntityPlayerStateConst, Handler);
        WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v17, &quat);
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
void G_PhysicsCharacterProxy_Update(float velocityScale)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v2; 
  const char *v3; 
  char v4; 
  __int64 v5; 
  gentity_s *v6; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v2 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsCharacterProxy_Update");
  v3 = j_va("Server Physics Character Proxy Update %i", s_g_physicsCharacterProxyEntityCount);
  Sys_ProfBeginNamedEvent(0xFFFF00FF, v3);
  if ( physics_dumpCharacterProxyServer && physics_dumpCharacterProxyServer->current.enabled )
  {
    Dvar_SetBool_Internal(physics_dumpCharacterProxyServer, 0);
    G_PhysicsCharacterProxy_DumpCharacterData();
  }
  v4 = 0;
  v5 = 0i64;
  if ( s_g_physicsCharacterProxyEntityCount )
  {
    do
    {
      v6 = s_g_physicsCharacterProxyEntities[v5];
      if ( v6 )
      {
        if ( G_PhysicsCharacterProxy_IsEntityRightType(s_g_physicsCharacterProxyEntities[v5]) && v6->health > 0 )
        {
          if ( G_PhysicsCharacterProxy_ShouldEntityHavePhysics(v6) )
          {
            if ( s_g_physicsCharacterProxyInstances[v5][1] == -1 )
              G_PhysicsCharacterProxy_CreatePhysics(v5);
            v4 |= G_PhysicsCharacterProxy_UpdateSimulatingBodiesVelocity(v5, v6, velocityScale);
            v5 = (unsigned int)(v5 + 1);
          }
          else
          {
            if ( s_g_physicsCharacterProxyInstances[v5][1] != -1 )
              G_PhysicsCharacterProxy_RemovePhysics(v5);
            v5 = (unsigned int)(v5 + 1);
          }
        }
        else
        {
          G_PhysicsChracterProxy_RemoveCharacter(v5);
        }
      }
      else
      {
        v5 = (unsigned int)(v5 + 1);
      }
    }
    while ( (unsigned int)v5 < s_g_physicsCharacterProxyEntityCount );
    if ( v4 )
      Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
  }
  Sys_ProfEndNamedEvent();
  if ( v2 )
    hkMonitorStream::timerEnd(v2, "Et");
}

/*
==============
G_PhysicsCharacterProxy_UpdateSimulatingBodiesVelocity
==============
*/
__int64 G_PhysicsCharacterProxy_UpdateSimulatingBodiesVelocity(unsigned int characterIdx, const gentity_s *entity, float velocityScale)
{
  unsigned __int8 v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  hknpBodyId *RigidBodyID; 
  float v12; 
  unsigned int m_serialAndIndex; 
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  __int64 updateBroadphaseIfWarping; 
  hknpBodyId result; 
  vec3_t position; 
  vec4_t quat; 
  WorldUpReferenceFrame v21; 

  v3 = 0;
  v4 = characterIdx;
  v5 = 0;
  v6 = 0i64;
  do
  {
    if ( G_PhysicsCharacterProxy_ShouldEntityHavePhysics(entity) )
    {
      if ( G_PhysicsCharacterProxy_EntityChangedShape(v4, (Physics_CharacterProxy_Type)v5) )
      {
        G_PhysicsCharacterProxy_RemovePhysics_0(v4, (Physics_CharacterProxy_Type)v5);
        G_PhysicsCharacterProxy_CreatePhysics_0(v4, (Physics_CharacterProxy_Type)v5);
      }
      v8 = v6 + 2 * v4;
      v9 = s_g_physicsCharacterProxyInstances[0][v8];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v9 == -1 )
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
      if ( v9 == -1 )
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
      if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[0].instanceManager, v9) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicscharacterproxy.cpp", 617, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1)", (const char *)&queryFormat, "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, s_g_physicsCharacterProxyInstances[characterIdx][type] ) == 1") )
        __debugbreak();
      v10 = s_g_physicsCharacterProxyInstances[0][v8];
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v10 == -1 )
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
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v10, 0);
      v12 = entity->r.currentOrigin.v[1];
      m_serialAndIndex = RigidBodyID->m_serialAndIndex;
      position.v[0] = entity->r.currentOrigin.v[0];
      position.v[2] = entity->r.currentOrigin.v[2];
      position.v[1] = v12;
      AnglesToQuat(&entity->r.currentAngles, &quat);
      EntityPlayerStateConst = G_GetEntityPlayerStateConst(entity);
      if ( EntityPlayerStateConst )
      {
        if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
          __debugbreak();
        if ( !GAntiLag::ms_gAntiLagData->IsWorldUpIncludedOnEntity(GAntiLag::ms_gAntiLagData, EntityPlayerStateConst->clientNum) )
        {
          Handler = GHandler::getHandler();
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v21, EntityPlayerStateConst, Handler);
          WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v21, &quat);
        }
      }
      v3 |= Physics_KeyframeRigidBodyTo(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &position, &quat, velocityScale, 1, 0, 0.0) == Physics_MovementType_Warped;
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 2 );
  return v3;
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
  gentity_s *v2; 
  __int64 v3; 
  unsigned __int64 number; 
  __int16 v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int128 v10; 
  __int64 v11; 
  double v12; 

  v1 = characterIdx;
  G_PhysicsCharacterProxy_RemovePhysics(characterIdx);
  v2 = s_g_physicsCharacterProxyEntities[v1];
  v3 = --s_g_physicsCharacterProxyEntityCount;
  number = v2->s.number;
  if ( number >= 2048 )
  {
    j___report_rangecheckfailure(number * 2);
    JUMPOUT(0x140E89F75i64);
  }
  s_g_physicsCharacterProxyEntities[v1] = s_g_physicsCharacterProxyEntities[v3];
  s_g_physicsCharacterProxyEntities[v3] = NULL;
  s_g_physicsCharacterProxyIndices[number] = 0;
  if ( s_g_physicsCharacterProxyEntities[v1] )
  {
    v5 = truncate_cast<short,unsigned int>(v1 + 1);
    LODWORD(v3) = s_g_physicsCharacterProxyEntityCount;
    s_g_physicsCharacterProxyIndices[s_g_physicsCharacterProxyEntities[v1]->s.number] = v5;
  }
  v6 = v1;
  v7 = 2i64 * (unsigned int)v3;
  v8 = v1;
  *(_OWORD *)s_g_physicsCharacterProxyCapsules[v8][0].center.v = *(_OWORD *)s_g_physicsCharacterProxyCapsules[v7 / 2][0].center.v;
  *(double *)&s_g_physicsCharacterProxyCapsules[v8][0].radius = *(double *)&s_g_physicsCharacterProxyCapsules[v7 / 2][0].radius;
  v9 = 3 * v7 + 3;
  v10 = *(_OWORD *)&s_g_physicsCharacterProxyCapsules[0][0].center.v[2 * v9];
  s_g_physicsCharacterProxyShapes[0][v6][0] = s_g_physicsCharacterProxyShapes[0][v7 / 2][0];
  s_g_physicsCharacterProxyShapes[0][v7 / 2][0] = NULL;
  s_g_physicsCharacterProxyShapes[1][v6][0] = s_g_physicsCharacterProxyShapes[1][v7 / 2][0];
  s_g_physicsCharacterProxyInstances[v6][0] = s_g_physicsCharacterProxyInstances[v7 / 2][0];
  s_g_physicsCharacterProxyDetailInstances[v6][0] = s_g_physicsCharacterProxyDetailInstances[v7 / 2][0];
  s_g_physicsCharacterProxyBodies[v6][0] = s_g_physicsCharacterProxyBodies[v7 / 2][0];
  s_g_physicsCharacterProxyDetailBodies[v6][0] = s_g_physicsCharacterProxyDetailBodies[v7 / 2][0];
  v11 = 6 * v1 + 3;
  *(_OWORD *)&s_g_physicsCharacterProxyCapsules[0][0].center.v[2 * v11] = v10;
  v12 = *((double *)&s_g_physicsCharacterProxyCapsules[0][0].radius + v9);
  s_g_physicsCharacterProxyShapes[1][v7 / 2][0] = NULL;
  *((double *)&s_g_physicsCharacterProxyCapsules[0][0].radius + v11) = v12;
  s_g_physicsCharacterProxyShapes[0][v6][1] = s_g_physicsCharacterProxyShapes[0][v7 / 2][1];
  s_g_physicsCharacterProxyShapes[0][v7 / 2][1] = NULL;
  s_g_physicsCharacterProxyShapes[1][v6][1] = s_g_physicsCharacterProxyShapes[1][v7 / 2][1];
  s_g_physicsCharacterProxyInstances[v7 / 2][0] = -1;
  s_g_physicsCharacterProxyInstances[v6][1] = s_g_physicsCharacterProxyInstances[v7 / 2][1];
  s_g_physicsCharacterProxyDetailInstances[v7 / 2][0] = -1;
  s_g_physicsCharacterProxyDetailInstances[v6][1] = s_g_physicsCharacterProxyDetailInstances[v7 / 2][1];
  s_g_physicsCharacterProxyBodies[v7 / 2][0] = 0xFFFFFF;
  LODWORD(v11) = s_g_physicsCharacterProxyBodies[v7 / 2][1];
  s_g_physicsCharacterProxyDetailBodies[v7 / 2][0] = 0xFFFFFF;
  s_g_physicsCharacterProxyBodies[v6][1] = v11;
  s_g_physicsCharacterProxyDetailBodies[v6][1] = s_g_physicsCharacterProxyDetailBodies[v7 / 2][1];
  s_g_physicsCharacterProxyShapes[1][v7 / 2][1] = NULL;
  s_g_physicsCharacterProxyDetailBodies[v7 / 2][1] = 0xFFFFFF;
  s_g_physicsCharacterProxyInstances[v7 / 2][1] = -1;
  s_g_physicsCharacterProxyDetailInstances[v7 / 2][1] = -1;
  s_g_physicsCharacterProxyBodies[v7 / 2][1] = 0xFFFFFF;
}


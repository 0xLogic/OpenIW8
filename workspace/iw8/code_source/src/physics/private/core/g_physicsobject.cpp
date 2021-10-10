/*
==============
G_PhysicsObject_Write
==============
*/

void __fastcall G_PhysicsObject_Write(MemoryFile *memFile)
{
  ?G_PhysicsObject_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_PhysicsObject_IsPhysicsObjectShown
==============
*/

bool __fastcall G_PhysicsObject_IsPhysicsObjectShown(int entNum)
{
  return ?G_PhysicsObject_IsPhysicsObjectShown@@YA_NH@Z(entNum);
}

/*
==============
G_PhysicsObject_GetInstance
==============
*/

unsigned int __fastcall G_PhysicsObject_GetInstance(Physics_WorldId worldId, const gentity_s *ent)
{
  return ?G_PhysicsObject_GetInstance@@YAIW4Physics_WorldId@@PEBUgentity_s@@@Z(worldId, ent);
}

/*
==============
G_PhysicsObject_Shutdown
==============
*/

void G_PhysicsObject_Shutdown(void)
{
  ?G_PhysicsObject_Shutdown@@YAXXZ();
}

/*
==============
G_PhysicsObject_PostStepWorld
==============
*/

void __fastcall G_PhysicsObject_PostStepWorld(Physics_WorldId worldId)
{
  ?G_PhysicsObject_PostStepWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
G_PhysicsObject_UpdatePhysicsChild
==============
*/

void __fastcall G_PhysicsObject_UpdatePhysicsChild(Physics_WorldId worldId, gentity_s *ent)
{
  ?G_PhysicsObject_UpdatePhysicsChild@@YAXW4Physics_WorldId@@PEAUgentity_s@@@Z(worldId, ent);
}

/*
==============
G_PhysicsObject_UpdateDetailWorldInstance
==============
*/

unsigned int __fastcall G_PhysicsObject_UpdateDetailWorldInstance(Physics_WorldId fromWorldId, Physics_WorldId worldId, int entNum, DObjPartBits **partBits)
{
  return ?G_PhysicsObject_UpdateDetailWorldInstance@@YAIW4Physics_WorldId@@0HPEAPEAUDObjPartBits@@@Z(fromWorldId, worldId, entNum, partBits);
}

/*
==============
G_PhysicsObject_CreateChildEntities
==============
*/

void __fastcall G_PhysicsObject_CreateChildEntities(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  ?G_PhysicsObject_CreateChildEntities@@YAXW4Physics_WorldId@@PEAUgentity_s@@PEAVG_PhysicsObject@@@Z(worldId, parentEntity, physObj);
}

/*
==============
G_PhysicsObject_CachePrimaryBodies
==============
*/

void __fastcall G_PhysicsObject_CachePrimaryBodies(__int16 entNum)
{
  ?G_PhysicsObject_CachePrimaryBodies@@YAXF@Z(entNum);
}

/*
==============
G_PhysicsObject_MarkPhysicsObjectAsUsed
==============
*/

void __fastcall G_PhysicsObject_MarkPhysicsObjectAsUsed(int entNum, bool used)
{
  ?G_PhysicsObject_MarkPhysicsObjectAsUsed@@YAXH_N@Z(entNum, used);
}

/*
==============
G_PhysicsObject_GetInstance
==============
*/

unsigned int __fastcall G_PhysicsObject_GetInstance(Physics_WorldId worldId, int entNum)
{
  return ?G_PhysicsObject_GetInstance@@YAIW4Physics_WorldId@@H@Z(worldId, entNum);
}

/*
==============
G_PhysicsObject_AntilagRestore
==============
*/

void __fastcall G_PhysicsObject_AntilagRestore(G_PhysicsObject_AntilagRestoreState *restoreStates, unsigned int numRestoreStates, bool permitInvalid)
{
  ?G_PhysicsObject_AntilagRestore@@YAXPEAUG_PhysicsObject_AntilagRestoreState@@I_N@Z(restoreStates, numRestoreStates, permitInvalid);
}

/*
==============
G_PhysicsObject_Get
==============
*/

G_PhysicsObject *__fastcall G_PhysicsObject_Get(int entNum)
{
  return ?G_PhysicsObject_Get@@YAPEAVG_PhysicsObject@@H@Z(entNum);
}

/*
==============
G_PhysicsObject_IsPhysicsObjectDetailShown
==============
*/

bool __fastcall G_PhysicsObject_IsPhysicsObjectDetailShown(int entNum)
{
  return ?G_PhysicsObject_IsPhysicsObjectDetailShown@@YA_NH@Z(entNum);
}

/*
==============
G_PhysicsObject_RegisterForCollisionCallback
==============
*/

void __fastcall G_PhysicsObject_RegisterForCollisionCallback(gentity_s *ent)
{
  ?G_PhysicsObject_RegisterForCollisionCallback@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PhysicsObject_MarkPhysicsObjectAsShown
==============
*/

void __fastcall G_PhysicsObject_MarkPhysicsObjectAsShown(int entNum, bool shown, bool force)
{
  ?G_PhysicsObject_MarkPhysicsObjectAsShown@@YAXH_N0@Z(entNum, shown, force);
}

/*
==============
G_PhysicsObject_AntilagWarp
==============
*/

unsigned int __fastcall G_PhysicsObject_AntilagWarp(gentity_s *ent, bool warpMain, bool warpDetail, G_PhysicsObject_AntilagRestoreState *restoreStates)
{
  return ?G_PhysicsObject_AntilagWarp@@YAIPEAUgentity_s@@_N1PEAUG_PhysicsObject_AntilagRestoreState@@@Z(ent, warpMain, warpDetail, restoreStates);
}

/*
==============
G_PhysicsObject_IsPhysicsObjectUsed
==============
*/

bool __fastcall G_PhysicsObject_IsPhysicsObjectUsed(int entNum)
{
  return ?G_PhysicsObject_IsPhysicsObjectUsed@@YA_NH@Z(entNum);
}

/*
==============
G_PhysicsObject_IdentifyRigidBodyType
==============
*/

void __fastcall G_PhysicsObject_IdentifyRigidBodyType(int entNum)
{
  ?G_PhysicsObject_IdentifyRigidBodyType@@YAXH@Z(entNum);
}

/*
==============
G_PhysicsObject_SetNonDynamic
==============
*/

void __fastcall G_PhysicsObject_SetNonDynamic(gentity_s *ent)
{
  ?G_PhysicsObject_SetNonDynamic@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PhysicsObject_Get
==============
*/

G_PhysicsObject *__fastcall G_PhysicsObject_Get(const gentity_s *ent)
{
  return ?G_PhysicsObject_Get@@YAPEAVG_PhysicsObject@@PEBUgentity_s@@@Z(ent);
}

/*
==============
G_PhysicsObject_WarpToCurrentTransform
==============
*/

bool __fastcall G_PhysicsObject_WarpToCurrentTransform(gentity_s *ent, bool updateBroadPhase)
{
  return ?G_PhysicsObject_WarpToCurrentTransform@@YA_NPEAUgentity_s@@_N@Z(ent, updateBroadPhase);
}

/*
==============
G_PhysicsObject_GetBase
==============
*/

PhysicsObject *__fastcall G_PhysicsObject_GetBase(int entNum, LocalClientNum_t localClientNum)
{
  return ?G_PhysicsObject_GetBase@@YAPEAVPhysicsObject@@HW4LocalClientNum_t@@@Z(entNum, localClientNum);
}

/*
==============
G_PhysicsObject_CreateKeyframedBoneMapping
==============
*/

void __fastcall G_PhysicsObject_CreateKeyframedBoneMapping(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj, const PhysicsAsset *physAsset)
{
  ?G_PhysicsObject_CreateKeyframedBoneMapping@@YAXW4Physics_WorldId@@PEAUgentity_s@@PEAVG_PhysicsObject@@PEBUPhysicsAsset@@@Z(worldId, parentEntity, physObj, physAsset);
}

/*
==============
G_PhysicsObject_CreateDetailBoneMapping
==============
*/

void __fastcall G_PhysicsObject_CreateDetailBoneMapping(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  ?G_PhysicsObject_CreateDetailBoneMapping@@YAXW4Physics_WorldId@@PEAUgentity_s@@PEAVG_PhysicsObject@@@Z(worldId, parentEntity, physObj);
}

/*
==============
G_PhysicsObject_Load
==============
*/

void __fastcall G_PhysicsObject_Load(SaveGame *save)
{
  ?G_PhysicsObject_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_PhysicsObject_GetAABB
==============
*/

bool __fastcall G_PhysicsObject_GetAABB(Physics_WorldId worldId, const gentity_s *ent, vec3_t *aabbMin, vec3_t *aabbMax, bool worldSpace)
{
  return ?G_PhysicsObject_GetAABB@@YA_NW4Physics_WorldId@@PEBUgentity_s@@AEATvec3_t@@2_N@Z(worldId, ent, aabbMin, aabbMax, worldSpace);
}

/*
==============
G_PhysicsObject_DestroyDetailBoneMapping
==============
*/

void __fastcall G_PhysicsObject_DestroyDetailBoneMapping(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  ?G_PhysicsObject_DestroyDetailBoneMapping@@YAXW4Physics_WorldId@@PEAUgentity_s@@PEAVG_PhysicsObject@@@Z(worldId, parentEntity, physObj);
}

/*
==============
G_PhysicsObject_MapPose
==============
*/

void __fastcall G_PhysicsObject_MapPose(gentity_s *ent, DObjPartBits *partBits, DObj *obj)
{
  ?G_PhysicsObject_MapPose@@YAXPEAUgentity_s@@PEAUDObjPartBits@@PEAUDObj@@@Z(ent, partBits, obj);
}

/*
==============
G_PhysicsObject_UnregisterForCollisionCallback
==============
*/

void __fastcall G_PhysicsObject_UnregisterForCollisionCallback(gentity_s *ent)
{
  ?G_PhysicsObject_UnregisterForCollisionCallback@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_PhysicsObject_DestroyKeyframedBoneMapping
==============
*/

void __fastcall G_PhysicsObject_DestroyKeyframedBoneMapping(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  ?G_PhysicsObject_DestroyKeyframedBoneMapping@@YAXW4Physics_WorldId@@PEAUgentity_s@@PEAVG_PhysicsObject@@@Z(worldId, parentEntity, physObj);
}

/*
==============
G_PhysicsObject_PropagateToDetailWorld
==============
*/

void __fastcall G_PhysicsObject_PropagateToDetailWorld(Physics_WorldId fromWorldId, Physics_WorldId worldId)
{
  ?G_PhysicsObject_PropagateToDetailWorld@@YAXW4Physics_WorldId@@0@Z(fromWorldId, worldId);
}

/*
==============
G_PhysicsObject_DestroyChildEntities
==============
*/

void __fastcall G_PhysicsObject_DestroyChildEntities(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  ?G_PhysicsObject_DestroyChildEntities@@YAXW4Physics_WorldId@@PEAUgentity_s@@PEAVG_PhysicsObject@@@Z(worldId, parentEntity, physObj);
}

/*
==============
G_PhysicsObject_PreStepWorld
==============
*/

void __fastcall G_PhysicsObject_PreStepWorld(Physics_WorldId worldId, int numSteps)
{
  ?G_PhysicsObject_PreStepWorld@@YAXW4Physics_WorldId@@H@Z(worldId, numSteps);
}

/*
==============
G_PhysicsObject_MarkPhysicsObjectDetailAsShown
==============
*/

void __fastcall G_PhysicsObject_MarkPhysicsObjectDetailAsShown(int entNum, bool shown, bool force)
{
  ?G_PhysicsObject_MarkPhysicsObjectDetailAsShown@@YAXH_N0@Z(entNum, shown, force);
}

/*
==============
G_PhysicsObject_Init
==============
*/

void G_PhysicsObject_Init(void)
{
  ?G_PhysicsObject_Init@@YAXXZ();
}

/*
==============
G_PhysicsObject_AntilagRestore
==============
*/
void G_PhysicsObject_AntilagRestore(G_PhysicsObject_AntilagRestoreState *restoreStates, unsigned int numRestoreStates, bool permitInvalid)
{
  __int64 v3; 
  unsigned int *p_detailBoundsId; 
  bool IsRigidBodyValid; 
  Physics_WorldId v8; 
  unsigned int v9; 

  v3 = numRestoreStates;
  if ( !restoreStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1181, ASSERT_TYPE_ASSERT, "(restoreStates)", (const char *)&queryFormat, "restoreStates") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1182, ASSERT_TYPE_ASSERT, "(numRestoreStates < ( 2048 ))", (const char *)&queryFormat, "numRestoreStates < MAX_GENTITIES") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "G_PhysicsObject_AntilagRestore");
  if ( (_DWORD)v3 )
  {
    p_detailBoundsId = &restoreStates->detailBoundsId;
    do
    {
      if ( *(p_detailBoundsId - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1189, ASSERT_TYPE_ASSERT, "(Physics_IsServerWorld( restoreState.worldId ))", (const char *)&queryFormat, "Physics_IsServerWorld( restoreState.worldId )") )
        __debugbreak();
      IsRigidBodyValid = Physics_IsRigidBodyValid((Physics_WorldId)*(p_detailBoundsId - 2), *(p_detailBoundsId - 1));
      v8 = *(p_detailBoundsId - 2);
      if ( IsRigidBodyValid )
      {
        Physics_AntilagRestoreRigidBodyTo(v8, *(p_detailBoundsId - 1), (const vec3_t *)(p_detailBoundsId + 2), (const vec4_t *)(p_detailBoundsId + 5));
      }
      else if ( Physics_IsRigidBodyValid(v8, *p_detailBoundsId) )
      {
        Physics_AntilagRestoreDetailBoundRigidBodyTo((const Physics_WorldId)*(p_detailBoundsId - 2), *p_detailBoundsId, (const vec3_t *)(p_detailBoundsId + 2));
      }
      else if ( permitInvalid )
      {
        v9 = p_detailBoundsId[1];
        if ( v9 != -1 )
          Physics_AntilagRestoreInstanceTo((Physics_WorldId)*(p_detailBoundsId - 2), v9, (const vec3_t *)(p_detailBoundsId + 2), (const vec4_t *)(p_detailBoundsId + 5));
      }
      p_detailBoundsId += 16;
      --v3;
    }
    while ( v3 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_PhysicsObject_AntilagWarp
==============
*/
__int64 G_PhysicsObject_AntilagWarp(gentity_s *ent, bool warpMain, bool warpDetail, G_PhysicsObject_AntilagRestoreState *restoreStates)
{
  G_PhysicsObject *v9; 
  unsigned int v10; 
  unsigned int v11; 
  const vec4_t *p_orientationAsQuat; 
  unsigned int v13; 
  float *v; 
  unsigned __int64 v15; 
  hknpBodyId v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  vec3_t *fmt; 
  vec4_t *restoreOrientationAsQuat; 
  hkVector4f hkPosition; 
  hkVector4f hkRestorePosition; 
  vec4_t quat; 

  if ( !G_PhysicsObject_IsPhysicsObjectShown(ent->s.number) )
    return 0i64;
  v9 = G_PhysicsObject_Get(ent);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1085, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  AnglesToQuat(&ent->r.currentAngles, &quat);
  G_PhysicsObject_InitDetailCache(ent, v9, &ent->r.currentOrigin, &quat);
  v10 = 0;
  if ( warpMain )
  {
    v11 = v9->physicsInstances[0];
    if ( v11 != -1 )
    {
      restoreOrientationAsQuat = &restoreStates->orientation;
      p_orientationAsQuat = &v9->detailCache.orientationAsQuat;
      fmt = &restoreStates->origin;
      if ( v9->numBodies[0] == 1 )
      {
        if ( Physics_AntilagWarpRigidBodyTo(PHYSICS_WORLD_ID_FIRST, v9->primaryBodies[0], &v9->detailCache.position, p_orientationAsQuat, fmt, restoreOrientationAsQuat) )
        {
          restoreStates->worldId = PHYSICS_WORLD_ID_FIRST;
          restoreStates->instanceId = -1;
          restoreStates->detailBoundsId = 0xFFFFFF;
          restoreStates->bodyId = v9->primaryBodies[0];
LABEL_13:
          restoreStates->entityIndex = ent->s.number;
          restoreStates->entityType = ent->s.eType;
          restoreStates->targetName = SL_ConvertToString(ent->targetname);
          v10 = 1;
        }
      }
      else if ( Physics_AntilagWarpInstanceTo(PHYSICS_WORLD_ID_FIRST, v11, &ent->r.currentOrigin, p_orientationAsQuat, fmt, restoreOrientationAsQuat) )
      {
        restoreStates->worldId = PHYSICS_WORLD_ID_FIRST;
        restoreStates->instanceId = v11;
        restoreStates->detailBoundsId = 0xFFFFFF;
        restoreStates->bodyId = 0xFFFFFF;
        goto LABEL_13;
      }
    }
  }
  if ( !warpDetail )
    return v10;
  v13 = v9->physicsInstances[1];
  if ( v13 == -1 )
    return v10;
  v = v9->detailCache.position.v;
  v15 = (unsigned __int64)v10 << 6;
  if ( Physics_IsInstanceDetailBounded(PHYSICS_WORLD_ID_SERVER_DETAIL, v13) )
  {
    v16.m_serialAndIndex = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_SERVER_DETAIL, v13, v9->numBodies[1] - 1);
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 524, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (v16.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 526, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", 1) )
      __debugbreak();
    if ( ((*(_DWORD *)v & 0x7F800000) == 2139095040 || ((_DWORD)v[1] & 0x7F800000) == 2139095040 || ((_DWORD)v[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 527, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
      __debugbreak();
    v17 = 0.03125 * *v;
    v18 = 0.03125 * v[2];
    hkPosition.m_quad.m128_f32[1] = 0.03125 * v[1];
    hkPosition.m_quad.m128_f32[3] = 0.0;
    hkPosition.m_quad.m128_f32[0] = v17;
    hkPosition.m_quad.m128_f32[2] = v18;
    if ( HavokPhysics_AntilagWarpDetailBoundRigidBodyTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v16, &hkPosition, &hkRestorePosition) == Physics_MovementType_NoMove )
      return v10;
    v19 = 32.0 * hkRestorePosition.m_quad.m128_f32[1];
    v20 = 32.0 * hkRestorePosition.m_quad.m128_f32[2];
    *(float *)((char *)restoreStates->origin.v + v15) = 32.0 * hkRestorePosition.m_quad.m128_f32[0];
    *(float *)((char *)&restoreStates->origin.v[1] + v15) = v19;
    *(float *)((char *)&restoreStates->origin.v[2] + v15) = v20;
    *(Physics_WorldId *)((char *)&restoreStates->worldId + v15) = PHYSICS_WORLD_ID_SERVER_DETAIL;
    *(unsigned int *)((char *)&restoreStates->instanceId + v15) = -1;
    *(hknpBodyId *)((char *)&restoreStates->detailBoundsId + v15) = v16;
    *(unsigned int *)((char *)&restoreStates->bodyId + v15) = 0xFFFFFF;
    restoreStates->entityIndex = ent->s.number;
    restoreStates->entityType = ent->s.eType;
    goto LABEL_32;
  }
  if ( Physics_AntilagWarpRigidBodyTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v9->primaryBodies[1], &v9->detailCache.position, &v9->detailCache.orientationAsQuat, (vec3_t *)((char *)&restoreStates->origin + v15), (vec4_t *)((char *)&restoreStates->orientation + v15)) )
  {
    *(Physics_WorldId *)((char *)&restoreStates->worldId + v15) = PHYSICS_WORLD_ID_SERVER_DETAIL;
    *(unsigned int *)((char *)&restoreStates->instanceId + v15) = -1;
    *(unsigned int *)((char *)&restoreStates->detailBoundsId + v15) = 0xFFFFFF;
    *(unsigned int *)((char *)&restoreStates->bodyId + v15) = v9->primaryBodies[1];
    restoreStates->entityIndex = ent->s.number;
    restoreStates->entityType = ent->s.eType;
LABEL_32:
    ++v10;
    restoreStates->targetName = SL_ConvertToString(ent->targetname);
  }
  return v10;
}

/*
==============
G_PhysicsObject_CachePrimaryBodies
==============
*/
void G_PhysicsObject_CachePrimaryBodies(__int16 entNum)
{
  G_PhysicsObject *v1; 
  unsigned int *numBodies; 
  int i; 
  unsigned int v4; 
  unsigned int RigidBodyID; 
  unsigned int NumRigidBodys; 
  unsigned int v7; 
  __int64 v8; 
  hknpBodyId result; 

  v1 = G_PhysicsObject_Get(entNum);
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 439, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  numBodies = v1->numBodies;
  for ( i = 0; i <= 1; ++i )
  {
    v4 = *(numBodies - 10);
    if ( v4 == -1 )
    {
      *numBodies = 0;
      RigidBodyID = 0xFFFFFF;
    }
    else
    {
      NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)i, v4);
      *numBodies = NumRigidBodys;
      v7 = NumRigidBodys;
      if ( Physics_IsDetailWorld((Physics_WorldId)i) && Physics_IsInstanceDetailBounded((const Physics_WorldId)i, v4) )
      {
        RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)i, v4, v7 - 1);
      }
      else
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)i > 7 )
        {
          LODWORD(v8) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(i - 2) <= 5 )
        {
          LODWORD(v8) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v8) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)i <= 1 )
        {
          LODWORD(v8) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v8) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)i, v4, 0)->m_serialAndIndex;
      }
    }
    *(numBodies - 2) = RigidBodyID;
    ++numBodies;
  }
}

/*
==============
G_PhysicsObject_CreateChildEntities
==============
*/
void G_PhysicsObject_CreateChildEntities(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  __int64 v5; 
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  unsigned int v8; 
  int NumRigidBodys; 
  int v10; 
  signed int v11; 
  unsigned int v12; 
  unsigned int m_serialAndIndex; 
  __int64 v14; 
  unsigned __int64 i; 
  _WORD *v16; 
  int v17; 
  signed int v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  gentity_s *v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  __int16 number; 
  unsigned __int8 BoneIndex; 
  __int64 v27; 
  hknpBodyId result[2]; 
  unsigned int instanceId; 
  int v30; 
  int v31; 
  gentity_s *ent; 
  hkMonitorStream *v33; 
  G_PhysicsObject *v34; 
  hknpBodyId v35; 
  DObj *dobj; 
  __int64 v37; 
  hkMonitorStream *v38; 
  vec3_t position; 
  vec3_t angles; 
  vec4_t orientation; 
  tmat33_t<vec3_t> axis; 

  v37 = -2i64;
  v34 = physObj;
  ent = parentEntity;
  v5 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  v33 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_CreateChildEntities");
  v38 = v7;
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 579, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 580, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  if ( !parentEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 581, ASSERT_TYPE_ASSERT, "( parentEntity )", (const char *)&queryFormat, "parentEntity") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 582, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  v8 = physObj->physicsInstances[v5];
  instanceId = v8;
  if ( v8 != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, v8);
    v31 = NumRigidBodys;
    if ( NumRigidBodys > 1 )
    {
      v10 = 0;
      v11 = 1;
      v12 = instanceId;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v5 > 7 )
        {
          LODWORD(v27) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v27) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
        {
          LODWORD(v27) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v27) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
        {
          LODWORD(v27) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v27) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v5, v12, v11)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 603, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v5, m_serialAndIndex) )
          ++v10;
        ++v11;
      }
      while ( v11 < NumRigidBodys );
      v7 = v33;
      v14 = (__int64)v34;
      if ( v10 > 0 )
      {
        if ( v34->childEntities.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 616, ASSERT_TYPE_ASSERT, "( physObj->childEntities.size() == 0 )", (const char *)&queryFormat, "physObj->childEntities.size() == 0") )
          __debugbreak();
        if ( *(_QWORD *)(v14 + 104) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
          __debugbreak();
        if ( !ntl::static_shared_allocator<G_PhysicsObject_ChildEntityAllocator,ntl::fixed_heap_allocator<32768,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        *(_QWORD *)(v14 + 104) = ntl::nxheap::allocate(&ntl::static_shared_allocator<G_PhysicsObject_ChildEntityAllocator,ntl::fixed_heap_allocator<32768,0>>::mp_allocator->m_heap, 2i64 * v10, 4ui64, 1);
        *(_QWORD *)(v14 + 112) = v10;
        for ( i = 0i64; i < v10; ++i )
        {
          if ( i >= *(_QWORD *)(v14 + 112) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
          v16 = (_WORD *)(*(_QWORD *)(v14 + 104) + 2 * i);
          if ( v16 )
            *v16 = 0;
        }
        ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::reserve((ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *)(v14 + 56), v10);
        dobj = Com_GetServerDObjForEnt(ent);
        if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 622, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
          __debugbreak();
        v17 = 0;
        v30 = 0;
        v18 = 1;
        v19 = 0i64;
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v5 > 7 )
          {
            LODWORD(v27) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v27) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
          {
            LODWORD(v27) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v27) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
          {
            LODWORD(v27) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v27) )
              __debugbreak();
          }
          v20 = HavokPhysics_GetRigidBodyID(&v35, (const Physics_WorldId)v5, instanceId, v18)->m_serialAndIndex;
          if ( (v20 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 629, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v5, v20) )
          {
            Physics_GetRigidBodyTransform((const Physics_WorldId)v5, v20, &position, &orientation);
            QuatToAxis(&orientation, &axis);
            AxisToAngles(&axis, &angles);
            v21 = G_Utils_SpawnEntity();
            if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 644, ASSERT_TYPE_ASSERT, "( childEntity )", (const char *)&queryFormat, "childEntity") )
              __debugbreak();
            v21->s.eType = ET_PHYSICS_CHILD;
            v21->s.otherEntityNum = ent->s.number;
            v21->s.un.vehicleXModel = v18 | (v17 << 16);
            v21->s.lerp.pos.trType = TR_INTERPOLATE;
            *(_QWORD *)&v21->s.lerp.pos.trTime = 0i64;
            *(_QWORD *)v21->s.lerp.pos.trDelta.v = 0i64;
            v21->s.lerp.pos.trDelta.v[2] = 0.0;
            if ( v21 == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
              __debugbreak();
            if ( v21->s.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
            {
              result[0] = LODWORD(position.v[0]);
              if ( (LODWORD(position.v[0]) & 0x7F800000) == 2139095040 || (result[0] = LODWORD(position.y), (LODWORD(position.v[1]) & 0x7F800000) == 2139095040) || (result[0] = LODWORD(position.z), (LODWORD(position.v[2]) & 0x7F800000) == 2139095040) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
                  __debugbreak();
              }
              v22 = LODWORD(position.v[0]) ^ ~s_trbase_aab_X;
              v23 = s_trbase_aab_Y ^ v22 ^ LODWORD(position.v[1]);
              v24 = s_trbase_aab_Z ^ v23 ^ LODWORD(position.v[2]);
              LODWORD(v21->s.lerp.pos.trBase.v[0]) = v22;
              LODWORD(v21->s.lerp.pos.trBase.v[1]) = v23;
              LODWORD(v21->s.lerp.pos.trBase.v[2]) = v24;
              memset(result, 0, sizeof(result));
            }
            else
            {
              v21->s.lerp.pos.trBase = position;
            }
            *(_QWORD *)&v21->s.lerp.apos.trType = 1i64;
            v21->s.lerp.apos.trDuration = 0;
            *(_QWORD *)v21->s.lerp.apos.trDelta.v = 0i64;
            v21->s.lerp.apos.trDelta.v[2] = 0.0;
            v21->s.lerp.apos.trBase = angles;
            SV_LinkEntity(v21);
            number = v21->s.number;
            if ( v19 >= *(_QWORD *)(v14 + 112) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( v19 >= *(_QWORD *)(v14 + 112) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                __debugbreak();
            }
            *(_WORD *)(*(_QWORD *)(v14 + 104) + 2 * v19) = number;
            if ( v19 >= *(_QWORD *)(v14 + 64) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( v19 >= *(_QWORD *)(v14 + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                __debugbreak();
            }
            *(_DWORD *)(*(_QWORD *)(v14 + 56) + 8 * v19) = v20;
            BoneIndex = G_PhysicsObject_FindBoneIndex((Physics_WorldId)v5, v20, ent, dobj);
            if ( v19 >= *(_QWORD *)(v14 + 64) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                __debugbreak();
              if ( v19 >= *(_QWORD *)(v14 + 64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                __debugbreak();
            }
            *(_BYTE *)(*(_QWORD *)(v14 + 56) + 8 * v19 + 4) = BoneIndex;
            v17 = ++v30;
            ++v19;
          }
          ++v18;
        }
        while ( v18 < v31 );
        v7 = v33;
      }
    }
  }
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
G_PhysicsObject_CreateDetailBoneMapping
==============
*/
void G_PhysicsObject_CreateDetailBoneMapping(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  __int64 v5; 
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  unsigned int v8; 
  int NumRigidBodys; 
  ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *p_detailBoneMapping; 
  int v11; 
  signed int v12; 
  unsigned __int64 v13; 
  gentity_s *v14; 
  unsigned int m_serialAndIndex; 
  unsigned __int8 BoneIndex; 
  __int64 v17; 
  hknpBodyId result; 
  gentity_s *entity; 
  DObj *dobj; 
  hkMonitorStream *v21; 

  entity = parentEntity;
  v5 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  v21 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_CreateDetailBoneMapping");
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 915, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 916, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  if ( !parentEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 917, ASSERT_TYPE_ASSERT, "( parentEntity )", (const char *)&queryFormat, "parentEntity") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 918, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  v8 = physObj->physicsInstances[v5];
  if ( v8 != -1 && Physics_IsInstanceDetailBounded((const Physics_WorldId)v5, v8) )
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, v8);
    if ( NumRigidBodys <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 935, ASSERT_TYPE_ASSERT, "(numRigidBodies > 1)", (const char *)&queryFormat, "numRigidBodies > 1") )
      __debugbreak();
    if ( physObj->detailBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 938, ASSERT_TYPE_ASSERT, "( physObj->detailBoneMapping.size() == 0 )", (const char *)&queryFormat, "physObj->detailBoneMapping.size() == 0") )
      __debugbreak();
    p_detailBoneMapping = &physObj->detailBoneMapping;
    v11 = NumRigidBodys - 1;
    ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::reserve(&physObj->detailBoneMapping, NumRigidBodys - 1);
    dobj = Com_GetServerDObjForEnt(parentEntity);
    if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 943, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
      __debugbreak();
    v12 = 0;
    if ( v11 > 0 )
    {
      v13 = 0i64;
      v14 = entity;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v5 > 7 )
        {
          LODWORD(v17) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v17) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
        {
          LODWORD(v17) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v17) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
        {
          LODWORD(v17) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v17) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v5, v8, v12)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 949, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( v13 >= p_detailBoneMapping->m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v13 >= p_detailBoneMapping->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        p_detailBoneMapping->m_data.m_buffer[v13].bodyId = m_serialAndIndex;
        BoneIndex = G_PhysicsObject_FindBoneIndex((Physics_WorldId)v5, m_serialAndIndex, v14, dobj);
        if ( v13 >= p_detailBoneMapping->m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v13 >= p_detailBoneMapping->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        p_detailBoneMapping->m_data.m_buffer[v13].boneIndex = BoneIndex;
        ++v12;
        ++v13;
      }
      while ( v12 < v11 );
      v7 = v21;
    }
  }
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
G_PhysicsObject_CreateKeyframedBoneMapping
==============
*/
void G_PhysicsObject_CreateKeyframedBoneMapping(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj, const PhysicsAsset *physAsset)
{
  __int64 v6; 
  hkMonitorStream *Value; 
  hkMonitorStream *v8; 
  unsigned int v9; 
  int v10; 
  int v11; 
  signed int v12; 
  PhysicsAsset *v13; 
  unsigned int m_serialAndIndex; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 i; 
  unsigned int v18; 
  int v19; 
  signed int v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  _QWORD *v23; 
  gentity_s *v24; 
  const DObj *ServerDObjForEnt; 
  unsigned __int64 v26; 
  signed int j; 
  unsigned int v28; 
  unsigned __int8 BoneIndex; 
  __int64 v30; 
  int v31; 
  unsigned int instanceId; 
  int NumRigidBodys; 
  hknpBodyId result; 
  hkMonitorStream *v35; 
  PhysicsAsset *physicsAsset; 
  gentity_s *ent; 
  __int64 v38; 
  hkMonitorStream *v39; 
  vec3_t position; 
  vec3_t v41; 
  vec4_t orientation; 
  vec4_t quat; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v45; 
  tmat43_t<vec3_t> out; 

  v38 = -2i64;
  physicsAsset = (PhysicsAsset *)physAsset;
  *(_QWORD *)position.v = physObj;
  ent = parentEntity;
  v6 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v8 = Value;
  v35 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_CreateKeyframedBoneMapping");
  v39 = v8;
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 744, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( (unsigned int)v6 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 745, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  if ( !parentEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 746, ASSERT_TYPE_ASSERT, "( parentEntity )", (const char *)&queryFormat, "parentEntity") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 747, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( physObj->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 748, ASSERT_TYPE_ASSERT, "( physObj->keyframedOffsetMapping.size() == 0 )", (const char *)&queryFormat, "physObj->keyframedOffsetMapping.size() == 0") )
    __debugbreak();
  if ( physObj->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 749, ASSERT_TYPE_ASSERT, "( physObj->keyframedBoneMapping.size() == 0 )", (const char *)&queryFormat, "physObj->keyframedBoneMapping.size() == 0") )
    __debugbreak();
  v9 = physObj->physicsInstances[v6];
  instanceId = v9;
  if ( v9 != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, v9);
    if ( NumRigidBodys > 1 )
    {
      v10 = 0;
      v31 = 0;
      v11 = 0;
      v12 = 1;
      v13 = physicsAsset;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v30) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v30) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v30) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v30) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v30) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v30) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, instanceId, v12)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 772, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( Physics_IsRigidBodyKeyframed((Physics_WorldId)v6, m_serialAndIndex) )
        {
          ++v10;
          if ( Physics_IsAssetBodyAnimationDriven(v13, v12) )
            ++v31;
          else
            ++v11;
        }
        ++v12;
      }
      while ( v12 < NumRigidBodys );
      v8 = v35;
      if ( v10 > 0 )
      {
        v15 = *(_QWORD *)position.v;
        if ( v11 > 0 )
        {
          if ( *(_QWORD *)(*(_QWORD *)position.v + 88i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 82, ASSERT_TYPE_ASSERT, "( ( m_data.begin() == 0 ) || ( memory_block_type::is_fixed_memory_block::value ) )", "Reallocation is not supported") )
            __debugbreak();
          if ( !ntl::static_shared_allocator<G_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 137, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
            __debugbreak();
          *(_QWORD *)(v15 + 88) = ntl::nxheap::allocate(&ntl::static_shared_allocator<G_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator->m_heap, 52i64 * v11, 4ui64, 1);
          *(_QWORD *)(v15 + 96) = v11;
          v16 = 0i64;
          for ( i = 0i64; i < v11; ++i )
          {
            if ( i >= *(_QWORD *)(v15 + 96) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
            *(_DWORD *)(v16 + *(_QWORD *)(v15 + 88)) = 0xFFFFFF;
            v16 += 52i64;
          }
          v18 = *(_DWORD *)(v15 + 4 * v6 + 36);
          if ( (v18 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 807, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( rootBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( rootBodyId )") )
            __debugbreak();
          Physics_GetRigidBodyTransform((const Physics_WorldId)v6, v18, &position, &orientation);
          QuatToAxis(&orientation, (tmat33_t<vec3_t> *)&axis);
          axis.m[3] = position;
          MatrixInverseOrthogonal43(&axis, &out);
          v19 = 0;
          v20 = 1;
          v21 = 0i64;
          *(_QWORD *)position.v = 0i64;
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v6 > 7 )
            {
              LODWORD(v30) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v30) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
            {
              LODWORD(v30) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v30) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
            {
              LODWORD(v30) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v30) )
                __debugbreak();
            }
            v22 = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, instanceId, v20)->m_serialAndIndex;
            if ( (v22 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 818, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            if ( Physics_IsRigidBodyKeyframed((Physics_WorldId)v6, v22) && !Physics_IsAssetBodyAnimationDriven(physicsAsset, v20) )
            {
              Physics_GetRigidBodyTransform((const Physics_WorldId)v6, v22, &v41, &quat);
              QuatToAxis(&quat, (tmat33_t<vec3_t> *)&v45);
              v45.m[3] = v41;
              if ( v21 >= *(_QWORD *)(v15 + 96) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v21 >= *(_QWORD *)(v15 + 96) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              *(_DWORD *)(*(_QWORD *)position.v + *(_QWORD *)(v15 + 88)) = v22;
              if ( (unsigned __int64)v19 >= *(_QWORD *)(v15 + 96) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( (unsigned __int64)v19 >= *(_QWORD *)(v15 + 96) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              MatrixMultiply43(&v45, &out, (tmat43_t<vec3_t> *)(52i64 * v19++ + *(_QWORD *)(v15 + 88) + 4));
              ++v21;
              *(_QWORD *)position.v += 52i64;
            }
            ++v20;
          }
          while ( v20 < NumRigidBodys );
          v8 = v35;
        }
        if ( v31 > 0 )
        {
          v23 = (_QWORD *)(v15 + 72);
          ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::reserve((ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *)(v15 + 72), v31);
          v24 = ent;
          ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
          if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 846, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
            __debugbreak();
          v26 = 0i64;
          for ( j = 1; j < NumRigidBodys; ++j )
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v6 > 7 )
            {
              LODWORD(v30) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v30) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
            {
              LODWORD(v30) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v30) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
            {
              LODWORD(v30) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v30) )
                __debugbreak();
            }
            v28 = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, instanceId, j)->m_serialAndIndex;
            if ( (v28 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 853, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            if ( Physics_IsRigidBodyKeyframed((Physics_WorldId)v6, v28) && Physics_IsAssetBodyAnimationDriven(physicsAsset, j) )
            {
              if ( v26 >= v23[1] )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v26 >= v23[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              *(_DWORD *)(*v23 + 8 * v26) = v28;
              BoneIndex = G_PhysicsObject_FindBoneIndex((Physics_WorldId)v6, v28, v24, ServerDObjForEnt);
              if ( v26 >= v23[1] )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v26 >= v23[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              *(_BYTE *)(*v23 + 8 * v26++ + 4) = BoneIndex;
            }
          }
          v8 = v35;
        }
      }
    }
  }
  if ( v8 )
    hkMonitorStream::timerEnd(v8, "Et");
}

/*
==============
G_PhysicsObject_DestroyChildEntities
==============
*/
void G_PhysicsObject_DestroyChildEntities(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  unsigned __int64 m_size; 
  __int16 *m_buffer; 
  gentity_s *v10; 
  hkMonitorStream *v11; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  v11 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_DestroyChildEntities");
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 682, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized", -2i64) )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 683, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  if ( !parentEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 684, ASSERT_TYPE_ASSERT, "( parentEntity )", (const char *)&queryFormat, "parentEntity") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 685, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  m_size = physObj->childEntities.m_data.m_size;
  if ( m_size )
  {
    m_buffer = physObj->childEntities.m_data.m_buffer;
    if ( m_buffer != &m_buffer[m_size] )
    {
      do
      {
        if ( *m_buffer != 2047 )
        {
          v10 = &g_entities[*m_buffer];
          if ( v10->s.eType != ET_PHYSICS_CHILD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 706, ASSERT_TYPE_ASSERT, "( childEntity->s.eType == ET_PHYSICS_CHILD )", (const char *)&queryFormat, "childEntity->s.eType == ET_PHYSICS_CHILD") )
            __debugbreak();
          if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
            __debugbreak();
          GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v10);
        }
        ++m_buffer;
      }
      while ( m_buffer != &physObj->childEntities.m_data.m_buffer[physObj->childEntities.m_data.m_size] );
      v7 = v11;
    }
    ntl::array<short,G_PhysicsObject_ChildEntityAllocator>::clear_and_deallocate(&physObj->childEntities);
    if ( !physObj->dynamicBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 714, ASSERT_TYPE_ASSERT, "( physObj->dynamicBoneMapping.size() > 0 )", (const char *)&queryFormat, "physObj->dynamicBoneMapping.size() > 0") )
      __debugbreak();
    ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::clear_and_deallocate(&physObj->dynamicBoneMapping);
  }
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
G_PhysicsObject_DestroyDetailBoneMapping
==============
*/
void G_PhysicsObject_DestroyDetailBoneMapping(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_DestroyDetailBoneMapping");
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 964, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized", -2i64) )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 965, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  if ( !parentEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 966, ASSERT_TYPE_ASSERT, "( parentEntity )", (const char *)&queryFormat, "parentEntity") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 967, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( physObj->detailBoneMapping.m_data.m_size )
    ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::clear_and_deallocate(&physObj->detailBoneMapping);
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
G_PhysicsObject_DestroyKeyframedBoneMapping
==============
*/
void G_PhysicsObject_DestroyKeyframedBoneMapping(Physics_WorldId worldId, gentity_s *parentEntity, G_PhysicsObject *physObj)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_DestroyKeyframedBoneMapping");
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 873, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized", -2i64) )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 874, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  if ( !parentEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 875, ASSERT_TYPE_ASSERT, "( parentEntity )", (const char *)&queryFormat, "parentEntity") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 876, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( physObj->keyframedBoneMapping.m_data.m_size )
    ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::clear_and_deallocate(&physObj->keyframedBoneMapping);
  if ( physObj->keyframedOffsetMapping.m_data.m_size )
    ntl::array<PhysicsObjectOffsetMapping,G_PhysicsObject_OffsetMappingAllocator>::clear_and_deallocate(&physObj->keyframedOffsetMapping);
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
G_PhysicsObject_FindBoneIndex
==============
*/
unsigned __int8 G_PhysicsObject_FindBoneIndex(Physics_WorldId worldId, unsigned int bodyId, gentity_s *entity, const DObj *dobj)
{
  const char *RigidBodyName; 
  scr_string_t String; 
  __int64 v8; 
  unsigned __int64 v9; 
  scr_string_t v10; 
  scr_string_t v11; 
  unsigned __int8 result; 
  const char *v13; 
  char _Buffer[256]; 

  RigidBodyName = Physics_GetRigidBodyName(worldId, bodyId);
  if ( !RigidBodyName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 541, ASSERT_TYPE_ASSERT, "( name )", (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  j_sprintf(_Buffer, "%s_lod0", RigidBodyName);
  I_strlwr(_Buffer);
  String = SL_FindString(_Buffer);
  v8 = -1i64;
  do
    ++v8;
  while ( _Buffer[v8] );
  v9 = v8 - 5;
  if ( v9 >= 0x100 )
  {
    j___report_rangecheckfailure(v9);
    JUMPOUT(0x140E8E620i64);
  }
  _Buffer[v9] = 0;
  v10 = SL_FindString(_Buffer);
  v11 = v10;
  if ( !String && !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 557, ASSERT_TYPE_ASSERT, "(scrName1 != ( static_cast< scr_string_t >( 0 ) ) || scrName2 != ( static_cast< scr_string_t >( 0 ) ))", "%s\n\tCouldn't find a bone name %s - it's probably not in the skeleton", "scrName1 != NULL_SCR_STRING || scrName2 != NULL_SCR_STRING", _Buffer) )
    __debugbreak();
  result = G_PhysicsObject_FindBoneIndex_Helper(dobj, entity, String);
  if ( result == 0xFE )
  {
    result = G_PhysicsObject_FindBoneIndex_Helper(dobj, entity, v11);
    if ( result == 0xFE )
    {
      if ( dobj && dobj->numModels )
        v13 = **(const char ***)dobj->models;
      else
        v13 = "Unknown";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 565, ASSERT_TYPE_ASSERT, "(index != 254)", "%s\n\tCouldn't find bone %s in model %s", "index != UNDEFINED_BONEINDEX", RigidBodyName, v13) )
        __debugbreak();
      return -1;
    }
  }
  return result;
}

/*
==============
G_PhysicsObject_FindBoneIndex_Helper
==============
*/
unsigned __int8 G_PhysicsObject_FindBoneIndex_Helper(const DObj *dobj, gentity_s *entity, const scr_string_t name)
{
  unsigned __int16 model; 
  const XModel *v6; 
  unsigned __int8 inOutIndex; 
  int modelIndex; 

  if ( name && ((inOutIndex = -2, DObjGetBoneIndexInternal_15(dobj, name, &inOutIndex, &modelIndex)) || entity && (model = entity->model) != 0 && (v6 = G_Utils_GetModel(model)) != NULL && XModelGetBoneIndex(v6, name, 0, &inOutIndex)) )
    return inOutIndex;
  else
    return -2;
}

/*
==============
G_PhysicsObject_Get
==============
*/
G_PhysicsObject *G_PhysicsObject_Get(int entNum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = entNum;
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 383, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( !s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 384, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs )", (const char *)&queryFormat, "s_gentityPhyObjs") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x800 )
  {
    v4 = 2048;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 385, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( s_physicsObject_NumGEntityPhysObjs )", "entNum doesn't index s_physicsObject_NumGEntityPhysObjs\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_gentityPhyObjs[v1];
}

/*
==============
G_PhysicsObject_Get
==============
*/
G_PhysicsObject *G_PhysicsObject_Get(const gentity_s *ent)
{
  __int64 number; 
  __int64 v4; 

  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 369, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( !s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 370, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs )", (const char *)&queryFormat, "s_gentityPhyObjs") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 371, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v4) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 374, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( s_physicsObject_NumGEntityPhysObjs )", "entityIndex doesn't index s_physicsObject_NumGEntityPhysObjs\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  return &s_gentityPhyObjs[number];
}

/*
==============
G_PhysicsObject_GetAABB
==============
*/
char G_PhysicsObject_GetAABB(Physics_WorldId worldId, const gentity_s *ent, vec3_t *aabbMin, vec3_t *aabbMax, bool worldSpace)
{
  __int64 v5; 
  unsigned int v9; 
  G_PhysicsObject *v10; 
  unsigned int v11; 
  unsigned int NumRigidBodys; 
  unsigned int RigidBodyID; 
  float v14; 
  float v15; 
  float v16; 
  vec3_t aabbMina; 
  vec3_t aabbMaxa; 

  v5 = worldId;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2568, ASSERT_TYPE_ASSERT, "(ent != 0)", (const char *)&queryFormat, "ent != NULL") )
    __debugbreak();
  v9 = 0;
  *(_QWORD *)aabbMin->v = 0i64;
  aabbMin->v[2] = 0.0;
  *(_QWORD *)aabbMax->v = 0i64;
  aabbMax->v[2] = 0.0;
  v10 = G_PhysicsObject_Get(ent);
  if ( !v10 )
    return 0;
  v11 = v10->physicsInstances[v5];
  if ( v11 == -1 )
    return 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, v11);
  if ( !NumRigidBodys )
    return 0;
  do
  {
    RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v5, v11, v9);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2598, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    aabbMina.v[0] = 0.0;
    aabbMina.v[1] = 0.0;
    aabbMina.v[2] = 0.0;
    aabbMaxa.v[0] = 0.0;
    aabbMaxa.v[1] = 0.0;
    aabbMaxa.v[2] = 0.0;
    Physics_GetRigidBodyAABB((Physics_WorldId)v5, RigidBodyID, &aabbMina, &aabbMaxa, worldSpace);
    if ( v9 )
    {
      _XMM0 = LODWORD(aabbMin->v[0]);
      __asm { vminss  xmm1, xmm0, dword ptr [rsp+0B8h+aabbMin] }
      _XMM2 = LODWORD(aabbMin->v[1]);
      __asm { vminss  xmm0, xmm2, dword ptr [rsp+0B8h+aabbMin+4] }
      aabbMin->v[0] = *(float *)&_XMM1;
      _XMM1 = LODWORD(aabbMin->v[2]);
      __asm { vminss  xmm2, xmm1, dword ptr [rsp+0B8h+aabbMin+8] }
      aabbMin->v[1] = *(float *)&_XMM0;
      aabbMin->v[2] = *(float *)&_XMM2;
      _XMM0 = LODWORD(aabbMax->v[0]);
      __asm { vmaxss  xmm1, xmm0, dword ptr [rsp+0B8h+aabbMax] }
      _XMM2 = LODWORD(aabbMax->v[1]);
      __asm { vmaxss  xmm0, xmm2, dword ptr [rsp+0B8h+aabbMax+4] }
      aabbMax->v[0] = *(float *)&_XMM1;
      _XMM1 = LODWORD(aabbMaxa.v[2]);
      __asm { vmaxss  xmm2, xmm1, dword ptr [rsi+8] }
      aabbMax->v[2] = *(float *)&_XMM2;
    }
    else
    {
      v14 = aabbMina.v[1];
      aabbMin->v[0] = aabbMina.v[0];
      v15 = aabbMina.v[2];
      aabbMin->v[1] = v14;
      v16 = aabbMaxa.v[0];
      aabbMin->v[2] = v15;
      *(float *)&_XMM0 = aabbMaxa.v[1];
      aabbMax->v[0] = v16;
      aabbMax->v[2] = aabbMaxa.v[2];
    }
    ++v9;
    aabbMax->v[1] = *(float *)&_XMM0;
  }
  while ( v9 < NumRigidBodys );
  return 1;
}

/*
==============
G_PhysicsObject_GetBase
==============
*/
G_PhysicsObject *G_PhysicsObject_GetBase(int entNum, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v4; 
  int v5; 

  v2 = entNum;
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 394, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( !s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 395, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs )", (const char *)&queryFormat, "s_gentityPhyObjs") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x800 )
  {
    v5 = 2048;
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 396, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( s_physicsObject_NumGEntityPhysObjs )", "entNum doesn't index s_physicsObject_NumGEntityPhysObjs\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return &s_gentityPhyObjs[v2];
}

/*
==============
G_PhysicsObject_GetInstance
==============
*/
__int64 G_PhysicsObject_GetInstance(Physics_WorldId worldId, int entNum)
{
  __int64 v2; 
  G_PhysicsObject *v3; 

  v2 = worldId;
  v3 = G_PhysicsObject_Get(entNum);
  if ( v3 )
    return v3->physicsInstances[v2];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 414, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return *(unsigned int *)(4 * v2 + 4);
}

/*
==============
G_PhysicsObject_GetInstance
==============
*/
__int64 G_PhysicsObject_GetInstance(Physics_WorldId worldId, const gentity_s *ent)
{
  __int64 v2; 
  G_PhysicsObject *v3; 

  v2 = worldId;
  v3 = G_PhysicsObject_Get(ent);
  if ( v3 )
    return v3->physicsInstances[v2];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 406, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return *(unsigned int *)(4 * v2 + 4);
}

/*
==============
G_PhysicsObject_GetTransforms
==============
*/
void G_PhysicsObject_GetTransforms(const bitarray<2048> *inputArray, vec3_t *entityOrigin, vec4_t *entityQuat)
{
  vec4_t *v4; 
  vec3_t *v5; 
  bool v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 
  int v10; 
  gentity_s *v11; 
  vec4_t *v12; 
  vec3_t *v13; 
  gentity_s *v14; 
  int number; 
  gclient_s *client; 
  int numViewLinkedEnts; 
  unsigned __int8 v18; 
  __int64 v19; 
  __int64 v20; 
  const playerState_s *p_ps; 
  int WorldTagMatrix; 
  scr_string_t v23; 
  GHandler *Handler; 
  __int64 v25; 
  __int64 v26; 
  bool v27; 
  vec3_t outAngles; 
  tmat43_t<vec3_t> outTagMat; 
  WorldUpReferenceFrame v32; 

  v4 = entityQuat;
  v5 = entityOrigin;
  v6 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END);
  v7 = inputArray->array[0];
  v27 = v6;
  LODWORD(v8) = 0;
  while ( v7 )
  {
LABEL_8:
    v9 = __lzcnt(v7);
    v10 = v9 + 32 * v8;
    if ( v9 >= 0x20 )
    {
      LODWORD(v26) = 32;
      LODWORD(v25) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( (v7 & (0x80000000 >> v9)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v7 &= ~(0x80000000 >> v9);
    v11 = &g_entities[v10];
    if ( ((v11->r.modelType - 1) & 0xFD) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1367, ASSERT_TYPE_ASSERT, "(gEntity->r.modelType != MODELTYPE_TRIGGER_CYLINDER && gEntity->r.modelType != MODELTYPE_TRIGGER_DISK)", (const char *)&queryFormat, "gEntity->r.modelType != MODELTYPE_TRIGGER_CYLINDER && gEntity->r.modelType != MODELTYPE_TRIGGER_DISK") )
      __debugbreak();
    v12 = &v4[v10];
    AnglesToQuat(&v11->r.currentAngles, v12);
    v13 = &v5[v10];
    v13->v[0] = v11->r.currentOrigin.v[0];
    v13->v[1] = v11->r.currentOrigin.v[1];
    v13->v[2] = v11->r.currentOrigin.v[2];
    if ( v27 )
    {
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1377, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tView Linked Entities assumed to be SP only", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
        __debugbreak();
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tThis is intended to replace a singleplayer-only feature", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
        __debugbreak();
      if ( (int)SvClient::ms_clientCount > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 91, ASSERT_TYPE_ASSERT, "(SvClient::GetClientCount() <= 1)", "%s\n\tShould not use this function when more than one client is possible.", "SvClient::GetClientCount() <= 1") )
        __debugbreak();
      v14 = g_entities;
      number = v11->s.number;
      client = g_entities->client;
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1701, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
        __debugbreak();
      numViewLinkedEnts = client->ps.numViewLinkedEnts;
      v18 = 0;
      if ( numViewLinkedEnts <= 0 )
      {
LABEL_4:
        v4 = entityQuat;
        v5 = entityOrigin;
      }
      else
      {
        while ( 1 )
        {
          v19 = v18;
          if ( client->ps.viewLinkedEntityData[v19].linkedEnt == number )
            break;
          if ( ++v18 >= numViewLinkedEnts )
            goto LABEL_4;
        }
        v20 = (__int64)&client->ps.viewLinkedEntityData[v19];
        if ( v20 && (*(_BYTE *)(v20 + 30) & 1) != 0 )
        {
          Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectViewLinked");
          p_ps = &v14->client->ps;
          WorldTagMatrix = 0;
          if ( v14->model )
          {
            v23 = *(_DWORD *)(v20 + 24);
            if ( v23 != scr_const.tag_origin )
              WorldTagMatrix = G_Utils_DObjGetWorldTagMatrix(v14, v23, &outTagMat);
          }
          if ( !WorldTagMatrix )
          {
            AnglesAndOriginToMatrix43(&p_ps->viewangles, &p_ps->origin, &outTagMat);
            Handler = GHandler::getHandler();
            WorldUpReferenceFrame::WorldUpReferenceFrame(&v32, p_ps, Handler);
            WorldUpReferenceFrame::AddUpContribution(&v32, p_ps->viewHeightCurrent, &outTagMat.m[3]);
          }
          BG_UpdateViewLinkedModelTransform((const ViewLinkedData *)v20, &outTagMat, v13, &outAngles);
          AnglesToQuat(&outAngles, v12);
          Sys_ProfEndNamedEvent();
          goto LABEL_4;
        }
        v5 = entityOrigin;
        v4 = entityQuat;
      }
    }
    else
    {
      v5 = entityOrigin;
      v4 = entityQuat;
    }
  }
  while ( 1 )
  {
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= 0x40 )
      break;
    v7 = inputArray->array[v8];
    if ( v7 )
      goto LABEL_8;
  }
}

/*
==============
G_PhysicsObject_IdentifyRigidBodyType
==============
*/
void G_PhysicsObject_IdentifyRigidBodyType(int entNum)
{
  unsigned int v2; 
  bool IsRigidBodyKeyframed; 

  v2 = s_gentityPhyObjs[entNum].primaryBodies[0];
  if ( (v2 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 988, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  IsRigidBodyKeyframed = Physics_IsRigidBodyKeyframed(PHYSICS_WORLD_ID_FIRST, v2);
  bitarray_base<bitarray<2048>>::setBitTo(&s_gentityPhyObjKeyframed, entNum, IsRigidBodyKeyframed);
}

/*
==============
G_PhysicsObject_Init
==============
*/
void G_PhysicsObject_Init(void)
{
  G_PhysicsObject *v0; 
  __int64 v1; 
  bitarray<2048> *v2; 
  __int64 v3; 
  bitarray<2048> *v4; 
  __int64 v5; 
  bitarray<2048> *v6; 
  unsigned int *v7; 
  __int64 v8; 

  if ( s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 97, ASSERT_TYPE_ASSERT, "( !s_physicsObject_GInitialized )", (const char *)&queryFormat, "!s_physicsObject_GInitialized") )
    __debugbreak();
  s_physicsObject_GInitialized = 1;
  if ( s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 100, ASSERT_TYPE_ASSERT, "(!s_gentityPhyObjs)", (const char *)&queryFormat, "!s_gentityPhyObjs") )
    __debugbreak();
  s_gentityPhyObjs = (G_PhysicsObject *)Physics_AllocateMemoryBuffer(0x68000ui64, "s_gentityPhyObjs");
  v0 = s_gentityPhyObjs;
  memset_0(s_gentityPhyObjs, 0, 0x68000ui64);
  v1 = 4i64;
  v2 = &s_gentityPhyObjUsed;
  v3 = 4i64;
  do
  {
    *(_QWORD *)v2->array = 0i64;
    *(_QWORD *)&v2->array[2] = 0i64;
    *(_QWORD *)&v2->array[4] = 0i64;
    v2 = (bitarray<2048> *)((char *)v2 + 64);
    *(_QWORD *)&v2[-1].array[54] = 0i64;
    *(_QWORD *)&v2[-1].array[56] = 0i64;
    *(_QWORD *)&v2[-1].array[58] = 0i64;
    *(_QWORD *)&v2[-1].array[60] = 0i64;
    *(_QWORD *)&v2[-1].array[62] = 0i64;
    --v3;
  }
  while ( v3 );
  v4 = &s_gentityPhyObjShown;
  v5 = 4i64;
  do
  {
    *(_QWORD *)v4->array = 0i64;
    *(_QWORD *)&v4->array[2] = 0i64;
    *(_QWORD *)&v4->array[4] = 0i64;
    v4 = (bitarray<2048> *)((char *)v4 + 64);
    *(_QWORD *)&v4[-1].array[54] = 0i64;
    *(_QWORD *)&v4[-1].array[56] = 0i64;
    *(_QWORD *)&v4[-1].array[58] = 0i64;
    *(_QWORD *)&v4[-1].array[60] = 0i64;
    *(_QWORD *)&v4[-1].array[62] = 0i64;
    --v5;
  }
  while ( v5 );
  v6 = &s_gentityPhyObjDetailShown;
  do
  {
    *(_QWORD *)v6->array = 0i64;
    *(_QWORD *)&v6->array[2] = 0i64;
    *(_QWORD *)&v6->array[4] = 0i64;
    v6 = (bitarray<2048> *)((char *)v6 + 64);
    *(_QWORD *)&v6[-1].array[54] = 0i64;
    *(_QWORD *)&v6[-1].array[56] = 0i64;
    *(_QWORD *)&v6[-1].array[58] = 0i64;
    *(_QWORD *)&v6[-1].array[60] = 0i64;
    *(_QWORD *)&v6[-1].array[62] = 0i64;
    --v1;
  }
  while ( v1 );
  v7 = &v0->physicsInstances[2];
  v8 = 2048i64;
  do
  {
    *((_QWORD *)v7 - 1) = -1i64;
    *(_QWORD *)v7 = -1i64;
    *((_QWORD *)v7 + 1) = -1i64;
    *((_QWORD *)v7 + 2) = -1i64;
    v7 += 52;
    --v8;
  }
  while ( v8 );
  ntl::static_shared_allocator<G_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator = &s_g_PhysicsObject_BoneMappingAllocator;
  ntl::static_shared_allocator<G_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator = &s_g_PhysicsObject_OffsetMappingAllocator;
  ntl::static_shared_allocator<G_PhysicsObject_ChildEntityAllocator,ntl::fixed_heap_allocator<32768,0>>::mp_allocator = &s_g_PhysicsObject_ChildEntityAllocator;
}

/*
==============
G_PhysicsObject_IsPhysicsObjectDetailShown
==============
*/
bool G_PhysicsObject_IsPhysicsObjectDetailShown(int entNum)
{
  unsigned __int64 v1; 
  int v4; 

  v1 = (unsigned int)entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v4 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", entNum, v4) )
      __debugbreak();
  }
  return ((0x80000000 >> (v1 & 0x1F)) & s_gentityPhyObjDetailShown.array[v1 >> 5]) != 0;
}

/*
==============
G_PhysicsObject_IsPhysicsObjectShown
==============
*/
bool G_PhysicsObject_IsPhysicsObjectShown(int entNum)
{
  unsigned __int64 v1; 
  int v4; 

  v1 = (unsigned int)entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v4 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", entNum, v4) )
      __debugbreak();
  }
  return ((0x80000000 >> (v1 & 0x1F)) & s_gentityPhyObjShown.array[v1 >> 5]) != 0;
}

/*
==============
G_PhysicsObject_IsPhysicsObjectUsed
==============
*/
bool G_PhysicsObject_IsPhysicsObjectUsed(int entNum)
{
  unsigned __int64 v1; 
  int v4; 

  v1 = (unsigned int)entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v4 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", entNum, v4) )
      __debugbreak();
  }
  return ((0x80000000 >> (v1 & 0x1F)) & s_gentityPhyObjUsed.array[v1 >> 5]) != 0;
}

/*
==============
G_PhysicsObject_Load
==============
*/
void G_PhysicsObject_Load(SaveGame *save)
{
  hkMonitorStream *Value; 
  __int64 v3; 
  MemoryFile *p_memFile; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  G_PhysicsObject *v8; 
  __int64 v9; 
  int v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *p_dynamicBoneMapping; 
  ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *v14; 
  unsigned __int64 i; 
  PhysicsObjectBoneMapping *m_buffer; 
  int v17; 
  unsigned __int64 v18; 
  __int64 v19; 
  ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *p_keyframedBoneMapping; 
  ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *v21; 
  unsigned __int64 j; 
  PhysicsObjectBoneMapping *v23; 
  int v24; 
  unsigned __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  ntl::array<PhysicsObjectOffsetMapping,G_PhysicsObject_OffsetMappingAllocator> *p_keyframedOffsetMapping; 
  ntl::array<PhysicsObjectOffsetMapping,G_PhysicsObject_OffsetMappingAllocator> *v29; 
  unsigned __int64 v30; 
  PhysicsObjectOffsetMapping *v31; 
  signed __int64 v32; 
  unsigned __int64 v33; 
  signed __int64 v34; 
  __int16 v35; 
  ntl::array<short,G_PhysicsObject_ChildEntityAllocator> *p_childEntities; 
  ntl::array<short,G_PhysicsObject_ChildEntityAllocator> *v37; 
  unsigned __int64 v38; 
  __int16 *v39; 
  int v40; 
  __int64 v41; 
  unsigned __int64 v42; 
  __int64 v43; 
  ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *p_detailBoneMapping; 
  ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *v45; 
  unsigned __int64 v46; 
  PhysicsObjectBoneMapping *v47; 
  unsigned int v48; 
  const PhysicsAsset *InstanceAsset; 
  unsigned int v50; 
  const XModel *InstanceDetailModel; 
  int v52; 
  __int64 v53; 
  PhysicsObject_Mapping p; 
  unsigned int v55; 
  unsigned int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  __int64 v62; 
  MemoryFile *v63; 
  hkMonitorStream *v64; 
  __int64 v65; 
  __int64 v66; 
  bool v67; 
  char v68; 
  char v69; 
  __int16 v70; 

  v65 = -2i64;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = (__int64)Value;
  v64 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_Load");
  v66 = v3;
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 244, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( !s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 245, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs )", (const char *)&queryFormat, "s_gentityPhyObjs") )
    __debugbreak();
  p_memFile = &save->memFile;
  v63 = &save->memFile;
  MemFile_ReadData(&save->memFile, 0x100ui64, &s_gentityPhyObjUsed);
  MemFile_ReadData(&save->memFile, 0x100ui64, &s_gentityPhyObjShown);
  MemFile_ReadData(&save->memFile, 0x100ui64, &s_gentityPhyObjDetailShown);
  MemFile_ReadData(&save->memFile, 0x100ui64, &s_gentityPhyObjKeyframed);
  v5 = 0;
  v52 = 0;
  v6 = 0i64;
  v62 = 0i64;
  do
  {
    MemFile_ReadData(p_memFile, 4ui64, &p);
    v7 = v6;
    s_gentityPhyObjs[v6].mapping = p;
    MemFile_ReadData(p_memFile, 4ui64, &v55);
    s_gentityPhyObjs[v7].physicsInstances[0] = v55;
    MemFile_ReadData(p_memFile, 4ui64, &v56);
    v8 = s_gentityPhyObjs;
    s_gentityPhyObjs[v7].physicsInstances[1] = v56;
    v9 = 208i64 * v5;
    v53 = v9;
    MemFile_ReadData(p_memFile, 8ui64, (char *)v8->primaryBodies + v9);
    MemFile_ReadData(p_memFile, 8ui64, (char *)s_gentityPhyObjs->numBodies + v9);
    MemFile_ReadData(p_memFile, 4ui64, &v57);
    v10 = v57;
    if ( v57 )
    {
      ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::resize((ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *)((char *)&s_gentityPhyObjs->dynamicBoneMapping + v9), v57);
      if ( v10 <= 0 )
        goto LABEL_29;
      v11 = 0i64;
      v12 = (unsigned int)v10;
      do
      {
        p_dynamicBoneMapping = &s_gentityPhyObjs[v7].dynamicBoneMapping;
        if ( v11 >= s_gentityPhyObjs[v7].dynamicBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v11 >= p_dynamicBoneMapping->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        MemFile_ReadData(p_memFile, 8ui64, &p_dynamicBoneMapping->m_data.m_buffer[v11++]);
        --v12;
      }
      while ( v12 );
      v5 = v52;
    }
    else
    {
      v14 = &s_gentityPhyObjs[v7].dynamicBoneMapping;
      for ( i = 0i64; i < s_gentityPhyObjs[v7].dynamicBoneMapping.m_data.m_size; ++i )
        ;
      m_buffer = v14->m_data.m_buffer;
      if ( v14->m_data.m_buffer )
      {
        if ( !ntl::static_shared_allocator<G_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        ntl::nxheap::free(&ntl::static_shared_allocator<G_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator->m_heap, m_buffer);
        v14->m_data.m_buffer = NULL;
        v14->m_data.m_size = 0i64;
      }
    }
    v9 = v53;
LABEL_29:
    MemFile_ReadData(p_memFile, 4ui64, &v58);
    v17 = v58;
    if ( v58 )
    {
      ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::resize((ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *)((char *)&s_gentityPhyObjs->keyframedBoneMapping + v9), v58);
      if ( v17 <= 0 )
        goto LABEL_48;
      v18 = 0i64;
      v19 = (unsigned int)v17;
      do
      {
        p_keyframedBoneMapping = &s_gentityPhyObjs[v7].keyframedBoneMapping;
        if ( v18 >= s_gentityPhyObjs[v7].keyframedBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v18 >= p_keyframedBoneMapping->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        MemFile_ReadData(p_memFile, 8ui64, &p_keyframedBoneMapping->m_data.m_buffer[v18++]);
        --v19;
      }
      while ( v19 );
      v5 = v52;
    }
    else
    {
      v21 = &s_gentityPhyObjs[v7].keyframedBoneMapping;
      for ( j = 0i64; j < s_gentityPhyObjs[v7].keyframedBoneMapping.m_data.m_size; ++j )
        ;
      v23 = v21->m_data.m_buffer;
      if ( v21->m_data.m_buffer )
      {
        if ( !ntl::static_shared_allocator<G_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        ntl::nxheap::free(&ntl::static_shared_allocator<G_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator->m_heap, v23);
        v21->m_data.m_buffer = NULL;
        v21->m_data.m_size = 0i64;
      }
    }
    v9 = v53;
LABEL_48:
    MemFile_ReadData(p_memFile, 4ui64, &v59);
    v24 = v59;
    if ( v59 )
    {
      ntl::array<PhysicsObjectOffsetMapping,G_PhysicsObject_OffsetMappingAllocator>::resize((ntl::array<PhysicsObjectOffsetMapping,G_PhysicsObject_OffsetMappingAllocator> *)((char *)&s_gentityPhyObjs->keyframedOffsetMapping + v9), v59);
      if ( v24 <= 0 )
        goto LABEL_68;
      v25 = 0i64;
      v26 = 0i64;
      v27 = (unsigned int)v24;
      do
      {
        p_keyframedOffsetMapping = &s_gentityPhyObjs[v7].keyframedOffsetMapping;
        if ( v25 >= s_gentityPhyObjs[v7].keyframedOffsetMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v25 >= p_keyframedOffsetMapping->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        MemFile_ReadData(p_memFile, 0x34ui64, &p_keyframedOffsetMapping->m_data.m_buffer[v26]);
        ++v25;
        ++v26;
        --v27;
      }
      while ( v27 );
      v5 = v52;
    }
    else
    {
      v29 = &s_gentityPhyObjs[v7].keyframedOffsetMapping;
      v30 = 0i64;
      if ( s_gentityPhyObjs[v7].keyframedOffsetMapping.m_data.m_size )
      {
        do
          ++v30;
        while ( v30 < s_gentityPhyObjs[v7].keyframedOffsetMapping.m_data.m_size );
        v5 = v52;
      }
      v31 = v29->m_data.m_buffer;
      if ( v29->m_data.m_buffer )
      {
        if ( !ntl::static_shared_allocator<G_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        ntl::nxheap::free(&ntl::static_shared_allocator<G_PhysicsObject_OffsetMappingAllocator,ntl::fixed_heap_allocator<851968,0>>::mp_allocator->m_heap, v31);
        v29->m_data.m_buffer = NULL;
        v29->m_data.m_size = 0i64;
      }
    }
    v9 = v53;
LABEL_68:
    MemFile_ReadData(p_memFile, 4ui64, &v60);
    v32 = v60;
    if ( v60 )
    {
      ntl::array<short,G_PhysicsObject_ChildEntityAllocator>::resize((ntl::array<short,G_PhysicsObject_ChildEntityAllocator> *)((char *)&s_gentityPhyObjs->childEntities + v9), v60);
      v33 = 0i64;
      v34 = v32;
      if ( (int)v32 > 0 )
      {
        do
        {
          MemFile_ReadData(p_memFile, 2ui64, &v70);
          v35 = v70;
          p_childEntities = &s_gentityPhyObjs[v7].childEntities;
          if ( v33 >= s_gentityPhyObjs[v7].childEntities.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( v33 >= p_childEntities->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          p_childEntities->m_data.m_buffer[v33++] = v35;
        }
        while ( (__int64)v33 < v34 );
        v5 = v52;
      }
    }
    else
    {
      v37 = &s_gentityPhyObjs[v7].childEntities;
      v38 = 0i64;
      if ( s_gentityPhyObjs[v7].childEntities.m_data.m_size )
      {
        do
          ++v38;
        while ( v38 < s_gentityPhyObjs[v7].childEntities.m_data.m_size );
        v5 = v52;
      }
      v39 = v37->m_data.m_buffer;
      if ( v37->m_data.m_buffer )
      {
        if ( !ntl::static_shared_allocator<G_PhysicsObject_ChildEntityAllocator,ntl::fixed_heap_allocator<32768,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        ntl::nxheap::free(&ntl::static_shared_allocator<G_PhysicsObject_ChildEntityAllocator,ntl::fixed_heap_allocator<32768,0>>::mp_allocator->m_heap, v39);
        v37->m_data.m_buffer = NULL;
        v37->m_data.m_size = 0i64;
      }
    }
    MemFile_ReadData(p_memFile, 4ui64, &v61);
    v40 = v61;
    if ( v61 )
    {
      v41 = v53;
      ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::resize((ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *)((char *)&s_gentityPhyObjs->detailBoneMapping + v53), v61);
      if ( v40 <= 0 )
        goto LABEL_106;
      v42 = 0i64;
      v43 = (unsigned int)v40;
      do
      {
        p_detailBoneMapping = &s_gentityPhyObjs[v7].detailBoneMapping;
        if ( v42 >= s_gentityPhyObjs[v7].detailBoneMapping.m_data.m_size )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v42 >= p_detailBoneMapping->m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
            __debugbreak();
        }
        MemFile_ReadData(p_memFile, 8ui64, &p_detailBoneMapping->m_data.m_buffer[v42++]);
        --v43;
      }
      while ( v43 );
      v5 = v52;
    }
    else
    {
      v45 = &s_gentityPhyObjs[v7].detailBoneMapping;
      v46 = 0i64;
      if ( s_gentityPhyObjs[v7].detailBoneMapping.m_data.m_size )
      {
        do
          ++v46;
        while ( v46 < s_gentityPhyObjs[v7].detailBoneMapping.m_data.m_size );
        p_memFile = v63;
        v5 = v52;
      }
      v47 = v45->m_data.m_buffer;
      if ( v45->m_data.m_buffer )
      {
        if ( !ntl::static_shared_allocator<G_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\shared_allocator.h", 144, ASSERT_TYPE_ASSERT, "( mp_allocator )", "Shared allocator is not set") )
          __debugbreak();
        ntl::nxheap::free(&ntl::static_shared_allocator<G_PhysicsObject_BoneMappingAllocator,ntl::fixed_heap_allocator<131072,0>>::mp_allocator->m_heap, v47);
        v45->m_data.m_buffer = NULL;
        v45->m_data.m_size = 0i64;
      }
    }
    v41 = v53;
LABEL_106:
    MemFile_ReadData(p_memFile, 0x40ui64, (char *)&s_gentityPhyObjs->detailCache + v41);
    MemFile_ReadData(p_memFile, 1ui64, &v67);
    s_gentityPhyObjs[v7].registeredForCollisionCallback = v67;
    if ( v67 )
      G_PhysicsObject_RegisterForCollisionCallback(&g_entities[v5]);
    v48 = s_gentityPhyObjs[v7].physicsInstances[0];
    if ( v48 != -1 )
    {
      InstanceAsset = Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v48);
      MemFile_ReadData(p_memFile, 1ui64, &v68);
      if ( (InstanceAsset != NULL) != v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 345, ASSERT_TYPE_ASSERT, "((physicsAsset != 0) == MemFile_ReadBool( &save->memFile ))", (const char *)&queryFormat, "(physicsAsset != 0) == MemFile_ReadBool( &save->memFile )") )
        __debugbreak();
      if ( InstanceAsset )
        ++InstanceAsset->usageCounter.serverEnt;
    }
    v50 = s_gentityPhyObjs[v7].physicsInstances[1];
    if ( v50 != -1 )
    {
      InstanceDetailModel = Physics_GetInstanceDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v50);
      MemFile_ReadData(p_memFile, 1ui64, &v69);
      if ( (InstanceDetailModel != NULL) != v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 355, ASSERT_TYPE_ASSERT, "((detailModel != 0) == MemFile_ReadBool( &save->memFile ))", (const char *)&queryFormat, "(detailModel != 0) == MemFile_ReadBool( &save->memFile )") )
        __debugbreak();
      if ( InstanceDetailModel )
        ++InstanceDetailModel->physicsUsageCounter.serverEnt;
    }
    v52 = ++v5;
    v6 = ++v62;
  }
  while ( v5 < 2048 );
  if ( v64 )
    hkMonitorStream::timerEnd(v64, "Et");
}

/*
==============
G_PhysicsObject_MapPose
==============
*/
void G_PhysicsObject_MapPose(gentity_s *ent, DObjPartBits *partBits, DObj *obj)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  G_PhysicsObject *v8; 
  DObjAnimMat *RotTransArray; 
  PhysicsObjectBoneMapping *m_buffer; 
  unsigned __int8 boneIndex; 
  unsigned __int8 numBones; 
  DObjAnimMat *v13; 
  __int64 v19; 
  __int64 v20; 
  hkMonitorStream *v21; 
  vec3_t position; 
  vec4_t orientation; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  v21 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_MapPose");
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1953, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1954, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  v8 = G_PhysicsObject_Get(ent);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1958, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( v8->dynamicBoneMapping.m_data.m_size )
  {
    if ( obj->numBones )
    {
      RotTransArray = DObjGetRotTransArray(obj);
      if ( RotTransArray )
      {
        m_buffer = v8->dynamicBoneMapping.m_data.m_buffer;
        if ( m_buffer != &m_buffer[v8->dynamicBoneMapping.m_data.m_size] )
        {
          do
          {
            if ( (m_buffer->bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1981, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( mapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( mapping->bodyId )") )
              __debugbreak();
            boneIndex = m_buffer->boneIndex;
            numBones = obj->numBones;
            if ( boneIndex >= numBones )
            {
              LODWORD(v20) = numBones;
              LODWORD(v19) = boneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1982, ASSERT_TYPE_ASSERT, "(unsigned)( mapping->boneIndex ) < (unsigned)( obj->numBones )", "mapping->boneIndex doesn't index obj->numBones\n\t%i not in [0, %i)", v19, v20) )
                __debugbreak();
            }
            if ( DObjSetSkelRotTransIndex(obj, partBits, m_buffer->boneIndex) )
            {
              v13 = &RotTransArray[m_buffer->boneIndex];
              Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, m_buffer->bodyId, &position, &orientation);
              v13->trans = position;
              v13->quat.v[0] = orientation.v[0];
              v13->quat.v[1] = orientation.v[1];
              v13->quat.v[2] = orientation.v[2];
              _XMM3 = v13->quat;
              __asm { vinsertps xmm3, xmm3, dword ptr [rsp+0B8h+orientation+0Ch], 30h }
              _XMM0 = _mm128_mul_ps(_XMM3, _XMM3);
              __asm
              {
                vhaddps xmm1, xmm0, xmm0
                vhaddps xmm2, xmm1, xmm1
              }
              v13->quat = (vec4_t)_mm128_div_ps(_XMM3, _mm_sqrt_ps(_XMM2));
              v13->transWeight = 2.0;
            }
            ++m_buffer;
          }
          while ( m_buffer != &v8->dynamicBoneMapping.m_data.m_buffer[v8->dynamicBoneMapping.m_data.m_size] );
          v7 = v21;
        }
      }
    }
  }
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
G_PhysicsObject_MarkPhysicsObjectAsShown
==============
*/
void G_PhysicsObject_MarkPhysicsObjectAsShown(int entNum, bool shown, bool force)
{
  unsigned __int64 v3; 
  const char *v5; 
  __int64 v6; 

  v3 = (unsigned int)entNum;
  if ( !force )
  {
    if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", entNum, 2048) )
      __debugbreak();
    if ( (((0x80000000 >> (v3 & 0x1F)) & s_gentityPhyObjShown.array[v3 >> 5]) != 0) == shown )
    {
      v5 = "Hidden";
      if ( shown )
        v5 = "Shown";
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 475, ASSERT_TYPE_ASSERT, "(force || s_gentityPhyObjShown.testBit( entNum ) != shown)", "%s\n\tG_PhysicsObject_MarkPhysicsObjectAsShown: Ent num %i is %s already", "force || s_gentityPhyObjShown.testBit( entNum ) != shown", v6, v5) )
        __debugbreak();
    }
  }
  bitarray_base<bitarray<2048>>::setBitTo(&s_gentityPhyObjShown, v3, shown);
}

/*
==============
G_PhysicsObject_MarkPhysicsObjectAsUsed
==============
*/
void G_PhysicsObject_MarkPhysicsObjectAsUsed(int entNum, bool used)
{
  unsigned __int64 v2; 
  const char *v4; 
  __int64 v6; 
  int v7; 

  v2 = (unsigned int)entNum;
  if ( (unsigned int)entNum >= 0x800 )
  {
    v7 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", entNum, v7) )
      __debugbreak();
  }
  if ( (((0x80000000 >> (v2 & 0x1F)) & s_gentityPhyObjUsed.array[v2 >> 5]) != 0) == used )
  {
    v4 = "Unused";
    if ( used )
      v4 = "Used";
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 422, ASSERT_TYPE_ASSERT, "(s_gentityPhyObjUsed.testBit( entNum ) != used)", "%s\n\tG_PhysicsObject_MarkPhysicsObjectAsUsed: Ent num %i is %s already", "s_gentityPhyObjUsed.testBit( entNum ) != used", v6, v4) )
      __debugbreak();
  }
  bitarray_base<bitarray<2048>>::setBitTo(&s_gentityPhyObjUsed, v2, used);
}

/*
==============
G_PhysicsObject_MarkPhysicsObjectDetailAsShown
==============
*/
void G_PhysicsObject_MarkPhysicsObjectDetailAsShown(int entNum, bool shown, bool force)
{
  unsigned __int64 v3; 
  const char *v5; 
  __int64 v6; 

  v3 = (unsigned int)entNum;
  if ( !force )
  {
    if ( (unsigned int)entNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", entNum, 2048) )
      __debugbreak();
    if ( (((0x80000000 >> (v3 & 0x1F)) & s_gentityPhyObjDetailShown.array[v3 >> 5]) != 0) == shown )
    {
      v5 = "Hidden";
      if ( shown )
        v5 = "Shown";
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 483, ASSERT_TYPE_ASSERT, "(force || s_gentityPhyObjDetailShown.testBit( entNum ) != shown)", "%s\n\tG_PhysicsObject_MarkPhysicsObjectDetailAsShown: Ent num %i is %s already detail", "force || s_gentityPhyObjDetailShown.testBit( entNum ) != shown", v6, v5) )
        __debugbreak();
    }
  }
  bitarray_base<bitarray<2048>>::setBitTo(&s_gentityPhyObjDetailShown, v3, shown);
}

/*
==============
G_PhysicsObject_PostStepWorld
==============
*/
void G_PhysicsObject_PostStepWorld(Physics_WorldId worldId)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_PostStepWorld");
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "G_PhysicsObject_PostStepWorld");
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1870, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized", -2i64) )
    __debugbreak();
  if ( !s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1871, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs )", (const char *)&queryFormat, "s_gentityPhyObjs") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1872, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectSetEntityTransforms");
  G_PhysicsObject_PostStepWorld_SetEntityTransforms(worldId, &s_gentityInWorldPhysAuthUsed);
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
G_PhysicsObject_PostStepWorld_SetEntityTransforms
==============
*/
void G_PhysicsObject_PostStepWorld_SetEntityTransforms(const Physics_WorldId worldId, const bitarray<2048> *inputArray)
{
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  bool v6; 
  unsigned int v7; 
  int v8; 
  __int64 v9; 
  G_PhysicsObject *v10; 
  gentity_s *v11; 
  __int64 v12; 
  __int64 v13; 
  vec3_t position; 
  vec3_t prevAngles; 
  vec3_t prevOrigin; 
  vec3_t angles; 
  vec4_t orientation; 

  v2 = inputArray->array[0];
  LODWORD(v3) = 0;
  v4 = worldId;
  v6 = Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT);
  while ( v2 )
  {
LABEL_5:
    v7 = __lzcnt(v2);
    v8 = v7 + 32 * v3;
    if ( v7 >= 0x20 )
    {
      LODWORD(v13) = 32;
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v7);
    v9 = v8;
    v10 = &s_gentityPhyObjs[v8];
    if ( v10->mapping != PHYSICSOBJECT_MAPPING_PHYSICS_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1811, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH") )
      __debugbreak();
    v11 = &g_entities[v9];
    Physics_GetRigidBodyTransform((const Physics_WorldId)v4, v10->primaryBodies[v4], &position, &orientation);
    UnitQuatToAngles(&orientation, &angles);
    if ( v6 && v11->s.eType == ET_ITEM )
    {
      position.v[0] = (float)(int)(float)(10.0 * position.v[0]) * 0.1;
      position.v[1] = (float)(int)(float)(10.0 * position.v[1]) * 0.1;
      position.v[2] = (float)(int)(float)(10.0 * position.v[2]) * 0.1;
    }
    prevOrigin = v11->r.currentOrigin;
    prevAngles = v11->r.currentAngles;
    G_SetOriginAndAngle(v11, &position, &angles, 0, 0);
    v11->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
    v11->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
    GMovingPlatforms::UpdateMoverPhysicsVelocity(v11, &prevOrigin, &prevAngles);
  }
  while ( 1 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 0x40 )
      break;
    v2 = inputArray->array[v3];
    if ( v2 )
      goto LABEL_5;
  }
}

/*
==============
G_PhysicsObject_PreStepWorld
==============
*/
void G_PhysicsObject_PreStepWorld(Physics_WorldId worldId, int numSteps)
{
  __int64 v3; 
  hkMonitorStream *Value; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  G_PhysicsObject *v8; 
  unsigned int v9; 
  bool v10; 
  bool v11; 
  bool v12; 
  bitarray<2048> *outputinWorldEntAuthKeyOffPhysObjs; 
  bitarray<2048> *outputNeedsActivatePhysObjs; 
  hkMonitorStream *v16; 
  bitarray<2048> outputToShow; 
  bitarray<2048> outputToHide; 
  bitarray<2048> outputNeedsWarpPhysObjs; 
  bitarray<2048> outputInWorldEntAuthKeyBonePhysObjs; 
  bitarray<2048> inputArray; 
  vec3_t entityOrigin; 
  vec4_t entityQuat; 

  v3 = worldId;
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1655, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( !s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1656, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs )", (const char *)&queryFormat, "s_gentityPhyObjs") )
    __debugbreak();
  if ( (unsigned int)v3 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1657, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  if ( numSteps <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1658, ASSERT_TYPE_ASSERT, "( numSteps > 0 )", (const char *)&queryFormat, "numSteps > 0") )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v16 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_PreStepWorld");
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreCalcVisibility");
  G_PhysicsObject_PreStepWorld_CalcVisibility((const Physics_WorldId)v3, &s_gentityPhyObjUsed, &s_gentityInWorldUsed, &outputToHide, &outputToShow);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreHide");
  G_PhysicsObject_PreStepWorld_Hide((const Physics_WorldId)v3, &outputToHide);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreShow");
  G_PhysicsObject_PreStepWorld_Show((const Physics_WorldId)v3, &outputToShow);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreGenLists");
  G_PhysicsObject_PreStepWorld_GenerateLists((const Physics_WorldId)v3, &s_gentityInWorldUsed, &outputToShow, &s_gentityInWorldPhysAuthUsed, &outputInWorldEntAuthKeyBonePhysObjs, &inputArray);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreGetTrans");
  G_PhysicsObject_GetTransforms(&outputToShow, &entityOrigin, &entityQuat);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreKeyframe");
  G_PhysicsObject_PreStepWorld_Keyframe((const Physics_WorldId)v3, numSteps, &outputToShow, &entityOrigin, &entityQuat, &outputNeedsWarpPhysObjs, &outputToHide);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreActivate");
  LODWORD(v5) = 0;
  v6 = outputToHide.array[0];
  while ( v6 )
  {
LABEL_19:
    v7 = __lzcnt(v6);
    if ( v7 >= 0x20 )
    {
      LODWORD(outputNeedsActivatePhysObjs) = 32;
      LODWORD(outputinWorldEntAuthKeyOffPhysObjs) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", outputinWorldEntAuthKeyOffPhysObjs, outputNeedsActivatePhysObjs) )
        __debugbreak();
    }
    if ( (v6 & (0x80000000 >> v7)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v6 &= ~(0x80000000 >> v7);
    v8 = &s_gentityPhyObjs[(int)(v7 + 32 * v5)];
    if ( v8->mapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1461, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH") )
      __debugbreak();
    v9 = v8->primaryBodies[v3];
    if ( !Physics_IsRigidBodyKeyframed((Physics_WorldId)v3, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1465, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyKeyframed( worldId, bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyKeyframed( worldId, bodyId )") )
      __debugbreak();
    Physics_ActivateBody((Physics_WorldId)v3, v9);
  }
  while ( 1 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= 0x40 )
      break;
    v6 = outputToHide.array[v5];
    if ( v6 )
      goto LABEL_19;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreWarp");
  v10 = G_PhysicsObject_PreStepWorld_Warp((const Physics_WorldId)v3, &outputNeedsWarpPhysObjs, &entityOrigin, &entityQuat);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreKeyframedBones");
  v11 = G_PhysicsObject_PreStepWorld_KeyframeBones((const Physics_WorldId)v3, numSteps, &outputInWorldEntAuthKeyBonePhysObjs, &entityOrigin, &entityQuat);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPreKeyframedOffset");
  v12 = G_PhysicsObject_PreStepWorld_KeyframeOffsets((const Physics_WorldId)v3, numSteps, &inputArray, &entityOrigin, &entityQuat);
  Sys_ProfEndNamedEvent();
  if ( v10 || v11 || v12 )
    Physics_UpdateBroadphase((Physics_WorldId)v3, 1);
  if ( v16 )
    hkMonitorStream::timerEnd(v16, "Et");
}

/*
==============
G_PhysicsObject_PreStepWorld_CalcVisibility
==============
*/
void G_PhysicsObject_PreStepWorld_CalcVisibility(const Physics_WorldId worldId, const bitarray<2048> *inputArray, bitarray<2048> *outputInWorldUsed, bitarray<2048> *outputToHide, bitarray<2048> *outputToShow)
{
  __int64 v5; 
  bitarray<2048> *v6; 
  __int64 v7; 
  const bitarray<2048> *v8; 
  int v9; 
  bitarray<2048> *v10; 
  __int64 v11; 
  bitarray<2048> *v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 
  gentity_s *v17; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  bool v19; 
  unsigned int v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 

  v5 = 4i64;
  v6 = outputInWorldUsed;
  v7 = 4i64;
  v8 = inputArray;
  v9 = 0;
  do
  {
    *(_QWORD *)v6->array = 0i64;
    *(_QWORD *)&v6->array[2] = 0i64;
    *(_QWORD *)&v6->array[4] = 0i64;
    v6 = (bitarray<2048> *)((char *)v6 + 64);
    *(_QWORD *)&v6[-1].array[54] = 0i64;
    *(_QWORD *)&v6[-1].array[56] = 0i64;
    *(_QWORD *)&v6[-1].array[58] = 0i64;
    *(_QWORD *)&v6[-1].array[60] = 0i64;
    *(_QWORD *)&v6[-1].array[62] = 0i64;
    --v7;
  }
  while ( v7 );
  v10 = outputToHide;
  v11 = 4i64;
  do
  {
    *(_QWORD *)v10->array = 0i64;
    *(_QWORD *)&v10->array[2] = 0i64;
    *(_QWORD *)&v10->array[4] = 0i64;
    v10 = (bitarray<2048> *)((char *)v10 + 64);
    *(_QWORD *)&v10[-1].array[54] = 0i64;
    *(_QWORD *)&v10[-1].array[56] = 0i64;
    *(_QWORD *)&v10[-1].array[58] = 0i64;
    *(_QWORD *)&v10[-1].array[60] = 0i64;
    *(_QWORD *)&v10[-1].array[62] = 0i64;
    --v11;
  }
  while ( v11 );
  v12 = outputToShow;
  do
  {
    *(_QWORD *)v12->array = 0i64;
    *(_QWORD *)&v12->array[2] = 0i64;
    *(_QWORD *)&v12->array[4] = 0i64;
    v12 = (bitarray<2048> *)((char *)v12 + 64);
    *(_QWORD *)&v12[-1].array[54] = 0i64;
    *(_QWORD *)&v12[-1].array[56] = 0i64;
    *(_QWORD *)&v12[-1].array[58] = 0i64;
    *(_QWORD *)&v12[-1].array[60] = 0i64;
    *(_QWORD *)&v12[-1].array[62] = 0i64;
    --v5;
  }
  while ( v5 );
  v13 = v8->array[0];
  while ( v13 )
  {
LABEL_11:
    v15 = __lzcnt(v13);
    v16 = v15 + 32 * v9;
    if ( v15 >= 0x20 )
    {
      LODWORD(v25) = 32;
      LODWORD(v24) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    if ( (v13 & (0x80000000 >> v15)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v13 &= ~(0x80000000 >> v15);
    v17 = &g_entities[v16];
    p_eFlags = &v17->s.lerp.eFlags;
    v19 = v17->r.modelType != 4 && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 0xCu) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 0);
    if ( v16 >= 0x800 )
    {
      LODWORD(v25) = 2048;
      LODWORD(v24) = v15 + 32 * v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v24, v25) )
        __debugbreak();
    }
    v20 = 0x80000000 >> (v16 & 0x1F);
    v21 = (unsigned __int64)v16 >> 5;
    v22 = v20 & s_gentityPhyObjShown.array[v21];
    if ( v19 )
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v27) = 2048;
        LODWORD(v26) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
          __debugbreak();
      }
      v23 = ~v20;
      outputInWorldUsed->array[v21] &= ~v20;
    }
    else
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v27) = 2048;
        LODWORD(v26) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
          __debugbreak();
      }
      v23 = ~v20;
      outputInWorldUsed->array[v21] |= v20;
    }
    if ( v22 && v19 )
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v27) = 2048;
        LODWORD(v26) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
          __debugbreak();
      }
      outputToHide->array[v21] |= v20;
    }
    else
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v27) = 2048;
        LODWORD(v26) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
          __debugbreak();
      }
      outputToHide->array[v21] &= ~v20;
    }
    if ( v22 || v19 )
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v27) = 2048;
        LODWORD(v26) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
          __debugbreak();
      }
      v8 = inputArray;
      outputToShow->array[v21] &= v23;
    }
    else
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v27) = 2048;
        LODWORD(v26) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v26, v27) )
          __debugbreak();
      }
      v8 = inputArray;
      outputToShow->array[v21] |= v20;
    }
  }
  while ( 1 )
  {
    v14 = (unsigned int)(v9 + 1);
    v9 = v14;
    if ( (unsigned int)v14 >= 0x40 )
      break;
    v13 = v8->array[v14];
    if ( v13 )
      goto LABEL_11;
  }
}

/*
==============
G_PhysicsObject_PreStepWorld_GenerateLists
==============
*/
void G_PhysicsObject_PreStepWorld_GenerateLists(const Physics_WorldId worldId, const bitarray<2048> *inputArray, bitarray<2048> *outputInWorldEntAuthKeyframedUsed, bitarray<2048> *outputInWorldPhysAuthUsed, bitarray<2048> *outputInWorldEntAuthKeyBonePhysObjs, bitarray<2048> *outputinWorldEntAuthKeyOffPhysObjs)
{
  __int64 v6; 
  Physics_WorldId v7; 
  __int64 v8; 
  int v9; 
  bitarray<2048> *v10; 
  bitarray<2048> *v11; 
  __int64 v12; 
  bitarray<2048> *v13; 
  __int64 v14; 
  bitarray<2048> *v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  G_PhysicsObject *v20; 
  char v21; 
  unsigned __int64 v22; 
  unsigned __int64 v23; 
  unsigned int v24; 
  char v25; 
  unsigned __int64 v26; 
  int v27; 
  bool v28; 
  bool v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  PhysicsObject_Mapping mapping; 
  G_PhysicsObject *v35; 
  const bitarray<2048> *v37; 

  v37 = inputArray;
  v6 = 4i64;
  v7 = worldId;
  v8 = 4i64;
  v9 = 0;
  v10 = outputInWorldEntAuthKeyframedUsed;
  do
  {
    *(_QWORD *)v10->array = 0i64;
    *(_QWORD *)&v10->array[2] = 0i64;
    *(_QWORD *)&v10->array[4] = 0i64;
    v10 = (bitarray<2048> *)((char *)v10 + 64);
    *(_QWORD *)&v10[-1].array[54] = 0i64;
    *(_QWORD *)&v10[-1].array[56] = 0i64;
    *(_QWORD *)&v10[-1].array[58] = 0i64;
    *(_QWORD *)&v10[-1].array[60] = 0i64;
    *(_QWORD *)&v10[-1].array[62] = 0i64;
    --v8;
  }
  while ( v8 );
  v11 = outputInWorldPhysAuthUsed;
  v12 = 4i64;
  do
  {
    *(_QWORD *)v11->array = 0i64;
    *(_QWORD *)&v11->array[2] = 0i64;
    *(_QWORD *)&v11->array[4] = 0i64;
    v11 = (bitarray<2048> *)((char *)v11 + 64);
    *(_QWORD *)&v11[-1].array[54] = 0i64;
    *(_QWORD *)&v11[-1].array[56] = 0i64;
    *(_QWORD *)&v11[-1].array[58] = 0i64;
    *(_QWORD *)&v11[-1].array[60] = 0i64;
    *(_QWORD *)&v11[-1].array[62] = 0i64;
    --v12;
  }
  while ( v12 );
  v13 = outputInWorldEntAuthKeyBonePhysObjs;
  v14 = 4i64;
  do
  {
    *(_QWORD *)v13->array = 0i64;
    *(_QWORD *)&v13->array[2] = 0i64;
    *(_QWORD *)&v13->array[4] = 0i64;
    v13 = (bitarray<2048> *)((char *)v13 + 64);
    *(_QWORD *)&v13[-1].array[54] = 0i64;
    *(_QWORD *)&v13[-1].array[56] = 0i64;
    *(_QWORD *)&v13[-1].array[58] = 0i64;
    *(_QWORD *)&v13[-1].array[60] = 0i64;
    *(_QWORD *)&v13[-1].array[62] = 0i64;
    --v14;
  }
  while ( v14 );
  v15 = outputinWorldEntAuthKeyOffPhysObjs;
  do
  {
    *(_QWORD *)v15->array = 0i64;
    *(_QWORD *)&v15->array[2] = 0i64;
    *(_QWORD *)&v15->array[4] = 0i64;
    v15 = (bitarray<2048> *)((char *)v15 + 64);
    *(_QWORD *)&v15[-1].array[54] = 0i64;
    *(_QWORD *)&v15[-1].array[56] = 0i64;
    *(_QWORD *)&v15[-1].array[58] = 0i64;
    *(_QWORD *)&v15[-1].array[60] = 0i64;
    *(_QWORD *)&v15[-1].array[62] = 0i64;
    --v6;
  }
  while ( v6 );
  v16 = inputArray->array[0];
  while ( v16 )
  {
LABEL_13:
    v18 = __lzcnt(v16);
    v19 = v18 + 32 * v9;
    if ( v18 >= 0x20 )
    {
      LODWORD(v31) = 32;
      LODWORD(v30) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    if ( (v16 & (0x80000000 >> v18)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v16 &= ~(0x80000000 >> v18);
    v20 = &s_gentityPhyObjs[v19];
    v35 = v20;
    if ( v20->physicsInstances[v7] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1336, ASSERT_TYPE_ASSERT, "(physicsObject->physicsInstances[worldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObject->physicsInstances[worldId] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    mapping = v20->mapping;
    if ( v20->mapping )
    {
      v23 = v19;
      v21 = v19 & 0x1F;
    }
    else
    {
      if ( v19 >= 0x800 )
      {
        LODWORD(v31) = 2048;
        LODWORD(v30) = v18 + 32 * v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v30, v31) )
          __debugbreak();
      }
      v21 = v19 & 0x1F;
      v22 = (unsigned __int64)v19 >> 5;
      v23 = v19;
      v24 = 0x80000000 >> (v19 & 0x1F);
      if ( (v24 & s_gentityPhyObjKeyframed.array[v22]) != 0 )
      {
        v25 = 1;
        if ( v19 >= 0x800 )
        {
          LODWORD(v33) = 2048;
          LODWORD(v32) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
            __debugbreak();
        }
        v26 = v22;
        outputInWorldEntAuthKeyframedUsed->array[v26] |= v24;
        goto LABEL_36;
      }
    }
    v25 = 0;
    if ( v19 >= 0x800 )
    {
      LODWORD(v33) = 2048;
      LODWORD(v32) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
        __debugbreak();
    }
    v24 = 0x80000000 >> v21;
    v26 = v23 >> 5;
    outputInWorldEntAuthKeyframedUsed->array[v26] &= ~(0x80000000 >> v21);
LABEL_36:
    if ( mapping )
    {
      if ( v19 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
          __debugbreak();
      }
      outputInWorldPhysAuthUsed->array[v26] |= v24;
      v27 = ~v24;
    }
    else
    {
      if ( v19 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
          __debugbreak();
      }
      v27 = ~v24;
      outputInWorldPhysAuthUsed->array[v26] &= ~v24;
    }
    if ( v25 && v35->keyframedBoneMapping.m_data.m_size )
    {
      if ( v19 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
          __debugbreak();
      }
      outputInWorldEntAuthKeyBonePhysObjs->array[v26] |= v24;
    }
    else
    {
      if ( v19 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
          __debugbreak();
      }
      outputInWorldEntAuthKeyBonePhysObjs->array[v26] &= ~v24;
    }
    if ( v25 && v35->keyframedOffsetMapping.m_data.m_size )
    {
      if ( v19 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
          __debugbreak();
      }
      outputinWorldEntAuthKeyOffPhysObjs->array[v26] |= v24;
    }
    else
    {
      if ( v19 >= 0x800 )
      {
        LODWORD(v33) = 2048;
        LODWORD(v32) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
          __debugbreak();
      }
      outputinWorldEntAuthKeyOffPhysObjs->array[v26] &= v27;
    }
    v28 = mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH;
    if ( mapping )
    {
      if ( v35->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1347, ASSERT_TYPE_ASSERT, "(isEntityAuth || physicsObject->keyframedBoneMapping.size() == 0)", (const char *)&queryFormat, "isEntityAuth || physicsObject->keyframedBoneMapping.size() == 0") )
        __debugbreak();
      v28 = mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH;
    }
    inputArray = v37;
    v7 = worldId;
    if ( !v28 && v35->keyframedOffsetMapping.m_data.m_size )
    {
      v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1348, ASSERT_TYPE_ASSERT, "(isEntityAuth || physicsObject->keyframedOffsetMapping.size() == 0)", (const char *)&queryFormat, "isEntityAuth || physicsObject->keyframedOffsetMapping.size() == 0");
      inputArray = v37;
      if ( v29 )
        __debugbreak();
    }
  }
  while ( 1 )
  {
    v17 = (unsigned int)(v9 + 1);
    v9 = v17;
    if ( (unsigned int)v17 >= 0x40 )
      break;
    v16 = inputArray->array[v17];
    if ( v16 )
      goto LABEL_13;
  }
}

/*
==============
G_PhysicsObject_PreStepWorld_Hide
==============
*/
void G_PhysicsObject_PreStepWorld_Hide(const Physics_WorldId worldId, const bitarray<2048> *inputArray)
{
  unsigned int v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = inputArray->array[0];
  LODWORD(v4) = 0;
  v5 = worldId;
  while ( v2 )
  {
LABEL_5:
    v6 = __lzcnt(v2);
    v7 = v6 + 32 * v4;
    if ( v6 >= 0x20 )
    {
      LODWORD(v12) = 32;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v6);
    v8 = s_gentityPhyObjs[v7].physicsInstances[v5];
    if ( v8 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1290, ASSERT_TYPE_ASSERT, "(physicsObject->physicsInstances[worldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObject->physicsInstances[worldId] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    Physics_RemoveInstanceFromWorld((Physics_WorldId)v5, v8, 1);
    if ( v7 >= 0x800 )
    {
      LODWORD(v12) = 2048;
      LODWORD(v11) = v6 + 32 * v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
        __debugbreak();
    }
    v9 = 0x80000000 >> (v7 & 0x1F);
    v10 = &s_gentityPhyObjShown.array[(unsigned __int64)v7 >> 5];
    if ( (v9 & *v10) == 0 )
    {
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 475, ASSERT_TYPE_ASSERT, "(force || s_gentityPhyObjShown.testBit( entNum ) != shown)", "%s\n\tG_PhysicsObject_MarkPhysicsObjectAsShown: Ent num %i is %s already", "force || s_gentityPhyObjShown.testBit( entNum ) != shown", v12, "Hidden") )
        __debugbreak();
    }
    if ( v7 >= 0x800 )
    {
      LODWORD(v14) = 2048;
      LODWORD(v13) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
        __debugbreak();
    }
    *v10 &= ~v9;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x40 )
      break;
    v2 = inputArray->array[v4];
    if ( v2 )
      goto LABEL_5;
  }
}

/*
==============
G_PhysicsObject_PreStepWorld_Keyframe
==============
*/
void G_PhysicsObject_PreStepWorld_Keyframe(const Physics_WorldId worldId, const int numSteps, const bitarray<2048> *inputArray, const vec3_t *const entityOrigin, const vec4_t *const entityQuat, bitarray<2048> *outputNeedsWarpPhysObjs, bitarray<2048> *outputNeedsActivatePhysObjs)
{
  bitarray<2048> *v7; 
  __int64 v8; 
  __int64 v9; 
  int v11; 
  bitarray<2048> *v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 
  G_PhysicsObject *v17; 
  unsigned int v18; 
  Physics_MovementType v19; 
  bool v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  __int64 v25; 
  __int64 v26; 

  v7 = outputNeedsWarpPhysObjs;
  v8 = 4i64;
  v9 = 4i64;
  v11 = 0;
  do
  {
    *(_QWORD *)v7->array = 0i64;
    *(_QWORD *)&v7->array[2] = 0i64;
    *(_QWORD *)&v7->array[4] = 0i64;
    v7 = (bitarray<2048> *)((char *)v7 + 64);
    *(_QWORD *)&v7[-1].array[54] = 0i64;
    *(_QWORD *)&v7[-1].array[56] = 0i64;
    *(_QWORD *)&v7[-1].array[58] = 0i64;
    *(_QWORD *)&v7[-1].array[60] = 0i64;
    *(_QWORD *)&v7[-1].array[62] = 0i64;
    --v9;
  }
  while ( v9 );
  v12 = outputNeedsActivatePhysObjs;
  do
  {
    *(_QWORD *)v12->array = 0i64;
    *(_QWORD *)&v12->array[2] = 0i64;
    *(_QWORD *)&v12->array[4] = 0i64;
    v12 = (bitarray<2048> *)((char *)v12 + 64);
    *(_QWORD *)&v12[-1].array[54] = 0i64;
    *(_QWORD *)&v12[-1].array[56] = 0i64;
    *(_QWORD *)&v12[-1].array[58] = 0i64;
    *(_QWORD *)&v12[-1].array[60] = 0i64;
    *(_QWORD *)&v12[-1].array[62] = 0i64;
    --v8;
  }
  while ( v8 );
  v13 = inputArray->array[0];
  while ( v13 )
  {
LABEL_9:
    v15 = __lzcnt(v13);
    v16 = v15 + 32 * v11;
    if ( v15 >= 0x20 )
    {
      LODWORD(updateBroadphaseIfWarping) = 32;
      LODWORD(canWarp) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
        __debugbreak();
    }
    if ( (v13 & (0x80000000 >> v15)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v13 &= ~(0x80000000 >> v15);
    v17 = &s_gentityPhyObjs[v16];
    if ( v17->mapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1432, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH") )
      __debugbreak();
    v18 = v17->primaryBodies[worldId];
    if ( !Physics_IsRigidBodyKeyframed(worldId, v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1436, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyKeyframed( worldId, bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyKeyframed( worldId, bodyId )") )
      __debugbreak();
    v19 = Physics_KeyframeRigidBodyToFast(worldId, v18, &entityOrigin[v16], &entityQuat[v16], 1.0 / (float)numSteps, 0, 0, 0.0);
    v20 = v19 == Physics_MovementType_Keyframed;
    if ( v19 == Physics_MovementType_WarpRequired )
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v26) = 2048;
        LODWORD(v25) = v15 + 32 * v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
          __debugbreak();
      }
      v21 = (unsigned __int64)v16 >> 5;
      v22 = 0x80000000 >> (v16 & 0x1F);
      outputNeedsWarpPhysObjs->array[v21] |= v22;
    }
    else
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v26) = 2048;
        LODWORD(v25) = v15 + 32 * v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
          __debugbreak();
      }
      v21 = (unsigned __int64)v16 >> 5;
      v22 = 0x80000000 >> (v16 & 0x1F);
      outputNeedsWarpPhysObjs->array[v21] &= ~v22;
    }
    if ( v20 )
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v26) = 2048;
        LODWORD(v25) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
          __debugbreak();
      }
      outputNeedsActivatePhysObjs->array[v21] |= v22;
    }
    else
    {
      if ( v16 >= 0x800 )
      {
        LODWORD(v26) = 2048;
        LODWORD(v25) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v25, v26) )
          __debugbreak();
      }
      outputNeedsActivatePhysObjs->array[v21] &= ~v22;
    }
  }
  while ( 1 )
  {
    v14 = (unsigned int)(v11 + 1);
    v11 = v14;
    if ( (unsigned int)v14 >= 0x40 )
      break;
    v13 = inputArray->array[v14];
    if ( v13 )
      goto LABEL_9;
  }
}

/*
==============
G_PhysicsObject_PreStepWorld_KeyframeBones
==============
*/
__int64 G_PhysicsObject_PreStepWorld_KeyframeBones(const Physics_WorldId worldId, int numSteps, const bitarray<2048> *inputArray, const vec3_t *const entityOrigin, const vec4_t *const entityQuat)
{
  unsigned __int8 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  int v9; 
  char v10; 
  __int64 v11; 
  G_PhysicsObject *v12; 
  const gentity_s *v13; 
  PhysicsObjectBoneMapping *m_buffer; 
  DObjAnimMat *LocalBoneIndexMatrix; 
  DObjAnimMat *v16; 
  float transWeight; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  Physics_MovementType v28; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  unsigned int v32; 
  int v33; 
  int v34; 
  const bitarray<2048> *v37; 
  tmat33_t<vec3_t> in1; 
  vec4_t orientationAsQuat; 
  tmat33_t<vec3_t> out; 
  vec3_t position; 
  tmat43_t<vec3_t> result; 

  v5 = 0;
  v6 = inputArray->array[0];
  LODWORD(v7) = 0;
  v33 = 0;
  v37 = inputArray;
  v32 = inputArray->array[0];
  while ( 1 )
  {
    if ( v6 )
    {
LABEL_5:
      v8 = __lzcnt(v6);
      v9 = v8 + 32 * v7;
      v34 = v9;
      if ( v8 >= 0x20 )
      {
        LODWORD(updateBroadphaseIfWarping) = 32;
        LODWORD(canWarp) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( (v6 & (0x80000000 >> v8)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v6 &= ~(0x80000000 >> v8);
      v10 = 1;
      v32 = v6;
    }
    else
    {
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        v33 = v7;
        if ( (unsigned int)v7 >= 0x40 )
          break;
        v6 = inputArray->array[v7];
        v32 = v6;
        if ( v6 )
          goto LABEL_5;
      }
      v9 = v34;
      v10 = 0;
    }
    if ( !v10 )
      return v5;
    v11 = v9;
    v12 = &s_gentityPhyObjs[v9];
    if ( v12->mapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1518, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH") )
      __debugbreak();
    if ( !v12->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1519, ASSERT_TYPE_ASSERT, "(physicsObject->keyframedBoneMapping.size() > 0)", (const char *)&queryFormat, "physicsObject->keyframedBoneMapping.size() > 0") )
      __debugbreak();
    v13 = &g_entities[v11];
    QuatAndOriginToMatrix43(&entityQuat[v11], &entityOrigin[v11], &result);
    if ( !Com_GetServerDObjForEnt(v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1529, ASSERT_TYPE_ASSERT, "( Com_GetServerDObjForEnt( gEntity ) )", (const char *)&queryFormat, "Com_GetServerDObjForEnt( gEntity )") )
      __debugbreak();
    m_buffer = v12->keyframedBoneMapping.m_data.m_buffer;
    inputArray = v37;
    if ( m_buffer != &m_buffer[v12->keyframedBoneMapping.m_data.m_size] )
    {
      do
      {
        if ( (m_buffer->bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1537, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( boneMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( boneMapping->bodyId )") )
          __debugbreak();
        LocalBoneIndexMatrix = G_Utils_DObjGetLocalBoneIndexMatrix(v13, m_buffer->boneIndex);
        v16 = LocalBoneIndexMatrix;
        if ( ((LODWORD(LocalBoneIndexMatrix->quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalBoneIndexMatrix->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalBoneIndexMatrix->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(LocalBoneIndexMatrix->quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
          __debugbreak();
        if ( (LODWORD(v16->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
          __debugbreak();
        transWeight = v16->transWeight;
        v18 = transWeight * v16->quat.v[0];
        v19 = v16->quat.v[1];
        v20 = v16->quat.v[2];
        v21 = v18 * v16->quat.v[0];
        v22 = v19 * transWeight;
        v23 = v20 * transWeight;
        v24 = v16->quat.v[3];
        v25 = v22 * v19;
        v26 = v22 * v20;
        v27 = v22 * v24;
        in1.m[0].v[1] = (float)(v23 * v24) + (float)(v18 * v19);
        in1.m[1].v[0] = (float)(v18 * v19) - (float)(v23 * v24);
        in1.m[0].v[0] = 1.0 - (float)((float)(v23 * v20) + v25);
        in1.m[0].v[2] = (float)(v18 * v20) - v27;
        in1.m[1].v[1] = 1.0 - (float)((float)(v23 * v20) + v21);
        in1.m[2].v[0] = v27 + (float)(v18 * v20);
        in1.m[1].v[2] = v26 + (float)(v18 * v24);
        in1.m[2].v[2] = 1.0 - (float)(v25 + v21);
        in1.m[2].v[1] = v26 - (float)(v18 * v24);
        MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&result, &out);
        MatrixTransformVector43(&v16->trans, &result, &position);
        AxisToQuat(&out, &orientationAsQuat);
        if ( !Physics_IsRigidBodyKeyframed(worldId, m_buffer->bodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1560, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyKeyframed( worldId, boneMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyKeyframed( worldId, boneMapping->bodyId )") )
          __debugbreak();
        v28 = Physics_KeyframeRigidBodyTo(worldId, m_buffer->bodyId, &position, &orientationAsQuat, 1.0 / (float)numSteps, 1, 0, 0.0);
        ++m_buffer;
        v5 |= v28 == Physics_MovementType_Warped;
      }
      while ( m_buffer != &v12->keyframedBoneMapping.m_data.m_buffer[v12->keyframedBoneMapping.m_data.m_size] );
      LODWORD(v7) = v33;
      v6 = v32;
      inputArray = v37;
    }
  }
}

/*
==============
G_PhysicsObject_PreStepWorld_KeyframeOffsets
==============
*/
__int64 G_PhysicsObject_PreStepWorld_KeyframeOffsets(const Physics_WorldId worldId, int numSteps, const bitarray<2048> *inputArray, const vec3_t *const entityOrigin, const vec4_t *const entityQuat)
{
  unsigned __int8 v5; 
  unsigned int v6; 
  __int64 v7; 
  const bitarray<2048> *v8; 
  int v10; 
  unsigned int v11; 
  char v12; 
  G_PhysicsObject *v13; 
  PhysicsObjectOffsetMapping *m_buffer; 
  Physics_MovementType v15; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  int v19; 
  int v20; 
  vec4_t orientationAsQuat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 

  v5 = 0;
  v6 = inputArray->array[0];
  LODWORD(v7) = 0;
  v19 = 0;
  v8 = inputArray;
LABEL_2:
  v10 = v20;
  while ( 1 )
  {
    if ( v6 )
    {
LABEL_6:
      v11 = __lzcnt(v6);
      v10 = v11 + 32 * v7;
      v20 = v10;
      if ( v11 >= 0x20 )
      {
        LODWORD(updateBroadphaseIfWarping) = 32;
        LODWORD(canWarp) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( (v6 & (0x80000000 >> v11)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v6 &= ~(0x80000000 >> v11);
      v12 = 1;
    }
    else
    {
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        v19 = v7;
        if ( (unsigned int)v7 >= 0x40 )
          break;
        v6 = v8->array[v7];
        if ( v6 )
          goto LABEL_6;
      }
      v12 = 0;
    }
    if ( !v12 )
      return v5;
    v13 = &s_gentityPhyObjs[v10];
    if ( v13->mapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1585, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH") )
      __debugbreak();
    if ( !v13->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1586, ASSERT_TYPE_ASSERT, "(physicsObject->keyframedOffsetMapping.size() > 0)", (const char *)&queryFormat, "physicsObject->keyframedOffsetMapping.size() > 0") )
      __debugbreak();
    QuatAndOriginToMatrix43(&entityQuat[v10], &entityOrigin[v10], &result);
    m_buffer = v13->keyframedOffsetMapping.m_data.m_buffer;
    if ( m_buffer != &m_buffer[v13->keyframedOffsetMapping.m_data.m_size] )
    {
      do
      {
        if ( (m_buffer->bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1598, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( offsetMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( offsetMapping->bodyId )") )
          __debugbreak();
        MatrixMultiply43(&m_buffer->rootOffset, &result, &out);
        AxisToQuat((const tmat33_t<vec3_t> *)&out, &orientationAsQuat);
        if ( !Physics_IsRigidBodyKeyframed(worldId, m_buffer->bodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1618, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyKeyframed( worldId, offsetMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyKeyframed( worldId, offsetMapping->bodyId )") )
          __debugbreak();
        v15 = Physics_KeyframeRigidBodyTo(worldId, m_buffer->bodyId, &out.m[3], &orientationAsQuat, 1.0 / (float)numSteps, 1, 0, 0.0);
        ++m_buffer;
        v5 |= v15 == Physics_MovementType_Warped;
      }
      while ( m_buffer != &v13->keyframedOffsetMapping.m_data.m_buffer[v13->keyframedOffsetMapping.m_data.m_size] );
      LODWORD(v7) = v19;
      v8 = inputArray;
      goto LABEL_2;
    }
  }
}

/*
==============
G_PhysicsObject_PreStepWorld_Show
==============
*/
void G_PhysicsObject_PreStepWorld_Show(const Physics_WorldId worldId, const bitarray<2048> *inputArray)
{
  unsigned int v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = inputArray->array[0];
  LODWORD(v4) = 0;
  v5 = worldId;
  while ( v2 )
  {
LABEL_5:
    v6 = __lzcnt(v2);
    v7 = v6 + 32 * v4;
    if ( v6 >= 0x20 )
    {
      LODWORD(v12) = 32;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v6);
    v8 = s_gentityPhyObjs[v7].physicsInstances[v5];
    if ( v8 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1310, ASSERT_TYPE_ASSERT, "(physicsObject->physicsInstances[worldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObject->physicsInstances[worldId] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    Physics_AddInstanceToWorld((Physics_WorldId)v5, v8, 0, 1);
    if ( v7 >= 0x800 )
    {
      LODWORD(v12) = 2048;
      LODWORD(v11) = v6 + 32 * v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
        __debugbreak();
    }
    v9 = 0x80000000 >> (v7 & 0x1F);
    v10 = &s_gentityPhyObjShown.array[(unsigned __int64)v7 >> 5];
    if ( (v9 & *v10) != 0 )
    {
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 475, ASSERT_TYPE_ASSERT, "(force || s_gentityPhyObjShown.testBit( entNum ) != shown)", "%s\n\tG_PhysicsObject_MarkPhysicsObjectAsShown: Ent num %i is %s already", "force || s_gentityPhyObjShown.testBit( entNum ) != shown", v12, "Shown") )
        __debugbreak();
    }
    if ( v7 >= 0x800 )
    {
      LODWORD(v14) = 2048;
      LODWORD(v13) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
        __debugbreak();
    }
    *v10 |= v9;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x40 )
      break;
    v2 = inputArray->array[v4];
    if ( v2 )
      goto LABEL_5;
  }
}

/*
==============
G_PhysicsObject_PreStepWorld_Warp
==============
*/
__int64 G_PhysicsObject_PreStepWorld_Warp(const Physics_WorldId worldId, const bitarray<2048> *inputArray, const vec3_t *const entityOrigin, const vec4_t *const entityQuat)
{
  unsigned int v4; 
  unsigned __int8 v5; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  int v10; 
  G_PhysicsObject *v11; 
  unsigned int v12; 
  hknpWorld *world; 
  __int64 v15; 
  __int64 v16; 

  v4 = inputArray->array[0];
  v5 = 0;
  LODWORD(v7) = 0;
  v8 = worldId;
  while ( v4 )
  {
LABEL_5:
    v9 = __lzcnt(v4);
    v10 = v9 + 32 * v7;
    if ( v9 >= 0x20 )
    {
      LODWORD(v16) = 32;
      LODWORD(v15) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v9)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v9);
    v11 = &s_gentityPhyObjs[v10];
    if ( v11->mapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1487, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH") )
      __debugbreak();
    v12 = v11->primaryBodies[v8];
    if ( !Physics_IsRigidBodyKeyframed((Physics_WorldId)v8, v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1491, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyKeyframed( worldId, bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyKeyframed( worldId, bodyId )") )
      __debugbreak();
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 590, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Freeze Rigid Body Velocity when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v8 > 7 )
    {
      LODWORD(v16) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 591, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Freeze Rigid Body Velocity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
        __debugbreak();
    }
    if ( (v12 & 0xFFFFFF) == 0xFFFFFF )
    {
      LODWORD(v16) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 592, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Freeze Rigid Body Velocity with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v16) )
        __debugbreak();
    }
    if ( (unsigned int)v8 > 7 )
    {
      LODWORD(v16) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 746, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
        __debugbreak();
    }
    if ( (v12 & 0xFFFFFF) == 0xFFFFFF )
    {
      LODWORD(v16) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 747, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v16) )
        __debugbreak();
    }
    world = HavokPhysics_GetMutableWorld((Physics_WorldId)v8)->world;
    if ( !world )
    {
      LODWORD(v16) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 751, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v16) )
        __debugbreak();
    }
    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, const __m128 *, const __m128 *, int))world->setBodyVelocity)(&world->hknpWorldWriter, v12, &g_vectorfConstants[5], &g_vectorfConstants[5], 1);
    Physics_WarpRigidBodyTo_Simple((const Physics_WorldId)v8, v12, &entityOrigin[v10], &entityQuat[v10]);
    v5 = 1;
  }
  while ( 1 )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 0x40 )
      return v5;
    v4 = inputArray->array[v7];
    if ( v4 )
      goto LABEL_5;
  }
}

/*
==============
G_PhysicsObject_PropagateToDetailWorld
==============
*/
void G_PhysicsObject_PropagateToDetailWorld(Physics_WorldId fromWorldId, Physics_WorldId worldId)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 
  hkMemoryAllocator *v6; 
  hkArray<hknpBodyId,hkContainerHeapAllocator> array; 
  __int64 v8; 
  hkMonitorStream *v9; 
  bitarray<2048> outputToHide; 
  bitarray<2048> outputToShow; 
  vec3_t entityOrigin; 
  vec4_t entityQuat; 

  v8 = -2i64;
  array.m_data = NULL;
  array.m_size = 0;
  array.m_capacityAndFlags = 0x80000000;
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2193, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized", array.m_data, *(_QWORD *)&array.m_size, v8) )
    __debugbreak();
  if ( !s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2194, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs )", (const char *)&queryFormat, "s_gentityPhyObjs") )
    __debugbreak();
  if ( (unsigned int)fromWorldId > PHYSICS_WORLD_ID_SERVER_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2197, ASSERT_TYPE_ASSERT, "( fromWorldId >= PHYSICS_WORLD_ID_SERVER_FIRST && fromWorldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "fromWorldId >= PHYSICS_WORLD_ID_SERVER_FIRST && fromWorldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2198, ASSERT_TYPE_ASSERT, "( worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST )", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_SERVER_FIRST && worldId <= PHYSICS_WORLD_ID_SERVER_LAST") )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_PropagateToDetailWorld");
  v9 = v5;
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPropCalcVisibility");
  G_PhysicsObject_PropagateToDetailWorld_CalcVisibility(worldId, &s_gentityPhyObjUsed, &outputToHide, &outputToShow);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPropHide");
  G_PhysicsObject_PropagateToDetailWorld_Hide(worldId, &outputToHide);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPropShow");
  G_PhysicsObject_PropagateToDetailWorld_Show(worldId, &outputToShow);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPropGetTrans");
  G_PhysicsObject_GetTransforms(&s_gentityInWorldUsed, &entityOrigin, &entityQuat);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPropWarp");
  G_PhysicsObject_PropagateToDetailWorld_Warp(fromWorldId, worldId, &s_gentityInWorldUsed, &entityOrigin, &entityQuat, &array);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF6A5ACD, "ServerPhysicsObjectPropDirtyBroadphase");
  Physics_DirtyBroadphase(worldId, &array);
  Sys_ProfEndNamedEvent();
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
  v6 = hkMemHeapAllocator();
  array.m_size = 0;
  if ( array.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v6, array.m_data, 4, array.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
G_PhysicsObject_PropagateToDetailWorld_CalcVisibility
==============
*/
void G_PhysicsObject_PropagateToDetailWorld_CalcVisibility(const Physics_WorldId worldId, const bitarray<2048> *inputArray, bitarray<2048> *outputToHide, bitarray<2048> *outputToShow)
{
  __int64 v4; 
  __int64 v6; 
  Physics_WorldId v7; 
  int v8; 
  bitarray<2048> *v9; 
  bitarray<2048> *v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  gentity_s *v15; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 
  bool v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 

  v4 = 4i64;
  v6 = 4i64;
  v7 = worldId;
  v8 = 0;
  v9 = outputToHide;
  do
  {
    *(_QWORD *)v9->array = 0i64;
    *(_QWORD *)&v9->array[2] = 0i64;
    *(_QWORD *)&v9->array[4] = 0i64;
    v9 = (bitarray<2048> *)((char *)v9 + 64);
    *(_QWORD *)&v9[-1].array[54] = 0i64;
    *(_QWORD *)&v9[-1].array[56] = 0i64;
    *(_QWORD *)&v9[-1].array[58] = 0i64;
    *(_QWORD *)&v9[-1].array[60] = 0i64;
    *(_QWORD *)&v9[-1].array[62] = 0i64;
    --v6;
  }
  while ( v6 );
  v10 = outputToShow;
  do
  {
    *(_QWORD *)v10->array = 0i64;
    *(_QWORD *)&v10->array[2] = 0i64;
    *(_QWORD *)&v10->array[4] = 0i64;
    v10 = (bitarray<2048> *)((char *)v10 + 64);
    *(_QWORD *)&v10[-1].array[54] = 0i64;
    *(_QWORD *)&v10[-1].array[56] = 0i64;
    *(_QWORD *)&v10[-1].array[58] = 0i64;
    *(_QWORD *)&v10[-1].array[60] = 0i64;
    *(_QWORD *)&v10[-1].array[62] = 0i64;
    --v4;
  }
  while ( v4 );
  v11 = inputArray->array[0];
  while ( v11 )
  {
LABEL_9:
    v13 = __lzcnt(v11);
    v14 = v13 + 32 * v8;
    if ( v13 >= 0x20 )
    {
      LODWORD(v22) = 32;
      LODWORD(v21) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( (v11 & (0x80000000 >> v13)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v11 &= ~(0x80000000 >> v13);
    if ( s_gentityPhyObjs[v14].physicsInstances[v7] != -1 )
    {
      v15 = &g_entities[v14];
      p_eFlags = &v15->s.lerp.eFlags;
      v17 = v15->r.modelType != 4 && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v15->s.lerp.eFlags, ACTIVE, 0xCu) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 0);
      if ( v14 >= 0x800 )
      {
        LODWORD(v22) = 2048;
        LODWORD(v21) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v21, v22) )
          __debugbreak();
      }
      v18 = 0x80000000 >> (v14 & 0x1F);
      v19 = (unsigned __int64)v14 >> 5;
      v20 = v18 & s_gentityPhyObjDetailShown.array[v19];
      if ( v20 && v17 )
      {
        if ( v14 >= 0x800 )
        {
          LODWORD(v24) = 2048;
          LODWORD(v23) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
            __debugbreak();
        }
        outputToHide->array[v19] |= v18;
      }
      else
      {
        if ( v14 >= 0x800 )
        {
          LODWORD(v24) = 2048;
          LODWORD(v23) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
            __debugbreak();
        }
        outputToHide->array[v19] &= ~v18;
      }
      if ( v20 || v17 )
      {
        if ( v14 >= 0x800 )
        {
          LODWORD(v24) = 2048;
          LODWORD(v23) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
            __debugbreak();
        }
        outputToShow->array[v19] &= ~v18;
        v7 = worldId;
      }
      else
      {
        if ( v14 >= 0x800 )
        {
          LODWORD(v24) = 2048;
          LODWORD(v23) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v23, v24) )
            __debugbreak();
        }
        outputToShow->array[v19] |= v18;
        v7 = worldId;
      }
    }
  }
  while ( 1 )
  {
    v12 = (unsigned int)(v8 + 1);
    v8 = v12;
    if ( (unsigned int)v12 >= 0x40 )
      break;
    v11 = inputArray->array[v12];
    if ( v11 )
      goto LABEL_9;
  }
}

/*
==============
G_PhysicsObject_PropagateToDetailWorld_Hide
==============
*/
void G_PhysicsObject_PropagateToDetailWorld_Hide(const Physics_WorldId worldId, const bitarray<2048> *inputArray)
{
  unsigned int v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = inputArray->array[0];
  LODWORD(v4) = 0;
  v5 = worldId;
  while ( v2 )
  {
LABEL_5:
    v6 = __lzcnt(v2);
    v7 = v6 + 32 * v4;
    if ( v6 >= 0x20 )
    {
      LODWORD(v12) = 32;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v6);
    v8 = s_gentityPhyObjs[v7].physicsInstances[v5];
    if ( v8 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2054, ASSERT_TYPE_ASSERT, "(physicsObject->physicsInstances[worldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObject->physicsInstances[worldId] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    Physics_RemoveInstanceFromWorld((Physics_WorldId)v5, v8, 1);
    if ( v7 >= 0x800 )
    {
      LODWORD(v12) = 2048;
      LODWORD(v11) = v6 + 32 * v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
        __debugbreak();
    }
    v9 = 0x80000000 >> (v7 & 0x1F);
    v10 = &s_gentityPhyObjDetailShown.array[(unsigned __int64)v7 >> 5];
    if ( (v9 & *v10) == 0 )
    {
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 483, ASSERT_TYPE_ASSERT, "(force || s_gentityPhyObjDetailShown.testBit( entNum ) != shown)", "%s\n\tG_PhysicsObject_MarkPhysicsObjectDetailAsShown: Ent num %i is %s already detail", "force || s_gentityPhyObjDetailShown.testBit( entNum ) != shown", v12, "Hidden") )
        __debugbreak();
    }
    if ( v7 >= 0x800 )
    {
      LODWORD(v14) = 2048;
      LODWORD(v13) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
        __debugbreak();
    }
    *v10 &= ~v9;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x40 )
      break;
    v2 = inputArray->array[v4];
    if ( v2 )
      goto LABEL_5;
  }
}

/*
==============
G_PhysicsObject_PropagateToDetailWorld_Show
==============
*/
void G_PhysicsObject_PropagateToDetailWorld_Show(const Physics_WorldId worldId, const bitarray<2048> *inputArray)
{
  unsigned int v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v2 = inputArray->array[0];
  LODWORD(v4) = 0;
  v5 = worldId;
  while ( v2 )
  {
LABEL_5:
    v6 = __lzcnt(v2);
    v7 = v6 + 32 * v4;
    if ( v6 >= 0x20 )
    {
      LODWORD(v12) = 32;
      LODWORD(v11) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v6)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v6);
    v8 = s_gentityPhyObjs[v7].physicsInstances[v5];
    if ( v8 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2074, ASSERT_TYPE_ASSERT, "(physicsObject->physicsInstances[worldId] != 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObject->physicsInstances[worldId] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    Physics_AddInstanceToWorld((Physics_WorldId)v5, v8, 0, 1);
    if ( v7 >= 0x800 )
    {
      LODWORD(v12) = 2048;
      LODWORD(v11) = v6 + 32 * v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, v12) )
        __debugbreak();
    }
    v9 = 0x80000000 >> (v7 & 0x1F);
    v10 = &s_gentityPhyObjDetailShown.array[(unsigned __int64)v7 >> 5];
    if ( (v9 & *v10) != 0 )
    {
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 483, ASSERT_TYPE_ASSERT, "(force || s_gentityPhyObjDetailShown.testBit( entNum ) != shown)", "%s\n\tG_PhysicsObject_MarkPhysicsObjectDetailAsShown: Ent num %i is %s already detail", "force || s_gentityPhyObjDetailShown.testBit( entNum ) != shown", v12, "Shown") )
        __debugbreak();
    }
    if ( v7 >= 0x800 )
    {
      LODWORD(v14) = 2048;
      LODWORD(v13) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v13, v14) )
        __debugbreak();
    }
    *v10 |= v9;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x40 )
      break;
    v2 = inputArray->array[v4];
    if ( v2 )
      goto LABEL_5;
  }
}

/*
==============
G_PhysicsObject_PropagateToDetailWorld_Warp
==============
*/
void G_PhysicsObject_PropagateToDetailWorld_Warp(Physics_WorldId fromWorldId, Physics_WorldId worldId, const bitarray<2048> *inputArray, const vec3_t *const entityOrigin, const vec4_t *const entityQuat, hkArray<hknpBodyId,hkContainerHeapAllocator> *warpedBodies)
{
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  __int64 v13; 
  G_PhysicsObject *v14; 
  unsigned int v15; 
  unsigned int v16; 
  gentity_s *v17; 
  const HavokPhysicsWorld *ConstWorld; 
  const HavokPhysicsWorld *v19; 
  unsigned int BodyCount; 
  __int64 v21; 
  __int64 v22; 
  const vec4_t *v23; 
  const vec3_t *v24; 
  vec4_t *p_orientationAsQuat; 
  unsigned int v26; 
  unsigned int v27; 
  const HavokPhysicsWorld *v28; 
  unsigned int v29; 
  const HavokPhysicsWorld *v30; 
  unsigned int v31; 
  unsigned int m_serialAndIndex; 
  unsigned int v33; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v35; 
  __int64 activate; 
  __int64 v37; 
  int v38; 
  unsigned int v39; 
  unsigned int instanceId; 
  const bitarray<2048> *v41; 
  hknpBodyId result; 
  hknpBodyId v43; 
  hknpBodyId v44; 
  const vec3_t *v45; 
  vec3_t position; 
  vec4_t out; 

  v6 = inputArray->array[0];
  v7 = fromWorldId;
  LODWORD(v8) = 0;
  v38 = 0;
  v45 = entityOrigin;
  v41 = inputArray;
  v9 = worldId;
  while ( v6 )
  {
LABEL_5:
    v10 = __lzcnt(v6);
    v11 = v10 + 32 * v8;
    if ( v10 >= 0x20 )
    {
      LODWORD(v37) = 32;
      LODWORD(activate) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", activate, v37) )
        __debugbreak();
    }
    v12 = 0x80000000 >> v10;
    if ( (v6 & (0x80000000 >> v10)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    LODWORD(v8) = v38;
    inputArray = v41;
    v13 = v11;
    v14 = &s_gentityPhyObjs[v11];
    v6 &= ~v12;
    v39 = v6;
    v15 = v14->physicsInstances[v9];
    instanceId = v15;
    if ( v15 != -1 )
    {
      if ( Physics_IsInstanceDetailBounded((const Physics_WorldId)v9, v15) )
      {
        v16 = v14->primaryBodies[v9];
        v17 = &g_entities[v13];
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v9 > 7 )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v37) )
            __debugbreak();
        }
        if ( g_physicsServerWorldsCreated )
          goto LABEL_28;
        if ( (int)v9 >= 0 )
        {
          if ( (int)v9 <= 1 )
          {
            LODWORD(v37) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v37) )
              __debugbreak();
          }
LABEL_28:
          if ( (unsigned int)v9 <= 7 )
            goto LABEL_31;
        }
        LODWORD(v37) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
          __debugbreak();
LABEL_31:
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v9);
        if ( !ConstWorld->world )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v37) )
            __debugbreak();
        }
        if ( v14->numBodies[v9] != HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2108, ASSERT_TYPE_ASSERT, "( physicsObject->numBodies[worldId] == Physics_GetNumRigidBodys( worldId, physicsInstance ) )", (const char *)&queryFormat, "physicsObject->numBodies[worldId] == Physics_GetNumRigidBodys( worldId, physicsInstance )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v9 > 7 )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v37) )
            __debugbreak();
        }
        if ( g_physicsServerWorldsCreated )
          goto LABEL_52;
        if ( (int)v9 >= 0 )
        {
          if ( (int)v9 <= 1 )
          {
            LODWORD(v37) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v37) )
              __debugbreak();
          }
LABEL_52:
          if ( (unsigned int)v9 <= 7 )
            goto LABEL_55;
        }
        LODWORD(v37) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
          __debugbreak();
LABEL_55:
        v19 = HavokPhysics_GetConstWorld((Physics_WorldId)v9);
        if ( !v19->world )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v37) )
            __debugbreak();
        }
        BodyCount = HavokPhysicsInstanceManager_GetBodyCount(&v19->instanceManager, v15);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v9 > 7 )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v37) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v37) )
            __debugbreak();
        }
        if ( v16 != HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v9, v15, BodyCount - 1)->m_serialAndIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2109, ASSERT_TYPE_ASSERT, "( toBodyId == Physics_GetRigidBodyID( worldId, physicsInstance, Physics_GetNumRigidBodys( worldId, physicsInstance ) - 1 ) )", (const char *)&queryFormat, "toBodyId == Physics_GetRigidBodyID( worldId, physicsInstance, Physics_GetNumRigidBodys( worldId, physicsInstance ) - 1 )") )
          __debugbreak();
        v21 = v13;
        v22 = v13;
        v23 = &entityQuat[v21];
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\g_physicsobject.inl", 14, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
          __debugbreak();
        v24 = v45;
        p_orientationAsQuat = &v14->detailCache.orientationAsQuat;
        v14->detailCache.position.v[0] = v45[v22].v[0];
        v14->detailCache.position.v[1] = v24[v22].v[1];
        v14->detailCache.position.v[2] = v24[v22].v[2];
        if ( ((v17->r.modelType - 1) & 0xFD) != 0 )
        {
          p_orientationAsQuat->v[0] = v23->v[0];
          v14->detailCache.orientationAsQuat.v[1] = v23->v[1];
          v14->detailCache.orientationAsQuat.v[2] = v23->v[2];
          v14->detailCache.orientationAsQuat.v[3] = v23->v[3];
        }
        else
        {
          p_orientationAsQuat->v[0] = quat_identity.v[0];
          v14->detailCache.orientationAsQuat.v[1] = quat_identity.v[1];
          v14->detailCache.orientationAsQuat.v[2] = quat_identity.v[2];
          v14->detailCache.orientationAsQuat.v[3] = quat_identity.v[3];
        }
        v14->detailCache.cached = 0;
        if ( Physics_WarpDetailRigidBodyTo((Physics_WorldId)v9, v16, &v14->detailCache.position, p_orientationAsQuat, 0, 0) != Physics_MovementType_Warped )
          goto LABEL_141;
        Physics_AddRigidBodyIdToArray(warpedBodies, v16);
        LODWORD(v8) = v38;
        inputArray = v41;
        v6 = v39;
      }
      else
      {
        v26 = v14->physicsInstances[v7];
        if ( v26 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2125, ASSERT_TYPE_ASSERT, "( fromPhysicsInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "fromPhysicsInstance != PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        v27 = v14->numBodies[v9];
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v9 > 7 )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v37) )
            __debugbreak();
        }
        if ( g_physicsServerWorldsCreated )
          goto LABEL_101;
        if ( (int)v9 >= 0 )
        {
          if ( (int)v9 <= 1 )
          {
            LODWORD(v37) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v37) )
              __debugbreak();
          }
LABEL_101:
          if ( (unsigned int)v9 <= 7 )
            goto LABEL_104;
        }
        LODWORD(v37) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
          __debugbreak();
LABEL_104:
        v28 = HavokPhysics_GetConstWorld((Physics_WorldId)v9);
        if ( !v28->world )
        {
          LODWORD(v37) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v37) )
            __debugbreak();
        }
        v29 = instanceId;
        if ( v27 != HavokPhysicsInstanceManager_GetBodyCount(&v28->instanceManager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2129, ASSERT_TYPE_ASSERT, "( numBodies == Physics_GetNumRigidBodys( worldId, physicsInstance ) )", (const char *)&queryFormat, "numBodies == Physics_GetNumRigidBodys( worldId, physicsInstance )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v7 > 7 )
        {
          LODWORD(v37) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
            __debugbreak();
        }
        if ( v26 == -1 )
        {
          LODWORD(v37) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v37) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
        {
          LODWORD(v37) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v37) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          if ( (int)v7 < 0 )
            goto LABEL_129;
          if ( (int)v7 <= 1 )
          {
            LODWORD(v37) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v37) )
              __debugbreak();
          }
        }
        if ( (unsigned int)v7 > 7 )
        {
LABEL_129:
          LODWORD(v37) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
            __debugbreak();
        }
        if ( v26 == -1 )
        {
          LODWORD(v37) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v37) )
            __debugbreak();
        }
        v30 = HavokPhysics_GetConstWorld((Physics_WorldId)v7);
        if ( !v30->world )
        {
          LODWORD(v37) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v37) )
            __debugbreak();
        }
        if ( v27 != HavokPhysicsInstanceManager_GetBodyCount(&v30->instanceManager, v26) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2130, ASSERT_TYPE_ASSERT, "( numBodies == Physics_GetNumRigidBodys( fromWorldId, fromPhysicsInstance ) )", (const char *)&queryFormat, "numBodies == Physics_GetNumRigidBodys( fromWorldId, fromPhysicsInstance )") )
          __debugbreak();
        v31 = 0;
        if ( v27 )
        {
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v7 > 7 )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
                __debugbreak();
            }
            if ( v26 == -1 )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v37) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v37) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v37) )
                __debugbreak();
            }
            m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v43, (const Physics_WorldId)v7, v26, v31)->m_serialAndIndex;
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v9 > 7 )
            {
              LODWORD(v37) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
            {
              LODWORD(v37) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v37) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
            {
              LODWORD(v37) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v37) )
                __debugbreak();
            }
            v33 = HavokPhysics_GetRigidBodyID(&v44, (const Physics_WorldId)v9, v29, v31)->m_serialAndIndex;
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v7 > 7 )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
                __debugbreak();
            }
            if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v37) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v37) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v37) )
                __debugbreak();
            }
            if ( (unsigned int)v7 > 7 )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
                __debugbreak();
            }
            if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v37) )
                __debugbreak();
            }
            world = HavokPhysics_GetConstWorld((Physics_WorldId)v7)->world;
            if ( !world )
            {
              LODWORD(v37) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v37) )
                __debugbreak();
            }
            v35 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
            position.v[0] = 32.0 * v35[1].m[0].v[0];
            position.v[1] = 32.0 * v35[1].m[0].v[1];
            position.v[2] = 32.0 * v35[1].m[0].v[2];
            Axis34ToQuat(v35, &out);
            if ( Physics_WarpDetailRigidBodyTo((Physics_WorldId)v9, v33, &position, &out, 0, 0) == Physics_MovementType_Warped )
              Physics_AddRigidBodyIdToArray(warpedBodies, v33);
            v29 = instanceId;
            ++v31;
          }
          while ( v31 < v27 );
          LODWORD(v8) = v38;
          v6 = v39;
          inputArray = v41;
        }
        else
        {
LABEL_141:
          LODWORD(v8) = v38;
          v6 = v39;
          inputArray = v41;
        }
      }
    }
  }
  while ( 1 )
  {
    v8 = (unsigned int)(v8 + 1);
    v38 = v8;
    if ( (unsigned int)v8 >= 0x40 )
      break;
    v6 = inputArray->array[v8];
    if ( v6 )
      goto LABEL_5;
  }
}

/*
==============
G_PhysicsObject_RegisterForCollisionCallback
==============
*/
void G_PhysicsObject_RegisterForCollisionCallback(gentity_s *ent)
{
  __int64 v2; 
  unsigned int v3; 
  int NumRigidBodys; 
  signed int v5; 
  unsigned int m_serialAndIndex; 
  __int64 v7; 
  hknpBodyId result; 
  G_PhysicsObject *v9; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2518, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v9 = G_PhysicsObject_Get(ent);
  v2 = (__int64)v9;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2522, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
    __debugbreak();
  v3 = *(_DWORD *)(v2 + 4);
  if ( v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2524, ASSERT_TYPE_ASSERT, "( physInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "physInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v3);
  v5 = 0;
  if ( NumRigidBodys > 0 )
  {
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v3 == -1 )
      {
        LODWORD(v7) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v7) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v7) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v7) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v3, v5)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2531, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Physics_SimpleCollisionCallback_RegisterBody(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, G_PhysicsObject_SimpleCollisionCallback);
      ++v5;
    }
    while ( v5 < NumRigidBodys );
    v2 = (__int64)v9;
  }
  *(_BYTE *)(v2 + 200) = 1;
}

/*
==============
G_PhysicsObject_SetNonDynamic
==============
*/
void G_PhysicsObject_SetNonDynamic(gentity_s *ent)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 
  G_PhysicsObject *v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 number; 
  unsigned int v8; 
  bool IsRigidBodyKeyframed; 
  __int64 v10; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_SetNonDynamic");
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2459, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v4 = G_PhysicsObject_Get(ent);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2464, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
    __debugbreak();
  v5 = v4->physicsInstances[0];
  if ( v5 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2466, ASSERT_TYPE_ASSERT, "( physInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "physInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( v5 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", 0) )
    __debugbreak();
  if ( !g_physicsServerWorldsCreated )
  {
    LODWORD(v10) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v10) )
      __debugbreak();
  }
  if ( v5 == -1 )
  {
    LODWORD(v10) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v10) )
      __debugbreak();
  }
  if ( !g_havokPhysicsWorlds[0].world )
  {
    LODWORD(v10) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v10) )
      __debugbreak();
  }
  if ( HavokPhysicsInstanceManager_GetBodyCount(&g_havokPhysicsWorlds[0].instanceManager, v5) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2470, ASSERT_TYPE_ASSERT, "(Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, physInstance ) == 1)", "%s\n\tG_PhysicsObject_SetNonDynamic only supports one serverside rigid-body per instance at the moment", "Physics_GetNumRigidBodys( PHYSICS_WORLD_ID_SERVER_MAIN, physInstance ) == 1") )
    __debugbreak();
  v6 = v4->primaryBodies[0];
  if ( (v6 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2472, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, v6) )
  {
    v4->mapping = PHYSICSOBJECT_MAPPING_ENTITY_AUTH;
    Physics_SetRigidBodyKeyframed(PHYSICS_WORLD_ID_FIRST, v6);
    number = ent->s.number;
    v8 = s_gentityPhyObjs[number].primaryBodies[0];
    if ( (v8 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 988, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    IsRigidBodyKeyframed = Physics_IsRigidBodyKeyframed(PHYSICS_WORLD_ID_FIRST, v8);
    bitarray_base<bitarray<2048>>::setBitTo(&s_gentityPhyObjKeyframed, number, IsRigidBodyKeyframed);
  }
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
G_PhysicsObject_Shutdown
==============
*/
void G_PhysicsObject_Shutdown(void)
{
  unsigned int v0; 
  bitarray<2048> *v1; 
  __int64 i; 
  __int64 v3; 
  __int64 v4; 

  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 129, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( !s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 130, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs )", (const char *)&queryFormat, "s_gentityPhyObjs") )
    __debugbreak();
  v0 = 0;
  v1 = &s_gentityPhyObjUsed;
  while ( !v1->array[0] )
  {
    ++v0;
    v1 = (bitarray<2048> *)((char *)v1 + 4);
    if ( v0 >= 0x40 )
      goto LABEL_13;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 131, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjUsed.noBitsOn() )", (const char *)&queryFormat, "s_gentityPhyObjUsed.noBitsOn()") )
    __debugbreak();
LABEL_13:
  s_physicsObject_GInitialized = 1;
  for ( i = 0i64; i < 425984; i += 208i64 )
  {
    v3 = i;
    v4 = 8i64;
    do
    {
      if ( *(unsigned int *)((char *)s_gentityPhyObjs->physicsInstances + v3) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 139, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs[ objIt ].physicsInstances[ instanceIt ] == 0xFFFFFFFF )", (const char *)&queryFormat, "s_gentityPhyObjs[ objIt ].physicsInstances[ instanceIt ] == PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
      v3 += 4i64;
      --v4;
    }
    while ( v4 );
  }
  s_gentityPhyObjs = NULL;
}

/*
==============
G_PhysicsObject_SimpleCollisionCallback
==============
*/
void G_PhysicsObject_SimpleCollisionCallback(Physics_SimpleCollisionCallback_Data *data)
{
  int Ref; 
  int v3; 
  __int64 EntityNum; 
  __int64 v5; 
  const gentity_s *v6; 
  const gentity_s *v7; 
  scrContext_t *v8; 

  Ref = Physics_GetRef(data->worldId, data->bodyIds[0]);
  v3 = Physics_GetRef(data->worldId, data->bodyIds[1]);
  EntityNum = Physics_GetEntityNum(Ref);
  v5 = Physics_GetEntityNum(v3);
  if ( (_DWORD)EntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2494, ASSERT_TYPE_ASSERT, "( entNum1 != ENTITYNUM_NONE )", (const char *)&queryFormat, "entNum1 != ENTITYNUM_NONE") )
    __debugbreak();
  v6 = &g_entities[EntityNum];
  v7 = &g_entities[v5];
  v8 = ScriptContext_Server();
  GScr_AddEntity(v7);
  Scr_AddFloat(v8, data->impulse);
  Scr_AddVector(v8, data->normal.v);
  Scr_AddVector(v8, data->position.v);
  Scr_AddInt(v8, data->surfaceFlagData[1]);
  Scr_AddInt(v8, data->surfaceFlagData[0]);
  Scr_AddInt(v8, data->bodyIds[1]);
  Scr_AddInt(v8, data->bodyIds[0]);
  GScr_Notify(v6, scr_const.collision, 8u);
}

/*
==============
G_PhysicsObject_UnregisterForCollisionCallback
==============
*/
void G_PhysicsObject_UnregisterForCollisionCallback(gentity_s *ent)
{
  __int64 v2; 
  unsigned int v3; 
  int NumRigidBodys; 
  signed int v5; 
  unsigned int m_serialAndIndex; 
  __int64 v7; 
  hknpBodyId result; 
  G_PhysicsObject *v9; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2544, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v9 = G_PhysicsObject_Get(ent);
  v2 = (__int64)v9;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2548, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
    __debugbreak();
  v3 = *(_DWORD *)(v2 + 4);
  if ( v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2550, ASSERT_TYPE_ASSERT, "( physInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "physInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v3);
  v5 = 0;
  if ( NumRigidBodys <= 0 )
  {
    *(_BYTE *)(v2 + 200) = 0;
  }
  else
  {
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v3 == -1 )
      {
        LODWORD(v7) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v7) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v7) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v7) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v3, v5)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2557, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Physics_SimpleCollisionCallback_UnregisterBody(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, G_PhysicsObject_SimpleCollisionCallback, 1);
      ++v5;
    }
    while ( v5 < NumRigidBodys );
    v9->registeredForCollisionCallback = 0;
  }
}

/*
==============
G_PhysicsObject_UpdateDetailWorldInstance
==============
*/
__int64 G_PhysicsObject_UpdateDetailWorldInstance(Physics_WorldId fromWorldId, Physics_WorldId worldId, int entNum, DObjPartBits **partBits)
{
  __int64 v4; 
  DObjPartBits **v5; 
  __int64 v6; 
  G_PhysicsObject *v7; 
  char *Value; 
  unsigned int *v10; 
  unsigned int v11; 
  _QWORD *v12; 
  char *v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  ThreadContext CurrentThreadContext; 
  unsigned int v17; 
  const gentity_s *v18; 
  DObj *v19; 
  Physics_WorldId v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  PhysicsObjectBoneMapping *m_buffer; 
  DObjAnimMat *LocalBoneIndexMatrix; 
  DObjAnimMat *v41; 
  float transWeight; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  DObjPartBits *v53; 
  unsigned __int64 v54; 
  unsigned int v55; 
  DObjPartBits *v56; 
  __int64 activate; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 
  unsigned int v61; 
  unsigned int v63; 
  const gentity_s *v65; 
  DObj *ServerDObjForEntnum; 
  tmat43_t<vec3_t> in2; 
  tmat33_t<vec3_t> in1; 
  vec4_t orientationAsQuat; 
  tmat33_t<vec3_t> out; 
  vec3_t position; 

  v4 = entNum;
  v5 = partBits;
  v6 = worldId;
  v7 = G_PhysicsObject_Get(entNum);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2284, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  *v5 = &v7->detailCache.hideBits;
  if ( v7->detailCache.cached )
    return v7->physicsInstances[v6];
  Value = (char *)Sys_GetValue(0);
  v10 = (unsigned int *)(Value + 32696);
  if ( (unsigned int)(*((_DWORD *)Value + 8174) + 1) >= 3 )
  {
    LODWORD(activate) = *((_DWORD *)Value + 8174) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", activate, 3) )
      __debugbreak();
  }
  v11 = *v10 + 1;
  *v10 = v11;
  if ( v11 >= 3 )
  {
    LODWORD(v58) = 3;
    LODWORD(activate) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", activate, v58) )
      __debugbreak();
  }
  v12 = Value + 2088;
  v13 = Value + 40;
  if ( *v12 < (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v12 += 8i64;
  if ( *v12 >= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v12 = v10;
  if ( *v12 <= (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v14 = (int)*v10;
  v15 = __rdtsc();
  v10[v14 + 2] = v15;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v17 = 0;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 765, NULL, 0);
  v18 = &g_entities[v4];
  v65 = v18;
  ServerDObjForEntnum = Com_GetServerDObjForEntnum(v4);
  v19 = ServerDObjForEntnum;
  if ( !ServerDObjForEntnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2302, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v20 = worldId;
  v63 = v7->physicsInstances[worldId];
  if ( v63 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2306, ASSERT_TYPE_ASSERT, "( toPhysicsInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "toPhysicsInstance != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v21 = v7->detailCache.orientationAsQuat.v[1];
  v22 = v7->detailCache.orientationAsQuat.v[0];
  v23 = v7->detailCache.orientationAsQuat.v[2];
  v24 = v7->detailCache.orientationAsQuat.v[3];
  v25 = (float)((float)((float)(v22 * v22) + (float)(v21 * v21)) + (float)(v23 * v23)) + (float)(v24 * v24);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v25 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", v22, v21, v23, v24, fsqrt(v25)) )
    __debugbreak();
  v26 = v7->detailCache.orientationAsQuat.v[1];
  v27 = v7->detailCache.orientationAsQuat.v[2];
  v28 = v7->detailCache.orientationAsQuat.v[0];
  v29 = v7->detailCache.orientationAsQuat.v[3];
  v30 = v28 * (float)(v28 * 2.0);
  v31 = v27 * (float)(v28 * 2.0);
  v32 = v26 * (float)(v28 * 2.0);
  v33 = v29 * (float)(v28 * 2.0);
  v34 = v26 * (float)(v26 * 2.0);
  v35 = v27 * (float)(v26 * 2.0);
  v36 = v29 * (float)(v26 * 2.0);
  v37 = v29 * (float)(v27 * 2.0);
  v38 = v27 * (float)(v27 * 2.0);
  in2.m[0].v[0] = 1.0 - (float)(v38 + v34);
  in2.m[0].v[2] = v31 - v36;
  in2.m[0].v[1] = v37 + v32;
  in2.m[1].v[0] = v32 - v37;
  in2.m[1].v[2] = v35 + v33;
  in2.m[2].v[1] = v35 - v33;
  in2.m[1].v[1] = 1.0 - (float)(v38 + v30);
  in2.m[2].v[0] = v36 + v31;
  in2.m[2].v[2] = 1.0 - (float)(v34 + v30);
  in2.m[3] = v7->detailCache.position;
  m_buffer = v7->detailBoneMapping.m_data.m_buffer;
  if ( m_buffer != &m_buffer[v7->detailBoneMapping.m_data.m_size] )
  {
    do
    {
      if ( (m_buffer->bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2320, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( boneMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( boneMapping->bodyId )") )
        __debugbreak();
      LocalBoneIndexMatrix = G_Utils_DObjGetLocalBoneIndexMatrix(v18, m_buffer->boneIndex);
      v41 = LocalBoneIndexMatrix;
      if ( ((LODWORD(LocalBoneIndexMatrix->quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalBoneIndexMatrix->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalBoneIndexMatrix->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(LocalBoneIndexMatrix->quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
        __debugbreak();
      if ( (LODWORD(v41->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
        __debugbreak();
      transWeight = v41->transWeight;
      v43 = transWeight * v41->quat.v[0];
      v44 = v41->quat.v[1];
      v45 = v41->quat.v[2];
      v46 = v43 * v41->quat.v[0];
      v47 = v44 * transWeight;
      v48 = v45 * transWeight;
      v49 = v41->quat.v[3];
      v50 = v44 * v47;
      v51 = v45 * v47;
      v52 = v49 * v47;
      in1.m[0].v[1] = (float)(v49 * v48) + (float)(v44 * v43);
      in1.m[1].v[0] = (float)(v44 * v43) - (float)(v49 * v48);
      in1.m[0].v[0] = 1.0 - (float)((float)(v45 * v48) + v50);
      in1.m[0].v[2] = (float)(v45 * v43) - v52;
      in1.m[1].v[1] = 1.0 - (float)((float)(v45 * v48) + v46);
      in1.m[2].v[0] = v52 + (float)(v45 * v43);
      in1.m[1].v[2] = v51 + (float)(v49 * v43);
      in1.m[2].v[2] = 1.0 - (float)(v50 + v46);
      in1.m[2].v[1] = v51 - (float)(v49 * v43);
      MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&in2, &out);
      MatrixTransformVector43(&v41->trans, &in2, &position);
      AxisToQuat(&out, &orientationAsQuat);
      Physics_WarpLeafDetailRigidBodyTo(v20, m_buffer->bodyId, &position, &orientationAsQuat, 0, 0);
      v53 = *v5;
      v61 = v19->hidePartBits.array[(unsigned __int64)m_buffer->boneIndex >> 5] & (0x80000000 >> (m_buffer->boneIndex & 0x1F));
      if ( v17 >= 0x100 )
      {
        LODWORD(v60) = 256;
        LODWORD(v59) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v59, v60) )
          __debugbreak();
      }
      v54 = (unsigned __int64)v17 >> 5;
      v55 = ~(0x80000000 >> (v17 & 0x1F));
      v53->array[v54] &= v55;
      v56 = *partBits;
      if ( v61 )
      {
        if ( v17 >= 0x100 )
        {
          LODWORD(v60) = 256;
          LODWORD(v59) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v59, v60) )
            __debugbreak();
        }
        v56->array[v54] &= v55;
      }
      else
      {
        if ( v17 >= 0x100 )
        {
          LODWORD(v60) = 256;
          LODWORD(v59) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v59, v60) )
            __debugbreak();
        }
        v56->array[v54] |= 0x80000000 >> (v17 & 0x1F);
      }
      ++m_buffer;
      ++v17;
      v18 = v65;
      v5 = partBits;
      v20 = worldId;
      v19 = ServerDObjForEntnum;
    }
    while ( m_buffer != &v7->detailBoneMapping.m_data.m_buffer[v7->detailBoneMapping.m_data.m_size] );
  }
  v7->detailCache.cached = 1;
  Profile_EndInternal(NULL);
  return v63;
}

/*
==============
G_PhysicsObject_UpdatePhysicsChild
==============
*/
void G_PhysicsObject_UpdatePhysicsChild(Physics_WorldId worldId, gentity_s *ent)
{
  __int64 v3; 
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 
  unsigned int v6; 
  unsigned int scriptMoverType; 
  unsigned int RigidBodyID; 
  vec3_t angles; 
  vec3_t position; 
  vec4_t orientation; 
  tmat33_t<vec3_t> axis; 

  v3 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_UpdatePhysicsChild");
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1916, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64, v5) )
    __debugbreak();
  if ( ent->s.eType != ET_PHYSICS_CHILD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1917, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_PHYSICS_CHILD )", (const char *)&queryFormat, "ent->s.eType == ET_PHYSICS_CHILD") )
    __debugbreak();
  v6 = G_PhysicsObject_Get(ent->s.otherEntityNum)->physicsInstances[v3];
  if ( v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1924, ASSERT_TYPE_ASSERT, "( physInst != 0xFFFFFFFF )", (const char *)&queryFormat, "physInst != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  scriptMoverType = (unsigned __int16)ent->s.un.scriptMoverType;
  if ( scriptMoverType >= Physics_GetNumRigidBodys((const Physics_WorldId)v3, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1928, ASSERT_TYPE_ASSERT, "( bodyIdx < Physics_GetNumRigidBodys( worldId, physInst ) )", (const char *)&queryFormat, "bodyIdx < Physics_GetNumRigidBodys( worldId, physInst )") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v3, v6, scriptMoverType);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1930, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyTransform((const Physics_WorldId)v3, RigidBodyID, &position, &orientation);
  QuatToAxis(&orientation, &axis);
  AxisToAngles(&axis, &angles);
  Trajectory_SetTrBase(&ent->s.lerp.pos, &position);
  ent->s.lerp.apos.trBase = angles;
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
}

/*
==============
G_PhysicsObject_WarpToCurrentTransform
==============
*/
__int64 G_PhysicsObject_WarpToCurrentTransform(gentity_s *ent, bool updateBroadPhase)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v5; 
  const dvar_t *v6; 
  unsigned __int8 v7; 
  G_PhysicsObject *v8; 
  unsigned int v9; 
  unsigned int v10; 
  vec4_t quat; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_WarpToCurrentTransform");
  v6 = DVARBOOL_physics_killswitchEnableWarpingChecksForKeyframedServerObjects;
  if ( !DVARBOOL_physics_killswitchEnableWarpingChecksForKeyframedServerObjects && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_killswitchEnableWarpingChecksForKeyframedServerObjects") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && GMovingPlatforms::IsEntityKeyframedMover(ent) )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v8 = G_PhysicsObject_Get(ent);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1022, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    v9 = v8->physicsInstances[0];
    if ( v9 != -1 )
    {
      if ( ((ent->r.modelType - 1) & 0xFD) != 0 )
        AnglesToQuat(&ent->r.currentAngles, &quat);
      else
        quat = quat_identity;
      v7 = Physics_WarpInstanceTo(PHYSICS_WORLD_ID_FIRST, v9, &ent->r.currentOrigin, &quat, updateBroadPhase);
      v10 = v8->physicsInstances[1];
      if ( v10 != -1 )
        v7 |= Physics_WarpInstanceTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v10, &ent->r.currentOrigin, &quat, updateBroadPhase);
    }
  }
  if ( v5 )
    hkMonitorStream::timerEnd(v5, "Et");
  return v7;
}

/*
==============
G_PhysicsObject_Write
==============
*/
void G_PhysicsObject_Write(MemoryFile *memFile)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  G_PhysicsObject *v7; 
  PhysicsObjectBoneMapping *m_buffer; 
  G_PhysicsObject *v9; 
  PhysicsObjectBoneMapping *v10; 
  G_PhysicsObject *v11; 
  PhysicsObjectOffsetMapping *v12; 
  G_PhysicsObject *v13; 
  __int16 *v14; 
  G_PhysicsObject *v15; 
  PhysicsObjectBoneMapping *v16; 
  unsigned int v17; 
  unsigned int v18; 
  __int16 v19; 
  __int64 v20; 
  hkMonitorStream *v21; 
  unsigned int p; 
  bool v23; 
  bool v24; 

  v20 = -2i64;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_Write");
  v21 = v3;
  if ( !s_physicsObject_GInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 163, ASSERT_TYPE_ASSERT, "( s_physicsObject_GInitialized )", (const char *)&queryFormat, "s_physicsObject_GInitialized") )
    __debugbreak();
  if ( !s_gentityPhyObjs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 164, ASSERT_TYPE_ASSERT, "( s_gentityPhyObjs )", (const char *)&queryFormat, "s_gentityPhyObjs") )
    __debugbreak();
  MemFile_WriteData(memFile, 0x100ui64, &s_gentityPhyObjUsed);
  MemFile_WriteData(memFile, 0x100ui64, &s_gentityPhyObjShown);
  MemFile_WriteData(memFile, 0x100ui64, &s_gentityPhyObjDetailShown);
  MemFile_WriteData(memFile, 0x100ui64, &s_gentityPhyObjKeyframed);
  v4 = 0i64;
  v5 = 0i64;
  v6 = 2048i64;
  do
  {
    p = s_gentityPhyObjs[v4].mapping;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = s_gentityPhyObjs[v4].physicsInstances[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    p = s_gentityPhyObjs[v4].physicsInstances[1];
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, 8ui64, s_gentityPhyObjs[v5].primaryBodies);
    MemFile_WriteData(memFile, 8ui64, s_gentityPhyObjs[v5].numBodies);
    p = s_gentityPhyObjs[v4].dynamicBoneMapping.m_data.m_size;
    MemFile_WriteData(memFile, 4ui64, &p);
    v7 = s_gentityPhyObjs;
    m_buffer = s_gentityPhyObjs[v4].dynamicBoneMapping.m_data.m_buffer;
    if ( m_buffer != &m_buffer[s_gentityPhyObjs[v4].dynamicBoneMapping.m_data.m_size] )
    {
      do
      {
        MemFile_WriteData(memFile, 8ui64, m_buffer++);
        v7 = s_gentityPhyObjs;
      }
      while ( m_buffer != &s_gentityPhyObjs[v4].dynamicBoneMapping.m_data.m_buffer[s_gentityPhyObjs[v4].dynamicBoneMapping.m_data.m_size] );
    }
    p = v7[v4].keyframedBoneMapping.m_data.m_size;
    MemFile_WriteData(memFile, 4ui64, &p);
    v9 = s_gentityPhyObjs;
    v10 = s_gentityPhyObjs[v4].keyframedBoneMapping.m_data.m_buffer;
    if ( v10 != &v10[s_gentityPhyObjs[v4].keyframedBoneMapping.m_data.m_size] )
    {
      do
      {
        MemFile_WriteData(memFile, 8ui64, v10++);
        v9 = s_gentityPhyObjs;
      }
      while ( v10 != &s_gentityPhyObjs[v4].keyframedBoneMapping.m_data.m_buffer[s_gentityPhyObjs[v4].keyframedBoneMapping.m_data.m_size] );
    }
    p = v9[v4].keyframedOffsetMapping.m_data.m_size;
    MemFile_WriteData(memFile, 4ui64, &p);
    v11 = s_gentityPhyObjs;
    v12 = s_gentityPhyObjs[v4].keyframedOffsetMapping.m_data.m_buffer;
    if ( v12 != &v12[s_gentityPhyObjs[v4].keyframedOffsetMapping.m_data.m_size] )
    {
      do
      {
        MemFile_WriteData(memFile, 0x34ui64, v12++);
        v11 = s_gentityPhyObjs;
      }
      while ( v12 != &s_gentityPhyObjs[v4].keyframedOffsetMapping.m_data.m_buffer[s_gentityPhyObjs[v4].keyframedOffsetMapping.m_data.m_size] );
    }
    p = v11[v4].childEntities.m_data.m_size;
    MemFile_WriteData(memFile, 4ui64, &p);
    v13 = s_gentityPhyObjs;
    v14 = s_gentityPhyObjs[v4].childEntities.m_data.m_buffer;
    if ( v14 != &v14[s_gentityPhyObjs[v4].childEntities.m_data.m_size] )
    {
      do
      {
        v19 = *v14;
        MemFile_WriteData(memFile, 2ui64, &v19);
        ++v14;
        v13 = s_gentityPhyObjs;
      }
      while ( v14 != &s_gentityPhyObjs[v4].childEntities.m_data.m_buffer[s_gentityPhyObjs[v4].childEntities.m_data.m_size] );
    }
    p = v13[v4].detailBoneMapping.m_data.m_size;
    MemFile_WriteData(memFile, 4ui64, &p);
    v15 = s_gentityPhyObjs;
    v16 = s_gentityPhyObjs[v4].detailBoneMapping.m_data.m_buffer;
    if ( v16 != &v16[s_gentityPhyObjs[v4].detailBoneMapping.m_data.m_size] )
    {
      do
      {
        MemFile_WriteData(memFile, 8ui64, v16++);
        v15 = s_gentityPhyObjs;
      }
      while ( v16 != &s_gentityPhyObjs[v4].detailBoneMapping.m_data.m_buffer[s_gentityPhyObjs[v4].detailBoneMapping.m_data.m_size] );
    }
    MemFile_WriteData(memFile, 0x40ui64, &v15[v5].detailCache);
    LOBYTE(p) = s_gentityPhyObjs[v4].registeredForCollisionCallback;
    MemFile_WriteData(memFile, 1ui64, &p);
    v17 = s_gentityPhyObjs[v4].physicsInstances[0];
    if ( v17 != -1 )
    {
      v23 = Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v17) != NULL;
      MemFile_WriteData(memFile, 1ui64, &v23);
    }
    v18 = s_gentityPhyObjs[v4].physicsInstances[1];
    if ( v18 != -1 )
    {
      v24 = Physics_GetInstanceDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v18) != NULL;
      MemFile_WriteData(memFile, 1ui64, &v24);
    }
    ++v5;
    ++v4;
    --v6;
  }
  while ( v6 );
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}


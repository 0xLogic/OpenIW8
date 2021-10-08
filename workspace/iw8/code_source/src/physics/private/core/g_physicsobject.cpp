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
  unsigned __int64 v15; 
  hknpBodyId v17; 
  vec3_t *fmt; 
  vec4_t *restoreOrientationAsQuat; 
  int v32; 
  int v33; 
  int v34; 
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
  _R15 = &v9->detailCache;
  v15 = (unsigned __int64)v10 << 6;
  _R13 = (char *)&restoreStates->origin + v15;
  if ( Physics_IsInstanceDetailBounded(PHYSICS_WORLD_ID_SERVER_DETAIL, v13) )
  {
    v17.m_serialAndIndex = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_SERVER_DETAIL, v13, v9->numBodies[1] - 1);
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 524, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (v17.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 526, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", 1) )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [r15]
      vmovss  [rsp+0C8h+var_88], xmm0
    }
    if ( (v32 & 0x7F800000) == 2139095040 )
      goto LABEL_36;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+4]
      vmovss  [rsp+0C8h+var_88], xmm0
    }
    if ( (v33 & 0x7F800000) == 2139095040 )
      goto LABEL_36;
    __asm
    {
      vmovss  xmm0, dword ptr [r15+8]
      vmovss  [rsp+0C8h+var_88], xmm0
    }
    if ( (v34 & 0x7F800000) == 2139095040 )
    {
LABEL_36:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 527, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm3, cs:__real@3d000000
      vmulss  xmm2, xmm3, dword ptr [r15+4]
      vmulss  xmm0, xmm3, dword ptr [r15]
      vmulss  xmm1, xmm3, dword ptr [r15+8]
      vmovss  dword ptr [rsp+0C8h+hkPosition.m_quad+4], xmm2
      vxorps  xmm2, xmm2, xmm2
      vmovss  dword ptr [rsp+0C8h+hkPosition.m_quad+0Ch], xmm2
      vmovss  dword ptr [rsp+0C8h+hkPosition.m_quad], xmm0
      vmovss  dword ptr [rsp+0C8h+hkPosition.m_quad+8], xmm1
    }
    if ( HavokPhysics_AntilagWarpDetailBoundRigidBodyTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v17, &hkPosition, &hkRestorePosition) == Physics_MovementType_NoMove )
      return v10;
    __asm
    {
      vmovss  xmm3, cs:__real@42000000
      vmulss  xmm1, xmm3, dword ptr [rsp+0C8h+hkRestorePosition.m_quad]
      vmulss  xmm0, xmm3, dword ptr [rsp+0C8h+hkRestorePosition.m_quad+4]
      vmulss  xmm2, xmm3, dword ptr [rsp+0C8h+hkRestorePosition.m_quad+8]
      vmovss  dword ptr [r13+0], xmm1
      vmovss  dword ptr [r13+4], xmm0
      vmovss  dword ptr [r13+8], xmm2
    }
    *(Physics_WorldId *)((char *)&restoreStates->worldId + v15) = PHYSICS_WORLD_ID_SERVER_DETAIL;
    *(unsigned int *)((char *)&restoreStates->instanceId + v15) = -1;
    *(hknpBodyId *)((char *)&restoreStates->detailBoundsId + v15) = v17;
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
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  __int16 number; 
  unsigned __int8 BoneIndex; 
  __int64 v36; 
  hknpBodyId result[2]; 
  unsigned int instanceId; 
  int v39; 
  int v40; 
  gentity_s *ent; 
  hkMonitorStream *v42; 
  G_PhysicsObject *v43; 
  hknpBodyId v44; 
  DObj *dobj; 
  __int64 v46; 
  hkMonitorStream *v47; 
  vec3_t position; 
  vec3_t angles; 
  vec4_t orientation; 
  tmat33_t<vec3_t> axis; 

  v46 = -2i64;
  v43 = physObj;
  ent = parentEntity;
  v5 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  v42 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_CreateChildEntities");
  v47 = v7;
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
    v40 = NumRigidBodys;
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
          LODWORD(v36) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v36) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
        {
          LODWORD(v36) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v36) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
        {
          LODWORD(v36) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v36) )
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
      v7 = v42;
      v14 = (__int64)v43;
      if ( v10 > 0 )
      {
        if ( v43->childEntities.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 616, ASSERT_TYPE_ASSERT, "( physObj->childEntities.size() == 0 )", (const char *)&queryFormat, "physObj->childEntities.size() == 0") )
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
        v39 = 0;
        v18 = 1;
        v19 = 0i64;
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v5 > 7 )
          {
            LODWORD(v36) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v36) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
          {
            LODWORD(v36) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v36) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
          {
            LODWORD(v36) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v36) )
              __debugbreak();
          }
          v20 = HavokPhysics_GetRigidBodyID(&v44, (const Physics_WorldId)v5, instanceId, v18)->m_serialAndIndex;
          if ( (v20 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 629, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          if ( Physics_IsRigidBodyDynamic((Physics_WorldId)v5, v20) )
          {
            Physics_GetRigidBodyTransform((const Physics_WorldId)v5, v20, &position, &orientation);
            QuatToAxis(&orientation, &axis);
            AxisToAngles(&axis, &angles);
            _RSI = G_Utils_SpawnEntity();
            if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 644, ASSERT_TYPE_ASSERT, "( childEntity )", (const char *)&queryFormat, "childEntity") )
              __debugbreak();
            _RSI->s.eType = ET_PHYSICS_CHILD;
            _RSI->s.otherEntityNum = ent->s.number;
            _RSI->s.un.vehicleXModel = v18 | (v17 << 16);
            _RDI = &_RSI->s.lerp.pos;
            _RSI->s.lerp.pos.trType = TR_INTERPOLATE;
            *(_QWORD *)&_RSI->s.lerp.pos.trTime = 0i64;
            *(_QWORD *)_RSI->s.lerp.pos.trDelta.v = 0i64;
            _RSI->s.lerp.pos.trDelta.v[2] = 0.0;
            if ( _RSI == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
              __debugbreak();
            __asm { vmovss  xmm0, dword ptr [rbp+57h+position] }
            if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
            {
              __asm { vmovss  [rsp+120h+result.m_serialAndIndex], xmm0 }
              if ( (result[0].m_serialAndIndex & 0x7F800000) == 2139095040 )
                goto LABEL_116;
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+57h+position+4]
                vmovss  [rsp+120h+result.m_serialAndIndex], xmm0
              }
              if ( (result[0].m_serialAndIndex & 0x7F800000) == 2139095040 )
                goto LABEL_116;
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+57h+position+8]
                vmovss  [rsp+120h+result.m_serialAndIndex], xmm0
              }
              if ( (result[0].m_serialAndIndex & 0x7F800000) == 2139095040 )
              {
LABEL_116:
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
                  __debugbreak();
              }
              v26 = LODWORD(position.v[0]) ^ ~s_trbase_aab_X;
              v27 = s_trbase_aab_Y ^ v26 ^ LODWORD(position.v[1]);
              v28 = s_trbase_aab_Z ^ v27 ^ LODWORD(position.v[2]);
              LODWORD(_RSI->s.lerp.pos.trBase.v[0]) = v26;
              LODWORD(_RSI->s.lerp.pos.trBase.v[1]) = v27;
              LODWORD(_RSI->s.lerp.pos.trBase.v[2]) = v28;
              memset(result, 0, sizeof(result));
            }
            else
            {
              __asm
              {
                vmovss  dword ptr [rdi+0Ch], xmm0
                vmovss  xmm1, dword ptr [rbp+57h+position+4]
                vmovss  dword ptr [rdi+10h], xmm1
                vmovss  xmm0, dword ptr [rbp+57h+position+8]
                vmovss  dword ptr [rdi+14h], xmm0
              }
            }
            *(_QWORD *)&_RSI->s.lerp.apos.trType = 1i64;
            _RSI->s.lerp.apos.trDuration = 0;
            *(_QWORD *)_RSI->s.lerp.apos.trDelta.v = 0i64;
            _RSI->s.lerp.apos.trDelta.v[2] = 0.0;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+57h+angles]
              vmovss  dword ptr [rsi+40h], xmm0
              vmovss  xmm1, dword ptr [rbp+57h+angles+4]
              vmovss  dword ptr [rsi+44h], xmm1
              vmovss  xmm0, dword ptr [rbp+57h+angles+8]
              vmovss  dword ptr [rsi+48h], xmm0
            }
            SV_LinkEntity(_RSI);
            number = _RSI->s.number;
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
            v17 = ++v39;
            ++v19;
          }
          ++v18;
        }
        while ( v18 < v40 );
        v7 = v42;
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
  int v22; 
  signed int v23; 
  unsigned __int64 v24; 
  unsigned int v25; 
  _QWORD *v29; 
  gentity_s *v30; 
  const DObj *ServerDObjForEnt; 
  unsigned __int64 v32; 
  signed int j; 
  unsigned int v34; 
  unsigned __int8 BoneIndex; 
  __int64 v36; 
  int v37; 
  unsigned int instanceId; 
  int NumRigidBodys; 
  hknpBodyId result; 
  hkMonitorStream *v41; 
  PhysicsAsset *physicsAsset; 
  gentity_s *ent; 
  __int64 v44; 
  hkMonitorStream *v45; 
  vec3_t position; 
  vec3_t v47; 
  vec4_t orientation; 
  vec4_t quat; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v51; 
  tmat43_t<vec3_t> out; 

  v44 = -2i64;
  physicsAsset = (PhysicsAsset *)physAsset;
  *(_QWORD *)position.v = physObj;
  ent = parentEntity;
  v6 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v8 = Value;
  v41 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_CreateKeyframedBoneMapping");
  v45 = v8;
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
      v37 = 0;
      v11 = 0;
      v12 = 1;
      v13 = physicsAsset;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v36) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v36) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v36) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v36) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v36) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v36) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, instanceId, v12)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 772, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( Physics_IsRigidBodyKeyframed((Physics_WorldId)v6, m_serialAndIndex) )
        {
          ++v10;
          if ( Physics_IsAssetBodyAnimationDriven(v13, v12) )
            ++v37;
          else
            ++v11;
        }
        ++v12;
      }
      while ( v12 < NumRigidBodys );
      v8 = v41;
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
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+190h+position]
            vmovss  [rbp+90h+var_B4], xmm0
            vmovss  xmm1, dword ptr [rsp+190h+position+4]
            vmovss  [rbp+90h+var_B0], xmm1
            vmovss  xmm0, dword ptr [rbp+90h+position+8]
            vmovss  [rbp+90h+var_AC], xmm0
          }
          MatrixInverseOrthogonal43(&axis, &out);
          v22 = 0;
          v23 = 1;
          v24 = 0i64;
          *(_QWORD *)position.v = 0i64;
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v6 > 7 )
            {
              LODWORD(v36) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v36) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
            {
              LODWORD(v36) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v36) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
            {
              LODWORD(v36) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v36) )
                __debugbreak();
            }
            v25 = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, instanceId, v23)->m_serialAndIndex;
            if ( (v25 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 818, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            if ( Physics_IsRigidBodyKeyframed((Physics_WorldId)v6, v25) && !Physics_IsAssetBodyAnimationDriven(physicsAsset, v23) )
            {
              Physics_GetRigidBodyTransform((const Physics_WorldId)v6, v25, &v47, &quat);
              QuatToAxis(&quat, (tmat33_t<vec3_t> *)&v51);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+90h+var_108]
                vmovss  [rbp+90h+var_84], xmm0
                vmovss  xmm1, dword ptr [rbp+90h+var_108+4]
                vmovss  [rbp+90h+var_80], xmm1
                vmovss  xmm0, dword ptr [rbp+90h+var_108+8]
                vmovss  [rbp+90h+var_7C], xmm0
              }
              if ( v24 >= *(_QWORD *)(v15 + 96) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v24 >= *(_QWORD *)(v15 + 96) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              *(_DWORD *)(*(_QWORD *)position.v + *(_QWORD *)(v15 + 88)) = v25;
              if ( (unsigned __int64)v22 >= *(_QWORD *)(v15 + 96) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( (unsigned __int64)v22 >= *(_QWORD *)(v15 + 96) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              MatrixMultiply43(&v51, &out, (tmat43_t<vec3_t> *)(52i64 * v22++ + *(_QWORD *)(v15 + 88) + 4));
              ++v24;
              *(_QWORD *)position.v += 52i64;
            }
            ++v23;
          }
          while ( v23 < NumRigidBodys );
          v8 = v41;
        }
        if ( v37 > 0 )
        {
          v29 = (_QWORD *)(v15 + 72);
          ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator>::reserve((ntl::array<PhysicsObjectBoneMapping,G_PhysicsObject_BoneMappingAllocator> *)(v15 + 72), v37);
          v30 = ent;
          ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
          if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 846, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
            __debugbreak();
          v32 = 0i64;
          for ( j = 1; j < NumRigidBodys; ++j )
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v6 > 7 )
            {
              LODWORD(v36) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v36) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
            {
              LODWORD(v36) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v36) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
            {
              LODWORD(v36) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v36) )
                __debugbreak();
            }
            v34 = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, instanceId, j)->m_serialAndIndex;
            if ( (v34 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 853, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
              __debugbreak();
            if ( Physics_IsRigidBodyKeyframed((Physics_WorldId)v6, v34) && Physics_IsAssetBodyAnimationDriven(physicsAsset, j) )
            {
              if ( v32 >= v29[1] )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v32 >= v29[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              *(_DWORD *)(*v29 + 8 * v32) = v34;
              BoneIndex = G_PhysicsObject_FindBoneIndex((Physics_WorldId)v6, v34, v30, ServerDObjForEnt);
              if ( v32 >= v29[1] )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                if ( v32 >= v29[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
                  __debugbreak();
              }
              *(_BYTE *)(*v29 + 8 * v32++ + 4) = BoneIndex;
            }
          }
          v8 = v41;
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
  __int64 v6; 
  unsigned int v10; 
  G_PhysicsObject *v11; 
  unsigned int v12; 
  unsigned int NumRigidBodys; 
  unsigned int RigidBodyID; 
  vec3_t aabbMina; 
  vec3_t aabbMaxa; 

  v6 = worldId;
  _RSI = aabbMax;
  _RDI = aabbMin;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2568, ASSERT_TYPE_ASSERT, "(ent != 0)", (const char *)&queryFormat, "ent != NULL") )
    __debugbreak();
  v10 = 0;
  *(_QWORD *)_RDI->v = 0i64;
  _RDI->v[2] = 0.0;
  *(_QWORD *)_RSI->v = 0i64;
  _RSI->v[2] = 0.0;
  v11 = G_PhysicsObject_Get(ent);
  if ( !v11 )
    return 0;
  v12 = v11->physicsInstances[v6];
  if ( v12 == -1 )
    return 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, v12);
  if ( !NumRigidBodys )
    return 0;
  __asm
  {
    vmovaps [rsp+0B8h+var_58], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  do
  {
    RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v6, v12, v10);
    if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2598, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rsp+0B8h+aabbMin], xmm6
      vmovss  dword ptr [rsp+0B8h+aabbMin+4], xmm6
      vmovss  dword ptr [rsp+0B8h+aabbMin+8], xmm6
      vmovss  dword ptr [rsp+0B8h+aabbMax], xmm6
      vmovss  dword ptr [rsp+0B8h+aabbMax+4], xmm6
      vmovss  dword ptr [rsp+0B8h+aabbMax+8], xmm6
    }
    Physics_GetRigidBodyAABB((Physics_WorldId)v6, RigidBodyID, &aabbMina, &aabbMaxa, worldSpace);
    if ( v10 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vminss  xmm1, xmm0, dword ptr [rsp+0B8h+aabbMin]
        vmovss  xmm2, dword ptr [rdi+4]
        vminss  xmm0, xmm2, dword ptr [rsp+0B8h+aabbMin+4]
        vmovss  dword ptr [rdi], xmm1
        vmovss  xmm1, dword ptr [rdi+8]
        vminss  xmm2, xmm1, dword ptr [rsp+0B8h+aabbMin+8]
        vmovss  dword ptr [rdi+4], xmm0
        vmovss  dword ptr [rdi+8], xmm2
        vmovss  xmm0, dword ptr [rsi]
        vmaxss  xmm1, xmm0, dword ptr [rsp+0B8h+aabbMax]
        vmovss  xmm2, dword ptr [rsi+4]
        vmaxss  xmm0, xmm2, dword ptr [rsp+0B8h+aabbMax+4]
        vmovss  dword ptr [rsi], xmm1
        vmovss  xmm1, dword ptr [rsp+0B8h+aabbMax+8]
        vmaxss  xmm2, xmm1, dword ptr [rsi+8]
        vmovss  dword ptr [rsi+8], xmm2
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0B8h+aabbMin]
        vmovss  xmm1, dword ptr [rsp+0B8h+aabbMin+4]
        vmovss  dword ptr [rdi], xmm0
        vmovss  xmm0, dword ptr [rsp+0B8h+aabbMin+8]
        vmovss  dword ptr [rdi+4], xmm1
        vmovss  xmm1, dword ptr [rsp+0B8h+aabbMax]
        vmovss  dword ptr [rdi+8], xmm0
        vmovss  xmm0, dword ptr [rsp+0B8h+aabbMax+4]
        vmovss  dword ptr [rsi], xmm1
        vmovss  xmm1, dword ptr [rsp+0B8h+aabbMax+8]
        vmovss  dword ptr [rsi+8], xmm1
      }
    }
    ++v10;
    __asm { vmovss  dword ptr [rsi+4], xmm0 }
  }
  while ( v10 < NumRigidBodys );
  __asm { vmovaps xmm6, [rsp+0B8h+var_58] }
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
  int WorldTagMatrix; 
  scr_string_t v23; 
  GHandler *Handler; 
  __int64 v26; 
  __int64 v27; 
  bool v28; 
  vec3_t outAngles; 
  tmat43_t<vec3_t> outTagMat; 
  WorldUpReferenceFrame v33; 

  v4 = entityQuat;
  v5 = entityOrigin;
  v6 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END);
  v7 = inputArray->array[0];
  v28 = v6;
  LODWORD(v8) = 0;
  while ( v7 )
  {
LABEL_8:
    v9 = __lzcnt(v7);
    v10 = v9 + 32 * v8;
    if ( v9 >= 0x20 )
    {
      LODWORD(v27) = 32;
      LODWORD(v26) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v26, v27) )
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
    if ( v28 )
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
          _RDI = &v14->client->ps;
          WorldTagMatrix = 0;
          if ( v14->model )
          {
            v23 = *(_DWORD *)(v20 + 24);
            if ( v23 != scr_const.tag_origin )
              WorldTagMatrix = G_Utils_DObjGetWorldTagMatrix(v14, v23, &outTagMat);
          }
          if ( !WorldTagMatrix )
          {
            AnglesAndOriginToMatrix43(&_RDI->viewangles, &_RDI->origin, &outTagMat);
            Handler = GHandler::getHandler();
            WorldUpReferenceFrame::WorldUpReferenceFrame(&v33, _RDI, Handler);
            __asm { vmovss  xmm1, dword ptr [rdi+1E8h]; height }
            WorldUpReferenceFrame::AddUpContribution(&v33, *(float *)&_XMM1, &outTagMat.m[3]);
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
  __int64 v27; 
  __int64 v28; 
  hkMonitorStream *v29; 
  vec3_t position; 
  vec4_t orientation; 

  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  v29 = Value;
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
              LODWORD(v28) = numBones;
              LODWORD(v27) = boneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1982, ASSERT_TYPE_ASSERT, "(unsigned)( mapping->boneIndex ) < (unsigned)( obj->numBones )", "mapping->boneIndex doesn't index obj->numBones\n\t%i not in [0, %i)", v27, v28) )
                __debugbreak();
            }
            if ( DObjSetSkelRotTransIndex(obj, partBits, m_buffer->boneIndex) )
            {
              _RDI = &RotTransArray[m_buffer->boneIndex];
              Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, m_buffer->bodyId, &position, &orientation);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+0B8h+position]
                vmovss  dword ptr [rdi+10h], xmm0
                vmovss  xmm1, dword ptr [rsp+0B8h+position+4]
                vmovss  dword ptr [rdi+14h], xmm1
                vmovss  xmm0, dword ptr [rsp+0B8h+position+8]
                vmovss  dword ptr [rdi+18h], xmm0
                vmovss  xmm1, dword ptr [rsp+0B8h+orientation]
                vmovss  dword ptr [rdi], xmm1
                vmovss  xmm0, dword ptr [rsp+0B8h+orientation+4]
                vmovss  dword ptr [rdi+4], xmm0
                vmovss  xmm1, dword ptr [rsp+0B8h+orientation+8]
                vmovss  dword ptr [rdi+8], xmm1
                vmovups xmm3, xmmword ptr [rdi]
                vinsertps xmm3, xmm3, dword ptr [rsp+0B8h+orientation+0Ch], 30h
                vmulps  xmm0, xmm3, xmm3
                vhaddps xmm1, xmm0, xmm0
                vhaddps xmm2, xmm1, xmm1
                vsqrtps xmm0, xmm2
                vdivps  xmm1, xmm3, xmm0
                vmovups xmmword ptr [rdi], xmm1
              }
              _RDI->transWeight = 2.0;
            }
            ++m_buffer;
          }
          while ( m_buffer != &v8->dynamicBoneMapping.m_data.m_buffer[v8->dynamicBoneMapping.m_data.m_size] );
          v7 = v29;
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

void __fastcall G_PhysicsObject_PostStepWorld_SetEntityTransforms(const Physics_WorldId worldId, const bitarray<2048> *inputArray, double _XMM2_8)
{
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  bool v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  G_PhysicsObject *v16; 
  __int64 v40; 
  __int64 v41; 
  vec3_t position; 
  vec3_t prevAngles; 
  vec3_t prevOrigin; 
  vec3_t angles; 
  vec4_t orientation; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v6 = inputArray->array[0];
  LODWORD(v7) = 0;
  v8 = worldId;
  __asm
  {
    vmovss  xmm6, cs:__real@41200000
    vmovss  xmm7, cs:__real@3dcccccd
  }
  v12 = Com_GameMode_SupportsFeature(WEAPON_LEAP_OUT);
  while ( v6 )
  {
LABEL_5:
    v13 = __lzcnt(v6);
    v14 = v13 + 32 * v7;
    if ( v13 >= 0x20 )
    {
      LODWORD(v41) = 32;
      LODWORD(v40) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v40, v41) )
        __debugbreak();
    }
    if ( (v6 & (0x80000000 >> v13)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v6 &= ~(0x80000000 >> v13);
    v15 = v14;
    v16 = &s_gentityPhyObjs[v14];
    if ( v16->mapping != PHYSICSOBJECT_MAPPING_PHYSICS_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1811, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_PHYSICS_AUTH") )
      __debugbreak();
    _RSI = &g_entities[v15];
    Physics_GetRigidBodyTransform((const Physics_WorldId)v8, v16->primaryBodies[v8], &position, &orientation);
    UnitQuatToAngles(&orientation, &angles);
    if ( v12 && _RSI->s.eType == ET_ITEM )
    {
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+position]
        vcvttss2si eax, xmm1
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, eax
        vmulss  xmm0, xmm2, xmm7
        vmulss  xmm2, xmm6, dword ptr [rsp+0E8h+position+4]
        vmovss  dword ptr [rsp+0E8h+position], xmm0
        vcvttss2si eax, xmm2
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm7
        vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+position+8]
        vmovss  dword ptr [rsp+0E8h+position+4], xmm1
        vcvttss2si eax, xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm2, xmm1, xmm7
        vmovss  dword ptr [rsp+0E8h+position+8], xmm2
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+130h]
      vmovss  dword ptr [rsp+0E8h+prevOrigin], xmm0
      vmovss  xmm1, dword ptr [rsi+134h]
      vmovss  dword ptr [rsp+0E8h+prevOrigin+4], xmm1
      vmovss  xmm0, dword ptr [rsi+138h]
      vmovss  dword ptr [rsp+0E8h+prevOrigin+8], xmm0
      vmovss  xmm1, dword ptr [rsi+13Ch]
      vmovss  dword ptr [rsp+0E8h+prevAngles], xmm1
      vmovss  xmm0, dword ptr [rsi+140h]
      vmovss  dword ptr [rsp+0E8h+prevAngles+4], xmm0
      vmovss  xmm1, dword ptr [rsi+144h]
      vmovss  dword ptr [rsp+0E8h+prevAngles+8], xmm1
    }
    G_SetOriginAndAngle(_RSI, &position, &angles, 0, 0);
    _RSI->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
    _RSI->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
    GMovingPlatforms::UpdateMoverPhysicsVelocity(_RSI, &prevOrigin, &prevAngles);
  }
  while ( 1 )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 0x40 )
      break;
    v6 = inputArray->array[v7];
    if ( v6 )
      goto LABEL_5;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_38]
    vmovaps xmm7, [rsp+0E8h+var_48]
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
  bitarray<2048> *v10; 
  __int64 v11; 
  __int64 v12; 
  int v14; 
  bitarray<2048> *v15; 
  unsigned int v16; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int v21; 
  G_PhysicsObject *v22; 
  unsigned int v23; 
  Physics_MovementType v26; 
  bool v27; 
  unsigned __int64 v28; 
  unsigned int v29; 
  float fmt; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  float v35; 
  __int64 v36; 
  __int64 v37; 

  v10 = outputNeedsWarpPhysObjs;
  v11 = 4i64;
  __asm { vmovaps [rsp+0A8h+var_48], xmm6 }
  v12 = 4i64;
  __asm { vmovaps [rsp+0A8h+var_58], xmm7 }
  v14 = 0;
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
    --v12;
  }
  while ( v12 );
  v15 = outputNeedsActivatePhysObjs;
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
    --v11;
  }
  while ( v11 );
  v16 = inputArray->array[0];
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm7, xmm7, xmm7
  }
  while ( v16 )
  {
LABEL_9:
    v20 = __lzcnt(v16);
    v21 = v20 + 32 * v14;
    if ( v20 >= 0x20 )
    {
      LODWORD(updateBroadphaseIfWarping) = 32;
      LODWORD(canWarp) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
        __debugbreak();
    }
    if ( (v16 & (0x80000000 >> v20)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v16 &= ~(0x80000000 >> v20);
    v22 = &s_gentityPhyObjs[v21];
    if ( v22->mapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1432, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH") )
      __debugbreak();
    v23 = v22->primaryBodies[worldId];
    if ( !Physics_IsRigidBodyKeyframed(worldId, v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1436, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyKeyframed( worldId, bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyKeyframed( worldId, bodyId )") )
      __debugbreak();
    __asm
    {
      vmovss  dword ptr [rsp+0A8h+var_70], xmm7
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rsp+0A8h+arg_8]
      vdivss  xmm1, xmm6, xmm0
      vmovss  dword ptr [rsp+0A8h+fmt], xmm1
    }
    v26 = Physics_KeyframeRigidBodyToFast(worldId, v23, &entityOrigin[v21], &entityQuat[v21], fmt, 0, 0, v35);
    v27 = v26 == Physics_MovementType_Keyframed;
    if ( v26 == Physics_MovementType_WarpRequired )
    {
      if ( v21 >= 0x800 )
      {
        LODWORD(v37) = 2048;
        LODWORD(v36) = v20 + 32 * v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v36, v37) )
          __debugbreak();
      }
      v28 = (unsigned __int64)v21 >> 5;
      v29 = 0x80000000 >> (v21 & 0x1F);
      outputNeedsWarpPhysObjs->array[v28] |= v29;
    }
    else
    {
      if ( v21 >= 0x800 )
      {
        LODWORD(v37) = 2048;
        LODWORD(v36) = v20 + 32 * v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v36, v37) )
          __debugbreak();
      }
      v28 = (unsigned __int64)v21 >> 5;
      v29 = 0x80000000 >> (v21 & 0x1F);
      outputNeedsWarpPhysObjs->array[v28] &= ~v29;
    }
    if ( v27 )
    {
      if ( v21 >= 0x800 )
      {
        LODWORD(v37) = 2048;
        LODWORD(v36) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v36, v37) )
          __debugbreak();
      }
      outputNeedsActivatePhysObjs->array[v28] |= v29;
    }
    else
    {
      if ( v21 >= 0x800 )
      {
        LODWORD(v37) = 2048;
        LODWORD(v36) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v36, v37) )
          __debugbreak();
      }
      outputNeedsActivatePhysObjs->array[v28] &= ~v29;
    }
  }
  while ( 1 )
  {
    v19 = (unsigned int)(v14 + 1);
    v14 = v19;
    if ( (unsigned int)v19 >= 0x40 )
      break;
    v16 = inputArray->array[v19];
    if ( v16 )
      goto LABEL_9;
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_48]
    vmovaps xmm7, [rsp+0A8h+var_58]
  }
}

/*
==============
G_PhysicsObject_PreStepWorld_KeyframeBones
==============
*/
__int64 G_PhysicsObject_PreStepWorld_KeyframeBones(const Physics_WorldId worldId, int numSteps, const bitarray<2048> *inputArray, const vec3_t *const entityOrigin, const vec4_t *const entityQuat)
{
  unsigned __int8 v17; 
  unsigned int v18; 
  __int64 v19; 
  unsigned int v22; 
  int v23; 
  char v24; 
  __int64 v25; 
  G_PhysicsObject *v26; 
  const gentity_s *v27; 
  PhysicsObjectBoneMapping *m_buffer; 
  Physics_MovementType v66; 
  __int64 v67; 
  float fmt; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  float v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  unsigned int v88; 
  int v89; 
  int v90; 
  const bitarray<2048> *v92; 
  tmat33_t<vec3_t> in1; 
  vec4_t orientationAsQuat; 
  tmat33_t<vec3_t> out; 
  vec3_t position; 
  tmat43_t<vec3_t> result; 
  char v99; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
    vmovaps xmmword ptr [rax-0C8h], xmm14
    vmovaps xmmword ptr [rax-0D8h], xmm15
  }
  v17 = 0;
  v18 = inputArray->array[0];
  LODWORD(v19) = 0;
  __asm { vmovss  xmm15, cs:__real@3f800000 }
  v89 = 0;
  v92 = inputArray;
  v88 = inputArray->array[0];
  __asm { vxorps  xmm14, xmm14, xmm14 }
  while ( 1 )
  {
    if ( v18 )
    {
LABEL_5:
      v22 = __lzcnt(v18);
      v23 = v22 + 32 * v19;
      v90 = v23;
      if ( v22 >= 0x20 )
      {
        LODWORD(updateBroadphaseIfWarping) = 32;
        LODWORD(canWarp) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( (v18 & (0x80000000 >> v22)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v18 &= ~(0x80000000 >> v22);
      v24 = 1;
      v88 = v18;
    }
    else
    {
      while ( 1 )
      {
        v19 = (unsigned int)(v19 + 1);
        v89 = v19;
        if ( (unsigned int)v19 >= 0x40 )
          break;
        v18 = inputArray->array[v19];
        v88 = v18;
        if ( v18 )
          goto LABEL_5;
      }
      v23 = v90;
      v24 = 0;
    }
    if ( !v24 )
      break;
    v25 = v23;
    v26 = &s_gentityPhyObjs[v23];
    if ( v26->mapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1518, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH") )
      __debugbreak();
    if ( !v26->keyframedBoneMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1519, ASSERT_TYPE_ASSERT, "(physicsObject->keyframedBoneMapping.size() > 0)", (const char *)&queryFormat, "physicsObject->keyframedBoneMapping.size() > 0") )
      __debugbreak();
    v27 = &g_entities[v25];
    QuatAndOriginToMatrix43(&entityQuat[v25], &entityOrigin[v25], &result);
    if ( !Com_GetServerDObjForEnt(v27) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1529, ASSERT_TYPE_ASSERT, "( Com_GetServerDObjForEnt( gEntity ) )", (const char *)&queryFormat, "Com_GetServerDObjForEnt( gEntity )") )
      __debugbreak();
    m_buffer = v26->keyframedBoneMapping.m_data.m_buffer;
    inputArray = v92;
    if ( m_buffer != &m_buffer[v26->keyframedBoneMapping.m_data.m_size] )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rsp+1E0h+worldId]
        vdivss  xmm13, xmm15, xmm0
      }
      do
      {
        if ( (m_buffer->bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1537, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( boneMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( boneMapping->bodyId )") )
          __debugbreak();
        _RAX = G_Utils_DObjGetLocalBoneIndexMatrix(v27, m_buffer->boneIndex);
        _RBX = _RAX;
        __asm
        {
          vmovss  xmm0, dword ptr [rax]
          vmovss  [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v83 & 0x7F800000) == 2139095040 )
          goto LABEL_45;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4]
          vmovss  [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v84 & 0x7F800000) == 2139095040 )
          goto LABEL_45;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v85 & 0x7F800000) == 2139095040 )
          goto LABEL_45;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0Ch]
          vmovss  [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v86 & 0x7F800000) == 2139095040 )
        {
LABEL_45:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+1Ch]
          vmovss  [rsp+1E0h+var_1A0], xmm0
        }
        if ( (v87 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+1Ch]
          vmulss  xmm2, xmm0, dword ptr [rbx]
          vmovss  xmm3, dword ptr [rbx+4]
          vmovss  xmm5, dword ptr [rbx+8]
          vmulss  xmm12, xmm2, dword ptr [rbx]
          vmulss  xmm4, xmm3, xmm0
          vmulss  xmm6, xmm5, xmm0
          vmovss  xmm0, dword ptr [rbx+0Ch]
          vmulss  xmm10, xmm2, xmm0
          vmulss  xmm7, xmm2, xmm3
          vmulss  xmm11, xmm4, xmm3
          vmulss  xmm9, xmm2, xmm5
          vmulss  xmm2, xmm6, xmm0
          vmulss  xmm8, xmm4, xmm5
          vmulss  xmm4, xmm4, xmm0
          vmulss  xmm3, xmm6, xmm5
          vaddss  xmm1, xmm2, xmm7
          vmovss  dword ptr [rsp+1E0h+in1+4], xmm1
          vsubss  xmm1, xmm7, xmm2
          vmovss  dword ptr [rsp+1E0h+in1+0Ch], xmm1
          vaddss  xmm1, xmm8, xmm10
          vaddss  xmm0, xmm3, xmm11
          vsubss  xmm0, xmm15, xmm0
          vmovss  dword ptr [rsp+1E0h+in1], xmm0
          vsubss  xmm0, xmm9, xmm4
          vmovss  dword ptr [rsp+1E0h+in1+8], xmm0
          vaddss  xmm0, xmm3, xmm12
          vsubss  xmm0, xmm15, xmm0
          vmovss  dword ptr [rbp+0E0h+in1+10h], xmm0
          vaddss  xmm0, xmm4, xmm9
          vmovss  dword ptr [rbp+0E0h+in1+18h], xmm0
          vaddss  xmm0, xmm11, xmm12
          vmovss  dword ptr [rbp+0E0h+in1+14h], xmm1
          vsubss  xmm0, xmm15, xmm0
          vsubss  xmm1, xmm8, xmm10
          vmovss  dword ptr [rbp+0E0h+in1+20h], xmm0
          vmovss  dword ptr [rbp+0E0h+in1+1Ch], xmm1
        }
        MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&result, &out);
        MatrixTransformVector43(&_RBX->trans, &result, &position);
        AxisToQuat(&out, &orientationAsQuat);
        if ( !Physics_IsRigidBodyKeyframed(worldId, m_buffer->bodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1560, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyKeyframed( worldId, boneMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyKeyframed( worldId, boneMapping->bodyId )") )
          __debugbreak();
        __asm
        {
          vmovss  [rsp+1E0h+var_1A8], xmm14
          vmovss  dword ptr [rsp+1E0h+fmt], xmm13
        }
        v66 = Physics_KeyframeRigidBodyTo(worldId, m_buffer->bodyId, &position, &orientationAsQuat, fmt, 1, 0, v82);
        ++m_buffer;
        v17 |= v66 == Physics_MovementType_Warped;
      }
      while ( m_buffer != &v26->keyframedBoneMapping.m_data.m_buffer[v26->keyframedBoneMapping.m_data.m_size] );
      LODWORD(v19) = v89;
      v18 = v88;
      inputArray = v92;
    }
  }
  v67 = v17;
  _R11 = &v99;
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
  return v67;
}

/*
==============
G_PhysicsObject_PreStepWorld_KeyframeOffsets
==============
*/
__int64 G_PhysicsObject_PreStepWorld_KeyframeOffsets(const Physics_WorldId worldId, int numSteps, const bitarray<2048> *inputArray, const vec3_t *const entityOrigin, const vec4_t *const entityQuat)
{
  unsigned __int8 v10; 
  unsigned int v11; 
  __int64 v12; 
  const bitarray<2048> *v14; 
  int v17; 
  unsigned int v18; 
  char v19; 
  G_PhysicsObject *v20; 
  PhysicsObjectOffsetMapping *m_buffer; 
  Physics_MovementType v24; 
  __int64 v25; 
  float fmt; 
  __int64 canWarp; 
  __int64 updateBroadphaseIfWarping; 
  float v33; 
  int v34; 
  int v35; 
  vec4_t orientationAsQuat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> result; 
  char v41; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  v10 = 0;
  v11 = inputArray->array[0];
  LODWORD(v12) = 0;
  __asm { vmovss  xmm8, cs:__real@3f800000 }
  v34 = 0;
  v14 = inputArray;
  __asm { vxorps  xmm7, xmm7, xmm7 }
LABEL_2:
  v17 = v35;
  while ( 1 )
  {
    if ( v11 )
    {
LABEL_6:
      v18 = __lzcnt(v11);
      v17 = v18 + 32 * v12;
      v35 = v17;
      if ( v18 >= 0x20 )
      {
        LODWORD(updateBroadphaseIfWarping) = 32;
        LODWORD(canWarp) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", canWarp, updateBroadphaseIfWarping) )
          __debugbreak();
      }
      if ( (v11 & (0x80000000 >> v18)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v11 &= ~(0x80000000 >> v18);
      v19 = 1;
    }
    else
    {
      while ( 1 )
      {
        v12 = (unsigned int)(v12 + 1);
        v34 = v12;
        if ( (unsigned int)v12 >= 0x40 )
          break;
        v11 = v14->array[v12];
        if ( v11 )
          goto LABEL_6;
      }
      v19 = 0;
    }
    if ( !v19 )
      break;
    v20 = &s_gentityPhyObjs[v17];
    if ( v20->mapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1585, ASSERT_TYPE_ASSERT, "(physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH)", (const char *)&queryFormat, "physicsObject->mapping == PHYSICSOBJECT_MAPPING_ENTITY_AUTH") )
      __debugbreak();
    if ( !v20->keyframedOffsetMapping.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1586, ASSERT_TYPE_ASSERT, "(physicsObject->keyframedOffsetMapping.size() > 0)", (const char *)&queryFormat, "physicsObject->keyframedOffsetMapping.size() > 0") )
      __debugbreak();
    QuatAndOriginToMatrix43(&entityQuat[v17], &entityOrigin[v17], &result);
    m_buffer = v20->keyframedOffsetMapping.m_data.m_buffer;
    if ( m_buffer != &m_buffer[v20->keyframedOffsetMapping.m_data.m_size] )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rsp+148h+var_100]
        vdivss  xmm6, xmm8, xmm0
      }
      do
      {
        if ( (m_buffer->bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1598, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( offsetMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( offsetMapping->bodyId )") )
          __debugbreak();
        MatrixMultiply43(&m_buffer->rootOffset, &result, &out);
        AxisToQuat((const tmat33_t<vec3_t> *)&out, &orientationAsQuat);
        if ( !Physics_IsRigidBodyKeyframed(worldId, m_buffer->bodyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1618, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyKeyframed( worldId, offsetMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyKeyframed( worldId, offsetMapping->bodyId )") )
          __debugbreak();
        __asm
        {
          vmovss  [rsp+148h+var_110], xmm7
          vmovss  dword ptr [rsp+148h+fmt], xmm6
        }
        v24 = Physics_KeyframeRigidBodyTo(worldId, m_buffer->bodyId, &out.m[3], &orientationAsQuat, fmt, 1, 0, v33);
        ++m_buffer;
        v10 |= v24 == Physics_MovementType_Warped;
      }
      while ( m_buffer != &v20->keyframedOffsetMapping.m_data.m_buffer[v20->keyframedOffsetMapping.m_data.m_size] );
      LODWORD(v12) = v34;
      v14 = inputArray;
      goto LABEL_2;
    }
  }
  v25 = v10;
  _R11 = &v41;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return v25;
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
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  __int64 v15; 
  G_PhysicsObject *v16; 
  unsigned int v17; 
  unsigned int v18; 
  gentity_s *v19; 
  const HavokPhysicsWorld *ConstWorld; 
  const HavokPhysicsWorld *v21; 
  unsigned int BodyCount; 
  __int64 v23; 
  __int64 v24; 
  const vec4_t *v25; 
  const vec3_t *v26; 
  unsigned int v32; 
  unsigned int v33; 
  const HavokPhysicsWorld *v34; 
  unsigned int v35; 
  const HavokPhysicsWorld *v36; 
  unsigned int v37; 
  unsigned int m_serialAndIndex; 
  unsigned int v39; 
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v41; 
  __int64 activate; 
  __int64 v47; 
  int v48; 
  unsigned int v49; 
  unsigned int instanceId; 
  const bitarray<2048> *v51; 
  hknpBodyId result; 
  hknpBodyId v53; 
  hknpBodyId v54; 
  const vec3_t *v55; 
  vec3_t position; 
  vec4_t out; 

  __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
  v7 = inputArray->array[0];
  __asm { vmovss  xmm6, cs:__real@42000000 }
  v9 = fromWorldId;
  LODWORD(v10) = 0;
  v48 = 0;
  v55 = entityOrigin;
  v51 = inputArray;
  v11 = worldId;
  while ( v7 )
  {
LABEL_5:
    v12 = __lzcnt(v7);
    v13 = v12 + 32 * v10;
    if ( v12 >= 0x20 )
    {
      LODWORD(v47) = 32;
      LODWORD(activate) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", activate, v47) )
        __debugbreak();
    }
    v14 = 0x80000000 >> v12;
    if ( (v7 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    LODWORD(v10) = v48;
    inputArray = v51;
    v15 = v13;
    v16 = &s_gentityPhyObjs[v13];
    v7 &= ~v14;
    v49 = v7;
    v17 = v16->physicsInstances[v11];
    instanceId = v17;
    if ( v17 != -1 )
    {
      if ( Physics_IsInstanceDetailBounded((const Physics_WorldId)v11, v17) )
      {
        v18 = v16->primaryBodies[v11];
        v19 = &g_entities[v15];
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v11 > 7 )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v47) )
            __debugbreak();
        }
        if ( g_physicsServerWorldsCreated )
          goto LABEL_28;
        if ( (int)v11 >= 0 )
        {
          if ( (int)v11 <= 1 )
          {
            LODWORD(v47) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v47) )
              __debugbreak();
          }
LABEL_28:
          if ( (unsigned int)v11 <= 7 )
            goto LABEL_31;
        }
        LODWORD(v47) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
          __debugbreak();
LABEL_31:
        ConstWorld = HavokPhysics_GetConstWorld((Physics_WorldId)v11);
        if ( !ConstWorld->world )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v47) )
            __debugbreak();
        }
        if ( v16->numBodies[v11] != HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2108, ASSERT_TYPE_ASSERT, "( physicsObject->numBodies[worldId] == Physics_GetNumRigidBodys( worldId, physicsInstance ) )", (const char *)&queryFormat, "physicsObject->numBodies[worldId] == Physics_GetNumRigidBodys( worldId, physicsInstance )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v11 > 7 )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v47) )
            __debugbreak();
        }
        if ( g_physicsServerWorldsCreated )
          goto LABEL_52;
        if ( (int)v11 >= 0 )
        {
          if ( (int)v11 <= 1 )
          {
            LODWORD(v47) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v47) )
              __debugbreak();
          }
LABEL_52:
          if ( (unsigned int)v11 <= 7 )
            goto LABEL_55;
        }
        LODWORD(v47) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
          __debugbreak();
LABEL_55:
        v21 = HavokPhysics_GetConstWorld((Physics_WorldId)v11);
        if ( !v21->world )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v47) )
            __debugbreak();
        }
        BodyCount = HavokPhysicsInstanceManager_GetBodyCount(&v21->instanceManager, v17);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v11 > 7 )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v47) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v11 <= 1 )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v47) )
            __debugbreak();
        }
        if ( v18 != HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v11, v17, BodyCount - 1)->m_serialAndIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2109, ASSERT_TYPE_ASSERT, "( toBodyId == Physics_GetRigidBodyID( worldId, physicsInstance, Physics_GetNumRigidBodys( worldId, physicsInstance ) - 1 ) )", (const char *)&queryFormat, "toBodyId == Physics_GetRigidBodyID( worldId, physicsInstance, Physics_GetNumRigidBodys( worldId, physicsInstance ) - 1 )") )
          __debugbreak();
        v23 = v15;
        v24 = v15;
        v25 = &entityQuat[v23];
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\g_physicsobject.inl", 14, ASSERT_TYPE_ASSERT, "(physicsObject)", (const char *)&queryFormat, "physicsObject") )
          __debugbreak();
        v26 = v55;
        _R9 = &v16->detailCache.orientationAsQuat;
        v16->detailCache.position.v[0] = v55[v24].v[0];
        v16->detailCache.position.v[1] = v26[v24].v[1];
        v16->detailCache.position.v[2] = v26[v24].v[2];
        if ( ((v19->r.modelType - 1) & 0xFD) != 0 )
        {
          _R9->v[0] = v25->v[0];
          v16->detailCache.orientationAsQuat.v[1] = v25->v[1];
          v16->detailCache.orientationAsQuat.v[2] = v25->v[2];
          v16->detailCache.orientationAsQuat.v[3] = v25->v[3];
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
            vmovss  dword ptr [r9], xmm0
            vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
            vmovss  dword ptr [r9+4], xmm1
            vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
            vmovss  dword ptr [r9+8], xmm0
            vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
            vmovss  dword ptr [r9+0Ch], xmm1
          }
        }
        v16->detailCache.cached = 0;
        if ( Physics_WarpDetailRigidBodyTo((Physics_WorldId)v11, v18, &v16->detailCache.position, _R9, 0, 0) != Physics_MovementType_Warped )
          goto LABEL_141;
        Physics_AddRigidBodyIdToArray(warpedBodies, v18);
        LODWORD(v10) = v48;
        inputArray = v51;
        v7 = v49;
      }
      else
      {
        v32 = v16->physicsInstances[v9];
        if ( v32 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2125, ASSERT_TYPE_ASSERT, "( fromPhysicsInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "fromPhysicsInstance != PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        v33 = v16->numBodies[v11];
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v11 > 7 )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v47) )
            __debugbreak();
        }
        if ( g_physicsServerWorldsCreated )
          goto LABEL_101;
        if ( (int)v11 >= 0 )
        {
          if ( (int)v11 <= 1 )
          {
            LODWORD(v47) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v47) )
              __debugbreak();
          }
LABEL_101:
          if ( (unsigned int)v11 <= 7 )
            goto LABEL_104;
        }
        LODWORD(v47) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
          __debugbreak();
LABEL_104:
        v34 = HavokPhysics_GetConstWorld((Physics_WorldId)v11);
        if ( !v34->world )
        {
          LODWORD(v47) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v47) )
            __debugbreak();
        }
        v35 = instanceId;
        if ( v33 != HavokPhysicsInstanceManager_GetBodyCount(&v34->instanceManager, instanceId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2129, ASSERT_TYPE_ASSERT, "( numBodies == Physics_GetNumRigidBodys( worldId, physicsInstance ) )", (const char *)&queryFormat, "numBodies == Physics_GetNumRigidBodys( worldId, physicsInstance )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v9 > 7 )
        {
          LODWORD(v47) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
            __debugbreak();
        }
        if ( v32 == -1 )
        {
          LODWORD(v47) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v47) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
        {
          LODWORD(v47) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v47) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          if ( (int)v9 < 0 )
            goto LABEL_129;
          if ( (int)v9 <= 1 )
          {
            LODWORD(v47) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v47) )
              __debugbreak();
          }
        }
        if ( (unsigned int)v9 > 7 )
        {
LABEL_129:
          LODWORD(v47) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
            __debugbreak();
        }
        if ( v32 == -1 )
        {
          LODWORD(v47) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v47) )
            __debugbreak();
        }
        v36 = HavokPhysics_GetConstWorld((Physics_WorldId)v9);
        if ( !v36->world )
        {
          LODWORD(v47) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v47) )
            __debugbreak();
        }
        if ( v33 != HavokPhysicsInstanceManager_GetBodyCount(&v36->instanceManager, v32) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2130, ASSERT_TYPE_ASSERT, "( numBodies == Physics_GetNumRigidBodys( fromWorldId, fromPhysicsInstance ) )", (const char *)&queryFormat, "numBodies == Physics_GetNumRigidBodys( fromWorldId, fromPhysicsInstance )") )
          __debugbreak();
        v37 = 0;
        if ( v33 )
        {
          do
          {
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v9 > 7 )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
                __debugbreak();
            }
            if ( v32 == -1 )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v47) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v47) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v47) )
                __debugbreak();
            }
            m_serialAndIndex = HavokPhysics_GetRigidBodyID(&v53, (const Physics_WorldId)v9, v32, v37)->m_serialAndIndex;
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v11 > 7 )
            {
              LODWORD(v47) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
            {
              LODWORD(v47) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v47) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v11 <= 1 )
            {
              LODWORD(v47) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v47) )
                __debugbreak();
            }
            v39 = HavokPhysics_GetRigidBodyID(&v54, (const Physics_WorldId)v11, v35, v37)->m_serialAndIndex;
            if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
              __debugbreak();
            if ( (unsigned int)v9 > 7 )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
                __debugbreak();
            }
            if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v47) )
                __debugbreak();
            }
            if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v47) )
                __debugbreak();
            }
            if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v47) )
                __debugbreak();
            }
            if ( (unsigned int)v9 > 7 )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v47) )
                __debugbreak();
            }
            if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v47) )
                __debugbreak();
            }
            world = HavokPhysics_GetConstWorld((Physics_WorldId)v9)->world;
            if ( !world )
            {
              LODWORD(v47) = v9;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v47) )
                __debugbreak();
            }
            v41 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, m_serialAndIndex);
            __asm
            {
              vmulss  xmm1, xmm6, dword ptr [rax+30h]
              vmovss  dword ptr [rsp+0E8h+position], xmm1
              vmulss  xmm0, xmm6, dword ptr [rax+34h]
              vmovss  dword ptr [rsp+0E8h+position+4], xmm0
              vmulss  xmm2, xmm6, dword ptr [rax+38h]
              vmovss  dword ptr [rsp+0E8h+position+8], xmm2
            }
            Axis34ToQuat(v41, &out);
            if ( Physics_WarpDetailRigidBodyTo((Physics_WorldId)v11, v39, &position, &out, 0, 0) == Physics_MovementType_Warped )
              Physics_AddRigidBodyIdToArray(warpedBodies, v39);
            v35 = instanceId;
            ++v37;
          }
          while ( v37 < v33 );
          LODWORD(v10) = v48;
          v7 = v49;
          inputArray = v51;
        }
        else
        {
LABEL_141:
          LODWORD(v10) = v48;
          v7 = v49;
          inputArray = v51;
        }
      }
    }
  }
  while ( 1 )
  {
    v10 = (unsigned int)(v10 + 1);
    v48 = v10;
    if ( (unsigned int)v10 >= 0x40 )
      break;
    v7 = inputArray->array[v10];
    if ( v7 )
      goto LABEL_5;
  }
  __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
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

  _R14 = data;
  Ref = Physics_GetRef(data->worldId, data->bodyIds[0]);
  v3 = Physics_GetRef(_R14->worldId, _R14->bodyIds[1]);
  EntityNum = Physics_GetEntityNum(Ref);
  v5 = Physics_GetEntityNum(v3);
  if ( (_DWORD)EntityNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2494, ASSERT_TYPE_ASSERT, "( entNum1 != ENTITYNUM_NONE )", (const char *)&queryFormat, "entNum1 != ENTITYNUM_NONE") )
    __debugbreak();
  v6 = &g_entities[EntityNum];
  v7 = &g_entities[v5];
  v8 = ScriptContext_Server();
  GScr_AddEntity(v7);
  __asm { vmovss  xmm1, dword ptr [r14+2Ch]; value }
  Scr_AddFloat(v8, *(float *)&_XMM1);
  Scr_AddVector(v8, _R14->normal.v);
  Scr_AddVector(v8, _R14->position.v);
  Scr_AddInt(v8, _R14->surfaceFlagData[1]);
  Scr_AddInt(v8, _R14->surfaceFlagData[0]);
  Scr_AddInt(v8, _R14->bodyIds[1]);
  Scr_AddInt(v8, _R14->bodyIds[0]);
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
  __int64 v12; 
  DObjPartBits **v13; 
  __int64 v14; 
  __int64 result; 
  char *Value; 
  unsigned int *v18; 
  unsigned int v19; 
  _QWORD *v20; 
  char *v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  ThreadContext CurrentThreadContext; 
  unsigned int v25; 
  const gentity_s *v26; 
  DObj *v27; 
  Physics_WorldId v28; 
  bool v29; 
  bool v30; 
  PhysicsObjectBoneMapping *m_buffer; 
  DObjPartBits *v119; 
  unsigned __int64 v120; 
  unsigned int v121; 
  DObjPartBits *v122; 
  __int64 activate; 
  double activatea; 
  __int64 v133; 
  double v134; 
  __int64 v135; 
  double v136; 
  __int64 v137; 
  double v138; 
  double v139; 
  int v140; 
  int v141; 
  int v142; 
  int v143; 
  int v144; 
  unsigned int v145; 
  unsigned int v147; 
  const gentity_s *v149; 
  DObj *ServerDObjForEntnum; 
  tmat43_t<vec3_t> in2; 
  tmat33_t<vec3_t> in1; 
  vec4_t orientationAsQuat; 
  tmat33_t<vec3_t> out; 
  vec3_t position; 

  v12 = entNum;
  v13 = partBits;
  v14 = worldId;
  _RSI = G_PhysicsObject_Get(entNum);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2284, ASSERT_TYPE_ASSERT, "( physObj )", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  *v13 = &_RSI->detailCache.hideBits;
  if ( _RSI->detailCache.cached )
    return _RSI->physicsInstances[v14];
  __asm
  {
    vmovaps [rsp+1D0h+var_40], xmm6
    vmovaps [rsp+1D0h+var_50], xmm7
    vmovaps [rsp+1D0h+var_60], xmm8
    vmovaps [rsp+1D0h+var_70], xmm9
    vmovaps [rsp+1D0h+var_80], xmm10
    vmovaps [rsp+1D0h+var_90], xmm11
    vmovaps [rsp+1D0h+var_A0], xmm12
    vmovaps [rsp+1D0h+var_B0], xmm13
  }
  Value = (char *)Sys_GetValue(0);
  v18 = (unsigned int *)(Value + 32696);
  if ( (unsigned int)(*((_DWORD *)Value + 8174) + 1) >= 3 )
  {
    LODWORD(activate) = *((_DWORD *)Value + 8174) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", activate, 3) )
      __debugbreak();
  }
  v19 = *v18 + 1;
  *v18 = v19;
  if ( v19 >= 3 )
  {
    LODWORD(v133) = 3;
    LODWORD(activate) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", activate, v133) )
      __debugbreak();
  }
  v20 = Value + 2088;
  v21 = Value + 40;
  if ( *v20 < (unsigned __int64)v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v20 += 8i64;
  if ( *v20 >= (unsigned __int64)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v20 = v18;
  if ( *v20 <= (unsigned __int64)v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v22 = (int)*v18;
  v23 = __rdtsc();
  v18[v22 + 2] = v23;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  v25 = 0;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 765, NULL, 0);
  v26 = &g_entities[v12];
  v149 = v26;
  ServerDObjForEntnum = Com_GetServerDObjForEntnum(v12);
  v27 = ServerDObjForEntnum;
  if ( !ServerDObjForEntnum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2302, ASSERT_TYPE_ASSERT, "( dobj )", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v28 = worldId;
  v147 = _RSI->physicsInstances[worldId];
  v29 = v147 != -1;
  if ( v147 == -1 )
  {
    v30 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2306, ASSERT_TYPE_ASSERT, "( toPhysicsInstance != 0xFFFFFFFF )", (const char *)&queryFormat, "toPhysicsInstance != PHYSICSINSTANCEID_INVALID");
    v29 = 0;
    if ( v30 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm4, dword ptr [rsi+98h]
    vmovss  xmm5, dword ptr [rsi+94h]
    vmovss  xmm6, dword ptr [rsi+9Ch]
    vmovss  xmm7, dword ptr [rsi+0A0h]
    vmovss  xmm13, cs:__real@3f800000
    vmulss  xmm1, xmm5, xmm5
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm3, xmm0
    vsubss  xmm1, xmm2, xmm13
    vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm1, cs:__real@3b03126f
  }
  if ( !v29 )
  {
    __asm
    {
      vsqrtss xmm0, xmm2, xmm2
      vcvtss2sd xmm1, xmm0, xmm0
      vmovsd  [rsp+1D0h+var_188], xmm1
      vcvtss2sd xmm0, xmm4, xmm4
      vcvtss2sd xmm2, xmm7, xmm7
      vmovsd  [rsp+1D0h+var_190], xmm2
      vcvtss2sd xmm3, xmm6, xmm6
      vmovsd  [rsp+1D0h+var_198], xmm3
      vmovsd  [rsp+1D0h+var_1A0], xmm0
      vcvtss2sd xmm4, xmm5, xmm5
      vmovsd  qword ptr [rsp+1D0h+activate], xmm4
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 770, ASSERT_TYPE_ASSERT, "( Vec4IsNormalized( quat ) )", "(%g, %g, %g, %g) len: %g", activatea, v134, v136, v138, v139) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+98h]
    vmovss  xmm4, dword ptr [rsi+9Ch]
    vmovss  xmm0, dword ptr [rsi+94h]
    vmovss  xmm3, dword ptr [rsi+0A0h]
    vmovss  xmm5, cs:__real@40000000
    vmulss  xmm1, xmm0, xmm5
    vmulss  xmm12, xmm0, xmm1
    vmulss  xmm9, xmm4, xmm1
    vmulss  xmm6, xmm2, xmm1
    vmulss  xmm10, xmm3, xmm1
    vmulss  xmm0, xmm2, xmm5
    vmulss  xmm11, xmm2, xmm0
    vmulss  xmm8, xmm4, xmm0
    vmulss  xmm7, xmm3, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmulss  xmm2, xmm3, xmm0
    vmulss  xmm5, xmm4, xmm0
    vaddss  xmm1, xmm5, xmm11
    vsubss  xmm0, xmm13, xmm1
    vmovss  dword ptr [rsp+1D0h+in2], xmm0
    vsubss  xmm0, xmm9, xmm7
    vmovss  dword ptr [rbp+0D0h+in2+8], xmm0
    vaddss  xmm1, xmm2, xmm6
    vmovss  dword ptr [rsp+1D0h+in2+4], xmm1
    vsubss  xmm1, xmm6, xmm2
    vmovss  dword ptr [rbp+0D0h+in2+0Ch], xmm1
    vaddss  xmm1, xmm8, xmm10
    vmovss  dword ptr [rbp+0D0h+in2+14h], xmm1
    vsubss  xmm1, xmm8, xmm10
    vmovss  dword ptr [rbp+0D0h+in2+1Ch], xmm1
    vaddss  xmm0, xmm5, xmm12
    vsubss  xmm0, xmm13, xmm0
    vmovss  dword ptr [rbp+0D0h+in2+10h], xmm0
    vaddss  xmm0, xmm7, xmm9
    vmovss  dword ptr [rbp+0D0h+in2+18h], xmm0
    vaddss  xmm0, xmm11, xmm12
    vsubss  xmm0, xmm13, xmm0
    vmovss  dword ptr [rbp+0D0h+in2+20h], xmm0
    vmovss  xmm1, dword ptr [rsi+88h]
    vmovss  [rbp+0D0h+var_134], xmm1
    vmovss  xmm0, dword ptr [rsi+8Ch]
    vmovss  [rbp+0D0h+var_130], xmm0
    vmovss  xmm1, dword ptr [rsi+90h]
    vmovss  [rbp+0D0h+var_12C], xmm1
  }
  m_buffer = _RSI->detailBoneMapping.m_data.m_buffer;
  if ( m_buffer != &m_buffer[_RSI->detailBoneMapping.m_data.m_size] )
  {
    do
    {
      if ( (m_buffer->bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 2320, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( boneMapping->bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( boneMapping->bodyId )") )
        __debugbreak();
      _RAX = G_Utils_DObjGetLocalBoneIndexMatrix(v26, m_buffer->boneIndex);
      _RBX = _RAX;
      __asm
      {
        vmovss  xmm0, dword ptr [rax]
        vmovss  [rsp+1D0h+var_180], xmm0
      }
      if ( (v140 & 0x7F800000) == 2139095040 )
        goto LABEL_62;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+4]
        vmovss  [rsp+1D0h+var_180], xmm0
      }
      if ( (v141 & 0x7F800000) == 2139095040 )
        goto LABEL_62;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+8]
        vmovss  [rsp+1D0h+var_180], xmm0
      }
      if ( (v142 & 0x7F800000) == 2139095040 )
        goto LABEL_62;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vmovss  [rsp+1D0h+var_180], xmm0
      }
      if ( (v143 & 0x7F800000) == 2139095040 )
      {
LABEL_62:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vmovss  [rsp+1D0h+var_180], xmm0
      }
      if ( (v144 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+1Ch]
        vmulss  xmm2, xmm0, dword ptr [rbx]
        vmovss  xmm3, dword ptr [rbx+4]
        vmovss  xmm5, dword ptr [rbx+8]
        vmulss  xmm12, xmm2, dword ptr [rbx]
        vmulss  xmm4, xmm3, xmm0
        vmulss  xmm6, xmm5, xmm0
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vmulss  xmm10, xmm0, xmm2
        vmulss  xmm7, xmm3, xmm2
        vmulss  xmm11, xmm3, xmm4
        vmulss  xmm9, xmm5, xmm2
        vmulss  xmm2, xmm0, xmm6
        vmulss  xmm8, xmm5, xmm4
        vmulss  xmm4, xmm0, xmm4
        vmulss  xmm3, xmm5, xmm6
        vaddss  xmm1, xmm2, xmm7
        vmovss  dword ptr [rbp+0D0h+in1+4], xmm1
        vsubss  xmm1, xmm7, xmm2
        vmovss  dword ptr [rbp+0D0h+in1+0Ch], xmm1
        vaddss  xmm1, xmm8, xmm10
        vaddss  xmm0, xmm3, xmm11
        vsubss  xmm0, xmm13, xmm0
        vmovss  dword ptr [rbp+0D0h+in1], xmm0
        vsubss  xmm0, xmm9, xmm4
        vmovss  dword ptr [rbp+0D0h+in1+8], xmm0
        vaddss  xmm0, xmm3, xmm12
        vsubss  xmm0, xmm13, xmm0
        vmovss  dword ptr [rbp+0D0h+in1+10h], xmm0
        vaddss  xmm0, xmm4, xmm9
        vmovss  dword ptr [rbp+0D0h+in1+18h], xmm0
        vaddss  xmm0, xmm11, xmm12
        vmovss  dword ptr [rbp+0D0h+in1+14h], xmm1
        vsubss  xmm0, xmm13, xmm0
        vsubss  xmm1, xmm8, xmm10
        vmovss  dword ptr [rbp+0D0h+in1+20h], xmm0
        vmovss  dword ptr [rbp+0D0h+in1+1Ch], xmm1
      }
      MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&in2, &out);
      MatrixTransformVector43(&_RBX->trans, &in2, &position);
      AxisToQuat(&out, &orientationAsQuat);
      Physics_WarpLeafDetailRigidBodyTo(v28, m_buffer->bodyId, &position, &orientationAsQuat, 0, 0);
      v119 = *v13;
      v145 = v27->hidePartBits.array[(unsigned __int64)m_buffer->boneIndex >> 5] & (0x80000000 >> (m_buffer->boneIndex & 0x1F));
      if ( v25 >= 0x100 )
      {
        LODWORD(v137) = 256;
        LODWORD(v135) = v25;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v135, v137) )
          __debugbreak();
      }
      v120 = (unsigned __int64)v25 >> 5;
      v121 = ~(0x80000000 >> (v25 & 0x1F));
      v119->array[v120] &= v121;
      v122 = *partBits;
      if ( v145 )
      {
        if ( v25 >= 0x100 )
        {
          LODWORD(v137) = 256;
          LODWORD(v135) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v135, v137) )
            __debugbreak();
        }
        v122->array[v120] &= v121;
      }
      else
      {
        if ( v25 >= 0x100 )
        {
          LODWORD(v137) = 256;
          LODWORD(v135) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v135, v137) )
            __debugbreak();
        }
        v122->array[v120] |= 0x80000000 >> (v25 & 0x1F);
      }
      ++m_buffer;
      ++v25;
      v26 = v149;
      v13 = partBits;
      v28 = worldId;
      v27 = ServerDObjForEntnum;
    }
    while ( m_buffer != &_RSI->detailBoneMapping.m_data.m_buffer[_RSI->detailBoneMapping.m_data.m_size] );
  }
  _RSI->detailCache.cached = 1;
  Profile_EndInternal(NULL);
  result = v147;
  __asm
  {
    vmovaps xmm13, [rsp+1D0h+var_B0]
    vmovaps xmm12, [rsp+1D0h+var_A0]
    vmovaps xmm11, [rsp+1D0h+var_90]
    vmovaps xmm10, [rsp+1D0h+var_80]
    vmovaps xmm9, [rsp+1D0h+var_70]
    vmovaps xmm8, [rsp+1D0h+var_60]
    vmovaps xmm7, [rsp+1D0h+var_50]
    vmovaps xmm6, [rsp+1D0h+var_40]
  }
  return result;
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

  _RDI = ent;
  v3 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v5 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtG_PhysicsObject_UpdatePhysicsChild");
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1916, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent", -2i64, v5) )
    __debugbreak();
  if ( _RDI->s.eType != ET_PHYSICS_CHILD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1917, ASSERT_TYPE_ASSERT, "( ent->s.eType == ET_PHYSICS_CHILD )", (const char *)&queryFormat, "ent->s.eType == ET_PHYSICS_CHILD") )
    __debugbreak();
  v6 = G_PhysicsObject_Get(_RDI->s.otherEntityNum)->physicsInstances[v3];
  if ( v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1924, ASSERT_TYPE_ASSERT, "( physInst != 0xFFFFFFFF )", (const char *)&queryFormat, "physInst != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  scriptMoverType = (unsigned __int16)_RDI->s.un.scriptMoverType;
  if ( scriptMoverType >= Physics_GetNumRigidBodys((const Physics_WorldId)v3, v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1928, ASSERT_TYPE_ASSERT, "( bodyIdx < Physics_GetNumRigidBodys( worldId, physInst ) )", (const char *)&queryFormat, "bodyIdx < Physics_GetNumRigidBodys( worldId, physInst )") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v3, v6, scriptMoverType);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\g_physicsobject.cpp", 1930, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyTransform((const Physics_WorldId)v3, RigidBodyID, &position, &orientation);
  QuatToAxis(&orientation, &axis);
  AxisToAngles(&axis, &angles);
  Trajectory_SetTrBase(&_RDI->s.lerp.pos, &position);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0C8h+angles]
    vmovss  dword ptr [rdi+40h], xmm0
    vmovss  xmm1, dword ptr [rsp+0C8h+angles+4]
    vmovss  dword ptr [rdi+44h], xmm1
    vmovss  xmm0, dword ptr [rsp+0C8h+angles+8]
    vmovss  dword ptr [rdi+48h], xmm0
  }
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
  unsigned int v11; 
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
      {
        AnglesToQuat(&ent->r.currentAngles, &quat);
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
          vmovups xmmword ptr [rsp+98h+quat], xmm0
        }
      }
      v7 = Physics_WarpInstanceTo(PHYSICS_WORLD_ID_FIRST, v9, &ent->r.currentOrigin, &quat, updateBroadPhase);
      v11 = v8->physicsInstances[1];
      if ( v11 != -1 )
        v7 |= Physics_WarpInstanceTo(PHYSICS_WORLD_ID_SERVER_DETAIL, v11, &ent->r.currentOrigin, &quat, updateBroadPhase);
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


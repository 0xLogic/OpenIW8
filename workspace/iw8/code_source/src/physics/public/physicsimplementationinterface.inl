/*
==============
Physics_GetRigidBodyID
==============
*/

unsigned int __fastcall Physics_GetRigidBodyID(const Physics_WorldId worldId, const unsigned int instanceId, const unsigned int bodyIndex)
{
  return ?Physics_GetRigidBodyID@@YAIW4Physics_WorldId@@II@Z(worldId, instanceId, bodyIndex);
}

/*
==============
Physics_GetRigidBodyTransform
==============
*/

void __fastcall Physics_GetRigidBodyTransform(const Physics_WorldId worldId, const unsigned int bodyId, vec3_t *position, vec4_t *orientation)
{
  ?Physics_GetRigidBodyTransform@@YAXW4Physics_WorldId@@IAEATvec3_t@@AEATvec4_t@@@Z(worldId, bodyId, position, orientation);
}

/*
==============
Physics_GetGravity
==============
*/

void __fastcall Physics_GetGravity(const Physics_WorldId worldId, vec3_t *gravity)
{
  ?Physics_GetGravity@@YAXW4Physics_WorldId@@AEATvec3_t@@@Z(worldId, gravity);
}

/*
==============
Physics_SetRigidBodyAngVel
==============
*/

void __fastcall Physics_SetRigidBodyAngVel(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *angVel)
{
  ?Physics_SetRigidBodyAngVel@@YAXW4Physics_WorldId@@IAEBTvec3_t@@@Z(worldId, bodyId, angVel);
}

/*
==============
Physics_WarpRigidBodyTo
==============
*/

Physics_MovementType __fastcall Physics_WarpRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, const bool updateBroadphase, const bool activate)
{
  return ?Physics_WarpRigidBodyTo@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@_N3@Z(worldId, bodyId, position, orientationAsQuat, updateBroadphase, activate);
}

/*
==============
Physics_ZeroRigidBodyLinAngVel
==============
*/

void __fastcall Physics_ZeroRigidBodyLinAngVel(const Physics_WorldId worldId, const unsigned int bodyId)
{
  ?Physics_ZeroRigidBodyLinAngVel@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_GetRigidBodyLinVel
==============
*/

void __fastcall Physics_GetRigidBodyLinVel(const Physics_WorldId worldId, const unsigned int bodyId, vec3_t *linVel)
{
  ?Physics_GetRigidBodyLinVel@@YAXW4Physics_WorldId@@IAEATvec3_t@@@Z(worldId, bodyId, linVel);
}

/*
==============
Physics_SetRigidBodyLinAngVel
==============
*/

void __fastcall Physics_SetRigidBodyLinAngVel(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *linVel, const vec3_t *angVel)
{
  ?Physics_SetRigidBodyLinAngVel@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1@Z(worldId, bodyId, linVel, angVel);
}

/*
==============
Physics_SetRigidBodyLinVel
==============
*/

void __fastcall Physics_SetRigidBodyLinVel(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *linVel)
{
  ?Physics_SetRigidBodyLinVel@@YAXW4Physics_WorldId@@IAEBTvec3_t@@@Z(worldId, bodyId, linVel);
}

/*
==============
Physics_AntilagWarpRigidBodyTo
==============
*/

Physics_MovementType __fastcall Physics_AntilagWarpRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, vec3_t *restorePosition, vec4_t *restoreOrientationAsQuat)
{
  return ?Physics_AntilagWarpRigidBodyTo@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@AEAT3@AEAT4@@Z(worldId, bodyId, position, orientationAsQuat, restorePosition, restoreOrientationAsQuat);
}

/*
==============
Physics_GetPerlinNoise2dValue
==============
*/

double __fastcall Physics_GetPerlinNoise2dValue(int seed, float frequency, float amplitude, int octaves, float persistence, int gridSize, int x, int y)
{
  double result; 

  *(float *)&result = ?Physics_GetPerlinNoise2dValue@@YAMHMMHMHHH@Z(seed, frequency, amplitude, octaves, persistence, gridSize, x, y);
  return result;
}

/*
==============
Physics_GetNumConstraints
==============
*/

unsigned int __fastcall Physics_GetNumConstraints(const Physics_WorldId worldId, const unsigned int instanceId)
{
  return ?Physics_GetNumConstraints@@YAIW4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
Physics_IsInstanceDetailBounded
==============
*/

bool __fastcall Physics_IsInstanceDetailBounded(const Physics_WorldId worldId, const unsigned int instanceId)
{
  return ?Physics_IsInstanceDetailBounded@@YA_NW4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
Physics_AntilagRestoreRigidBodyTo
==============
*/

void __fastcall Physics_AntilagRestoreRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat)
{
  ?Physics_AntilagRestoreRigidBodyTo@@YAXW4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@@Z(worldId, bodyId, position, orientationAsQuat);
}

/*
==============
Physics_WarpRigidBodyTo_Simple
==============
*/

void __fastcall Physics_WarpRigidBodyTo_Simple(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat)
{
  ?Physics_WarpRigidBodyTo_Simple@@YAXW4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@@Z(worldId, bodyId, position, orientationAsQuat);
}

/*
==============
Physics_GetRigidBodyLinAngVel
==============
*/

void __fastcall Physics_GetRigidBodyLinAngVel(const Physics_WorldId worldId, const unsigned int bodyId, vec3_t *linVel, vec3_t *angVel)
{
  ?Physics_GetRigidBodyLinAngVel@@YAXW4Physics_WorldId@@IAEATvec3_t@@1@Z(worldId, bodyId, linVel, angVel);
}

/*
==============
Physics_GetNumRigidBodys
==============
*/

unsigned int __fastcall Physics_GetNumRigidBodys(const Physics_WorldId worldId, const unsigned int instanceId)
{
  return ?Physics_GetNumRigidBodys@@YAIW4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
Physics_AntilagRestoreDetailBoundRigidBodyTo
==============
*/

void __fastcall Physics_AntilagRestoreDetailBoundRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position)
{
  ?Physics_AntilagRestoreDetailBoundRigidBodyTo@@YAXW4Physics_WorldId@@IAEBTvec3_t@@@Z(worldId, bodyId, position);
}

/*
==============
Physics_GetPerlinNoise2dValue
==============
*/

double __fastcall Physics_GetPerlinNoise2dValue(int seed, int gridSide, int x, int y)
{
  double result; 

  *(float *)&result = ?Physics_GetPerlinNoise2dValue@@YAMHHHH@Z(seed, gridSide, x, y);
  return result;
}

/*
==============
Physics_GetRigidBodyTransform
==============
*/

void __fastcall Physics_GetRigidBodyTransform(const Physics_WorldId worldId, const unsigned int bodyId, tmat44_t<vec4_t> *outIwTransform)
{
  ?Physics_GetRigidBodyTransform@@YAXW4Physics_WorldId@@IAEAT?$tmat44_t@Tvec4_t@@@@@Z(worldId, bodyId, outIwTransform);
}

/*
==============
Physics_GetNumRigidBodys
==============
*/
unsigned int Physics_GetNumRigidBodys(const Physics_WorldId worldId, const unsigned int instanceId)
{
  const HavokPhysicsWorld *ConstWorld; 
  __int64 v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 71, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 72, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 73, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v6) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 74, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v6) )
      __debugbreak();
  }
  if ( g_physicsServerWorldsCreated )
  {
LABEL_19:
    if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( worldId >= PHYSICS_WORLD_ID_FIRST )
  {
    if ( worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    {
      LODWORD(v6) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 75, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Rigid Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v6) )
        __debugbreak();
    }
    goto LABEL_19;
  }
LABEL_20:
  LODWORD(v6) = worldId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
    __debugbreak();
LABEL_22:
  if ( instanceId == -1 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 124, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v6) )
      __debugbreak();
  }
  ConstWorld = HavokPhysics_GetConstWorld(worldId);
  if ( !ConstWorld->world )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 128, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body count %i: world is NULL", "havokPhysicsWorld->world", v6) )
      __debugbreak();
  }
  return HavokPhysicsInstanceManager_GetBodyCount(&ConstWorld->instanceManager, instanceId);
}

/*
==============
Physics_GetRigidBodyTransform
==============
*/
void Physics_GetRigidBodyTransform(const Physics_WorldId worldId, const unsigned int bodyId, tmat44_t<vec4_t> *outIwTransform)
{
  hknpWorld *world; 
  float *v7; 
  __int64 v12; 

  _RSI = outIwTransform;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 850, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v12) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v12) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v12) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v12) )
      __debugbreak();
  }
  v7 = (float *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, bodyId);
  __asm { vmovss  xmm3, cs:__real@42000000 }
  _RSI->m[0].v[0] = *v7;
  _RSI->m[0].v[1] = v7[1];
  _RSI->m[0].v[2] = v7[2];
  _RSI->m[0].v[3] = 0.0;
  _RSI->m[1].v[0] = v7[4];
  _RSI->m[1].v[1] = v7[5];
  *(_QWORD *)&_RSI->row1.xyz.z = *((unsigned int *)v7 + 6);
  _RSI->m[2].v[0] = v7[8];
  _RSI->m[2].v[1] = v7[9];
  *(_QWORD *)&_RSI->row2.xyz.z = *((unsigned int *)v7 + 10);
  __asm
  {
    vmulss  xmm0, xmm3, dword ptr [rdx+30h]
    vmovss  dword ptr [rsi+30h], xmm0
    vmulss  xmm2, xmm3, dword ptr [rdx+34h]
    vmovss  dword ptr [rsi+34h], xmm2
    vmulss  xmm1, xmm3, dword ptr [rdx+38h]
    vmovss  dword ptr [rsi+38h], xmm1
  }
  _RSI->m[3].v[3] = 1.0;
}

/*
==============
Physics_GetRigidBodyTransform
==============
*/
void Physics_GetRigidBodyTransform(const Physics_WorldId worldId, const unsigned int bodyId, vec3_t *position, vec4_t *orientation)
{
  hknpWorld *world; 
  const tmat34_t<vec4_t> *v9; 
  __int64 v14; 

  _RBP = position;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v14) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v14) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v14) )
      __debugbreak();
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v14) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v14) )
      __debugbreak();
  }
  v9 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, bodyId);
  __asm
  {
    vmovss  xmm3, cs:__real@42000000
    vmulss  xmm0, xmm3, dword ptr [rax+30h]
    vmovss  dword ptr [rbp+0], xmm0
    vmulss  xmm2, xmm3, dword ptr [rax+34h]
    vmovss  dword ptr [rbp+4], xmm2
    vmulss  xmm1, xmm3, dword ptr [rax+38h]
    vmovss  dword ptr [rbp+8], xmm1
  }
  Axis34ToQuat(v9, orientation);
}

/*
==============
Physics_GetRigidBodyLinAngVel
==============
*/
void Physics_GetRigidBodyLinAngVel(const Physics_WorldId worldId, const unsigned int bodyId, vec3_t *linVel, vec3_t *angVel)
{
  __int64 v15; 
  Physics_WorldId v16; 
  hkVector4f linVela; 
  hkVector4f angVela; 

  _RBP = angVel;
  _RSI = linVel;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v16 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v15) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyLinAngVel(worldId, (const hknpBodyId)bodyId, &linVela, &angVela);
  __asm
  {
    vmovss  xmm3, cs:__real@42000000
    vmulss  xmm0, xmm3, dword ptr [rsp+88h+linVel.m_quad+4]
    vmulss  xmm1, xmm3, dword ptr [rsp+88h+linVel.m_quad]
    vmulss  xmm2, xmm3, dword ptr [rsp+88h+linVel.m_quad+8]
    vmovss  dword ptr [rsi+4], xmm0
    vmovss  xmm0, dword ptr [rsp+88h+angVel.m_quad]
    vmovss  dword ptr [rsi], xmm1
    vmovss  xmm1, dword ptr [rsp+88h+angVel.m_quad+4]
    vmovss  dword ptr [rsi+8], xmm2
    vmovss  dword ptr [rbp+0], xmm0
    vmovss  xmm0, dword ptr [rsp+88h+angVel.m_quad+8]
    vmovss  dword ptr [rbp+8], xmm0
    vmovss  dword ptr [rbp+4], xmm1
  }
}

/*
==============
Physics_SetRigidBodyAngVel
==============
*/
void Physics_SetRigidBodyAngVel(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *angVel)
{
  hknpWorld *world; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18[4]; 

  _RSI = angVel;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 349, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body AngVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body AngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 351, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body AngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v14) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
  {
LABEL_27:
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 352, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body AngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", v14) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  [rsp+88h+var_38], xmm0
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+88h+var_34], xmm1
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+88h+var_30], xmm0
    vmovss  [rsp+88h+var_2C], xmm1
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 470, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body AgnVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 471, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body AngVel with invalid body id for world %i", "bodyId.isValid()", v14) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 475, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyAngVel %i: world is NULL", "world", v14) )
      __debugbreak();
  }
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, _QWORD))world->setBodyAngularVelocity)(&world->hknpWorldWriter, bodyId, v18, 0i64);
}

/*
==============
Physics_SetRigidBodyLinAngVel
==============
*/
void Physics_SetRigidBodyLinAngVel(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *linVel, const vec3_t *angVel)
{
  hknpWorld *world; 
  __int64 v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30[4]; 
  int v31[4]; 

  _RBP = angVel;
  _R14 = linVel;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 369, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v23) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 370, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v23) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+98h+var_58], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+98h+var_58], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+98h+var_58], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
  {
LABEL_32:
    LODWORD(v23) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 371, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", v23) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+98h+var_58], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+98h+var_58], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+98h+var_58], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
  {
LABEL_33:
    LODWORD(v23) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 372, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", v23) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [r14]
    vmulss  xmm2, xmm3, dword ptr [r14+4]
    vmulss  xmm1, xmm3, dword ptr [r14+8]
    vmovss  [rsp+98h+var_38], xmm0
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+98h+var_48], xmm0
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+98h+var_34], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rsp+98h+var_30], xmm1
    vmovss  xmm1, dword ptr [rbp+4]
    vmovss  [rsp+98h+var_40], xmm0
    vmovss  [rsp+98h+var_2C], xmm2
    vmovss  [rsp+98h+var_44], xmm1
    vmovss  [rsp+98h+var_3C], xmm2
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v23) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v23) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", v23) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v23) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 490, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", v23) )
      __debugbreak();
  }
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, int *, _DWORD))world->setBodyVelocity)(&world->hknpWorldWriter, bodyId, v31, v30, 0);
}

/*
==============
Physics_SetRigidBodyLinVel
==============
*/
void Physics_SetRigidBodyLinVel(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *linVel)
{
  hknpWorld *world; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19[4]; 

  _RBP = linVel;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 333, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 334, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 335, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v15) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_27:
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 336, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", v15) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm2, xmm3, dword ptr [rbp+4]
    vmulss  xmm0, xmm3, dword ptr [rbp+0]
    vmulss  xmm1, xmm3, dword ptr [rbp+8]
    vmovss  [rsp+88h+var_34], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rsp+88h+var_2C], xmm2
    vmovss  [rsp+88h+var_38], xmm0
    vmovss  [rsp+88h+var_30], xmm1
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 455, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 456, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v15) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 460, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinVel %i: world is NULL", "world", v15) )
      __debugbreak();
  }
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, _QWORD))world->setBodyLinearVelocity)(&world->hknpWorldWriter, bodyId, v19, 0i64);
}

/*
==============
Physics_WarpRigidBodyTo
==============
*/
Physics_MovementType Physics_WarpRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, const bool updateBroadphase, const bool activate)
{
  __int64 v36; 
  Physics_WorldId v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  _RBX = orientationAsQuat;
  _RDI = position;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v37 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v36) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v36) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 )
    goto LABEL_25;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
    goto LABEL_25;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 )
    goto LABEL_25;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v44 & 0x7F800000) == 2139095040 )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vmulss  xmm2, xmm3, dword ptr [rdi+4]
    vmulss  xmm1, xmm3, dword ptr [rdi+8]
    vmovss  xmm5, dword ptr [rbx]
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
    vmovss  dword ptr [rsp+88h+hkPosition.m_quad], xmm0
    vmovss  dword ptr [rsp+88h+hkPosition.m_quad+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
    vmulps  xmm0, xmm0, xmm4
    vmovss  dword ptr [rsp+88h+hkPosition.m_quad+8], xmm1
    vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vmovss  dword ptr [rsp+88h+hkPosition.m_quad+0Ch], xmm2
    vmulps  xmm2, xmm0, xmm4
    vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vsubps  xmm3, xmm1, xmm2
    vmulps  xmm2, xmm3, xmm0
    vmulps  xmm1, xmm2, xmm5
    vmovups xmmword ptr [rsp+88h+hkOrientation.m_vec.m_quad], xmm1
  }
  return HavokPhysics_WarpRigidBodyTo(worldId, (const hknpBodyId)bodyId, &hkPosition, &hkOrientation, updateBroadphase, activate);
}

/*
==============
Physics_WarpRigidBodyTo_Simple
==============
*/
void Physics_WarpRigidBodyTo_Simple(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat)
{
  hknpWorld *world; 
  __int64 v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  unsigned int v49[4]; 
  hkQuaternionf qi; 
  hkTransformf v52; 

  _RDI = orientationAsQuat;
  _RSI = position;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 568, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 569, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v44) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 570, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v44) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0E8h+var_98], xmm0
  }
  if ( (v49[0] & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+0E8h+var_98], xmm0
  }
  if ( (v49[0] & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+0E8h+var_98], xmm0
  }
  if ( (v49[0] & 0x7F800000) == 2139095040 )
  {
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 571, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rdi]
    vmovss  [rsp+0E8h+var_98], xmm1
  }
  if ( (v49[0] & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+0E8h+var_98], xmm0
  }
  if ( (v49[0] & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0E8h+var_98], xmm0
  }
  if ( (v49[0] & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  [rsp+0E8h+var_98], xmm0
  }
  if ( (v49[0] & 0x7F800000) == 2139095040 )
  {
LABEL_40:
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+0Ch]
      vmovss  xmm2, dword ptr [rdi+8]
      vmovss  xmm0, dword ptr [rdi+4]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovsd  [rsp+0E8h+var_A0], xmm3
      vcvtss2sd xmm2, xmm2, xmm2
      vmovsd  [rsp+0E8h+var_A8], xmm2
      vcvtss2sd xmm0, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm0
      vcvtss2sd xmm1, xmm1, xmm1
      vmovsd  [rsp+0E8h+var_B8], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 572, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation %2.f,%.2f,%.2f,%.2f", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )", v45, v46, v47, v48) )
      __debugbreak();
  }
  v49[0] = bodyId;
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rsi]
    vmulss  xmm2, xmm3, dword ptr [rsi+4]
    vmulss  xmm1, xmm3, dword ptr [rsi+8]
    vmovss  xmm5, dword ptr [rdi]
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
    vmovss  dword ptr [rsp+0E8h+var_88], xmm0
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
    vmovss  dword ptr [rsp+0E8h+var_88+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovups xmmword ptr [rsp+0E8h+qi.m_vec.m_quad], xmm0
    vmulps  xmm0, xmm4, xmm0
    vmovss  dword ptr [rsp+0E8h+var_88+8], xmm1
    vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vmovss  dword ptr [rsp+0E8h+var_88+0Ch], xmm2
    vmulps  xmm2, xmm0, xmm4
    vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vsubps  xmm3, xmm1, xmm2
    vmulps  xmm2, xmm3, xmm0
    vmulps  xmm1, xmm2, xmm5
    vmovups xmmword ptr [rsp+0E8h+qi.m_vec.m_quad], xmm1
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v44) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 723, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v44) )
      __debugbreak();
  }
  if ( (v49[0] & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v44) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 724, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v44) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v44) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 728, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v44) )
      __debugbreak();
  }
  __asm { vmovss  xmm1, cs:__real@3a83126f; epsilon }
  if ( !hkQuaternionf::isOk(&qi, *(const float *)&_XMM1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 731, ASSERT_TYPE_ASSERT, "(hkOrientation.isOk())", (const char *)&queryFormat, "hkOrientation.isOk()") )
    __debugbreak();
  hkRotationImpl<float>::set(&v52.m_rotation, &qi);
  __asm
  {
    vmovups xmm0, [rsp+0E8h+var_88]
    vmovups [rsp+0E8h+var_38], xmm0
  }
  if ( !hkTransformf::isOk(&v52) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 735, ASSERT_TYPE_ASSERT, "(transform.isOk())", (const char *)&queryFormat, "transform.isOk()") )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, hkTransformf *, __int64))world->setBodyTransform)(&world->hknpWorldWriter, v49[0], &v52, 1i64);
  ((void (__fastcall *)(hknpBroadPhase *, unsigned int *, __int64))world->m_broadPhase->markBodiesDirty)(world->m_broadPhase, v49, 1i64);
}

/*
==============
Physics_GetGravity
==============
*/
void Physics_GetGravity(const Physics_WorldId worldId, vec3_t *gravity)
{
  Physics_WorldId v12; 
  __int64 v13; 

  _RDI = gravity;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v12 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v12) )
      __debugbreak();
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v13) )
      __debugbreak();
  }
  __asm { vmovss  xmm2, cs:__real@42000000 }
  _RCX = HavokPhysics_GetConstWorld(worldId)->world;
  __asm
  {
    vmovups xmm3, xmmword ptr [rcx+0AC0h]
    vmulss  xmm0, xmm3, xmm2
    vshufps xmm1, xmm3, xmm3, 55h ; 'U'
    vmovss  dword ptr [rdi], xmm0
    vmulss  xmm0, xmm1, xmm2
    vshufps xmm3, xmm3, xmm3, 0AAh ; 'ª'
    vmovss  dword ptr [rdi+4], xmm0
    vmulss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rdi+8], xmm0
  }
}

/*
==============
Physics_GetPerlinNoise2dValue
==============
*/
double Physics_GetPerlinNoise2dValue(int seed, int gridSide, int x, int y)
{
  if ( gridSide <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(gridSide > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSide > 0") )
    __debugbreak();
  if ( (x < 0 || x >= gridSide) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 645, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSide") )
    __debugbreak();
  if ( (y < 0 || y >= gridSide) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 646, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSide)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSide") )
    __debugbreak();
  return HavokPhysics_GetPerlinNoise2dValue(seed, gridSide, x, y);
}

/*
==============
Physics_GetRigidBodyLinVel
==============
*/
void Physics_GetRigidBodyLinVel(const Physics_WorldId worldId, const unsigned int bodyId, vec3_t *linVel)
{
  hknpWorld *world; 
  __int64 v7; 
  __int64 v16; 

  _RBP = linVel;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 275, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 276, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v16) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 277, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v16) )
      __debugbreak();
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v16) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 403, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v16) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 404, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v16) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v16) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 408, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v16) )
      __debugbreak();
  }
  v7 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, bodyId);
  _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v7 + 64));
  __asm
  {
    vmovss  xmm2, cs:__real@42000000
    vmovups xmm3, xmmword ptr [rax+40h]
    vmulss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbp+0], xmm0
    vshufps xmm1, xmm3, xmm3, 55h ; 'U'
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rbp+4], xmm0
    vshufps xmm3, xmm3, xmm3, 0AAh ; 'ª'
    vmulss  xmm0, xmm3, xmm2
    vmovss  dword ptr [rbp+8], xmm0
  }
}

/*
==============
Physics_GetRigidBodyID
==============
*/
__int64 Physics_GetRigidBodyID(const Physics_WorldId worldId, const unsigned int instanceId, const unsigned int bodyIndex)
{
  __int64 v7; 
  hknpBodyId result; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v7) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v7) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v7) )
      __debugbreak();
  }
  return HavokPhysics_GetRigidBodyID(&result, worldId, instanceId, bodyIndex)->m_serialAndIndex;
}

/*
==============
Physics_AntilagRestoreRigidBodyTo
==============
*/
void Physics_AntilagRestoreRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat)
{
  hknpWorld *world; 
  __int64 v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  hkQuaternionf qi; 
  hkTransformf v47; 

  _RSI = orientationAsQuat;
  _R14 = position;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 484, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v37) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v37) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
  {
LABEL_36:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 487, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v44 & 0x7F800000) == 2139095040 )
  {
LABEL_37:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 488, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [r14]
    vmulss  xmm2, xmm3, dword ptr [r14+4]
    vmulss  xmm1, xmm3, dword ptr [r14+8]
    vmovss  xmm5, dword ptr [rsi]
    vinsertps xmm5, xmm5, dword ptr [rsi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rsi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rsi+0Ch], 30h ; '0'
    vmovss  dword ptr [rsp+0D8h+var_88], xmm0
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
    vmovss  dword ptr [rsp+0D8h+var_88+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovups xmmword ptr [rsp+0D8h+qi.m_vec.m_quad], xmm0
    vmulps  xmm0, xmm0, xmm4
    vmovss  dword ptr [rsp+0D8h+var_88+8], xmm1
    vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vmovss  dword ptr [rsp+0D8h+var_88+0Ch], xmm2
    vmulps  xmm2, xmm0, xmm4
    vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vsubps  xmm3, xmm1, xmm2
    vmulps  xmm2, xmm3, xmm0
    vmulps  xmm1, xmm2, xmm5
    vmovups xmmword ptr [rsp+0D8h+qi.m_vec.m_quad], xmm1
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v37) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 639, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v37) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v37) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 640, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v37) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v37) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v37) )
      __debugbreak();
  }
  __asm { vmovss  xmm1, cs:__real@3a83126f; epsilon }
  if ( !hkQuaternionf::isOk(&qi, *(const float *)&_XMM1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 647, ASSERT_TYPE_ASSERT, "(hkOrientation.isOk())", (const char *)&queryFormat, "hkOrientation.isOk()") )
    __debugbreak();
  hkRotationImpl<float>::set(&v47.m_rotation, &qi);
  __asm
  {
    vmovups xmm0, [rsp+0D8h+var_88]
    vmovups [rsp+0D8h+var_38], xmm0
  }
  hknpBody::setTransform(&world->m_bodyManager.m_bodies.m_objects.m_data[bodyId & 0xFFFFFF].m_pod, &v47);
}

/*
==============
Physics_AntilagWarpRigidBodyTo
==============
*/
Physics_MovementType Physics_AntilagWarpRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, vec3_t *restorePosition, vec4_t *restoreOrientationAsQuat)
{
  Physics_MovementType result; 
  __int64 v43; 
  Physics_WorldId v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  hkVector4f hkPosition; 
  hkQuaternionf hkRestoreOrientation; 
  hkVector4f hkRestorePosition; 
  hkQuaternionf hkOrientation; 

  _RBX = orientationAsQuat;
  _R14 = restorePosition;
  _RDI = position;
  _RSI = restoreOrientationAsQuat;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 447, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v44 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 448, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v44) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v43) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 449, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v43) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v45 & 0x7F800000) == 2139095040 )
    goto LABEL_25;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v46 & 0x7F800000) == 2139095040 )
    goto LABEL_25;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v47 & 0x7F800000) == 2139095040 )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 450, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v48 & 0x7F800000) == 2139095040 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v49 & 0x7F800000) == 2139095040 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v50 & 0x7F800000) == 2139095040 )
    goto LABEL_26;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+0B8h+var_78], xmm0
  }
  if ( (v51 & 0x7F800000) == 2139095040 )
  {
LABEL_26:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 451, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm0, xmm3, dword ptr [rdi]
    vmulss  xmm2, xmm3, dword ptr [rdi+4]
    vmulss  xmm1, xmm3, dword ptr [rdi+8]
    vmovss  xmm5, dword ptr [rbx]
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
    vmovss  dword ptr [rsp+0B8h+hkPosition.m_quad], xmm0
    vmovss  dword ptr [rsp+0B8h+hkPosition.m_quad+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
    vmulps  xmm0, xmm0, xmm4
    vmovss  dword ptr [rsp+0B8h+hkPosition.m_quad+8], xmm1
    vmovups xmm1, cs:?hkSse_floatThree@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatThree
    vmovss  dword ptr [rsp+0B8h+hkPosition.m_quad+0Ch], xmm2
    vmulps  xmm2, xmm0, xmm4
    vmulps  xmm0, xmm4, cs:?hkSse_floatHalf@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatHalf
    vsubps  xmm3, xmm1, xmm2
    vmulps  xmm2, xmm3, xmm0
    vmulps  xmm1, xmm2, xmm5
    vmovups xmmword ptr [rsp+0B8h+hkOrientation.m_vec.m_quad], xmm1
  }
  result = HavokPhysics_AntilagWarpRigidBodyTo(worldId, (const hknpBodyId)bodyId, &hkPosition, &hkOrientation, &hkRestorePosition, &hkRestoreOrientation);
  if ( result )
  {
    __asm
    {
      vmovss  xmm3, cs:__real@42000000
      vmulss  xmm0, xmm3, dword ptr [rsp+0B8h+hkRestorePosition.m_quad+4]
      vmulss  xmm1, xmm3, dword ptr [rsp+0B8h+hkRestorePosition.m_quad]
      vmulss  xmm2, xmm3, dword ptr [rsp+0B8h+hkRestorePosition.m_quad+8]
      vmovss  dword ptr [r14+4], xmm0
      vmovaps xmm0, xmmword ptr [rsp+0B8h+var_58.m_vec.m_quad]
      vmovss  dword ptr [r14], xmm1
      vmovss  dword ptr [r14+8], xmm2
      vmovups xmmword ptr [rsi], xmm0
    }
  }
  return result;
}

/*
==============
Physics_AntilagRestoreDetailBoundRigidBodyTo
==============
*/
void Physics_AntilagRestoreDetailBoundRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position)
{
  hknpWorld *world; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 

  _RBP = position;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 550, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 551, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v18) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 552, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v18) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+88h+var_48], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
  {
LABEL_27:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 553, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm2, xmm3, dword ptr [rbp+4]
    vmulss  xmm0, xmm3, dword ptr [rbp+0]
    vmulss  xmm1, xmm3, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+88h+var_38+4], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  dword ptr [rsp+88h+var_38+0Ch], xmm2
    vmovss  dword ptr [rsp+88h+var_38], xmm0
    vmovss  dword ptr [rsp+88h+var_38+8], xmm1
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v18) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 706, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v18) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v18) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 707, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v18) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v18) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 711, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v18) )
      __debugbreak();
  }
  __asm { vmovups xmm0, [rsp+88h+var_38] }
  _RCX = 176i64 * (bodyId & 0xFFFFFF);
  _RAX = world->m_bodyManager.m_bodies.m_objects.m_data;
  __asm { vmovups xmmword ptr [rcx+rax+30h], xmm0 }
}

/*
==============
Physics_IsInstanceDetailBounded
==============
*/
bool Physics_IsInstanceDetailBounded(const Physics_WorldId worldId, const unsigned int instanceId)
{
  __int64 v3; 
  const HavokPhysicsWorld *ConstWorld; 
  __int64 v6; 

  v3 = instanceId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 603, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if instance is detail bounded when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 604, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if instance is detail bounded with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (_DWORD)v3 == -1 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 605, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Check if instance is detail bounded with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v6) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 606, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if instance is detail bounded in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v6) )
      __debugbreak();
  }
  if ( g_physicsServerWorldsCreated )
  {
LABEL_19:
    if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( worldId >= PHYSICS_WORLD_ID_FIRST )
  {
    if ( worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    {
      LODWORD(v6) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 607, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if instance is detail bounded in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v6) )
        __debugbreak();
    }
    goto LABEL_19;
  }
LABEL_20:
  LODWORD(v6) = worldId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 761, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to check if instance is detail bounded with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
    __debugbreak();
LABEL_22:
  if ( (_DWORD)v3 == -1 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 762, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to check if instance is detail bounded with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v6) )
      __debugbreak();
  }
  ConstWorld = HavokPhysics_GetConstWorld(worldId);
  if ( !ConstWorld->world )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 766, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics IsInstanceDeactivated %i: world is NULL", "havokPhysicsWorld->world", v6) )
      __debugbreak();
  }
  if ( ConstWorld == (const HavokPhysicsWorld *)-192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 107, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v3 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 108, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  return ConstWorld->instanceManager.buffer[v3].detailModel != NULL;
}

/*
==============
Physics_GetNumConstraints
==============
*/
unsigned int Physics_GetNumConstraints(const Physics_WorldId worldId, const unsigned int instanceId)
{
  const HavokPhysicsWorld *ConstWorld; 
  __int64 v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 88, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Number of Constraints when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 89, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Number of Constraints with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 90, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Number of Constraints with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v6) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 91, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Number of Constraints in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v6) )
      __debugbreak();
  }
  if ( g_physicsServerWorldsCreated )
  {
LABEL_19:
    if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( worldId >= PHYSICS_WORLD_ID_FIRST )
  {
    if ( worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    {
      LODWORD(v6) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 92, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Number of Constraints in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v6) )
        __debugbreak();
    }
    goto LABEL_19;
  }
LABEL_20:
  LODWORD(v6) = worldId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 142, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Constraints with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
    __debugbreak();
LABEL_22:
  if ( instanceId == -1 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 143, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Number of Constraints with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v6) )
      __debugbreak();
  }
  ConstWorld = HavokPhysics_GetConstWorld(worldId);
  if ( !ConstWorld->world )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 147, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get constraint count %i: world is NULL", "havokPhysicsWorld->world", v6) )
      __debugbreak();
  }
  return HavokPhysicsInstanceManager_GetConstraintCount(&ConstWorld->instanceManager, instanceId);
}

/*
==============
Physics_GetPerlinNoise2dValue
==============
*/

double __fastcall Physics_GetPerlinNoise2dValue(int seed, double frequency, double amplitude, int octaves, float persistence, int gridSize, int x, int y)
{
  int v23; 
  int v24; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  if ( (unsigned int)(octaves - 1) > 7 )
  {
    v24 = 8;
    v23 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 665, ASSERT_TYPE_ASSERT, "( 1 ) <= ( octaves ) && ( octaves ) <= ( (8) )", "octaves not in [1, MAX_PERLIN_NOISE_OCTAVES]\n\t%i not in [%i, %i]", octaves, v23, v24) )
      __debugbreak();
  }
  if ( gridSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 666, ASSERT_TYPE_ASSERT, "(gridSize > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSize > 0") )
    __debugbreak();
  if ( (x < 0 || x >= gridSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 667, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSize)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSize") )
    __debugbreak();
  if ( (y < 0 || y >= gridSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 668, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSize)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSize") )
    __debugbreak();
  __asm
  {
    vmovaps xmm2, xmm7; amplitude
    vmovaps xmm1, xmm6; frequency
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  return HavokPhysics_GetPerlinNoise2dValue(seed, *(float *)&_XMM1, *(float *)&_XMM2, octaves, persistence, gridSize, x, y);
}

/*
==============
Physics_ZeroRigidBodyLinAngVel
==============
*/
void Physics_ZeroRigidBodyLinAngVel(const Physics_WorldId worldId, const unsigned int bodyId)
{
  hknpWorld *world; 
  __int64 v7; 
  __int128 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 409, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Zero Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 410, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Zero Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 411, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Zero Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v7) )
      __debugbreak();
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 519, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Zero Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 520, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Zero Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", v7) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 524, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", v7) )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovups [rsp+68h+var_28], xmm0
  }
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int128 *, __int128 *, _DWORD))world->setBodyVelocity)(&world->hknpWorldWriter, bodyId, &v8, &v8, 0);
}


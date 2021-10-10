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
  __int64 v7; 
  __int64 v8; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 850, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 851, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v8) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 855, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v8) )
      __debugbreak();
  }
  v7 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, bodyId);
  outIwTransform->m[0].v[0] = *(float *)v7;
  outIwTransform->m[0].v[1] = *(float *)(v7 + 4);
  outIwTransform->m[0].v[2] = *(float *)(v7 + 8);
  outIwTransform->m[0].v[3] = 0.0;
  outIwTransform->m[1].v[0] = *(float *)(v7 + 16);
  outIwTransform->m[1].v[1] = *(float *)(v7 + 20);
  *(_QWORD *)&outIwTransform->row1.xyz.z = *(unsigned int *)(v7 + 24);
  outIwTransform->m[2].v[0] = *(float *)(v7 + 32);
  outIwTransform->m[2].v[1] = *(float *)(v7 + 36);
  *(_QWORD *)&outIwTransform->row2.xyz.z = *(unsigned int *)(v7 + 40);
  outIwTransform->m[3].v[0] = 32.0 * *(float *)(v7 + 48);
  outIwTransform->m[3].v[1] = 32.0 * *(float *)(v7 + 52);
  outIwTransform->m[3].v[2] = 32.0 * *(float *)(v7 + 56);
  outIwTransform->m[3].v[3] = 1.0;
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
  __int64 v10; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Transform when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Transform with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v10) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 263, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v10) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 264, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Transform in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v10) )
      __debugbreak();
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v10) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 346, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body Transform with invalid body id for world %i", "bodyId.isValid()", v10) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics Get rigid Body Transform %i: world is NULL", "world", v10) )
      __debugbreak();
  }
  v9 = (const tmat34_t<vec4_t> *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, bodyId);
  position->v[0] = 32.0 * v9[1].m[0].v[0];
  position->v[1] = 32.0 * v9[1].m[0].v[1];
  position->v[2] = 32.0 * v9[1].m[0].v[2];
  Axis34ToQuat(v9, orientation);
}

/*
==============
Physics_GetRigidBodyLinAngVel
==============
*/
void Physics_GetRigidBodyLinAngVel(const Physics_WorldId worldId, const unsigned int bodyId, vec3_t *linVel, vec3_t *angVel)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  __int64 v12; 
  Physics_WorldId v13; 
  hkVector4f linVela; 
  hkVector4f angVela; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v13 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v13) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v12) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v12) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyLinAngVel(worldId, (const hknpBodyId)bodyId, &linVela, &angVela);
  v8 = 32.0 * linVela.m_quad.m128_f32[0];
  v9 = 32.0 * linVela.m_quad.m128_f32[2];
  linVel->v[1] = 32.0 * linVela.m_quad.m128_f32[1];
  v10 = angVela.m_quad.m128_f32[0];
  linVel->v[0] = v8;
  v11 = angVela.m_quad.m128_f32[1];
  linVel->v[2] = v9;
  angVel->v[0] = v10;
  angVel->v[2] = angVela.m_quad.m128_f32[2];
  angVel->v[1] = v11;
}

/*
==============
Physics_SetRigidBodyAngVel
==============
*/
void Physics_SetRigidBodyAngVel(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *angVel)
{
  float v6; 
  float v7; 
  hknpWorld *world; 
  __int64 v9; 
  int v10[4]; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 349, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body AngVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 350, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body AngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 351, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body AngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v9) )
      __debugbreak();
  }
  if ( (LODWORD(angVel->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(angVel->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(angVel->v[2]) & 0x7F800000) == 2139095040 )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 352, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body AngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", v9) )
      __debugbreak();
  }
  v6 = angVel->v[1];
  v10[0] = LODWORD(angVel->v[0]);
  v7 = angVel->v[2];
  *(float *)&v10[1] = v6;
  *(float *)&v10[2] = v7;
  *(float *)&v10[3] = 0.0;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 470, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body AgnVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 471, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body AngVel with invalid body id for world %i", "bodyId.isValid()", v9) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 475, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyAngVel %i: world is NULL", "world", v9) )
      __debugbreak();
  }
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, _QWORD))world->setBodyAngularVelocity)(&world->hknpWorldWriter, bodyId, v10, 0i64);
}

/*
==============
Physics_SetRigidBodyLinAngVel
==============
*/
void Physics_SetRigidBodyLinAngVel(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *linVel, const vec3_t *angVel)
{
  int v8; 
  int v9; 
  float v10; 
  float v11; 
  hknpWorld *world; 
  __int64 v13; 
  int v14[4]; 
  int v15[4]; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 368, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 369, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 370, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v13) )
      __debugbreak();
  }
  if ( (LODWORD(linVel->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(linVel->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(linVel->v[2]) & 0x7F800000) == 2139095040 )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 371, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", v13) )
      __debugbreak();
  }
  if ( (LODWORD(angVel->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(angVel->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(angVel->v[2]) & 0x7F800000) == 2139095040 )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 372, ASSERT_TYPE_ASSERT, "(!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinAngVel in world %i with nan angVel", "!IS_NAN( angVel[0] ) && !IS_NAN( angVel[1] ) && !IS_NAN( angVel[2] )", v13) )
      __debugbreak();
  }
  *(float *)&v8 = 0.03125 * linVel->v[1];
  *(float *)&v9 = 0.03125 * linVel->v[2];
  *(float *)v15 = 0.03125 * linVel->v[0];
  v14[0] = LODWORD(angVel->v[0]);
  v10 = angVel->v[2];
  v15[1] = v8;
  v15[2] = v9;
  v11 = angVel->v[1];
  *(float *)&v14[2] = v10;
  *(float *)&v15[3] = 0.0;
  *(float *)&v14[1] = v11;
  *(float *)&v14[3] = 0.0;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v13) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", v13) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 490, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", v13) )
      __debugbreak();
  }
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, int *, _DWORD))world->setBodyVelocity)(&world->hknpWorldWriter, bodyId, v15, v14, 0);
}

/*
==============
Physics_SetRigidBodyLinVel
==============
*/
void Physics_SetRigidBodyLinVel(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *linVel)
{
  float v6; 
  int v7; 
  hknpWorld *world; 
  __int64 v9; 
  int v10[4]; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 333, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 334, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 335, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v9) )
      __debugbreak();
  }
  if ( (LODWORD(linVel->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(linVel->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(linVel->v[2]) & 0x7F800000) == 2139095040 )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 336, ASSERT_TYPE_ASSERT, "(!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body LinVel in world %i with nan linVel", "!IS_NAN( linVel[0] ) && !IS_NAN( linVel[1] ) && !IS_NAN( linVel[2] )", v9) )
      __debugbreak();
  }
  v6 = 0.03125 * linVel->v[0];
  *(float *)&v7 = 0.03125 * linVel->v[2];
  *(float *)&v10[1] = 0.03125 * linVel->v[1];
  *(float *)&v10[3] = 0.0;
  *(float *)v10 = v6;
  v10[2] = v7;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 455, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 456, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Set Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v9) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 460, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinVel %i: world is NULL", "world", v9) )
      __debugbreak();
  }
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, int *, _QWORD))world->setBodyLinearVelocity)(&world->hknpWorldWriter, bodyId, v10, 0i64);
}

/*
==============
Physics_WarpRigidBodyTo
==============
*/
Physics_MovementType Physics_WarpRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, const bool updateBroadphase, const bool activate)
{
  float v10; 
  float v11; 
  __int64 v19; 
  Physics_WorldId v20; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v20 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 423, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v20) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v19) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 424, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v19) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 426, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  v10 = 0.03125 * position->v[1];
  v11 = 0.03125 * position->v[2];
  _XMM5 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  hkPosition.m_quad.m128_f32[1] = v10;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  hkPosition.m_quad.m128_f32[2] = v11;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  return HavokPhysics_WarpRigidBodyTo(worldId, (const hknpBodyId)bodyId, &hkPosition, &hkOrientation, updateBroadphase, activate);
}

/*
==============
Physics_WarpRigidBodyTo_Simple
==============
*/
void Physics_WarpRigidBodyTo_Simple(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat)
{
  float v8; 
  float v9; 
  float v10; 
  hknpWorld *world; 
  __int64 v18; 
  unsigned int v19[4]; 
  hkVector4f v20; 
  hkQuaternionf qi; 
  hkTransformf v22; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 568, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 569, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v18) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 570, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v18) )
      __debugbreak();
  }
  v19[0] = LODWORD(position->v[0]);
  if ( (v19[0] & 0x7F800000) == 2139095040 || (v19[0] = LODWORD(position->v[1]), (v19[0] & 0x7F800000) == 2139095040) || (v19[0] = LODWORD(position->v[2]), (v19[0] & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 571, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
      __debugbreak();
  }
  v8 = orientationAsQuat->v[0];
  v19[0] = LODWORD(orientationAsQuat->v[0]);
  if ( (v19[0] & 0x7F800000) == 2139095040 || (v19[0] = LODWORD(orientationAsQuat->v[1]), (v19[0] & 0x7F800000) == 2139095040) || (v19[0] = LODWORD(orientationAsQuat->v[2]), (v19[0] & 0x7F800000) == 2139095040) || (v19[0] = LODWORD(orientationAsQuat->v[3]), (v19[0] & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 572, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation %2.f,%.2f,%.2f,%.2f", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )", v8, orientationAsQuat->v[1], orientationAsQuat->v[2], orientationAsQuat->v[3]) )
      __debugbreak();
  }
  v19[0] = bodyId;
  v9 = 0.03125 * position->v[1];
  v10 = 0.03125 * position->v[2];
  _XMM5 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
  }
  v20.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  v20.m_quad.m128_f32[1] = v9;
  v20.m_quad.m128_f32[2] = v10;
  v20.m_quad.m128_f32[3] = 0.0;
  qi.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v18) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 723, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v18) )
      __debugbreak();
  }
  if ( (v19[0] & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v18) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 724, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v18) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v18) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 728, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v18) )
      __debugbreak();
  }
  if ( !hkQuaternionf::isOk(&qi, 0.001) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 731, ASSERT_TYPE_ASSERT, "(hkOrientation.isOk())", (const char *)&queryFormat, "hkOrientation.isOk()") )
    __debugbreak();
  hkRotationImpl<float>::set(&v22.m_rotation, &qi);
  v22.m_translation = (hkVector4f)v20.m_quad;
  if ( !hkTransformf::isOk(&v22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 735, ASSERT_TYPE_ASSERT, "(transform.isOk())", (const char *)&queryFormat, "transform.isOk()") )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, hkTransformf *, __int64))world->setBodyTransform)(&world->hknpWorldWriter, v19[0], &v22, 1i64);
  ((void (__fastcall *)(hknpBroadPhase *, unsigned int *, __int64))world->m_broadPhase->markBodiesDirty)(world->m_broadPhase, v19, 1i64);
}

/*
==============
Physics_GetGravity
==============
*/
void Physics_GetGravity(const Physics_WorldId worldId, vec3_t *gravity)
{
  hkVector4f v4; 
  Physics_WorldId v5; 
  __int64 v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v5 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  v4.m_quad = (__m128)HavokPhysics_GetConstWorld(worldId)->world->m_gravity;
  gravity->v[0] = v4.m_quad.m128_f32[0] * 32.0;
  gravity->v[1] = _mm_shuffle_ps(v4.m_quad, v4.m_quad, 85).m128_f32[0] * 32.0;
  gravity->v[2] = _mm_shuffle_ps(v4.m_quad, v4.m_quad, 170).m128_f32[0] * 32.0;
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
  __m128 v8; 
  __int64 v9; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 275, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 276, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 277, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v9) )
      __debugbreak();
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 403, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 404, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v9) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 408, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v9) )
      __debugbreak();
  }
  v7 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, bodyId);
  v8 = *(__m128 *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v7 + 64)) + 64);
  linVel->v[0] = v8.m128_f32[0] * 32.0;
  linVel->v[1] = _mm_shuffle_ps(v8, v8, 85).m128_f32[0] * 32.0;
  linVel->v[2] = _mm_shuffle_ps(v8, v8, 170).m128_f32[0] * 32.0;
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
  __int64 v15; 
  hkVector4f v16; 
  hkQuaternionf qi; 
  hkTransformf v18; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 484, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 486, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v15) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 487, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 488, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  _XMM5 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rsi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rsi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rsi+0Ch], 30h ; '0'
  }
  v16.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  v16.m_quad.m128_f32[1] = 0.03125 * position->v[1];
  v16.m_quad.m128_f32[2] = 0.03125 * position->v[2];
  v16.m_quad.m128_f32[3] = 0.0;
  qi.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 639, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 640, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v15) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 644, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v15) )
      __debugbreak();
  }
  if ( !hkQuaternionf::isOk(&qi, 0.001) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 647, ASSERT_TYPE_ASSERT, "(hkOrientation.isOk())", (const char *)&queryFormat, "hkOrientation.isOk()") )
    __debugbreak();
  hkRotationImpl<float>::set(&v18.m_rotation, &qi);
  v18.m_translation = (hkVector4f)v16.m_quad;
  hknpBody::setTransform(&world->m_bodyManager.m_bodies.m_objects.m_data[bodyId & 0xFFFFFF].m_pod, &v18);
}

/*
==============
Physics_AntilagWarpRigidBodyTo
==============
*/
Physics_MovementType Physics_AntilagWarpRigidBodyTo(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, vec3_t *restorePosition, vec4_t *restoreOrientationAsQuat)
{
  float v10; 
  float v11; 
  Physics_MovementType result; 
  float v19; 
  float v20; 
  vec4_t m_quad; 
  __int64 v22; 
  Physics_WorldId v23; 
  hkVector4f hkPosition; 
  hkQuaternionf hkRestoreOrientation; 
  hkVector4f hkRestorePosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 447, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v23 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 448, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v22) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 449, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v22) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 450, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 451, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  v10 = 0.03125 * position->v[1];
  v11 = 0.03125 * position->v[2];
  _XMM5 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  hkPosition.m_quad.m128_f32[1] = v10;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  hkPosition.m_quad.m128_f32[2] = v11;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  result = HavokPhysics_AntilagWarpRigidBodyTo(worldId, (const hknpBodyId)bodyId, &hkPosition, &hkOrientation, &hkRestorePosition, &hkRestoreOrientation);
  if ( result )
  {
    v19 = 32.0 * hkRestorePosition.m_quad.m128_f32[0];
    v20 = 32.0 * hkRestorePosition.m_quad.m128_f32[2];
    restorePosition->v[1] = 32.0 * hkRestorePosition.m_quad.m128_f32[1];
    m_quad = (vec4_t)hkRestoreOrientation.m_vec.m_quad;
    restorePosition->v[0] = v19;
    restorePosition->v[2] = v20;
    *restoreOrientationAsQuat = m_quad;
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
  __int64 v7; 
  hkVector4f v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 550, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 551, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 552, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v7) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 553, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  v8.m_quad.m128_f32[1] = 0.03125 * position->v[1];
  v8.m_quad.m128_f32[3] = 0.0;
  v8.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  v8.m_quad.m128_f32[2] = 0.03125 * position->v[2];
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 706, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 707, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v7) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 711, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v7) )
      __debugbreak();
  }
  world->m_bodyManager.m_bodies.m_objects.m_data[bodyId & 0xFFFFFF].m_pod.m_transform.m_translation = (hkVector4f)v8.m_quad;
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
double Physics_GetPerlinNoise2dValue(int seed, float frequency, float amplitude, int octaves, float persistence, int gridSize, int x, int y)
{
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( frequency <= 0.0 )
  {
    __asm { vxorpd  xmm3, xmm3, xmm3 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 664, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( frequency )", "%s < %s\n\t%g, %g", "0.0f", "frequency", *(double *)&_XMM3, frequency) )
      __debugbreak();
  }
  if ( (unsigned int)(octaves - 1) > 7 )
  {
    LODWORD(v15) = 8;
    LODWORD(v14) = 1;
    LODWORD(v13) = octaves;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 665, ASSERT_TYPE_ASSERT, "( 1 ) <= ( octaves ) && ( octaves ) <= ( (8) )", "octaves not in [1, MAX_PERLIN_NOISE_OCTAVES]\n\t%i not in [%i, %i]", v13, v14, v15) )
      __debugbreak();
  }
  if ( gridSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 666, ASSERT_TYPE_ASSERT, "(gridSize > 0)", "%s\n\tPhysics: Trying to get Perlin Noise 2D with an invalid Grid Side", "gridSize > 0") )
    __debugbreak();
  if ( (x < 0 || x >= gridSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 667, ASSERT_TYPE_ASSERT, "(x >= 0 && x < gridSize)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for X. It must be 0..GridSide-1", "x >= 0 && x < gridSize") )
    __debugbreak();
  if ( (y < 0 || y >= gridSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 668, ASSERT_TYPE_ASSERT, "(y >= 0 && y < gridSize)", "%s\n\tPhysics: Trying to get Perlin Noise 2D out of bounds for Y. It must be 0..GridSide-1", "y >= 0 && y < gridSize") )
    __debugbreak();
  return HavokPhysics_GetPerlinNoise2dValue(seed, frequency, amplitude, octaves, persistence, gridSize, x, y);
}

/*
==============
Physics_ZeroRigidBodyLinAngVel
==============
*/
void Physics_ZeroRigidBodyLinAngVel(const Physics_WorldId worldId, const unsigned int bodyId)
{
  hknpWorld *world; 
  __int64 v5; 
  __int128 v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 409, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Zero Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 410, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Zero Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 411, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Zero Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v5) )
      __debugbreak();
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 519, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Zero Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 520, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Zero Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", v5) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 524, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics SetRigidBodyLinAngVel %i: world is NULL", "world", v5) )
      __debugbreak();
  }
  v6 = 0i64;
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, __int128 *, __int128 *, _DWORD))world->setBodyVelocity)(&world->hknpWorldWriter, bodyId, &v6, &v6, 0);
}


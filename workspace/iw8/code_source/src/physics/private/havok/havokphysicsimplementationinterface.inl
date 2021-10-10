/*
==============
HavokPhysics_GetRigidBodyID
==============
*/

hknpBodyId *__fastcall HavokPhysics_GetRigidBodyID(hknpBodyId *result, const Physics_WorldId worldId, const unsigned int instanceId, const unsigned int bodyIdx)
{
  return ?HavokPhysics_GetRigidBodyID@@YA?AUhknpBodyId@@W4Physics_WorldId@@II@Z(result, worldId, instanceId, bodyIdx);
}

/*
==============
HavokPhysics_GetRigidBodyPointVel
==============
*/

void __fastcall HavokPhysics_GetRigidBodyPointVel(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *point, hkVector4f *pointVel)
{
  ?HavokPhysics_GetRigidBodyPointVel@@YAXW4Physics_WorldId@@UhknpBodyId@@AEBVhkVector4f@@AEAV3@@Z(worldId, bodyId, point, pointVel);
}

/*
==============
HavokPhysics_GetPerlinNoise2dValue
==============
*/

double __fastcall HavokPhysics_GetPerlinNoise2dValue(int seed, float frequency, float amplitude, int octaves, float persistence, int gridSize, int x, int y)
{
  double result; 

  *(float *)&result = ?HavokPhysics_GetPerlinNoise2dValue@@YAMHMMHMHHH@Z(seed, frequency, amplitude, octaves, persistence, gridSize, x, y);
  return result;
}

/*
==============
HavokPhysics_GetNumRigidBodys
==============
*/

unsigned int __fastcall HavokPhysics_GetNumRigidBodys(const Physics_WorldId worldId, const unsigned int instanceId)
{
  return ?HavokPhysics_GetNumRigidBodys@@YAIW4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
HavokPhysics_GetRigidBodyLinAngVel
==============
*/

void __fastcall HavokPhysics_GetRigidBodyLinAngVel(const Physics_WorldId worldId, const hknpBodyId bodyId, hkVector4f *linVel, hkVector4f *angVel)
{
  ?HavokPhysics_GetRigidBodyLinAngVel@@YAXW4Physics_WorldId@@UhknpBodyId@@AEAVhkVector4f@@2@Z(worldId, bodyId, linVel, angVel);
}

/*
==============
HavokPhysics_AntilagWarpDetailBoundRigidBodyTo
==============
*/

Physics_MovementType __fastcall HavokPhysics_AntilagWarpDetailBoundRigidBodyTo(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *hkPosition, hkVector4f *hkRestorePosition)
{
  return ?HavokPhysics_AntilagWarpDetailBoundRigidBodyTo@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@UhknpBodyId@@AEBVhkVector4f@@AEAV4@@Z(worldId, bodyId, hkPosition, hkRestorePosition);
}

/*
==============
HavokPhysics_GetPerlinNoise2dValue
==============
*/

double __fastcall HavokPhysics_GetPerlinNoise2dValue(int seed, int gridSize, int x, int y)
{
  double result; 

  *(float *)&result = ?HavokPhysics_GetPerlinNoise2dValue@@YAMHHHH@Z(seed, gridSize, x, y);
  return result;
}

/*
==============
HavokPhysics_GetGravity
==============
*/

void __fastcall HavokPhysics_GetGravity(const Physics_WorldId worldId, hkVector4f *gravity)
{
  ?HavokPhysics_GetGravity@@YAXW4Physics_WorldId@@AEAVhkVector4f@@@Z(worldId, gravity);
}

/*
==============
HavokPhysics_GetConstWorld
==============
*/

const HavokPhysicsWorld *__fastcall HavokPhysics_GetConstWorld(Physics_WorldId worldId)
{
  return ?HavokPhysics_GetConstWorld@@YAPEBUHavokPhysicsWorld@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysics_AntilagWarpRigidBodyTo
==============
*/

Physics_MovementType __fastcall HavokPhysics_AntilagWarpRigidBodyTo(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *hkPosition, const hkQuaternionf *hkOrientation, hkVector4f *hkRestorePosition, hkQuaternionf *hkRestoreOrientation)
{
  return ?HavokPhysics_AntilagWarpRigidBodyTo@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@UhknpBodyId@@AEBVhkVector4f@@AEBVhkQuaternionf@@AEAV4@AEAV5@@Z(worldId, bodyId, hkPosition, hkOrientation, hkRestorePosition, hkRestoreOrientation);
}

/*
==============
HavokPhysics_WarpRigidBodyTo
==============
*/

Physics_MovementType __fastcall HavokPhysics_WarpRigidBodyTo(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *hkPosition, const hkQuaternionf *hkOrientation, const bool updateBroadphase, const bool activate)
{
  return ?HavokPhysics_WarpRigidBodyTo@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@UhknpBodyId@@AEBVhkVector4f@@AEBVhkQuaternionf@@_N4@Z(worldId, bodyId, hkPosition, hkOrientation, updateBroadphase, activate);
}

/*
==============
HavokPhysics_GetRigidBodyAngVel
==============
*/

void __fastcall HavokPhysics_GetRigidBodyAngVel(const Physics_WorldId worldId, const hknpBodyId bodyId, hkVector4f *angVel)
{
  ?HavokPhysics_GetRigidBodyAngVel@@YAXW4Physics_WorldId@@UhknpBodyId@@AEAVhkVector4f@@@Z(worldId, bodyId, angVel);
}

/*
==============
HavokPhysics_IsInstanceDetailBounded
==============
*/

bool __fastcall HavokPhysics_IsInstanceDetailBounded(const Physics_WorldId worldId, const unsigned int instanceId)
{
  return ?HavokPhysics_IsInstanceDetailBounded@@YA_NW4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
HavokPhysics_UpdateDetailBounds
==============
*/

void __fastcall HavokPhysics_UpdateDetailBounds(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *position, const float radius)
{
  ?HavokPhysics_UpdateDetailBounds@@YAXW4Physics_WorldId@@UhknpBodyId@@AEBVhkVector4f@@M@Z(worldId, bodyId, position, radius);
}

/*
==============
HavokPhysics_GetMutableWorld
==============
*/

HavokPhysicsWorld *__fastcall HavokPhysics_GetMutableWorld(Physics_WorldId worldId)
{
  return ?HavokPhysics_GetMutableWorld@@YAPEAUHavokPhysicsWorld@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
HavokPhysics_GetConstraintID
==============
*/

hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *__fastcall HavokPhysics_GetConstraintID(hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *result, const Physics_WorldId worldId, const unsigned int instanceId, const unsigned int constraintIdx)
{
  return ?HavokPhysics_GetConstraintID@@YA?AU?$hkHandle@I$0HPPPPPPP@UhknpConstraintIdDiscriminant@@@@W4Physics_WorldId@@II@Z(result, worldId, instanceId, constraintIdx);
}

/*
==============
HavokPhysics_GetConstWorld
==============
*/
HavokPhysicsWorld *HavokPhysics_GetConstWorld(Physics_WorldId worldId)
{
  __int64 v1; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 56, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavokPhysics: Trying to access invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  return &g_havokPhysicsWorlds[v1];
}

/*
==============
HavokPhysics_GetRigidBodyID
==============
*/
hknpBodyId *HavokPhysics_GetRigidBodyID(hknpBodyId *result, const Physics_WorldId worldId, const unsigned int instanceId, const unsigned int bodyIdx)
{
  __int64 v4; 
  __int64 v6; 
  const HavokPhysicsWorld *ConstWorld; 
  HavokPhysicsInstanceManager *p_instanceManager; 
  hknpBodyId *v10; 
  __int64 v11; 

  v4 = (int)bodyIdx;
  v6 = instanceId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 161, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (_DWORD)v6 == -1 )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 162, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get Rigid Body ID with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v11) )
      __debugbreak();
  }
  ConstWorld = HavokPhysics_GetConstWorld(worldId);
  if ( !ConstWorld->world )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 166, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get rigid Body Id %i: world is NULL", "havokPhysicsWorld->world", v11) )
      __debugbreak();
  }
  p_instanceManager = &ConstWorld->instanceManager;
  if ( !p_instanceManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 21, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 22, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v4 >= p_instanceManager->buffer[v6].bodies.m_size )
  {
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 167, ASSERT_TYPE_ASSERT, "(bodyIdx < HavokPhysicsInstanceManager_GetBodyCount( &havokPhysicsWorld->instanceManager, instanceId ))", "%s\n\tHavok Physics: Trying to Get Rigid Body ID with invalid body index %i in world %i", "bodyIdx < HavokPhysicsInstanceManager_GetBodyCount( &havokPhysicsWorld->instanceManager, instanceId )", v11, worldId) )
      __debugbreak();
  }
  if ( !p_instanceManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 49, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 50, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v10 = result;
  result->m_serialAndIndex = (unsigned int)p_instanceManager->buffer[v6].bodies.m_data[v4];
  return v10;
}

/*
==============
HavokPhysics_GetMutableWorld
==============
*/
HavokPhysicsWorld *HavokPhysics_GetMutableWorld(Physics_WorldId worldId)
{
  __int64 v1; 
  int v3; 

  v1 = worldId;
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tCan't access the mutable physics world within usermove workers", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  if ( (unsigned int)v1 > 7 )
  {
    v3 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 45, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavokPhysics: Trying to access invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v3) )
      __debugbreak();
  }
  return &g_havokPhysicsWorlds[v1];
}

/*
==============
HavokPhysics_GetRigidBodyLinAngVel
==============
*/
void HavokPhysics_GetRigidBodyLinAngVel(const Physics_WorldId worldId, const hknpBodyId bodyId, hkVector4f *linVel, hkVector4f *angVel)
{
  hknpWorld *world; 
  __int64 v9; 
  __int64 v10; 
  __m128 v12; 
  __m128 v13; 
  __m128 v15; 
  __m128 v16; 
  __int64 v17; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 437, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v17) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 438, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", v17) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v17) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 442, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v17) )
      __debugbreak();
  }
  v9 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, bodyId.m_serialAndIndex);
  v10 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v9 + 64));
  *linVel = *(hkVector4f *)(v10 + 64);
  _XMM7 = *(__m128 *)(v10 + 16);
  v12 = *(__m128 *)(v10 + 80);
  v13 = _mm_shuffle_ps(_XMM7, _XMM7, 255);
  __asm { vdpps   xmm0, xmm7, xmm4, 7Fh }
  v15 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v12, v12, 201), _XMM7), _mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 201), v12));
  v16 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_XMM0, _XMM7), _mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(v13, v13), g_vectorfConstants[21]), v12)), _mm128_mul_ps(_mm_shuffle_ps(v15, v15, 201), v13));
  angVel->m_quad = _mm128_add_ps(v16, v16);
}

/*
==============
HavokPhysics_WarpRigidBodyTo
==============
*/
__int64 HavokPhysics_WarpRigidBodyTo(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *hkPosition, const hkQuaternionf *hkOrientation, const bool updateBroadphase, const bool activate)
{
  const HavokPhysicsWorld *ConstWorld; 
  hkTransformf *v10; 
  BOOL isApproximatelyEqual; 
  unsigned int v13; 
  signed int i; 
  hknpWorld *world; 
  __int64 v16; 
  float zero[4]; 
  hkTransformf v18; 
  unsigned int m_serialAndIndex; 

  m_serialAndIndex = bodyId.m_serialAndIndex;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 536, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v16) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 537, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v16) )
      __debugbreak();
  }
  if ( !hkQuaternionf::isOk((hkQuaternionf *)hkOrientation, 0.001) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 540, ASSERT_TYPE_ASSERT, "(hkOrientation.isOk())", (const char *)&queryFormat, "hkOrientation.isOk()") )
    __debugbreak();
  hkRotationImpl<float>::set(&v18.m_rotation, hkOrientation);
  v18.m_translation = (hkVector4f)hkPosition->m_quad;
  ConstWorld = HavokPhysics_GetConstWorld(worldId);
  v10 = (hkTransformf *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))ConstWorld->world->getBodyTransform)(&ConstWorld->world->hknpWorldReader, m_serialAndIndex);
  zero[0] = FLOAT_0_0000099999997;
  if ( hkTransformf::isApproximatelyEqual(&v18, v10, zero) )
    return 0i64;
  if ( Sys_IsServerUserMoveWorker() )
  {
    zero[0] = FLOAT_0_0000099999997;
    isApproximatelyEqual = hkMatrix3Impl<float>::isApproximatelyEqual(&v10->m_rotation, &v18.m_rotation, zero);
    Com_Printf(20, "Current Rotation:\n");
    v13 = 0;
    for ( i = 0; (unsigned int)i < 3; ++i )
      Com_Printf(20, "%f %f %f\n", v10->m_rotation.m_col0.m_quad.m128_f32[i], v10->m_rotation.m_col1.m_quad.m128_f32[i], v10->m_rotation.m_col2.m_quad.m128_f32[i]);
    Com_Printf(20, "New Rotation:\n");
    do
    {
      Com_Printf(20, "%f %f %f\n", v18.m_rotation.m_col0.m_quad.m128_f32[v13], v18.m_rotation.m_col1.m_quad.m128_f32[v13], v18.m_rotation.m_col2.m_quad.m128_f32[v13]);
      ++v13;
    }
    while ( v13 < 3 );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 574, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should not be warping rigid bodies in user workers. Moving from %f %f %f to %f %f %f. Rotation Equal = %i.\n", v10->m_translation.m_quad.m128_f32[0], v10->m_translation.m_quad.m128_f32[1], v10->m_translation.m_quad.m128_f32[2], v18.m_translation.m_quad.m128_f32[0], v18.m_translation.m_quad.m128_f32[1], v18.m_translation.m_quad.m128_f32[2], isApproximatelyEqual) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v16) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 580, ASSERT_TYPE_ASSERT, "(mutableWorld)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "mutableWorld", v16) )
      __debugbreak();
  }
  if ( !hkTransformf::isOk(&v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 582, ASSERT_TYPE_ASSERT, "(newTransform.isOk())", (const char *)&queryFormat, "newTransform.isOk()") )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, hkTransformf *, bool))world->setBodyTransform)(&world->hknpWorldWriter, m_serialAndIndex, &v18, !activate);
  ((void (__fastcall *)(hknpBroadPhase *, unsigned int *, __int64))world->m_broadPhase->markBodiesDirty)(world->m_broadPhase, &m_serialAndIndex, 1i64);
  if ( updateBroadphase )
    world->updateBroadPhase(&world->hknpWorldWriter);
  return 2i64;
}

/*
==============
HavokPhysics_GetPerlinNoise2dValue
==============
*/
float HavokPhysics_GetPerlinNoise2dValue(int seed, int gridSize, int x, int y)
{
  const __m128 *v6; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  __m128 v10; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  hkSimdFloat32 v20; 
  int v21; 
  int v22; 
  __m128 v23; 
  int m_octaves; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  hkSimdFloat32 v28; 
  int v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v36; 
  __m128 v37; 
  int v38; 
  int v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 
  __m128 v48; 
  int v49; 
  int v50; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 
  const __m128 *v56; 
  __m128 v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  const __m128 *v62; 
  __m128 v63; 
  __m128 v64; 
  hkSimdFloat32 v65; 
  __m128 v66; 
  int v67; 
  __m128 v68; 
  __m128 v69; 
  __m128 v70; 
  __m128 m_real; 
  int v75; 
  __m128 v76; 
  __m128 v77; 
  __m128 v79; 
  __m128 v80; 
  int v81; 
  int v82; 
  __m128 v83; 
  __m128 v84; 
  __m128 v85; 
  __m128 v86; 
  __m128 v87; 
  __m128 v88; 
  __m128 v89; 
  __m128 v90; 
  __m128 v91; 
  int v92; 
  int v93; 
  __m128 v94; 
  __m128 v95; 
  __m128 v96; 
  __m128 v97; 
  __m128 v98; 
  const __m128 *v99; 
  __m128 v100; 
  __m128 v101; 
  __m128 v102; 
  __m128 v103; 
  __m128 v104; 
  const __m128 *v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v109; 
  int v110; 
  __m128 v111; 
  __m128 v112; 
  __m128 v113; 
  __m128 v114; 
  int v118; 
  __m128 v119; 
  __m128 v120; 
  __m128 v122; 
  __m128 v123; 
  int v124; 
  int v125; 
  __m128 v126; 
  __m128 v127; 
  __m128 v128; 
  __m128 v129; 
  __m128 v130; 
  __m128 v131; 
  __m128 v132; 
  __m128 v133; 
  __m128 v134; 
  int v135; 
  int v136; 
  __m128 v137; 
  __m128 v138; 
  __m128 v139; 
  __m128 v140; 
  __m128 v141; 
  const __m128 *v142; 
  __m128 v143; 
  __m128 v144; 
  __m128 v145; 
  __m128 v146; 
  __m128 v147; 
  const __m128 *v148; 
  __m128 v149; 
  __m128 v150; 
  __m128 v151; 
  __m128 v152; 
  __m128 v153; 
  __m128 v154; 
  __m128 v155; 
  int v159; 
  __m128 v160; 
  __m128 v161; 
  __m128 v163; 
  __m128 v164; 
  int v165; 
  int v166; 
  __m128 v167; 
  __m128 v168; 
  __m128 v169; 
  __m128 v170; 
  __m128 v171; 
  __m128 v172; 
  __m128 v173; 
  __m128 v174; 
  __m128 v175; 
  int v176; 
  int v177; 
  __m128 v178; 
  __m128 v179; 
  __m128 v180; 
  __m128 v181; 
  __m128 v182; 
  const __m128 *v183; 
  __m128 v184; 
  __m128 v185; 
  __m128 v186; 
  __m128 v187; 
  __m128 v188; 
  const __m128 *v189; 
  __m128 v190; 
  __m128 v191; 
  float v192; 
  __m128 v194; 
  __m128 v195; 
  __m128 v196; 
  __m128 v197; 
  hkSimdFloat32 v198; 
  __m128 v199; 
  __m128 v200; 
  __m128 v201; 
  __m128 v202; 
  __m128 v203; 
  __m128 v204; 
  __m128 v205; 
  __m128 v206; 
  __m128 v207; 
  __m128 v208; 
  __m128 v209; 
  __m128 v210; 
  __m128 v211; 
  __m128 v212; 
  __m128 v213; 
  __m128 v214; 
  __m128 v215; 
  __m128 v216; 
  __m128 v217; 
  __m128 v218; 
  __m128 v219; 
  __m128 v220; 
  __m128 v221; 
  __int64 v222; 
  __m128 result; 
  __m128 v224; 
  __m128 v225; 
  hkPerlinNoise2d v226; 

  v222 = -2i64;
  hkPerlinNoise2d::hkPerlinNoise2d(&v226, seed, gridSize);
  v7 = 0i64;
  v7.m128_f32[0] = (float)x;
  v206 = _mm_shuffle_ps(v7, v7, 0);
  v8 = 0i64;
  v8.m128_f32[0] = (float)y;
  v9 = _mm_shuffle_ps(v8, v8, 0);
  v199 = v9;
  v10 = 0i64;
  v10.m128_f32[0] = (float)(v226.m_N - 1);
  _XMM10 = _mm_shuffle_ps(v10, v10, 0);
  __asm { vrcpps  xmm2, xmm10 }
  v13 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM10, _XMM2)), _XMM2);
  v14 = _mm128_mul_ps(v13, v206);
  v219 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(v14, _mm128_mul_ps(v14, g_vectorfConstants[11])), _mm128_sub_ps(_mm_shuffle_ps((__m128)LODWORD(FLOAT_10_0), (__m128)LODWORD(FLOAT_10_0), 0), _mm128_mul_ps(v14, _mm_shuffle_ps((__m128)LODWORD(FLOAT_15_0), (__m128)LODWORD(FLOAT_15_0), 0)))), _mm128_mul_ps(v14, _mm128_mul_ps(v14, v14)));
  v15 = _mm128_mul_ps(v13, v9);
  v210 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v15, g_vectorfConstants[11]), v15), _mm128_sub_ps(_mm_shuffle_ps((__m128)LODWORD(FLOAT_10_0), (__m128)LODWORD(FLOAT_10_0), 0), _mm128_mul_ps(_mm_shuffle_ps((__m128)LODWORD(FLOAT_15_0), (__m128)LODWORD(FLOAT_15_0), 0), v15))), _mm128_mul_ps(_mm128_mul_ps(v15, v15), v15));
  v16 = v206;
  v17 = _mm128_sub_ps(_XMM10, v206);
  v212 = v17;
  v220 = _mm128_sub_ps(_XMM10, v9);
  v18 = g_vectorfConstants[6];
  v221 = _mm128_sub_ps(g_vectorfConstants[6], v219);
  v213 = _mm128_sub_ps(g_vectorfConstants[6], v210);
  v216 = _mm128_mul_ps(v210, v219);
  v19 = 0i64;
  v194 = 0i64;
  v198.m_real = (__m128)v226.m_amplitude;
  v20.m_real = (__m128)v226.m_frequency;
  v21 = 0;
  v22 = 0;
  v23 = (__m128)LODWORD(FLOAT_9_3132257eN10);
  m_octaves = v226.m_octaves;
  if ( v226.m_octaves > 0 )
  {
    v25 = (__m128)LODWORD(FLOAT_9_3132257eN10);
    v26 = _mm_shuffle_ps(v25, v25, 0);
    v202 = v26;
    v27 = _mm_shuffle_ps(v25, v25, 0);
    v208 = v27;
    v214 = _mm_shuffle_ps(v25, v25, 0);
    v215 = _mm_shuffle_ps(v25, v25, 0);
    v28.m_real = (__m128)v226.m_amplitude;
    do
    {
      _XMM3 = _mm128_mul_ps(v9, v20.m_real);
      _XMM2 = _mm128_mul_ps(v20.m_real, v16);
      __asm { vcvttps2dq xmm0, xmm2 }
      v32 = _XMM0;
      v33 = 0i64;
      v33.m128_f32[0] = (float)(int)_XMM0;
      v34 = _mm128_sub_ps(_XMM2, _mm_shuffle_ps(v33, v33, 0));
      __asm { vcvttps2dq xmm1, xmm3 }
      v36 = 0i64;
      v36.m128_f32[0] = (float)(int)_XMM1;
      v37 = _mm128_sub_ps(_XMM3, _mm_shuffle_ps(v36, v36, 0));
      v38 = (_XMM1 + 1) * v226.m_N;
      v39 = ((v38 + v32 + 1) << 13) ^ (v38 + v32 + 1);
      v40 = 0i64;
      v40.m128_f32[0] = (float)((v226.m_r3 + v39 * (v226.m_r2 + v226.m_r1 * v39 * v39)) & 0x7FFFFFFF);
      v41 = _mm128_sub_ps(v18, _mm128_mul_ps(v26, _mm_shuffle_ps(v40, v40, 0)));
      v42 = 0i64;
      v42.m128_f32[0] = (float)((v226.m_r3 + (((v38 + v32) << 13) ^ (v38 + v32)) * (v226.m_r2 + v226.m_r1 * (((v38 + v32) << 13) ^ (v38 + v32)) * (((v38 + v32) << 13) ^ (v38 + v32)))) & 0x7FFFFFFF);
      v43 = _mm128_sub_ps(v18, _mm128_mul_ps(v27, _mm_shuffle_ps(v42, v42, 0)));
      v44 = 0i64;
      v44.m128_f32[0] = _mm128_mul_ps(v34, g_vectorfConstants[54]).m128_f32[0];
      result = v44;
      hkMath::quadCos(&result, v6);
      v45 = 0i64;
      v45.m128_f32[0] = 0.0;
      v46 = _mm128_mul_ps(_mm128_sub_ps(v18, _mm_shuffle_ps(v45, v45, 0)), g_vectorfConstants[21]);
      v47 = g_vectorfConstants[6];
      v48 = _mm128_add_ps(_mm128_mul_ps(v46, v41), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v46), v43));
      v49 = _XMM1 * v226.m_N;
      v50 = ((v49 + v32 + 1) << 13) ^ (v49 + v32 + 1);
      v51 = 0i64;
      v51.m128_f32[0] = (float)((v226.m_r3 + v50 * (v226.m_r2 + v226.m_r1 * v50 * v50)) & 0x7FFFFFFF);
      v52 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v51, v51, 0), v214));
      v53 = 0i64;
      v53.m128_f32[0] = (float)((v226.m_r3 + (((v49 + v32) << 13) ^ (v49 + v32)) * (v226.m_r2 + v226.m_r1 * (((v49 + v32) << 13) ^ (v49 + v32)) * (((v49 + v32) << 13) ^ (v49 + v32)))) & 0x7FFFFFFF);
      v54 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v53, v53, 0), v215));
      v55 = 0i64;
      v55.m128_f32[0] = _mm128_mul_ps(v34, g_vectorfConstants[54]).m128_f32[0];
      v224 = v55;
      hkMath::quadCos(&v224, v56);
      v57 = 0i64;
      v57.m128_f32[0] = 0.0;
      v58 = _mm128_mul_ps(_mm128_sub_ps(v47, _mm_shuffle_ps(v57, v57, 0)), g_vectorfConstants[21]);
      v59 = g_vectorfConstants[6];
      v60 = _mm128_add_ps(_mm128_mul_ps(v58, v52), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v58), v54));
      v61 = 0i64;
      v61.m128_f32[0] = _mm128_mul_ps(v37, g_vectorfConstants[54]).m128_f32[0];
      v225 = v61;
      hkMath::quadCos(&v225, v62);
      v63 = 0i64;
      v63.m128_f32[0] = 0.0;
      v64 = _mm128_mul_ps(_mm128_sub_ps(v59, _mm_shuffle_ps(v63, v63, 0)), g_vectorfConstants[21]);
      v18 = g_vectorfConstants[6];
      v19 = _mm128_add_ps(_mm128_mul_ps(v28.m_real, _mm128_add_ps(_mm128_mul_ps(v64, v48), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v64), v60))), v194);
      v194 = v19;
      v20.m_real = _mm128_add_ps(v20.m_real, v20.m_real);
      v28.m_real = _mm128_mul_ps(v28.m_real, v226.m_persistence.m_real);
      ++v22;
      m_octaves = v226.m_octaves;
      v9 = v199;
      v16 = v206;
      v26 = v202;
      v27 = v208;
    }
    while ( v22 < v226.m_octaves );
    v198.m_real = (__m128)v226.m_amplitude;
    v20.m_real = (__m128)v226.m_frequency;
    v23 = (__m128)LODWORD(FLOAT_9_3132257eN10);
    v17 = v212;
  }
  v65.m_real = (__m128)v226.m_coverage;
  v218 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(v226.m_coverage.m_real, v19), v216), (__m128)0i64);
  v66 = 0i64;
  v195 = 0i64;
  v67 = 0;
  if ( m_octaves > 0 )
  {
    v68 = v23;
    v69 = _mm_shuffle_ps(v68, v68, 0);
    v217 = v69;
    v70 = _mm_shuffle_ps(v68, v68, 0);
    v209 = v70;
    v208 = _mm_shuffle_ps(v68, v68, 0);
    v203 = _mm_shuffle_ps(v68, v68, 0);
    m_real = v198.m_real;
    do
    {
      _XMM3 = _mm128_mul_ps(v9, v20.m_real);
      _XMM2 = _mm128_mul_ps(v20.m_real, v17);
      __asm { vcvttps2dq xmm0, xmm2 }
      v75 = _XMM0;
      v76 = 0i64;
      v76.m128_f32[0] = (float)(int)_XMM0;
      v77 = _mm128_sub_ps(_XMM2, _mm_shuffle_ps(v76, v76, 0));
      __asm { vcvttps2dq xmm1, xmm3 }
      v79 = 0i64;
      v79.m128_f32[0] = (float)(int)_XMM1;
      v80 = _mm128_sub_ps(_XMM3, _mm_shuffle_ps(v79, v79, 0));
      v81 = v226.m_N * (_XMM1 + 1);
      v82 = ((v75 + v81 + 1) << 13) ^ (v75 + v81 + 1);
      v83 = 0i64;
      v83.m128_f32[0] = (float)((v226.m_r3 + v82 * (v226.m_r2 + v226.m_r1 * v82 * v82)) & 0x7FFFFFFF);
      v84 = _mm128_sub_ps(v18, _mm128_mul_ps(v69, _mm_shuffle_ps(v83, v83, 0)));
      v85 = 0i64;
      v85.m128_f32[0] = (float)((v226.m_r3 + (((v75 + v81) << 13) ^ (v75 + v81)) * (v226.m_r2 + v226.m_r1 * (((v75 + v81) << 13) ^ (v75 + v81)) * (((v75 + v81) << 13) ^ (v75 + v81)))) & 0x7FFFFFFF);
      v86 = _mm128_sub_ps(v18, _mm128_mul_ps(v70, _mm_shuffle_ps(v85, v85, 0)));
      v87 = 0i64;
      v87.m128_f32[0] = _mm128_mul_ps(v77, g_vectorfConstants[54]).m128_f32[0];
      v216 = v87;
      hkMath::quadCos(&v216, v6);
      v88 = 0i64;
      v88.m128_f32[0] = 0.0;
      v89 = _mm128_mul_ps(_mm128_sub_ps(v18, _mm_shuffle_ps(v88, v88, 0)), g_vectorfConstants[21]);
      v90 = g_vectorfConstants[6];
      v91 = _mm128_add_ps(_mm128_mul_ps(v89, v84), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v89), v86));
      v92 = v226.m_N * _XMM1;
      v93 = ((v75 + v92 + 1) << 13) ^ (v75 + v92 + 1);
      v94 = 0i64;
      v94.m128_f32[0] = (float)((v226.m_r3 + v93 * (v226.m_r2 + v226.m_r1 * v93 * v93)) & 0x7FFFFFFF);
      v95 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v94, v94, 0), v208));
      v96 = 0i64;
      v96.m128_f32[0] = (float)((v226.m_r3 + (((v75 + v92) << 13) ^ (v75 + v92)) * (v226.m_r2 + (((v75 + v92) << 13) ^ (v75 + v92)) * (((v75 + v92) << 13) ^ (v75 + v92)) * v226.m_r1)) & 0x7FFFFFFF);
      v97 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v96, v96, 0), v203));
      v98 = 0i64;
      v98.m128_f32[0] = _mm128_mul_ps(v77, g_vectorfConstants[54]).m128_f32[0];
      v215 = v98;
      hkMath::quadCos(&v215, v99);
      v100 = 0i64;
      v100.m128_f32[0] = 0.0;
      v101 = _mm128_mul_ps(_mm128_sub_ps(v90, _mm_shuffle_ps(v100, v100, 0)), g_vectorfConstants[21]);
      v102 = g_vectorfConstants[6];
      v103 = _mm128_add_ps(_mm128_mul_ps(v101, v95), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v101), v97));
      v104 = 0i64;
      v104.m128_f32[0] = _mm128_mul_ps(v80, g_vectorfConstants[54]).m128_f32[0];
      v214 = v104;
      hkMath::quadCos(&v214, v105);
      v106 = 0i64;
      v106.m128_f32[0] = 0.0;
      v107 = _mm128_mul_ps(_mm128_sub_ps(v102, _mm_shuffle_ps(v106, v106, 0)), g_vectorfConstants[21]);
      v18 = g_vectorfConstants[6];
      v66 = _mm128_add_ps(_mm128_mul_ps(m_real, _mm128_add_ps(_mm128_mul_ps(v107, v91), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v107), v103))), v195);
      v195 = v66;
      v20.m_real = _mm128_add_ps(v20.m_real, v20.m_real);
      m_real = _mm128_mul_ps(m_real, v226.m_persistence.m_real);
      ++v67;
      m_octaves = v226.m_octaves;
      v9 = v199;
      v69 = v217;
      v70 = v209;
      v17 = v212;
    }
    while ( v67 < v226.m_octaves );
    v65.m_real = (__m128)v226.m_coverage;
    v198.m_real = (__m128)v226.m_amplitude;
    v20.m_real = (__m128)v226.m_frequency;
    v23 = (__m128)LODWORD(FLOAT_9_3132257eN10);
  }
  v211 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(v65.m_real, v66), _mm128_mul_ps(v221, v210)), v218);
  v108 = v213;
  v109 = 0i64;
  v196 = 0i64;
  v110 = 0;
  if ( m_octaves > 0 )
  {
    v111 = v23;
    v112 = _mm_shuffle_ps(v111, v111, 0);
    v204 = v112;
    v113 = _mm_shuffle_ps(v111, v111, 0);
    v200 = v113;
    v210 = _mm_shuffle_ps(v111, v111, 0);
    v209 = _mm_shuffle_ps(v111, v111, 0);
    v114 = v198.m_real;
    do
    {
      _XMM3 = _mm128_mul_ps(v20.m_real, v220);
      _XMM2 = _mm128_mul_ps(v20.m_real, v206);
      __asm { vcvttps2dq xmm0, xmm2 }
      v118 = _XMM0;
      v119 = 0i64;
      v119.m128_f32[0] = (float)(int)_XMM0;
      v120 = _mm128_sub_ps(_XMM2, _mm_shuffle_ps(v119, v119, 0));
      __asm { vcvttps2dq xmm1, xmm3 }
      v122 = 0i64;
      v122.m128_f32[0] = (float)(int)_XMM1;
      v123 = _mm128_sub_ps(_XMM3, _mm_shuffle_ps(v122, v122, 0));
      v124 = (_XMM1 + 1) * v226.m_N;
      v125 = ((v118 + v124 + 1) << 13) ^ (v118 + v124 + 1);
      v126 = 0i64;
      v126.m128_f32[0] = (float)((v226.m_r3 + v125 * (v226.m_r2 + v226.m_r1 * v125 * v125)) & 0x7FFFFFFF);
      v127 = _mm128_sub_ps(v18, _mm128_mul_ps(v112, _mm_shuffle_ps(v126, v126, 0)));
      v128 = 0i64;
      v128.m128_f32[0] = (float)((v226.m_r3 + (((v118 + v124) << 13) ^ (v118 + v124)) * (v226.m_r2 + v226.m_r1 * (((v118 + v124) << 13) ^ (v118 + v124)) * (((v118 + v124) << 13) ^ (v118 + v124)))) & 0x7FFFFFFF);
      v129 = _mm128_sub_ps(v18, _mm128_mul_ps(v113, _mm_shuffle_ps(v128, v128, 0)));
      v130 = 0i64;
      v130.m128_f32[0] = _mm128_mul_ps(v120, g_vectorfConstants[54]).m128_f32[0];
      v218 = v130;
      hkMath::quadCos(&v218, v6);
      v131 = 0i64;
      v131.m128_f32[0] = 0.0;
      v132 = _mm128_mul_ps(_mm128_sub_ps(v18, _mm_shuffle_ps(v131, v131, 0)), g_vectorfConstants[21]);
      v133 = g_vectorfConstants[6];
      v134 = _mm128_add_ps(_mm128_mul_ps(v132, v127), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v132), v129));
      v135 = _XMM1 * v226.m_N;
      v136 = ((v118 + v135 + 1) << 13) ^ (v118 + v135 + 1);
      v137 = 0i64;
      v137.m128_f32[0] = (float)((v226.m_r3 + v136 * (v226.m_r2 + v226.m_r1 * v136 * v136)) & 0x7FFFFFFF);
      v138 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v137, v137, 0), v210));
      v139 = 0i64;
      v139.m128_f32[0] = (float)((v226.m_r3 + (((v118 + v135) << 13) ^ (v118 + v135)) * (v226.m_r2 + v226.m_r1 * (((v118 + v135) << 13) ^ (v118 + v135)) * (((v118 + v135) << 13) ^ (v118 + v135)))) & 0x7FFFFFFF);
      v140 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v139, v139, 0), v209));
      v141 = 0i64;
      v141.m128_f32[0] = _mm128_mul_ps(v120, g_vectorfConstants[54]).m128_f32[0];
      v217 = v141;
      hkMath::quadCos(&v217, v142);
      v143 = 0i64;
      v143.m128_f32[0] = 0.0;
      v144 = _mm128_mul_ps(_mm128_sub_ps(v133, _mm_shuffle_ps(v143, v143, 0)), g_vectorfConstants[21]);
      v145 = g_vectorfConstants[6];
      v146 = _mm128_add_ps(_mm128_mul_ps(v144, v138), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v144), v140));
      v147 = 0i64;
      v147.m128_f32[0] = _mm128_mul_ps(v123, g_vectorfConstants[54]).m128_f32[0];
      v208 = v147;
      hkMath::quadCos(&v208, v148);
      v149 = 0i64;
      v149.m128_f32[0] = 0.0;
      v150 = _mm128_mul_ps(_mm128_sub_ps(v145, _mm_shuffle_ps(v149, v149, 0)), g_vectorfConstants[21]);
      v18 = g_vectorfConstants[6];
      v109 = _mm128_add_ps(_mm128_mul_ps(v114, _mm128_add_ps(_mm128_mul_ps(v150, v134), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v150), v146))), v196);
      v196 = v109;
      v20.m_real = _mm128_add_ps(v20.m_real, v20.m_real);
      v114 = _mm128_mul_ps(v114, v226.m_persistence.m_real);
      ++v110;
      m_octaves = v226.m_octaves;
      v112 = v204;
      v113 = v200;
    }
    while ( v110 < v226.m_octaves );
    v65.m_real = (__m128)v226.m_coverage;
    v198.m_real = (__m128)v226.m_amplitude;
    v20.m_real = (__m128)v226.m_frequency;
    v23 = (__m128)LODWORD(FLOAT_9_3132257eN10);
    v108 = v213;
  }
  v201 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(v65.m_real, v109), _mm128_mul_ps(v108, v219)), v211);
  v151 = 0i64;
  v197 = 0i64;
  if ( m_octaves > 0 )
  {
    v152 = v23;
    v153 = _mm_shuffle_ps(v152, v152, 0);
    v205 = v153;
    v154 = _mm_shuffle_ps(v152, v152, 0);
    v207 = v154;
    v211 = _mm_shuffle_ps(v152, v152, 0);
    v219 = _mm_shuffle_ps(v152, v152, 0);
    v155 = v211;
    do
    {
      _XMM3 = _mm128_mul_ps(v20.m_real, v220);
      _XMM2 = _mm128_mul_ps(v20.m_real, v212);
      __asm { vcvttps2dq xmm0, xmm2 }
      v159 = _XMM0;
      v160 = 0i64;
      v160.m128_f32[0] = (float)(int)_XMM0;
      v161 = _mm128_sub_ps(_XMM2, _mm_shuffle_ps(v160, v160, 0));
      __asm { vcvttps2dq xmm1, xmm3 }
      v163 = 0i64;
      v163.m128_f32[0] = (float)(int)_XMM1;
      v164 = _mm128_sub_ps(_XMM3, _mm_shuffle_ps(v163, v163, 0));
      v165 = v226.m_N * (_XMM1 + 1);
      v166 = ((v159 + v165 + 1) << 13) ^ (v159 + v165 + 1);
      v167 = 0i64;
      v167.m128_f32[0] = (float)((v226.m_r3 + v166 * (v226.m_r2 + v226.m_r1 * v166 * v166)) & 0x7FFFFFFF);
      v168 = _mm128_sub_ps(v18, _mm128_mul_ps(v153, _mm_shuffle_ps(v167, v167, 0)));
      v169 = 0i64;
      v169.m128_f32[0] = (float)((v226.m_r3 + (((v159 + v165) << 13) ^ (v159 + v165)) * (v226.m_r2 + v226.m_r1 * (((v159 + v165) << 13) ^ (v159 + v165)) * (((v159 + v165) << 13) ^ (v159 + v165)))) & 0x7FFFFFFF);
      v170 = _mm128_sub_ps(v18, _mm128_mul_ps(v154, _mm_shuffle_ps(v169, v169, 0)));
      v171 = 0i64;
      v171.m128_f32[0] = _mm128_mul_ps(v161, g_vectorfConstants[54]).m128_f32[0];
      v211 = v171;
      hkMath::quadCos(&v211, v6);
      v172 = 0i64;
      v172.m128_f32[0] = 0.0;
      v173 = _mm128_mul_ps(_mm128_sub_ps(v18, _mm_shuffle_ps(v172, v172, 0)), g_vectorfConstants[21]);
      v174 = g_vectorfConstants[6];
      v175 = _mm128_add_ps(_mm128_mul_ps(v173, v168), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v173), v170));
      v176 = v226.m_N * _XMM1;
      v177 = ((v159 + v176 + 1) << 13) ^ (v159 + v176 + 1);
      v178 = 0i64;
      v178.m128_f32[0] = (float)((v226.m_r3 + v177 * (v226.m_r2 + v226.m_r1 * v177 * v177)) & 0x7FFFFFFF);
      v179 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(v155, _mm_shuffle_ps(v178, v178, 0)));
      v180 = 0i64;
      v180.m128_f32[0] = (float)((v226.m_r3 + (((v159 + v176) << 13) ^ (v159 + v176)) * (v226.m_r2 + (((v159 + v176) << 13) ^ (v159 + v176)) * (((v159 + v176) << 13) ^ (v159 + v176)) * v226.m_r1)) & 0x7FFFFFFF);
      v181 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v180, v180, 0), v219));
      v182 = 0i64;
      v182.m128_f32[0] = _mm128_mul_ps(v161, g_vectorfConstants[54]).m128_f32[0];
      v210 = v182;
      hkMath::quadCos(&v210, v183);
      v184 = 0i64;
      v184.m128_f32[0] = 0.0;
      v185 = _mm128_mul_ps(_mm128_sub_ps(v174, _mm_shuffle_ps(v184, v184, 0)), g_vectorfConstants[21]);
      v186 = g_vectorfConstants[6];
      v187 = _mm128_add_ps(_mm128_mul_ps(v185, v179), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v185), v181));
      v188 = 0i64;
      v188.m128_f32[0] = _mm128_mul_ps(v164, g_vectorfConstants[54]).m128_f32[0];
      v209 = v188;
      hkMath::quadCos(&v209, v189);
      v190 = 0i64;
      v190.m128_f32[0] = 0.0;
      v191 = _mm128_mul_ps(_mm128_sub_ps(v186, _mm_shuffle_ps(v190, v190, 0)), g_vectorfConstants[21]);
      v18 = g_vectorfConstants[6];
      v151 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(v191, v175), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v191), v187)), v198.m_real), v197);
      v197 = v151;
      v20.m_real = _mm128_add_ps(v20.m_real, v20.m_real);
      v198.m_real = _mm128_mul_ps(v198.m_real, v226.m_persistence.m_real);
      ++v21;
      v153 = v205;
      v154 = v207;
    }
    while ( v21 < v226.m_octaves );
    v65.m_real = (__m128)v226.m_coverage;
    v108 = v213;
  }
  LODWORD(v192) = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(v65.m_real, v151), _mm128_mul_ps(v108, v221)), v201).m128_u32[0];
  hkReferencedObject::~hkReferencedObject(&v226);
  return v192;
}

/*
==============
HavokPhysics_GetRigidBodyAngVel
==============
*/
void HavokPhysics_GetRigidBodyAngVel(const Physics_WorldId worldId, const hknpBodyId bodyId, hkVector4f *angVel)
{
  hknpWorld *world; 
  __int64 v7; 
  __int64 v8; 
  __m128 v10; 
  __m128 v11; 
  __m128 v13; 
  __m128 v14; 
  __int64 v15; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 420, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body AgnVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 421, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body AngVel with invalid body id for world %i", "bodyId.isValid()", v15) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v15) )
      __debugbreak();
  }
  v7 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, bodyId.m_serialAndIndex);
  v8 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v7 + 64));
  _XMM7 = *(__m128 *)(v8 + 16);
  v10 = *(__m128 *)(v8 + 80);
  v11 = _mm_shuffle_ps(_XMM7, _XMM7, 255);
  __asm { vdpps   xmm0, xmm7, xmm4, 7Fh }
  v13 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v10, v10, 201), _XMM7), _mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 201), v10));
  v14 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_XMM0, _XMM7), _mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(v11, v11), g_vectorfConstants[21]), v10)), _mm128_mul_ps(_mm_shuffle_ps(v13, v13, 201), v11));
  angVel->m_quad = _mm128_add_ps(v14, v14);
}

/*
==============
HavokPhysics_AntilagWarpRigidBodyTo
==============
*/
__int64 HavokPhysics_AntilagWarpRigidBodyTo(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *hkPosition, const hkQuaternionf *hkOrientation, hkVector4f *hkRestorePosition, hkQuaternionf *hkRestoreOrientation)
{
  hkVector4f *v6; 
  hkQuaternionf *v8; 
  hknpWorld *world; 
  __int64 v12; 
  hknpBroadPhase *UndecoratedBroadPhase; 
  __int64 v15; 
  float zero[4]; 
  hkTransformf v17; 
  hknpBodyId ids; 

  ids.m_serialAndIndex = bodyId.m_serialAndIndex;
  v6 = hkRestorePosition;
  v8 = hkRestoreOrientation;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 601, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (ids.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 602, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v15) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 606, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v15) )
      __debugbreak();
  }
  if ( !hkQuaternionf::isOk((hkQuaternionf *)hkOrientation, 0.001) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 609, ASSERT_TYPE_ASSERT, "(hkOrientation.isOk())", (const char *)&queryFormat, "hkOrientation.isOk()") )
    __debugbreak();
  hkRotationImpl<float>::set(&v17.m_rotation, hkOrientation);
  v17.m_translation = (hkVector4f)hkPosition->m_quad;
  v12 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, ids.m_serialAndIndex);
  zero[0] = FLOAT_0_0000099999997;
  if ( hkTransformf::isApproximatelyEqual(&v17, (const hkTransformf *)v12, zero) )
    return 0i64;
  *v6 = *(hkVector4f *)(v12 + 48);
  hkQuaternionf::set(v8, (const hkRotationImpl<float> *)v12);
  hknpBody::setTransform(&world->m_bodyManager.m_bodies.m_objects.m_data[ids.m_serialAndIndex & 0xFFFFFF].m_pod, &v17);
  UndecoratedBroadPhase = hknpWorldUtil::getUndecoratedBroadPhase(world);
  hknpBroadPhase::markBodiesAntilag(UndecoratedBroadPhase, &ids, 1, 4);
  return 2i64;
}

/*
==============
HavokPhysics_AntilagWarpDetailBoundRigidBodyTo
==============
*/
__int64 HavokPhysics_AntilagWarpDetailBoundRigidBodyTo(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *hkPosition, hkVector4f *hkRestorePosition)
{
  hknpWorld *world; 
  hkVector4f v9; 
  unsigned int m_serialAndIndex; 
  hknpBroadPhase *UndecoratedBroadPhase; 
  __int64 v22; 
  hknpBodyId ids; 

  ids.m_serialAndIndex = bodyId.m_serialAndIndex;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 676, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (ids.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v22) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 677, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v22) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v22) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 681, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v22) )
      __debugbreak();
  }
  _XMM1 = *(_OWORD *)hkMath::hkSse_signMask;
  v9.m_quad = *(__m128 *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, ids.m_serialAndIndex) + 48);
  _mm128_sub_ps(hkPosition->m_quad, v9.m_quad);
  __asm
  {
    vandnps xmm3, xmm1, xmm2
    vcmpleps xmm4, xmm3, cs:__xmm@3727c5ac3727c5ac3727c5ac3727c5ac
    vpxor   xmm1, xmm1, xmm1
    vpcmpeqd xmm2, xmm1, xmm1
  }
  _XMM0 = 0i64;
  __asm
  {
    vblendps xmm2, xmm0, xmm2, 7
    vpand   xmm1, xmm4, xmm2
    vptest  xmm1, xmm2
  }
  if ( _CF )
    return 0i64;
  m_serialAndIndex = ids.m_serialAndIndex;
  *hkRestorePosition = (hkVector4f)v9.m_quad;
  world->m_bodyManager.m_bodies.m_objects.m_data[m_serialAndIndex & 0xFFFFFF].m_pod.m_transform.m_translation = (hkVector4f)hkPosition->m_quad;
  UndecoratedBroadPhase = hknpWorldUtil::getUndecoratedBroadPhase(world);
  hknpBroadPhase::markBodiesAntilag(UndecoratedBroadPhase, &ids, 1, 4);
  return 2i64;
}

/*
==============
HavokPhysics_GetPerlinNoise2dValue
==============
*/
float HavokPhysics_GetPerlinNoise2dValue(int seed, float frequency, float amplitude, int octaves, float persistence, int gridSize, int x, int y)
{
  const __m128 *v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v13; 
  hkSimdFloat32 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  int v28; 
  int v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  int v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v42; 
  __m128 v43; 
  int v44; 
  int v45; 
  __m128 v46; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  int v55; 
  int v56; 
  __m128 v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  const __m128 *v62; 
  __m128 v63; 
  __m128 v64; 
  __m128 v65; 
  __m128 v66; 
  __m128 v67; 
  const __m128 *v68; 
  __m128 v69; 
  __m128 v70; 
  __m128 v71; 
  int v72; 
  __m128 v73; 
  __m128 v74; 
  __m128 v75; 
  __m128 v76; 
  int v80; 
  __m128 v81; 
  __m128 v82; 
  __m128 v84; 
  __m128 v85; 
  int v86; 
  int v87; 
  __m128 v88; 
  __m128 v89; 
  __m128 v90; 
  __m128 v91; 
  __m128 v92; 
  __m128 v93; 
  __m128 v94; 
  __m128 v95; 
  __m128 v96; 
  int v97; 
  int v98; 
  __m128 v99; 
  __m128 v100; 
  __m128 v101; 
  __m128 v102; 
  __m128 v103; 
  const __m128 *v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v109; 
  const __m128 *v110; 
  __m128 v111; 
  __m128 v112; 
  __m128 v113; 
  __m128 v114; 
  int v115; 
  __m128 v116; 
  __m128 v117; 
  __m128 v118; 
  __m128 v119; 
  int v123; 
  __m128 v124; 
  __m128 v125; 
  __m128 v127; 
  __m128 v128; 
  int v129; 
  int v130; 
  __m128 v131; 
  __m128 v132; 
  __m128 v133; 
  __m128 v134; 
  __m128 v135; 
  __m128 v136; 
  __m128 v137; 
  __m128 v138; 
  __m128 v139; 
  int v140; 
  int v141; 
  __m128 v142; 
  __m128 v143; 
  __m128 v144; 
  __m128 v145; 
  __m128 v146; 
  const __m128 *v147; 
  __m128 v148; 
  __m128 v149; 
  __m128 v150; 
  __m128 v151; 
  __m128 v152; 
  const __m128 *v153; 
  __m128 v154; 
  __m128 v155; 
  __m128 v156; 
  __m128 v157; 
  __m128 v158; 
  __m128 v159; 
  __m128 v160; 
  int v164; 
  __m128 v165; 
  __m128 v166; 
  __m128 v168; 
  __m128 v169; 
  int v170; 
  int v171; 
  __m128 v172; 
  __m128 v173; 
  __m128 v174; 
  __m128 v175; 
  __m128 v176; 
  __m128 v177; 
  __m128 v178; 
  __m128 v179; 
  __m128 v180; 
  int v181; 
  int v182; 
  __m128 v183; 
  __m128 v184; 
  __m128 v185; 
  __m128 v186; 
  __m128 v187; 
  const __m128 *v188; 
  __m128 v189; 
  __m128 v190; 
  __m128 v191; 
  __m128 v192; 
  __m128 v193; 
  const __m128 *v194; 
  __m128 v195; 
  __m128 v196; 
  float v197; 
  __m128 v199; 
  __m128 v200; 
  __m128 v201; 
  __m128 v202; 
  __m128 m_real; 
  __m128 v204; 
  __m128 v205; 
  __m128 v206; 
  __m128 v207; 
  __m128 v208; 
  __m128 v209; 
  __m128 v210; 
  __m128 v211; 
  __m128 v212; 
  __m128 v213; 
  __m128 v214; 
  __m128 v215; 
  __m128 v216; 
  __m128 v217; 
  __m128 v218; 
  __m128 v219; 
  __m128 v220; 
  __m128 v221; 
  __m128 v222; 
  __m128 v223; 
  __m128 v224; 
  __m128 v225; 
  __m128 v226; 
  __int64 v227; 
  __m128 result; 
  __m128 v229; 
  __m128 v230; 
  hkPerlinNoise2d v231; 

  v227 = -2i64;
  hkPerlinNoise2d::hkPerlinNoise2d(&v231, seed, gridSize);
  v10 = 0i64;
  v10.m128_f32[0] = frequency;
  v11 = _mm_shuffle_ps(v10, v10, 0);
  v231.m_frequency.m_real = v11;
  v231.m_octaves = octaves;
  __asm { vbroadcastss xmm1, [rbp+200h+persistence] }
  v231.m_persistence = (hkSimdFloat32)_XMM1.m_real;
  v13 = 0i64;
  v13.m128_f32[0] = amplitude;
  m_real = _mm_shuffle_ps(v13, v13, 0);
  v231.m_amplitude.m_real = m_real;
  v14.m_real = 0i64;
  v231.m_coverage = 0i64;
  v15 = 0i64;
  v15.m128_f32[0] = (float)x;
  v211 = _mm_shuffle_ps(v15, v15, 0);
  v16 = 0i64;
  v16.m128_f32[0] = (float)y;
  v17 = _mm_shuffle_ps(v16, v16, 0);
  v204 = v17;
  v18 = 0i64;
  v18.m128_f32[0] = (float)(v231.m_N - 1);
  _XMM10 = _mm_shuffle_ps(v18, v18, 0);
  __asm { vrcpps  xmm2, xmm10 }
  v21 = _mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatTwo, _mm128_mul_ps(_XMM10, _XMM2)), _XMM2);
  v22 = _mm128_mul_ps(v211, v21);
  v224 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v22, g_vectorfConstants[11]), v22), _mm128_sub_ps(_mm_shuffle_ps((__m128)LODWORD(FLOAT_10_0), (__m128)LODWORD(FLOAT_10_0), 0), _mm128_mul_ps(_mm_shuffle_ps((__m128)LODWORD(FLOAT_15_0), (__m128)LODWORD(FLOAT_15_0), 0), v22))), _mm128_mul_ps(v22, _mm128_mul_ps(v22, v22)));
  v23 = _mm128_mul_ps(v21, v17);
  v215 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v23, g_vectorfConstants[11]), v23), _mm128_sub_ps(_mm_shuffle_ps((__m128)LODWORD(FLOAT_10_0), (__m128)LODWORD(FLOAT_10_0), 0), _mm128_mul_ps(_mm_shuffle_ps((__m128)LODWORD(FLOAT_15_0), (__m128)LODWORD(FLOAT_15_0), 0), v23))), _mm128_mul_ps(_mm128_mul_ps(v23, v23), v23));
  v24 = v211;
  v25 = _mm128_sub_ps(_XMM10, v211);
  v217 = v25;
  v225 = _mm128_sub_ps(_XMM10, v17);
  v26 = g_vectorfConstants[6];
  v226 = _mm128_sub_ps(g_vectorfConstants[6], v224);
  v218 = _mm128_sub_ps(g_vectorfConstants[6], v215);
  v221 = _mm128_mul_ps(v215, v224);
  v27 = 0i64;
  v199 = 0i64;
  v28 = 0;
  v29 = 0;
  v30 = (__m128)LODWORD(FLOAT_9_3132257eN10);
  if ( octaves > 0 )
  {
    v31 = (__m128)LODWORD(FLOAT_9_3132257eN10);
    v32 = _mm_shuffle_ps(v31, v31, 0);
    v207 = v32;
    v33 = _mm_shuffle_ps(v31, v31, 0);
    v213 = v33;
    v219 = _mm_shuffle_ps(v31, v31, 0);
    v220 = _mm_shuffle_ps(v31, v31, 0);
    v34 = m_real;
    do
    {
      _XMM3 = _mm128_mul_ps(v11, v17);
      _XMM2 = _mm128_mul_ps(v24, v11);
      __asm { vcvttps2dq xmm0, xmm2 }
      v38 = _XMM0;
      v39 = 0i64;
      v39.m128_f32[0] = (float)(int)_XMM0;
      v40 = _mm128_sub_ps(_XMM2, _mm_shuffle_ps(v39, v39, 0));
      __asm { vcvttps2dq xmm1, xmm3 }
      v42 = 0i64;
      v42.m128_f32[0] = (float)(int)_XMM1;
      v43 = _mm128_sub_ps(_XMM3, _mm_shuffle_ps(v42, v42, 0));
      v44 = v231.m_N * (_XMM1 + 1);
      v45 = ((v44 + v38 + 1) << 13) ^ (v44 + v38 + 1);
      v46 = 0i64;
      v46.m128_f32[0] = (float)((v231.m_r3 + v45 * (v231.m_r2 + v231.m_r1 * v45 * v45)) & 0x7FFFFFFF);
      v47 = _mm128_sub_ps(v26, _mm128_mul_ps(v32, _mm_shuffle_ps(v46, v46, 0)));
      v48 = 0i64;
      v48.m128_f32[0] = (float)((v231.m_r3 + (((v44 + v38) << 13) ^ (v44 + v38)) * (v231.m_r2 + v231.m_r1 * (((v44 + v38) << 13) ^ (v44 + v38)) * (((v44 + v38) << 13) ^ (v44 + v38)))) & 0x7FFFFFFF);
      v49 = _mm128_sub_ps(v26, _mm128_mul_ps(v33, _mm_shuffle_ps(v48, v48, 0)));
      v50 = 0i64;
      v50.m128_f32[0] = _mm128_mul_ps(v40, g_vectorfConstants[54]).m128_f32[0];
      result = v50;
      hkMath::quadCos(&result, v9);
      v51 = 0i64;
      v51.m128_f32[0] = 0.0;
      v52 = _mm128_mul_ps(_mm128_sub_ps(v26, _mm_shuffle_ps(v51, v51, 0)), g_vectorfConstants[21]);
      v53 = g_vectorfConstants[6];
      v54 = _mm128_add_ps(_mm128_mul_ps(v52, v47), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v52), v49));
      v55 = v231.m_N * _XMM1;
      v56 = ((v38 + v55 + 1) << 13) ^ (v38 + v55 + 1);
      v57 = 0i64;
      v57.m128_f32[0] = (float)((v231.m_r3 + v56 * (v231.m_r2 + v231.m_r1 * v56 * v56)) & 0x7FFFFFFF);
      v58 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v57, v57, 0), v219));
      v59 = 0i64;
      v59.m128_f32[0] = (float)((v231.m_r3 + (((v38 + v55) << 13) ^ (v38 + v55)) * (v231.m_r2 + v231.m_r1 * (((v38 + v55) << 13) ^ (v38 + v55)) * (((v38 + v55) << 13) ^ (v38 + v55)))) & 0x7FFFFFFF);
      v60 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v59, v59, 0), v220));
      v61 = 0i64;
      v61.m128_f32[0] = _mm128_mul_ps(v40, g_vectorfConstants[54]).m128_f32[0];
      v229 = v61;
      hkMath::quadCos(&v229, v62);
      v63 = 0i64;
      v63.m128_f32[0] = 0.0;
      v64 = _mm128_mul_ps(_mm128_sub_ps(v53, _mm_shuffle_ps(v63, v63, 0)), g_vectorfConstants[21]);
      v65 = g_vectorfConstants[6];
      v66 = _mm128_add_ps(_mm128_mul_ps(v64, v58), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v64), v60));
      v67 = 0i64;
      v67.m128_f32[0] = _mm128_mul_ps(v43, g_vectorfConstants[54]).m128_f32[0];
      v230 = v67;
      hkMath::quadCos(&v230, v68);
      v69 = 0i64;
      v69.m128_f32[0] = 0.0;
      v70 = _mm128_mul_ps(_mm128_sub_ps(v65, _mm_shuffle_ps(v69, v69, 0)), g_vectorfConstants[21]);
      v26 = g_vectorfConstants[6];
      v27 = _mm128_add_ps(_mm128_mul_ps(v34, _mm128_add_ps(_mm128_mul_ps(v70, v54), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v70), v66))), v199);
      v199 = v27;
      v11 = _mm128_add_ps(v11, v11);
      v34 = _mm128_mul_ps(v34, v231.m_persistence.m_real);
      ++v29;
      octaves = v231.m_octaves;
      v17 = v204;
      v32 = v207;
      v33 = v213;
      v24 = v211;
    }
    while ( v29 < v231.m_octaves );
    v14.m_real = (__m128)v231.m_coverage;
    m_real = v231.m_amplitude.m_real;
    v11 = v231.m_frequency.m_real;
    v30 = (__m128)LODWORD(FLOAT_9_3132257eN10);
    v25 = v217;
  }
  v223 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(v14.m_real, v27), v221), (__m128)0i64);
  v71 = 0i64;
  v200 = 0i64;
  v72 = 0;
  if ( octaves > 0 )
  {
    v73 = v30;
    v74 = _mm_shuffle_ps(v73, v73, 0);
    v222 = v74;
    v75 = _mm_shuffle_ps(v73, v73, 0);
    v214 = v75;
    v213 = _mm_shuffle_ps(v73, v73, 0);
    v208 = _mm_shuffle_ps(v73, v73, 0);
    v76 = m_real;
    do
    {
      _XMM3 = _mm128_mul_ps(v11, v17);
      _XMM2 = _mm128_mul_ps(v11, v25);
      __asm { vcvttps2dq xmm0, xmm2 }
      v80 = _XMM0;
      v81 = 0i64;
      v81.m128_f32[0] = (float)(int)_XMM0;
      v82 = _mm128_sub_ps(_XMM2, _mm_shuffle_ps(v81, v81, 0));
      __asm { vcvttps2dq xmm1, xmm3 }
      v84 = 0i64;
      v84.m128_f32[0] = (float)(int)_XMM1;
      v85 = _mm128_sub_ps(_XMM3, _mm_shuffle_ps(v84, v84, 0));
      v86 = v231.m_N * (_XMM1 + 1);
      v87 = ((v80 + v86 + 1) << 13) ^ (v80 + v86 + 1);
      v88 = 0i64;
      v88.m128_f32[0] = (float)((v231.m_r3 + v87 * (v231.m_r2 + v231.m_r1 * v87 * v87)) & 0x7FFFFFFF);
      v89 = _mm128_sub_ps(v26, _mm128_mul_ps(v74, _mm_shuffle_ps(v88, v88, 0)));
      v90 = 0i64;
      v90.m128_f32[0] = (float)((v231.m_r3 + (((v80 + v86) << 13) ^ (v80 + v86)) * (v231.m_r2 + v231.m_r1 * (((v80 + v86) << 13) ^ (v80 + v86)) * (((v80 + v86) << 13) ^ (v80 + v86)))) & 0x7FFFFFFF);
      v91 = _mm128_sub_ps(v26, _mm128_mul_ps(v75, _mm_shuffle_ps(v90, v90, 0)));
      v92 = 0i64;
      v92.m128_f32[0] = _mm128_mul_ps(v82, g_vectorfConstants[54]).m128_f32[0];
      v221 = v92;
      hkMath::quadCos(&v221, v9);
      v93 = 0i64;
      v93.m128_f32[0] = 0.0;
      v94 = _mm128_mul_ps(_mm128_sub_ps(v26, _mm_shuffle_ps(v93, v93, 0)), g_vectorfConstants[21]);
      v95 = g_vectorfConstants[6];
      v96 = _mm128_add_ps(_mm128_mul_ps(v94, v89), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v94), v91));
      v97 = v231.m_N * _XMM1;
      v98 = ((v80 + v97 + 1) << 13) ^ (v80 + v97 + 1);
      v99 = 0i64;
      v99.m128_f32[0] = (float)((v231.m_r3 + v98 * (v231.m_r2 + v98 * v98 * v231.m_r1)) & 0x7FFFFFFF);
      v100 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v99, v99, 0), v213));
      v101 = 0i64;
      v101.m128_f32[0] = (float)((v231.m_r3 + (((v80 + v97) << 13) ^ (v80 + v97)) * (v231.m_r2 + (((v80 + v97) << 13) ^ (v80 + v97)) * (((v80 + v97) << 13) ^ (v80 + v97)) * v231.m_r1)) & 0x7FFFFFFF);
      v102 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v101, v101, 0), v208));
      v103 = 0i64;
      v103.m128_f32[0] = _mm128_mul_ps(v82, g_vectorfConstants[54]).m128_f32[0];
      v220 = v103;
      hkMath::quadCos(&v220, v104);
      v105 = 0i64;
      v105.m128_f32[0] = 0.0;
      v106 = _mm128_mul_ps(_mm128_sub_ps(v95, _mm_shuffle_ps(v105, v105, 0)), g_vectorfConstants[21]);
      v107 = g_vectorfConstants[6];
      v108 = _mm128_add_ps(_mm128_mul_ps(v106, v100), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v106), v102));
      v109 = 0i64;
      v109.m128_f32[0] = _mm128_mul_ps(v85, g_vectorfConstants[54]).m128_f32[0];
      v219 = v109;
      hkMath::quadCos(&v219, v110);
      v111 = 0i64;
      v111.m128_f32[0] = 0.0;
      v112 = _mm128_mul_ps(_mm128_sub_ps(v107, _mm_shuffle_ps(v111, v111, 0)), g_vectorfConstants[21]);
      v26 = g_vectorfConstants[6];
      v71 = _mm128_add_ps(_mm128_mul_ps(v76, _mm128_add_ps(_mm128_mul_ps(v112, v96), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v112), v108))), v200);
      v200 = v71;
      v11 = _mm128_add_ps(v11, v11);
      v76 = _mm128_mul_ps(v76, v231.m_persistence.m_real);
      ++v72;
      octaves = v231.m_octaves;
      v17 = v204;
      v74 = v222;
      v75 = v214;
      v25 = v217;
    }
    while ( v72 < v231.m_octaves );
    v14.m_real = (__m128)v231.m_coverage;
    m_real = v231.m_amplitude.m_real;
    v11 = v231.m_frequency.m_real;
    v30 = (__m128)LODWORD(FLOAT_9_3132257eN10);
  }
  v216 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(v14.m_real, v71), _mm128_mul_ps(v226, v215)), v223);
  v113 = v218;
  v114 = 0i64;
  v201 = 0i64;
  v115 = 0;
  if ( octaves > 0 )
  {
    v116 = v30;
    v117 = _mm_shuffle_ps(v116, v116, 0);
    v209 = v117;
    v118 = _mm_shuffle_ps(v116, v116, 0);
    v205 = v118;
    v215 = _mm_shuffle_ps(v116, v116, 0);
    v214 = _mm_shuffle_ps(v116, v116, 0);
    v119 = m_real;
    do
    {
      _XMM3 = _mm128_mul_ps(v11, v225);
      _XMM2 = _mm128_mul_ps(v11, v211);
      __asm { vcvttps2dq xmm0, xmm2 }
      v123 = _XMM0;
      v124 = 0i64;
      v124.m128_f32[0] = (float)(int)_XMM0;
      v125 = _mm128_sub_ps(_XMM2, _mm_shuffle_ps(v124, v124, 0));
      __asm { vcvttps2dq xmm1, xmm3 }
      v127 = 0i64;
      v127.m128_f32[0] = (float)(int)_XMM1;
      v128 = _mm128_sub_ps(_XMM3, _mm_shuffle_ps(v127, v127, 0));
      v129 = v231.m_N * (_XMM1 + 1);
      v130 = ((v123 + v129 + 1) << 13) ^ (v123 + v129 + 1);
      v131 = 0i64;
      v131.m128_f32[0] = (float)((v231.m_r3 + v130 * (v231.m_r2 + v231.m_r1 * v130 * v130)) & 0x7FFFFFFF);
      v132 = _mm128_sub_ps(v26, _mm128_mul_ps(v117, _mm_shuffle_ps(v131, v131, 0)));
      v133 = 0i64;
      v133.m128_f32[0] = (float)((v231.m_r3 + (((v123 + v129) << 13) ^ (v123 + v129)) * (v231.m_r2 + v231.m_r1 * (((v123 + v129) << 13) ^ (v123 + v129)) * (((v123 + v129) << 13) ^ (v123 + v129)))) & 0x7FFFFFFF);
      v134 = _mm128_sub_ps(v26, _mm128_mul_ps(v118, _mm_shuffle_ps(v133, v133, 0)));
      v135 = 0i64;
      v135.m128_f32[0] = _mm128_mul_ps(v125, g_vectorfConstants[54]).m128_f32[0];
      v223 = v135;
      hkMath::quadCos(&v223, v9);
      v136 = 0i64;
      v136.m128_f32[0] = 0.0;
      v137 = _mm128_mul_ps(_mm128_sub_ps(v26, _mm_shuffle_ps(v136, v136, 0)), g_vectorfConstants[21]);
      v138 = g_vectorfConstants[6];
      v139 = _mm128_add_ps(_mm128_mul_ps(v137, v132), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v137), v134));
      v140 = v231.m_N * _XMM1;
      v141 = ((v123 + v140 + 1) << 13) ^ (v123 + v140 + 1);
      v142 = 0i64;
      v142.m128_f32[0] = (float)((v231.m_r3 + v141 * (v231.m_r2 + v231.m_r1 * v141 * v141)) & 0x7FFFFFFF);
      v143 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v142, v142, 0), v215));
      v144 = 0i64;
      v144.m128_f32[0] = (float)((v231.m_r3 + (((v123 + v140) << 13) ^ (v123 + v140)) * (v231.m_r2 + v231.m_r1 * (((v123 + v140) << 13) ^ (v123 + v140)) * (((v123 + v140) << 13) ^ (v123 + v140)))) & 0x7FFFFFFF);
      v145 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v144, v144, 0), v214));
      v146 = 0i64;
      v146.m128_f32[0] = _mm128_mul_ps(v125, g_vectorfConstants[54]).m128_f32[0];
      v222 = v146;
      hkMath::quadCos(&v222, v147);
      v148 = 0i64;
      v148.m128_f32[0] = 0.0;
      v149 = _mm128_mul_ps(_mm128_sub_ps(v138, _mm_shuffle_ps(v148, v148, 0)), g_vectorfConstants[21]);
      v150 = g_vectorfConstants[6];
      v151 = _mm128_add_ps(_mm128_mul_ps(v149, v143), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v149), v145));
      v152 = 0i64;
      v152.m128_f32[0] = _mm128_mul_ps(v128, g_vectorfConstants[54]).m128_f32[0];
      v213 = v152;
      hkMath::quadCos(&v213, v153);
      v154 = 0i64;
      v154.m128_f32[0] = 0.0;
      v155 = _mm128_mul_ps(_mm128_sub_ps(v150, _mm_shuffle_ps(v154, v154, 0)), g_vectorfConstants[21]);
      v26 = g_vectorfConstants[6];
      v114 = _mm128_add_ps(_mm128_mul_ps(v119, _mm128_add_ps(_mm128_mul_ps(v155, v139), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v155), v151))), v201);
      v201 = v114;
      v11 = _mm128_add_ps(v11, v11);
      v119 = _mm128_mul_ps(v119, v231.m_persistence.m_real);
      ++v115;
      octaves = v231.m_octaves;
      v117 = v209;
      v118 = v205;
    }
    while ( v115 < v231.m_octaves );
    v14.m_real = (__m128)v231.m_coverage;
    m_real = v231.m_amplitude.m_real;
    v11 = v231.m_frequency.m_real;
    v30 = (__m128)LODWORD(FLOAT_9_3132257eN10);
    v113 = v218;
  }
  v206 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(v14.m_real, v114), _mm128_mul_ps(v113, v224)), v216);
  v156 = 0i64;
  v202 = 0i64;
  if ( octaves > 0 )
  {
    v157 = v30;
    v158 = _mm_shuffle_ps(v157, v157, 0);
    v210 = v158;
    v159 = _mm_shuffle_ps(v157, v157, 0);
    v212 = v159;
    v216 = _mm_shuffle_ps(v157, v157, 0);
    v224 = _mm_shuffle_ps(v157, v157, 0);
    v160 = v216;
    do
    {
      _XMM3 = _mm128_mul_ps(v11, v225);
      _XMM2 = _mm128_mul_ps(v11, v217);
      __asm { vcvttps2dq xmm0, xmm2 }
      v164 = _XMM0;
      v165 = 0i64;
      v165.m128_f32[0] = (float)(int)_XMM0;
      v166 = _mm128_sub_ps(_XMM2, _mm_shuffle_ps(v165, v165, 0));
      __asm { vcvttps2dq xmm1, xmm3 }
      v168 = 0i64;
      v168.m128_f32[0] = (float)(int)_XMM1;
      v169 = _mm128_sub_ps(_XMM3, _mm_shuffle_ps(v168, v168, 0));
      v170 = v231.m_N * (_XMM1 + 1);
      v171 = ((v164 + v170 + 1) << 13) ^ (v164 + v170 + 1);
      v172 = 0i64;
      v172.m128_f32[0] = (float)((v231.m_r3 + v171 * (v231.m_r2 + v231.m_r1 * v171 * v171)) & 0x7FFFFFFF);
      v173 = _mm128_sub_ps(v26, _mm128_mul_ps(v158, _mm_shuffle_ps(v172, v172, 0)));
      v174 = 0i64;
      v174.m128_f32[0] = (float)((v231.m_r3 + (((v164 + v170) << 13) ^ (v164 + v170)) * (v231.m_r2 + v231.m_r1 * (((v164 + v170) << 13) ^ (v164 + v170)) * (((v164 + v170) << 13) ^ (v164 + v170)))) & 0x7FFFFFFF);
      v175 = _mm128_sub_ps(v26, _mm128_mul_ps(v159, _mm_shuffle_ps(v174, v174, 0)));
      v176 = 0i64;
      v176.m128_f32[0] = _mm128_mul_ps(v166, g_vectorfConstants[54]).m128_f32[0];
      v216 = v176;
      hkMath::quadCos(&v216, v9);
      v177 = 0i64;
      v177.m128_f32[0] = 0.0;
      v178 = _mm128_mul_ps(_mm128_sub_ps(v26, _mm_shuffle_ps(v177, v177, 0)), g_vectorfConstants[21]);
      v179 = g_vectorfConstants[6];
      v180 = _mm128_add_ps(_mm128_mul_ps(v178, v173), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v178), v175));
      v181 = v231.m_N * _XMM1;
      v182 = ((v164 + v181 + 1) << 13) ^ (v164 + v181 + 1);
      v183 = 0i64;
      v183.m128_f32[0] = (float)((v231.m_r3 + v182 * (v231.m_r2 + v182 * v182 * v231.m_r1)) & 0x7FFFFFFF);
      v184 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(v160, _mm_shuffle_ps(v183, v183, 0)));
      v185 = 0i64;
      v185.m128_f32[0] = (float)((v231.m_r3 + (((v164 + v181) << 13) ^ (v164 + v181)) * (v231.m_r2 + (((v164 + v181) << 13) ^ (v164 + v181)) * (((v164 + v181) << 13) ^ (v164 + v181)) * v231.m_r1)) & 0x7FFFFFFF);
      v186 = _mm128_sub_ps(g_vectorfConstants[6], _mm128_mul_ps(_mm_shuffle_ps(v185, v185, 0), v224));
      v187 = 0i64;
      v187.m128_f32[0] = _mm128_mul_ps(v166, g_vectorfConstants[54]).m128_f32[0];
      v215 = v187;
      hkMath::quadCos(&v215, v188);
      v189 = 0i64;
      v189.m128_f32[0] = 0.0;
      v190 = _mm128_mul_ps(_mm128_sub_ps(v179, _mm_shuffle_ps(v189, v189, 0)), g_vectorfConstants[21]);
      v191 = g_vectorfConstants[6];
      v192 = _mm128_add_ps(_mm128_mul_ps(v190, v184), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v190), v186));
      v193 = 0i64;
      v193.m128_f32[0] = _mm128_mul_ps(v169, g_vectorfConstants[54]).m128_f32[0];
      v214 = v193;
      hkMath::quadCos(&v214, v194);
      v195 = 0i64;
      v195.m128_f32[0] = 0.0;
      v196 = _mm128_mul_ps(_mm128_sub_ps(v191, _mm_shuffle_ps(v195, v195, 0)), g_vectorfConstants[21]);
      v26 = g_vectorfConstants[6];
      v156 = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(v196, v180), _mm128_mul_ps(_mm128_sub_ps(g_vectorfConstants[6], v196), v192)), m_real), v202);
      v202 = v156;
      v11 = _mm128_add_ps(v11, v11);
      m_real = _mm128_mul_ps(m_real, v231.m_persistence.m_real);
      ++v28;
      v158 = v210;
      v159 = v212;
    }
    while ( v28 < v231.m_octaves );
    v14.m_real = (__m128)v231.m_coverage;
    v113 = v218;
  }
  LODWORD(v197) = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(v14.m_real, v156), _mm128_mul_ps(v113, v226)), v206).m128_u32[0];
  hkReferencedObject::~hkReferencedObject(&v231);
  return v197;
}

/*
==============
HavokPhysics_GetConstraintID
==============
*/
hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *HavokPhysics_GetConstraintID(hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *result, const Physics_WorldId worldId, const unsigned int instanceId, const unsigned int constraintIdx)
{
  __int64 v4; 
  __int64 v6; 
  const HavokPhysicsWorld *ConstWorld; 
  HavokPhysicsInstanceManager *p_instanceManager; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> *v10; 
  __int64 v11; 

  v4 = (int)constraintIdx;
  v6 = instanceId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 202, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get ConstraintID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (_DWORD)v6 == -1 )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 203, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tHavok Physics: Trying to Get ConstraintID ID with invalid index in world %i", "instanceId != HAVOKPHYSICSINSTANCEID_INVALID", v11) )
      __debugbreak();
  }
  ConstWorld = HavokPhysics_GetConstWorld(worldId);
  if ( !ConstWorld->world )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 207, ASSERT_TYPE_ASSERT, "(havokPhysicsWorld->world)", "%s\n\tHavokPhysics Get ConstraintID Id %i: world is NULL", "havokPhysicsWorld->world", v11) )
      __debugbreak();
  }
  p_instanceManager = &ConstWorld->instanceManager;
  if ( !p_instanceManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 64, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 65, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( (unsigned int)v4 >= p_instanceManager->buffer[v6].constraints.m_size )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 208, ASSERT_TYPE_ASSERT, "(constraintIdx < HavokPhysicsInstanceManager_GetConstraintCount( &havokPhysicsWorld->instanceManager, instanceId ))", "%s\n\tHavok Physics: Trying to Get ConstraintID ID with invalid constraint index in world %i", "constraintIdx < HavokPhysicsInstanceManager_GetConstraintCount( &havokPhysicsWorld->instanceManager, instanceId )", v11) )
      __debugbreak();
  }
  if ( !p_instanceManager && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 92, ASSERT_TYPE_ASSERT, "(manager)", (const char *)&queryFormat, "manager") )
    __debugbreak();
  if ( (_DWORD)v6 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 93, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v10 = result;
  result->m_value = (unsigned int)p_instanceManager->buffer[v6].constraints.m_data[v4];
  return v10;
}

/*
==============
HavokPhysics_GetRigidBodyPointVel
==============
*/
void HavokPhysics_GetRigidBodyPointVel(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *point, hkVector4f *pointVel)
{
  hknpWorld *world; 
  __int64 v9; 
  __int64 v10; 
  __m128 v11; 
  __m128 v13; 
  __m128 v14; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __int64 v20; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 500, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body PointVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v20) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 501, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body PointVel with invalid body id for world %i", "bodyId.isValid()", v20) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v20) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 505, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics GetRigidBodyPointVel %i: world is NULL", "world", v20) )
      __debugbreak();
  }
  v9 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, bodyId.m_serialAndIndex);
  v10 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v9 + 64));
  v11 = _mm128_sub_ps(point->m_quad, *(__m128 *)v10);
  _XMM7 = *(__m128 *)(v10 + 16);
  v13 = *(__m128 *)(v10 + 80);
  v14 = _mm_shuffle_ps(_XMM7, _XMM7, 255);
  __asm { vdpps   xmm0, xmm7, xmm4, 7Fh }
  v16 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v13, v13, 201), _XMM7), _mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 201), v13));
  v17 = _mm128_add_ps(_mm128_add_ps(_mm128_mul_ps(_XMM0, _XMM7), _mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(v14, v14), g_vectorfConstants[21]), v13)), _mm128_mul_ps(_mm_shuffle_ps(v16, v16, 201), v14));
  v18 = _mm128_add_ps(v17, v17);
  v19 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v11, v11, 201), v18), _mm128_mul_ps(_mm_shuffle_ps(v18, v18, 201), v11));
  pointVel->m_quad = _mm128_add_ps(_mm_shuffle_ps(v19, v19, 201), *(__m128 *)(v10 + 64));
}

/*
==============
HavokPhysics_GetNumRigidBodys
==============
*/
unsigned int HavokPhysics_GetNumRigidBodys(const Physics_WorldId worldId, const unsigned int instanceId)
{
  const HavokPhysicsWorld *ConstWorld; 
  __int64 v6; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Number of Rigid Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
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
HavokPhysics_IsInstanceDetailBounded
==============
*/
bool HavokPhysics_IsInstanceDetailBounded(const Physics_WorldId worldId, const unsigned int instanceId)
{
  __int64 v2; 
  const HavokPhysicsWorld *ConstWorld; 
  __int64 v6; 

  v2 = instanceId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 761, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to check if instance is detail bounded with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (_DWORD)v2 == -1 )
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
  if ( (_DWORD)v2 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsinstancemanager.inl", 108, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != HAVOKPHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  return ConstWorld->instanceManager.buffer[v2].detailModel != NULL;
}

/*
==============
HavokPhysics_GetNumShapes
==============
*/
__int64 HavokPhysics_GetNumShapes(const hknpShape *shape)
{
  unsigned __int8 m_storage; 
  unsigned int v2; 
  unsigned int v4; 
  int i; 
  const hknpShape *CollisionTileModelShape; 
  int v7; 
  int v8; 
  __int64 v9; 
  unsigned __int16 v10; 
  unsigned int NumShapes; 
  int v12; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 

  m_storage = shape->m_type.m_storage;
  v2 = 0;
  switch ( m_storage )
  {
    case 9u:
      return (unsigned int)(LODWORD(shape[1].m_properties.m_ptr) + HIDWORD(shape[1].m_properties.m_ptr));
    case 0xCu:
      v7 = *(_DWORD *)&shape[1].m_flags.m_storage;
      v8 = 0;
      v14 = 0;
      if ( v7 > 0 )
      {
        v9 = *(_QWORD *)&shape[1].m_memSizeAndFlags;
        while ( 1 )
        {
          v10 = v14;
          if ( !*(_BYTE *)(112i64 * v14 + v9 + 92) )
            break;
          v14 = ++v8;
          if ( v8 >= v7 )
            return v2;
        }
        while ( v8 != -1 )
        {
          NumShapes = HavokPhysics_GetNumShapes(*(const hknpShape **)(112i64 * v10 + v9 + 80));
          v12 = *(_DWORD *)&shape[1].m_flags.m_storage;
          v2 += NumShapes;
          v15 = ++v8;
          if ( v8 >= v12 )
            break;
          v9 = *(_QWORD *)&shape[1].m_memSizeAndFlags;
          while ( 1 )
          {
            v10 = v15;
            if ( !*(_BYTE *)(112i64 * v15 + v9 + 92) )
              break;
            v15 = ++v8;
            if ( v8 >= v12 )
              return v2;
          }
        }
      }
      break;
    case 0x16u:
      v4 = *(_DWORD *)&shape[1].m_memSizeAndFlags;
      for ( i = 0; i < SLODWORD(shape[1].m_convexRadius); ++i )
      {
        CollisionTileModelShape = (const hknpShape *)StaticModels_GetCollisionTileModelShape((*(_WORD *)(*(_QWORD *)&shape[1].m_flags.m_storage + 4i64 * (unsigned __int16)i) & 0x4000) != 0, v4, *(_WORD *)(*(_QWORD *)&shape[1].m_flags.m_storage + 4i64 * (unsigned __int16)i) & 0x3FFF);
        v2 += HavokPhysics_GetNumShapes(CollisionTileModelShape);
      }
      break;
    default:
      return 1;
  }
  return v2;
}

/*
==============
HavokPhysics_UpdateDetailBounds
==============
*/
void HavokPhysics_UpdateDetailBounds(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *position, const float radius)
{
  HavokPhysicsWorld *MutableWorld; 
  hknpWorld *world; 
  hknpThreadSafeObjectPoolElement<hknpBody> *m_data; 
  const hknpShape *m_ptr; 
  unsigned __int64 *p_m_bodyChanged; 
  unsigned int m_serialAndIndex; 
  unsigned __int64 m_ptrAndInt; 
  unsigned __int64 *v25; 
  _QWORD *v26; 
  unsigned __int64 *v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  hknpShape *v30; 
  hknpBodyId p1; 
  hkRefPtr<hknpShape const > p2; 

  p1.m_serialAndIndex = bodyId.m_serialAndIndex;
  MutableWorld = HavokPhysics_GetMutableWorld(worldId);
  world = MutableWorld->world;
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 778, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", worldId) )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, const hkVector4f *, __int64))world->setBodyPosition)(&world->hknpWorldWriter, p1.m_serialAndIndex, position, 1i64);
  m_data = world->m_bodyManager.m_bodies.m_objects.m_data;
  m_ptr = (const hknpShape *)(176i64 * (p1.m_serialAndIndex & 0xFFFFFF));
  p2.m_ptr = m_ptr;
  _XMM0 = *(__m128 *)((char *)&m_ptr->m_properties.m_ptr + (_QWORD)m_data);
  _mm128_sub_ps(_XMM0, position->m_quad);
  _XMM1 = *(_OWORD *)hkMath::hkSse_signMask;
  __asm
  {
    vandnps xmm3, xmm1, xmm2
    vcmpleps xmm5, xmm3, cs:__xmm@3c23d70a3c23d70a3c23d70a3c23d70a
  }
  _XMM2 = 0i64;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpcmpeqd xmm1, xmm0, xmm0
    vblendps xmm2, xmm2, xmm1, 7
    vpand   xmm0, xmm5, xmm2
    vptest  xmm0, xmm2
  }
  if ( !_CF )
  {
    *(hkVector4f *)((char *)&m_ptr->m_properties.m_ptr + (_QWORD)m_data) = (hkVector4f)position->m_quad;
    p_m_bodyChanged = (unsigned __int64 *)&world->m_signals.m_bodyChanged;
    m_serialAndIndex = p1.m_serialAndIndex;
    m_ptrAndInt = (unsigned __int64)world->m_signals.m_bodyChanged.m_slots.m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64 | 1;
    world->m_signals.m_bodyChanged.m_slots.m_ptrAndInt = (hkSlot *)m_ptrAndInt;
    v25 = (unsigned __int64 *)&world->m_signals.m_bodyChanged;
    v26 = (_QWORD *)(m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64);
    if ( (m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64) != 0 )
    {
      do
      {
        v27 = v26 + 1;
        v28 = v26[1] & 0xFFFFFFFFFFFFFFFCui64;
        v29 = *v26;
        if ( (v26[1] & 3) != 0 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))v29)(v26, 1i64);
          *v25 = v28 | *(_DWORD *)v25 & 3;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, hknpWorld *, _QWORD))(v29 + 16))(v26, world, m_serialAndIndex);
          v25 = v27;
        }
        v26 = (_QWORD *)v28;
      }
      while ( v28 );
      p_m_bodyChanged = (unsigned __int64 *)&world->m_signals.m_bodyChanged;
      m_ptrAndInt = (unsigned __int64)world->m_signals.m_bodyChanged.m_slots.m_ptrAndInt;
      m_ptr = p2.m_ptr;
    }
    *p_m_bodyChanged = m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64;
    world->m_broadPhase->markBodiesDirty(world->m_broadPhase, &p1, 1, 4);
  }
  v30 = *(hknpShape **)((char *)&m_ptr[1].m_userData + (_QWORD)m_data);
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 798, ASSERT_TYPE_ASSERT, "( shape )", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( v30->m_type.m_storage != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 799, ASSERT_TYPE_ASSERT, "( shape->getType() == hknpShapeType::SPHERE )", (const char *)&queryFormat, "shape->getType() == hknpShapeType::SPHERE") )
    __debugbreak();
  if ( radius != v30->m_convexRadius )
  {
    v30->m_convexRadius = radius;
    _XMM0 = LODWORD(MutableWorld->m_detailBoundingSphereMax);
    __asm { vmaxss  xmm1, xmm0, xmm6 }
    MutableWorld->m_detailBoundingSphereMax = *(float *)&_XMM1;
    p2.m_ptr = v30;
    hkReferencedObject::addReference(v30);
    hkSignal3<hknpWorld *,hknpBodyId,hkRefPtr<hknpShape const> &>::fire(&MutableWorld->world->m_signals.m_bodyShapeChanged, MutableWorld->world, p1, &p2);
    world->m_broadPhase->markBodiesDirty(world->m_broadPhase, &p1, 1, 4);
    if ( p2.m_ptr )
      hkReferencedObject::removeReference(&p2.m_ptr->hkReferencedObject);
  }
}

/*
==============
HavokPhysics_GetGravity
==============
*/
void HavokPhysics_GetGravity(const Physics_WorldId worldId, hkVector4f *gravity)
{
  __int64 v2; 
  __int64 v5; 

  v2 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
      __debugbreak();
    if ( (unsigned int)v2 > 7 )
    {
      LODWORD(v5) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 56, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavokPhysics: Trying to access invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
        __debugbreak();
    }
  }
  *gravity = g_havokPhysicsWorlds[v2].world->m_gravity;
}


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
  __int64 v12; 
  __int64 v36; 

  __asm { vmovaps [rsp+98h+var_38], xmm6 }
  _R14 = angVel;
  __asm { vmovaps [rsp+98h+var_48], xmm7 }
  _RBP = linVel;
  __asm { vmovaps [rsp+98h+var_58], xmm8 }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 437, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v36) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 438, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinAngVel with invalid body id for world %i", "bodyId.isValid()", v36) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v36) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 442, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v36) )
      __debugbreak();
  }
  v12 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, bodyId.m_serialAndIndex);
  _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v12 + 64));
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rbp+0], xmm0
    vmovups xmm7, xmmword ptr [rax+10h]
    vmovups xmm4, xmmword ptr [rax+50h]
    vshufps xmm8, xmm7, xmm7, 0FFh
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm3, xmm0, xmm7
    vdpps   xmm0, xmm7, xmm4, 7Fh
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm4
    vsubps  xmm5, xmm3, xmm2
    vmulps  xmm3, xmm0, xmm7
    vmovaps xmm7, [rsp+98h+var_48]
    vmulps  xmm6, xmm8, xmm8
    vsubps  xmm1, xmm6, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
    vmovaps xmm6, [rsp+98h+var_38]
    vmulps  xmm2, xmm1, xmm4
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm1, xmm0, xmm8
    vmovaps xmm8, [rsp+98h+var_58]
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm2, xmm4, xmm1
    vaddps  xmm0, xmm2, xmm2
    vmovups xmmword ptr [r14], xmm0
  }
}

/*
==============
HavokPhysics_WarpRigidBodyTo
==============
*/
__int64 HavokPhysics_WarpRigidBodyTo(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *hkPosition, const hkQuaternionf *hkOrientation, const bool updateBroadphase, const bool activate)
{
  const HavokPhysicsWorld *ConstWorld; 
  __int64 result; 
  BOOL isApproximatelyEqual; 
  unsigned int v17; 
  unsigned int i; 
  hknpWorld *world; 
  char *fmt; 
  char *fmta; 
  double v53; 
  __int64 v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  double v59; 
  float zero[4]; 
  hkTransformf v61; 
  unsigned int m_serialAndIndex; 

  m_serialAndIndex = bodyId.m_serialAndIndex;
  __asm { vmovaps [rsp+0F8h+var_38], xmm6 }
  _RDI = hkPosition;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 536, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v54) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 537, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v54) )
      __debugbreak();
  }
  __asm { vmovss  xmm1, cs:__real@3a83126f; epsilon }
  if ( !hkQuaternionf::isOk((hkQuaternionf *)hkOrientation, *(const float *)&_XMM1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 540, ASSERT_TYPE_ASSERT, "(hkOrientation.isOk())", (const char *)&queryFormat, "hkOrientation.isOk()") )
    __debugbreak();
  hkRotationImpl<float>::set(&v61.m_rotation, hkOrientation);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups [rsp+0F8h+var_58], xmm0
  }
  ConstWorld = HavokPhysics_GetConstWorld(worldId);
  __asm { vmovss  xmm6, cs:__real@3727c5ac }
  _RSI = (hkTransformf *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))ConstWorld->world->getBodyTransform)(&ConstWorld->world->hknpWorldReader, m_serialAndIndex);
  __asm { vmovss  [rsp+0F8h+zero], xmm6 }
  if ( hkTransformf::isApproximatelyEqual(&v61, _RSI, zero) )
  {
    result = 0i64;
  }
  else
  {
    if ( Sys_IsServerUserMoveWorker() )
    {
      __asm { vmovss  [rsp+0F8h+zero], xmm6 }
      isApproximatelyEqual = hkMatrix3Impl<float>::isApproximatelyEqual(&_RSI->m_rotation, &v61.m_rotation, zero);
      Com_Printf(20, "Current Rotation:\n");
      v17 = 0;
      for ( i = 0; i < 3; ++i )
      {
        _RAX = (int)i;
        __asm
        {
          vmovss  xmm3, dword ptr [rsi+rax*4+10h]
          vmovss  xmm2, dword ptr [rsi+rax*4]
          vmovss  xmm0, dword ptr [rsi+rax*4+20h]
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm0, xmm0, xmm0
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+0F8h+fmt], xmm0
        }
        Com_Printf(20, "%f %f %f\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmt);
      }
      Com_Printf(20, "New Rotation:\n");
      do
      {
        _RAX = (int)v17;
        __asm
        {
          vmovss  xmm3, dword ptr [rsp+rax*4+0F8h+var_88.baseclass_0.m_col1.m_quad]
          vmovss  xmm2, dword ptr [rsp+rax*4+0F8h+var_88.baseclass_0.m_col0.m_quad]
          vmovss  xmm0, dword ptr [rsp+rax*4+0F8h+var_88.baseclass_0.m_col2.m_quad]
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm0, xmm0, xmm0
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+0F8h+fmt], xmm0
        }
        Com_Printf(20, "%f %f %f\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmta);
        ++v17;
      }
      while ( v17 < 3 );
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+0F8h+var_58+8]
        vmovss  xmm1, dword ptr [rsp+0F8h+var_58+4]
        vmovss  xmm2, dword ptr [rsp+0F8h+var_58]
        vmovss  xmm3, dword ptr [rsi+38h]
        vmovss  xmm4, dword ptr [rsi+34h]
        vmovss  xmm5, dword ptr [rsi+30h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0F8h+var_A8], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0F8h+var_B0], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+0F8h+var_B8], xmm2
        vcvtss2sd xmm3, xmm3, xmm3
        vmovsd  [rsp+0F8h+var_C0], xmm3
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+0F8h+var_C8], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+0F8h+var_D0], xmm5
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 574, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should not be warping rigid bodies in user workers. Moving from %f %f %f to %f %f %f. Rotation Equal = %i.\n", v53, v55, v56, v57, v58, v59, isApproximatelyEqual) )
        __debugbreak();
    }
    world = HavokPhysics_GetMutableWorld(worldId)->world;
    if ( !world )
    {
      LODWORD(v54) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 580, ASSERT_TYPE_ASSERT, "(mutableWorld)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "mutableWorld", v54) )
        __debugbreak();
    }
    if ( !hkTransformf::isOk(&v61) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 582, ASSERT_TYPE_ASSERT, "(newTransform.isOk())", (const char *)&queryFormat, "newTransform.isOk()") )
      __debugbreak();
    ((void (__fastcall *)(hknpWorldWriter *, _QWORD, hkTransformf *, bool))world->setBodyTransform)(&world->hknpWorldWriter, m_serialAndIndex, &v61, !activate);
    ((void (__fastcall *)(hknpBroadPhase *, unsigned int *, __int64))world->m_broadPhase->markBodiesDirty)(world->m_broadPhase, &m_serialAndIndex, 1i64);
    if ( updateBroadphase )
      world->updateBroadPhase(&world->hknpWorldWriter);
    result = 2i64;
  }
  __asm { vmovaps xmm6, [rsp+0F8h+var_38] }
  return result;
}

/*
==============
HavokPhysics_GetPerlinNoise2dValue
==============
*/
float HavokPhysics_GetPerlinNoise2dValue(int seed, int gridSize, int x, int y)
{
  const __m128 *v17; 
  int v71; 
  int v72; 
  int m_octaves; 
  const __m128 *v125; 
  const __m128 *v139; 
  int v159; 
  const __m128 *v210; 
  const __m128 *v224; 
  int v245; 
  const __m128 *v296; 
  const __m128 *v310; 
  const __m128 *v378; 
  const __m128 *v392; 
  __m128 v441; 
  __m128 v442; 
  __m128 v443; 
  __m128 v444; 
  __m128 v447; 
  __m128 v448; 
  __m128 v449; 
  __m128 v450; 
  __m128 v451; 
  __int64 v455; 
  __m128 result; 
  __m128 v457; 
  __m128 v458; 
  hkPerlinNoise2d v459; 
  char v460; 
  void *retaddr; 

  _RAX = &retaddr;
  v455 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
    vmovaps xmmword ptr [rax-88h], xmm12
    vmovaps xmmword ptr [rax-98h], xmm13
    vmovaps xmmword ptr [rax-0A8h], xmm14
    vmovaps xmmword ptr [rax-0B8h], xmm15
  }
  hkPerlinNoise2d::hkPerlinNoise2d(&v459, seed, gridSize);
  __asm
  {
    vxorps  xmm14, xmm14, xmm14
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ebx
    vshufps xmm3, xmm0, xmm0, 0
    vmovups [rsp+2E0h+var_278+8], xmm3
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edi
    vshufps xmm11, xmm1, xmm1, 0
    vmovups [rsp+2E0h+var_298+8], xmm11
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vshufps xmm10, xmm0, xmm0, 0
    vrcpps  xmm2, xmm10
    vmulps  xmm1, xmm10, xmm2
    vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
    vsubps  xmm1, xmm0, xmm1
    vmulps  xmm7, xmm1, xmm2
    vmulps  xmm4, xmm7, xmm3
    vmulps  xmm0, xmm4, xmm4
    vmulps  xmm5, xmm4, xmm0
    vmovss  xmm9, cs:__real@41200000
    vmovaps xmm1, xmm9
    vshufps xmm3, xmm1, xmm1, 0
    vmovss  xmm8, cs:__real@41700000
    vmovaps xmm1, xmm8
    vshufps xmm2, xmm1, xmm1, 0
    vmulps  xmm0, xmm4, xmm2
    vsubps  xmm3, xmm3, xmm0
    vmulps  xmm0, xmm4, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+0B0h; __m128 const near * const g_vectorfConstants
    vmulps  xmm1, xmm4, xmm0
    vaddps  xmm2, xmm1, xmm3
    vmulps  xmm12, xmm2, xmm5
    vmovups [rbp+1E0h+var_1B0], xmm12
    vmulps  xmm4, xmm7, xmm11
    vmulps  xmm0, xmm4, xmm4
    vmulps  xmm5, xmm0, xmm4
    vmovaps xmm1, xmm9
    vshufps xmm3, xmm1, xmm1, 0
    vmovaps xmm1, xmm8
    vshufps xmm2, xmm1, xmm1, 0
    vmulps  xmm0, xmm2, xmm4
    vsubps  xmm3, xmm3, xmm0
    vmulps  xmm1, xmm4, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+0B0h; __m128 const near * const g_vectorfConstants
    vmulps  xmm0, xmm1, xmm4
    vaddps  xmm2, xmm0, xmm3
    vmulps  xmm0, xmm2, xmm5
    vmovups xmmword ptr [rbp+1E0h+var_240], xmm0
    vmovups xmm2, [rsp+2E0h+var_278+8]
    vsubps  xmm6, xmm10, xmm2
    vmovups [rbp+1E0h+var_220], xmm6
    vsubps  xmm1, xmm10, xmm11
    vmovups [rbp+1E0h+var_1A0], xmm1
    vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
    vsubps  xmm1, xmm8, xmm12
    vmovups [rbp+1E0h+var_190], xmm1
    vsubps  xmm1, xmm8, xmm0
    vmovups [rbp+1E0h+var_210], xmm1
    vmulps  xmm0, xmm0, xmm12
    vmovups xmmword ptr [rbp+1E0h+var_1E0], xmm0
    vxorps  xmm1, xmm1, xmm1
    vmovups [rsp+2E0h+var_2B8+8], xmm1
    vmovups xmm0, xmmword ptr [rbp+1E0h+var_140.m_amplitude.m_real]
    vmovups [rsp+2E0h+var_2A8+8], xmm0
    vmovups xmm15, xmmword ptr [rbp+1E0h+var_140.m_frequency.m_real]
  }
  v71 = 0;
  v72 = 0;
  __asm { vmovss  xmm13, cs:__real@30800000 }
  m_octaves = v459.m_octaves;
  if ( v459.m_octaves > 0 )
  {
    __asm
    {
      vmovaps xmm1, xmm13
      vshufps xmm4, xmm1, xmm1, 0
      vmovups [rsp+2E0h+var_288+8], xmm4
      vshufps xmm5, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+1E0h+var_260], xmm5
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+1E0h+var_200], xmm0
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+1E0h+var_1F0], xmm0
      vmovups xmm13, [rsp+2E0h+var_2A8+8]
    }
    do
    {
      __asm
      {
        vmulps  xmm3, xmm11, xmm15
        vmulps  xmm2, xmm15, xmm2
        vcvttps2dq xmm0, xmm2
        vmovd   esi, xmm0
        vcvtsi2ss xmm1, xmm14, esi
        vshufps xmm0, xmm1, xmm1, 0
        vsubps  xmm11, xmm2, xmm0
        vcvttps2dq xmm1, xmm3
        vmovd   ebx, xmm1
        vcvtsi2ss xmm0, xmm14, ebx
        vshufps xmm0, xmm0, xmm0, 0
        vsubps  xmm12, xmm3, xmm0
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm4, xmm0
        vsubps  xmm7, xmm8, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm5, xmm0
        vsubps  xmm6, xmm8, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+result], xmm1
      }
      hkMath::quadCos(&result, v17);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm8, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm9, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm7
        vaddps  xmm10, xmm1, xmm2
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+1E0h+var_200]
        vsubps  xmm8, xmm9, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+1E0h+var_1F0]
        vsubps  xmm6, xmm9, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_160], xmm1
      }
      hkMath::quadCos(&v457, v125);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm9, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm7, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm7, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm8
        vaddps  xmm6, xmm1, xmm2
        vmulps  xmm1, xmm12, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_150], xmm1
      }
      hkMath::quadCos(&v458, v139);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm7, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm8, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm10
        vaddps  xmm0, xmm1, xmm2
        vmulps  xmm2, xmm13, xmm0
        vaddps  xmm1, xmm2, [rsp+2E0h+var_2B8+8]
        vmovups [rsp+2E0h+var_2B8+8], xmm1
        vaddps  xmm15, xmm15, xmm15
        vmulps  xmm13, xmm13, xmmword ptr [rbp+1E0h+var_140.m_persistence.m_real]
      }
      ++v72;
      m_octaves = v459.m_octaves;
      __asm
      {
        vmovups xmm11, [rsp+2E0h+var_298+8]
        vmovups xmm2, [rsp+2E0h+var_278+8]
        vmovups xmm4, [rsp+2E0h+var_288+8]
        vmovups xmm5, xmmword ptr [rbp+1E0h+var_260]
      }
    }
    while ( v72 < v459.m_octaves );
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+1E0h+var_140.m_amplitude.m_real]
      vmovups [rsp+2E0h+var_2A8+8], xmm0
      vmovups xmm15, xmmword ptr [rbp+1E0h+var_140.m_frequency.m_real]
      vmovss  xmm13, cs:__real@30800000
      vmovups xmm6, [rbp+1E0h+var_220]
    }
  }
  __asm
  {
    vmovups xmm2, xmmword ptr [rbp+1E0h+var_140.m_coverage.m_real]
    vaddps  xmm0, xmm2, xmm1
    vmulps  xmm1, xmm0, xmmword ptr [rbp+1E0h+var_1E0]
    vaddps  xmm0, xmm1, xmm14
    vmovups xmmword ptr [rbp+1E0h+var_1C0], xmm0
    vmovups xmm1, xmm14
    vmovups [rsp+2E0h+var_2B8+8], xmm1
  }
  v159 = 0;
  if ( m_octaves > 0 )
  {
    __asm
    {
      vmovaps xmm1, xmm13
      vshufps xmm4, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+1E0h+var_1D0], xmm4
      vshufps xmm5, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+1E0h+var_250], xmm5
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+1E0h+var_260], xmm0
      vshufps xmm0, xmm1, xmm1, 0
      vmovups [rsp+2E0h+var_288+8], xmm0
      vmovups xmm13, [rsp+2E0h+var_2A8+8]
    }
    do
    {
      __asm
      {
        vmulps  xmm3, xmm11, xmm15
        vmulps  xmm2, xmm15, xmm6
        vcvttps2dq xmm0, xmm2
        vmovd   esi, xmm0
        vcvtsi2ss xmm1, xmm14, esi
        vshufps xmm0, xmm1, xmm1, 0
        vsubps  xmm11, xmm2, xmm0
        vcvttps2dq xmm1, xmm3
        vmovd   edi, xmm1
        vcvtsi2ss xmm0, xmm14, edi
        vshufps xmm0, xmm0, xmm0, 0
        vsubps  xmm12, xmm3, xmm0
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm4, xmm0
        vsubps  xmm7, xmm8, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm5, xmm0
        vsubps  xmm6, xmm8, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_1E0], xmm1
      }
      hkMath::quadCos(&v449, v17);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm8, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm9, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm7
        vaddps  xmm10, xmm1, xmm2
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+1E0h+var_260]
        vsubps  xmm8, xmm9, xmm1
        vcvtsi2ss xmm0, xmm14, r9d
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, [rsp+2E0h+var_288+8]
        vsubps  xmm6, xmm9, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_1F0], xmm1
      }
      hkMath::quadCos(&v448, v210);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm9, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm7, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm7, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm8
        vaddps  xmm6, xmm1, xmm2
        vmulps  xmm1, xmm12, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_200], xmm1
      }
      hkMath::quadCos(&v447, v224);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm7, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm8, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm10
        vaddps  xmm0, xmm1, xmm2
        vmulps  xmm2, xmm13, xmm0
        vaddps  xmm1, xmm2, [rsp+2E0h+var_2B8+8]
        vmovups [rsp+2E0h+var_2B8+8], xmm1
        vaddps  xmm15, xmm15, xmm15
        vmulps  xmm13, xmm13, xmmword ptr [rbp+1E0h+var_140.m_persistence.m_real]
      }
      ++v159;
      m_octaves = v459.m_octaves;
      __asm
      {
        vmovups xmm11, [rsp+2E0h+var_298+8]
        vmovups xmm4, xmmword ptr [rbp+1E0h+var_1D0]
        vmovups xmm5, xmmword ptr [rbp+1E0h+var_250]
        vmovups xmm6, [rbp+1E0h+var_220]
      }
    }
    while ( v159 < v459.m_octaves );
    __asm
    {
      vmovups xmm2, xmmword ptr [rbp+1E0h+var_140.m_coverage.m_real]
      vmovups xmm0, xmmword ptr [rbp+1E0h+var_140.m_amplitude.m_real]
      vmovups [rsp+2E0h+var_2A8+8], xmm0
      vmovups xmm15, xmmword ptr [rbp+1E0h+var_140.m_frequency.m_real]
      vmovss  xmm13, cs:__real@30800000
    }
  }
  __asm
  {
    vaddps  xmm0, xmm2, xmm1
    vmovups xmm4, [rbp+1E0h+var_190]
    vmulps  xmm3, xmm4, xmmword ptr [rbp+1E0h+var_240]
    vmulps  xmm1, xmm0, xmm3
    vaddps  xmm0, xmm1, xmmword ptr [rbp+1E0h+var_1C0]
    vmovups xmmword ptr [rbp+1E0h+var_230], xmm0
    vmovups xmm5, [rbp+1E0h+var_210]
    vmovups xmm1, xmm14
    vmovups [rsp+2E0h+var_2B8+8], xmm1
  }
  v245 = 0;
  if ( m_octaves > 0 )
  {
    __asm
    {
      vmovaps xmm1, xmm13
      vshufps xmm4, xmm1, xmm1, 0
      vmovups [rsp+2E0h+var_288+8], xmm4
      vshufps xmm5, xmm1, xmm1, 0
      vmovups [rsp+2E0h+var_298+8], xmm5
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+1E0h+var_240], xmm0
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+1E0h+var_250], xmm0
      vmovups xmm13, [rsp+2E0h+var_2A8+8]
    }
    do
    {
      __asm
      {
        vmulps  xmm3, xmm15, [rbp+1E0h+var_1A0]
        vmulps  xmm2, xmm15, [rsp+2E0h+var_278+8]
        vcvttps2dq xmm0, xmm2
        vmovd   esi, xmm0
        vcvtsi2ss xmm1, xmm14, esi
        vshufps xmm0, xmm1, xmm1, 0
        vsubps  xmm11, xmm2, xmm0
        vcvttps2dq xmm1, xmm3
        vmovd   ebx, xmm1
        vcvtsi2ss xmm0, xmm14, ebx
        vshufps xmm0, xmm0, xmm0, 0
        vsubps  xmm12, xmm3, xmm0
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm4, xmm0
        vsubps  xmm7, xmm8, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm5, xmm0
        vsubps  xmm6, xmm8, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_1C0], xmm1
      }
      hkMath::quadCos(&v451, v17);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm8, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm9, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm7
        vaddps  xmm10, xmm1, xmm2
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+1E0h+var_240]
        vsubps  xmm8, xmm9, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+1E0h+var_250]
        vsubps  xmm6, xmm9, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_1D0], xmm1
      }
      hkMath::quadCos(&v450, v296);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm9, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm7, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm7, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm8
        vaddps  xmm6, xmm1, xmm2
        vmulps  xmm1, xmm12, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_260], xmm1
      }
      hkMath::quadCos(&v441, v310);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm7, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm8, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm10
        vaddps  xmm0, xmm1, xmm2
        vmulps  xmm2, xmm13, xmm0
        vaddps  xmm1, xmm2, [rsp+2E0h+var_2B8+8]
        vmovups [rsp+2E0h+var_2B8+8], xmm1
        vaddps  xmm15, xmm15, xmm15
        vmulps  xmm13, xmm13, xmmword ptr [rbp+1E0h+var_140.m_persistence.m_real]
      }
      ++v245;
      m_octaves = v459.m_octaves;
      __asm
      {
        vmovups xmm4, [rsp+2E0h+var_288+8]
        vmovups xmm5, [rsp+2E0h+var_298+8]
      }
    }
    while ( v245 < v459.m_octaves );
    __asm
    {
      vmovups xmm2, xmmword ptr [rbp+1E0h+var_140.m_coverage.m_real]
      vmovups xmm0, xmmword ptr [rbp+1E0h+var_140.m_amplitude.m_real]
      vmovups [rsp+2E0h+var_2A8+8], xmm0
      vmovups xmm15, xmmword ptr [rbp+1E0h+var_140.m_frequency.m_real]
      vmovss  xmm13, cs:__real@30800000
      vmovups xmm5, [rbp+1E0h+var_210]
    }
  }
  __asm
  {
    vaddps  xmm0, xmm2, xmm1
    vmulps  xmm3, xmm5, [rbp+1E0h+var_1B0]
    vmulps  xmm1, xmm0, xmm3
    vaddps  xmm0, xmm1, xmmword ptr [rbp+1E0h+var_230]
    vmovups [rsp+2E0h+var_298+8], xmm0
    vmovups xmm3, xmm14
    vmovups [rsp+2E0h+var_2B8+8], xmm3
  }
  if ( m_octaves > 0 )
  {
    __asm
    {
      vmovaps xmm1, xmm13
      vshufps xmm4, xmm1, xmm1, 0
      vmovups [rsp+2E0h+var_288+8], xmm4
      vshufps xmm5, xmm1, xmm1, 0
      vmovups [rsp+2E0h+var_278+8], xmm5
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+1E0h+var_230], xmm0
      vshufps xmm0, xmm1, xmm1, 0
      vmovups [rbp+1E0h+var_1B0], xmm0
      vmovups xmm13, xmmword ptr [rbp+1E0h+var_230]
    }
    do
    {
      __asm
      {
        vmulps  xmm3, xmm15, [rbp+1E0h+var_1A0]
        vmulps  xmm2, xmm15, [rbp+1E0h+var_220]
        vcvttps2dq xmm0, xmm2
        vmovd   esi, xmm0
        vcvtsi2ss xmm1, xmm14, esi
        vshufps xmm0, xmm1, xmm1, 0
        vsubps  xmm11, xmm2, xmm0
        vcvttps2dq xmm1, xmm3
        vmovd   edi, xmm1
        vcvtsi2ss xmm0, xmm14, edi
        vshufps xmm0, xmm0, xmm0, 0
        vsubps  xmm12, xmm3, xmm0
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm4, xmm0
        vsubps  xmm7, xmm8, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm5, xmm0
        vsubps  xmm6, xmm8, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_230], xmm1
      }
      hkMath::quadCos(&v444, v17);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm8, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm9, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm7
        vaddps  xmm10, xmm1, xmm2
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm13, xmm0
        vsubps  xmm8, xmm9, xmm1
        vcvtsi2ss xmm0, xmm14, r9d
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, [rbp+1E0h+var_1B0]
        vsubps  xmm6, xmm9, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_240], xmm1
      }
      hkMath::quadCos(&v443, v378);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm9, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm7, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm7, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm8
        vaddps  xmm6, xmm1, xmm2
        vmulps  xmm1, xmm12, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+1E0h+var_250], xmm1
      }
      hkMath::quadCos(&v442, v392);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm7, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm8, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm10
        vaddps  xmm0, xmm1, xmm2
        vmovups xmm1, [rsp+2E0h+var_2A8+8]
        vmulps  xmm2, xmm0, xmm1
        vaddps  xmm3, xmm2, [rsp+2E0h+var_2B8+8]
        vmovups [rsp+2E0h+var_2B8+8], xmm3
        vaddps  xmm15, xmm15, xmm15
        vmulps  xmm1, xmm1, xmmword ptr [rbp+1E0h+var_140.m_persistence.m_real]
        vmovups [rsp+2E0h+var_2A8+8], xmm1
      }
      ++v71;
      __asm
      {
        vmovups xmm4, [rsp+2E0h+var_288+8]
        vmovups xmm5, [rsp+2E0h+var_278+8]
      }
    }
    while ( v71 < v459.m_octaves );
    __asm
    {
      vmovups xmm2, xmmword ptr [rbp+1E0h+var_140.m_coverage.m_real]
      vmovups xmm5, [rbp+1E0h+var_210]
    }
  }
  __asm
  {
    vaddps  xmm0, xmm2, xmm3
    vmulps  xmm1, xmm5, [rbp+1E0h+var_190]
    vmulps  xmm1, xmm0, xmm1
    vaddps  xmm6, xmm1, [rsp+2E0h+var_298+8]
  }
  hkReferencedObject::~hkReferencedObject(&v459);
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v460;
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
  return *(float *)&_XMM0;
}

/*
==============
HavokPhysics_GetRigidBodyAngVel
==============
*/
void HavokPhysics_GetRigidBodyAngVel(const Physics_WorldId worldId, const hknpBodyId bodyId, hkVector4f *angVel)
{
  hknpWorld *world; 
  __int64 v10; 
  __int64 v33; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
  _RBP = angVel;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm7
    vmovaps [rsp+88h+var_48], xmm8
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 420, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body AgnVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v33) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 421, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body AngVel with invalid body id for world %i", "bodyId.isValid()", v33) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v33) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 425, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v33) )
      __debugbreak();
  }
  v10 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, bodyId.m_serialAndIndex);
  _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v10 + 64));
  __asm
  {
    vmovups xmm7, xmmword ptr [rax+10h]
    vmovups xmm4, xmmword ptr [rax+50h]
    vshufps xmm8, xmm7, xmm7, 0FFh
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm3, xmm0, xmm7
    vdpps   xmm0, xmm7, xmm4, 7Fh
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm4
    vsubps  xmm5, xmm3, xmm2
    vmulps  xmm3, xmm0, xmm7
    vmovaps xmm7, [rsp+88h+var_38]
    vmulps  xmm6, xmm8, xmm8
    vsubps  xmm1, xmm6, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
    vmovaps xmm6, [rsp+88h+var_28]
    vmulps  xmm2, xmm1, xmm4
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm1, xmm0, xmm8
    vmovaps xmm8, [rsp+88h+var_48]
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm2, xmm4, xmm1
    vaddps  xmm0, xmm2, xmm2
    vmovups xmmword ptr [rbp+0], xmm0
  }
}

/*
==============
HavokPhysics_AntilagWarpRigidBodyTo
==============
*/
__int64 HavokPhysics_AntilagWarpRigidBodyTo(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *hkPosition, const hkQuaternionf *hkOrientation, hkVector4f *hkRestorePosition, hkQuaternionf *hkRestoreOrientation)
{
  hkQuaternionf *v8; 
  hknpWorld *world; 
  hknpBroadPhase *UndecoratedBroadPhase; 
  __int64 v19; 
  float zero[4]; 
  hkTransformf v21; 
  hknpBodyId ids; 

  ids.m_serialAndIndex = bodyId.m_serialAndIndex;
  _RBP = hkRestorePosition;
  v8 = hkRestoreOrientation;
  _R15 = hkPosition;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 601, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (ids.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v19) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 602, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v19) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v19) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 606, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v19) )
      __debugbreak();
  }
  __asm { vmovss  xmm1, cs:__real@3a83126f; epsilon }
  if ( !hkQuaternionf::isOk((hkQuaternionf *)hkOrientation, *(const float *)&_XMM1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 609, ASSERT_TYPE_ASSERT, "(hkOrientation.isOk())", (const char *)&queryFormat, "hkOrientation.isOk()") )
    __debugbreak();
  hkRotationImpl<float>::set(&v21.m_rotation, hkOrientation);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rsp+0C8h+var_48], xmm0
    vmovss  xmm0, cs:__real@3727c5ac
  }
  _RBX = (const hkTransformf *)((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, ids.m_serialAndIndex);
  __asm { vmovss  [rsp+0C8h+zero], xmm0 }
  if ( hkTransformf::isApproximatelyEqual(&v21, _RBX, zero) )
    return 0i64;
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx+30h]
    vmovups xmmword ptr [rbp+0], xmm0
  }
  hkQuaternionf::set(v8, &_RBX->m_rotation);
  hknpBody::setTransform(&world->m_bodyManager.m_bodies.m_objects.m_data[ids.m_serialAndIndex & 0xFFFFFF].m_pod, &v21);
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
  unsigned int m_serialAndIndex; 
  hknpBroadPhase *UndecoratedBroadPhase; 
  __int64 v28; 
  hknpBodyId ids; 

  ids.m_serialAndIndex = bodyId.m_serialAndIndex;
  _RBP = hkRestorePosition;
  _RSI = hkPosition;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 676, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (ids.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v28) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 677, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Warp Rigid Body with invalid body id for world %i", "bodyId.isValid()", v28) )
      __debugbreak();
  }
  world = HavokPhysics_GetMutableWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v28) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 681, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", v28) )
      __debugbreak();
  }
  _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBodyTransform)(&world->hknpWorldReader, ids.m_serialAndIndex);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups xmm1, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
    vmovups xmm5, xmmword ptr [rax+30h]
    vsubps  xmm2, xmm0, xmm5
    vandnps xmm3, xmm1, xmm2
    vcmpleps xmm4, xmm3, cs:__xmm@3727c5ac3727c5ac3727c5ac3727c5ac
    vpxor   xmm1, xmm1, xmm1
    vpcmpeqd xmm2, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vblendps xmm2, xmm0, xmm2, 7
    vpand   xmm1, xmm4, xmm2
    vptest  xmm1, xmm2
  }
  if ( _CF )
    return 0i64;
  m_serialAndIndex = ids.m_serialAndIndex;
  __asm
  {
    vmovups xmmword ptr [rbp+0], xmm5
    vmovups xmm0, xmmword ptr [rsi]
  }
  _RDX = 176i64 * (m_serialAndIndex & 0xFFFFFF);
  _RAX = world->m_bodyManager.m_bodies.m_objects.m_data;
  __asm { vmovups xmmword ptr [rdx+rax+30h], xmm0 }
  UndecoratedBroadPhase = hknpWorldUtil::getUndecoratedBroadPhase(world);
  hknpBroadPhase::markBodiesAntilag(UndecoratedBroadPhase, &ids, 1, 4);
  return 2i64;
}

/*
==============
HavokPhysics_GetPerlinNoise2dValue
==============
*/

float __fastcall HavokPhysics_GetPerlinNoise2dValue(int seed, double frequency, double amplitude, int octaves, float persistence, int gridSize)
{
  const __m128 *v21; 
  int v79; 
  int v80; 
  const __m128 *v132; 
  const __m128 *v146; 
  int v165; 
  const __m128 *v216; 
  const __m128 *v230; 
  int v252; 
  const __m128 *v303; 
  const __m128 *v317; 
  const __m128 *v385; 
  const __m128 *v399; 
  __m128 v448; 
  __m128 v449; 
  __m128 v450; 
  __m128 v451; 
  __m128 v454; 
  __m128 v455; 
  __m128 v456; 
  __m128 v457; 
  __m128 v458; 
  __int64 v462; 
  __m128 result; 
  __m128 v464; 
  __m128 v465; 
  hkPerlinNoise2d v466; 
  char v467; 
  void *retaddr; 

  _RAX = &retaddr;
  v462 = -2i64;
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
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm1
  }
  hkPerlinNoise2d::hkPerlinNoise2d(&v466, seed, gridSize);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  xmm1, xmm0, xmm6
    vshufps xmm15, xmm1, xmm1, 0
    vmovups xmmword ptr [rbp+200h+var_160.m_frequency.m_real], xmm15
  }
  v466.m_octaves = octaves;
  __asm
  {
    vbroadcastss xmm1, [rbp+200h+persistence]
    vmovups xmmword ptr [rbp+200h+var_160.m_persistence.m_real], xmm1
    vmovss  xmm1, xmm0, xmm7
    vshufps xmm2, xmm1, xmm1, 0
    vmovups [rsp+300h+var_2C8+8], xmm2
    vmovups xmmword ptr [rbp+200h+var_160.m_amplitude.m_real], xmm2
    vxorps  xmm1, xmm1, xmm1
    vmovups xmm11, xmm1
    vmovups xmmword ptr [rbp+200h+var_160.m_coverage.m_real], xmm1
    vxorps  xmm14, xmm14, xmm14
    vcvtsi2ss xmm0, xmm0, [rbp+200h+x]
    vshufps xmm3, xmm0, xmm0, 0
    vmovups [rsp+300h+var_298+8], xmm3
    vcvtsi2ss xmm1, xmm1, [rbp+200h+y]
    vshufps xmm12, xmm1, xmm1, 0
    vmovups [rsp+300h+var_2B8+8], xmm12
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vshufps xmm10, xmm0, xmm0, 0
    vrcpps  xmm2, xmm10
    vmulps  xmm1, xmm10, xmm2
    vmovups xmm0, cs:?hkSse_floatTwo@hkMath@@3QBIB; uint const near * const hkMath::hkSse_floatTwo
    vsubps  xmm1, xmm0, xmm1
    vmulps  xmm7, xmm1, xmm2
    vmulps  xmm4, xmm3, xmm7
    vmulps  xmm0, xmm4, xmm4
    vmulps  xmm5, xmm4, xmm0
    vmovss  xmm9, cs:__real@41200000
    vmovaps xmm1, xmm9
    vshufps xmm3, xmm1, xmm1, 0
    vmovss  xmm8, cs:__real@41700000
    vmovaps xmm1, xmm8
    vshufps xmm2, xmm1, xmm1, 0
    vmulps  xmm0, xmm2, xmm4
    vsubps  xmm3, xmm3, xmm0
    vmulps  xmm0, xmm4, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+0B0h; __m128 const near * const g_vectorfConstants
    vmulps  xmm1, xmm0, xmm4
    vaddps  xmm2, xmm1, xmm3
    vmulps  xmm13, xmm2, xmm5
    vmovups [rbp+200h+var_1D0], xmm13
    vmulps  xmm4, xmm7, xmm12
    vmulps  xmm0, xmm4, xmm4
    vmulps  xmm5, xmm0, xmm4
    vmovaps xmm1, xmm9
    vshufps xmm3, xmm1, xmm1, 0
    vmovaps xmm1, xmm8
    vshufps xmm2, xmm1, xmm1, 0
    vmulps  xmm0, xmm2, xmm4
    vsubps  xmm3, xmm3, xmm0
    vmulps  xmm1, xmm4, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+0B0h; __m128 const near * const g_vectorfConstants
    vmulps  xmm0, xmm1, xmm4
    vaddps  xmm2, xmm0, xmm3
    vmulps  xmm0, xmm2, xmm5
    vmovups xmmword ptr [rbp+200h+var_260], xmm0
    vmovups xmm2, [rsp+300h+var_298+8]
    vsubps  xmm6, xmm10, xmm2
    vmovups [rbp+200h+var_240], xmm6
    vsubps  xmm1, xmm10, xmm12
    vmovups [rbp+200h+var_1C0], xmm1
    vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
    vsubps  xmm1, xmm8, xmm13
    vmovups [rbp+200h+var_1B0], xmm1
    vsubps  xmm1, xmm8, xmm0
    vmovups [rbp+200h+var_230], xmm1
    vmulps  xmm0, xmm0, xmm13
    vmovups xmmword ptr [rbp+200h+var_200], xmm0
    vxorps  xmm1, xmm1, xmm1
    vmovups [rsp+300h+var_2D8+8], xmm1
  }
  v79 = 0;
  v80 = 0;
  __asm { vmovss  xmm13, cs:__real@30800000 }
  if ( octaves > 0 )
  {
    __asm
    {
      vmovaps xmm1, xmm13
      vshufps xmm4, xmm1, xmm1, 0
      vmovups [rsp+300h+var_2A8+8], xmm4
      vshufps xmm5, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+200h+var_280], xmm5
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+200h+var_220], xmm0
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+200h+var_210], xmm0
      vmovups xmm13, [rsp+300h+var_2C8+8]
    }
    do
    {
      __asm
      {
        vmulps  xmm3, xmm15, xmm12
        vmulps  xmm2, xmm2, xmm15
        vcvttps2dq xmm0, xmm2
        vmovd   esi, xmm0
        vcvtsi2ss xmm1, xmm14, esi
        vshufps xmm0, xmm1, xmm1, 0
        vsubps  xmm11, xmm2, xmm0
        vcvttps2dq xmm1, xmm3
        vmovd   edi, xmm1
        vcvtsi2ss xmm0, xmm14, edi
        vshufps xmm0, xmm0, xmm0, 0
        vsubps  xmm12, xmm3, xmm0
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm4, xmm0
        vsubps  xmm7, xmm8, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm5, xmm0
        vsubps  xmm6, xmm8, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+result], xmm1
      }
      hkMath::quadCos(&result, v21);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm8, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm9, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm7
        vaddps  xmm10, xmm1, xmm2
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+200h+var_220]
        vsubps  xmm8, xmm9, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+200h+var_210]
        vsubps  xmm6, xmm9, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_180], xmm1
      }
      hkMath::quadCos(&v464, v132);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm9, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm7, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm7, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm8
        vaddps  xmm6, xmm1, xmm2
        vmulps  xmm1, xmm12, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_170], xmm1
      }
      hkMath::quadCos(&v465, v146);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm7, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm8, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm10
        vaddps  xmm0, xmm1, xmm2
        vmulps  xmm2, xmm13, xmm0
        vaddps  xmm1, xmm2, [rsp+300h+var_2D8+8]
        vmovups [rsp+300h+var_2D8+8], xmm1
        vaddps  xmm15, xmm15, xmm15
        vmulps  xmm13, xmm13, xmmword ptr [rbp+200h+var_160.m_persistence.m_real]
      }
      ++v80;
      octaves = v466.m_octaves;
      __asm
      {
        vmovups xmm12, [rsp+300h+var_2B8+8]
        vmovups xmm4, [rsp+300h+var_2A8+8]
        vmovups xmm5, xmmword ptr [rbp+200h+var_280]
        vmovups xmm2, [rsp+300h+var_298+8]
      }
    }
    while ( v80 < v466.m_octaves );
    __asm
    {
      vmovups xmm11, xmmword ptr [rbp+200h+var_160.m_coverage.m_real]
      vmovups xmm2, xmmword ptr [rbp+200h+var_160.m_amplitude.m_real]
      vmovups [rsp+300h+var_2C8+8], xmm2
      vmovups xmm15, xmmword ptr [rbp+200h+var_160.m_frequency.m_real]
      vmovss  xmm13, cs:__real@30800000
      vmovups xmm6, [rbp+200h+var_240]
    }
  }
  __asm
  {
    vaddps  xmm0, xmm11, xmm1
    vmulps  xmm1, xmm0, xmmword ptr [rbp+200h+var_200]
    vaddps  xmm0, xmm1, xmm14
    vmovups xmmword ptr [rbp+200h+var_1E0], xmm0
    vmovups xmm1, xmm14
    vmovups [rsp+300h+var_2D8+8], xmm1
  }
  v165 = 0;
  if ( octaves > 0 )
  {
    __asm
    {
      vmovaps xmm1, xmm13
      vshufps xmm4, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+200h+var_1F0], xmm4
      vshufps xmm5, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+200h+var_270], xmm5
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+200h+var_280], xmm0
      vshufps xmm0, xmm1, xmm1, 0
      vmovups [rsp+300h+var_2A8+8], xmm0
      vmovups xmm13, [rsp+300h+var_2C8+8]
    }
    do
    {
      __asm
      {
        vmulps  xmm3, xmm15, xmm12
        vmulps  xmm2, xmm15, xmm6
        vcvttps2dq xmm0, xmm2
        vmovd   esi, xmm0
        vcvtsi2ss xmm1, xmm14, esi
        vshufps xmm0, xmm1, xmm1, 0
        vsubps  xmm11, xmm2, xmm0
        vcvttps2dq xmm1, xmm3
        vmovd   edi, xmm1
        vcvtsi2ss xmm0, xmm14, edi
        vshufps xmm0, xmm0, xmm0, 0
        vsubps  xmm12, xmm3, xmm0
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm4, xmm0
        vsubps  xmm7, xmm8, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm5, xmm0
        vsubps  xmm6, xmm8, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_200], xmm1
      }
      hkMath::quadCos(&v456, v21);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm8, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm9, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm7
        vaddps  xmm10, xmm1, xmm2
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+200h+var_280]
        vsubps  xmm8, xmm9, xmm1
        vcvtsi2ss xmm0, xmm14, r9d
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, [rsp+300h+var_2A8+8]
        vsubps  xmm6, xmm9, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_210], xmm1
      }
      hkMath::quadCos(&v455, v216);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm9, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm7, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm7, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm8
        vaddps  xmm6, xmm1, xmm2
        vmulps  xmm1, xmm12, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_220], xmm1
      }
      hkMath::quadCos(&v454, v230);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm7, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm8, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm10
        vaddps  xmm0, xmm1, xmm2
        vmulps  xmm2, xmm13, xmm0
        vaddps  xmm1, xmm2, [rsp+300h+var_2D8+8]
        vmovups [rsp+300h+var_2D8+8], xmm1
        vaddps  xmm15, xmm15, xmm15
        vmulps  xmm13, xmm13, xmmword ptr [rbp+200h+var_160.m_persistence.m_real]
      }
      ++v165;
      octaves = v466.m_octaves;
      __asm
      {
        vmovups xmm12, [rsp+300h+var_2B8+8]
        vmovups xmm4, xmmword ptr [rbp+200h+var_1F0]
        vmovups xmm5, xmmword ptr [rbp+200h+var_270]
        vmovups xmm6, [rbp+200h+var_240]
      }
    }
    while ( v165 < v466.m_octaves );
    __asm
    {
      vmovups xmm11, xmmword ptr [rbp+200h+var_160.m_coverage.m_real]
      vmovups xmm2, xmmword ptr [rbp+200h+var_160.m_amplitude.m_real]
      vmovups [rsp+300h+var_2C8+8], xmm2
      vmovups xmm15, xmmword ptr [rbp+200h+var_160.m_frequency.m_real]
      vmovss  xmm13, cs:__real@30800000
    }
  }
  __asm
  {
    vaddps  xmm0, xmm11, xmm1
    vmovups xmm3, [rbp+200h+var_1B0]
    vmulps  xmm2, xmm3, xmmword ptr [rbp+200h+var_260]
    vmulps  xmm1, xmm0, xmm2
    vaddps  xmm0, xmm1, xmmword ptr [rbp+200h+var_1E0]
    vmovups xmmword ptr [rbp+200h+var_250], xmm0
    vmovups xmm4, [rbp+200h+var_230]
    vmovups xmm1, xmm14
    vmovups [rsp+300h+var_2D8+8], xmm1
  }
  v252 = 0;
  if ( octaves > 0 )
  {
    __asm
    {
      vmovaps xmm1, xmm13
      vshufps xmm4, xmm1, xmm1, 0
      vmovups [rsp+300h+var_2A8+8], xmm4
      vshufps xmm5, xmm1, xmm1, 0
      vmovups [rsp+300h+var_2B8+8], xmm5
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+200h+var_260], xmm0
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+200h+var_270], xmm0
      vmovups xmm13, [rsp+300h+var_2C8+8]
    }
    do
    {
      __asm
      {
        vmulps  xmm3, xmm15, [rbp+200h+var_1C0]
        vmulps  xmm2, xmm15, [rsp+300h+var_298+8]
        vcvttps2dq xmm0, xmm2
        vmovd   esi, xmm0
        vcvtsi2ss xmm1, xmm14, esi
        vshufps xmm0, xmm1, xmm1, 0
        vsubps  xmm11, xmm2, xmm0
        vcvttps2dq xmm1, xmm3
        vmovd   edi, xmm1
        vcvtsi2ss xmm0, xmm14, edi
        vshufps xmm0, xmm0, xmm0, 0
        vsubps  xmm12, xmm3, xmm0
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm4, xmm0
        vsubps  xmm7, xmm8, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm5, xmm0
        vsubps  xmm6, xmm8, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_1E0], xmm1
      }
      hkMath::quadCos(&v458, v21);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm8, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm9, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm7
        vaddps  xmm10, xmm1, xmm2
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+200h+var_260]
        vsubps  xmm8, xmm9, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, xmmword ptr [rbp+200h+var_270]
        vsubps  xmm6, xmm9, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_1F0], xmm1
      }
      hkMath::quadCos(&v457, v303);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm9, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm7, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm7, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm8
        vaddps  xmm6, xmm1, xmm2
        vmulps  xmm1, xmm12, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_280], xmm1
      }
      hkMath::quadCos(&v448, v317);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm7, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm8, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm10
        vaddps  xmm0, xmm1, xmm2
        vmulps  xmm2, xmm13, xmm0
        vaddps  xmm1, xmm2, [rsp+300h+var_2D8+8]
        vmovups [rsp+300h+var_2D8+8], xmm1
        vaddps  xmm15, xmm15, xmm15
        vmulps  xmm13, xmm13, xmmword ptr [rbp+200h+var_160.m_persistence.m_real]
      }
      ++v252;
      octaves = v466.m_octaves;
      __asm
      {
        vmovups xmm4, [rsp+300h+var_2A8+8]
        vmovups xmm5, [rsp+300h+var_2B8+8]
      }
    }
    while ( v252 < v466.m_octaves );
    __asm
    {
      vmovups xmm11, xmmword ptr [rbp+200h+var_160.m_coverage.m_real]
      vmovups xmm2, xmmword ptr [rbp+200h+var_160.m_amplitude.m_real]
      vmovups [rsp+300h+var_2C8+8], xmm2
      vmovups xmm15, xmmword ptr [rbp+200h+var_160.m_frequency.m_real]
      vmovss  xmm13, cs:__real@30800000
      vmovups xmm4, [rbp+200h+var_230]
    }
  }
  __asm
  {
    vaddps  xmm0, xmm11, xmm1
    vmulps  xmm2, xmm4, [rbp+200h+var_1D0]
    vmulps  xmm1, xmm0, xmm2
    vaddps  xmm0, xmm1, xmmword ptr [rbp+200h+var_250]
    vmovups [rsp+300h+var_2B8+8], xmm0
    vmovups xmm3, xmm14
    vmovups [rsp+300h+var_2D8+8], xmm3
  }
  if ( octaves > 0 )
  {
    __asm
    {
      vmovaps xmm1, xmm13
      vshufps xmm4, xmm1, xmm1, 0
      vmovups [rsp+300h+var_2A8+8], xmm4
      vshufps xmm5, xmm1, xmm1, 0
      vmovups [rsp+300h+var_298+8], xmm5
      vshufps xmm0, xmm1, xmm1, 0
      vmovups xmmword ptr [rbp+200h+var_250], xmm0
      vshufps xmm0, xmm1, xmm1, 0
      vmovups [rbp+200h+var_1D0], xmm0
      vmovups xmm13, xmmword ptr [rbp+200h+var_250]
    }
    do
    {
      __asm
      {
        vmulps  xmm3, xmm15, [rbp+200h+var_1C0]
        vmulps  xmm2, xmm15, [rbp+200h+var_240]
        vcvttps2dq xmm0, xmm2
        vmovd   esi, xmm0
        vcvtsi2ss xmm1, xmm14, esi
        vshufps xmm0, xmm1, xmm1, 0
        vsubps  xmm11, xmm2, xmm0
        vcvttps2dq xmm1, xmm3
        vmovd   edi, xmm1
        vcvtsi2ss xmm0, xmm14, edi
        vshufps xmm0, xmm0, xmm0, 0
        vsubps  xmm12, xmm3, xmm0
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm4, xmm0
        vsubps  xmm7, xmm8, xmm1
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm5, xmm0
        vsubps  xmm6, xmm8, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_250], xmm1
      }
      hkMath::quadCos(&v451, v21);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm8, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm9, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm9, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm7
        vaddps  xmm10, xmm1, xmm2
        vcvtsi2ss xmm0, xmm14, eax
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm13, xmm0
        vsubps  xmm8, xmm9, xmm1
        vcvtsi2ss xmm0, xmm14, r9d
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm1, xmm0, [rbp+200h+var_1D0]
        vsubps  xmm6, xmm9, xmm1
        vmulps  xmm1, xmm11, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_260], xmm1
      }
      hkMath::quadCos(&v450, v385);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm9, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm7, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm7, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm8
        vaddps  xmm6, xmm1, xmm2
        vmulps  xmm1, xmm12, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+360h; __m128 const near * const g_vectorfConstants
        vxorps  xmm0, xmm0, xmm0
        vmovss  xmm1, xmm0, xmm1
        vmovups xmmword ptr [rbp+200h+var_270], xmm1
      }
      hkMath::quadCos(&v449, v399);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vmovss  xmm0, xmm1, xmm0
        vshufps xmm2, xmm0, xmm0, 0
        vsubps  xmm1, xmm7, xmm2
        vmulps  xmm3, xmm1, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
        vmovups xmm8, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+60h; __m128 const near * const g_vectorfConstants
        vsubps  xmm0, xmm8, xmm3
        vmulps  xmm2, xmm0, xmm6
        vmulps  xmm1, xmm3, xmm10
        vaddps  xmm0, xmm1, xmm2
        vmovups xmm1, [rsp+300h+var_2C8+8]
        vmulps  xmm2, xmm0, xmm1
        vaddps  xmm3, xmm2, [rsp+300h+var_2D8+8]
        vmovups [rsp+300h+var_2D8+8], xmm3
        vaddps  xmm15, xmm15, xmm15
        vmulps  xmm1, xmm1, xmmword ptr [rbp+200h+var_160.m_persistence.m_real]
        vmovups [rsp+300h+var_2C8+8], xmm1
      }
      ++v79;
      __asm
      {
        vmovups xmm4, [rsp+300h+var_2A8+8]
        vmovups xmm5, [rsp+300h+var_298+8]
      }
    }
    while ( v79 < v466.m_octaves );
    __asm
    {
      vmovups xmm11, xmmword ptr [rbp+200h+var_160.m_coverage.m_real]
      vmovups xmm4, [rbp+200h+var_230]
    }
  }
  __asm
  {
    vaddps  xmm0, xmm11, xmm3
    vmulps  xmm1, xmm4, [rbp+200h+var_1B0]
    vmulps  xmm1, xmm0, xmm1
    vaddps  xmm6, xmm1, [rsp+300h+var_2B8+8]
  }
  hkReferencedObject::~hkReferencedObject(&v466);
  __asm { vmovaps xmm0, xmm6 }
  _R11 = &v467;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
  return *(float *)&_XMM0;
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
  __int64 v14; 
  __int64 v48; 
  char v51; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _R14 = pointVel;
  __asm { vmovaps xmmword ptr [rax-38h], xmm7 }
  _RBP = point;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 500, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body PointVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v48) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 501, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body PointVel with invalid body id for world %i", "bodyId.isValid()", v48) )
      __debugbreak();
  }
  world = HavokPhysics_GetConstWorld(worldId)->world;
  if ( !world )
  {
    LODWORD(v48) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 505, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics GetRigidBodyPointVel %i: world is NULL", "world", v48) )
      __debugbreak();
  }
  v14 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, bodyId.m_serialAndIndex);
  _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v14 + 64));
  __asm { vmovups xmm0, xmmword ptr [rbp+0] }
  _R11 = &v51;
  __asm
  {
    vsubps  xmm9, xmm0, xmmword ptr [rax]
    vmovups xmm7, xmmword ptr [rax+10h]
    vmovups xmm4, xmmword ptr [rax+50h]
    vshufps xmm8, xmm7, xmm7, 0FFh
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm3, xmm0, xmm7
    vdpps   xmm0, xmm7, xmm4, 7Fh
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm4
    vsubps  xmm5, xmm3, xmm2
    vmulps  xmm3, xmm0, xmm7
    vmovaps xmm7, [rsp+98h+var_38]
    vmulps  xmm6, xmm8, xmm8
    vsubps  xmm1, xmm6, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+150h; __m128 const near * const g_vectorfConstants
    vmovaps xmm6, [rsp+98h+var_28]
    vmulps  xmm2, xmm1, xmm4
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm1, xmm0, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vaddps  xmm4, xmm3, xmm2
    vaddps  xmm2, xmm4, xmm1
    vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
    vaddps  xmm5, xmm2, xmm2
    vshufps xmm0, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm3, xmm0, xmm9
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulps  xmm2, xmm1, xmm5
    vsubps  xmm0, xmm2, xmm3
    vshufps xmm0, xmm0, xmm0, 0C9h ; 'É'
    vaddps  xmm1, xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [r14], xmm1
  }
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

void __fastcall HavokPhysics_UpdateDetailBounds(const Physics_WorldId worldId, const hknpBodyId bodyId, const hkVector4f *position, double radius)
{
  hknpWorld *world; 
  unsigned __int64 *p_m_bodyChanged; 
  unsigned int m_serialAndIndex; 
  unsigned __int64 m_ptrAndInt; 
  unsigned __int64 *v29; 
  _QWORD *v30; 
  unsigned __int64 *v31; 
  unsigned __int64 v32; 
  __int64 v33; 
  bool v36; 
  void *retaddr; 
  hknpBodyId p1; 
  hkRefPtr<hknpShape const > p2; 

  _RAX = &retaddr;
  p1.m_serialAndIndex = bodyId.m_serialAndIndex;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmm6, xmm3
  }
  _RDI = position;
  _R13 = HavokPhysics_GetMutableWorld(worldId);
  world = _R13->world;
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 778, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics WarpRigidBodyTo %i: world is NULL", "world", worldId) )
    __debugbreak();
  ((void (__fastcall *)(hknpWorldWriter *, _QWORD, const hkVector4f *, __int64))world->setBodyPosition)(&world->hknpWorldWriter, p1.m_serialAndIndex, _RDI, 1i64);
  _R12 = world->m_bodyManager.m_bodies.m_objects.m_data;
  _RSI = (const hknpShape *)(176i64 * (p1.m_serialAndIndex & 0xFFFFFF));
  p2.m_ptr = _RSI;
  __asm
  {
    vmovups xmm7, xmmword ptr [rdi]
    vmovups xmm0, xmmword ptr [r12+rsi+30h]
    vsubps  xmm2, xmm0, xmm7
    vmovups xmm1, cs:?hkSse_signMask@hkMath@@3QBIB; uint const near * const hkMath::hkSse_signMask
    vandnps xmm3, xmm1, xmm2
    vcmpleps xmm5, xmm3, cs:__xmm@3c23d70a3c23d70a3c23d70a3c23d70a
    vxorps  xmm2, xmm2, xmm2
    vpxor   xmm0, xmm0, xmm0
    vpcmpeqd xmm1, xmm0, xmm0
    vblendps xmm2, xmm2, xmm1, 7
    vpand   xmm0, xmm5, xmm2
    vptest  xmm0, xmm2
  }
  if ( !_CF )
  {
    __asm { vmovups xmmword ptr [r12+rsi+30h], xmm7 }
    p_m_bodyChanged = (unsigned __int64 *)&world->m_signals.m_bodyChanged;
    m_serialAndIndex = p1.m_serialAndIndex;
    m_ptrAndInt = (unsigned __int64)world->m_signals.m_bodyChanged.m_slots.m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64 | 1;
    world->m_signals.m_bodyChanged.m_slots.m_ptrAndInt = (hkSlot *)m_ptrAndInt;
    v29 = (unsigned __int64 *)&world->m_signals.m_bodyChanged;
    v30 = (_QWORD *)(m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64);
    if ( (m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64) != 0 )
    {
      do
      {
        v31 = v30 + 1;
        v32 = v30[1] & 0xFFFFFFFFFFFFFFFCui64;
        v33 = *v30;
        if ( (v30[1] & 3) != 0 )
        {
          (*(void (__fastcall **)(_QWORD *, __int64))v33)(v30, 1i64);
          *v29 = v32 | *(_DWORD *)v29 & 3;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD *, hknpWorld *, _QWORD))(v33 + 16))(v30, world, m_serialAndIndex);
          v29 = v31;
        }
        v30 = (_QWORD *)v32;
      }
      while ( v32 );
      p_m_bodyChanged = (unsigned __int64 *)&world->m_signals.m_bodyChanged;
      m_ptrAndInt = (unsigned __int64)world->m_signals.m_bodyChanged.m_slots.m_ptrAndInt;
      _RSI = p2.m_ptr;
    }
    *p_m_bodyChanged = m_ptrAndInt & 0xFFFFFFFFFFFFFFFCui64;
    world->m_broadPhase->markBodiesDirty(world->m_broadPhase, &p1, 1, 4);
  }
  _RBX = *(hknpShape **)((char *)&_RSI[1].m_userData + (_QWORD)_R12);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 798, ASSERT_TYPE_ASSERT, "( shape )", (const char *)&queryFormat, "shape") )
    __debugbreak();
  _ZF = _RBX->m_type.m_storage == 2;
  if ( _RBX->m_type.m_storage != 2 )
  {
    v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 799, ASSERT_TYPE_ASSERT, "( shape->getType() == hknpShapeType::SPHERE )", (const char *)&queryFormat, "shape->getType() == hknpShapeType::SPHERE");
    _ZF = !v36;
    if ( v36 )
      __debugbreak();
  }
  __asm { vucomiss xmm6, dword ptr [rbx+20h] }
  if ( !_ZF )
  {
    __asm
    {
      vmovss  dword ptr [rbx+20h], xmm6
      vmovss  xmm0, dword ptr [r13+1C8h]
      vmaxss  xmm1, xmm0, xmm6
      vmovss  dword ptr [r13+1C8h], xmm1
    }
    p2.m_ptr = _RBX;
    hkReferencedObject::addReference(_RBX);
    hkSignal3<hknpWorld *,hknpBodyId,hkRefPtr<hknpShape const> &>::fire(&_R13->world->m_signals.m_bodyShapeChanged, _R13->world, p1, &p2);
    world->m_broadPhase->markBodiesDirty(world->m_broadPhase, &p1, 1, 4);
    if ( p2.m_ptr )
      hkReferencedObject::removeReference(&p2.m_ptr->hkReferencedObject);
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_48]
    vmovaps xmm7, [rsp+0A8h+var_58]
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
  __int64 v7; 

  v2 = worldId;
  _RDI = gravity;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
      __debugbreak();
    if ( (unsigned int)v2 > 7 )
    {
      LODWORD(v7) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 56, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavokPhysics: Trying to access invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
        __debugbreak();
    }
  }
  _RAX = g_havokPhysicsWorlds[v2].world;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+0AC0h]
    vmovups xmmword ptr [rdi], xmm0
  }
}


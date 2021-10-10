/*
==============
Ragdoll_CheckApplyRadiusForce
==============
*/

bool __fastcall Ragdoll_CheckApplyRadiusForce(Ragdoll *ragdoll, const float radius)
{
  return ?Ragdoll_CheckApplyRadiusForce@@YA_NPEAURagdoll@@M@Z(ragdoll, radius);
}

/*
==============
Ragdoll_GetRootOrigin
==============
*/

bool __fastcall Ragdoll_GetRootOrigin(int ragdollHandle, vec3_t *outOrigin)
{
  return ?Ragdoll_GetRootOrigin@@YA_NHAEATvec3_t@@@Z(ragdollHandle, outOrigin);
}

/*
==============
Ragdoll_SetDebugExplosionImpulse
==============
*/

void __fastcall Ragdoll_SetDebugExplosionImpulse(const Ragdoll *ragdoll, int boneId, const vec3_t *position, const vec3_t *normalizedDirection, float magnitude)
{
  ?Ragdoll_SetDebugExplosionImpulse@@YAXPEBURagdoll@@HAEBTvec3_t@@1M@Z(ragdoll, boneId, position, normalizedDirection, magnitude);
}

/*
==============
Ragdoll_GetAnimPoseBoneOrientationsForWrite
==============
*/

BoneOrientation *__fastcall Ragdoll_GetAnimPoseBoneOrientationsForWrite(Ragdoll *ragdoll)
{
  return ?Ragdoll_GetAnimPoseBoneOrientationsForWrite@@YAPEAUBoneOrientation@@PEAURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_GetAnimPoseBoneOrientations
==============
*/

const BoneOrientation *__fastcall Ragdoll_GetAnimPoseBoneOrientations(const Ragdoll *ragdoll)
{
  return ?Ragdoll_GetAnimPoseBoneOrientations@@YAPEBUBoneOrientation@@PEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_ResetAllContactsWithMovers
==============
*/

void __fastcall Ragdoll_ResetAllContactsWithMovers(Ragdoll *ragdoll)
{
  ?Ragdoll_ResetAllContactsWithMovers@@YAXPEAURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_RequiresAnimationPose
==============
*/

bool __fastcall Ragdoll_RequiresAnimationPose(const int ragdollHandle)
{
  return ?Ragdoll_RequiresAnimationPose@@YA_NH@Z(ragdollHandle);
}

/*
==============
Ragdoll_ResetContactWithMover
==============
*/

void __fastcall Ragdoll_ResetContactWithMover(int ragdollHandle, const __int16 moverEntNum, unsigned int boneIndex)
{
  ?Ragdoll_ResetContactWithMover@@YAXHFI@Z(ragdollHandle, moverEntNum, boneIndex);
}

/*
==============
Ragdoll_SetDebugBulletImpulse
==============
*/

void __fastcall Ragdoll_SetDebugBulletImpulse(const Ragdoll *ragdoll, int boneId, const vec3_t *position, const vec3_t *normalizedDirection, float magnitude)
{
  ?Ragdoll_SetDebugBulletImpulse@@YAXPEBURagdoll@@HAEBTvec3_t@@1M@Z(ragdoll, boneId, position, normalizedDirection, magnitude);
}

/*
==============
Ragdoll_CreateRagdollForDObj
==============
*/

int __fastcall Ragdoll_CreateRagdollForDObj(LocalClientNum_t clientNum, int dobj, int entityNum, int hitLocation, const vec3_t *impactVector, bool immediatePlayerRagdoll)
{
  return ?Ragdoll_CreateRagdollForDObj@@YAHW4LocalClientNum_t@@HHHAEBTvec3_t@@_N@Z(clientNum, dobj, entityNum, hitLocation, impactVector, immediatePlayerRagdoll);
}

/*
==============
Ragdoll_Shutdown
==============
*/

void Ragdoll_Shutdown(void)
{
  ?Ragdoll_Shutdown@@YAXXZ();
}

/*
==============
Ragdoll_Register
==============
*/

void __fastcall Ragdoll_Register(LocalClientNum_t clientNum)
{
  ?Ragdoll_Register@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
Ragdoll_GetMoverOffset
==============
*/

void __fastcall Ragdoll_GetMoverOffset(int ragdollHandle, vec3_t *outMoverOffset)
{
  ?Ragdoll_GetMoverOffset@@YAXHAEATvec3_t@@@Z(ragdollHandle, outMoverOffset);
}

/*
==============
Ragdoll_SetMoverOffset
==============
*/

void __fastcall Ragdoll_SetMoverOffset(int ragdollHandle, const vec3_t *moverOffset)
{
  ?Ragdoll_SetMoverOffset@@YAXHAEBTvec3_t@@@Z(ragdollHandle, moverOffset);
}

/*
==============
Ragdoll_SetDebugAnimationPoseBone
==============
*/

void __fastcall Ragdoll_SetDebugAnimationPoseBone(const Ragdoll *ragdoll, const BoneOrientation *animPoseBoneOrientation, int boneId)
{
  ?Ragdoll_SetDebugAnimationPoseBone@@YAXPEBURagdoll@@PEBUBoneOrientation@@H@Z(ragdoll, animPoseBoneOrientation, boneId);
}

/*
==============
Ragdoll_SetContactWithMover
==============
*/

void __fastcall Ragdoll_SetContactWithMover(int ragdollHandle, const __int16 moverEntNum, unsigned int boneIndex)
{
  ?Ragdoll_SetContactWithMover@@YAXHFI@Z(ragdollHandle, moverEntNum, boneIndex);
}

/*
==============
Ragdoll_GetNumRagdolls
==============
*/

int __fastcall Ragdoll_GetNumRagdolls(LocalClientNum_t clientNum)
{
  return ?Ragdoll_GetNumRagdolls@@YAHW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
Ragdoll_GetBoneOrigin
==============
*/

bool __fastcall Ragdoll_GetBoneOrigin(int ragdollHandle, const scr_string_t *boneName, vec3_t *outOrigin, float *outRadius)
{
  return ?Ragdoll_GetBoneOrigin@@YA_NHPEBW4scr_string_t@@AEATvec3_t@@AEAM@Z(ragdollHandle, boneName, outOrigin, outRadius);
}

/*
==============
Ragdoll_IsInitialized
==============
*/

bool __fastcall Ragdoll_IsInitialized()
{
  return ?Ragdoll_IsInitialized@@YA_NXZ();
}

/*
==============
Ragdoll_LoadRagdoll
==============
*/

void __fastcall Ragdoll_LoadRagdoll(int ragdollHandle, SaveGame *save)
{
  ?Ragdoll_LoadRagdoll@@YAXHPEAUSaveGame@@@Z(ragdollHandle, save);
}

/*
==============
Ragdoll_SaveRagdoll
==============
*/

void __fastcall Ragdoll_SaveRagdoll(int ragdollHandle, MemoryFile *memFile)
{
  ?Ragdoll_SaveRagdoll@@YAXHPEAUMemoryFile@@@Z(ragdollHandle, memFile);
}

/*
==============
Ragdoll_DebugDraw
==============
*/

void __fastcall Ragdoll_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  ?Ragdoll_DebugDraw@@YAXPEBUScreenPlacement@@PEAM1MM@Z(scrPlace, x, y, tabWidth, charHeight);
}

/*
==============
Ragdoll_CountLinksBetween
==============
*/

int __fastcall Ragdoll_CountLinksBetween(const int ragdollHandle, const int boneIndexA, const int boneIndexB)
{
  return ?Ragdoll_CountLinksBetween@@YAHHHH@Z(ragdollHandle, boneIndexA, boneIndexB);
}

/*
==============
Ragdoll_GetActorState
==============
*/

const LerpEntityStateActor *__fastcall Ragdoll_GetActorState(const Ragdoll *ragdoll)
{
  return ?Ragdoll_GetActorState@@YAPEBULerpEntityStateActor@@PEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_GetBoneOrigin
==============
*/

bool __fastcall Ragdoll_GetBoneOrigin(int ragdollHandle, const int boneIndex, vec3_t *outOrigin, float *outRadius)
{
  return ?Ragdoll_GetBoneOrigin@@YA_NHHAEATvec3_t@@AEAM@Z(ragdollHandle, boneIndex, outOrigin, outRadius);
}

/*
==============
Ragdoll_CheckApplyBulletForce
==============
*/

bool __fastcall Ragdoll_CheckApplyBulletForce(Ragdoll *ragdoll, int boneId)
{
  return ?Ragdoll_CheckApplyBulletForce@@YA_NPEAURagdoll@@H@Z(ragdoll, boneId);
}

/*
==============
Ragdoll_Reset
==============
*/

void __fastcall Ragdoll_Reset(LocalClientNum_t clientNum)
{
  ?Ragdoll_Reset@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
Ragdoll_Release
==============
*/

void __fastcall Ragdoll_Release(int ragdollHandle)
{
  ?Ragdoll_Release@@YAXH@Z(ragdollHandle);
}

/*
==============
Ragdoll_SetNextPhysicsPoseValid
==============
*/

void __fastcall Ragdoll_SetNextPhysicsPoseValid(Ragdoll *ragdoll)
{
  ?Ragdoll_SetNextPhysicsPoseValid@@YAXPEAURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_DisablePoseControllerRoot
==============
*/

void __fastcall Ragdoll_DisablePoseControllerRoot(int ragdollHandle, float blendOutTime)
{
  ?Ragdoll_DisablePoseControllerRoot@@YAXHM@Z(ragdollHandle, blendOutTime);
}

/*
==============
Ragdoll_Init
==============
*/

void Ragdoll_Init(void)
{
  ?Ragdoll_Init@@YAXXZ();
}

/*
==============
Ragdoll_GetPhysicsPoseBoneOrientations
==============
*/

const BoneOrientation *__fastcall Ragdoll_GetPhysicsPoseBoneOrientations(const Ragdoll *ragdoll)
{
  return ?Ragdoll_GetPhysicsPoseBoneOrientations@@YAPEBUBoneOrientation@@PEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_GetLatestPhysicsPoseBoneOrientation
==============
*/

void __fastcall Ragdoll_GetLatestPhysicsPoseBoneOrientation(Ragdoll *ragdoll, unsigned int boneIndex, BoneOrientation *outBoneOrientation)
{
  ?Ragdoll_GetLatestPhysicsPoseBoneOrientation@@YAXPEAURagdoll@@IPEAUBoneOrientation@@@Z(ragdoll, boneIndex, outBoneOrientation);
}

/*
==============
Ragdoll_RequestNextAnimationPose
==============
*/

void __fastcall Ragdoll_RequestNextAnimationPose(Ragdoll *ragdoll)
{
  ?Ragdoll_RequestNextAnimationPose@@YAXPEAURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_SetAnimPoseRootOrientation
==============
*/

void __fastcall Ragdoll_SetAnimPoseRootOrientation(Ragdoll *ragdoll, const vec4_t *rotation, const vec3_t *translation)
{
  ?Ragdoll_SetAnimPoseRootOrientation@@YAXPEAURagdoll@@AEBTvec4_t@@AEBTvec3_t@@@Z(ragdoll, rotation, translation);
}

/*
==============
Ragdoll_GetAnimPoseRootOrientation
==============
*/

const BoneOrientation *__fastcall Ragdoll_GetAnimPoseRootOrientation(const Ragdoll *ragdoll)
{
  return ?Ragdoll_GetAnimPoseRootOrientation@@YAPEBUBoneOrientation@@PEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_GetPrevAnimPoseBoneOrientations
==============
*/

const BoneOrientation *__fastcall Ragdoll_GetPrevAnimPoseBoneOrientations(const Ragdoll *ragdoll)
{
  return ?Ragdoll_GetPrevAnimPoseBoneOrientations@@YAPEBUBoneOrientation@@PEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_DisablePoseController
==============
*/

void __fastcall Ragdoll_DisablePoseController(int ragdollHandle, float blendOutTime)
{
  ?Ragdoll_DisablePoseController@@YAXHM@Z(ragdollHandle, blendOutTime);
}

/*
==============
Ragdoll_GetLatestPhysicsPoseBoneOrientations
==============
*/

const BoneOrientation *__fastcall Ragdoll_GetLatestPhysicsPoseBoneOrientations(const Ragdoll *ragdoll)
{
  return ?Ragdoll_GetLatestPhysicsPoseBoneOrientations@@YAPEBUBoneOrientation@@PEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_PoseValid
==============
*/

bool __fastcall Ragdoll_PoseValid(const Ragdoll *ragdoll)
{
  return ?Ragdoll_PoseValid@@YA_NPEBURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_SetDebugInitialVelocity
==============
*/

void __fastcall Ragdoll_SetDebugInitialVelocity(const Ragdoll *ragdoll, int boneId, const vec3_t *velocity, const bool hasImpact)
{
  ?Ragdoll_SetDebugInitialVelocity@@YAXPEBURagdoll@@HAEBTvec3_t@@_N@Z(ragdoll, boneId, velocity, hasImpact);
}

/*
==============
Ragdoll_GetEntityNumber
==============
*/

int __fastcall Ragdoll_GetEntityNumber(int ragdollHandle)
{
  return ?Ragdoll_GetEntityNumber@@YAHH@Z(ragdollHandle);
}

/*
==============
Ragdoll_ResetMoverOffset
==============
*/

void __fastcall Ragdoll_ResetMoverOffset(int ragdollHandle)
{
  ?Ragdoll_ResetMoverOffset@@YAXH@Z(ragdollHandle);
}

/*
==============
Ragdoll_EnablePoseController
==============
*/

void __fastcall Ragdoll_EnablePoseController(int ragdollHandle)
{
  ?Ragdoll_EnablePoseController@@YAXH@Z(ragdollHandle);
}

/*
==============
Ragdoll_IsRegistered
==============
*/

bool __fastcall Ragdoll_IsRegistered(LocalClientNum_t clientNum)
{
  return ?Ragdoll_IsRegistered@@YA_NW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
Ragdoll_ApplyVelocity
==============
*/

void __fastcall Ragdoll_ApplyVelocity(const int ragdollHandle, const int boneIndex, const vec3_t *dir, const float speed)
{
  ?Ragdoll_ApplyVelocity@@YAXHHAEBTvec3_t@@M@Z(ragdollHandle, boneIndex, dir, speed);
}

/*
==============
Ragdoll_GetAssociatedMovers
==============
*/

void __fastcall Ragdoll_GetAssociatedMovers(int ragdollHandle, __int16 *outMoverEntNums, unsigned int *outTotalNumMovers)
{
  ?Ragdoll_GetAssociatedMovers@@YAXHPEAFAEAI@Z(ragdollHandle, outMoverEntNums, outTotalNumMovers);
}

/*
==============
Ragdoll_ApplyFullBodyRadiusForce
==============
*/

bool __fastcall Ragdoll_ApplyFullBodyRadiusForce(Ragdoll *ragdoll, const vec3_t *position, const float radius, const bool applyImpulseDirOverride, const vec3_t *impulseDirOverride, float forceScalar)
{
  return ?Ragdoll_ApplyFullBodyRadiusForce@@YA_NPEAURagdoll@@AEBTvec3_t@@M_N1M@Z(ragdoll, position, radius, applyImpulseDirOverride, impulseDirOverride, forceScalar);
}

/*
==============
Ragdoll_GetRootRadius
==============
*/

double __fastcall Ragdoll_GetRootRadius(int ragdollHandle)
{
  double result; 

  *(float *)&result = ?Ragdoll_GetRootRadius@@YAMH@Z(ragdollHandle);
  return result;
}

/*
==============
Ragdoll_AddPartBits
==============
*/

void __fastcall Ragdoll_AddPartBits(int ragdollHandle, DObjPartBits *inoutPartBits)
{
  ?Ragdoll_AddPartBits@@YAXHPEAUDObjPartBits@@@Z(ragdollHandle, inoutPartBits);
}

/*
==============
Ragdoll_Unregister
==============
*/

void __fastcall Ragdoll_Unregister(LocalClientNum_t clientNum)
{
  ?Ragdoll_Unregister@@YAXW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
Ragdoll_UpdateRestFx
==============
*/

void __fastcall Ragdoll_UpdateRestFx(LocalClientNum_t localClientNum)
{
  ?Ragdoll_UpdateRestFx@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Ragdoll_GetLatestPhysicsPoseBoneOrientationsForWrite
==============
*/

BoneOrientation *__fastcall Ragdoll_GetLatestPhysicsPoseBoneOrientationsForWrite(Ragdoll *ragdoll)
{
  return ?Ragdoll_GetLatestPhysicsPoseBoneOrientationsForWrite@@YAPEAUBoneOrientation@@PEAURagdoll@@@Z(ragdoll);
}

/*
==============
Ragdoll_AddPartBits
==============
*/
void Ragdoll_AddPartBits(int ragdollHandle, DObjPartBits *inoutPartBits)
{
  Ragdoll *Ragdoll; 
  unsigned int v4; 

  if ( ragdollHandle )
  {
    _RDI = inoutPartBits;
    Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1784, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    v4 = 0;
    _RSI = (char *)Ragdoll - (char *)_RDI;
    do
    {
      __asm
      {
        vlddqu  xmm6, xmmword ptr [rsi+rdi+164h]
        vlddqu  xmm0, xmmword ptr [rdi]
        vpor    xmm6, xmm0, xmm6
      }
      *(_OWORD *)_RDI->array = _XMM6;
      _RDI = (DObjPartBits *)((char *)_RDI + 16);
      ++v4;
    }
    while ( v4 < 2 );
  }
}

/*
==============
Ragdoll_ApplyFullBodyRadiusForce
==============
*/
char Ragdoll_ApplyFullBodyRadiusForce(Ragdoll *ragdoll, const vec3_t *position, const float radius, const bool applyImpulseDirOverride, const vec3_t *impulseDirOverride, float forceScalar)
{
  Physics_WorldId PhysicsWorldId; 
  int NumBones; 
  __int64 v10; 
  Bone *Bones; 
  int v12; 
  __int64 v13; 
  hkVector4f v14; 
  float v15; 
  float v16; 
  __m128 v17; 
  float v18; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  bool *p_hidden; 
  unsigned int RigidBodyID; 
  float v28; 
  float v29; 
  float v30; 
  __int128 v31; 
  __int128 v32; 
  float v33; 
  float v37; 
  __int128 v38; 
  float v39; 
  float v43; 
  __int64 v44; 
  __int64 v45; 
  int RagdollHandle; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  float mass; 
  const vec3_t *v57; 
  vec3_t normalizedDirection; 
  vec3_t positiona; 
  vec4_t orientation; 

  v57 = position;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1664, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( radius < ragdoll_fullBodyExplodeMinRadius->current.value )
    return 0;
  if ( ragdoll->state.radiusForceAppliedThisFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1672, ASSERT_TYPE_ASSERT, "(!ragdoll->state.radiusForceAppliedThisFrame)", (const char *)&queryFormat, "!ragdoll->state.radiusForceAppliedThisFrame") )
    __debugbreak();
  ragdoll->state.radiusForceAppliedThisFrame = 1;
  PhysicsWorldId = Ragdoll_GetPhysicsWorldId(ragdoll);
  NumBones = Ragdoll_GetNumBones(ragdoll);
  v10 = NumBones;
  if ( NumBones > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1678, ASSERT_TYPE_ASSERT, "(numBones <= 64)", (const char *)&queryFormat, "numBones <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( (_DWORD)v10 )
  {
    Bones = Ragdoll_GetBones(ragdoll);
    if ( !Bones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1685, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
      __debugbreak();
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)PhysicsWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", PhysicsWorldId) )
        __debugbreak();
      LODWORD(v54) = PhysicsWorldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v54) )
        __debugbreak();
    }
    v12 = 0;
    v13 = v10;
    v14.m_quad = (__m128)HavokPhysics_GetConstWorld(PhysicsWorldId)->world->m_gravity;
    v15 = v14.m_quad.m128_f32[0] * 32.0;
    v17 = _mm_shuffle_ps(v14.m_quad, v14.m_quad, 85);
    v16 = v17.m128_f32[0] * 32.0;
    v18 = _mm_shuffle_ps(v14.m_quad, v14.m_quad, 170).m128_f32[0] * 32.0;
    v17.m128_f32[0] = fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v18 * v18));
    _XMM3 = v17;
    __asm
    {
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm3, xmm10, xmm0
    }
    v14.m_quad.m128_i32[0] = ragdoll_explode_upbias->current.integer ^ _xmm;
    v22 = (float)(v16 * (float)(1.0 / *(float *)&_XMM0)) * v14.m_quad.m128_f32[0];
    v23 = (float)(forceScalar * ragdoll_fullBodyExplodeForceScale->current.value) * 0.0099999998;
    v24 = (float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * v14.m_quad.m128_f32[0];
    v25 = (float)(v18 * (float)(1.0 / *(float *)&_XMM0)) * v14.m_quad.m128_f32[0];
    if ( (int)v10 > 0 )
    {
      p_hidden = &Bones->hidden;
      do
      {
        if ( !*p_hidden )
        {
          RigidBodyID = Physics_GetRigidBodyID(PhysicsWorldId, ragdoll->state.physicsInstanceId, v12);
          mass = 0.0;
          Physics_GetRigidBodyMass(PhysicsWorldId, RigidBodyID, &mass);
          if ( mass <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1711, ASSERT_TYPE_ASSERT, "(bodyMass > 0.f)", (const char *)&queryFormat, "bodyMass > 0.f") )
            __debugbreak();
          v28 = v23 * mass;
          Physics_GetRigidBodyTransform(PhysicsWorldId, RigidBodyID, &positiona, &orientation);
          if ( applyImpulseDirOverride )
          {
            v29 = impulseDirOverride->v[1];
            normalizedDirection.v[0] = impulseDirOverride->v[0];
            normalizedDirection.v[2] = impulseDirOverride->v[2];
            normalizedDirection.v[1] = v29;
          }
          else
          {
            v30 = positiona.v[0] - v57->v[0];
            v32 = LODWORD(positiona.v[1]);
            *(float *)&v32 = positiona.v[1] - v57->v[1];
            v31 = v32;
            v33 = positiona.v[2] - v57->v[2];
            *(float *)&v32 = fsqrt((float)((float)(*(float *)&v32 * *(float *)&v32) + (float)(v30 * v30)) + (float)(v33 * v33));
            _XMM1 = v32;
            __asm
            {
              vcmpless xmm0, xmm1, xmm12
              vblendvps xmm0, xmm1, xmm10, xmm0
            }
            v37 = (float)(v30 * (float)(1.0 / *(float *)&_XMM0)) + v24;
            v38 = v31;
            v39 = (float)(v33 * (float)(1.0 / *(float *)&_XMM0)) + v25;
            *(float *)&v31 = (float)(*(float *)&v31 * (float)(1.0 / *(float *)&_XMM0)) + v22;
            *(float *)&v38 = fsqrt((float)((float)(*(float *)&v31 * *(float *)&v31) + (float)(v37 * v37)) + (float)(v39 * v39));
            _XMM4 = v38;
            __asm
            {
              vcmpless xmm0, xmm4, xmm12
              vblendvps xmm0, xmm4, xmm10, xmm0
            }
            normalizedDirection.v[0] = (float)(1.0 / *(float *)&_XMM0) * v37;
            normalizedDirection.v[2] = (float)(1.0 / *(float *)&_XMM0) * v39;
            normalizedDirection.v[1] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v31;
            if ( *(float *)&v38 == 0.0 )
            {
              normalizedDirection.v[0] = 0.0;
              normalizedDirection.v[1] = 0.0;
              normalizedDirection.v[2] = FLOAT_1_0;
            }
          }
          Physics_ApplyImpulse(PhysicsWorldId, RigidBodyID, &positiona, &normalizedDirection, v28);
          v43 = v28 / mass;
          if ( Ragdoll_IsDebugTarget(ragdoll) )
          {
            if ( v12 >= 64 )
            {
              LODWORD(v52) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 930, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v52) )
                __debugbreak();
            }
            if ( (unsigned int)v12 >= ragdoll->state.numBones )
            {
              LODWORD(v53) = ragdoll->state.numBones;
              LODWORD(v52) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 931, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v52, v53) )
                __debugbreak();
            }
            v44 = s_ragdollDebugImpulseCount++ & 0x3F;
            v45 = v44;
            s_ragdollDebugImpulses[v44].impulseType = EXPLOSION_IMPULSE;
            RagdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
            v47 = positiona.v[0];
            v48 = positiona.v[1];
            s_ragdollDebugImpulses[v45].ragdollHandle = RagdollHandle;
            s_ragdollDebugImpulses[v45].boneId = v12;
            s_ragdollDebugImpulses[v45].impulsePosition.v[0] = v47;
            v49 = positiona.v[2];
            s_ragdollDebugImpulses[v45].impulsePosition.v[1] = v48;
            v50 = normalizedDirection.v[0];
            s_ragdollDebugImpulses[v45].impulsePosition.v[2] = v49;
            v51 = normalizedDirection.v[1];
            s_ragdollDebugImpulses[v45].impulseDirection.v[0] = v50;
            s_ragdollDebugImpulses[v45].impulseDirection.v[2] = normalizedDirection.v[2];
            s_ragdollDebugImpulses[v45].impulseDirection.v[1] = v51;
            s_ragdollDebugImpulses[v45].impulseMagnitude = v43;
          }
        }
        ++v12;
        p_hidden += 48;
        --v13;
      }
      while ( v13 );
    }
  }
  return 1;
}

/*
==============
Ragdoll_ApplyVelocity
==============
*/
void Ragdoll_ApplyVelocity(const int ragdollHandle, const int boneIndex, const vec3_t *dir, const float speed)
{
  Ragdoll *Ragdoll; 
  Ragdoll *v8; 
  __int64 speeda; 
  __int64 v10; 

  Sys_ProfBeginNamedEvent(0xFF008008, "Ragdoll_ApplyVelocity");
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fsqrt((float)((float)(dir->v[0] * dir->v[0]) + (float)(dir->v[1] * dir->v[1])) + (float)(dir->v[2] * dir->v[2])) - 1.0) & _xmm) > 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1920, ASSERT_TYPE_ASSERT, "(I_fabs( Vec3Length( dir ) - 1.0f ) <= 0.001f)", (const char *)&queryFormat, "I_fabs( Vec3Length( dir ) - 1.0f ) <= EQUAL_EPSILON") )
    __debugbreak();
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
    goto LABEL_23;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(speeda) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", speeda, 64) )
      __debugbreak();
  }
  v8 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !v8->allocated )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1923, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  if ( (unsigned int)boneIndex >= Ragdoll->state.numBones )
  {
    LODWORD(v10) = Ragdoll->state.numBones;
    LODWORD(speeda) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1924, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ragdoll->state.numBones )", "boneIndex doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", speeda, v10) )
      __debugbreak();
  }
  Ragdoll_ApplyVelocity_Internal(Ragdoll, -1, boneIndex, ragdoll_apply_velocity_falloff_rate->current.value, dir, speed);
  Sys_ProfEndNamedEvent();
}

/*
==============
Ragdoll_ApplyVelocity_Internal
==============
*/
void Ragdoll_ApplyVelocity_Internal(Ragdoll *const ragdoll, const int sourceBoneIndex, const int boneIndex, const float falloffRate, const vec3_t *dir, const float speed)
{
  __int64 v8; 
  unsigned int physicsInstanceId; 
  __int32 v12; 
  unsigned int RigidBodyID; 
  float v14; 
  float v15; 
  int v16; 
  int BoneChildren; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  vec3_t linVel; 
  int childIndices[6]; 

  v8 = boneIndex;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1873, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( (sourceBoneIndex < -1 || sourceBoneIndex >= ragdoll->state.numBones) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1874, ASSERT_TYPE_ASSERT, "(-1 <= sourceBoneIndex && sourceBoneIndex < ragdoll->state.numBones)", (const char *)&queryFormat, "-1 <= sourceBoneIndex && sourceBoneIndex < ragdoll->state.numBones") )
    __debugbreak();
  if ( (unsigned int)v8 >= ragdoll->state.numBones )
  {
    LODWORD(v21) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1875, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ragdoll->state.numBones )", "boneIndex doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v21, ragdoll->state.numBones) )
      __debugbreak();
  }
  if ( falloffRate < 0.0 || falloffRate > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1876, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( falloffRate ) && ( falloffRate ) <= ( 1.0f )", "falloffRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", falloffRate, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  if ( ragdoll->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
  {
    LODWORD(v22) = 2;
    LODWORD(v21) = ragdoll->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1879, ASSERT_TYPE_ASSERT, "(unsigned)( ragdoll->localClientNum ) < (unsigned)( LOCAL_CLIENT_COUNT )", "ragdoll->localClientNum doesn't index LOCAL_CLIENT_COUNT\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  physicsInstanceId = ragdoll->state.physicsInstanceId;
  v12 = 3 * ragdoll->localClientNum + 3;
  if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1882, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v12, physicsInstanceId, v8);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1884, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyLinVel((const Physics_WorldId)v12, RigidBodyID, &linVel);
  v14 = speed * dir->v[1];
  linVel.v[0] = (float)(speed * dir->v[0]) + linVel.v[0];
  v15 = speed * dir->v[2];
  linVel.v[1] = v14 + linVel.v[1];
  linVel.v[2] = v15 + linVel.v[2];
  Physics_SetRigidBodyLinVel((const Physics_WorldId)v12, RigidBodyID, &linVel);
  v16 = ragdoll->state.parentBoneIndices[v8];
  if ( (_DWORD)v8 && sourceBoneIndex != v16 )
    Ragdoll_ApplyVelocity_Internal(ragdoll, v8, v16, falloffRate, dir, falloffRate * speed);
  BoneChildren = Ragdoll_FindBoneChildren(ragdoll, v8, childIndices);
  v18 = 0i64;
  v19 = BoneChildren;
  if ( BoneChildren )
  {
    do
    {
      v20 = childIndices[v18];
      if ( sourceBoneIndex != v20 )
        Ragdoll_ApplyVelocity_Internal(ragdoll, v8, v20, falloffRate, dir, falloffRate * speed);
      ++v18;
    }
    while ( v18 < v19 );
  }
}

/*
==============
Ragdoll_CheckApplyBulletForce
==============
*/
char Ragdoll_CheckApplyBulletForce(Ragdoll *ragdoll, int boneId)
{
  __int64 v2; 
  int integer; 
  Bone *bones; 
  int bulletForcesAppliedThisFrame; 
  __int64 v8; 

  v2 = boneId;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1627, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( (int)v2 >= 64 )
  {
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1628, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v8) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= ragdoll->state.numBones )
  {
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1629, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v8, ragdoll->state.numBones) )
      __debugbreak();
  }
  integer = ragdoll_max_bullet_forces_per_bone->current.integer;
  if ( integer > 255 )
  {
    LODWORD(v8) = ragdoll_max_bullet_forces_per_bone->current.integer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1632, ASSERT_TYPE_ASSERT, "( ( maxForces <= 255 ) )", "( maxForces ) = %i", v8) )
      __debugbreak();
  }
  bones = ragdoll->state.bones;
  if ( !bones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1635, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  bulletForcesAppliedThisFrame = bones[v2].bulletForcesAppliedThisFrame;
  if ( bulletForcesAppliedThisFrame >= integer )
    return 0;
  bones[v2].bulletForcesAppliedThisFrame = bulletForcesAppliedThisFrame + 1;
  return 1;
}

/*
==============
Ragdoll_CheckApplyRadiusForce
==============
*/
bool Ragdoll_CheckApplyRadiusForce(Ragdoll *ragdoll, const float radius)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1649, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return radius < ragdoll_fullBodyExplodeMinRadius->current.value || !ragdoll->state.radiusForceAppliedThisFrame;
}

/*
==============
Ragdoll_CountLinksBetween
==============
*/
__int64 Ragdoll_CountLinksBetween(const int ragdollHandle, const int boneIndexA, const int boneIndexB)
{
  Ragdoll *Ragdoll; 
  Ragdoll *v7; 
  int *v8; 
  int *v9; 
  unsigned __int8 v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  __int64 v15; 
  __int64 v16; 
  int outBonePathLength; 
  int v18[3]; 
  int v19[64]; 
  int outBonePath[64]; 

  Sys_ProfBeginNamedEvent(0xFF008008, "Ragdoll_CountLinksBetween");
  if ( (unsigned int)boneIndexA >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1823, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndexA ) < (unsigned)( 64 )", "boneIndexA doesn't index RAGDOLL_MAX_BONES\n\t%i not in [0, %i)", boneIndexA, 64) )
    __debugbreak();
  if ( (unsigned int)boneIndexB >= 0x40 )
  {
    LODWORD(v16) = 64;
    LODWORD(v15) = boneIndexB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1824, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndexB ) < (unsigned)( 64 )", "boneIndexB doesn't index RAGDOLL_MAX_BONES\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
    goto LABEL_39;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v16) = 64;
    LODWORD(v15) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v7 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !v7->allocated )
  {
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1827, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  if ( (unsigned int)boneIndexA >= Ragdoll->state.numBones )
  {
    LODWORD(v16) = Ragdoll->state.numBones;
    LODWORD(v15) = boneIndexA;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1828, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndexA ) < (unsigned)( ragdoll->state.numBones )", "boneIndexA doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( (unsigned int)boneIndexB >= Ragdoll->state.numBones )
  {
    LODWORD(v16) = Ragdoll->state.numBones;
    LODWORD(v15) = boneIndexB;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1829, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndexB ) < (unsigned)( ragdoll->state.numBones )", "boneIndexB doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  outBonePathLength = 0;
  memset_0(outBonePath, 0, sizeof(outBonePath));
  Ragdoll_GetPathToRoot(Ragdoll, boneIndexA, outBonePath, &outBonePathLength);
  v18[0] = 0;
  memset_0(v19, 0, sizeof(v19));
  Ragdoll_GetPathToRoot(Ragdoll, boneIndexB, v19, v18);
  v8 = &outBonePath[outBonePathLength];
  v9 = &v19[v18[0]];
  if ( (*v8 != *v9 || *v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1842, ASSERT_TYPE_ASSERT, "((*pathItrA == *pathItrB) && (*pathItrA == 0))", "%s\n\tLast node in both path arrays is not the root bone.", "(*pathItrA == *pathItrB) && (*pathItrA == 0)") )
    __debugbreak();
  v10 = 1;
  if ( *v8 == *v9 )
  {
    while ( v8 != outBonePath && v9 != v19 )
    {
      v11 = *--v9;
      --v8;
      v10 = 1;
      if ( *v8 != v11 )
        goto LABEL_36;
    }
    v10 = 0;
  }
LABEL_36:
  v12 = truncate_cast<int,__int64>(v9 - v19);
  v13 = truncate_cast<int,__int64>(v8 - outBonePath) + v12 + 2 * v10;
  Sys_ProfEndNamedEvent();
  return v13;
}

/*
==============
Ragdoll_CreateRagdollForDObj
==============
*/
__int64 Ragdoll_CreateRagdollForDObj(LocalClientNum_t clientNum, int dobj, int entityNum, int hitLocation, const vec3_t *impactVector, bool immediatePlayerRagdoll)
{
  int v9; 
  Ragdoll *v10; 
  int i; 
  Ragdoll *Ragdoll; 
  unsigned int v14; 
  Ragdoll *v15; 
  Ragdoll *v16; 
  Ragdoll *v17; 
  __int64 v18; 
  bitarray<64> *p_boneContactBits; 
  __int64 v20; 
  __int64 v21; 

  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 478, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( dobj == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 479, ASSERT_TYPE_ASSERT, "(dobj != (-1))", (const char *)&queryFormat, "dobj != DOBJ_HANDLE_NONE") )
    __debugbreak();
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v20) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 480, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, 2048) )
      __debugbreak();
  }
  if ( (unsigned int)hitLocation >= 0x16 )
  {
    LODWORD(v21) = 22;
    LODWORD(v20) = hitLocation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 481, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( ((LODWORD(impactVector->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(impactVector->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(impactVector->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 482, ASSERT_TYPE_ASSERT, "(!IS_NAN( impactVector[0] ) && !IS_NAN( impactVector[1] ) && !IS_NAN( impactVector[2] ))", (const char *)&queryFormat, "!IS_NAN( impactVector[0] ) && !IS_NAN( impactVector[1] ) && !IS_NAN( impactVector[2] )") )
    __debugbreak();
  v9 = 0;
  v10 = g_ragdollBodies;
  for ( i = 1; i <= 64; ++i )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( (unsigned int)(i - 1) >= 0x40 )
    {
      LODWORD(v21) = 64;
      LODWORD(v20) = i - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    Ragdoll = Ragdoll_GetRagdoll(i);
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( Ragdoll->allocated )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(i - 1) >= 0x40 )
      {
        LODWORD(v21) = 64;
        LODWORD(v20) = i - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 574, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      ++v9;
    }
    ++v10;
  }
  if ( v9 >= ragdoll_max_simulating->current.integer )
    return 0i64;
  v14 = 1;
  while ( 1 )
  {
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( v14 - 1 >= 0x40 )
    {
      LODWORD(v21) = 64;
      LODWORD(v20) = v14 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    v15 = Ragdoll_GetRagdoll(v14);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( !v15->allocated )
      break;
    if ( (int)++v14 > 64 )
    {
      v14 = 0;
LABEL_59:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 493, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      goto LABEL_61;
    }
  }
  v16 = Ragdoll_GetRagdoll(v14);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 373, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  memset_0(v16, 0, sizeof(Ragdoll));
  v16->state.physicsInstanceId = -1;
  Ragdoll_SetNewState(v16, RAGDOLL_ACTIVITY_STATE_DEAD);
  v16->allocated = 1;
  s_lastAllocatedRagdollHandle = v14;
  if ( !v14 )
    goto LABEL_59;
LABEL_61:
  v17 = Ragdoll_GetRagdoll(v14);
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 497, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( v17->state.state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 500, ASSERT_TYPE_ASSERT, "(ragdoll->state.state == RAGDOLL_ACTIVITY_STATE_DEAD)", (const char *)&queryFormat, "ragdoll->state.state == RAGDOLL_ACTIVITY_STATE_DEAD") )
    __debugbreak();
  v17->localClientNum = clientNum;
  v17->dobj = dobj;
  v17->entityNum = entityNum;
  v18 = 2i64;
  v17->hitLocation = hitLocation;
  v17->impactVector = *impactVector;
  v17->immediatePlayerRagdoll = immediatePlayerRagdoll;
  p_boneContactBits = &v17->moverContactInfo.list[0].boneContactBits;
  *(_WORD *)&v17->poseControllerEnabledAtCreate = 257;
  v17->createdOnMovingPlatform = 0;
  v17->state.totalFrames = 0;
  *(_QWORD *)v17->state.physicsPoseTimestamp = -1i64;
  *(_QWORD *)v17->state.animationPoseRequestTimestamp = -1i64;
  do
  {
    LOWORD(p_boneContactBits[-1].array[1]) = 2047;
    *p_boneContactBits = 0i64;
    p_boneContactBits = (bitarray<64> *)((char *)p_boneContactBits + 12);
    --v18;
  }
  while ( v18 );
  *(_QWORD *)v17->associatedMoverOffset.v = 0i64;
  v17->associatedMoverOffset.v[2] = 0.0;
  if ( Ragdoll_PoseValid(v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 524, ASSERT_TYPE_ASSERT, "(!Ragdoll_PoseValid( ragdoll ))", (const char *)&queryFormat, "!Ragdoll_PoseValid( ragdoll )") )
    __debugbreak();
  Ragdoll_SetNewState(v17, RAGDOLL_ACTIVITY_STATE_DOBJ_WAIT);
  return v14;
}

/*
==============
Ragdoll_DebugDraw
==============
*/
void Ragdoll_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const ScreenPlacement *v5; 
  float *v6; 
  float *v7; 
  unsigned int v8; 
  unsigned int v9; 
  int *p_frames; 
  int v11; 
  DObj *v12; 
  DObj *v13; 
  const char ***models; 
  const char **v15; 
  const char **v16; 
  double Weight; 
  float v18; 
  double PositionControlWeight; 
  const vec4_t *v20; 
  int v21; 
  Ragdoll *v22; 
  const vec4_t *v23; 
  const char ***v24; 
  const char **v25; 
  const char **v26; 
  const char *v27; 
  int v28; 
  unsigned int unsignedInt; 
  __int64 v30; 
  __int64 v31; 
  unsigned int boneId; 
  float v33; 
  int impulseType; 
  float v35; 
  __int64 v36; 
  float v37; 
  float v38; 
  int v39; 
  vec4_t v40; 
  vec4_t v41; 
  double Radius; 
  float v44; 
  double v46; 
  float v47; 
  double v48; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  __int64 forceColor; 
  __int64 forceColorb; 
  __int64 forceColora; 
  __int64 shadow; 
  __int64 shadowa; 
  __int64 adjust; 
  __int64 v58; 
  unsigned int NumBones; 
  Ragdoll *Ragdoll; 
  DObj *obj; 
  vec3_t end; 
  vec4_t color; 
  vec4_t v67; 
  unsigned __int8 boneHasBulletImpulse[8]; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  char dest[256]; 

  v5 = scrPlace;
  v6 = y;
  v7 = x;
  if ( !ragdoll_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 996, ASSERT_TYPE_ASSERT, "(ragdoll_debug)", (const char *)&queryFormat, "ragdoll_debug") )
    __debugbreak();
  if ( !ragdoll_debug_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 997, ASSERT_TYPE_ASSERT, "(ragdoll_debug_id)", (const char *)&queryFormat, "ragdoll_debug_id") )
    __debugbreak();
  v8 = 1;
  if ( ragdoll_debug->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Ragdoll Summary");
    Physics_DrawDebugString(v5, *v7, *v6, dest, &colorWhite, 0, 1, charHeight, 0);
    *v6 = charHeight + *v6;
    v9 = 0;
    *v7 = tabWidth + *v7;
    p_frames = &g_ragdollBodies[0].state.frames;
    while ( 1 )
    {
      v11 = v9 + 1;
      if ( v9 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( v9 >= 0x40 )
      {
        LODWORD(shadow) = 64;
        LODWORD(forceColor) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", forceColor, shadow) )
          __debugbreak();
      }
      if ( p_frames == (int *)340 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1033, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( !*((_BYTE *)p_frames - 340) )
      {
        v7 = x;
        goto LABEL_35;
      }
      if ( !Ragdoll_PoseValid((const Ragdoll *)(p_frames - 85)) && (*(p_frames - 3) || Ragdoll_GetNumBones((const Ragdoll *)(p_frames - 85)) <= 0) )
        break;
      v12 = Ragdoll_BodyDObj((const Ragdoll *)(p_frames - 85));
      v13 = v12;
      if ( !v12 )
        break;
      if ( !v12->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1051, ASSERT_TYPE_ASSERT, "(obj->numModels > 0)", (const char *)&queryFormat, "obj->numModels > 0") )
        __debugbreak();
      models = (const char ***)v13->models;
      v15 = *models;
      v16 = (const char **)(*models)[78];
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1056, ASSERT_TYPE_ASSERT, "(ragdollAsset)", (const char *)&queryFormat, "ragdollAsset") )
        __debugbreak();
      Weight = RagdollPoseController_GetWeight((const RagdollPoseController *)(p_frames + 1752));
      v18 = *(float *)&Weight;
      PositionControlWeight = RagdollPoseController_GetPositionControlWeight((const RagdollPoseController *)(p_frames + 1752));
      LODWORD(v58) = *p_frames;
      LODWORD(shadow) = *(p_frames - 9);
      LODWORD(forceColor) = *(p_frames - 74);
      LODWORD(fmt) = *(p_frames - 75);
      Com_sprintf(dest, 0x100ui64, "%i: client:%i dobj:%i entityNum:%i model:%s physicsasset:%s state:%s:%i posectrl:%.2f/%.2f", v9, fmt, forceColor, shadow, *v15, *v16, s_stateNames[*(p_frames - 3)], v58, v18, *(float *)&PositionControlWeight);
      v11 = v9 + 1;
      if ( v18 <= 0.0 )
        goto LABEL_32;
      v20 = &colorGreen;
LABEL_33:
      v7 = x;
      Physics_DrawDebugString(scrPlace, *x, *v6, dest, v20, 0, 1, charHeight, 0);
      *v6 = charHeight + *v6;
LABEL_35:
      p_frames += 3529;
      v9 = v11;
      if ( v11 >= 64 )
      {
        v5 = scrPlace;
        *v7 = *v7 - tabWidth;
        goto LABEL_37;
      }
    }
    LODWORD(adjust) = *p_frames;
    LODWORD(shadow) = *(p_frames - 9);
    LODWORD(forceColor) = *(p_frames - 74);
    LODWORD(fmt) = *(p_frames - 75);
    Com_sprintf(dest, 0x100ui64, "%i: client:%i dobj:%i entityNum:%i state:%s:%i", v9, fmt, forceColor, shadow, s_stateNames[*(p_frames - 3)], adjust);
LABEL_32:
    v20 = &colorWhite;
    goto LABEL_33;
  }
LABEL_37:
  v21 = ragdoll_debug_id->current.integer + 1;
  if ( ragdoll_debug_latest->current.enabled )
    v21 = s_lastAllocatedRagdollHandle;
  if ( v21 > 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Ragdoll %i", (unsigned int)v21);
    Physics_DrawDebugString(v5, *v7, *v6, dest, &colorWhite, 0, 1, charHeight, 0);
    *v6 = charHeight + *v6;
    *v7 = tabWidth + *v7;
    Ragdoll = Ragdoll_GetRagdoll(v21);
    v22 = Ragdoll;
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1098, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( !Ragdoll->allocated )
    {
      Com_sprintf(dest, 0x100ui64, "Not allocated");
      Physics_DrawDebugString(v5, *v7, *v6, dest, &colorWhite, 0, 1, charHeight, 0);
      *v6 = charHeight + *v6;
LABEL_93:
      *v7 = *v7 - tabWidth;
      return;
    }
    Com_sprintf(dest, 0x100ui64, "client:%i", (unsigned int)Ragdoll->localClientNum);
    Physics_DrawDebugString(v5, *v7, *v6, dest, &colorWhite, 0, 1, charHeight, 0);
    *v6 = charHeight + *v6;
    LODWORD(fmta) = Ragdoll->entityNum;
    Com_sprintf(dest, 0x100ui64, "dobj:%i entityNum:%i", (unsigned int)Ragdoll->dobj, fmta);
    Physics_DrawDebugString(v5, *v7, *v6, dest, &colorWhite, 0, 1, charHeight, 0);
    *v6 = charHeight + *v6;
    LODWORD(forceColorb) = Ragdoll->state.msec;
    LODWORD(fmtb) = Ragdoll->state.frames;
    Com_sprintf(dest, 0x100ui64, "state:%s frames:%i ms:%i", s_stateNames[Ragdoll->state.state], fmtb, forceColorb);
    Physics_DrawDebugString(v5, *v7, *v6, dest, &colorWhite, 0, 1, charHeight, 0);
    *v6 = charHeight + *v6;
    Com_sprintf(dest, 0x100ui64, "pose controller weight:%.2f root control weight:%.2f", Ragdoll->state.poseController.weight, Ragdoll->state.poseController.rootControlWeight);
    v23 = &colorWhite;
    if ( Ragdoll->state.poseController.weight > 0.0 )
      v23 = &colorGreen;
    Physics_DrawDebugString(v5, *v7, *v6, dest, v23, 0, 1, charHeight, 0);
    *v6 = charHeight + *v6;
    if ( (Ragdoll->state.state != RAGDOLL_ACTIVITY_STATE_RUNNING || !Ragdoll_PoseValid(Ragdoll)) && (Ragdoll->state.state || Ragdoll_GetNumBones(Ragdoll) <= 0) )
      goto LABEL_93;
    obj = Ragdoll_BodyDObj(Ragdoll);
    if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1132, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( !obj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1135, ASSERT_TYPE_ASSERT, "(obj->numModels > 0)", (const char *)&queryFormat, "obj->numModels > 0") )
      __debugbreak();
    v24 = (const char ***)obj->models;
    v25 = *v24;
    v26 = (const char **)(*v24)[78];
    if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1140, ASSERT_TYPE_ASSERT, "(ragdollAsset)", (const char *)&queryFormat, "ragdollAsset") )
      __debugbreak();
    Com_sprintf(dest, 0x100ui64, "xmodel:%s", *v25);
    Physics_DrawDebugString(scrPlace, *v7, *v6, dest, &colorWhite, 0, 1, charHeight, 0);
    v27 = *v26;
    *v6 = charHeight + *v6;
    Com_sprintf(dest, 0x100ui64, "physics asset:%s", v27);
    Physics_DrawDebugString(scrPlace, *v7, *v6, dest, &colorWhite, 0, 1, charHeight, 0);
    *v6 = charHeight + *v6;
    NumBones = Ragdoll_GetNumBones(Ragdoll);
    v28 = NumBones;
    Com_sprintf(dest, 0x100ui64, "bones:%i", NumBones);
    Physics_DrawDebugString(scrPlace, *v7, *v6, dest, &colorWhite, 0, 1, charHeight, 0);
    *v6 = charHeight + *v6;
    *(_QWORD *)boneHasBulletImpulse = 0i64;
    v69 = 0i64;
    v70 = 0i64;
    v71 = 0i64;
    v72 = 0i64;
    v73 = 0i64;
    v74 = 0i64;
    v75 = 0i64;
    if ( ragdoll_debugDrawBulletImpulses->current.integer < 0 )
    {
      LODWORD(forceColora) = ragdoll_debugDrawBulletImpulses->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1161, ASSERT_TYPE_ASSERT, "( ( ragdoll_debugDrawBulletImpulses->current.integer >= 0 ) )", "( ragdoll_debugDrawBulletImpulses->current.integer ) = %i", forceColora) )
        __debugbreak();
    }
    unsignedInt = ragdoll_debugDrawBulletImpulses->current.unsignedInt;
    if ( !unsignedInt )
    {
      s_ragdollDebugImpulseCount = 0;
      goto LABEL_85;
    }
    if ( unsignedInt > s_ragdollDebugImpulseCount )
      unsignedInt = s_ragdollDebugImpulseCount;
    if ( !unsignedInt )
    {
LABEL_85:
      if ( v28 > 0 )
      {
        *v7 = tabWidth + *v7;
        Ragdoll_DebugDrawBoneHierarchy(scrPlace, v7, v6, tabWidth, charHeight, v22, boneHasBulletImpulse, 0);
        *v7 = *v7 - tabWidth;
      }
      if ( ragdoll_debugDrawRootBounds->current.enabled && Ragdoll_GetRootOrigin(v21, &end) )
      {
        Radius = DObjGetRadius(obj);
        CG_DebugSphere(&end, *(float *)&Radius, &colorPurple, 0, 0);
        _XMM0 = LODWORD(Ragdoll_GetPhysicsPoseBoneOrientations(v22)->origin.v[2]);
        v44 = *(float *)&_XMM0 - v22->state.animationRootTranslation.v[2];
        *(double *)&_XMM0 = DObjGetRadius(obj);
        __asm { vmaxss  xmm0, xmm0, xmm9 }
        Com_sprintf(dest, 0x100ui64, "%.2fR %.2f", (float)(v44 / *(float *)&_XMM0), v44);
        CG_DebugString(&end, &colorWhite, 0.2, dest, 0, 0);
      }
      if ( v22->state.poseController.weight > 0.0 && Ragdoll_GetRootOrigin(v21, &end) )
      {
        v46 = RagdollPoseController_GetWeight(&v22->state.poseController);
        v47 = *(float *)&v46;
        v48 = RagdollPoseController_GetPositionControlWeight(&v22->state.poseController);
        CG_DebugArc(&end, 20.0, 0.0, v47 * 360.0, &colorPurple, 0, 0);
        CG_DebugArc(&end, 10.0, 0.0, *(float *)&v48 * 360.0, &colorOrange, 0, 0);
      }
      goto LABEL_93;
    }
    while ( 1 )
    {
      if ( v8 > s_ragdollDebugImpulseCount )
      {
        LODWORD(forceColora) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1181, ASSERT_TYPE_ASSERT, "( ( bulletIndexOffset <= s_ragdollDebugImpulseCount ) )", "( bulletIndexOffset ) = %u", forceColora) )
          __debugbreak();
      }
      v30 = ((_BYTE)s_ragdollDebugImpulseCount - (_BYTE)v8) & 0x3F;
      v31 = v30;
      if ( s_ragdollDebugImpulses[v30].ragdollHandle != v21 || s_ragdollDebugImpulses[v30].impulseMagnitude == 0.0 || s_ragdollDebugImpulses[v30].impulseType == NO_IMPULSE )
        goto LABEL_83;
      boneId = s_ragdollDebugImpulses[v30].boneId;
      if ( boneId >= v28 )
      {
        LODWORD(shadowa) = v28;
        LODWORD(forceColora) = boneId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1188, ASSERT_TYPE_ASSERT, "(unsigned)( bulletImpulse.boneId ) < (unsigned)( numBones )", "bulletImpulse.boneId doesn't index numBones\n\t%i not in [0, %i)", forceColora, shadowa) )
          __debugbreak();
      }
      v33 = 0.1 * s_ragdollDebugImpulses[v31].impulseMagnitude;
      impulseType = (unsigned __int8)s_ragdollDebugImpulses[v31].impulseType;
      v35 = v33 * s_ragdollDebugImpulses[v31].impulseDirection.v[1];
      v36 = s_ragdollDebugImpulses[v31].boneId;
      end.v[0] = (float)(v33 * s_ragdollDebugImpulses[v31].impulseDirection.v[0]) + s_ragdollDebugImpulses[v31].impulsePosition.v[0];
      v37 = v35 + s_ragdollDebugImpulses[v31].impulsePosition.v[1];
      v38 = v33 * s_ragdollDebugImpulses[v31].impulseDirection.v[2];
      boneHasBulletImpulse[v36] |= impulseType;
      end.v[1] = v37;
      end.v[2] = v38 + s_ragdollDebugImpulses[v31].impulsePosition.v[2];
      v39 = impulseType - 1;
      if ( !v39 )
        break;
      if ( v39 == 1 )
      {
        v40 = colorLtRed;
        v41 = colorRed;
LABEL_81:
        v67 = v41;
        color = v40;
      }
      CL_AddDebugStarWithSize(&s_ragdollDebugImpulses[v31].impulsePosition, &color, 0, 0, 0.1);
      CG_DebugLine(&s_ragdollDebugImpulses[v31].impulsePosition, &end, &v67, 0, 0);
      v28 = NumBones;
LABEL_83:
      if ( ++v8 > unsignedInt )
      {
        v6 = y;
        v22 = Ragdoll;
        v7 = x;
        goto LABEL_85;
      }
    }
    v40 = colorLtGreen;
    v41 = colorGreen;
    goto LABEL_81;
  }
}

/*
==============
Ragdoll_DebugDrawBoneHierarchy
==============
*/
void Ragdoll_DebugDrawBoneHierarchy(const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight, Ragdoll *ragdoll, const unsigned __int8 *boneHasBulletImpulse, int currentBone)
{
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  Bone *bones; 
  const BoneOrientation *PrevBoneOrientations; 
  Bone *v19; 
  int BoneChildren; 
  float length; 
  int v22; 
  int integer; 
  int v24; 
  unsigned __int8 v25; 
  vec4_t v30; 
  RagdollPenetrationState penetrationState; 
  __int32 v32; 
  int v33; 
  const char *v34; 
  const char *v35; 
  const char *v36; 
  float *v37; 
  vec4_t *p_animationRootRotation; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  double v50; 
  __int64 numBones; 
  __int64 i; 
  char *fmt; 
  __int64 forceColor; 
  vec4_t quat; 
  vec3_t start; 
  vec4_t setColor; 
  vec3_t point; 
  vec3_t v61; 
  vec3_t end; 
  vec3_t outTransformedPoint; 
  vec3_t v64; 
  tmat33_t<vec3_t> axis; 
  int childIndices[6]; 
  char dest[256]; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  __int128 v71; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 

  v69 = v14;
  v68 = v15;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 94, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  bones = ragdoll->state.bones;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1588, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  PrevBoneOrientations = Ragdoll_GetPrevBoneOrientations(ragdoll);
  if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 723, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  if ( !PrevBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 724, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  v19 = &bones[currentBone];
  *(_QWORD *)point.v = 28i64 * currentBone;
  start = *(vec3_t *)((char *)&PrevBoneOrientations->origin + *(_QWORD *)point.v);
  QuatToAxis((const vec4_t *)((char *)&PrevBoneOrientations->orientation + *(_QWORD *)point.v), &axis);
  BoneChildren = Ragdoll_FindBoneChildren(ragdoll, currentBone, childIndices);
  length = v19->length;
  if ( !BoneChildren )
    length = length * 0.5;
  v22 = 0;
  end.v[0] = (float)(length * axis.m[0].v[0]) + start.v[0];
  end.v[1] = (float)(length * axis.m[0].v[1]) + start.v[1];
  end.v[2] = (float)(length * axis.m[0].v[2]) + start.v[2];
  integer = ragdoll_debug_mode->current.integer;
  if ( !integer )
  {
    penetrationState = v19->penetrationState;
    if ( penetrationState )
    {
      v32 = penetrationState - 1;
      if ( v32 )
      {
        v33 = v32 - 1;
        if ( v33 )
        {
          if ( v33 != 1 )
            goto LABEL_31;
          v30 = (vec4_t)_xmm;
        }
        else
        {
          v30 = (vec4_t)_xmm;
        }
      }
      else
      {
        v30 = (vec4_t)_xmm;
      }
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  v24 = integer - 1;
  if ( !v24 )
  {
    v30 = s_ragdollColorModeTable[currentBone % 0x13ui64];
LABEL_30:
    setColor = v30;
    goto LABEL_31;
  }
  if ( v24 != 1 )
    goto LABEL_31;
  v25 = boneHasBulletImpulse[currentBone];
  if ( !v25 )
  {
LABEL_29:
    v30 = (vec4_t)_xmm;
    goto LABEL_30;
  }
  _XMM0 = v25 & 1;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1_0);
  setColor = (vec4_t)_xmm;
  _mm_shuffle_ps((__m128)setColor, (__m128)setColor, 85);
  __asm { vblendvps xmm0, xmm1, xmm3, xmm2 }
  setColor.v[1] = *(float *)&_XMM0;
  if ( (v25 & 2) != 0 )
    setColor.v[0] = FLOAT_1_0;
LABEL_31:
  v34 = (char *)&queryFormat.fmt + 3;
  if ( v19->hidden )
    v34 = " Hidden";
  v35 = SL_ConvertToString(ragdoll->boneNames[currentBone]);
  LODWORD(forceColor) = v19->animBone;
  LODWORD(fmt) = v19->parentBone;
  Com_sprintf(dest, 0x100ui64, "Bone:%i Parent:%i AnimBone:%i Length:%.2f Name:%s%s", (unsigned int)currentBone, fmt, forceColor, v19->length, v35, v34);
  Physics_DrawDebugString(scrPlace, *x, *y, dest, &setColor, 0, 1, charHeight, 0);
  *y = charHeight + *y;
  if ( !v19->hidden )
  {
    v75 = v8;
    v74 = v9;
    v73 = v10;
    v72 = v11;
    CG_DebugLine(&start, &end, &setColor, 0, 0);
    v36 = SL_ConvertToString(ragdoll->boneNames[currentBone]);
    CL_AddDebugString(&start, &setColor, textScale_0, v36, 0, 0);
    if ( ragdoll_debugDrawTargetPose->current.enabled && s_debugAnimPoseHandle == Ragdoll_GetRagdollHandle(ragdoll) )
    {
      v71 = v12;
      v70 = v13;
      v37 = (float *)((char *)s_debugAnimPose[0].orientation.v + *(_QWORD *)point.v);
      *(_QWORD *)point.v += s_debugAnimPose;
      p_animationRootRotation = &ragdoll->state.animationRootRotation;
      if ( (vec4_t *)(*(_QWORD *)point.v + 12i64) == &quat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      if ( p_animationRootRotation == &quat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
        __debugbreak();
      v39 = ragdoll->state.animationRootRotation.v[3];
      v40 = *v37;
      v41 = v37[3];
      v42 = p_animationRootRotation->v[0];
      v43 = v37[2];
      v44 = ragdoll->state.animationRootRotation.v[1];
      v45 = v37[1];
      v46 = ragdoll->state.animationRootRotation.v[2];
      quat.v[0] = (float)((float)((float)(p_animationRootRotation->v[0] * v41) + (float)(*v37 * v39)) + (float)(v44 * v43)) - (float)(v46 * v45);
      quat.v[1] = (float)((float)((float)(v45 * v39) - (float)(v43 * v42)) + (float)(v44 * v41)) + (float)(v46 * v40);
      quat.v[2] = (float)((float)((float)(v45 * v42) + (float)(v43 * v39)) - (float)(v44 * v40)) + (float)(v46 * v41);
      quat.v[3] = (float)((float)((float)(v41 * v39) - (float)(v42 * v40)) - (float)(v45 * v44)) - (float)(v46 * v43);
      QuatTrans_TransformPoint(&ragdoll->state.animationRootRotation, &ragdoll->state.animationRootTranslation, *(const vec3_t **)point.v, &outTransformedPoint);
      v61.v[1] = 0.0;
      v61.v[2] = 0.0;
      v61.v[0] = length;
      QuatTrans_TransformPoint(&quat, &outTransformedPoint, &v61, &v64);
      CG_DebugLine(&outTransformedPoint, &v64, &colorGreen, 0, 0);
    }
    if ( ragdoll_debugDrawInitialVelocities->current.enabled && s_debugInitialVelocityHandle == Ragdoll_GetRagdollHandle(ragdoll) )
    {
      point.v[0] = (float)(end.v[0] + start.v[0]) * 0.5;
      v47 = s_debugInitialVelocity[currentBone].v[0];
      v48 = s_debugInitialVelocity[currentBone].v[1];
      v49 = s_debugInitialVelocity[currentBone].v[2];
      v61.v[0] = (float)(v47 + (float)(end.v[0] + start.v[0])) * 0.5;
      v61.v[1] = (float)(v48 + (float)(end.v[1] + start.v[1])) * 0.5;
      v61.v[2] = (float)(v49 * 0.5) + (float)((float)(end.v[2] + start.v[2]) * 0.5);
      point.v[1] = (float)(end.v[1] + start.v[1]) * 0.5;
      point.v[2] = (float)(end.v[2] + start.v[2]) * 0.5;
      v50 = I_fclamp((float)((float)((float)(v48 * v48) + (float)(v47 * v47)) + (float)(v49 * v49)) * 0.0000125, 0.0, 0.5);
      quat.v[3] = FLOAT_1_0;
      quat.v[0] = *(float *)&v50 + 0.5;
      quat.v[1] = 0.5 - *(float *)&v50;
      if ( s_debugInitialVelocityHasImpact[currentBone] )
        quat.v[2] = 0.5 - *(float *)&v50;
      else
        quat.v[2] = *(float *)&v50 + 0.5;
      CG_DebugLine(&point, &v61, &quat, 0, 0);
    }
  }
  *x = tabWidth + *x;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  numBones = ragdoll->state.numBones;
  if ( numBones > 0 )
  {
    for ( i = 0i64; i < numBones; ++i )
    {
      if ( i != currentBone && bones->parentBone == currentBone )
        Ragdoll_DebugDrawBoneHierarchy(scrPlace, x, y, tabWidth, charHeight, ragdoll, boneHasBulletImpulse, v22);
      ++v22;
      ++bones;
    }
  }
  *x = *x - tabWidth;
}

/*
==============
Ragdoll_DisablePoseController
==============
*/
void Ragdoll_DisablePoseController(int ragdollHandle, float blendOutTime)
{
  Ragdoll *Ragdoll; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1949, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( RagdollPoseController_IsActive(&Ragdoll->state.poseController) )
    RagdollPoseController_BlendWeight(&Ragdoll->state.poseController, 0.0, blendOutTime);
  else
    Ragdoll->poseControllerEnabledAtCreate = 0;
}

/*
==============
Ragdoll_DisablePoseControllerRoot
==============
*/
void Ragdoll_DisablePoseControllerRoot(int ragdollHandle, float blendOutTime)
{
  Ragdoll *Ragdoll; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1965, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( RagdollPoseController_IsActive(&Ragdoll->state.poseController) )
    RagdollPoseController_BlendRootControlWeight(&Ragdoll->state.poseController, 0.0, blendOutTime);
  else
    Ragdoll->poseControllerRootControlEnabledAtCreate = 0;
}

/*
==============
Ragdoll_EnablePoseController
==============
*/
void Ragdoll_EnablePoseController(int ragdollHandle)
{
  Ragdoll *Ragdoll; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1935, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !RagdollPoseController_IsActive(&Ragdoll->state.poseController) )
  {
    Ragdoll->state.animationPoseRequestTimestamp[Ragdoll->state.totalFrames & 1] = Ragdoll->state.totalFrames + 1;
    RagdollPoseController_BlendWeight(&Ragdoll->state.poseController, 1.0, ragdoll_poseController_defaultBlendDuration->current.value);
  }
}

/*
==============
Ragdoll_FindContactMover
==============
*/
unsigned __int64 Ragdoll_FindContactMover(const Ragdoll *ragdoll, const __int16 moverEntNum)
{
  unsigned __int64 result; 
  RagdollMoverContactList *i; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1981, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  result = 0i64;
  for ( i = &ragdoll->moverContactInfo; i->list[0].moverEntNum != moverEntNum; i = (RagdollMoverContactList *)((char *)i + 12) )
  {
    if ( ++result >= 2 )
      return -1i64;
  }
  return result;
}

/*
==============
Ragdoll_GetActorState
==============
*/
LerpEntityStateTypeUnion *Ragdoll_GetActorState(const Ragdoll *ragdoll)
{
  __int64 entityNum; 
  __int64 localClientNum; 
  CgEntitySystem *v4; 
  __int64 v6; 
  __int64 v7; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2142, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  entityNum = ragdoll->entityNum;
  if ( (_DWORD)entityNum == 2047 )
    return 0i64;
  localClientNum = ragdoll->localClientNum;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v7) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v6) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[localClientNum] )
  {
    LODWORD(v7) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v7) )
      __debugbreak();
  }
  v4 = CgEntitySystem::ms_entitySystemArray[localClientNum];
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v7) = 2048;
    LODWORD(v6) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( (CgEntitySystem *)((char *)v4 + 760 * entityNum) == (CgEntitySystem *)-16i64 || (v4->m_entities[entityNum].flags & 1) == 0 || ((v4->m_entities[entityNum].nextState.eType - 19) & 0xFFFD) != 0 )
    return 0i64;
  else
    return &v4->m_entities[entityNum].nextState.lerp.u;
}

/*
==============
Ragdoll_GetAnimPoseBoneOrientations
==============
*/
const BoneOrientation *Ragdoll_GetAnimPoseBoneOrientations(const Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1539, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return Ragdoll_GetBoneOrientations_0(ragdoll);
}

/*
==============
Ragdoll_GetAnimPoseBoneOrientationsForWrite
==============
*/
BoneOrientation *Ragdoll_GetAnimPoseBoneOrientationsForWrite(Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1555, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return Ragdoll_GetBoneOrientations(ragdoll);
}

/*
==============
Ragdoll_GetAnimPoseRootOrientation
==============
*/
BoneOrientation *Ragdoll_GetAnimPoseRootOrientation(const Ragdoll *ragdoll)
{
  if ( ragdoll )
    return &ragdoll->state.animationPoseRootOrientation;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1562, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return (BoneOrientation *)3988;
}

/*
==============
Ragdoll_GetAssociatedMovers
==============
*/
void Ragdoll_GetAssociatedMovers(int ragdollHandle, __int16 *outMoverEntNums, unsigned int *outTotalNumMovers)
{
  Ragdoll *Ragdoll; 
  __int16 moverEntNum; 
  __int16 v7; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2097, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  moverEntNum = Ragdoll->moverContactInfo.list[0].moverEntNum;
  if ( moverEntNum != 2047 )
    outMoverEntNums[(*outTotalNumMovers)++] = moverEntNum;
  v7 = Ragdoll->moverContactInfo.list[1].moverEntNum;
  if ( v7 != 2047 )
    outMoverEntNums[(*outTotalNumMovers)++] = v7;
}

/*
==============
Ragdoll_GetBoneOrientations
==============
*/
BoneOrientation *Ragdoll_GetBoneOrientations(Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1498, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return ragdoll->state.boneOrientations[ragdoll->state.totalFrames & 1];
}

/*
==============
Ragdoll_GetBoneOrigin
==============
*/
bool Ragdoll_GetBoneOrigin(int ragdollHandle, const int boneIndex, vec3_t *outOrigin, float *outRadius)
{
  __int64 v5; 
  const Ragdoll *Ragdoll; 
  Ragdoll *v9; 
  bool result; 
  unsigned int NumBones; 
  const BoneOrientation *PrevBoneOrientations; 
  float v13; 
  __int64 v14; 
  __int64 v15; 

  v5 = boneIndex;
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
    goto LABEL_30;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v14) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v14, 64) )
      __debugbreak();
  }
  v9 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !v9->allocated )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1446, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  result = Ragdoll_PoseValid(Ragdoll);
  if ( result )
  {
    NumBones = Ragdoll_GetNumBones(Ragdoll);
    if ( (unsigned int)v5 >= NumBones )
    {
      LODWORD(v15) = NumBones;
      LODWORD(v14) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1456, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( numBones )", "boneIndex doesn't index numBones\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1588, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    PrevBoneOrientations = Ragdoll_GetPrevBoneOrientations(Ragdoll);
    if ( !PrevBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1461, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
      __debugbreak();
    outOrigin->v[0] = PrevBoneOrientations[v5].origin.v[0];
    outOrigin->v[1] = PrevBoneOrientations[v5].origin.v[1];
    outOrigin->v[2] = PrevBoneOrientations[v5].origin.v[2];
    v13 = Ragdoll->state.bones[v5].length * 0.5;
    *outRadius = v13;
    if ( v13 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1467, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( outRadius )", "%s < %s\n\t%g, %g", "0.0f", "outRadius", 0.0, v13) )
      __debugbreak();
    return 1;
  }
  return result;
}

/*
==============
Ragdoll_GetBoneOrigin
==============
*/
bool Ragdoll_GetBoneOrigin(int ragdollHandle, const scr_string_t *boneName, vec3_t *outOrigin, float *outRadius)
{
  const Ragdoll *Ragdoll; 
  Ragdoll *v9; 
  bool result; 
  __int64 v11; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
    goto LABEL_18;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v11) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v11, 64) )
      __debugbreak();
  }
  v9 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !v9->allocated )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1429, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  result = Ragdoll_PoseValid(Ragdoll);
  if ( result )
    return Ragdoll_GetBoneOrigin(Ragdoll, boneName, outOrigin, outRadius);
  return result;
}

/*
==============
Ragdoll_GetBoneOrigin
==============
*/
char Ragdoll_GetBoneOrigin(const Ragdoll *const ragdoll, const scr_string_t *boneName, vec3_t *outOrigin, float *outRadius)
{
  int NumBones; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  scr_string_t *i; 
  _BOOL8 v14; 
  BoneOrientation *v15; 
  __int64 v16; 
  float v17; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1266, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1267, ASSERT_TYPE_ASSERT, "(boneName)", (const char *)&queryFormat, "boneName") )
    __debugbreak();
  if ( !*boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1268, ASSERT_TYPE_ASSERT, "(*boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*boneName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !Ragdoll_PoseValid(ragdoll) )
    return 0;
  NumBones = Ragdoll_GetNumBones(ragdoll);
  v9 = 0;
  if ( NumBones <= 0 )
    return 0;
  v10 = 0i64;
  v11 = NumBones;
  for ( i = ragdoll->boneNames; *i != *boneName; ++i )
  {
    ++v9;
    if ( ++v10 >= v11 )
      return 0;
  }
  if ( v9 < 0 )
    return 0;
  if ( !ragdoll )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1588, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1507, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
  }
  v14 = (ragdoll->state.totalFrames & 1) == 0;
  v15 = ragdoll->state.boneOrientations[v14];
  if ( (const Ragdoll *const)((char *)ragdoll + v14 * 1792) == (const Ragdoll *const)-388i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1294, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  v16 = v9;
  outOrigin->v[0] = v15[v16].origin.v[0];
  outOrigin->v[1] = v15[v16].origin.v[1];
  outOrigin->v[2] = v15[v16].origin.v[2];
  v17 = ragdoll->state.bones[v9].length * 0.5;
  *outRadius = v17;
  if ( v17 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1300, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( outRadius )", "%s < %s\n\t%g, %g", "0.0f", "outRadius", 0.0, v17) )
    __debugbreak();
  return 1;
}

/*
==============
Ragdoll_GetEntityNumber
==============
*/
__int64 Ragdoll_GetEntityNumber(int ragdollHandle)
{
  Ragdoll *Ragdoll; 
  Ragdoll *v3; 
  __int64 v5; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
    goto LABEL_17;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v5) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v5, 64) )
      __debugbreak();
  }
  v3 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !v3->allocated )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1386, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  return (unsigned int)Ragdoll->entityNum;
}

/*
==============
Ragdoll_GetLatestPhysicsPoseBoneOrientation
==============
*/
void Ragdoll_GetLatestPhysicsPoseBoneOrientation(Ragdoll *ragdoll, unsigned int boneIndex, BoneOrientation *outBoneOrientation)
{
  Physics_WorldId PhysicsWorldId; 
  unsigned int physicsInstanceId; 
  Physics_WorldId v8; 
  unsigned int RigidBodyID; 
  __int64 v10; 

  if ( !ragdoll )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1517, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
  }
  if ( boneIndex >= ragdoll->state.numBones )
  {
    LODWORD(v10) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1518, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( Ragdoll_GetNumBones( ragdoll ) )", "boneIndex doesn't index Ragdoll_GetNumBones( ragdoll )\n\t%i not in [0, %i)", v10, ragdoll->state.numBones) )
      __debugbreak();
  }
  if ( !outBoneOrientation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1519, ASSERT_TYPE_ASSERT, "(outBoneOrientation)", (const char *)&queryFormat, "outBoneOrientation") )
    __debugbreak();
  PhysicsWorldId = Ragdoll_GetPhysicsWorldId(ragdoll);
  physicsInstanceId = ragdoll->state.physicsInstanceId;
  v8 = PhysicsWorldId;
  if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1526, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID(v8, physicsInstanceId, boneIndex);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1529, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyTransform(v8, RigidBodyID, &outBoneOrientation->origin, &outBoneOrientation->orientation);
}

/*
==============
Ragdoll_GetLatestPhysicsPoseBoneOrientations
==============
*/
const BoneOrientation *Ragdoll_GetLatestPhysicsPoseBoneOrientations(const Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1580, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return Ragdoll_GetBoneOrientations_0(ragdoll);
}

/*
==============
Ragdoll_GetLatestPhysicsPoseBoneOrientationsForWrite
==============
*/
BoneOrientation *Ragdoll_GetLatestPhysicsPoseBoneOrientationsForWrite(Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1596, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return Ragdoll_GetBoneOrientations(ragdoll);
}

/*
==============
Ragdoll_GetMoverOffset
==============
*/
void Ragdoll_GetMoverOffset(int ragdollHandle, vec3_t *outMoverOffset)
{
  Ragdoll *Ragdoll; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2133, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  outMoverOffset->v[0] = Ragdoll->associatedMoverOffset.v[0];
  outMoverOffset->v[1] = Ragdoll->associatedMoverOffset.v[1];
  outMoverOffset->v[2] = Ragdoll->associatedMoverOffset.v[2];
}

/*
==============
Ragdoll_GetNumRagdolls
==============
*/
__int64 Ragdoll_GetNumRagdolls(LocalClientNum_t clientNum)
{
  unsigned int v1; 
  Ragdoll *v2; 
  int i; 
  Ragdoll *Ragdoll; 
  __int64 v7; 
  __int64 v8; 

  v1 = 0;
  v2 = g_ragdollBodies;
  for ( i = 1; i <= 64; ++i )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( (unsigned int)(i - 1) >= 0x40 )
    {
      LODWORD(v8) = 64;
      LODWORD(v7) = i - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    Ragdoll = Ragdoll_GetRagdoll(i);
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( Ragdoll->allocated )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(i - 1) >= 0x40 )
      {
        LODWORD(v8) = 64;
        LODWORD(v7) = i - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 574, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( clientNum == LOCAL_CLIENT_INVALID || clientNum == v2->localClientNum )
        ++v1;
    }
    ++v2;
  }
  return v1;
}

/*
==============
Ragdoll_GetPathToRoot
==============
*/
void Ragdoll_GetPathToRoot(const Ragdoll *const ragdoll, const int boneIndex, int *outBonePath, int *outBonePathLength)
{
  __int64 v7; 
  Bone *bones; 
  const Ragdoll *v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 

  v7 = boneIndex;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1794, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !outBonePath && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1795, ASSERT_TYPE_ASSERT, "(outBonePath)", (const char *)&queryFormat, "outBonePath") )
    __debugbreak();
  if ( !outBonePathLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1796, ASSERT_TYPE_ASSERT, "(outBonePathLength)", (const char *)&queryFormat, "outBonePathLength") )
    __debugbreak();
  *outBonePathLength = 0;
  bones = ragdoll->state.bones;
  v9 = (const Ragdoll *)&ragdoll->state.bones[v7];
  outBonePath[*outBonePathLength] = truncate_cast<int,__int64>(48 * v7 / 48);
  if ( v9 != (const Ragdoll *)ragdoll->state.bones )
  {
    do
    {
      v10 = *(int *)&v9->allocated;
      ++*outBonePathLength;
      v11 = 48 * v10;
      v9 = (const Ragdoll *)&bones[v10];
      if ( *outBonePathLength >= ragdoll->state.numBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1809, ASSERT_TYPE_ASSERT, "((*outBonePathLength < ragdoll->state.numBones))", "%s\n\tFailed to find the ragdoll root bone.", "(*outBonePathLength < ragdoll->state.numBones)") )
        __debugbreak();
      v12 = (__int64)((unsigned __int128)(v11 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 3;
      v13 = (v12 >> 63) + v12;
      if ( v13 + 0x80000000 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v13, "signed", v13) )
        __debugbreak();
      outBonePath[*outBonePathLength] = v13;
    }
    while ( v9 != (const Ragdoll *)bones );
    LODWORD(v7) = boneIndex;
  }
  if ( *outBonePath != (_DWORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1813, ASSERT_TYPE_ASSERT, "(outBonePath[0] == boneIndex)", "%s\n\tFirst entry in outBonePath is not the provided bone.", "outBonePath[0] == boneIndex") )
    __debugbreak();
  if ( outBonePath[*outBonePathLength] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1814, ASSERT_TYPE_ASSERT, "(outBonePath[*outBonePathLength] == 0)", "%s\n\tLast entry in outBonePath is not the ragdoll root bone.", "outBonePath[*outBonePathLength] == 0") )
      __debugbreak();
  }
}

/*
==============
Ragdoll_GetPhysicsPoseBoneOrientations
==============
*/
const BoneOrientation *Ragdoll_GetPhysicsPoseBoneOrientations(const Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1588, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return Ragdoll_GetPrevBoneOrientations(ragdoll);
}

/*
==============
Ragdoll_GetPrevAnimPoseBoneOrientations
==============
*/
const BoneOrientation *Ragdoll_GetPrevAnimPoseBoneOrientations(const Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1547, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return Ragdoll_GetPrevBoneOrientations(ragdoll);
}

/*
==============
Ragdoll_GetPrevBoneOrientations
==============
*/
BoneOrientation *Ragdoll_GetPrevBoneOrientations(const Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1507, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  return ragdoll->state.boneOrientations[(ragdoll->state.totalFrames & 1) == 0];
}

/*
==============
Ragdoll_GetRootOrigin
==============
*/
bool Ragdoll_GetRootOrigin(int ragdollHandle, vec3_t *outOrigin)
{
  Ragdoll *Ragdoll; 
  Ragdoll *v5; 
  bool result; 
  __int64 v7; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
    goto LABEL_18;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v7) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v7, 64) )
      __debugbreak();
  }
  v5 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !v5->allocated )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1398, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  result = Ragdoll_PoseValid(Ragdoll);
  if ( result )
    return Ragdoll_GetRootOrigin(Ragdoll, outOrigin);
  return result;
}

/*
==============
Ragdoll_GetRootOrigin
==============
*/
bool Ragdoll_GetRootOrigin(Ragdoll *ragdoll, vec3_t *outOrigin)
{
  bool result; 
  BoneOrientation *PrevBoneOrientations; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  const DObj *v11; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  double v17; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1312, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  result = Ragdoll_PoseValid(ragdoll);
  if ( result )
  {
    if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1588, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    PrevBoneOrientations = Ragdoll_GetPrevBoneOrientations(ragdoll);
    if ( !PrevBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1322, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
      __debugbreak();
    v7 = PrevBoneOrientations->origin.v[0];
    v8 = PrevBoneOrientations->origin.v[1];
    v9 = PrevBoneOrientations->origin.v[2];
    v10 = ragdoll->state.animationRootTranslation.v[2];
    v11 = Ragdoll_BodyDObj(ragdoll);
    if ( v11 )
    {
      *(double *)&_XMM0 = DObjGetRadius(v11);
      __asm { vmaxss  xmm1, xmm0, cs:__real@41200000 }
    }
    else
    {
      *(float *)&_XMM1 = FLOAT_10_0;
    }
    v13 = PrevBoneOrientations->origin.v[2];
    v14 = *(float *)&_XMM1 * 0.5;
    v15 = v13 - v10;
    if ( (float)(v13 - v10) >= (float)(*(float *)&_XMM1 * -0.050000001) )
    {
      if ( v15 <= v14 )
      {
LABEL_19:
        result = 1;
        outOrigin->v[0] = v7;
        outOrigin->v[1] = v8;
        outOrigin->v[2] = v10;
        return result;
      }
      v16 = v15 - v14;
    }
    else
    {
      v16 = (float)(*(float *)&_XMM1 * -0.050000001) - (float)(v13 - v10);
    }
    v17 = I_fclamp(v16 / (float)(*(float *)&_XMM1 * 0.2), 0.0, 1.0);
    v10 = (float)((float)(1.0 - *(float *)&v17) * v10) + (float)(v9 * *(float *)&v17);
    goto LABEL_19;
  }
  return result;
}

/*
==============
Ragdoll_GetRootRadius
==============
*/
float Ragdoll_GetRootRadius(int ragdollHandle)
{
  Ragdoll *Ragdoll; 
  Ragdoll *v3; 
  float length; 
  __int64 v6; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll )
    goto LABEL_20;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v6) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v6, 64) )
      __debugbreak();
  }
  v3 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !v3->allocated )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1415, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  length = Ragdoll->state.bones[0].length;
  if ( (float)(length * 0.5) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1419, ASSERT_TYPE_ASSERT, "(rootBoneRadius > 0.0f)", (const char *)&queryFormat, "rootBoneRadius > 0.0f") )
    __debugbreak();
  return length * 0.5;
}

/*
==============
Ragdoll_Init
==============
*/
void Ragdoll_Init(void)
{
  if ( s_ragdollSystemInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 249, ASSERT_TYPE_ASSERT, "(!Ragdoll_IsInitialized())", (const char *)&queryFormat, "!Ragdoll_IsInitialized()") )
    __debugbreak();
  if ( s_ragdollRegistration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 252, ASSERT_TYPE_ASSERT, "(s_ragdollRegistration == 0)", (const char *)&queryFormat, "s_ragdollRegistration == 0") )
    __debugbreak();
  Ragdoll_InitDvars();
  memset_0(g_ragdollBodies, 0, sizeof(g_ragdollBodies));
  Ragdoll_Update_InitRWLock();
  s_ragdollSystemInitialized = 1;
  s_debugAnimPoseHandle = 0;
  memset_0(s_ragdollDebugImpulses, 0, sizeof(s_ragdollDebugImpulses));
  s_debugInitialVelocityHandle = 0;
  memset_0(s_debugInitialVelocity, 0, sizeof(s_debugInitialVelocity));
  *(_QWORD *)s_debugInitialVelocityHasImpact = 0i64;
  *(_QWORD *)&s_debugInitialVelocityHasImpact[8] = 0i64;
  *(_QWORD *)&s_debugInitialVelocityHasImpact[16] = 0i64;
  *(_QWORD *)&s_debugInitialVelocityHasImpact[24] = 0i64;
  *(_QWORD *)&s_debugInitialVelocityHasImpact[32] = 0i64;
  *(_QWORD *)&s_debugInitialVelocityHasImpact[40] = 0i64;
  *(_QWORD *)&s_debugInitialVelocityHasImpact[48] = 0i64;
  *(_QWORD *)&s_debugInitialVelocityHasImpact[56] = 0i64;
}

/*
==============
Ragdoll_InitDvars
==============
*/
void Ragdoll_InitDvars()
{
  Dvar_BeginPermanentRegistration();
  ragdoll_enable = Dvar_RegisterBool("LNLRQKMPKS", 1, 0, "Turn on ragdoll death animations");
  ragdoll_max_simulating = Dvar_RegisterInt("LKLQPTQLQL", 64, 0, 64, 0, "Max number of simultaneous active ragdolls - script controllable, within limit 0-max");
  ragdoll_fixedMemoryThreshold = Dvar_RegisterFloat("NLQNMMPMP", 0.69999999, 0.0, 1.0, 0, "Fixed pool memory threshold beyond which, we don't create ragdolls");
  ragdoll_constraintTightenTime = Dvar_RegisterFloat("MSPKRKOSMK", 1.0, 0.0, 5.0, 0, "Time over which we tighten the ragdoll constraints");
  ragdoll_initialLinSpeedCap = Dvar_RegisterFloat("LNNONMKKLR", 200.0, 0.0, 10000.0, 0, "Limit at which to cap initial linear speed");
  ragdoll_initialLinSpeedCapMovingPlatform = Dvar_RegisterFloat("LSONQSQRTO", 500.0, 0.0, 10000.0, 0, "Limit at which to cap initial linear speed when a ragdoll is created on a moving platform.");
  ragdoll_debug = Dvar_RegisterBool("MKSLONKMNM", 0, 4u, "Debug draw general info about the ragdoll system");
  ragdoll_debug_id = Dvar_RegisterInt("MQRQNPTTNO", -1, -1, 64, 0, "Debug draw info about a specific ragdoll");
  ragdoll_debug_mode = Dvar_RegisterEnum("NRTQNPKQMO", s_Ragdoll_DebugModeNames, 0, 4u, "Show physics memory usage");
  ragdoll_debug_latest = Dvar_RegisterBool("OMKRNLRKKK", 0, 0, "Draw debug info about most recently created ragdoll (overrides ragdoll_debug_id)");
  ragdoll_debugDrawTargetPose = Dvar_RegisterBool("NRQSSMLTNM", 1, 4u, "Draw target animation pose when drawing debug info for specific ragdoll");
  ragdoll_debugDrawRootBounds = Dvar_RegisterBool("LLONLSMQSN", 0, 4u, "Draw ragdoll DObj bounds centred at root origin. Also displays distance of hips from reference animation root height.");
  ragdoll_debugDrawBulletImpulses = Dvar_RegisterInt("LSNLSOQNNO", 0, 0, 64, 0, "Number of drawn latest bullet impulses applied to ragdoll. Setting to 0 will clear cache of impulses.");
  ragdoll_debugDrawInitialVelocities = Dvar_RegisterBool("MTQSMTNOTP", 1, 4u, "Debug draw initial velocities when drawing debug info for a specific ragdoll");
  ragdoll_poseController_distance = Dvar_RegisterFloat("QQPPQOOMK", 9000.0, 0.0, 10000.0, 0x44u, "Max distance threshold for pose controller");
  ragdoll_poseController_use = Dvar_RegisterBool("NTSKRKRTTO", 1, 0, "Enable ragdoll pose controller");
  ragdoll_poseController_weight = Dvar_RegisterFloat("MRSSTQPRT", 1.0, 0.0, 1.0, 0, "Overrides final pose controller weight - 0 = disable (pure ragdoll)");
  ragdoll_poseController_boneWeight = Dvar_RegisterFloat("MMNMNMQQT", 1.0, 0.0, 1.0, 0, "Scales bone weight");
  ragdoll_poseController_hierarchyGain = Dvar_RegisterFloat("NKMNTQORSL", 0.25, 0.0, 1.0, 0, "Controls target pose space when root control is inactive: 0 = world, 1 = local");
  ragdoll_poseController_velocityDamping = Dvar_RegisterFloat("NPLRLMRLOS", 0.0, 0.0, 1.0, 0, "Amount of damping to apply to current body velocities (0 = no damping)");
  ragdoll_poseController_accelerationGain = Dvar_RegisterFloat("OLKMSPPNPQ", 1.0, 0.0, 1.0, 0, "Acceleration gain");
  ragdoll_poseController_velocityGain = Dvar_RegisterFloat("LKLMPOLMKL", 0.60000002, 0.0, 1.0, 0, "Velocity gain");
  ragdoll_poseController_positionGain = Dvar_RegisterFloat("NTSLLQMPL", 0.029999999, 0.0, 1.0, 0, "Position gain");
  ragdoll_poseController_positionMaxLinearVelocity = Dvar_RegisterFloat("MPLMRNSMPQ", 50.0, 0.0, 5000.0, 0, "Maximum linear velocity");
  ragdoll_poseController_positionMaxAngularVelocity = Dvar_RegisterFloat("NTQMLSQPRL", 1.8, 0.0, 10.0, 0, "Maximum angular velocity");
  ragdoll_poseController_snapGain = Dvar_RegisterFloat("MSOLTLOLMQ", 0.1, 0.0, 1.0, 0, "Snap gain, used when ragdoll is close to target pose");
  ragdoll_poseController_snapMaxLinearVelocity = Dvar_RegisterFloat("NKKNMPML", 10.0, 0.0, 5000.0, 0, "Max linear velocity when snapping");
  ragdoll_poseController_snapMaxAngularVelocity = Dvar_RegisterFloat("MRNKKPSNTS", 0.30000001, 0.0, 10.0, 0, "Max angular velocity when snapping");
  ragdoll_poseController_snapMaxLinearDistance = Dvar_RegisterFloat("LMLLQQNKMT", 2.0, 0.0, 4.0, 0, "Maximum distance inside which snap is active");
  ragdoll_poseController_snapMaxAngularDistance = Dvar_RegisterFloat("NPMRLRKQPS", 0.1, 0.0, 1.0, 0, "Maximum angular distance inside which snap is active");
  ragdoll_poseController_defaultBlendDuration = Dvar_RegisterFloat("MPOPNKMRNP", 0.2, 0.0, 10.0, 0, "Blend duration to use when transitioning from animation driven ragdoll to pure ragdoll");
  ragdoll_poseController_defaultControlDuration = Dvar_RegisterFloat("MMQKNLTLML", 1.0, 0.0, 10.0, 0, "Length of time controller will drive ragdoll towards animation pose after ragdoll is activated");
  ragdoll_poseController_maxControlDuration = Dvar_RegisterFloat("LOQORSSSRK", 5.0, 0.0, 20.0, 0, "Maximum length of time that the pose controller will remain active");
  ragdoll_poseController_defaultRootControlDuration = Dvar_RegisterFloat("LRORRNSSLT", 0.2, 0.0, 10.0, 0, "Length of time that root bone will influence target pose. After this the ragdoll will fall freely.");
  ragdoll_max_bullet_forces_per_bone = Dvar_RegisterInt("MPKSLRQOSS", 1, 0, 100, 0, "Maximum bullet hits per frame per ragdoll bone allowed. Mostly used to control the bullet effect of spread weapons like shotguns.");
  ragdoll_fullBodyExplodeMinRadius = Dvar_RegisterFloat("PTOORQNRP", 50.0, 0.0, 100000.0, 0, "Apply radius explosion forces to ragdolls as special full body force when explosion radius is larger than this value.");
  ragdoll_fullBodyExplodeForceScale = Dvar_RegisterFloat("MLKMSNLRTQ", 5.0, 0.0, 1000.0, 0, "When applying special full body radius explosion force, scale force by this value.");
  ragdoll_explode_upbias = Dvar_RegisterFloat("LTMOPKKPNN", 0.80000001, 0.0, 2.0, 4u, "Upwards bias applied to ragdoll explosion effects.");
  ragdoll_jitter_scale = Dvar_RegisterFloat("QLOKNSPMM", 1.0, 0.0, 10.0, 4u, "Scale up or down the effect of physics jitter on ragdolls");
  ragdoll_self_collision_scale = Dvar_RegisterFloat("OKPQTPLMLL", 1.2, 0.1, 10.0, 4u, "Scale the size of the collision capsules used to prevent ragdoll limbs from interpenetrating");
  ragdoll_max_stretch_pct = Dvar_RegisterFloat("MTQQKTSSNR", 10.0, 0.0, 200.0, 0, "Force ragdoll limbs to not stretch more than this percentage in one frame");
  ragdoll_stretch_iters = Dvar_RegisterInt("MNPROQLLPQ", 10, 1, 100, 0, "Iterations to run the alternate limb solver");
  ragdoll_idle_min_velsq = Dvar_RegisterFloat("MMRKRKMLMQ", 2.0, 0.0, 200.0, 0, "Minimum squared speed a ragdoll needs to be moving before it will shut down due to time");
  ragdoll_apply_velocity_falloff_rate = Dvar_RegisterFloat("MNNKSLTOSR", 0.93000001, 0.0, 1.0, 0, "Rate at which velocity application falls off for each conected bone when directly applied to a ragdoll bone.");
  ragdoll_ejectionVelocityTargetRoot = Dvar_RegisterFloat("MTLMNTTKSS", 200.0, 0.0, 10000.0, 0, "Ragdoll ejection velocity target when entire ragdoll is considered penetrating");
  ragdoll_ejectionVelocityTarget = Dvar_RegisterFloat("OMPQOOSPTO", 48.0, 0.0, 10000.0, 0, "Ragdoll ejection velocity target when part of a ragdoll is considered penetrating");
  ragdoll_ejectionImpulseLimit = Dvar_RegisterFloat("LMRPSQSPRK", 480.0, 0.0, 100000.0, 0, "Ragdoll ejection max impulse");
  ragdoll_ejectionFullBodyTryLength = Dvar_RegisterInt("LKTKOTLORM", 120, 0, 10000, 0, "Number of frames to try and solve a fully penetrating ragdoll before dropping to a periodic solve");
  ragdoll_ejectionFullBodyTryPeriod = Dvar_RegisterInt("NQSOTKOSNR", 60, 0, 1000, 0, "Number of frames to wait between periodic solves of fully penetrating ragdolls");
  ragdoll_debugDisplayInitialPose = Dvar_RegisterBool("LRPNTNOMKP", 0, 4u, "Debug draw data about the initial pose");
  ragdoll_debugInitialPose = Dvar_RegisterBool("RSTLLKPRP", 0, 4u, "Debug draw errors detected during initial pose");
  ragdoll_animNodeOverrideWeight = Dvar_RegisterFloat("OQTMLQPLK", 1.0, 0.0, 1.0, 4u, "Overrides weight of ragdoll animation node");
  ragdoll_loosenConstraintsDuringAnimation = Dvar_RegisterBool("RKRNOKLS", 1, 4u, "Loosen constraints whilst ragdoll is being animated by the pose controller");
  ragdoll_tightenConstraintsAfterAnimation = Dvar_RegisterBool("PKKTPMKOS", 0, 4u, "Tighten constraints after ragdoll is no longer being animated by the pose controller");
  ragdoll_printAnimNotifies = Dvar_RegisterBool("LNRTRMKNRK", 0, 0, "Print name of animation to console each time a ragdoll notify is handled.");
  Dvar_EndPermanentRegistration();
}

/*
==============
Ragdoll_IsDebugTarget
==============
*/
bool Ragdoll_IsDebugTarget(const Ragdoll *ragdoll)
{
  int RagdollHandle; 
  int v3; 

  if ( !ragdoll_debug_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 439, ASSERT_TYPE_ASSERT, "(ragdoll_debug_id)", (const char *)&queryFormat, "ragdoll_debug_id") )
    __debugbreak();
  if ( !ragdoll_debug_latest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 440, ASSERT_TYPE_ASSERT, "(ragdoll_debug_latest)", (const char *)&queryFormat, "ragdoll_debug_latest") )
    __debugbreak();
  RagdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
  v3 = ragdoll_debug_id->current.integer + 1;
  if ( ragdoll_debug_latest->current.enabled )
    v3 = s_lastAllocatedRagdollHandle;
  return RagdollHandle == v3;
}

/*
==============
Ragdoll_IsInitialized
==============
*/
_BOOL8 Ragdoll_IsInitialized()
{
  return s_ragdollSystemInitialized;
}

/*
==============
Ragdoll_IsRegistered
==============
*/
unsigned __int8 Ragdoll_IsRegistered(LocalClientNum_t clientNum)
{
  int v2; 

  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 364, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  v2 = s_ragdollRegistration;
  return _bittest(&v2, clientNum);
}

/*
==============
Ragdoll_LoadRagdoll
==============
*/
void Ragdoll_LoadRagdoll(int ragdollHandle, SaveGame *save)
{
  Ragdoll *Ragdoll; 
  Ragdoll *v5; 
  double Float; 
  double v7; 
  double v8; 
  __int64 numBones; 
  __int64 v10; 
  scr_string_t *boneNames; 
  const char *CString; 
  __int64 v13; 
  __int64 v14; 
  int p; 

  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 669, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v13) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 670, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v13, 64) )
      __debugbreak();
  }
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v14) = 64;
    LODWORD(v13) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !Ragdoll->allocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 671, ASSERT_TYPE_ASSERT, "(Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "Ragdoll_IsAllocated( ragdollHandle )") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 674, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  v5 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 678, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  v5->hitLocation = p;
  Float = MemFile_ReadFloat(&save->memFile);
  v5->impactVector.v[0] = *(float *)&Float;
  v7 = MemFile_ReadFloat(&save->memFile);
  v5->impactVector.v[1] = *(float *)&v7;
  v8 = MemFile_ReadFloat(&save->memFile);
  v5->impactVector.v[2] = *(float *)&v8;
  MemFile_ReadData(&save->memFile, 0x100ui64, v5->xmodelAtCreate);
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  v5->immediatePlayerRagdoll = p;
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  v5->poseControllerEnabledAtCreate = p;
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  v5->poseControllerRootControlEnabledAtCreate = p;
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  v5->spawnedRestFx = p;
  SaveMemory_LoadRead(&v5->state, 13528, save);
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  numBones = v5->state.numBones;
  v5->penetrating = p;
  if ( (int)numBones > 64 )
  {
    LODWORD(v13) = numBones;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 697, ASSERT_TYPE_ASSERT, "( ( numBones <= 64 ) )", "( numBones ) = %i", v13) )
      __debugbreak();
  }
  v10 = numBones;
  if ( (int)numBones > 0 )
  {
    boneNames = v5->boneNames;
    do
    {
      CString = MemFile_ReadCString(&save->memFile);
      *boneNames++ = SL_GetString(CString, 0);
      --v10;
    }
    while ( v10 );
  }
  v5->state.loadedState = v5->state.state;
  v5->state.state = RAGDOLL_ACTIVITY_STATE_JUST_LOADED;
  v5->state.physicsInstanceId = -1;
}

/*
==============
Ragdoll_PoseValid
==============
*/
bool Ragdoll_PoseValid(const Ragdoll *ragdoll)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1750, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !ragdoll->allocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1751, ASSERT_TYPE_ASSERT, "(ragdoll->allocated)", (const char *)&queryFormat, "ragdoll->allocated") )
    __debugbreak();
  return ragdoll->state.physicsPoseTimestamp[(ragdoll->state.totalFrames & 1) == 0] == ragdoll->state.totalFrames;
}

/*
==============
Ragdoll_Register
==============
*/
void Ragdoll_Register(LocalClientNum_t clientNum)
{
  int v2; 

  if ( !s_ragdollSystemInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 303, ASSERT_TYPE_ASSERT, "(Ragdoll_IsInitialized())", (const char *)&queryFormat, "Ragdoll_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 306, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 364, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
  }
  v2 = s_ragdollRegistration;
  if ( _bittest(&v2, clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 307, ASSERT_TYPE_ASSERT, "(!Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "!Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  s_ragdollRegistration |= 1 << clientNum;
}

/*
==============
Ragdoll_Release
==============
*/
void Ragdoll_Release(int ragdollHandle)
{
  unsigned int v2; 
  Ragdoll *Ragdoll; 
  Ragdoll *v4; 
  Ragdoll *v5; 
  bool IsDebugTarget; 
  int v7; 
  __int64 v8; 
  __int64 v9; 

  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 538, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  v2 = ragdollHandle - 1;
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v8) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 539, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v8, 64) )
      __debugbreak();
  }
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( v2 >= 0x40 )
  {
    LODWORD(v9) = 64;
    LODWORD(v8) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !Ragdoll->allocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 542, ASSERT_TYPE_ASSERT, "(Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "Ragdoll_IsAllocated( ragdollHandle )") )
    __debugbreak();
  v4 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 546, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  Ragdoll_Update_AcquireReadLock();
  Ragdoll_SetNewState(v4, RAGDOLL_ACTIVITY_STATE_DEAD);
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 455, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( v2 >= 0x40 )
  {
    LODWORD(v9) = 64;
    LODWORD(v8) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 456, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v5 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 460, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  IsDebugTarget = Ragdoll_IsDebugTarget(v5);
  v7 = s_debugAnimPoseHandle;
  if ( IsDebugTarget )
    v7 = 0;
  s_debugAnimPoseHandle = v7;
  memset_0(v5, 0, sizeof(Ragdoll));
  Ragdoll_Update_ReleaseReadLock();
}

/*
==============
Ragdoll_RequestNextAnimationPose
==============
*/
void Ragdoll_RequestNextAnimationPose(Ragdoll *ragdoll)
{
  ragdoll->state.animationPoseRequestTimestamp[ragdoll->state.totalFrames & 1] = ragdoll->state.totalFrames + 1;
}

/*
==============
Ragdoll_RequiresAnimationPose
==============
*/
bool Ragdoll_RequiresAnimationPose(const int ragdollHandle)
{
  Ragdoll *Ragdoll; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( Ragdoll )
    LOBYTE(Ragdoll) = Ragdoll->state.animationPoseRequestTimestamp[(Ragdoll->state.totalFrames & 1) == 0] == Ragdoll->state.totalFrames;
  return (char)Ragdoll;
}

/*
==============
Ragdoll_Reset
==============
*/
void Ragdoll_Reset(LocalClientNum_t clientNum)
{
  int v2; 
  LocalClientNum_t *p_localClientNum; 

  if ( !s_ragdollSystemInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 344, ASSERT_TYPE_ASSERT, "(Ragdoll_IsInitialized())", (const char *)&queryFormat, "Ragdoll_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 347, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 364, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
  }
  v2 = s_ragdollRegistration;
  if ( !_bittest(&v2, clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 348, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  p_localClientNum = &g_ragdollBodies[0].localClientNum;
  do
  {
    if ( *((_BYTE *)p_localClientNum - 40) && *p_localClientNum == clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 355, ASSERT_TYPE_ASSERT, "(!g_ragdollBodies[i].allocated || g_ragdollBodies[i].localClientNum != clientNum)", (const char *)&queryFormat, "!g_ragdollBodies[i].allocated || g_ragdollBodies[i].localClientNum != clientNum") )
      __debugbreak();
    p_localClientNum += 3529;
  }
  while ( (__int64)p_localClientNum < (__int64)&ragdoll_debugDrawTargetPose );
}

/*
==============
Ragdoll_ResetAllContactsWithMovers
==============
*/
void Ragdoll_ResetAllContactsWithMovers(Ragdoll *ragdoll)
{
  bitarray<64> *p_boneContactBits; 
  __int64 v3; 

  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2032, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  p_boneContactBits = &ragdoll->moverContactInfo.list[0].boneContactBits;
  v3 = 2i64;
  do
  {
    LOWORD(p_boneContactBits[-1].array[1]) = 2047;
    *p_boneContactBits = 0i64;
    p_boneContactBits = (bitarray<64> *)((char *)p_boneContactBits + 12);
    --v3;
  }
  while ( v3 );
}

/*
==============
Ragdoll_ResetContactWithMover
==============
*/
void Ragdoll_ResetContactWithMover(int ragdollHandle, const __int16 moverEntNum, unsigned int boneIndex)
{
  unsigned __int64 v3; 
  const Ragdoll *Ragdoll; 
  unsigned __int64 ContactMover; 
  RagdollMoverContactInfo *v7; 
  bitarray<64> *p_boneContactBits; 
  unsigned int v9; 
  __int64 v10; 

  v3 = boneIndex;
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2076, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  ContactMover = Ragdoll_FindContactMover(Ragdoll, moverEntNum);
  if ( ContactMover != -1i64 )
  {
    v7 = &Ragdoll->moverContactInfo.list[ContactMover];
    if ( (unsigned int)v3 >= 0x40 )
    {
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2085, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( 64 )", "boneIndex doesn't index RAGDOLL_MAX_BONES\n\t%i not in [0, %i)", v10, 64) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 64) )
        __debugbreak();
    }
    v7->boneContactBits.array[v3 >> 5] &= ~(0x80000000 >> (v3 & 0x1F));
    p_boneContactBits = &v7->boneContactBits;
    v9 = 0;
    while ( !p_boneContactBits->array[0] )
    {
      ++v9;
      p_boneContactBits = (bitarray<64> *)((char *)p_boneContactBits + 4);
      if ( v9 >= 2 )
      {
        v7->moverEntNum = 2047;
        return;
      }
    }
  }
}

/*
==============
Ragdoll_ResetMoverOffset
==============
*/
void Ragdoll_ResetMoverOffset(int ragdollHandle)
{
  Ragdoll *Ragdoll; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2115, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  *(_QWORD *)Ragdoll->associatedMoverOffset.v = 0i64;
  Ragdoll->associatedMoverOffset.v[2] = 0.0;
}

/*
==============
Ragdoll_SaveRagdoll
==============
*/
void Ragdoll_SaveRagdoll(int ragdollHandle, MemoryFile *memFile)
{
  MemoryFile *v3; 
  Ragdoll *Ragdoll; 
  RagdollState *p_state; 
  char v6; 
  int v7; 
  RagdollActivityState state; 
  unsigned int physicsInstanceId; 
  unsigned int v10; 
  int NumBones; 
  hknpBodyId v12; 
  float *v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  bool IsRigidBodyActive; 
  __int64 v19; 
  __int64 v20; 
  scr_string_t *boneNames; 
  const char *v22; 
  __int64 v23; 
  __int64 v24; 
  char v25[8]; 
  hknpBodyId p; 
  __int64 v27; 
  float *v28; 
  __int64 v29; 
  MemoryFile *v30; 
  hkVector4f linVel; 
  hkVector4f angVel; 

  v3 = memFile;
  v30 = memFile;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 593, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v23) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 594, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v23, 64) )
      __debugbreak();
  }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 597, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 601, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  p.m_serialAndIndex = Ragdoll->hitLocation;
  MemFile_WriteData(v3, 4ui64, &p);
  MemFile_WriteData(v3, 0xCui64, &Ragdoll->impactVector);
  MemFile_WriteData(v3, 0x100ui64, Ragdoll->xmodelAtCreate);
  v25[0] = Ragdoll->immediatePlayerRagdoll;
  MemFile_WriteData(v3, 1ui64, v25);
  v25[0] = Ragdoll->poseControllerEnabledAtCreate;
  MemFile_WriteData(v3, 1ui64, v25);
  v25[0] = Ragdoll->poseControllerRootControlEnabledAtCreate;
  MemFile_WriteData(v3, 1ui64, v25);
  v25[0] = Ragdoll->spawnedRestFx;
  MemFile_WriteData(v3, 1ui64, v25);
  p_state = &Ragdoll->state;
  v6 = 0;
  v7 = 3 * Ragdoll->localClientNum + 3;
  state = Ragdoll->state.state;
  if ( state == RAGDOLL_ACTIVITY_STATE_JUST_LOADED )
  {
    v6 = 1;
    p_state->state = Ragdoll->state.loadedState;
  }
  else if ( state == RAGDOLL_ACTIVITY_STATE_RUNNING )
  {
    physicsInstanceId = Ragdoll->state.physicsInstanceId;
    if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 628, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v10 = 0;
    NumBones = Ragdoll_GetNumBones(Ragdoll);
    v29 = NumBones;
    if ( NumBones > 0 )
    {
      v28 = &Ragdoll->state.loadedPhysicsLinVels[0].v[2];
      v27 = 0i64;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v7 > 7 )
        {
          LODWORD(v24) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v24) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(v24) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v24) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
        {
          LODWORD(v24) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v24) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
        {
          LODWORD(v24) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v24) )
            __debugbreak();
        }
        v12.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&p, (const Physics_WorldId)v7, physicsInstanceId, v10)->m_serialAndIndex;
        if ( (v12.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 636, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v7 > 7 )
        {
          LODWORD(v24) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v24) )
            __debugbreak();
        }
        if ( (v12.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v24) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v24) )
            __debugbreak();
        }
        HavokPhysics_GetRigidBodyLinAngVel((const Physics_WorldId)v7, v12, &linVel, &angVel);
        v13 = v28;
        v14 = 32.0 * linVel.m_quad.m128_f32[0];
        v15 = 32.0 * linVel.m_quad.m128_f32[2];
        *(v28 - 1) = 32.0 * linVel.m_quad.m128_f32[1];
        v16 = angVel.m_quad.m128_f32[0];
        *(v13 - 2) = v14;
        v17 = angVel.m_quad.m128_f32[1];
        *v13 = v15;
        v13[190] = v16;
        v13[192] = angVel.m_quad.m128_f32[2];
        v13[191] = v17;
        IsRigidBodyActive = Physics_IsRigidBodyActive((Physics_WorldId)v7, v12.m_serialAndIndex);
        v19 = v27;
        ++v10;
        v28 = v13 + 3;
        Ragdoll->state.loadedPhysicsActivationStates[v27] = IsRigidBodyActive;
        v27 = v19 + 1;
      }
      while ( v19 + 1 < v29 );
      v3 = v30;
      p_state = &Ragdoll->state;
      v6 = 0;
    }
  }
  MemFile_WriteData(v3, 0x34D8ui64, p_state);
  v25[0] = Ragdoll->penetrating;
  MemFile_WriteData(v3, 1ui64, v25);
  v20 = Ragdoll->state.numBones;
  if ( v20 > 0 )
  {
    boneNames = Ragdoll->boneNames;
    do
    {
      v22 = SL_ConvertToString(*boneNames);
      MemFile_WriteCString(v3, v22);
      ++boneNames;
      --v20;
    }
    while ( v20 );
  }
  if ( v6 )
    p_state->state = RAGDOLL_ACTIVITY_STATE_JUST_LOADED;
}

/*
==============
Ragdoll_SetAnimPoseRootOrientation
==============
*/
void Ragdoll_SetAnimPoseRootOrientation(Ragdoll *ragdoll, const vec4_t *rotation, const vec3_t *translation)
{
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1569, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1570, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
  if ( ((LODWORD(translation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(translation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(translation->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1571, ASSERT_TYPE_SANITY, "( !IS_NAN( ( translation )[0] ) && !IS_NAN( ( translation )[1] ) && !IS_NAN( ( translation )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( translation )[0] ) && !IS_NAN( ( translation )[1] ) && !IS_NAN( ( translation )[2] )") )
    __debugbreak();
  ragdoll->state.animationPoseRootOrientation.orientation.v[0] = rotation->v[0];
  ragdoll->state.animationPoseRootOrientation.orientation.v[1] = rotation->v[1];
  ragdoll->state.animationPoseRootOrientation.orientation.v[2] = rotation->v[2];
  ragdoll->state.animationPoseRootOrientation.orientation.v[3] = rotation->v[3];
  ragdoll->state.animationPoseRootOrientation.origin.v[0] = translation->v[0];
  ragdoll->state.animationPoseRootOrientation.origin.v[1] = translation->v[1];
  ragdoll->state.animationPoseRootOrientation.origin.v[2] = translation->v[2];
}

/*
==============
Ragdoll_SetContactWithMover
==============
*/
void Ragdoll_SetContactWithMover(int ragdollHandle, const __int16 moverEntNum, unsigned int boneIndex)
{
  unsigned __int64 v3; 
  const Ragdoll *Ragdoll; 
  unsigned __int64 ContactMover; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  int v9; 
  int v10; 
  unsigned int *p_boneContactBits; 
  __int64 v12; 
  unsigned int v13; 
  bool *v14; 
  __int64 v15; 

  v3 = boneIndex;
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2048, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  ContactMover = Ragdoll_FindContactMover(Ragdoll, moverEntNum);
  if ( ContactMover != -1i64 )
    goto LABEL_21;
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1999, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  v7 = 0i64;
  v8 = 0i64;
  v9 = -1;
  while ( Ragdoll->moverContactInfo.list[v8].moverEntNum != 2047 )
  {
    v10 = 0;
    p_boneContactBits = (unsigned int *)&Ragdoll->moverContactInfo.list[v8].boneContactBits;
    v12 = 2i64;
    do
    {
      v10 += __popcnt(*p_boneContactBits++);
      --v12;
    }
    while ( v12 );
    ContactMover = v8;
    v13 = v10;
    if ( v10 <= v9 )
      v13 = v9;
    if ( v10 <= v9 )
      ContactMover = v7;
    ++v8;
    v7 = ContactMover;
    v9 = v13;
    if ( v8 >= 2 )
      goto LABEL_19;
  }
  v13 = 0;
  ContactMover = v8;
LABEL_19:
  if ( v13 <= 1 )
  {
    Ragdoll->moverContactInfo.list[ContactMover].moverEntNum = moverEntNum;
    Ragdoll->moverContactInfo.list[ContactMover].boneContactBits = 0i64;
LABEL_21:
    if ( (unsigned int)v3 >= 0x40 )
    {
      LODWORD(v15) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2068, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( 64 )", "boneIndex doesn't index RAGDOLL_MAX_BONES\n\t%i not in [0, %i)", v15, 64) )
        __debugbreak();
    }
    v14 = &Ragdoll->allocated + 12 * ContactMover;
    if ( (unsigned int)v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 64) )
      __debugbreak();
    *(_DWORD *)&v14[4 * (v3 >> 5) + 8] |= 0x80000000 >> (v3 & 0x1F);
  }
}

/*
==============
Ragdoll_SetDebugAnimationPoseBone
==============
*/
void Ragdoll_SetDebugAnimationPoseBone(const Ragdoll *ragdoll, const BoneOrientation *animPoseBoneOrientation, int boneId)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  int numBones; 

  v3 = boneId;
  if ( Ragdoll_IsDebugTarget(ragdoll) )
  {
    if ( (int)v3 >= 64 )
    {
      v8 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 915, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v8) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= ragdoll->state.numBones )
    {
      numBones = ragdoll->state.numBones;
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 916, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v7, numBones) )
        __debugbreak();
    }
    v6 = v3;
    *(_OWORD *)s_debugAnimPose[v6].origin.v = *(_OWORD *)animPoseBoneOrientation->origin.v;
    *(double *)&s_debugAnimPose[v6].orientation.xyz.y = *(double *)&animPoseBoneOrientation->orientation.xyz.y;
    s_debugAnimPose[v6].orientation.v[3] = animPoseBoneOrientation->orientation.v[3];
    s_debugAnimPoseHandle = Ragdoll_GetRagdollHandle(ragdoll);
  }
}

/*
==============
Ragdoll_SetDebugBulletImpulse
==============
*/
void Ragdoll_SetDebugBulletImpulse(const Ragdoll *ragdoll, int boneId, const vec3_t *position, const vec3_t *normalizedDirection, float magnitude)
{
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  int numBones; 

  if ( Ragdoll_IsDebugTarget(ragdoll) )
  {
    if ( boneId >= 64 )
    {
      v12 = boneId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 956, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v12) )
        __debugbreak();
    }
    if ( (unsigned int)boneId >= ragdoll->state.numBones )
    {
      numBones = ragdoll->state.numBones;
      LODWORD(v11) = boneId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 957, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v11, numBones) )
        __debugbreak();
    }
    v9 = s_ragdollDebugImpulseCount++ & 0x3F;
    v10 = v9;
    s_ragdollDebugImpulses[v9].impulseType = BULLET_IMPULSE;
    s_ragdollDebugImpulses[v10].ragdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
    s_ragdollDebugImpulses[v10].boneId = boneId;
    s_ragdollDebugImpulses[v10].impulsePosition.v[0] = position->v[0];
    s_ragdollDebugImpulses[v10].impulsePosition.v[1] = position->v[1];
    s_ragdollDebugImpulses[v10].impulsePosition.v[2] = position->v[2];
    s_ragdollDebugImpulses[v10].impulseDirection.v[0] = normalizedDirection->v[0];
    s_ragdollDebugImpulses[v10].impulseDirection.v[1] = normalizedDirection->v[1];
    s_ragdollDebugImpulses[v10].impulseDirection.v[2] = normalizedDirection->v[2];
    s_ragdollDebugImpulses[v10].impulseMagnitude = magnitude;
  }
}

/*
==============
Ragdoll_SetDebugExplosionImpulse
==============
*/
void Ragdoll_SetDebugExplosionImpulse(const Ragdoll *ragdoll, int boneId, const vec3_t *position, const vec3_t *normalizedDirection, float magnitude)
{
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  int numBones; 

  if ( Ragdoll_IsDebugTarget(ragdoll) )
  {
    if ( boneId >= 64 )
    {
      v12 = boneId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 930, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v12) )
        __debugbreak();
    }
    if ( (unsigned int)boneId >= ragdoll->state.numBones )
    {
      numBones = ragdoll->state.numBones;
      LODWORD(v11) = boneId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 931, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v11, numBones) )
        __debugbreak();
    }
    v9 = s_ragdollDebugImpulseCount++ & 0x3F;
    v10 = v9;
    s_ragdollDebugImpulses[v9].impulseType = EXPLOSION_IMPULSE;
    s_ragdollDebugImpulses[v10].ragdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
    s_ragdollDebugImpulses[v10].boneId = boneId;
    s_ragdollDebugImpulses[v10].impulsePosition.v[0] = position->v[0];
    s_ragdollDebugImpulses[v10].impulsePosition.v[1] = position->v[1];
    s_ragdollDebugImpulses[v10].impulsePosition.v[2] = position->v[2];
    s_ragdollDebugImpulses[v10].impulseDirection.v[0] = normalizedDirection->v[0];
    s_ragdollDebugImpulses[v10].impulseDirection.v[1] = normalizedDirection->v[1];
    s_ragdollDebugImpulses[v10].impulseDirection.v[2] = normalizedDirection->v[2];
    s_ragdollDebugImpulses[v10].impulseMagnitude = magnitude;
  }
}

/*
==============
Ragdoll_SetDebugInitialVelocity
==============
*/
void Ragdoll_SetDebugInitialVelocity(const Ragdoll *ragdoll, int boneId, const vec3_t *velocity, const bool hasImpact)
{
  __int64 v5; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int numBones; 

  v5 = boneId;
  if ( Ragdoll_IsDebugTarget(ragdoll) )
  {
    if ( (int)v5 >= 64 )
    {
      v10 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 982, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v10) )
        __debugbreak();
    }
    if ( (unsigned int)v5 >= ragdoll->state.numBones )
    {
      numBones = ragdoll->state.numBones;
      LODWORD(v9) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 983, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v9, numBones) )
        __debugbreak();
    }
    s_debugInitialVelocityHandle = Ragdoll_GetRagdollHandle(ragdoll);
    v8 = v5;
    s_debugInitialVelocity[v8].v[0] = velocity->v[0];
    s_debugInitialVelocity[v8].v[1] = velocity->v[1];
    s_debugInitialVelocity[v8].v[2] = velocity->v[2];
    s_debugInitialVelocityHasImpact[v5] = hasImpact;
  }
}

/*
==============
Ragdoll_SetMoverOffset
==============
*/
void Ragdoll_SetMoverOffset(int ragdollHandle, const vec3_t *moverOffset)
{
  Ragdoll *Ragdoll; 

  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2124, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  Ragdoll->associatedMoverOffset.v[0] = moverOffset->v[0];
  Ragdoll->associatedMoverOffset.v[1] = moverOffset->v[1];
  Ragdoll->associatedMoverOffset.v[2] = moverOffset->v[2];
}

/*
==============
Ragdoll_SetNextPhysicsPoseValid
==============
*/
void Ragdoll_SetNextPhysicsPoseValid(Ragdoll *ragdoll)
{
  ragdoll->state.physicsPoseTimestamp[ragdoll->state.totalFrames & 1] = ragdoll->state.totalFrames + 1;
  ragdoll->state.animationPoseRequestTimestamp[(ragdoll->state.totalFrames & 1) == 0] = ragdoll->state.totalFrames - 1;
}

/*
==============
Ragdoll_Shutdown
==============
*/
void Ragdoll_Shutdown(void)
{
  if ( !s_ragdollSystemInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 280, ASSERT_TYPE_ASSERT, "(Ragdoll_IsInitialized())", (const char *)&queryFormat, "Ragdoll_IsInitialized()") )
    __debugbreak();
  if ( s_ragdollRegistration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 283, ASSERT_TYPE_ASSERT, "(s_ragdollRegistration == 0)", (const char *)&queryFormat, "s_ragdollRegistration == 0") )
    __debugbreak();
  Ragdoll_Update_ShutdownRWLock();
  s_ragdollSystemInitialized = 0;
}

/*
==============
Ragdoll_Unregister
==============
*/
void Ragdoll_Unregister(LocalClientNum_t clientNum)
{
  int v2; 
  LocalClientNum_t *p_localClientNum; 

  if ( !s_ragdollSystemInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 320, ASSERT_TYPE_ASSERT, "(Ragdoll_IsInitialized())", (const char *)&queryFormat, "Ragdoll_IsInitialized()") )
    __debugbreak();
  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 323, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 364, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
      __debugbreak();
  }
  v2 = s_ragdollRegistration;
  if ( !_bittest(&v2, clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 324, ASSERT_TYPE_ASSERT, "(Ragdoll_IsRegistered( clientNum ))", (const char *)&queryFormat, "Ragdoll_IsRegistered( clientNum )") )
    __debugbreak();
  p_localClientNum = &g_ragdollBodies[0].localClientNum;
  do
  {
    if ( *((_BYTE *)p_localClientNum - 40) && *p_localClientNum == clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 331, ASSERT_TYPE_ASSERT, "(!g_ragdollBodies[i].allocated || g_ragdollBodies[i].localClientNum != clientNum)", (const char *)&queryFormat, "!g_ragdollBodies[i].allocated || g_ragdollBodies[i].localClientNum != clientNum") )
      __debugbreak();
    p_localClientNum += 3529;
  }
  while ( (__int64)p_localClientNum < (__int64)&ragdoll_debugDrawTargetPose );
  s_ragdollRegistration &= ~(1 << clientNum);
}

/*
==============
Ragdoll_UpdateRestFx
==============
*/
void Ragdoll_UpdateRestFx(LocalClientNum_t localClientNum)
{
  int v2; 
  int *p_entityNum; 
  Ragdoll *Ragdoll; 
  __int64 v5; 
  __int64 v6; 
  CgEntitySystem *v7; 
  hitLocation_t v8; 
  const char *BoneNameForHitLocation; 
  scr_string_t LowercaseString; 
  __int64 v11; 
  __int64 v12; 

  Sys_ProfBeginNamedEvent(0xFF008008, "Ragdoll_UpdateRestFx");
  v2 = 1;
  p_entityNum = &g_ragdollBodies[0].entityNum;
  do
  {
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( (unsigned int)(v2 - 1) >= 0x40 )
    {
      LODWORD(v12) = 64;
      LODWORD(v11) = v2 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    Ragdoll = Ragdoll_GetRagdoll(v2);
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( Ragdoll->allocated )
    {
      if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v2 - 1) >= 0x40 )
      {
        LODWORD(v12) = 64;
        LODWORD(v11) = v2 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( p_entityNum == (int *)304 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2173, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( *(p_entityNum - 66) == localClientNum && p_entityNum[6] == 4 && !*((_BYTE *)p_entityNum + 13809) && Ragdoll_IsAtRest(v2) )
      {
        v5 = *p_entityNum;
        if ( (_DWORD)v5 == 2047 )
          goto LABEL_43;
        v6 = *(p_entityNum - 66);
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v12) = *(p_entityNum - 66);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v12) )
            __debugbreak();
        }
        if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v12) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v11) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v6] )
        {
          LODWORD(v12) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v12) )
            __debugbreak();
        }
        v7 = CgEntitySystem::ms_entitySystemArray[v6];
        if ( (unsigned int)v5 >= 0x800 )
        {
          LODWORD(v12) = 2048;
          LODWORD(v11) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        if ( (CgEntitySystem *)((char *)v7 + 760 * v5) == (CgEntitySystem *)-16i64 || (v7->m_entities[v5].flags & 1) == 0 || ((v7->m_entities[v5].nextState.eType - 19) & 0xFFFD) != 0 || (CgEntitySystem *)((char *)v7 + 760 * v5) == (CgEntitySystem *)-504i64 || (v7->m_entities[v5].nextState.lerp.u.actor.flags & 0x20) == 0 )
        {
LABEL_43:
          v8 = HITLOC_TORSO_UPR;
          if ( p_entityNum[1] > 0 )
            v8 = p_entityNum[1];
          BoneNameForHitLocation = Ragdoll_GetBoneNameForHitLocation(v8);
          if ( !BoneNameForHitLocation )
          {
            LODWORD(v12) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 2195, ASSERT_TYPE_ASSERT, "(boneName)", "%s\n\tFailed to find bone name for specified hitLocation %i", "boneName", v12) )
              __debugbreak();
          }
          LowercaseString = SL_FindLowercaseString(BoneNameForHitLocation);
          CG_PlayBoltedEffect((LocalClientNum_t)*(p_entityNum - 66), &cgMedia.fxBloodPool, *(p_entityNum - 65), LowercaseString);
        }
        *((_BYTE *)p_entityNum + 13809) = 1;
      }
    }
    ++v2;
    p_entityNum += 3529;
  }
  while ( v2 <= 64 );
  Sys_ProfEndNamedEvent();
}


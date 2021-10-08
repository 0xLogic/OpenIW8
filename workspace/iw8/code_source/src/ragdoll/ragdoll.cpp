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
  unsigned int v5; 

  if ( ragdollHandle )
  {
    _RDI = inoutPartBits;
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1784, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    v5 = 0;
    _RSI = (char *)Ragdoll - (char *)_RDI;
    do
    {
      __asm
      {
        vlddqu  xmm6, xmmword ptr [rsi+rdi+164h]
        vlddqu  xmm0, xmmword ptr [rdi]
        vpor    xmm6, xmm0, xmm6
        vmovdqu xmmword ptr [rdi], xmm6
      }
      _RDI = (DObjPartBits *)((char *)_RDI + 16);
      ++v5;
    }
    while ( v5 < 2 );
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
}

/*
==============
Ragdoll_ApplyFullBodyRadiusForce
==============
*/

bool __fastcall Ragdoll_ApplyFullBodyRadiusForce(Ragdoll *ragdoll, const vec3_t *position, double radius, const bool applyImpulseDirOverride, const vec3_t *impulseDirOverride, float forceScalar)
{
  Physics_WorldId PhysicsWorldId; 
  int NumBones; 
  __int64 v21; 
  Bone *Bones; 
  int v27; 
  __int64 v29; 
  bool *p_hidden; 
  unsigned int RigidBodyID; 
  char v61; 
  char v62; 
  __int64 v101; 
  int RagdollHandle; 
  bool result; 
  float fmt; 
  __int64 v123; 
  __int64 v124; 
  __int64 v125; 
  float mass; 
  const vec3_t *v128; 
  vec3_t normalizedDirection; 
  vec3_t positiona; 
  vec4_t orientation; 

  __asm { vmovaps [rsp+150h+var_30], xmm6 }
  v128 = position;
  __asm { vmovaps xmm6, xmm2 }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1664, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  _RAX = ragdoll_fullBodyExplodeMinRadius;
  __asm { vcomiss xmm6, dword ptr [rax+28h] }
  if ( ragdoll->state.radiusForceAppliedThisFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1672, ASSERT_TYPE_ASSERT, "(!ragdoll->state.radiusForceAppliedThisFrame)", (const char *)&queryFormat, "!ragdoll->state.radiusForceAppliedThisFrame") )
    __debugbreak();
  ragdoll->state.radiusForceAppliedThisFrame = 1;
  PhysicsWorldId = Ragdoll_GetPhysicsWorldId(ragdoll);
  NumBones = Ragdoll_GetNumBones(ragdoll);
  v21 = NumBones;
  if ( NumBones > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1678, ASSERT_TYPE_ASSERT, "(numBones <= 64)", (const char *)&queryFormat, "numBones <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( (_DWORD)v21 )
  {
    __asm
    {
      vmovaps [rsp+150h+var_40], xmm7
      vmovaps [rsp+150h+var_70], xmm10
      vmovaps [rsp+150h+var_80], xmm11
      vmovaps [rsp+150h+var_90], xmm12
      vmovaps [rsp+150h+var_A0], xmm13
      vmovaps [rsp+150h+var_B0], xmm14
      vmovaps [rsp+150h+var_C0], xmm15
    }
    Bones = Ragdoll_GetBones(ragdoll);
    if ( !Bones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1685, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
      __debugbreak();
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)PhysicsWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", PhysicsWorldId) )
        __debugbreak();
      LODWORD(v125) = PhysicsWorldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v125) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm1, cs:__real@42000000
      vmovss  xmm10, cs:__real@3f800000
      vmovss  xmm12, cs:__real@80000000
    }
    _RCX = HavokPhysics_GetConstWorld(PhysicsWorldId)->world;
    v27 = 0;
    _RAX = ragdoll_explode_upbias;
    v29 = v21;
    __asm
    {
      vmovups xmm2, xmmword ptr [rcx+0AC0h]
      vmulss  xmm7, xmm2, xmm1
      vshufps xmm0, xmm2, xmm2, 55h ; 'U'
      vmulss  xmm6, xmm0, xmm1
      vshufps xmm2, xmm2, xmm2, 0AAh ; 'ª'
      vmulss  xmm5, xmm2, xmm1
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm1, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm3, xmm2, xmm2
      vcmpless xmm0, xmm3, xmm12
      vblendvps xmm0, xmm3, xmm10, xmm0
      vdivss  xmm4, xmm10, xmm0
      vmovss  xmm0, dword ptr [rax+28h]
      vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm6, xmm4
      vmulss  xmm14, xmm0, xmm2
      vmovss  xmm0, [rbp+50h+forceScalar]
      vmulss  xmm0, xmm0, dword ptr [rax+28h]
      vmulss  xmm11, xmm0, cs:__real@3c23d70a
      vmulss  xmm1, xmm7, xmm4
      vmulss  xmm13, xmm1, xmm2
      vmulss  xmm1, xmm5, xmm4
      vmulss  xmm15, xmm1, xmm2
    }
    if ( (int)v21 > 0 )
    {
      p_hidden = &Bones->hidden;
      _R12 = impulseDirOverride;
      __asm
      {
        vmovaps [rsp+150h+var_50], xmm8
        vxorps  xmm8, xmm8, xmm8
        vmovaps [rsp+150h+var_60], xmm9
      }
      do
      {
        if ( !*p_hidden )
        {
          RigidBodyID = Physics_GetRigidBodyID(PhysicsWorldId, ragdoll->state.physicsInstanceId, v27);
          __asm { vmovss  [rsp+150h+mass], xmm8 }
          Physics_GetRigidBodyMass(PhysicsWorldId, RigidBodyID, &mass);
          __asm
          {
            vmovss  xmm0, [rsp+150h+mass]
            vcomiss xmm0, xmm8
          }
          if ( v61 | v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1711, ASSERT_TYPE_ASSERT, "(bodyMass > 0.f)", (const char *)&queryFormat, "bodyMass > 0.f") )
            __debugbreak();
          __asm { vmulss  xmm9, xmm11, [rsp+150h+mass] }
          Physics_GetRigidBodyTransform(PhysicsWorldId, RigidBodyID, &positiona, &orientation);
          if ( applyImpulseDirOverride )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [r12]
              vmovss  xmm1, dword ptr [r12+4]
              vmovss  dword ptr [rsp+150h+normalizedDirection], xmm0
              vmovss  xmm0, dword ptr [r12+8]
              vmovss  dword ptr [rsp+150h+normalizedDirection+8], xmm0
              vmovss  dword ptr [rsp+150h+normalizedDirection+4], xmm1
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+150h+position]
              vmovss  xmm1, dword ptr [rsp+150h+position+4]
              vsubss  xmm4, xmm0, dword ptr [rax]
              vsubss  xmm5, xmm1, dword ptr [rax+4]
              vmovss  xmm0, dword ptr [rsp+150h+position+8]
              vsubss  xmm6, xmm0, dword ptr [rax+8]
              vmulss  xmm0, xmm6, xmm6
              vmulss  xmm2, xmm5, xmm5
              vmulss  xmm1, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm1, xmm2, xmm2
              vcmpless xmm0, xmm1, xmm12
              vblendvps xmm0, xmm1, xmm10, xmm0
              vdivss  xmm2, xmm10, xmm0
              vmulss  xmm0, xmm4, xmm2
              vaddss  xmm7, xmm0, xmm13
              vmulss  xmm1, xmm5, xmm2
              vmulss  xmm0, xmm6, xmm2
              vaddss  xmm6, xmm0, xmm15
              vaddss  xmm5, xmm1, xmm14
              vmulss  xmm0, xmm6, xmm6
              vmulss  xmm2, xmm5, xmm5
              vmulss  xmm1, xmm7, xmm7
              vaddss  xmm3, xmm2, xmm1
              vaddss  xmm2, xmm3, xmm0
              vsqrtss xmm4, xmm2, xmm2
              vucomiss xmm4, xmm8
              vcmpless xmm0, xmm4, xmm12
              vblendvps xmm0, xmm4, xmm10, xmm0
              vdivss  xmm2, xmm10, xmm0
              vmulss  xmm0, xmm2, xmm7
              vmovss  dword ptr [rsp+150h+normalizedDirection], xmm0
              vmulss  xmm0, xmm2, xmm6
              vmulss  xmm1, xmm2, xmm5
              vmovss  dword ptr [rsp+150h+normalizedDirection+8], xmm0
              vmovss  dword ptr [rsp+150h+normalizedDirection+4], xmm1
              vmovss  dword ptr [rsp+150h+normalizedDirection], xmm8
              vmovss  dword ptr [rsp+150h+normalizedDirection+4], xmm8
              vmovss  dword ptr [rsp+150h+normalizedDirection+8], xmm10
            }
          }
          __asm { vmovss  dword ptr [rsp+150h+fmt], xmm9 }
          Physics_ApplyImpulse(PhysicsWorldId, RigidBodyID, &positiona, &normalizedDirection, fmt);
          __asm { vdivss  xmm6, xmm9, [rsp+150h+mass] }
          if ( Ragdoll_IsDebugTarget(ragdoll) )
          {
            if ( v27 >= 64 )
            {
              LODWORD(v123) = v27;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 930, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v123) )
                __debugbreak();
            }
            if ( (unsigned int)v27 >= ragdoll->state.numBones )
            {
              LODWORD(v124) = ragdoll->state.numBones;
              LODWORD(v123) = v27;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 931, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v123, v124) )
                __debugbreak();
            }
            v101 = s_ragdollDebugImpulseCount++ & 0x3F;
            _RBX = v101;
            s_ragdollDebugImpulses[v101].impulseType = EXPLOSION_IMPULSE;
            RagdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+150h+position]
              vmovss  xmm1, dword ptr [rsp+150h+position+4]
            }
            _RCX = s_ragdollDebugImpulses;
            s_ragdollDebugImpulses[_RBX].ragdollHandle = RagdollHandle;
            s_ragdollDebugImpulses[_RBX].boneId = v27;
            __asm
            {
              vmovss  dword ptr [rcx+rbx*8+0Ch], xmm0
              vmovss  xmm0, dword ptr [rsp+150h+position+8]
              vmovss  dword ptr [rcx+rbx*8+10h], xmm1
              vmovss  xmm1, dword ptr [rsp+150h+normalizedDirection]
              vmovss  dword ptr [rcx+rbx*8+14h], xmm0
              vmovss  xmm0, dword ptr [rsp+150h+normalizedDirection+4]
              vmovss  dword ptr [rcx+rbx*8+18h], xmm1
              vmovss  xmm1, dword ptr [rsp+150h+normalizedDirection+8]
              vmovss  dword ptr [rcx+rbx*8+20h], xmm1
              vmovss  dword ptr [rcx+rbx*8+1Ch], xmm0
              vmovss  dword ptr [rcx+rbx*8+24h], xmm6
            }
          }
        }
        ++v27;
        p_hidden += 48;
        --v29;
      }
      while ( v29 );
      __asm
      {
        vmovaps xmm9, [rsp+150h+var_60]
        vmovaps xmm8, [rsp+150h+var_50]
      }
    }
    __asm
    {
      vmovaps xmm14, [rsp+150h+var_B0]
      vmovaps xmm13, [rsp+150h+var_A0]
      vmovaps xmm12, [rsp+150h+var_90]
      vmovaps xmm11, [rsp+150h+var_80]
      vmovaps xmm10, [rsp+150h+var_70]
      vmovaps xmm7, [rsp+150h+var_40]
      vmovaps xmm15, [rsp+150h+var_C0]
    }
  }
  result = 1;
  __asm { vmovaps xmm6, [rsp+150h+var_30] }
  return result;
}

/*
==============
Ragdoll_ApplyVelocity
==============
*/

void __fastcall Ragdoll_ApplyVelocity(const int ragdollHandle, const int boneIndex, const vec3_t *dir, double speed)
{
  char v20; 
  char v21; 
  Ragdoll *Ragdoll; 
  Ragdoll *v23; 
  __int64 speeda; 
  float speedb; 
  __int64 v29; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBP = dir;
  __asm { vmovaps xmm6, xmm3 }
  Sys_ProfBeginNamedEvent(0xFF008008, "Ragdoll_ApplyVelocity");
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  xmm2, dword ptr [rbp+4]
    vmovss  xmm4, dword ptr [rbp+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vsubss  xmm3, xmm0, cs:__real@3f800000
    vandps  xmm3, xmm3, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm3, cs:__real@3a83126f
  }
  if ( !(v20 | v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1920, ASSERT_TYPE_ASSERT, "(I_fabs( Vec3Length( dir ) - 1.0f ) <= 0.001f)", (const char *)&queryFormat, "I_fabs( Vec3Length( dir ) - 1.0f ) <= EQUAL_EPSILON") )
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
  v23 = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !v23->allocated )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1923, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  if ( (unsigned int)boneIndex >= Ragdoll->state.numBones )
  {
    LODWORD(v29) = Ragdoll->state.numBones;
    LODWORD(speeda) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1924, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ragdoll->state.numBones )", "boneIndex doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", speeda, v29) )
      __debugbreak();
  }
  _RAX = ragdoll_apply_velocity_falloff_rate;
  __asm
  {
    vmovss  [rsp+58h+speed], xmm6
    vmovss  xmm3, dword ptr [rax+28h]; falloffRate
  }
  Ragdoll_ApplyVelocity_Internal(Ragdoll, -1, boneIndex, *(const float *)&_XMM3, _RBP, speedb);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  Sys_ProfEndNamedEvent();
}

/*
==============
Ragdoll_ApplyVelocity_Internal
==============
*/

void __fastcall Ragdoll_ApplyVelocity_Internal(Ragdoll *const ragdoll, const int sourceBoneIndex, const int boneIndex, double falloffRate, const vec3_t *dir, const float speed)
{
  __int64 v11; 
  unsigned int numBones; 
  bool v15; 
  bool v16; 
  bool v17; 
  unsigned int physicsInstanceId; 
  __int32 v23; 
  unsigned int RigidBodyID; 
  int v32; 
  int BoneChildren; 
  unsigned __int64 v36; 
  unsigned __int64 v37; 
  int v38; 
  __int64 v43; 
  double v44; 
  float v45; 
  float v46; 
  __int64 v47; 
  double v48; 
  double v49; 
  vec3_t linVel; 
  int childIndices[6]; 

  __asm
  {
    vmovaps [rsp+0C8h+var_48], xmm6
    vmovaps [rsp+0C8h+var_58], xmm7
  }
  v11 = boneIndex;
  __asm { vmovaps xmm6, xmm3 }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1873, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( (sourceBoneIndex < -1 || sourceBoneIndex >= ragdoll->state.numBones) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1874, ASSERT_TYPE_ASSERT, "(-1 <= sourceBoneIndex && sourceBoneIndex < ragdoll->state.numBones)", (const char *)&queryFormat, "-1 <= sourceBoneIndex && sourceBoneIndex < ragdoll->state.numBones") )
    __debugbreak();
  numBones = ragdoll->state.numBones;
  v15 = (unsigned int)v11 < numBones;
  v16 = (unsigned int)v11 <= numBones;
  if ( (unsigned int)v11 >= numBones )
  {
    LODWORD(v43) = v11;
    v17 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1875, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ragdoll->state.numBones )", "boneIndex doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v43, ragdoll->state.numBones);
    v15 = 0;
    v16 = !v17;
    if ( v17 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v15 )
    goto LABEL_34;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v16 )
  {
LABEL_34:
    __asm
    {
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vmovsd  [rsp+0C8h+var_90], xmm0
      vxorpd  xmm1, xmm1, xmm1
      vmovsd  [rsp+0C8h+var_98], xmm1
      vcvtss2sd xmm2, xmm6, xmm6
      vmovsd  qword ptr [rsp+0C8h+var_A0], xmm2
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1876, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( falloffRate ) && ( falloffRate ) <= ( 1.0f )", "falloffRate not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v44, v48, v49) )
      __debugbreak();
  }
  if ( ragdoll->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
  {
    LODWORD(v47) = 2;
    LODWORD(v43) = ragdoll->localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1879, ASSERT_TYPE_ASSERT, "(unsigned)( ragdoll->localClientNum ) < (unsigned)( LOCAL_CLIENT_COUNT )", "ragdoll->localClientNum doesn't index LOCAL_CLIENT_COUNT\n\t%i not in [0, %i)", v43, v47) )
      __debugbreak();
  }
  physicsInstanceId = ragdoll->state.physicsInstanceId;
  v23 = 3 * ragdoll->localClientNum + 3;
  if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1882, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v23, physicsInstanceId, v11);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1884, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyLinVel((const Physics_WorldId)v23, RigidBodyID, &linVel);
  __asm
  {
    vmovss  xmm7, [rsp+0C8h+speed]
    vmulss  xmm2, xmm7, dword ptr [r15+4]
    vmulss  xmm1, xmm7, dword ptr [r15]
    vaddss  xmm1, xmm1, dword ptr [rsp+0C8h+linVel]
    vmovss  dword ptr [rsp+0C8h+linVel], xmm1
    vaddss  xmm1, xmm2, dword ptr [rsp+0C8h+linVel+4]
    vmulss  xmm2, xmm7, dword ptr [r15+8]
    vmovss  dword ptr [rsp+0C8h+linVel+4], xmm1
    vaddss  xmm1, xmm2, dword ptr [rsp+0C8h+linVel+8]
    vmovss  dword ptr [rsp+0C8h+linVel+8], xmm1
  }
  Physics_SetRigidBodyLinVel((const Physics_WorldId)v23, RigidBodyID, &linVel);
  v32 = ragdoll->state.parentBoneIndices[v11];
  if ( (_DWORD)v11 && sourceBoneIndex != v32 )
  {
    __asm
    {
      vmulss  xmm0, xmm6, xmm7
      vmovss  [rsp+0C8h+var_A0], xmm0
      vmovaps xmm3, xmm6; falloffRate
    }
    Ragdoll_ApplyVelocity_Internal(ragdoll, v11, v32, *(const float *)&_XMM3, dir, v45);
  }
  BoneChildren = Ragdoll_FindBoneChildren(ragdoll, v11, childIndices);
  v36 = 0i64;
  v37 = BoneChildren;
  if ( BoneChildren )
  {
    do
    {
      v38 = childIndices[v36];
      if ( sourceBoneIndex != v38 )
      {
        __asm
        {
          vmulss  xmm0, xmm6, xmm7
          vmovss  [rsp+0C8h+var_A0], xmm0
          vmovaps xmm3, xmm6; falloffRate
        }
        Ragdoll_ApplyVelocity_Internal(ragdoll, v11, v38, *(const float *)&_XMM3, dir, v46);
      }
      ++v36;
    }
    while ( v36 < v37 );
  }
  __asm
  {
    vmovaps xmm6, [rsp+0C8h+var_48]
    vmovaps xmm7, [rsp+0C8h+var_58]
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

bool __fastcall Ragdoll_CheckApplyRadiusForce(Ragdoll *ragdoll, double radius)
{
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1649, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  _RAX = ragdoll_fullBodyExplodeMinRadius;
  __asm
  {
    vcomiss xmm6, dword ptr [rax+28h]
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return !ragdoll->state.radiusForceAppliedThisFrame;
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
  int v13; 
  Ragdoll *v14; 
  int i; 
  Ragdoll *Ragdoll; 
  unsigned int v18; 
  Ragdoll *v19; 
  Ragdoll *v20; 
  Ragdoll *v21; 
  __int64 v22; 
  bitarray<64> *p_boneContactBits; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 

  if ( (unsigned int)clientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 478, ASSERT_TYPE_ASSERT, "(clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT)", (const char *)&queryFormat, "clientNum >= LOCAL_CLIENT_0 && clientNum < LOCAL_CLIENT_COUNT") )
    __debugbreak();
  if ( dobj == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 479, ASSERT_TYPE_ASSERT, "(dobj != (-1))", (const char *)&queryFormat, "dobj != DOBJ_HANDLE_NONE") )
    __debugbreak();
  if ( (unsigned int)entityNum >= 0x800 )
  {
    LODWORD(v24) = entityNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 480, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v24, 2048) )
      __debugbreak();
  }
  if ( (unsigned int)hitLocation >= 0x16 )
  {
    LODWORD(v25) = 22;
    LODWORD(v24) = hitLocation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 481, ASSERT_TYPE_ASSERT, "(unsigned)( hitLocation ) < (unsigned)( HITLOC_NUM )", "hitLocation doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  _R15 = impactVector;
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rsp+98h+var_58], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_75;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  [rsp+98h+var_58], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_75;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+98h+var_58], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
  {
LABEL_75:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 482, ASSERT_TYPE_ASSERT, "(!IS_NAN( impactVector[0] ) && !IS_NAN( impactVector[1] ) && !IS_NAN( impactVector[2] ))", (const char *)&queryFormat, "!IS_NAN( impactVector[0] ) && !IS_NAN( impactVector[1] ) && !IS_NAN( impactVector[2] )") )
      __debugbreak();
  }
  v13 = 0;
  v14 = g_ragdollBodies;
  for ( i = 1; i <= 64; ++i )
  {
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( (unsigned int)(i - 1) >= 0x40 )
    {
      LODWORD(v25) = 64;
      LODWORD(v24) = i - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v24, v25) )
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
        LODWORD(v25) = 64;
        LODWORD(v24) = i - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 574, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      ++v13;
    }
    ++v14;
  }
  if ( v13 >= ragdoll_max_simulating->current.integer )
    return 0i64;
  v18 = 1;
  while ( 1 )
  {
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( v18 - 1 >= 0x40 )
    {
      LODWORD(v25) = 64;
      LODWORD(v24) = v18 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v19 = Ragdoll_GetRagdoll(v18);
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( !v19->allocated )
      break;
    if ( (int)++v18 > 64 )
    {
      v18 = 0;
LABEL_59:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 493, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      goto LABEL_61;
    }
  }
  v20 = Ragdoll_GetRagdoll(v18);
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 373, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  memset_0(v20, 0, sizeof(Ragdoll));
  v20->state.physicsInstanceId = -1;
  Ragdoll_SetNewState(v20, RAGDOLL_ACTIVITY_STATE_DEAD);
  v20->allocated = 1;
  s_lastAllocatedRagdollHandle = v18;
  if ( !v18 )
    goto LABEL_59;
LABEL_61:
  v21 = Ragdoll_GetRagdoll(v18);
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 497, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( v21->state.state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 500, ASSERT_TYPE_ASSERT, "(ragdoll->state.state == RAGDOLL_ACTIVITY_STATE_DEAD)", (const char *)&queryFormat, "ragdoll->state.state == RAGDOLL_ACTIVITY_STATE_DEAD") )
    __debugbreak();
  v21->localClientNum = clientNum;
  v21->dobj = dobj;
  v21->entityNum = entityNum;
  v22 = 2i64;
  v21->hitLocation = hitLocation;
  v21->impactVector = *impactVector;
  v21->immediatePlayerRagdoll = immediatePlayerRagdoll;
  p_boneContactBits = &v21->moverContactInfo.list[0].boneContactBits;
  *(_WORD *)&v21->poseControllerEnabledAtCreate = 257;
  v21->createdOnMovingPlatform = 0;
  v21->state.totalFrames = 0;
  *(_QWORD *)v21->state.physicsPoseTimestamp = -1i64;
  *(_QWORD *)v21->state.animationPoseRequestTimestamp = -1i64;
  do
  {
    LOWORD(p_boneContactBits[-1].array[1]) = 2047;
    *p_boneContactBits = 0i64;
    p_boneContactBits = (bitarray<64> *)((char *)p_boneContactBits + 12);
    --v22;
  }
  while ( v22 );
  *(_QWORD *)v21->associatedMoverOffset.v = 0i64;
  v21->associatedMoverOffset.v[2] = 0.0;
  if ( Ragdoll_PoseValid(v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 524, ASSERT_TYPE_ASSERT, "(!Ragdoll_PoseValid( ragdoll ))", (const char *)&queryFormat, "!Ragdoll_PoseValid( ragdoll )") )
    __debugbreak();
  Ragdoll_SetNewState(v21, RAGDOLL_ACTIVITY_STATE_DOBJ_WAIT);
  return v18;
}

/*
==============
Ragdoll_DebugDraw
==============
*/

void __fastcall Ragdoll_DebugDraw(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight)
{
  const ScreenPlacement *v12; 
  unsigned int v18; 
  unsigned int v23; 
  int *p_frames; 
  int v25; 
  DObj *v26; 
  DObj *v27; 
  const char ***models; 
  const char **v29; 
  const char **v30; 
  char v34; 
  const vec4_t *v35; 
  int v40; 
  const vec4_t *v64; 
  const char ***v68; 
  const char **v69; 
  const char **v70; 
  const char *v74; 
  int v78; 
  unsigned int unsignedInt; 
  __int64 v85; 
  unsigned int boneId; 
  int impulseType; 
  __int64 v93; 
  int v96; 
  char v102; 
  bool RootOrigin; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  float fmtd; 
  float fmte; 
  char *fmtf; 
  __int64 forceColor; 
  __int64 forceColorb; 
  __int64 forceColora; 
  __int64 shadow; 
  __int64 shadowa; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  __int64 adjust; 
  __int64 v154; 
  double v155; 
  double v156; 
  unsigned int NumBones; 
  Ragdoll *Ragdoll; 
  DObj *obj; 
  vec3_t end; 
  vec4_t color; 
  vec4_t v165; 
  unsigned __int8 boneHasBulletImpulse[8]; 
  __int64 v167; 
  __int64 v168; 
  __int64 v169; 
  __int64 v170; 
  __int64 v171; 
  __int64 v172; 
  __int64 v173; 
  char dest[256]; 
  char v178; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
  }
  v12 = scrPlace;
  _R12 = y;
  __asm { vmovaps xmm11, xmm3 }
  _RBX = x;
  if ( !ragdoll_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 996, ASSERT_TYPE_ASSERT, "(ragdoll_debug)", (const char *)&queryFormat, "ragdoll_debug") )
    __debugbreak();
  if ( !ragdoll_debug_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 997, ASSERT_TYPE_ASSERT, "(ragdoll_debug_id)", (const char *)&queryFormat, "ragdoll_debug_id") )
    __debugbreak();
  __asm
  {
    vmovss  xmm7, [rbp+1C0h+charHeight]
    vmovaps xmmword ptr [rsp+2C0h+var_58+8], xmm6
    vxorps  xmm10, xmm10, xmm10
  }
  v18 = 1;
  if ( ragdoll_debug->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Ragdoll Summary");
    __asm
    {
      vmovss  xmm2, dword ptr [r12]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+2C0h+var_288], xmm7
    }
    Physics_DrawDebugString(v12, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v142, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
      vaddss  xmm1, xmm11, dword ptr [rbx]
    }
    v23 = 0;
    __asm { vmovss  dword ptr [rbx], xmm1 }
    p_frames = &g_ragdollBodies[0].state.frames;
    while ( 1 )
    {
      v25 = v23 + 1;
      if ( v23 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( v23 >= 0x40 )
      {
        LODWORD(shadow) = 64;
        LODWORD(forceColor) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", forceColor, shadow) )
          __debugbreak();
      }
      if ( p_frames == (int *)340 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1033, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( !*((_BYTE *)p_frames - 340) )
      {
        _RBX = x;
        goto LABEL_35;
      }
      if ( !Ragdoll_PoseValid((const Ragdoll *)(p_frames - 85)) && (*(p_frames - 3) || Ragdoll_GetNumBones((const Ragdoll *)(p_frames - 85)) <= 0) )
        break;
      v26 = Ragdoll_BodyDObj((const Ragdoll *)(p_frames - 85));
      v27 = v26;
      if ( !v26 )
        break;
      if ( !v26->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1051, ASSERT_TYPE_ASSERT, "(obj->numModels > 0)", (const char *)&queryFormat, "obj->numModels > 0") )
        __debugbreak();
      models = (const char ***)v27->models;
      v29 = *models;
      v30 = (const char **)(*models)[78];
      if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1056, ASSERT_TYPE_ASSERT, "(ragdollAsset)", (const char *)&queryFormat, "ragdollAsset") )
        __debugbreak();
      *(double *)&_XMM0 = RagdollPoseController_GetWeight((const RagdollPoseController *)(p_frames + 1752));
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = RagdollPoseController_GetPositionControlWeight((const RagdollPoseController *)(p_frames + 1752));
      __asm
      {
        vcvtss2sd xmm1, xmm0, xmm0
        vmovsd  [rsp+2C0h+var_260], xmm1
        vcvtss2sd xmm2, xmm6, xmm6
        vmovsd  [rsp+2C0h+var_268], xmm2
      }
      LODWORD(v154) = *p_frames;
      LODWORD(shadow) = *(p_frames - 9);
      LODWORD(forceColor) = *(p_frames - 74);
      LODWORD(fmt) = *(p_frames - 75);
      Com_sprintf(dest, 0x100ui64, "%i: client:%i dobj:%i entityNum:%i model:%s physicsasset:%s state:%s:%i posectrl:%.2f/%.2f", v23, fmt, forceColor, shadow, *v29, *v30, s_stateNames[*(p_frames - 3)], v154, v155, v156);
      __asm { vcomiss xmm6, xmm10 }
      v25 = v23 + 1;
      if ( v102 | v34 )
        goto LABEL_32;
      v35 = &colorGreen;
LABEL_33:
      _RBX = x;
      __asm
      {
        vmovss  xmm2, dword ptr [r12]; y
        vmovss  xmm1, dword ptr [rbx]; x
        vmovss  [rsp+2C0h+var_288], xmm7
      }
      Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, v35, 0, 1, v143, 0);
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [r12]
        vmovss  dword ptr [r12], xmm0
      }
LABEL_35:
      p_frames += 3529;
      v23 = v25;
      if ( v25 >= 64 )
      {
        __asm { vmovss  xmm0, dword ptr [rbx] }
        v12 = scrPlace;
        __asm
        {
          vsubss  xmm1, xmm0, xmm11
          vmovss  dword ptr [rbx], xmm1
        }
        goto LABEL_37;
      }
    }
    LODWORD(adjust) = *p_frames;
    LODWORD(shadow) = *(p_frames - 9);
    LODWORD(forceColor) = *(p_frames - 74);
    LODWORD(fmt) = *(p_frames - 75);
    Com_sprintf(dest, 0x100ui64, "%i: client:%i dobj:%i entityNum:%i state:%s:%i", v23, fmt, forceColor, shadow, s_stateNames[*(p_frames - 3)], adjust);
LABEL_32:
    v35 = &colorWhite;
    goto LABEL_33;
  }
LABEL_37:
  v40 = ragdoll_debug_id->current.integer + 1;
  if ( ragdoll_debug_latest->current.enabled )
    v40 = s_lastAllocatedRagdollHandle;
  if ( v40 > 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Ragdoll %i", (unsigned int)v40);
    __asm
    {
      vmovss  xmm2, dword ptr [r12]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+2C0h+var_288], xmm7
    }
    Physics_DrawDebugString(v12, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v144, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
      vaddss  xmm1, xmm11, dword ptr [rbx]
      vmovss  dword ptr [rbx], xmm1
    }
    Ragdoll = Ragdoll_GetRagdoll(v40);
    _R13 = Ragdoll;
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1098, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( !Ragdoll->allocated )
    {
      Com_sprintf(dest, 0x100ui64, "Not allocated");
      __asm
      {
        vmovss  xmm2, dword ptr [r12]; y
        vmovss  xmm1, dword ptr [rbx]; x
        vmovss  [rsp+2C0h+var_288], xmm7
      }
      Physics_DrawDebugString(v12, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v145, 0);
      __asm
      {
        vaddss  xmm0, xmm7, dword ptr [r12]
        vmovss  dword ptr [r12], xmm0
      }
LABEL_95:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vsubss  xmm1, xmm0, xmm11
        vmovss  dword ptr [rbx], xmm1
      }
      goto LABEL_96;
    }
    Com_sprintf(dest, 0x100ui64, "client:%i", (unsigned int)Ragdoll->localClientNum);
    __asm
    {
      vmovss  xmm2, dword ptr [r12]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+2C0h+var_288], xmm7
    }
    Physics_DrawDebugString(v12, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v146, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
    }
    LODWORD(fmta) = Ragdoll->entityNum;
    Com_sprintf(dest, 0x100ui64, "dobj:%i entityNum:%i", (unsigned int)Ragdoll->dobj, fmta);
    __asm
    {
      vmovss  xmm2, dword ptr [r12]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+2C0h+var_288], xmm7
    }
    Physics_DrawDebugString(v12, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v147, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
    }
    LODWORD(forceColorb) = Ragdoll->state.msec;
    LODWORD(fmtb) = Ragdoll->state.frames;
    Com_sprintf(dest, 0x100ui64, "state:%s frames:%i ms:%i", s_stateNames[Ragdoll->state.state], fmtb, forceColorb);
    __asm
    {
      vmovss  xmm2, dword ptr [r12]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+2C0h+var_288], xmm7
    }
    Physics_DrawDebugString(v12, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v148, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
      vmovss  xmm3, dword ptr [r13+1CB4h]
      vmovss  xmm1, dword ptr [r13+1CB8h]
      vcvtss2sd xmm3, xmm3, xmm3
      vcvtss2sd xmm1, xmm1, xmm1
      vmovq   r9, xmm3
      vmovsd  [rsp+2C0h+fmt], xmm1
    }
    Com_sprintf(dest, 0x100ui64, "pose controller weight:%.2f root control weight:%.2f", *(double *)&_XMM3, *(double *)&fmtc);
    __asm
    {
      vmovss  xmm0, dword ptr [r13+1CB4h]
      vcomiss xmm0, xmm10
    }
    v64 = &colorWhite;
    if ( !(v102 | v34) )
      v64 = &colorGreen;
    __asm
    {
      vmovss  [rsp+2C0h+var_288], xmm7
      vmovss  xmm2, dword ptr [r12]; y
      vmovss  xmm1, dword ptr [rbx]; x
    }
    Physics_DrawDebugString(v12, *(float *)&_XMM1, *(float *)&_XMM2, dest, v64, 0, 1, v149, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
    }
    if ( (Ragdoll->state.state != RAGDOLL_ACTIVITY_STATE_RUNNING || !Ragdoll_PoseValid(Ragdoll)) && (Ragdoll->state.state || Ragdoll_GetNumBones(Ragdoll) <= 0) )
      goto LABEL_95;
    __asm { vmovaps [rsp+2C0h+var_88+8], xmm9 }
    obj = Ragdoll_BodyDObj(Ragdoll);
    if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1132, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
      __debugbreak();
    if ( !obj->numModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1135, ASSERT_TYPE_ASSERT, "(obj->numModels > 0)", (const char *)&queryFormat, "obj->numModels > 0") )
      __debugbreak();
    v68 = (const char ***)obj->models;
    v69 = *v68;
    v70 = (const char **)(*v68)[78];
    if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1140, ASSERT_TYPE_ASSERT, "(ragdollAsset)", (const char *)&queryFormat, "ragdollAsset") )
      __debugbreak();
    Com_sprintf(dest, 0x100ui64, "xmodel:%s", *v69);
    __asm
    {
      vmovss  xmm2, dword ptr [r12]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+2C0h+var_288], xmm7
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v150, 0);
    __asm { vaddss  xmm0, xmm7, dword ptr [r12] }
    v74 = *v70;
    __asm { vmovss  dword ptr [r12], xmm0 }
    Com_sprintf(dest, 0x100ui64, "physics asset:%s", v74);
    __asm
    {
      vmovss  xmm2, dword ptr [r12]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+2C0h+var_288], xmm7
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v151, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
    }
    NumBones = Ragdoll_GetNumBones(Ragdoll);
    v78 = NumBones;
    Com_sprintf(dest, 0x100ui64, "bones:%i", NumBones);
    __asm
    {
      vmovss  xmm2, dword ptr [r12]; y
      vmovss  xmm1, dword ptr [rbx]; x
      vmovss  [rsp+2C0h+var_288], xmm7
    }
    Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v152, 0);
    __asm
    {
      vaddss  xmm0, xmm7, dword ptr [r12]
      vmovss  dword ptr [r12], xmm0
    }
    *(_QWORD *)boneHasBulletImpulse = 0i64;
    v167 = 0i64;
    v168 = 0i64;
    v169 = 0i64;
    v170 = 0i64;
    v171 = 0i64;
    v172 = 0i64;
    v173 = 0i64;
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
      goto LABEL_86;
    }
    if ( unsignedInt > s_ragdollDebugImpulseCount )
      unsignedInt = s_ragdollDebugImpulseCount;
    if ( !unsignedInt )
    {
LABEL_86:
      if ( v78 > 0 )
      {
        __asm
        {
          vaddss  xmm0, xmm11, dword ptr [rbx]
          vmovaps xmm3, xmm11; tabWidth
          vmovss  dword ptr [rsp+2C0h+fmt], xmm7
          vmovss  dword ptr [rbx], xmm0
        }
        Ragdoll_DebugDrawBoneHierarchy(scrPlace, _RBX, _R12, *(float *)&_XMM3, fmte, _R13, boneHasBulletImpulse, 0);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vsubss  xmm1, xmm0, xmm11
          vmovss  dword ptr [rbx], xmm1
        }
      }
      __asm { vmovss  xmm9, cs:__real@41200000 }
      v102 = 0;
      if ( ragdoll_debugDrawRootBounds->current.enabled )
      {
        RootOrigin = Ragdoll_GetRootOrigin(v40, &end);
        v102 = 0;
        if ( RootOrigin )
        {
          *(double *)&_XMM0 = DObjGetRadius(obj);
          __asm { vmovaps xmm1, xmm0; radius }
          CG_DebugSphere(&end, *(float *)&_XMM1, &colorPurple, 0, 0);
          _RAX = Ragdoll_GetPhysicsPoseBoneOrientations(_R13);
          __asm
          {
            vmovss  xmm0, dword ptr [rax+8]
            vsubss  xmm6, xmm0, dword ptr [r13+2A0Ch]
          }
          *(double *)&_XMM0 = DObjGetRadius(obj);
          __asm
          {
            vmaxss  xmm0, xmm0, xmm9
            vdivss  xmm1, xmm6, xmm0
            vcvtss2sd xmm3, xmm1, xmm1
            vcvtss2sd xmm2, xmm6, xmm6
            vmovq   r9, xmm3
            vmovsd  [rsp+2C0h+fmt], xmm2
          }
          Com_sprintf(dest, 0x100ui64, "%.2fR %.2f", *(double *)&_XMM3, *(double *)&fmtf);
          __asm { vmovss  xmm2, cs:__real@3e4ccccd; scale }
          CG_DebugString(&end, &colorWhite, *(float *)&_XMM2, dest, 0, 0);
        }
      }
      __asm { vcomiss xmm10, dword ptr [r13+1CB4h] }
      if ( v102 && Ragdoll_GetRootOrigin(v40, &end) )
      {
        __asm { vmovaps xmmword ptr [rsp+2C0h+var_78+8], xmm8 }
        *(double *)&_XMM0 = RagdollPoseController_GetWeight(&_R13->state.poseController);
        __asm { vmovaps xmm6, xmm0 }
        *(double *)&_XMM0 = RagdollPoseController_GetPositionControlWeight(&_R13->state.poseController);
        __asm
        {
          vmulss  xmm3, xmm6, cs:__real@43b40000; angle1
          vmovss  xmm1, cs:__real@41a00000; radius
          vmovaps xmm2, xmm10; angle0
          vmovaps xmm8, xmm0
        }
        CG_DebugArc(&end, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &colorPurple, 0, 0);
        __asm
        {
          vmulss  xmm3, xmm8, cs:__real@43b40000; angle1
          vmovaps xmm2, xmm10; angle0
          vmovaps xmm1, xmm9; radius
        }
        CG_DebugArc(&end, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, &colorOrange, 0, 0);
        __asm { vmovaps xmm8, xmmword ptr [rsp+2C0h+var_78+8] }
      }
      __asm { vmovaps xmm9, [rsp+2C0h+var_88+8] }
      goto LABEL_95;
    }
    __asm { vmovss  xmm6, cs:__real@3dcccccd }
    _R13 = 0x140000000ui64;
    while ( 1 )
    {
      if ( v18 > s_ragdollDebugImpulseCount )
      {
        LODWORD(forceColora) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1181, ASSERT_TYPE_ASSERT, "( ( bulletIndexOffset <= s_ragdollDebugImpulseCount ) )", "( bulletIndexOffset ) = %u", forceColora) )
          __debugbreak();
      }
      v85 = ((_BYTE)s_ragdollDebugImpulseCount - (_BYTE)v18) & 0x3F;
      _RBX = v85;
      if ( s_ragdollDebugImpulses[v85].ragdollHandle != v40 )
        goto LABEL_84;
      __asm { vucomiss xmm10, rva s_ragdollDebugImpulses.impulseMagnitude[r13+rbx*8] }
      if ( s_ragdollDebugImpulses[v85].ragdollHandle == v40 || s_ragdollDebugImpulses[v85].impulseType == NO_IMPULSE )
        goto LABEL_84;
      boneId = s_ragdollDebugImpulses[v85].boneId;
      if ( boneId >= v78 )
      {
        LODWORD(shadowa) = v78;
        LODWORD(forceColora) = boneId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1188, ASSERT_TYPE_ASSERT, "(unsigned)( bulletImpulse.boneId ) < (unsigned)( numBones )", "bulletImpulse.boneId doesn't index numBones\n\t%i not in [0, %i)", forceColora, shadowa) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm2, xmm6, rva s_ragdollDebugImpulses.impulseMagnitude[r13+rbx*8]
        vmulss  xmm0, xmm2, dword ptr rva s_ragdollDebugImpulses.impulseDirection[r13+rbx*8]
      }
      impulseType = (unsigned __int8)s_ragdollDebugImpulses[_RBX].impulseType;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rdi]
        vmulss  xmm0, xmm2, dword ptr (rva s_ragdollDebugImpulses.impulseDirection+4)[r13+rbx*8]
      }
      v93 = s_ragdollDebugImpulses[_RBX].boneId;
      __asm
      {
        vmovss  dword ptr [rbp+1C0h+end], xmm1
        vaddss  xmm1, xmm0, dword ptr [rdi+4]
        vmulss  xmm0, xmm2, dword ptr (rva s_ragdollDebugImpulses.impulseDirection+8)[r13+rbx*8]
      }
      boneHasBulletImpulse[v93] |= impulseType;
      __asm
      {
        vmovss  dword ptr [rbp+1C0h+end+4], xmm1
        vaddss  xmm1, xmm0, dword ptr [rdi+8]
        vmovss  dword ptr [rbp+1C0h+end+8], xmm1
      }
      v96 = impulseType - 1;
      if ( !v96 )
        break;
      if ( v96 == 1 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr cs:?colorLtRed@@3Tvec4_t@@B; vec4_t const colorLtRed
          vmovups xmm1, xmmword ptr cs:?colorRed@@3Tvec4_t@@B; vec4_t const colorRed
        }
LABEL_82:
        __asm
        {
          vmovups xmmword ptr [rbp+1C0h+var_200], xmm1
          vmovups xmmword ptr [rbp+1C0h+color], xmm0
        }
      }
      __asm { vmovss  dword ptr [rsp+2C0h+fmt], xmm6 }
      CL_AddDebugStarWithSize(&s_ragdollDebugImpulses[_RBX].impulsePosition, &color, 0, 0, fmtd);
      CG_DebugLine(&s_ragdollDebugImpulses[_RBX].impulsePosition, &end, &v165, 0, 0);
      v78 = NumBones;
LABEL_84:
      if ( ++v18 > unsignedInt )
      {
        _R12 = y;
        _R13 = Ragdoll;
        _RBX = x;
        goto LABEL_86;
      }
    }
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?colorLtGreen@@3Tvec4_t@@B; vec4_t const colorLtGreen
      vmovups xmm1, xmmword ptr cs:?colorGreen@@3Tvec4_t@@B; vec4_t const colorGreen
    }
    goto LABEL_82;
  }
LABEL_96:
  __asm { vmovaps xmm6, xmmword ptr [rsp+2C0h+var_58+8] }
  _R11 = &v178;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
  }
}

/*
==============
Ragdoll_DebugDrawBoneHierarchy
==============
*/

void __fastcall Ragdoll_DebugDrawBoneHierarchy(const ScreenPlacement *scrPlace, float *x, float *y, double tabWidth, float charHeight, Ragdoll *ragdoll, const unsigned __int8 *boneHasBulletImpulse, int currentBone)
{
  Bone *bones; 
  int BoneChildren; 
  int integer; 
  int v37; 
  unsigned __int8 v38; 
  RagdollPenetrationState penetrationState; 
  __int32 v51; 
  int v52; 
  const char *v53; 
  const char *v54; 
  const char *v62; 
  __int64 numBones; 
  __int64 i; 
  char *fmt; 
  float fmta; 
  __int64 forceColor; 
  double shadow; 
  float v156; 
  vec4_t quat; 
  vec3_t start; 
  vec4_t setColor; 
  vec3_t point; 
  vec3_t v163; 
  vec3_t end; 
  vec3_t outTransformedPoint; 
  vec3_t v166; 
  tmat33_t<vec3_t> axis; 
  int childIndices[6]; 
  char dest[256]; 

  __asm
  {
    vmovaps [rsp+320h+var_B0], xmm12
    vmovaps [rsp+320h+var_C0], xmm13
  }
  _R13 = x;
  __asm
  {
    vmovaps [rsp+320h+var_D0], xmm14
    vmovaps [rsp+320h+var_E0], xmm15
    vmovaps xmm12, xmm3
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 94, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  bones = ragdoll->state.bones;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1588, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  _RBX = Ragdoll_GetPrevBoneOrientations(ragdoll);
  if ( ragdoll == (Ragdoll *)-4016i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 723, ASSERT_TYPE_ASSERT, "(bones)", (const char *)&queryFormat, "bones") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 724, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  _R12 = &bones[currentBone];
  *(_QWORD *)point.v = 28i64 * currentBone;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+rbx]
    vmovss  dword ptr [rbp+220h+start], xmm0
    vmovss  xmm1, dword ptr [rax+rbx+4]
    vmovss  dword ptr [rbp+220h+start+4], xmm1
    vmovss  xmm0, dword ptr [rax+rbx+8]
    vmovss  dword ptr [rbp+220h+start+8], xmm0
  }
  QuatToAxis((const vec4_t *)((char *)&_RBX->orientation + *(_QWORD *)point.v), &axis);
  BoneChildren = Ragdoll_FindBoneChildren(ragdoll, currentBone, childIndices);
  __asm
  {
    vmovss  xmm14, dword ptr [r12+8]
    vmovss  xmm15, cs:__real@3f000000
  }
  if ( !BoneChildren )
    __asm { vmulss  xmm14, xmm14, xmm15 }
  __asm
  {
    vmulss  xmm1, xmm14, dword ptr [rbp+220h+axis]
    vaddss  xmm2, xmm1, dword ptr [rbp+220h+start]
    vmulss  xmm1, xmm14, dword ptr [rbp+220h+axis+4]
  }
  _EDI = 0;
  __asm
  {
    vmovss  dword ptr [rbp+220h+end], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbp+220h+start+4]
    vmulss  xmm1, xmm14, dword ptr [rbp+220h+axis+8]
    vmovss  dword ptr [rbp+220h+end+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbp+220h+start+8]
    vmovss  dword ptr [rbp+220h+end+8], xmm2
  }
  integer = ragdoll_debug_mode->current.integer;
  if ( !integer )
  {
    penetrationState = _R12->penetrationState;
    if ( penetrationState )
    {
      v51 = penetrationState - 1;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( v52 )
        {
          if ( v52 != 1 )
            goto LABEL_31;
          __asm { vmovups xmm0, cs:__xmm@3f800000000000003f8000003f800000 }
        }
        else
        {
          __asm { vmovups xmm0, cs:__xmm@3f800000000000003f23d70a3f800000 }
        }
      }
      else
      {
        __asm { vmovups xmm0, cs:__xmm@3f80000000000000000000003f800000 }
      }
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  v37 = integer - 1;
  if ( !v37 )
  {
    _RAX = s_ragdollColorModeTable;
    _RCX = 2 * (currentBone % 0x13ui64);
    __asm { vmovups xmm0, xmmword ptr [rax+rcx*8] }
LABEL_30:
    __asm { vmovups xmmword ptr [rbp+220h+setColor], xmm0 }
    goto LABEL_31;
  }
  if ( v37 != 1 )
    goto LABEL_31;
  v38 = boneHasBulletImpulse[currentBone];
  if ( !v38 )
  {
LABEL_29:
    __asm { vmovups xmm0, cs:__xmm@3f8000003f0000003f00000000000000 }
    goto LABEL_30;
  }
  __asm { vmovups xmm3, cs:__xmm@3f800000000000000000000000000000 }
  _EAX = v38 & 1;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, edi
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vmovups xmmword ptr [rbp+220h+setColor], xmm3
    vshufps xmm3, xmm3, xmm3, 55h ; 'U'
    vblendvps xmm0, xmm1, xmm3, xmm2
    vmovss  dword ptr [rbp+220h+setColor+4], xmm0
  }
  if ( (v38 & 2) != 0 )
    __asm { vmovss  dword ptr [rbp+220h+setColor], xmm1 }
LABEL_31:
  v53 = (char *)&queryFormat.fmt + 3;
  if ( _R12->hidden )
    v53 = " Hidden";
  v54 = SL_ConvertToString(ragdoll->boneNames[currentBone]);
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  qword ptr [rsp+320h+shadow], xmm0
  }
  LODWORD(forceColor) = _R12->animBone;
  LODWORD(fmt) = _R12->parentBone;
  Com_sprintf(dest, 0x100ui64, "Bone:%i Parent:%i AnimBone:%i Length:%.2f Name:%s%s", (unsigned int)currentBone, fmt, forceColor, shadow, v54, v53);
  _RBX = y;
  __asm
  {
    vmovss  xmm13, [rbp+220h+charHeight]
    vmovss  xmm1, dword ptr [r13+0]; x
    vmovss  xmm2, dword ptr [rbx]; y
    vmovss  [rsp+320h+var_2E8], xmm13
  }
  Physics_DrawDebugString(scrPlace, *(float *)&_XMM1, *(float *)&_XMM2, dest, &setColor, 0, 1, v156, 0);
  __asm
  {
    vaddss  xmm0, xmm13, dword ptr [rbx]
    vmovss  dword ptr [rbx], xmm0
  }
  if ( !_R12->hidden )
  {
    __asm
    {
      vmovaps [rsp+320h+var_50], xmm6
      vmovaps [rsp+320h+var_60], xmm7
      vmovaps [rsp+320h+var_70], xmm8
      vmovaps [rsp+320h+var_80], xmm9
    }
    CG_DebugLine(&start, &end, &setColor, 0, 0);
    v62 = SL_ConvertToString(ragdoll->boneNames[currentBone]);
    __asm { vmovss  xmm2, cs:textScale_0; scale }
    CL_AddDebugString(&start, &setColor, *(float *)&_XMM2, v62, 0, 0);
    _RBX = 0x140000000ui64;
    if ( ragdoll_debugDrawTargetPose->current.enabled && s_debugAnimPoseHandle == Ragdoll_GetRagdollHandle(ragdoll) )
    {
      __asm
      {
        vmovaps [rsp+320h+var_90], xmm10
        vmovaps [rsp+320h+var_A0], xmm11
      }
      _R12 = (char *)&s_debugAnimPose[0].orientation + *(_QWORD *)point.v;
      *(_QWORD *)point.v += s_debugAnimPose;
      _RBX = &ragdoll->state.animationRootRotation;
      if ( (vec4_t *)(*(_QWORD *)point.v + 12i64) == &quat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
        __debugbreak();
      if ( _RBX == &quat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
        __debugbreak();
      __asm
      {
        vmovss  xmm9, dword ptr [rbx+0Ch]
        vmovss  xmm10, dword ptr [r12]
        vmovss  xmm5, dword ptr [r12+0Ch]
        vmovss  xmm6, dword ptr [rbx]
        vmovss  xmm11, dword ptr [r12+8]
        vmovss  xmm7, dword ptr [rbx+4]
        vmovss  xmm4, dword ptr [r12+4]
        vmovss  xmm8, dword ptr [rbx+8]
        vmulss  xmm1, xmm6, xmm5
        vmulss  xmm0, xmm10, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm11
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm8, xmm4
        vsubss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rsp+320h+quat], xmm2
        vmulss  xmm0, xmm11, xmm6
        vmulss  xmm1, xmm4, xmm9
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm5
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm8, xmm10
        vaddss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rsp+320h+quat+4], xmm2
        vmulss  xmm0, xmm11, xmm9
        vmulss  xmm1, xmm4, xmm6
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm10
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm8, xmm5
        vaddss  xmm2, xmm3, xmm0
        vmulss  xmm0, xmm6, xmm10
        vmulss  xmm1, xmm5, xmm9
        vmovss  dword ptr [rsp+320h+quat+8], xmm2
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm4, xmm7
        vsubss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm8, xmm11
        vsubss  xmm2, xmm3, xmm0
        vmovss  dword ptr [rsp+320h+quat+0Ch], xmm2
      }
      QuatTrans_TransformPoint(&ragdoll->state.animationRootRotation, &ragdoll->state.animationRootTranslation, *(const vec3_t **)point.v, &outTransformedPoint);
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vmovss  dword ptr [rbp+220h+var_270+4], xmm9
        vmovss  dword ptr [rbp+220h+var_270+8], xmm9
        vmovss  dword ptr [rbp+220h+var_270], xmm14
      }
      QuatTrans_TransformPoint(&quat, &outTransformedPoint, &v163, &v166);
      CG_DebugLine(&outTransformedPoint, &v166, &colorGreen, 0, 0);
      __asm { vmovaps xmm11, [rsp+320h+var_A0] }
      _RBX = 0x140000000ui64;
      __asm { vmovaps xmm10, [rsp+320h+var_90] }
    }
    if ( ragdoll_debugDrawInitialVelocities->current.enabled && s_debugInitialVelocityHandle == Ragdoll_GetRagdollHandle(ragdoll) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+220h+end]
        vaddss  xmm3, xmm0, dword ptr [rbp+220h+start]
        vmovss  xmm1, dword ptr [rbp+220h+end+4]
        vaddss  xmm8, xmm1, dword ptr [rbp+220h+start+4]
        vmulss  xmm0, xmm3, xmm15
        vmovss  dword ptr [rbp+220h+point], xmm0
        vmovss  xmm0, dword ptr [rbp+220h+end+8]
        vaddss  xmm2, xmm0, dword ptr [rbp+220h+start+8]
        vmulss  xmm7, xmm2, xmm15
      }
      _RAX = 3i64 * currentBone;
      __asm
      {
        vmovss  xmm5, dword ptr rva s_debugInitialVelocity[rbx+rax*4]
        vmovss  xmm4, dword ptr (rva s_debugInitialVelocity+4)[rbx+rax*4]
        vmovss  xmm6, dword ptr (rva s_debugInitialVelocity+8)[rbx+rax*4]
        vaddss  xmm0, xmm5, xmm3
        vmulss  xmm2, xmm0, xmm15
        vaddss  xmm3, xmm4, xmm8
        vmulss  xmm0, xmm3, xmm15
        vmovss  dword ptr [rbp+220h+var_270], xmm2
        vmulss  xmm2, xmm6, xmm15
        vaddss  xmm3, xmm2, xmm7
        vmovss  dword ptr [rbp+220h+var_270+4], xmm0
        vmulss  xmm0, xmm5, xmm5
        vmovss  dword ptr [rbp+220h+var_270+8], xmm3
        vmulss  xmm2, xmm6, xmm6
        vmulss  xmm1, xmm8, xmm15
        vmulss  xmm4, xmm4, xmm4
        vaddss  xmm3, xmm4, xmm0
        vaddss  xmm3, xmm3, xmm2
        vmulss  xmm0, xmm3, cs:__real@3751b717; val
        vmovss  dword ptr [rbp+220h+point+4], xmm1
        vmovaps xmm2, xmm15; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovss  [rbp+220h+var_278], xmm7
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      _RAX = &quat;
      __asm
      {
        vaddss  xmm1, xmm0, xmm15
        vsubss  xmm2, xmm15, xmm0
        vmovss  xmm0, cs:__real@3f800000
        vmovss  dword ptr [rsp+320h+quat+0Ch], xmm0
        vmovss  dword ptr [rsp+320h+quat], xmm1
        vmovss  dword ptr [rsp+320h+quat+4], xmm2
      }
      if ( s_debugInitialVelocityHasImpact[currentBone] )
        __asm { vmovss  dword ptr [rsp+320h+quat+8], xmm2 }
      else
        __asm { vmovss  dword ptr [rsp+320h+quat+8], xmm1 }
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rsp+320h+quat], xmm0
      }
      CG_DebugLine(&point, &v163, &quat, 0, 0);
    }
    __asm
    {
      vmovaps xmm8, [rsp+320h+var_70]
      vmovaps xmm7, [rsp+320h+var_60]
      vmovaps xmm6, [rsp+320h+var_50]
      vmovaps xmm9, [rsp+320h+var_80]
    }
  }
  __asm
  {
    vmovaps xmm15, [rsp+320h+var_E0]
    vmovaps xmm14, [rsp+320h+var_D0]
    vaddss  xmm0, xmm12, dword ptr [r13+0]
    vmovss  dword ptr [r13+0], xmm0
  }
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  numBones = ragdoll->state.numBones;
  if ( numBones > 0 )
  {
    for ( i = 0i64; i < numBones; ++i )
    {
      if ( i != currentBone && bones->parentBone == currentBone )
      {
        __asm
        {
          vmovaps xmm3, xmm12; tabWidth
          vmovss  dword ptr [rsp+320h+fmt], xmm13
        }
        Ragdoll_DebugDrawBoneHierarchy(scrPlace, _R13, y, *(float *)&_XMM3, fmta, ragdoll, boneHasBulletImpulse, _EDI);
      }
      ++_EDI;
      ++bones;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vsubss  xmm1, xmm0, xmm12
    vmovss  dword ptr [r13+0], xmm1
    vmovaps xmm12, [rsp+320h+var_B0]
    vmovaps xmm13, [rsp+320h+var_C0]
  }
}

/*
==============
Ragdoll_DisablePoseController
==============
*/

void __fastcall Ragdoll_DisablePoseController(int ragdollHandle, double blendOutTime)
{
  Ragdoll *Ragdoll; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1949, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( RagdollPoseController_IsActive(&Ragdoll->state.poseController) )
  {
    __asm
    {
      vmovaps xmm2, xmm6; duration
      vxorps  xmm1, xmm1, xmm1; targetWeight
      vmovaps xmm6, [rsp+48h+var_18]
    }
    RagdollPoseController_BlendWeight(&Ragdoll->state.poseController, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    Ragdoll->poseControllerEnabledAtCreate = 0;
  }
}

/*
==============
Ragdoll_DisablePoseControllerRoot
==============
*/

void __fastcall Ragdoll_DisablePoseControllerRoot(int ragdollHandle, double blendOutTime)
{
  Ragdoll *Ragdoll; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1965, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( RagdollPoseController_IsActive(&Ragdoll->state.poseController) )
  {
    __asm
    {
      vmovaps xmm2, xmm6; duration
      vxorps  xmm1, xmm1, xmm1; targetWeight
      vmovaps xmm6, [rsp+48h+var_18]
    }
    RagdollPoseController_BlendRootControlWeight(&Ragdoll->state.poseController, *(float *)&_XMM1, *(float *)&_XMM2);
  }
  else
  {
    __asm { vmovaps xmm6, [rsp+48h+var_18] }
    Ragdoll->poseControllerRootControlEnabledAtCreate = 0;
  }
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
    __asm { vmovss  xmm1, cs:__real@3f800000; targetWeight }
    Ragdoll->state.animationPoseRequestTimestamp[Ragdoll->state.totalFrames & 1] = Ragdoll->state.totalFrames + 1;
    _RAX = ragdoll_poseController_defaultBlendDuration;
    __asm { vmovss  xmm2, dword ptr [rax+28h]; duration }
    RagdollPoseController_BlendWeight(&Ragdoll->state.poseController, *(float *)&_XMM1, *(float *)&_XMM2);
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
  __int64 v6; 
  Ragdoll *Ragdoll; 
  bool result; 
  unsigned int NumBones; 
  const BoneOrientation *PrevBoneOrientations; 
  __int64 v19; 
  __int64 v20; 
  double v21; 
  double v22; 

  _RBP = outRadius;
  v6 = boneIndex;
  _RBX = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !_RBX )
    goto LABEL_30;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v19) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v19, 64) )
      __debugbreak();
  }
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !Ragdoll->allocated )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1446, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )") )
      __debugbreak();
  }
  result = Ragdoll_PoseValid(_RBX);
  if ( result )
  {
    NumBones = Ragdoll_GetNumBones(_RBX);
    if ( (unsigned int)v6 >= NumBones )
    {
      LODWORD(v20) = NumBones;
      LODWORD(v19) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1456, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( numBones )", "boneIndex doesn't index numBones\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1588, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    PrevBoneOrientations = Ragdoll_GetPrevBoneOrientations(_RBX);
    if ( !PrevBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1461, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
      __debugbreak();
    __asm { vxorps  xmm1, xmm1, xmm1 }
    outOrigin->v[0] = PrevBoneOrientations[v6].origin.v[0];
    outOrigin->v[1] = PrevBoneOrientations[v6].origin.v[1];
    outOrigin->v[2] = PrevBoneOrientations[v6].origin.v[2];
    _RAX = 48 * v6;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rbx+0FB8h]
      vmulss  xmm2, xmm0, cs:__real@3f000000
      vcomiss xmm2, xmm1
      vmovss  dword ptr [rbp+0], xmm2
    }
    if ( __CFSHL__(3 * v6, 4) || 48 * v6 == 0 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm2, xmm2
        vmovsd  [rsp+68h+var_28], xmm0
        vmovsd  [rsp+68h+var_30], xmm1
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1467, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( outRadius )", "%s < %s\n\t%g, %g", "0.0f", "outRadius", v21, v22) )
        __debugbreak();
    }
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
  int v10; 
  __int64 v11; 
  __int64 v12; 
  scr_string_t *i; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  double v23; 
  double v24; 

  _RBP = outRadius;
  _RDI = ragdoll;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1266, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1267, ASSERT_TYPE_ASSERT, "(boneName)", (const char *)&queryFormat, "boneName") )
    __debugbreak();
  if ( !*boneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1268, ASSERT_TYPE_ASSERT, "(*boneName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "*boneName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !Ragdoll_PoseValid(_RDI) )
    return 0;
  NumBones = Ragdoll_GetNumBones(_RDI);
  v10 = 0;
  if ( NumBones <= 0 )
    return 0;
  v11 = 0i64;
  v12 = NumBones;
  for ( i = _RDI->boneNames; *i != *boneName; ++i )
  {
    ++v10;
    if ( ++v11 >= v12 )
      return 0;
  }
  if ( v10 < 0 )
    return 0;
  if ( !_RDI )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1588, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1507, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
  }
  v15 = (_RDI->state.totalFrames & 1) == 0;
  v16 = (__int64)_RDI->state.boneOrientations[v15];
  if ( (const Ragdoll *)((char *)_RDI + v15 * 1792) == (const Ragdoll *)-388i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1294, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
    __debugbreak();
  v17 = 28i64 * v10;
  __asm { vxorps  xmm1, xmm1, xmm1 }
  outOrigin->v[0] = *(float *)(v17 + v16);
  outOrigin->v[1] = *(float *)(v17 + v16 + 4);
  outOrigin->v[2] = *(float *)(v17 + v16 + 8);
  _RAX = 48i64 * v10;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+rdi+0FB8h]
    vmulss  xmm2, xmm0, cs:__real@3f000000
    vcomiss xmm2, xmm1
    vmovss  dword ptr [rbp+0], xmm2
  }
  if ( __CFSHL__(3i64 * v10, 4) || _RAX == 0 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm2, xmm2
      vmovsd  [rsp+68h+var_28], xmm0
      vmovsd  [rsp+68h+var_30], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1300, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( outRadius )", "%s < %s\n\t%g, %g", "0.0f", "outRadius", v23, v24) )
      __debugbreak();
  }
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
  const DObj *v16; 
  char v17; 
  bool v18; 

  _RSI = outOrigin;
  _RBX = ragdoll;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1312, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  result = Ragdoll_PoseValid(_RBX);
  if ( result )
  {
    __asm
    {
      vmovaps [rsp+98h+var_38], xmm7
      vmovaps [rsp+98h+var_48], xmm8
      vmovaps [rsp+98h+var_58], xmm9
      vmovaps [rsp+98h+var_68], xmm10
    }
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1588, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    _RDI = Ragdoll_GetPrevBoneOrientations(_RBX);
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1322, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
      __debugbreak();
    __asm
    {
      vmovss  xmm8, dword ptr [rdi]
      vmovss  xmm9, dword ptr [rdi+4]
      vmovss  xmm10, dword ptr [rdi+8]
      vmovss  xmm7, dword ptr [rbx+2A0Ch]
    }
    v16 = Ragdoll_BodyDObj(_RBX);
    v17 = 0;
    v18 = v16 == NULL;
    if ( v16 )
    {
      *(double *)&_XMM0 = DObjGetRadius(v16);
      __asm { vmaxss  xmm1, xmm0, cs:__real@41200000 }
    }
    else
    {
      __asm { vmovss  xmm1, cs:__real@41200000 }
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+8]
      vmulss  xmm4, xmm1, cs:__real@bd4ccccd
      vmulss  xmm3, xmm1, cs:__real@3f000000
      vmulss  xmm5, xmm1, cs:__real@3e4ccccd
      vsubss  xmm2, xmm0, xmm7
      vcomiss xmm2, xmm4
      vmovaps [rsp+98h+var_28], xmm6
    }
    if ( v17 )
    {
      __asm { vsubss  xmm0, xmm4, xmm2 }
    }
    else
    {
      __asm { vcomiss xmm2, xmm3 }
      if ( v17 | v18 )
      {
LABEL_19:
        __asm { vmovaps xmm10, [rsp+98h+var_68] }
        result = 1;
        __asm
        {
          vmovaps xmm6, [rsp+98h+var_28]
          vmovss  dword ptr [rsi], xmm8
          vmovaps xmm8, [rsp+98h+var_48]
          vmovss  dword ptr [rsi+4], xmm9
          vmovaps xmm9, [rsp+98h+var_58]
          vmovss  dword ptr [rsi+8], xmm7
          vmovaps xmm7, [rsp+98h+var_38]
        }
        return result;
      }
      __asm { vsubss  xmm0, xmm2, xmm3 }
    }
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovaps xmm2, xmm6; max
      vxorps  xmm1, xmm1, xmm1; min
      vdivss  xmm0, xmm0, xmm5; val
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmulss  xmm2, xmm1, xmm7
      vmulss  xmm0, xmm10, xmm0
      vaddss  xmm7, xmm2, xmm0
    }
    goto LABEL_19;
  }
  return result;
}

/*
==============
Ragdoll_GetRootRadius
==============
*/

float __fastcall Ragdoll_GetRootRadius(int ragdollHandle, double _XMM1_8)
{
  Ragdoll *Ragdoll; 
  bool v6; 
  bool v7; 
  __int64 v14; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !Ragdoll_GetRagdoll(ragdollHandle) )
    goto LABEL_12;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v14) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v14, 64) )
      __debugbreak();
  }
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  v6 = !Ragdoll->allocated;
  if ( !Ragdoll->allocated )
  {
LABEL_12:
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1415, ASSERT_TYPE_ASSERT, "(ragdoll && Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "ragdoll && Ragdoll_IsAllocated( ragdollHandle )");
    v6 = !v7;
    if ( v7 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0FB8h]
    vmulss  xmm6, xmm0, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm6, xmm1
  }
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1419, ASSERT_TYPE_ASSERT, "(rootBoneRadius > 0.0f)", (const char *)&queryFormat, "rootBoneRadius > 0.0f") )
    __debugbreak();
  __asm
  {
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
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

void __fastcall Ragdoll_InitDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v12; 
  const dvar_t *v21; 
  const dvar_t *v34; 
  const dvar_t *v44; 
  const dvar_t *v48; 
  const dvar_t *v52; 
  const dvar_t *v56; 
  const dvar_t *v61; 
  const dvar_t *v65; 
  const dvar_t *v69; 
  const dvar_t *v76; 
  const dvar_t *v80; 
  const dvar_t *v87; 
  const dvar_t *v91; 
  const dvar_t *v98; 
  const dvar_t *v108; 
  const dvar_t *v118; 
  const dvar_t *v125; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps [rsp+88h+var_28], xmm10
    vmovaps [rsp+88h+var_38], xmm12
    vmovaps [rsp+88h+var_48], xmm13
    vmovaps [rsp+88h+var_58], xmm14
  }
  Dvar_BeginPermanentRegistration();
  ragdoll_enable = Dvar_RegisterBool("LNLRQKMPKS", 1, 0, "Turn on ragdoll death animations");
  __asm
  {
    vmovss  xmm14, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3f333333; value
  }
  ragdoll_max_simulating = Dvar_RegisterInt("LKLQPTQLQL", 64, 0, 64, 0, "Max number of simultaneous active ragdolls - script controllable, within limit 0-max");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v12 = Dvar_RegisterFloat("NLQNMMPMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Fixed pool memory threshold beyond which, we don't create ragdolls");
  __asm { vmovss  xmm3, cs:__real@40a00000; max }
  ragdoll_fixedMemoryThreshold = v12;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
    vmovss  xmm13, cs:__real@461c4000
    vmovss  xmm12, cs:__real@43480000
  }
  ragdoll_constraintTightenTime = Dvar_RegisterFloat("MSPKRKOSMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Time over which we tighten the ragdoll constraints");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  v21 = Dvar_RegisterFloat("LNNONMKKLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Limit at which to cap initial linear speed");
  __asm { vmovss  xmm1, cs:__real@43fa0000; value }
  ragdoll_initialLinSpeedCap = v21;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_initialLinSpeedCapMovingPlatform = Dvar_RegisterFloat("LSONQSQRTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Limit at which to cap initial linear speed when a ragdoll is created on a moving platform.");
  ragdoll_debug = Dvar_RegisterBool("MKSLONKMNM", 0, 4u, "Debug draw general info about the ragdoll system");
  ragdoll_debug_id = Dvar_RegisterInt("MQRQNPTTNO", -1, -1, 64, 0, "Debug draw info about a specific ragdoll");
  ragdoll_debug_mode = Dvar_RegisterEnum("NRTQNPKQMO", s_Ragdoll_DebugModeNames, 0, 4u, "Show physics memory usage");
  ragdoll_debug_latest = Dvar_RegisterBool("OMKRNLRKKK", 0, 0, "Draw debug info about most recently created ragdoll (overrides ragdoll_debug_id)");
  ragdoll_debugDrawTargetPose = Dvar_RegisterBool("NRQSSMLTNM", 1, 4u, "Draw target animation pose when drawing debug info for specific ragdoll");
  ragdoll_debugDrawRootBounds = Dvar_RegisterBool("LLONLSMQSN", 0, 4u, "Draw ragdoll DObj bounds centred at root origin. Also displays distance of hips from reference animation root height.");
  ragdoll_debugDrawBulletImpulses = Dvar_RegisterInt("LSNLSOQNNO", 0, 0, 64, 0, "Number of drawn latest bullet impulses applied to ragdoll. Setting to 0 will clear cache of impulses.");
  __asm { vmovss  xmm1, cs:__real@460ca000; value }
  ragdoll_debugDrawInitialVelocities = Dvar_RegisterBool("MTQSMTNOTP", 1, 4u, "Debug draw initial velocities when drawing debug info for a specific ragdoll");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_poseController_distance = Dvar_RegisterFloat("QQPPQOOMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x44u, "Max distance threshold for pose controller");
  ragdoll_poseController_use = Dvar_RegisterBool("NTSKRKRTTO", 1, 0, "Enable ragdoll pose controller");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  ragdoll_poseController_weight = Dvar_RegisterFloat("MRSSTQPRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Overrides final pose controller weight - 0 = disable (pure ragdoll)");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v34 = Dvar_RegisterFloat("MMNMNMQQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Scales bone weight");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  ragdoll_poseController_boneWeight = v34;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_poseController_hierarchyGain = Dvar_RegisterFloat("NKMNTQORSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Controls target pose space when root control is inactive: 0 = world, 1 = local");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  ragdoll_poseController_velocityDamping = Dvar_RegisterFloat("NPLRLMRLOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Amount of damping to apply to current body velocities (0 = no damping)");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v44 = Dvar_RegisterFloat("OLKMSPPNPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Acceleration gain");
  __asm { vmovss  xmm1, cs:__real@3f19999a; value }
  ragdoll_poseController_accelerationGain = v44;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v48 = Dvar_RegisterFloat("LKLMPOLMKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Velocity gain");
  __asm { vmovss  xmm1, cs:__real@3cf5c28f; value }
  ragdoll_poseController_velocityGain = v48;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v52 = Dvar_RegisterFloat("NTSLLQMPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Position gain");
  __asm
  {
    vmovss  xmm3, cs:__real@459c4000; max
    vmovss  xmm1, cs:__real@42480000; value
  }
  ragdoll_poseController_positionGain = v52;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v56 = Dvar_RegisterFloat("MPLMRNSMPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Maximum linear velocity");
  __asm
  {
    vmovss  xmm10, cs:__real@41200000
    vmovss  xmm1, cs:__real@3fe66666; value
  }
  ragdoll_poseController_positionMaxLinearVelocity = v56;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v61 = Dvar_RegisterFloat("NTQMLSQPRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Maximum angular velocity");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  ragdoll_poseController_positionMaxAngularVelocity = v61;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v65 = Dvar_RegisterFloat("MSOLTLOLMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Snap gain, used when ragdoll is close to target pose");
  __asm { vmovss  xmm3, cs:__real@459c4000; max }
  ragdoll_poseController_snapGain = v65;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  v69 = Dvar_RegisterFloat("NKKNMPML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max linear velocity when snapping");
  __asm { vmovss  xmm1, cs:__real@3e99999a; value }
  ragdoll_poseController_snapMaxLinearVelocity = v69;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_poseController_snapMaxAngularVelocity = Dvar_RegisterFloat("MRNKKPSNTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Max angular velocity when snapping");
  __asm
  {
    vmovss  xmm3, cs:__real@40800000; max
    vmovss  xmm1, cs:__real@40000000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v76 = Dvar_RegisterFloat("LMLLQQNKMT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Maximum distance inside which snap is active");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  ragdoll_poseController_snapMaxLinearDistance = v76;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v80 = Dvar_RegisterFloat("NPMRLRKQPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Maximum angular distance inside which snap is active");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  ragdoll_poseController_snapMaxAngularDistance = v80;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_poseController_defaultBlendDuration = Dvar_RegisterFloat("MPOPNKMRNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Blend duration to use when transitioning from animation driven ragdoll to pure ragdoll");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v87 = Dvar_RegisterFloat("MMQKNLTLML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Length of time controller will drive ragdoll towards animation pose after ragdoll is activated");
  __asm
  {
    vmovss  xmm3, cs:__real@41a00000; max
    vmovss  xmm1, cs:__real@40a00000; value
  }
  ragdoll_poseController_defaultControlDuration = v87;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v91 = Dvar_RegisterFloat("LOQORSSSRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Maximum length of time that the pose controller will remain active");
  __asm { vmovss  xmm1, cs:__real@3e4ccccd; value }
  ragdoll_poseController_maxControlDuration = v91;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_poseController_defaultRootControlDuration = Dvar_RegisterFloat("LRORRNSSLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Length of time that root bone will influence target pose. After this the ragdoll will fall freely.");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@42480000; value
  }
  ragdoll_max_bullet_forces_per_bone = Dvar_RegisterInt("MPKSLRQOSS", 1, 0, 100, 0, "Maximum bullet hits per frame per ragdoll bone allowed. Mostly used to control the bullet effect of spread weapons like shotguns.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v98 = Dvar_RegisterFloat("PTOORQNRP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Apply radius explosion forces to ragdolls as special full body force when explosion radius is larger than this value.");
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm1, cs:__real@40a00000; value
  }
  ragdoll_fullBodyExplodeMinRadius = v98;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  ragdoll_fullBodyExplodeForceScale = Dvar_RegisterFloat("MLKMSNLRTQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "When applying special full body radius explosion force, scale force by this value.");
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; max
    vmovss  xmm1, cs:__real@3f4ccccd; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_explode_upbias = Dvar_RegisterFloat("LTMOPKKPNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Upwards bias applied to ragdoll explosion effects.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  v108 = Dvar_RegisterFloat("QLOKNSPMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale up or down the effect of physics jitter on ragdolls");
  __asm
  {
    vmovss  xmm2, cs:__real@3dcccccd; min
    vmovss  xmm1, cs:__real@3f99999a; value
  }
  ragdoll_jitter_scale = v108;
  __asm { vmovaps xmm3, xmm10; max }
  ragdoll_self_collision_scale = Dvar_RegisterFloat("OKPQTPLMLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale the size of the collision capsules used to prevent ragdoll limbs from interpenetrating");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  ragdoll_max_stretch_pct = Dvar_RegisterFloat("MTQQKTSSNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Force ragdoll limbs to not stretch more than this percentage in one frame");
  __asm { vmovss  xmm1, cs:__real@40000000; value }
  ragdoll_stretch_iters = Dvar_RegisterInt("MNPROQLLPQ", 10, 1, 100, 0, "Iterations to run the alternate limb solver");
  __asm
  {
    vmovaps xmm3, xmm12; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v118 = Dvar_RegisterFloat("MMRKRKMLMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Minimum squared speed a ragdoll needs to be moving before it will shut down due to time");
  __asm { vmovss  xmm1, cs:__real@3f6e147b; value }
  ragdoll_idle_min_velsq = v118;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_apply_velocity_falloff_rate = Dvar_RegisterFloat("MNNKSLTOSR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Rate at which velocity application falls off for each conected bone when directly applied to a ragdoll bone.");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  v125 = Dvar_RegisterFloat("MTLMNTTKSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Ragdoll ejection velocity target when entire ragdoll is considered penetrating");
  __asm { vmovss  xmm1, cs:__real@42400000; value }
  ragdoll_ejectionVelocityTargetRoot = v125;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_ejectionVelocityTarget = Dvar_RegisterFloat("OMPQOOSPTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Ragdoll ejection velocity target when part of a ragdoll is considered penetrating");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@43f00000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  ragdoll_ejectionImpulseLimit = Dvar_RegisterFloat("LMRPSQSPRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Ragdoll ejection max impulse");
  ragdoll_ejectionFullBodyTryLength = Dvar_RegisterInt("LKTKOTLORM", 120, 0, 10000, 0, "Number of frames to try and solve a fully penetrating ragdoll before dropping to a periodic solve");
  ragdoll_ejectionFullBodyTryPeriod = Dvar_RegisterInt("NQSOTKOSNR", 60, 0, 1000, 0, "Number of frames to wait between periodic solves of fully penetrating ragdolls");
  ragdoll_debugDisplayInitialPose = Dvar_RegisterBool("LRPNTNOMKP", 0, 4u, "Debug draw data about the initial pose");
  ragdoll_debugInitialPose = Dvar_RegisterBool("RSTLLKPRP", 0, 4u, "Debug draw errors detected during initial pose");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm14; value
  }
  ragdoll_animNodeOverrideWeight = Dvar_RegisterFloat("OQTMLQPLK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Overrides weight of ragdoll animation node");
  ragdoll_loosenConstraintsDuringAnimation = Dvar_RegisterBool("RKRNOKLS", 1, 4u, "Loosen constraints whilst ragdoll is being animated by the pose controller");
  ragdoll_tightenConstraintsAfterAnimation = Dvar_RegisterBool("PKKTPMKOS", 0, 4u, "Tighten constraints after ragdoll is no longer being animated by the pose controller");
  ragdoll_printAnimNotifies = Dvar_RegisterBool("LNRTRMKNRK", 0, 0, "Print name of animation to console each time a ragdoll notify is handled.");
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_18]
    vmovaps xmm10, [rsp+88h+var_28]
    vmovaps xmm12, [rsp+88h+var_38]
    vmovaps xmm13, [rsp+88h+var_48]
    vmovaps xmm14, [rsp+88h+var_58]
  }
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
  __int64 numBones; 
  __int64 v8; 
  scr_string_t *boneNames; 
  const char *CString; 
  __int64 v11; 
  __int64 v12; 
  int p; 

  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 669, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v11) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 670, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v11, 64) )
      __debugbreak();
  }
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v12) = 64;
    LODWORD(v11) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( !Ragdoll->allocated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 671, ASSERT_TYPE_ASSERT, "(Ragdoll_IsAllocated( ragdollHandle ))", (const char *)&queryFormat, "Ragdoll_IsAllocated( ragdollHandle )") )
    __debugbreak();
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 674, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  _RSI = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 678, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  _RSI->hitLocation = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(&save->memFile);
  __asm { vmovss  dword ptr [rsi+138h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(&save->memFile);
  __asm { vmovss  dword ptr [rsi+13Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(&save->memFile);
  __asm { vmovss  dword ptr [rsi+140h], xmm0 }
  MemFile_ReadData(&save->memFile, 0x100ui64, _RSI->xmodelAtCreate);
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  _RSI->immediatePlayerRagdoll = p;
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  _RSI->poseControllerEnabledAtCreate = p;
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  _RSI->poseControllerRootControlEnabledAtCreate = p;
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  _RSI->spawnedRestFx = p;
  SaveMemory_LoadRead(&_RSI->state, 13528, save);
  MemFile_ReadData(&save->memFile, 1ui64, &p);
  numBones = _RSI->state.numBones;
  _RSI->penetrating = p;
  if ( (int)numBones > 64 )
  {
    LODWORD(v11) = numBones;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 697, ASSERT_TYPE_ASSERT, "( ( numBones <= 64 ) )", "( numBones ) = %i", v11) )
      __debugbreak();
  }
  v8 = numBones;
  if ( (int)numBones > 0 )
  {
    boneNames = _RSI->boneNames;
    do
    {
      CString = MemFile_ReadCString(&save->memFile);
      *boneNames++ = SL_GetString(CString, 0);
      --v8;
    }
    while ( v8 );
  }
  _RSI->state.loadedState = _RSI->state.state;
  _RSI->state.state = RAGDOLL_ACTIVITY_STATE_JUST_LOADED;
  _RSI->state.physicsInstanceId = -1;
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
  MemoryFile *v4; 
  Ragdoll *Ragdoll; 
  RagdollState *p_state; 
  char v7; 
  int v8; 
  RagdollActivityState state; 
  unsigned int physicsInstanceId; 
  unsigned int v11; 
  int NumBones; 
  hknpBodyId v14; 
  bool IsRigidBodyActive; 
  __int64 v23; 
  __int64 v25; 
  scr_string_t *boneNames; 
  const char *v27; 
  __int64 v28; 
  __int64 v29; 
  char v30[8]; 
  hknpBodyId p; 
  __int64 v32; 
  Ragdoll *p_z; 
  __int64 v34; 
  MemoryFile *v35; 
  hkVector4f linVel; 
  hkVector4f angVel; 

  v4 = memFile;
  v35 = memFile;
  if ( !ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 593, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v28) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 594, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v28, 64) )
      __debugbreak();
  }
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 597, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  Ragdoll = Ragdoll_GetRagdoll(ragdollHandle);
  if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 601, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  p.m_serialAndIndex = Ragdoll->hitLocation;
  MemFile_WriteData(v4, 4ui64, &p);
  MemFile_WriteData(v4, 0xCui64, &Ragdoll->impactVector);
  MemFile_WriteData(v4, 0x100ui64, Ragdoll->xmodelAtCreate);
  v30[0] = Ragdoll->immediatePlayerRagdoll;
  MemFile_WriteData(v4, 1ui64, v30);
  v30[0] = Ragdoll->poseControllerEnabledAtCreate;
  MemFile_WriteData(v4, 1ui64, v30);
  v30[0] = Ragdoll->poseControllerRootControlEnabledAtCreate;
  MemFile_WriteData(v4, 1ui64, v30);
  v30[0] = Ragdoll->spawnedRestFx;
  MemFile_WriteData(v4, 1ui64, v30);
  p_state = &Ragdoll->state;
  v7 = 0;
  v8 = 3 * Ragdoll->localClientNum + 3;
  state = Ragdoll->state.state;
  if ( state == RAGDOLL_ACTIVITY_STATE_JUST_LOADED )
  {
    v7 = 1;
    p_state->state = Ragdoll->state.loadedState;
  }
  else if ( state == RAGDOLL_ACTIVITY_STATE_RUNNING )
  {
    physicsInstanceId = Ragdoll->state.physicsInstanceId;
    if ( physicsInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 628, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    v11 = 0;
    NumBones = Ragdoll_GetNumBones(Ragdoll);
    v34 = NumBones;
    if ( NumBones > 0 )
    {
      __asm
      {
        vmovaps [rsp+0E8h+var_48], xmm6
        vmovss  xmm6, cs:__real@42000000
      }
      p_z = (Ragdoll *)&Ragdoll->state.loadedPhysicsLinVels[0].z;
      v32 = 0i64;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v29) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v29) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(v29) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v29) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v29) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v29) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v29) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v29) )
            __debugbreak();
        }
        v14.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&p, (const Physics_WorldId)v8, physicsInstanceId, v11)->m_serialAndIndex;
        if ( (v14.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 636, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v29) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v29) )
            __debugbreak();
        }
        if ( (v14.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v29) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v29) )
            __debugbreak();
        }
        HavokPhysics_GetRigidBodyLinAngVel((const Physics_WorldId)v8, v14, &linVel, &angVel);
        _RDI = (__int64)p_z;
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rsp+0E8h+linVel.m_quad+4]
          vmulss  xmm1, xmm6, dword ptr [rsp+0E8h+linVel.m_quad]
          vmulss  xmm2, xmm6, dword ptr [rsp+0E8h+linVel.m_quad+8]
          vmovss  dword ptr [rdi-4], xmm0
          vmovss  xmm0, dword ptr [rsp+0E8h+angVel.m_quad]
          vmovss  dword ptr [rdi-8], xmm1
          vmovss  xmm1, dword ptr [rsp+0E8h+angVel.m_quad+4]
          vmovss  dword ptr [rdi], xmm2
          vmovss  dword ptr [rdi+2F8h], xmm0
          vmovss  xmm0, dword ptr [rsp+0E8h+angVel.m_quad+8]
          vmovss  dword ptr [rdi+300h], xmm0
          vmovss  dword ptr [rdi+2FCh], xmm1
        }
        IsRigidBodyActive = Physics_IsRigidBodyActive((Physics_WorldId)v8, v14.m_serialAndIndex);
        v23 = v32;
        ++v11;
        p_z = (Ragdoll *)(_RDI + 12);
        Ragdoll->state.loadedPhysicsActivationStates[v32] = IsRigidBodyActive;
        v32 = v23 + 1;
      }
      while ( v23 + 1 < v34 );
      v4 = v35;
      p_state = &Ragdoll->state;
      __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
      v7 = 0;
    }
  }
  MemFile_WriteData(v4, 0x34D8ui64, p_state);
  v30[0] = Ragdoll->penetrating;
  MemFile_WriteData(v4, 1ui64, v30);
  v25 = Ragdoll->state.numBones;
  if ( v25 > 0 )
  {
    boneNames = Ragdoll->boneNames;
    do
    {
      v27 = SL_ConvertToString(*boneNames);
      MemFile_WriteCString(v4, v27);
      ++boneNames;
      --v25;
    }
    while ( v25 );
  }
  if ( v7 )
    p_state->state = RAGDOLL_ACTIVITY_STATE_JUST_LOADED;
}

/*
==============
Ragdoll_SetAnimPoseRootOrientation
==============
*/
void Ragdoll_SetAnimPoseRootOrientation(Ragdoll *ragdoll, const vec4_t *rotation, const vec3_t *translation)
{
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 

  _RSI = translation;
  _RBX = rotation;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1569, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v13 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1570, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_19;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_19;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
  {
LABEL_19:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 1571, ASSERT_TYPE_SANITY, "( !IS_NAN( ( translation )[0] ) && !IS_NAN( ( translation )[1] ) && !IS_NAN( ( translation )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( translation )[0] ) && !IS_NAN( ( translation )[1] ) && !IS_NAN( ( translation )[2] )") )
      __debugbreak();
  }
  ragdoll->state.animationPoseRootOrientation.orientation.v[0] = _RBX->v[0];
  ragdoll->state.animationPoseRootOrientation.orientation.v[1] = _RBX->v[1];
  ragdoll->state.animationPoseRootOrientation.orientation.v[2] = _RBX->v[2];
  ragdoll->state.animationPoseRootOrientation.orientation.v[3] = _RBX->v[3];
  ragdoll->state.animationPoseRootOrientation.origin.v[0] = _RSI->v[0];
  ragdoll->state.animationPoseRootOrientation.origin.v[1] = _RSI->v[1];
  ragdoll->state.animationPoseRootOrientation.origin.v[2] = _RSI->v[2];
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
  __int64 v10; 
  int v11; 
  int numBones; 

  v3 = boneId;
  _RSI = animPoseBoneOrientation;
  if ( Ragdoll_IsDebugTarget(ragdoll) )
  {
    if ( (int)v3 >= 64 )
    {
      v11 = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 915, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v11) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= ragdoll->state.numBones )
    {
      numBones = ragdoll->state.numBones;
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 916, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v10, numBones) )
        __debugbreak();
    }
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    _RCX = v3;
    _RDX = s_debugAnimPose;
    __asm
    {
      vmovups xmmword ptr [rcx+rdx], xmm0
      vmovsd  xmm1, qword ptr [rsi+10h]
      vmovsd  qword ptr [rcx+rdx+10h], xmm1
    }
    s_debugAnimPose[_RCX].orientation.v[3] = _RSI->orientation.v[3];
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
  __int64 v10; 
  __int64 v13; 
  int v14; 
  int numBones; 

  if ( Ragdoll_IsDebugTarget(ragdoll) )
  {
    if ( boneId >= 64 )
    {
      v14 = boneId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 956, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v14) )
        __debugbreak();
    }
    if ( (unsigned int)boneId >= ragdoll->state.numBones )
    {
      numBones = ragdoll->state.numBones;
      LODWORD(v13) = boneId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 957, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v13, numBones) )
        __debugbreak();
    }
    _R12 = s_ragdollDebugImpulses;
    v10 = s_ragdollDebugImpulseCount++ & 0x3F;
    _RBX = v10;
    s_ragdollDebugImpulses[v10].impulseType = BULLET_IMPULSE;
    __asm { vmovss  xmm0, [rsp+58h+magnitude] }
    s_ragdollDebugImpulses[_RBX].ragdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
    s_ragdollDebugImpulses[_RBX].boneId = boneId;
    s_ragdollDebugImpulses[_RBX].impulsePosition.v[0] = position->v[0];
    s_ragdollDebugImpulses[_RBX].impulsePosition.v[1] = position->v[1];
    s_ragdollDebugImpulses[_RBX].impulsePosition.v[2] = position->v[2];
    s_ragdollDebugImpulses[_RBX].impulseDirection.v[0] = normalizedDirection->v[0];
    s_ragdollDebugImpulses[_RBX].impulseDirection.v[1] = normalizedDirection->v[1];
    s_ragdollDebugImpulses[_RBX].impulseDirection.v[2] = normalizedDirection->v[2];
    __asm { vmovss  dword ptr [r12+rbx*8+24h], xmm0 }
  }
}

/*
==============
Ragdoll_SetDebugExplosionImpulse
==============
*/
void Ragdoll_SetDebugExplosionImpulse(const Ragdoll *ragdoll, int boneId, const vec3_t *position, const vec3_t *normalizedDirection, float magnitude)
{
  __int64 v10; 
  __int64 v13; 
  int v14; 
  int numBones; 

  if ( Ragdoll_IsDebugTarget(ragdoll) )
  {
    if ( boneId >= 64 )
    {
      v14 = boneId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 930, ASSERT_TYPE_ASSERT, "( ( boneId < 64 ) )", "( boneId ) = %i", v14) )
        __debugbreak();
    }
    if ( (unsigned int)boneId >= ragdoll->state.numBones )
    {
      numBones = ragdoll->state.numBones;
      LODWORD(v13) = boneId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.cpp", 931, ASSERT_TYPE_ASSERT, "(unsigned)( boneId ) < (unsigned)( ragdoll->state.numBones )", "boneId doesn't index ragdoll->state.numBones\n\t%i not in [0, %i)", v13, numBones) )
        __debugbreak();
    }
    _R12 = s_ragdollDebugImpulses;
    v10 = s_ragdollDebugImpulseCount++ & 0x3F;
    _RBX = v10;
    s_ragdollDebugImpulses[v10].impulseType = EXPLOSION_IMPULSE;
    __asm { vmovss  xmm0, [rsp+58h+magnitude] }
    s_ragdollDebugImpulses[_RBX].ragdollHandle = Ragdoll_GetRagdollHandle(ragdoll);
    s_ragdollDebugImpulses[_RBX].boneId = boneId;
    s_ragdollDebugImpulses[_RBX].impulsePosition.v[0] = position->v[0];
    s_ragdollDebugImpulses[_RBX].impulsePosition.v[1] = position->v[1];
    s_ragdollDebugImpulses[_RBX].impulsePosition.v[2] = position->v[2];
    s_ragdollDebugImpulses[_RBX].impulseDirection.v[0] = normalizedDirection->v[0];
    s_ragdollDebugImpulses[_RBX].impulseDirection.v[1] = normalizedDirection->v[1];
    s_ragdollDebugImpulses[_RBX].impulseDirection.v[2] = normalizedDirection->v[2];
    __asm { vmovss  dword ptr [r12+rbx*8+24h], xmm0 }
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


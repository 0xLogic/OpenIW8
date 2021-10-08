/*
==============
RagdollPoseController_Update
==============
*/

void __fastcall RagdollPoseController_Update(RagdollPoseController *controller, const Ragdoll *ragdoll, float deltaTime)
{
  ?RagdollPoseController_Update@@YAXPEAURagdollPoseController@@PEBURagdoll@@M@Z(controller, ragdoll, deltaTime);
}

/*
==============
RagdollPoseController_GetSettings
==============
*/

void __fastcall RagdollPoseController_GetSettings(const RagdollPoseController *controller, RagdollPoseControllerSettings *outSettings)
{
  ?RagdollPoseController_GetSettings@@YAXPEBURagdollPoseController@@PEAURagdollPoseControllerSettings@@@Z(controller, outSettings);
}

/*
==============
RagdollPoseController_SetWeight
==============
*/

void __fastcall RagdollPoseController_SetWeight(RagdollPoseController *controller, float weight)
{
  ?RagdollPoseController_SetWeight@@YAXPEAURagdollPoseController@@M@Z(controller, weight);
}

/*
==============
RagdollPoseController_DriveToPose
==============
*/

void __fastcall RagdollPoseController_DriveToPose(RagdollPoseController *controller, Ragdoll *ragdoll, const BoneOrientation *targetPose, float deltaTime)
{
  ?RagdollPoseController_DriveToPose@@YAXPEAURagdollPoseController@@PEAURagdoll@@PEBUBoneOrientation@@M@Z(controller, ragdoll, targetPose, deltaTime);
}

/*
==============
RagdollPoseController_GetPositionControlWeight
==============
*/

double __fastcall RagdollPoseController_GetPositionControlWeight(const RagdollPoseController *controller)
{
  double result; 

  *(float *)&result = ?RagdollPoseController_GetPositionControlWeight@@YAMPEBURagdollPoseController@@@Z(controller);
  return result;
}

/*
==============
RagdollPoseController_GetWeight
==============
*/

double __fastcall RagdollPoseController_GetWeight(const RagdollPoseController *controller)
{
  double result; 

  *(float *)&result = ?RagdollPoseController_GetWeight@@YAMPEBURagdollPoseController@@@Z(controller);
  return result;
}

/*
==============
RagdollPoseController_Reset
==============
*/

void __fastcall RagdollPoseController_Reset(RagdollPoseController *controller)
{
  ?RagdollPoseController_Reset@@YAXPEAURagdollPoseController@@@Z(controller);
}

/*
==============
RagdollPoseController_InitializeBoneStates
==============
*/

void __fastcall RagdollPoseController_InitializeBoneStates(RagdollPoseController *controller, const Ragdoll *ragdoll)
{
  ?RagdollPoseController_InitializeBoneStates@@YAXPEAURagdollPoseController@@PEBURagdoll@@@Z(controller, ragdoll);
}

/*
==============
RagdollPoseController_SetRootControlWeight
==============
*/

void __fastcall RagdollPoseController_SetRootControlWeight(RagdollPoseController *controller, float weight)
{
  ?RagdollPoseController_SetRootControlWeight@@YAXPEAURagdollPoseController@@M@Z(controller, weight);
}

/*
==============
RagdollPoseController_IsActive
==============
*/

bool __fastcall RagdollPoseController_IsActive(const RagdollPoseController *controller)
{
  return ?RagdollPoseController_IsActive@@YA_NPEBURagdollPoseController@@@Z(controller);
}

/*
==============
RagdollPoseController_BlendWeight
==============
*/

void __fastcall RagdollPoseController_BlendWeight(RagdollPoseController *controller, float targetWeight, float duration)
{
  ?RagdollPoseController_BlendWeight@@YAXPEAURagdollPoseController@@MM@Z(controller, targetWeight, duration);
}

/*
==============
Ragdoll_EstimateRotationDeltaAxisAngle
==============
*/

void __fastcall Ragdoll_EstimateRotationDeltaAxisAngle(const vec4_t *from, const vec4_t *to, vec3_t *outAxisAngle)
{
  ?Ragdoll_EstimateRotationDeltaAxisAngle@@YAXAEBTvec4_t@@0AEATvec3_t@@@Z(from, to, outAxisAngle);
}

/*
==============
RagdollPoseController_BlendRootControlWeight
==============
*/

void __fastcall RagdollPoseController_BlendRootControlWeight(RagdollPoseController *controller, float targetWeight, float duration)
{
  ?RagdollPoseController_BlendRootControlWeight@@YAXPEAURagdollPoseController@@MM@Z(controller, targetWeight, duration);
}

/*
==============
RagdollPoseController_BlendRootControlWeight
==============
*/

void __fastcall RagdollPoseController_BlendRootControlWeight(RagdollPoseController *controller, double targetWeight, double duration)
{
  __asm
  {
    vmovss  dword ptr [rcx+10h], xmm2
    vmovss  dword ptr [rcx+14h], xmm1
  }
}

/*
==============
RagdollPoseController_BlendWeight
==============
*/

void __fastcall RagdollPoseController_BlendWeight(RagdollPoseController *controller, double targetWeight, double duration)
{
  __asm
  {
    vmovss  dword ptr [rcx+8], xmm2
    vmovss  dword ptr [rcx+0Ch], xmm1
  }
}

/*
==============
RagdollPoseController_DriveToPose
==============
*/

void __fastcall RagdollPoseController_DriveToPose(RagdollPoseController *controller, Ragdoll *ragdoll, const BoneOrientation *targetPose, double deltaTime)
{
  int NumBones; 
  Physics_WorldId PhysicsWorldId; 
  unsigned int physicsInstanceId; 
  signed int v53; 
  hknpBodyId v63; 
  __int64 parentBone; 
  unsigned int RigidBodyID; 
  char v100; 
  bool v101; 
  bool v156; 
  char v201; 
  bool v202; 
  bool v240; 
  __int64 v285; 
  __int64 v286; 
  double v287; 
  double v288; 
  double v289; 
  double v290; 
  unsigned int v299; 
  unsigned int instanceId; 
  Bone *bones; 
  hknpBodyId result; 
  RagdollPoseController *v311; 
  const BoneOrientation *v312; 
  __int64 v313; 
  vec3_t v314; 
  vec3_t trans; 
  vec3_t v316; 
  vec3_t inoutTrans1; 
  vec3_t centerOfMass; 
  vec3_t inoutVec; 
  vec3_t v320; 
  vec3_t v321; 
  vec3_t outAxisAngle; 
  vec3_t v323; 
  vec4_t quat; 
  vec4_t from; 
  vec4_t inoutQuat1; 
  vec3_t outTransformedPoint; 
  vec3_t centerOfMassLocal; 
  hkVector4f linVel; 
  hkVector4f angVel; 
  vec4_t v331; 
  vec3_t position; 
  vec3_t outInvTrans; 
  vec4_t outInvQuat; 
  vec4_t orientation; 
  vec3_t v336; 
  char v337; 
  void *retaddr; 

  _RAX = &retaddr;
  v313 = -2i64;
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
    vmovaps xmm6, xmm3
  }
  v312 = targetPose;
  _R15 = controller;
  v311 = controller;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 187, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "Ragdoll_DriveToPose");
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmulss  xmm7, xmm0, dword ptr [rax+28h]
    vxorps  xmm13, xmm13, xmm13
    vucomiss xmm7, xmm13
  }
  if ( !v101 )
  {
    __asm
    {
      vaddss  xmm0, xmm6, dword ptr [r15+18h]
      vmovss  dword ptr [r15+18h], xmm0
      vmovss  xmm8, cs:__real@3f800000
      vucomiss xmm6, xmm13
      vdivss  xmm12, xmm8, xmm6
      vmovss  [rsp+310h+var_2B8], xmm12
    }
    NumBones = Ragdoll_GetNumBones(ragdoll);
    v299 = NumBones;
    if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 94, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    bones = ragdoll->state.bones;
    PhysicsWorldId = Ragdoll_GetPhysicsWorldId(ragdoll);
    physicsInstanceId = ragdoll->state.physicsInstanceId;
    instanceId = physicsInstanceId;
    _RCX = ragdoll_poseController_accelerationGain;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+28h]
      vmovss  [rsp+310h+var_2B0], xmm0
    }
    _RCX = ragdoll_poseController_velocityGain;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+28h]
      vmovss  [rsp+310h+var_2AC], xmm0
    }
    _RCX = ragdoll_poseController_positionGain;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+28h]
      vmovss  [rsp+310h+var_2A8], xmm0
    }
    _RCX = ragdoll_poseController_positionMaxLinearVelocity;
    __asm
    {
      vmovss  xmm1, dword ptr [rcx+28h]
      vmovss  [rsp+310h+var_2B4], xmm1
    }
    _RCX = ragdoll_poseController_positionMaxAngularVelocity;
    __asm
    {
      vmovss  xmm12, dword ptr [rcx+28h]
      vmovss  [rbp+210h+var_28C], xmm12
    }
    _RAX = ragdoll_poseController_snapGain;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  [rsp+310h+var_2A4], xmm0
    }
    _RAX = ragdoll_poseController_snapMaxLinearVelocity;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  [rbp+210h+var_290], xmm0
    }
    _RAX = ragdoll_poseController_snapMaxAngularVelocity;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  [rbp+210h+var_284], xmm0
    }
    _RAX = ragdoll_poseController_snapMaxLinearDistance;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  [rsp+310h+var_294], xmm0
    }
    _RAX = ragdoll_poseController_snapMaxAngularDistance;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+28h]
      vmovss  [rbp+210h+var_288], xmm0
    }
    _RAX = ragdoll_poseController_hierarchyGain;
    __asm
    {
      vmovss  xmm6, dword ptr [rax+28h]
      vmovss  [rbp+210h+var_280], xmm6
      vsubss  xmm9, xmm8, dword ptr [rax+28h]
      vmovss  [rsp+310h+var_29C], xmm9
    }
    _RAX = ragdoll_poseController_boneWeight;
    __asm { vmovss  xmm0, dword ptr [rax+28h] }
    v53 = 0;
    if ( NumBones > 0 )
    {
      __asm
      {
        vmulss  xmm7, xmm0, xmm7
        vmovss  [rbp+210h+var_27C], xmm7
      }
      _RSI = &targetPose->orientation.v[2];
      _R13 = &_R15->boneStates[0].prevLinearVelocity.v[2];
      __asm { vmovss  xmm10, cs:__real@42000000 }
      _RBX = ragdoll->state.bones;
      do
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi-8]
          vmovaps xmmword ptr [rbp+210h+from], xmm0
          vmovss  xmm0, dword ptr [rsi-14h]
          vmovss  dword ptr [rbp+210h+var_230], xmm0
          vmovss  xmm1, dword ptr [rsi-10h]
          vmovss  dword ptr [rbp+210h+var_230+4], xmm1
          vmovss  xmm0, dword ptr [rsi-0Ch]
          vmovss  dword ptr [rbp+210h+var_230+8], xmm0
        }
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)PhysicsWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v286) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v286) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(v286) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v286) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(PhysicsWorldId - 2) <= 5 )
        {
          LODWORD(v286) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v286) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)PhysicsWorldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v286) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v286) )
            __debugbreak();
        }
        v63.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PhysicsWorldId, physicsInstanceId, v53)->m_serialAndIndex;
        if ( (v63.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 235, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        _EAX = 0;
        __asm
        {
          vmovd   xmm1, eax
          vmovd   xmm0, dword ptr [rbx+0Ch]
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm13, xmm7, xmm2
          vmovss  [rsp+310h+var_2BC], xmm0
          vmovss  [rsp+310h+var_2C0], xmm0
          vmulss  xmm0, xmm0, dword ptr [rax+4]
          vmovss  [rsp+310h+var_2C0], xmm0
          vsubss  xmm0, xmm8, xmm0; val
          vmovaps xmm2, xmm8; max
          vxorps  xmm1, xmm1, xmm1; min
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm
        {
          vmulss  xmm6, xmm0, xmm6
          vcomiss xmm6, xmm13
        }
        if ( v100 | v101 || (parentBone = _RBX->parentBone, (int)parentBone < 0) )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+210h+from]
            vmovdqa xmmword ptr [rbp+210h+quat], xmm0
            vmovsd  xmm1, qword ptr [rbp+210h+var_230]
            vmovsd  qword ptr [rbp+210h+trans], xmm1
          }
          trans.v[2] = v316.v[2];
        }
        else
        {
          if ( (unsigned int)parentBone >= v299 )
          {
            LODWORD(v286) = v299;
            LODWORD(v285) = parentBone;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 265, ASSERT_TYPE_ASSERT, "(unsigned)( parentBone ) < (unsigned)( numBones )", "parentBone doesn't index numBones\n\t%i not in [0, %i)", v285, v286) )
              __debugbreak();
          }
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi-8]
            vmovups xmmword ptr [rbp+210h+inoutQuat1], xmm0
            vmovss  xmm0, dword ptr [rsi-14h]
            vmovss  dword ptr [rbp+210h+inoutTrans1], xmm0
            vmovss  xmm1, dword ptr [rsi-10h]
            vmovss  dword ptr [rbp+210h+inoutTrans1+4], xmm1
            vmovss  xmm0, dword ptr [rsi-0Ch]
            vmovss  dword ptr [rbp+210h+inoutTrans1+8], xmm0
          }
          QuatTrans_Inverse(&v312[parentBone].orientation, &v312[parentBone].origin, &outInvQuat, &outInvTrans);
          QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, &outInvQuat, &outInvTrans);
          RigidBodyID = Physics_GetRigidBodyID(PhysicsWorldId, instanceId, parentBone);
          if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 275, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( parentBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( parentBodyId )") )
            __debugbreak();
          Physics_GetRigidBodyTransform(PhysicsWorldId, RigidBodyID, &position, &orientation);
          QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, &orientation, &position);
          __asm { vmovaps xmm2, xmm6; frac }
          QuatSlerp(&from, &inoutQuat1, *(float *)&_XMM2, &quat);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+210h+inoutTrans1]
            vsubss  xmm1, xmm0, dword ptr [rbp+210h+var_230]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rbp+210h+var_230]
            vmovss  dword ptr [rbp+210h+trans], xmm3
            vmovss  xmm0, dword ptr [rbp+210h+inoutTrans1+4]
            vsubss  xmm1, xmm0, dword ptr [rbp+210h+var_230+4]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rbp+210h+var_230+4]
            vmovss  dword ptr [rbp+210h+trans+4], xmm3
            vmovss  xmm0, dword ptr [rbp+210h+inoutTrans1+8]
            vsubss  xmm1, xmm0, dword ptr [rbp+210h+var_230+8]
            vmulss  xmm2, xmm1, xmm6
            vaddss  xmm3, xmm2, dword ptr [rbp+210h+var_230+8]
            vmovss  dword ptr [rbp+210h+trans+8], xmm3
          }
        }
        Physics_GetRigidBodyCenterOfMassLocal(PhysicsWorldId, v63.m_serialAndIndex, &centerOfMassLocal);
        QuatTrans_TransformPoint(&quat, &trans, &centerOfMassLocal, &trans);
        Physics_GetRigidBodyCenterOfMass(PhysicsWorldId, v63.m_serialAndIndex, &centerOfMass);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)PhysicsWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v286) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v286) )
            __debugbreak();
        }
        if ( (v63.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v286) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v286) )
            __debugbreak();
        }
        HavokPhysics_GetRigidBodyLinAngVel(PhysicsWorldId, v63, &linVel, &angVel);
        __asm
        {
          vmulss  xmm8, xmm10, dword ptr [rbp+210h+linVel.m_quad]
          vmulss  xmm7, xmm10, dword ptr [rbp+210h+linVel.m_quad+4]
          vmulss  xmm6, xmm10, dword ptr [rbp+210h+linVel.m_quad+8]
          vmovss  xmm15, dword ptr [rbp+210h+angVel.m_quad]
        }
        Physics_GetRigidBodyTransform(PhysicsWorldId, v63.m_serialAndIndex, &v336, &v331);
        __asm
        {
          vmulss  xmm8, xmm8, xmm9
          vmulss  xmm7, xmm7, xmm9
          vmulss  xmm11, xmm6, xmm9
          vmovss  xmm5, dword ptr [rbp+210h+trans]
          vsubss  xmm1, xmm5, dword ptr [rbp+210h+centerOfMass]
          vmovss  xmm4, dword ptr [rbp+210h+trans+4]
          vsubss  xmm0, xmm4, dword ptr [rbp+210h+centerOfMass+4]
          vmovss  xmm3, dword ptr [rbp+210h+trans+8]
          vsubss  xmm14, xmm3, dword ptr [rbp+210h+centerOfMass+8]
          vmovss  xmm6, [rsp+310h+var_2B8]
          vmulss  xmm12, xmm1, xmm6
          vmulss  xmm13, xmm0, xmm6
          vsubss  xmm2, xmm5, dword ptr [r13-24h]
          vsubss  xmm1, xmm4, dword ptr [r13-20h]
          vsubss  xmm0, xmm3, dword ptr [r13-1Ch]
          vmovss  dword ptr [r13-24h], xmm5
          vmovss  dword ptr [r13-20h], xmm4
          vmovss  dword ptr [r13-1Ch], xmm3
          vmulss  xmm5, xmm2, xmm6
          vmulss  xmm9, xmm1, xmm6
          vmulss  xmm10, xmm0, xmm6
          vsubss  xmm1, xmm5, dword ptr [r13-8]
          vsubss  xmm3, xmm9, dword ptr [r13-4]
          vsubss  xmm4, xmm10, dword ptr [r13+0]
          vmovss  dword ptr [r13-8], xmm5
          vmovss  dword ptr [r13-4], xmm9
          vmovss  dword ptr [r13+0], xmm10
          vmovss  xmm0, [rsp+310h+var_2B0]
          vmulss  xmm2, xmm0, [rsp+310h+var_2C0]
          vmulss  xmm0, xmm1, xmm2
          vaddss  xmm6, xmm0, xmm8
          vmulss  xmm1, xmm3, xmm2
          vaddss  xmm7, xmm1, xmm7
          vmulss  xmm0, xmm4, xmm2
          vaddss  xmm8, xmm0, xmm11
          vsubss  xmm1, xmm5, xmm6
          vsubss  xmm2, xmm9, xmm7
          vsubss  xmm3, xmm10, xmm8
          vmovss  xmm0, [rsp+310h+var_2AC]
          vmulss  xmm0, xmm0, [rsp+310h+var_2C0]
          vmulss  xmm1, xmm0, xmm1
          vmulss  xmm4, xmm0, xmm2
          vmulss  xmm5, xmm0, xmm3
          vaddss  xmm9, xmm6, xmm1
          vaddss  xmm10, xmm7, xmm4
          vaddss  xmm11, xmm8, xmm5
          vsubss  xmm3, xmm12, xmm9
          vsubss  xmm4, xmm13, xmm10
          vmovss  xmm12, [rsp+310h+var_2B8]
          vmulss  xmm0, xmm14, xmm12
          vsubss  xmm2, xmm0, xmm11
          vmovss  xmm5, [rsp+310h+var_2C0]
          vmulss  xmm1, xmm5, [rsp+310h+var_2A8]
          vmulss  xmm6, xmm1, xmm3
          vmulss  xmm7, xmm1, xmm4
          vmulss  xmm8, xmm1, xmm2
          vxorps  xmm13, xmm13, xmm13
          vmovss  xmm4, [rsp+310h+var_2B4]
          vcomiss xmm4, xmm13
        }
        if ( v100 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm4, xmm4
            vxorpd  xmm1, xmm1, xmm1
            vmovsd  [rsp+310h+var_2D0], xmm1
            vmovsd  [rsp+310h+var_2D8], xmm0
          }
          v156 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 524, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v287, v289);
          v100 = 0;
          v101 = !v156;
          if ( v156 )
            __debugbreak();
          __asm
          {
            vmovss  xmm4, [rsp+310h+var_2B4]
            vmovss  xmm5, [rsp+310h+var_2C0]
          }
        }
        __asm
        {
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vcomiss xmm3, xmm0
        }
        if ( !(v100 | v101) )
        {
          __asm
          {
            vsqrtss xmm0, xmm3, xmm3
            vdivss  xmm1, xmm4, xmm0
            vmulss  xmm6, xmm6, xmm1
            vmulss  xmm7, xmm7, xmm1
            vmulss  xmm8, xmm8, xmm1
          }
        }
        __asm
        {
          vaddss  xmm9, xmm9, xmm6
          vmovss  dword ptr [rbp+210h+var_1F0], xmm9
          vaddss  xmm7, xmm10, xmm7
          vmovss  dword ptr [rbp+210h+var_1F0+4], xmm7
          vaddss  xmm8, xmm11, xmm8
          vmovss  dword ptr [rbp+210h+var_1F0+8], xmm8
          vmulss  xmm6, xmm5, [rsp+310h+var_2A4]
          vcomiss xmm6, xmm13
        }
        if ( !(v100 | v101) )
        {
          QuatTrans_TransformPoint(&from, &v316, &centerOfMassLocal, &outTransformedPoint);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+210h+outTransformedPoint]
            vsubss  xmm4, xmm0, dword ptr [rbp+210h+centerOfMass]
            vmovss  xmm1, dword ptr [rbp+210h+outTransformedPoint+4]
            vsubss  xmm3, xmm1, dword ptr [rbp+210h+centerOfMass+4]
            vmovss  xmm0, dword ptr [rbp+210h+outTransformedPoint+8]
            vsubss  xmm2, xmm0, dword ptr [rbp+210h+centerOfMass+8]
            vmulss  xmm1, xmm4, xmm12
            vmulss  xmm3, xmm3, xmm12
            vmulss  xmm0, xmm2, xmm12
            vsubss  xmm4, xmm1, xmm9
            vsubss  xmm5, xmm3, xmm7
            vsubss  xmm2, xmm0, xmm8
            vmulss  xmm0, xmm6, xmm4
            vmovss  dword ptr [rbp+210h+inoutVec], xmm0
            vmulss  xmm1, xmm6, xmm5
            vmovss  dword ptr [rbp+210h+inoutVec+4], xmm1
            vmulss  xmm0, xmm6, xmm2
            vmovss  dword ptr [rbp+210h+inoutVec+8], xmm0
            vmulss  xmm1, xmm6, [rsp+310h+var_294]
            vmulss  xmm1, xmm1, xmm12; maxDist
            vmovss  xmm0, [rbp+210h+var_290]; snapMaxVelocity
          }
          Ragdoll_ClipSnapVector(*(float *)&_XMM0, *(float *)&_XMM1, &inoutVec);
          __asm
          {
            vaddss  xmm1, xmm9, dword ptr [rbp+210h+inoutVec]
            vmovss  dword ptr [rbp+210h+var_1F0], xmm1
            vaddss  xmm0, xmm7, dword ptr [rbp+210h+inoutVec+4]
            vmovss  dword ptr [rbp+210h+var_1F0+4], xmm0
            vaddss  xmm2, xmm8, dword ptr [rbp+210h+inoutVec+8]
            vmovss  dword ptr [rbp+210h+var_1F0+8], xmm2
          }
        }
        Physics_SetRigidBodyLinVel(PhysicsWorldId, v63.m_serialAndIndex, &v320);
        __asm
        {
          vmovss  xmm1, [rsp+310h+var_29C]
          vmulss  xmm6, xmm15, xmm1
          vmulss  xmm7, xmm1, dword ptr [rbp+210h+angVel.m_quad+4]
          vmulss  xmm11, xmm1, dword ptr [rbp+210h+angVel.m_quad+8]
        }
        Ragdoll_EstimateRotationDeltaAxisAngle(&v331, &quat, &outAxisAngle);
        __asm
        {
          vmovss  xmm15, [rsp+310h+var_2B8]
          vmulss  xmm12, xmm15, dword ptr [rbp+210h+outAxisAngle]
          vmulss  xmm13, xmm15, dword ptr [rbp+210h+outAxisAngle+4]
          vmulss  xmm14, xmm15, dword ptr [rbp+210h+outAxisAngle+8]
        }
        Ragdoll_EstimateRotationDeltaAxisAngle((const vec4_t *)(_R13 - 6), &quat, &v321);
        __asm
        {
          vmovaps xmm0, xmmword ptr [rbp+210h+quat]
          vmovups xmmword ptr [r13-18h], xmm0
          vmulss  xmm8, xmm15, dword ptr [rbp+210h+var_1E0]
          vmulss  xmm9, xmm15, dword ptr [rbp+210h+var_1E0+4]
          vmulss  xmm10, xmm15, dword ptr [rbp+210h+var_1E0+8]
          vsubss  xmm1, xmm8, dword ptr [r13+4]
          vsubss  xmm3, xmm9, dword ptr [r13+8]
          vsubss  xmm4, xmm10, dword ptr [r13+0Ch]
          vmovss  dword ptr [r13+4], xmm8
          vmovss  dword ptr [r13+8], xmm9
          vmovss  dword ptr [r13+0Ch], xmm10
          vmovss  xmm0, [rsp+310h+var_2B0]
          vmulss  xmm2, xmm0, [rsp+310h+var_2BC]
          vmulss  xmm0, xmm2, xmm1
          vaddss  xmm5, xmm0, xmm6
          vmulss  xmm1, xmm2, xmm3
          vaddss  xmm6, xmm1, xmm7
          vmulss  xmm0, xmm2, xmm4
          vaddss  xmm7, xmm0, xmm11
          vsubss  xmm1, xmm8, xmm5
          vmovss  dword ptr [rbp+210h+var_1E0], xmm1
          vsubss  xmm2, xmm9, xmm6
          vmovss  dword ptr [rbp+210h+var_1E0+4], xmm2
          vsubss  xmm3, xmm10, xmm7
          vmovss  dword ptr [rbp+210h+var_1E0+8], xmm3
          vmovss  xmm0, [rsp+310h+var_2AC]
          vmulss  xmm0, xmm0, [rsp+310h+var_2BC]
          vmulss  xmm1, xmm0, xmm1
          vmulss  xmm2, xmm0, xmm2
          vmulss  xmm4, xmm0, xmm3
          vaddss  xmm9, xmm1, xmm5
          vaddss  xmm10, xmm2, xmm6
          vaddss  xmm11, xmm4, xmm7
          vsubss  xmm3, xmm12, xmm9
          vmovss  dword ptr [rbp+210h+outAxisAngle], xmm3
          vsubss  xmm2, xmm13, xmm10
          vmovss  dword ptr [rbp+210h+outAxisAngle+4], xmm2
          vsubss  xmm1, xmm14, xmm11
          vmovss  dword ptr [rbp+210h+outAxisAngle+8], xmm1
          vmovss  xmm4, [rsp+310h+var_2BC]
          vmulss  xmm0, xmm4, [rsp+310h+var_2A8]
          vmulss  xmm6, xmm0, xmm3
          vmulss  xmm7, xmm0, xmm2
          vmulss  xmm8, xmm0, xmm1
          vxorps  xmm13, xmm13, xmm13
          vmovss  xmm12, [rbp+210h+var_28C]
          vcomiss xmm12, xmm13
        }
        if ( v201 )
        {
          __asm
          {
            vcvtss2sd xmm0, xmm12, xmm12
            vxorpd  xmm1, xmm1, xmm1
            vmovsd  [rsp+310h+var_2D0], xmm1
            vmovsd  [rsp+310h+var_2D8], xmm0
          }
          v240 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 524, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v288, v290);
          v201 = 0;
          v202 = !v240;
          if ( v240 )
            __debugbreak();
          __asm { vmovss  xmm4, [rsp+310h+var_2BC] }
        }
        __asm
        {
          vmulss  xmm1, xmm6, xmm6
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm8, xmm8
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm12, xmm12
          vcomiss xmm3, xmm0
        }
        if ( !(v201 | v202) )
        {
          __asm
          {
            vsqrtss xmm0, xmm3, xmm3
            vdivss  xmm1, xmm12, xmm0
            vmulss  xmm6, xmm6, xmm1
            vmulss  xmm7, xmm7, xmm1
            vmulss  xmm8, xmm8, xmm1
          }
        }
        __asm
        {
          vaddss  xmm9, xmm9, xmm6
          vmovss  dword ptr [rbp+210h+var_1C0], xmm9
          vaddss  xmm7, xmm10, xmm7
          vmovss  dword ptr [rbp+210h+var_1C0+4], xmm7
          vaddss  xmm8, xmm11, xmm8
          vmovss  dword ptr [rbp+210h+var_1C0+8], xmm8
          vmulss  xmm6, xmm4, [rsp+310h+var_2A4]
          vcomiss xmm6, xmm13
        }
        if ( !(v201 | v202) )
        {
          Ragdoll_EstimateRotationDeltaAxisAngle(&v331, &from, &v314);
          __asm
          {
            vmulss  xmm4, xmm15, dword ptr [rbp+210h+var_250]
            vmulss  xmm3, xmm15, dword ptr [rbp+210h+var_250+4]
            vmulss  xmm2, xmm15, dword ptr [rbp+210h+var_250+8]
            vsubss  xmm1, xmm4, xmm9
            vsubss  xmm4, xmm3, xmm7
            vsubss  xmm5, xmm2, xmm8
            vmulss  xmm0, xmm6, xmm1
            vmovss  dword ptr [rbp+210h+var_250], xmm0
            vmulss  xmm1, xmm4, xmm6
            vmovss  dword ptr [rbp+210h+var_250+4], xmm1
            vmulss  xmm0, xmm5, xmm6
            vmovss  dword ptr [rbp+210h+var_250+8], xmm0
            vmulss  xmm1, xmm6, [rbp+210h+var_288]
            vmulss  xmm1, xmm1, xmm15; maxDist
            vmovss  xmm0, [rbp+210h+var_284]; snapMaxVelocity
          }
          Ragdoll_ClipSnapVector(*(float *)&_XMM0, *(float *)&_XMM1, &v314);
          __asm
          {
            vaddss  xmm1, xmm9, dword ptr [rbp+210h+var_250]
            vmovss  dword ptr [rbp+210h+var_1C0], xmm1
            vaddss  xmm0, xmm7, dword ptr [rbp+210h+var_250+4]
            vmovss  dword ptr [rbp+210h+var_1C0+4], xmm0
            vaddss  xmm2, xmm8, dword ptr [rbp+210h+var_250+8]
            vmovss  dword ptr [rbp+210h+var_1C0+8], xmm2
          }
        }
        Physics_SetRigidBodyAngVel(PhysicsWorldId, v63.m_serialAndIndex, &v323);
        ++v53;
        _RBX = ++bones;
        _RSI += 7;
        _R13 += 13;
        __asm
        {
          vmovss  xmm8, cs:__real@3f800000
          vmovss  xmm9, [rsp+310h+var_29C]
          vmovss  xmm6, [rbp+210h+var_280]
          vmovss  xmm7, [rbp+210h+var_27C]
          vmovss  xmm10, cs:__real@42000000
        }
        physicsInstanceId = instanceId;
      }
      while ( v53 < (int)v299 );
    }
  }
  Sys_ProfEndNamedEvent();
  _R11 = &v337;
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
RagdollPoseController_GetPositionControlWeight
==============
*/
float RagdollPoseController_GetPositionControlWeight(const RagdollPoseController *controller)
{
  _RAX = ragdoll_poseController_weight;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmulss  xmm1, xmm0, dword ptr [rcx]
    vmulss  xmm0, xmm1, dword ptr [rcx+4]
  }
  return *(float *)&_XMM0;
}

/*
==============
RagdollPoseController_GetSettings
==============
*/
void RagdollPoseController_GetSettings(const RagdollPoseController *controller, RagdollPoseControllerSettings *outSettings)
{
  LODWORD(outSettings->velocityDamping) = ragdoll_poseController_velocityDamping->current.integer;
  LODWORD(outSettings->accelerationGain) = ragdoll_poseController_accelerationGain->current.integer;
  LODWORD(outSettings->velocityGain) = ragdoll_poseController_velocityGain->current.integer;
  LODWORD(outSettings->positionGain) = ragdoll_poseController_positionGain->current.integer;
  LODWORD(outSettings->maxLinearVelocity) = ragdoll_poseController_positionMaxLinearVelocity->current.integer;
  LODWORD(outSettings->maxAngularVelocity) = ragdoll_poseController_positionMaxAngularVelocity->current.integer;
  LODWORD(outSettings->snapGain) = ragdoll_poseController_snapGain->current.integer;
  LODWORD(outSettings->snapMaxLinearVelocity) = ragdoll_poseController_snapMaxLinearVelocity->current.integer;
  LODWORD(outSettings->snapMaxAngularVelocity) = ragdoll_poseController_snapMaxAngularVelocity->current.integer;
  LODWORD(outSettings->snapMaxLinearDistance) = ragdoll_poseController_snapMaxLinearDistance->current.integer;
  LODWORD(outSettings->snapMaxAngularDistance) = ragdoll_poseController_snapMaxAngularDistance->current.integer;
  LODWORD(outSettings->hierarchyGain) = ragdoll_poseController_hierarchyGain->current.integer;
}

/*
==============
RagdollPoseController_GetWeight
==============
*/
float RagdollPoseController_GetWeight(const RagdollPoseController *controller)
{
  _RAX = ragdoll_poseController_weight;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmulss  xmm0, xmm0, dword ptr [rcx]
  }
  return *(float *)&_XMM0;
}

/*
==============
RagdollPoseController_InitializeBoneStates
==============
*/
void RagdollPoseController_InitializeBoneStates(RagdollPoseController *controller, const Ragdoll *ragdoll)
{
  RagdollPoseController *v4; 
  __int64 numBones; 
  Physics_WorldId PhysicsWorldId; 
  unsigned int physicsInstanceId; 
  unsigned int v8; 
  Physics_WorldId v9; 
  __int64 v10; 
  hknpBodyId v13; 
  __int64 v25; 
  hknpBodyId result; 
  RagdollPoseController *v27; 
  vec3_t centerOfMass; 
  vec4_t orientation; 
  hkVector4f linVel; 
  hkVector4f angVel; 
  vec3_t position; 

  v27 = controller;
  v4 = controller;
  if ( !controller && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 13, ASSERT_TYPE_ASSERT, "(controller)", (const char *)&queryFormat, "controller") )
    __debugbreak();
  if ( !ragdoll )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 14, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 79, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
  }
  numBones = ragdoll->state.numBones;
  PhysicsWorldId = Ragdoll_GetPhysicsWorldId(ragdoll);
  physicsInstanceId = ragdoll->state.physicsInstanceId;
  v8 = 0;
  v9 = PhysicsWorldId;
  v10 = numBones;
  if ( (int)numBones > 0 )
  {
    __asm { vmovaps [rsp+0F8h+var_48], xmm6 }
    _RBP = &v4->boneStates[0].prevPosition.v[2];
    __asm { vmovss  xmm6, cs:__real@42000000 }
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v9 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v25) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v25) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v25) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v25) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
      {
        LODWORD(v25) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v25) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v25) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v25) )
          __debugbreak();
      }
      v13.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, v9, physicsInstanceId, v8)->m_serialAndIndex;
      if ( (v13.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 24, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Physics_GetRigidBodyCenterOfMass(v9, v13.m_serialAndIndex, &centerOfMass);
      Physics_GetRigidBodyTransform(v9, v13.m_serialAndIndex, &position, &orientation);
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v9 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v25) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v25) )
          __debugbreak();
      }
      if ( (v13.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v25) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v25) )
          __debugbreak();
      }
      HavokPhysics_GetRigidBodyLinAngVel(v9, v13, &linVel, &angVel);
      __asm
      {
        vmovss  xmm1, dword ptr [rsp+0F8h+centerOfMass]
        vmovss  xmm0, dword ptr [rsp+0F8h+centerOfMass+4]
        vmulss  xmm4, xmm6, dword ptr [rsp+0F8h+linVel.m_quad]
        vmulss  xmm3, xmm6, dword ptr [rsp+0F8h+linVel.m_quad+4]
        vmulss  xmm2, xmm6, dword ptr [rsp+0F8h+linVel.m_quad+8]
        vmovss  dword ptr [rbp-4], xmm0
        vmovups xmm0, xmmword ptr [rsp+0F8h+orientation]
        vmovss  dword ptr [rbp-8], xmm1
        vmovss  xmm1, dword ptr [rsp+0F8h+centerOfMass+8]
        vmovss  dword ptr [rbp+0], xmm1
        vmovss  xmm1, dword ptr [rsp+0F8h+angVel.m_quad+4]
        vmovups xmmword ptr [rbp+4], xmm0
        vmovss  xmm0, dword ptr [rsp+0F8h+angVel.m_quad]
        vmovss  dword ptr [rbp+14h], xmm4
        vmovss  dword ptr [rbp+18h], xmm3
        vmovss  dword ptr [rbp+1Ch], xmm2
        vmovss  dword ptr [rbp+20h], xmm0
        vmovss  xmm0, dword ptr [rsp+0F8h+angVel.m_quad+8]
        vmovss  dword ptr [rbp+28h], xmm0
        vmovss  dword ptr [rbp+24h], xmm1
      }
      _RBP += 13;
      ++v8;
      --v10;
    }
    while ( v10 );
    v4 = v27;
    __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
  }
  v4->initialized = 1;
}

/*
==============
RagdollPoseController_IsActive
==============
*/
bool RagdollPoseController_IsActive(const RagdollPoseController *controller)
{
  char v1; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rcx]
  }
  return v1;
}

/*
==============
RagdollPoseController_Reset
==============
*/
void RagdollPoseController_Reset(RagdollPoseController *controller)
{
  if ( !controller && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 47, ASSERT_TYPE_ASSERT, "(controller)", (const char *)&queryFormat, "controller") )
    __debugbreak();
  controller->initialized = 0;
  *(_QWORD *)&controller->weight = 0i64;
  *(_QWORD *)&controller->blendTime = 0i64;
  *(_QWORD *)&controller->rootControlBlendTime = 0i64;
}

/*
==============
RagdollPoseController_SetRootControlWeight
==============
*/

void __fastcall RagdollPoseController_SetRootControlWeight(RagdollPoseController *controller, double weight)
{
  __asm
  {
    vmovss  dword ptr [rcx+4], xmm1
    vmovss  dword ptr [rcx+14h], xmm1
  }
  controller->rootControlBlendTime = 0.0;
}

/*
==============
RagdollPoseController_SetWeight
==============
*/

void __fastcall RagdollPoseController_SetWeight(RagdollPoseController *controller, double weight)
{
  __asm
  {
    vmovss  dword ptr [rcx], xmm1
    vmovss  dword ptr [rcx+0Ch], xmm1
  }
  controller->blendTime = 0.0;
}

/*
==============
RagdollPoseController_Update
==============
*/

void __fastcall RagdollPoseController_Update(RagdollPoseController *controller, const Ragdoll *ragdoll, double deltaTime)
{
  char v6; 
  bool v7; 

  v6 = 0;
  v7 = !controller->initialized;
  _RBX = controller;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm8
    vmovaps xmm8, xmm2
    vxorps  xmm6, xmm6, xmm6
  }
  if ( !controller->initialized )
  {
    __asm { vucomiss xmm6, dword ptr [rcx] }
    if ( !controller->initialized )
    {
      __asm { vucomiss xmm6, dword ptr [rcx+0Ch] }
      if ( !controller->initialized )
        goto LABEL_15;
    }
    RagdollPoseController_InitializeBoneStates(controller, ragdoll);
  }
  __asm
  {
    vmovss  xmm2, dword ptr [rbx]
    vucomiss xmm2, cs:__real@3f800000
  }
  if ( v7 )
  {
    __asm { vucomiss xmm6, dword ptr [rbx+8] }
    if ( v7 )
    {
      _RAX = ragdoll_poseController_maxControlDuration;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+28h]
        vcomiss xmm0, dword ptr [rbx+18h]
      }
      if ( v6 )
        *(_QWORD *)&_RBX->blendTime = ragdoll_poseController_defaultBlendDuration->current.unsignedInt;
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vcomiss xmm0, xmm6
  }
  if ( !(v6 | v7) )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vdivss  xmm0, xmm8, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+0Ch]
      vsubss  xmm2, xmm1, dword ptr [rbx]
      vmovss  xmm1, dword ptr [rbx+8]
      vmulss  xmm0, xmm2, xmm0
      vaddss  xmm2, xmm0, dword ptr [rbx]
      vsubss  xmm0, xmm1, xmm8
      vmaxss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  dword ptr [rbx], xmm2
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vcomiss xmm0, xmm6
  }
  if ( !(v6 | v7) )
  {
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000; max
      vdivss  xmm0, xmm8, xmm0; val
      vxorps  xmm1, xmm1, xmm1; min
    }
    I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+14h]
      vsubss  xmm2, xmm1, dword ptr [rbx+4]
      vmovss  xmm1, dword ptr [rbx+10h]
      vmulss  xmm0, xmm2, xmm0
      vaddss  xmm3, xmm0, dword ptr [rbx+4]
      vmovss  xmm2, dword ptr [rbx]
      vsubss  xmm0, xmm1, xmm8
      vmaxss  xmm0, xmm0, xmm6
      vmovss  dword ptr [rbx+10h], xmm0
      vmovss  dword ptr [rbx+4], xmm3
    }
  }
  __asm
  {
    vmulss  xmm0, xmm2, dword ptr [rax+28h]
    vucomiss xmm0, xmm6
  }
  if ( v7 )
    _RBX->initialized = 0;
LABEL_15:
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm8, [rsp+48h+var_28]
  }
}

/*
==============
Ragdoll_ClipSnapVector
==============
*/

float __fastcall Ragdoll_ClipSnapVector(double snapMaxVelocity, double maxDist, vec3_t *inoutVec)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovss  xmm7, dword ptr [r8+4]
    vmovaps [rsp+58h+var_38], xmm8
    vmovss  xmm8, dword ptr [r8]
    vmulss  xmm3, xmm8, xmm8
    vmulss  xmm2, xmm7, xmm7
    vaddss  xmm4, xmm3, xmm2
    vmovaps [rsp+58h+var_48], xmm9
    vmovss  xmm9, dword ptr [r8+8]
    vmulss  xmm2, xmm0, xmm0
    vmovaps [rsp+58h+var_58], xmm10
    vmovaps xmm10, xmm0
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm2, xmm0
    vmulss  xmm3, xmm9, xmm9
    vmovaps xmm6, xmm1
    vaddss  xmm5, xmm4, xmm3
    vcomiss xmm5, xmm2
    vdivss  xmm4, xmm5, xmm2
    vmovss  xmm0, cs:__real@3f800000
    vmulss  xmm1, xmm1, xmm1
    vcomiss xmm5, xmm1
    vdivss  xmm3, xmm0, xmm5
    vmulss  xmm1, xmm10, xmm6
    vmulss  xmm3, xmm1, xmm3
    vmulss  xmm2, xmm8, xmm3
    vmovss  dword ptr [r8], xmm2
    vmulss  xmm2, xmm9, xmm3
    vmulss  xmm1, xmm7, xmm3
    vmovss  dword ptr [r8+8], xmm2
    vmovss  dword ptr [r8+4], xmm1
    vmovaps xmm0, xmm4
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
    vmovaps xmm10, [rsp+58h+var_58]
  }
  return *(float *)&_XMM0;
}

/*
==============
Ragdoll_EstimateRotationDeltaAxisAngle
==============
*/
void Ragdoll_EstimateRotationDeltaAxisAngle(const vec4_t *from, const vec4_t *to, vec3_t *outAxisAngle)
{
  bool v17; 
  bool v18; 
  char v79[16]; 
  char v83; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps [rsp+0F8h+var_A8], xmm15
  }
  _RBX = outAxisAngle;
  _RDI = (char *)to;
  _RSI = from;
  if ( from == (const vec4_t *)v79 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  v17 = _RDI < v79;
  if ( _RDI == v79 )
  {
    v18 = CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross");
    v17 = 0;
    if ( v18 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm14, dword ptr [rdi+8]
    vmovss  xmm12, dword ptr [rsi+4]
    vmovss  xmm10, dword ptr [rdi+4]
    vmovss  xmm13, dword ptr [rsi+8]
    vmovss  xmm8, dword ptr [rdi]
    vmovss  xmm11, dword ptr [rsi+0Ch]
    vmovss  xmm7, dword ptr [rsi]
    vmovss  xmm5, cs:__real@40000000
    vmovss  xmm9, dword ptr [rdi+0Ch]
    vmovss  xmm15, dword ptr cs:__xmm@80000000800000008000000080000000
    vxorps  xmm6, xmm9, xmm15
    vmulss  xmm1, xmm12, xmm14
    vmulss  xmm0, xmm13, xmm10
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm7, xmm6
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm0, xmm4, xmm5
    vmovss  [rsp+0F8h+var_C8], xmm0
    vmulss  xmm0, xmm7, xmm14
    vmulss  xmm1, xmm8, xmm13
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm12, xmm6
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm2, xmm5
    vmovss  [rsp+0F8h+var_C4], xmm0
    vmulss  xmm0, xmm8, xmm12
    vmulss  xmm1, xmm7, xmm10
    vsubss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm14, xmm11
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm13, xmm6
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm0, xmm10, xmm12
    vmulss  xmm1, xmm7, xmm8
    vmulss  xmm5, xmm2, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm14
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm11
    vaddss  xmm4, xmm3, xmm0
    vmovss  xmm0, [rsp+0F8h+var_C8]
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm4, xmm1
    vmovss  xmm1, [rsp+0F8h+var_C4]
  }
  if ( v17 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm15
      vmovss  dword ptr [rbx], xmm0
      vxorps  xmm0, xmm5, xmm15
      vmovss  dword ptr [rbx+8], xmm0
      vxorps  xmm1, xmm1, xmm15
    }
  }
  else
  {
    __asm
    {
      vmovss  dword ptr [rbx], xmm0
      vmovss  dword ptr [rbx+8], xmm5
    }
  }
  __asm { vmovss  dword ptr [rbx+4], xmm1 }
  _R11 = &v83;
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
    vmovaps xmm14, [rsp+0F8h+var_98]
    vmovaps xmm15, [rsp+0F8h+var_A8]
  }
}


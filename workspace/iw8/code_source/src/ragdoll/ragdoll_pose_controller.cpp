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
void RagdollPoseController_BlendRootControlWeight(RagdollPoseController *controller, float targetWeight, float duration)
{
  controller->rootControlBlendTime = duration;
  controller->rootControlTargetWeight = targetWeight;
}

/*
==============
RagdollPoseController_BlendWeight
==============
*/
void RagdollPoseController_BlendWeight(RagdollPoseController *controller, float targetWeight, float duration)
{
  controller->blendTime = duration;
  controller->blendTargetWeight = targetWeight;
}

/*
==============
RagdollPoseController_DriveToPose
==============
*/
void RagdollPoseController_DriveToPose(RagdollPoseController *controller, Ragdoll *ragdoll, const BoneOrientation *targetPose, float deltaTime)
{
  float v8; 
  float v9; 
  int NumBones; 
  Physics_WorldId PhysicsWorldId; 
  unsigned int physicsInstanceId; 
  float v13; 
  float v14; 
  signed int v15; 
  float *v16; 
  float *v17; 
  float v18; 
  Bone *v19; 
  hknpBodyId v20; 
  float v24; 
  __int64 parentBone; 
  unsigned int RigidBodyID; 
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
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  __int128 v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  __int128 v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  __int64 v99; 
  __int64 v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float value; 
  float v106; 
  float v107; 
  float v108; 
  unsigned int v109; 
  float v110; 
  unsigned int instanceId; 
  float v112; 
  int integer; 
  float v114; 
  float v115; 
  int v116; 
  float v117; 
  Bone *bones; 
  hknpBodyId result; 
  RagdollPoseController *v120; 
  const BoneOrientation *v121; 
  __int64 v122; 
  vec3_t v123; 
  vec3_t trans; 
  vec3_t v125; 
  vec3_t inoutTrans1; 
  vec3_t centerOfMass; 
  vec3_t inoutVec; 
  vec3_t v129; 
  vec3_t v130; 
  vec3_t outAxisAngle; 
  vec3_t v132; 
  vec4_t quat; 
  vec4_t from; 
  vec4_t inoutQuat1; 
  vec3_t outTransformedPoint; 
  vec3_t centerOfMassLocal; 
  hkVector4f linVel; 
  hkVector4f angVel; 
  vec4_t v140; 
  vec3_t position; 
  vec3_t outInvTrans; 
  vec4_t outInvQuat; 
  vec4_t orientation; 
  vec3_t v145; 

  v122 = -2i64;
  v121 = targetPose;
  v120 = controller;
  if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 187, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "Ragdoll_DriveToPose");
  _XMM13 = 0i64;
  if ( (float)(controller->weight * ragdoll_poseController_weight->current.value) != 0.0 )
  {
    controller->activeTime = deltaTime + controller->activeTime;
    v8 = FLOAT_1_0;
    if ( deltaTime == 0.0 )
      v9 = 0.0;
    else
      v9 = 1.0 / deltaTime;
    v103 = v9;
    NumBones = Ragdoll_GetNumBones(ragdoll);
    v109 = NumBones;
    if ( !ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 94, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    bones = ragdoll->state.bones;
    PhysicsWorldId = Ragdoll_GetPhysicsWorldId(ragdoll);
    physicsInstanceId = ragdoll->state.physicsInstanceId;
    instanceId = physicsInstanceId;
    value = ragdoll_poseController_accelerationGain->current.value;
    v106 = ragdoll_poseController_velocityGain->current.value;
    v107 = ragdoll_poseController_positionGain->current.value;
    v104 = ragdoll_poseController_positionMaxLinearVelocity->current.value;
    v114 = ragdoll_poseController_positionMaxAngularVelocity->current.value;
    v108 = ragdoll_poseController_snapGain->current.value;
    integer = ragdoll_poseController_snapMaxLinearVelocity->current.integer;
    v116 = ragdoll_poseController_snapMaxAngularVelocity->current.integer;
    v112 = ragdoll_poseController_snapMaxLinearDistance->current.value;
    v115 = ragdoll_poseController_snapMaxAngularDistance->current.value;
    v13 = ragdoll_poseController_hierarchyGain->current.value;
    v117 = v13;
    v14 = 1.0 - ragdoll_poseController_velocityDamping->current.value;
    v110 = v14;
    v15 = 0;
    if ( NumBones > 0 )
    {
      v16 = &targetPose->orientation.v[2];
      v17 = &controller->boneStates[0].prevLinearVelocity.v[2];
      v18 = FLOAT_32_0;
      v19 = ragdoll->state.bones;
      do
      {
        from = *(vec4_t *)(v16 - 2);
        v125 = *(vec3_t *)(v16 - 5);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)PhysicsWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v100) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v100) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(v100) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v100) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(PhysicsWorldId - 2) <= 5 )
        {
          LODWORD(v100) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v100) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)PhysicsWorldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v100) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v100) )
            __debugbreak();
        }
        v20.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PhysicsWorldId, physicsInstanceId, v15)->m_serialAndIndex;
        if ( (v20.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 235, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        _XMM0 = (unsigned int)v19->penetrationState;
        __asm
        {
          vpcmpeqd xmm2, xmm0, xmm1
          vblendvps xmm0, xmm13, xmm7, xmm2
        }
        v102 = *(float *)&_XMM0;
        v101 = *(float *)&_XMM0 * v120->rootControlWeight;
        *(double *)&_XMM0 = I_fclamp(v8 - v101, 0.0, v8);
        v24 = *(float *)&_XMM0 * v13;
        if ( (float)(*(float *)&_XMM0 * v13) <= *(float *)&_XMM13 || (parentBone = v19->parentBone, (int)parentBone < 0) )
        {
          quat = from;
          trans = v125;
        }
        else
        {
          if ( (unsigned int)parentBone >= v109 )
          {
            LODWORD(v100) = v109;
            LODWORD(v99) = parentBone;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 265, ASSERT_TYPE_ASSERT, "(unsigned)( parentBone ) < (unsigned)( numBones )", "parentBone doesn't index numBones\n\t%i not in [0, %i)", v99, v100) )
              __debugbreak();
          }
          inoutQuat1 = *(vec4_t *)(v16 - 2);
          inoutTrans1 = *(vec3_t *)(v16 - 5);
          QuatTrans_Inverse(&v121[parentBone].orientation, &v121[parentBone].origin, &outInvQuat, &outInvTrans);
          QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, &outInvQuat, &outInvTrans);
          RigidBodyID = Physics_GetRigidBodyID(PhysicsWorldId, instanceId, parentBone);
          if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 275, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( parentBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( parentBodyId )") )
            __debugbreak();
          Physics_GetRigidBodyTransform(PhysicsWorldId, RigidBodyID, &position, &orientation);
          QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, &orientation, &position);
          QuatSlerp(&from, &inoutQuat1, v24, &quat);
          trans.v[0] = (float)((float)(inoutTrans1.v[0] - v125.v[0]) * v24) + v125.v[0];
          trans.v[1] = (float)((float)(inoutTrans1.v[1] - v125.v[1]) * v24) + v125.v[1];
          trans.v[2] = (float)((float)(inoutTrans1.v[2] - v125.v[2]) * v24) + v125.v[2];
        }
        Physics_GetRigidBodyCenterOfMassLocal(PhysicsWorldId, v20.m_serialAndIndex, &centerOfMassLocal);
        QuatTrans_TransformPoint(&quat, &trans, &centerOfMassLocal, &trans);
        Physics_GetRigidBodyCenterOfMass(PhysicsWorldId, v20.m_serialAndIndex, &centerOfMass);
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)PhysicsWorldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v100) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v100) )
            __debugbreak();
        }
        if ( (v20.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          LODWORD(v100) = PhysicsWorldId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v100) )
            __debugbreak();
        }
        HavokPhysics_GetRigidBodyLinAngVel(PhysicsWorldId, v20, &linVel, &angVel);
        v27 = v18 * linVel.m_quad.m128_f32[0];
        v28 = v18 * linVel.m_quad.m128_f32[1];
        v29 = v18 * linVel.m_quad.m128_f32[2];
        v30 = angVel.m_quad.m128_f32[0];
        Physics_GetRigidBodyTransform(PhysicsWorldId, v20.m_serialAndIndex, &v145, &v140);
        v31 = v27 * v14;
        v32 = v28 * v14;
        v33 = v29 * v14;
        v34 = trans.v[1];
        v35 = trans.v[2];
        v36 = trans.v[2] - centerOfMass.v[2];
        v37 = (float)(trans.v[0] - centerOfMass.v[0]) * v103;
        v38 = (float)(trans.v[1] - centerOfMass.v[1]) * v103;
        v39 = trans.v[0] - *(v17 - 9);
        v40 = trans.v[1] - *(v17 - 8);
        v41 = trans.v[2] - *(v17 - 7);
        *(v17 - 9) = trans.v[0];
        *(v17 - 8) = v34;
        *(v17 - 7) = v35;
        v42 = v40 * v103;
        v43 = (float)(v39 * v103) - *(v17 - 2);
        v44 = v42 - *(v17 - 1);
        v45 = (float)(v41 * v103) - *v17;
        *(v17 - 2) = v39 * v103;
        *(v17 - 1) = v42;
        *v17 = v41 * v103;
        v46 = (float)(v43 * (float)(value * v101)) + v31;
        v47 = (float)(v44 * (float)(value * v101)) + v32;
        v48 = (float)(v45 * (float)(value * v101)) + v33;
        v49 = (float)(v106 * v101) * (float)(v42 - v47);
        v50 = v46 + (float)((float)(v106 * v101) * (float)((float)(v39 * v103) - v46));
        v51 = v47 + v49;
        v52 = v48 + (float)((float)(v106 * v101) * (float)((float)(v41 * v103) - v48));
        v53 = v101;
        v55 = LODWORD(v101);
        *(float *)&v55 = v101 * v107;
        _XMM1 = v55;
        v56 = (float)(v101 * v107) * (float)(v37 - v50);
        v57 = (float)(v101 * v107) * (float)(v38 - (float)(v47 + v49));
        v58 = (float)(v101 * v107) * (float)((float)(v36 * v103) - v52);
        v59 = v104;
        if ( v104 < 0.0 )
        {
          __asm { vxorpd  xmm1, xmm1, xmm1 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 524, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v104, *(double *)&_XMM1) )
            __debugbreak();
          v59 = v104;
          v53 = v101;
        }
        v61 = (float)((float)((float)((float)(v101 * v107) * (float)(v37 - v50)) * (float)((float)(v101 * v107) * (float)(v37 - v50))) + (float)(v57 * v57)) + (float)(v58 * v58);
        if ( v61 > (float)(v59 * v59) )
        {
          v62 = v59 / fsqrt(v61);
          v56 = v56 * v62;
          v57 = v57 * v62;
          v58 = v58 * v62;
        }
        v63 = v50 + v56;
        v129.v[0] = v63;
        v64 = v51 + v57;
        v129.v[1] = v64;
        v65 = v52 + v58;
        v129.v[2] = v65;
        v66 = v53 * v108;
        if ( (float)(v53 * v108) > 0.0 )
        {
          QuatTrans_TransformPoint(&from, &v125, &centerOfMassLocal, &outTransformedPoint);
          inoutVec.v[0] = v66 * (float)((float)((float)(outTransformedPoint.v[0] - centerOfMass.v[0]) * v103) - v63);
          inoutVec.v[1] = v66 * (float)((float)((float)(outTransformedPoint.v[1] - centerOfMass.v[1]) * v103) - v64);
          inoutVec.v[2] = v66 * (float)((float)((float)(outTransformedPoint.v[2] - centerOfMass.v[2]) * v103) - v65);
          Ragdoll_ClipSnapVector(*(float *)&integer, (float)(v66 * v112) * v103, &inoutVec);
          v129.v[0] = v63 + inoutVec.v[0];
          v129.v[1] = v64 + inoutVec.v[1];
          v129.v[2] = v65 + inoutVec.v[2];
        }
        Physics_SetRigidBodyLinVel(PhysicsWorldId, v20.m_serialAndIndex, &v129);
        v67 = v110 * angVel.m_quad.m128_f32[1];
        v68 = v110 * angVel.m_quad.m128_f32[2];
        Ragdoll_EstimateRotationDeltaAxisAngle(&v140, &quat, &outAxisAngle);
        v69 = v103 * outAxisAngle.v[0];
        v70 = v103 * outAxisAngle.v[1];
        v72 = LODWORD(v103);
        v71 = v103 * outAxisAngle.v[2];
        Ragdoll_EstimateRotationDeltaAxisAngle((const vec4_t *)(v17 - 6), &quat, &v130);
        *(vec4_t *)(v17 - 6) = quat;
        v73 = v103 * v130.v[0];
        v74 = v103 * v130.v[1];
        v75 = v103 * v130.v[2];
        v76 = (float)(v103 * v130.v[0]) - v17[1];
        v77 = (float)(v103 * v130.v[1]) - v17[2];
        v78 = (float)(v103 * v130.v[2]) - v17[3];
        v17[1] = v103 * v130.v[0];
        v17[2] = v74;
        v17[3] = v75;
        v79 = (float)((float)(value * v102) * v76) + (float)(v30 * v110);
        v80 = (float)((float)(value * v102) * v77) + v67;
        v81 = (float)((float)(value * v102) * v78) + v68;
        v130.v[0] = v73 - v79;
        v130.v[1] = v74 - v80;
        v130.v[2] = v75 - v81;
        v82 = (float)(v106 * v102) * (float)(v74 - v80);
        v83 = (float)(v106 * v102) * (float)(v75 - v81);
        v84 = (float)((float)(v106 * v102) * (float)(v73 - v79)) + v79;
        v85 = v82 + v80;
        v86 = v83 + v81;
        outAxisAngle.v[0] = v69 - v84;
        outAxisAngle.v[1] = v70 - v85;
        *(float *)&v72 = v71 - (float)(v83 + v81);
        _XMM1 = v72;
        outAxisAngle.v[2] = v71 - v86;
        v88 = v102;
        v89 = (float)(v102 * v107) * (float)(v69 - v84);
        v90 = (float)(v102 * v107) * (float)(v70 - v85);
        v91 = (float)(v102 * v107) * (float)(v71 - v86);
        _XMM13 = 0i64;
        if ( v114 < 0.0 )
        {
          __asm { vxorpd  xmm1, xmm1, xmm1 }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_vector.h", 524, ASSERT_TYPE_ASSERT, "( maxLength ) >= ( 0.0f )", "%s >= %s\n\t%g, %g", "maxLength", "0.0f", v114, *(double *)&_XMM1) )
            __debugbreak();
          v88 = v102;
        }
        v93 = (float)((float)((float)((float)(v102 * v107) * (float)(v69 - v84)) * (float)((float)(v102 * v107) * (float)(v69 - v84))) + (float)(v90 * v90)) + (float)(v91 * v91);
        if ( v93 > (float)(v114 * v114) )
        {
          v94 = fsqrt(v93);
          v89 = v89 * (float)(v114 / v94);
          v90 = v90 * (float)(v114 / v94);
          v91 = v91 * (float)(v114 / v94);
        }
        v95 = v84 + v89;
        v132.v[0] = v95;
        v96 = v85 + v90;
        v132.v[1] = v96;
        v97 = v86 + v91;
        v132.v[2] = v86 + v91;
        v98 = v88 * v108;
        if ( (float)(v88 * v108) > 0.0 )
        {
          Ragdoll_EstimateRotationDeltaAxisAngle(&v140, &from, &v123);
          v123.v[0] = v98 * (float)((float)(v103 * v123.v[0]) - v95);
          v123.v[1] = (float)((float)(v103 * v123.v[1]) - v96) * v98;
          v123.v[2] = (float)((float)(v103 * v123.v[2]) - v97) * v98;
          Ragdoll_ClipSnapVector(*(float *)&v116, (float)(v98 * v115) * v103, &v123);
          v132.v[0] = v95 + v123.v[0];
          v132.v[1] = v96 + v123.v[1];
          v132.v[2] = v97 + v123.v[2];
        }
        Physics_SetRigidBodyAngVel(PhysicsWorldId, v20.m_serialAndIndex, &v132);
        ++v15;
        v19 = ++bones;
        v16 += 7;
        v17 += 13;
        v8 = FLOAT_1_0;
        v14 = v110;
        v13 = v117;
        v18 = FLOAT_32_0;
        physicsInstanceId = instanceId;
      }
      while ( v15 < (int)v109 );
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
RagdollPoseController_GetPositionControlWeight
==============
*/
float RagdollPoseController_GetPositionControlWeight(const RagdollPoseController *controller)
{
  return (float)(ragdoll_poseController_weight->current.value * controller->weight) * controller->rootControlWeight;
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
  return ragdoll_poseController_weight->current.value * controller->weight;
}

/*
==============
RagdollPoseController_InitializeBoneStates
==============
*/
void RagdollPoseController_InitializeBoneStates(RagdollPoseController *controller, const Ragdoll *ragdoll)
{
  RagdollPoseController *v3; 
  __int64 numBones; 
  Physics_WorldId PhysicsWorldId; 
  unsigned int physicsInstanceId; 
  unsigned int v7; 
  Physics_WorldId v8; 
  __int64 v9; 
  float *v10; 
  hknpBodyId v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec4_t v16; 
  float v17; 
  __int64 v18; 
  hknpBodyId result; 
  RagdollPoseController *v20; 
  vec3_t centerOfMass; 
  vec4_t orientation; 
  hkVector4f linVel; 
  hkVector4f angVel; 
  vec3_t position; 

  v20 = controller;
  v3 = controller;
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
  v7 = 0;
  v8 = PhysicsWorldId;
  v9 = numBones;
  if ( (int)numBones > 0 )
  {
    v10 = &v3->boneStates[0].prevPosition.v[2];
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v8 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v18) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v18) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v18) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v18) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
      {
        LODWORD(v18) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v18) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v18) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v18) )
          __debugbreak();
      }
      v11.m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, v8, physicsInstanceId, v7)->m_serialAndIndex;
      if ( (v11.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll_pose_controller.cpp", 24, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Physics_GetRigidBodyCenterOfMass(v8, v11.m_serialAndIndex, &centerOfMass);
      Physics_GetRigidBodyTransform(v8, v11.m_serialAndIndex, &position, &orientation);
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 311, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v8 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v18) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 312, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v18) )
          __debugbreak();
      }
      if ( (v11.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
      {
        LODWORD(v18) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 313, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinAngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v18) )
          __debugbreak();
      }
      HavokPhysics_GetRigidBodyLinAngVel(v8, v11, &linVel, &angVel);
      v12 = centerOfMass.v[0];
      v13 = 32.0 * linVel.m_quad.m128_f32[0];
      v14 = 32.0 * linVel.m_quad.m128_f32[1];
      v15 = 32.0 * linVel.m_quad.m128_f32[2];
      *(v10 - 1) = centerOfMass.v[1];
      v16 = orientation;
      *(v10 - 2) = v12;
      *v10 = centerOfMass.v[2];
      v17 = angVel.m_quad.m128_f32[1];
      *(vec4_t *)(v10 + 1) = v16;
      LODWORD(v16.v[0]) = angVel.m_quad.m128_i32[0];
      v10[5] = v13;
      v10[6] = v14;
      v10[7] = v15;
      v10[8] = v16.v[0];
      v10[10] = angVel.m_quad.m128_f32[2];
      v10[9] = v17;
      v10 += 13;
      ++v7;
      --v9;
    }
    while ( v9 );
    v3 = v20;
  }
  v3->initialized = 1;
}

/*
==============
RagdollPoseController_IsActive
==============
*/
bool RagdollPoseController_IsActive(const RagdollPoseController *controller)
{
  return controller->weight > 0.0;
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
void RagdollPoseController_SetRootControlWeight(RagdollPoseController *controller, float weight)
{
  controller->rootControlWeight = weight;
  controller->rootControlTargetWeight = weight;
  controller->rootControlBlendTime = 0.0;
}

/*
==============
RagdollPoseController_SetWeight
==============
*/
void RagdollPoseController_SetWeight(RagdollPoseController *controller, float weight)
{
  controller->weight = weight;
  controller->blendTargetWeight = weight;
  controller->blendTime = 0.0;
}

/*
==============
RagdollPoseController_Update
==============
*/
void RagdollPoseController_Update(RagdollPoseController *controller, const Ragdoll *ragdoll, float deltaTime)
{
  float weight; 
  float blendTime; 
  double v7; 
  __int128 blendTime_low; 
  float rootControlBlendTime; 
  double v12; 
  float v13; 
  __int128 rootControlBlendTime_low; 

  if ( !controller->initialized )
  {
    if ( controller->weight == 0.0 && controller->blendTargetWeight == 0.0 )
      return;
    RagdollPoseController_InitializeBoneStates(controller, ragdoll);
  }
  weight = controller->weight;
  if ( controller->weight == 1.0 && controller->blendTime == 0.0 && ragdoll_poseController_maxControlDuration->current.value < controller->activeTime )
    *(_QWORD *)&controller->blendTime = ragdoll_poseController_defaultBlendDuration->current.unsignedInt;
  blendTime = controller->blendTime;
  if ( blendTime > 0.0 )
  {
    v7 = I_fclamp(deltaTime / blendTime, 0.0, 1.0);
    weight = (float)((float)(controller->blendTargetWeight - controller->weight) * *(float *)&v7) + controller->weight;
    blendTime_low = LODWORD(controller->blendTime);
    *(float *)&blendTime_low = controller->blendTime - deltaTime;
    _XMM0 = blendTime_low;
    __asm { vmaxss  xmm0, xmm0, xmm6 }
    controller->blendTime = *(float *)&_XMM0;
    controller->weight = weight;
  }
  rootControlBlendTime = controller->rootControlBlendTime;
  if ( rootControlBlendTime > 0.0 )
  {
    v12 = I_fclamp(deltaTime / rootControlBlendTime, 0.0, 1.0);
    v13 = (float)((float)(controller->rootControlTargetWeight - controller->rootControlWeight) * *(float *)&v12) + controller->rootControlWeight;
    weight = controller->weight;
    rootControlBlendTime_low = LODWORD(controller->rootControlBlendTime);
    *(float *)&rootControlBlendTime_low = controller->rootControlBlendTime - deltaTime;
    _XMM0 = rootControlBlendTime_low;
    __asm { vmaxss  xmm0, xmm0, xmm6 }
    controller->rootControlBlendTime = *(float *)&_XMM0;
    controller->rootControlWeight = v13;
  }
  if ( (float)(weight * ragdoll_poseController_weight->current.value) == 0.0 )
    controller->initialized = 0;
}

/*
==============
Ragdoll_ClipSnapVector
==============
*/
float Ragdoll_ClipSnapVector(float snapMaxVelocity, float maxDist, vec3_t *inoutVec)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float result; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  v3 = inoutVec->v[1];
  v4 = inoutVec->v[0];
  v5 = inoutVec->v[2];
  v6 = snapMaxVelocity * snapMaxVelocity;
  result = 0.0;
  v9 = (float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5);
  if ( v6 != 0.0 )
  {
    v10 = (float)((float)((float)(v4 * v4) + (float)(v3 * v3)) + (float)(v5 * v5)) / v6;
    if ( v9 > v6 )
    {
      if ( v9 >= (float)(maxDist * maxDist) )
      {
        v12 = (float)(snapMaxVelocity * maxDist) * (float)(1.0 / v9);
        inoutVec->v[0] = v4 * v12;
        inoutVec->v[2] = v5 * v12;
        inoutVec->v[1] = v3 * v12;
      }
      else
      {
        v11 = fsqrt((float)(1.0 / v9) * v6);
        inoutVec->v[0] = v4 * v11;
        inoutVec->v[2] = v5 * v11;
        inoutVec->v[1] = v3 * v11;
      }
    }
    return v10;
  }
  return result;
}

/*
==============
Ragdoll_EstimateRotationDeltaAxisAngle
==============
*/
void Ragdoll_EstimateRotationDeltaAxisAngle(const vec4_t *from, const vec4_t *to, vec3_t *outAxisAngle)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  char v15[16]; 

  if ( from == (const vec4_t *)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
    __debugbreak();
  if ( to == (const vec4_t *)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  v6 = to->v[2];
  v7 = from->v[1];
  v8 = to->v[1];
  v9 = from->v[2];
  v10 = from->v[3];
  v11 = to->v[3];
  v12 = (float)((float)((float)((float)(from->v[0] * v8) - (float)(to->v[0] * v7)) + (float)(v6 * v10)) + (float)(v9 * COERCE_FLOAT(LODWORD(v11) ^ _xmm))) * 2.0;
  v13 = (float)((float)((float)((float)(v7 * v6) - (float)(v9 * v8)) + (float)(to->v[0] * v10)) + (float)(from->v[0] * COERCE_FLOAT(LODWORD(v11) ^ _xmm))) * 2.0;
  v14 = (float)((float)((float)((float)(to->v[0] * v9) - (float)(from->v[0] * v6)) + (float)(v8 * v10)) + (float)(v7 * COERCE_FLOAT(LODWORD(v11) ^ _xmm))) * 2.0;
  if ( (float)((float)((float)((float)(from->v[0] * to->v[0]) + (float)(v8 * v7)) + (float)(v9 * v6)) + (float)(v11 * v10)) < 0.0 )
  {
    outAxisAngle->v[0] = COERCE_FLOAT(LODWORD(v13) ^ _xmm);
    outAxisAngle->v[2] = COERCE_FLOAT(LODWORD(v12) ^ _xmm);
    LODWORD(v14) ^= _xmm;
  }
  else
  {
    outAxisAngle->v[0] = v13;
    outAxisAngle->v[2] = v12;
  }
  outAxisAngle->v[1] = v14;
}


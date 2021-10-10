/*
==============
RagdollConstraint::RagdollConstraint
==============
*/

void __fastcall RagdollConstraint::RagdollConstraint(RagdollConstraint *this)
{
  ??0RagdollConstraint@@QEAA@XZ(this);
}

/*
==============
CG_RagdollCallback_ExitRunning
==============
*/

void __fastcall CG_RagdollCallback_ExitRunning(LocalClientNum_t localClientNum, int entityNum, int ragdollHandle)
{
  ?CG_RagdollCallback_ExitRunning@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, entityNum, ragdollHandle);
}

/*
==============
CG_RagdollCallback_EnterRunning
==============
*/

void __fastcall CG_RagdollCallback_EnterRunning(LocalClientNum_t localClientNum, int entityNum, int ragdollHandle)
{
  ?CG_RagdollCallback_EnterRunning@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, entityNum, ragdollHandle);
}

/*
==============
CG_RagdollCallback_UpdateRunning
==============
*/

void __fastcall CG_RagdollCallback_UpdateRunning(LocalClientNum_t localClientNum, int entityNum, int ragdollHandle)
{
  ?CG_RagdollCallback_UpdateRunning@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, entityNum, ragdollHandle);
}

/*
==============
RagdollConstraint::RagdollConstraint
==============
*/
void RagdollConstraint::RagdollConstraint(RagdollConstraint *this)
{
  this->clientNum = LOCAL_CLIENT_INVALID;
  this->ragdollHandle = 0;
  this->rootBodyRadius = 0.0;
  this->constraintCount = 0;
  *(_WORD *)&this->creationFailed = 0;
  *(_QWORD *)&this->markPenetratingTime = 0i64;
  *(_QWORD *)&this->authInstanceId = -1i64;
  *(_OWORD *)&this->constraintId = 0x7FFFFFFFui64;
  *(_QWORD *)this->prevConstraintVel.v = 0i64;
  this->prevConstraintVel.v[2] = 0.0;
  memset_0(this->initialFriction, 0, sizeof(this->initialFriction));
}

/*
==============
BreakableConstraintHandler
==============
*/
void BreakableConstraintHandler(const hknpEventHandlerInput *input, const hknpEvent *event)
{
  RagdollConstraint *v2; 
  bool v3; 
  LocalClientNum_t clientNum; 
  int v5; 
  unsigned int RigidBodyID; 
  const dvar_t *v7; 
  float value; 
  float v9; 
  int v10; 
  char v11[8]; 
  vec3_t linVel; 
  int v13[4]; 

  v2 = s_ragdollConstraint;
  while ( v2->constraintId != *(_DWORD *)&event[1].m_filterBits )
  {
    if ( (__int64)++v2 >= (__int64)&unk_1512291C0 )
      return;
  }
  CG_RagdollCallback_DestroyConstraint(v2->clientNum, v2);
  v3 = v2->authInstanceId == -1;
  clientNum = v2->clientNum;
  v2->broken = 1;
  v5 = 3 * clientNum + 3;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 934, ASSERT_TYPE_ASSERT, "(data.authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data.authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( v2->hitBodyIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 935, ASSERT_TYPE_ASSERT, "(data.hitBodyIdx != 0xFFFFFFFF)", (const char *)&queryFormat, "data.hitBodyIdx != PHYSICSBODYINDEX_INVALID") )
    __debugbreak();
  RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v5, v2->authInstanceId, v2->hitBodyIdx);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 937, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  Physics_GetRigidBodyLinVel((const Physics_WorldId)v5, RigidBodyID, &linVel);
  v7 = DCONST_DVARFLT_cg_impaleBreakVelocityScale;
  if ( !DCONST_DVARFLT_cg_impaleBreakVelocityScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleBreakVelocityScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  value = v7->current.value;
  linVel.v[0] = value * linVel.v[0];
  linVel.v[1] = value * linVel.v[1];
  linVel.v[2] = value * linVel.v[2];
  Physics_SetRigidBodyLinVel((const Physics_WorldId)v5, RigidBodyID, &linVel);
  v9 = 0.03125 * v2->prevConstraintPos.v[0];
  *(float *)&v10 = 0.03125 * v2->prevConstraintPos.v[2];
  *(float *)&v13[1] = 0.03125 * v2->prevConstraintPos.v[1];
  *(float *)&v13[3] = 0.0;
  *(float *)v13 = v9;
  v13[2] = v10;
  ((void (__fastcall *)(hkDebugDisplay *, char *, _QWORD, const char *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display3dText)(hkDebugDisplay::singleton.m_ptr, v11, 0i64, "Constraint Broken", v13, hkColor::ORANGERED, hkDebugDisplayProcess::s_tag);
}

/*
==============
CG_RagdollCallback_ApplyVelocityToBodies
==============
*/
void CG_RagdollCallback_ApplyVelocityToBodies(LocalClientNum_t localClientNum, RagdollConstraint *data, const centity_t *constraintEnt)
{
  cg_t *LocalClientGlobals; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  float value; 
  __int32 v16; 
  int NumRigidBodys; 
  signed int i; 
  unsigned int authInstanceId; 
  unsigned int m_serialAndIndex; 
  int v21; 
  hknpWorld *world; 
  __int64 v23; 
  __m128 v24; 
  float v25; 
  float v26; 
  float *v27; 
  __int64 v28; 
  vec3_t outOrigin; 
  hknpBodyId result; 
  __int64 v31; 
  int v32[4]; 
  int v33[4]; 
  vec3_t linVel; 

  v31 = -2i64;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 589, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 590, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( data->hitBodyIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 591, ASSERT_TYPE_ASSERT, "(data->hitBodyIdx != 0xFFFFFFFF)", (const char *)&queryFormat, "data->hitBodyIdx != PHYSICSBODYINDEX_INVALID") )
    __debugbreak();
  if ( data->constraintId == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 592, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( data->constraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( data->constraintId )") )
    __debugbreak();
  if ( !constraintEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 593, ASSERT_TYPE_ASSERT, "(constraintEnt)", (const char *)&queryFormat, "constraintEnt") )
    __debugbreak();
  if ( (constraintEnt->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 594, ASSERT_TYPE_ASSERT, "(CENextValid( constraintEnt ))", (const char *)&queryFormat, "CENextValid( constraintEnt )") )
    __debugbreak();
  if ( constraintEnt->nextState.eType != ET_RAGDOLL_CONSTRAINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 595, ASSERT_TYPE_ASSERT, "(constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 598, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->frametime > 0 )
  {
    CG_GetPoseOrigin(&constraintEnt->pose, &outOrigin);
    v7 = 1000.0 / (float)LocalClientGlobals->frametime;
    v8 = (float)(outOrigin.v[0] - data->prevConstraintPos.v[0]) * v7;
    v9 = (float)(outOrigin.v[1] - data->prevConstraintPos.v[1]) * v7;
    v10 = (float)(outOrigin.v[2] - data->prevConstraintPos.v[2]) * v7;
    v11 = v8 - data->prevConstraintVel.v[0];
    *(float *)v32 = v11;
    v12 = v9 - data->prevConstraintVel.v[1];
    *(float *)&v32[1] = v12;
    v13 = v10 - data->prevConstraintVel.v[2];
    *(float *)&v32[2] = v13;
    v14 = DCONST_DVARFLT_cg_impaleVelocityAdjust;
    if ( !DCONST_DVARFLT_cg_impaleVelocityAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleVelocityAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    value = v14->current.value;
    *(float *)v33 = v11 * value;
    *(float *)&v33[1] = v12 * value;
    *(float *)&v33[2] = v13 * value;
    v16 = 3 * localClientNum + 3;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v16, data->authInstanceId);
    if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 624, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
      __debugbreak();
    for ( i = 0; i < NumRigidBodys; ++i )
    {
      authInstanceId = data->authInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v16 > 7 )
      {
        LODWORD(v28) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
          __debugbreak();
      }
      if ( authInstanceId == -1 )
      {
        LODWORD(v28) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v28) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v16 - 2) <= 5 )
      {
        LODWORD(v28) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v16 <= 1 )
      {
        LODWORD(v28) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v16, authInstanceId, i)->m_serialAndIndex;
      v21 = m_serialAndIndex & 0xFFFFFF;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 628, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 275, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v16 > 7 )
      {
        LODWORD(v28) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 276, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
          __debugbreak();
      }
      if ( v21 == 0xFFFFFF )
      {
        LODWORD(v28) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 277, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v28) )
          __debugbreak();
      }
      if ( (unsigned int)v16 > 7 )
      {
        LODWORD(v28) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 403, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
          __debugbreak();
      }
      if ( v21 == 0xFFFFFF )
      {
        LODWORD(v28) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 404, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v28) )
          __debugbreak();
      }
      world = HavokPhysics_GetConstWorld((Physics_WorldId)v16)->world;
      if ( !world )
      {
        LODWORD(v28) = v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 408, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v28) )
          __debugbreak();
      }
      v23 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, m_serialAndIndex);
      v24 = *(__m128 *)(((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v23 + 64)) + 64);
      v25 = _mm_shuffle_ps(v24, v24, 85).m128_f32[0] * 32.0;
      v26 = _mm_shuffle_ps(v24, v24, 170).m128_f32[0] * 32.0;
      v27 = (float *)v32;
      if ( i != data->hitBodyIdx )
        v27 = (float *)v33;
      linVel.v[0] = (float)(v24.m128_f32[0] * 32.0) + *v27;
      linVel.v[1] = v25 + v27[1];
      linVel.v[2] = v26 + v27[2];
      Physics_SetRigidBodyLinVel((const Physics_WorldId)v16, m_serialAndIndex, &linVel);
    }
    data->prevConstraintPos = outOrigin;
    data->prevConstraintVel.v[0] = v8;
    data->prevConstraintVel.v[1] = v9;
    data->prevConstraintVel.v[2] = v10;
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
CG_RagdollCallback_CaptureInitialFriction
==============
*/
void CG_RagdollCallback_CaptureInitialFriction(LocalClientNum_t localClientNum, RagdollConstraint *data)
{
  __int32 v4; 
  hknpWorld *World; 
  int NumConstraints; 
  unsigned int v7; 
  float *i; 
  unsigned int authInstanceId; 
  __int64 m_value; 
  float *m_ptr; 
  int v12; 
  float v13; 
  int v14; 
  __int64 v15; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> result; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 786, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 787, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v4 = 3 * localClientNum + 3;
  World = HavokPhysics_GetWorld((Physics_WorldId)v4);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 792, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v4, data->authInstanceId);
  data->constraintCount = NumConstraints;
  if ( NumConstraints >= 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 794, ASSERT_TYPE_ASSERT, "(data->constraintCount < 64)", "%s\n\ttoo many constraints in ragdoll", "data->constraintCount < RAGDOLL_MAX_BONES") )
    __debugbreak();
  v7 = 0;
  if ( data->constraintCount > 0 )
  {
    for ( i = data->initialFriction; ; ++i )
    {
      authInstanceId = data->authInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v4 > 7 )
      {
        LODWORD(v15) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
          __debugbreak();
      }
      if ( authInstanceId == -1 )
      {
        LODWORD(v15) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v15) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v4 - 2) <= 5 )
      {
        LODWORD(v15) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v15) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v4 <= 1 )
      {
        LODWORD(v15) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v15) )
          __debugbreak();
      }
      m_value = (int)HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v4, authInstanceId, v7)->m_value;
      if ( (_DWORD)m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 800, ASSERT_TYPE_ASSERT, "(hConstraintId.isValid())", (const char *)&queryFormat, "hConstraintId.isValid()") )
        __debugbreak();
      m_ptr = (float *)World->m_constraintManager->m_constraints.m_objects.m_data[m_value].m_pod.m_data.m_ptr;
      if ( !m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 803, ASSERT_TYPE_ASSERT, "(constraintData)", (const char *)&queryFormat, "constraintData") )
        __debugbreak();
      v12 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)m_ptr + 24i64))(m_ptr);
      if ( v12 == 2 )
        break;
      if ( v12 == 7 )
      {
        v13 = m_ptr[74];
        if ( v13 <= 0.0 )
        {
          v14 = 821;
LABEL_44:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", v14, ASSERT_TYPE_ASSERT, "(initialFriction > 0.0f)", "%s\n\tInvalid ragdoll constraint friction value encountered. %f", "initialFriction > 0.0f", v13) )
            __debugbreak();
        }
        goto LABEL_46;
      }
LABEL_47:
      if ( (signed int)++v7 >= data->constraintCount )
        return;
    }
    v13 = m_ptr[58];
    if ( v13 <= 0.0 )
    {
      v14 = 813;
      goto LABEL_44;
    }
LABEL_46:
    *i = v13;
    goto LABEL_47;
  }
}

/*
==============
CG_RagdollCallback_CreateConstraint
==============
*/
char CG_RagdollCallback_CreateConstraint(LocalClientNum_t localClientNum, int entityNum, RagdollConstraint *data)
{
  __int128 v3; 
  const dvar_t *v8; 
  float value; 
  centity_t *Entity; 
  unsigned int eType; 
  int v12; 
  centity_t *v13; 
  int v14; 
  int ragdollHandle; 
  hitLocation_t v16; 
  int v17; 
  hitLocation_t v18; 
  int *p_hitBodyIdx; 
  bool BodyIdxForHitLocation; 
  bool v21; 
  double RootRadius; 
  unsigned int v23; 
  unsigned int v24; 
  const dvar_t *v25; 
  int integer; 
  int Int_Internal_DebugName; 
  LocalClientNum_t v28; 
  RagdollWarpMode v29; 
  int hitBodyIdx; 
  double Float_Internal_DebugName; 
  float v32; 
  double v33; 
  float v34; 
  double v35; 
  float v36; 
  float v37; 
  float *outBodyRadius; 
  float *outBodyRadiusa; 
  __int64 angleMin; 
  hitLocation_t outHitLocation; 
  int outBodyIdx; 
  float v43; 
  float v44; 
  LocalClientNum_t localClientNuma; 
  cg_t *LocalClientGlobals; 
  tmat43_t<vec3_t> axis; 
  vec3_t outWorldHitPos; 
  vec3_t outWarpedRagdollHitPos; 
  __int128 v50; 

  localClientNuma = localClientNum;
  if ( (unsigned int)entityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, 2048) )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 246, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !data->ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 247, ASSERT_TYPE_ASSERT, "(data->ragdollHandle != 0)", (const char *)&queryFormat, "data->ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( data->constraintId != 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 248, ASSERT_TYPE_ASSERT, "(!Physics_IsConstraintIdValid( data->constraintId ))", (const char *)&queryFormat, "!Physics_IsConstraintIdValid( data->constraintId )") )
    __debugbreak();
  if ( data->creationFailed )
    return 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 257, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v8 = DCONST_DVARFLT_cg_impaleFailBoneSpeed;
  if ( !DCONST_DVARFLT_cg_impaleFailBoneSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleFailBoneSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  Entity = CG_GetEntity(localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 262, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 263, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)Entity->nextState.eType;
  if ( (unsigned __int16)eType > 0x15u || (v12 = 2359300, !_bittest(&v12, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 264, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &cent->nextState )") )
      __debugbreak();
  }
  if ( Entity->typeData.flightDurationMs == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 265, ASSERT_TYPE_ASSERT, "(cent->typeData.ragdollConstraintEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "cent->typeData.ragdollConstraintEnt != ENTITYNUM_NONE") )
    __debugbreak();
  if ( Entity->typeData.flightDurationMs >= 0x800u )
  {
    LODWORD(angleMin) = 2048;
    LODWORD(outBodyRadius) = Entity->typeData.flightDurationMs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 266, ASSERT_TYPE_ASSERT, "(unsigned)( cent->typeData.ragdollConstraintEnt ) < (unsigned)( ( 2048 ) )", "cent->typeData.ragdollConstraintEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outBodyRadius, angleMin) )
      __debugbreak();
  }
  v13 = CG_GetEntity(localClientNum, Entity->typeData.flightDurationMs);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 270, ASSERT_TYPE_ASSERT, "(constraintEnt)", (const char *)&queryFormat, "constraintEnt") )
    __debugbreak();
  if ( (v13->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 271, ASSERT_TYPE_ASSERT, "(CENextValid( constraintEnt ))", (const char *)&queryFormat, "CENextValid( constraintEnt )") )
    __debugbreak();
  if ( v13->nextState.eType != ET_RAGDOLL_CONSTRAINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 272, ASSERT_TYPE_ASSERT, "(constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT") )
    __debugbreak();
  AnglesToAxis(&v13->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&v13->pose, &axis.m[3]);
  v14 = 0;
  outHitLocation = HITLOC_NONE;
  if ( !CG_RagdollCallback_DecodeConstraint(localClientNum, Entity, (const RagdollHitLocationInfo *)&v13->nextState.lerp.u, &outHitLocation, &outWorldHitPos) )
  {
    ragdollHandle = data->ragdollHandle;
    data->creationFailed = 1;
    Ragdoll_ApplyVelocity(ragdollHandle, 0, axis.m, value);
    return 0;
  }
  v16 = outHitLocation;
  if ( (unsigned int)outHitLocation >= HITLOC_NUM )
  {
    LODWORD(angleMin) = 22;
    LODWORD(outBodyRadius) = outHitLocation;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 289, ASSERT_TYPE_ASSERT, "(unsigned)( hitLoc ) < (unsigned)( HITLOC_NUM )", "hitLoc doesn't index HITLOC_NUM\n\t%i not in [0, %i)", outBodyRadius, angleMin) )
      __debugbreak();
  }
  if ( v16 == HITLOC_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 290, ASSERT_TYPE_ASSERT, "(hitLoc != HITLOC_NONE)", (const char *)&queryFormat, "hitLoc != HITLOC_NONE") )
    __debugbreak();
  v17 = data->ragdollHandle;
  v18 = 3 * localClientNum + 3;
  outHitLocation = v18;
  p_hitBodyIdx = &data->hitBodyIdx;
  outBodyIdx = -1;
  v44 = 0.0;
  v43 = 0.0;
  BodyIdxForHitLocation = Ragdoll_GetBodyIdxForHitLocation((Physics_WorldId)v18, v17, v16, &data->authInstanceId, &data->hitBodyIdx, &v43);
  v21 = Ragdoll_GetBodyIdxForHitLocation((Physics_WorldId)v18, data->ragdollHandle, HITLOC_TORSO_UPR, &data->authInstanceId, &outBodyIdx, &v44);
  if ( !BodyIdxForHitLocation || !v21 )
  {
    data->creationFailed = 1;
    if ( BodyIdxForHitLocation )
      v14 = *p_hitBodyIdx;
    hitBodyIdx = v14;
    goto LABEL_89;
  }
  RootRadius = Ragdoll_GetRootRadius(data->ragdollHandle);
  data->rootBodyRadius = *(float *)&RootRadius;
  if ( *(float *)&RootRadius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 307, ASSERT_TYPE_ASSERT, "(data->rootBodyRadius > 0.0f)", (const char *)&queryFormat, "data->rootBodyRadius > 0.0f") )
    __debugbreak();
  v23 = *p_hitBodyIdx;
  v24 = outBodyIdx;
  if ( !data->ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 891, ASSERT_TYPE_ASSERT, "(data->ragdollHandle != 0)", (const char *)&queryFormat, "data->ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( v24 >= 0x40 )
  {
    LODWORD(angleMin) = 64;
    LODWORD(outBodyRadiusa) = v24;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 892, ASSERT_TYPE_ASSERT, "(unsigned)( targetBodyIndex ) < (unsigned)( 64 )", "targetBodyIndex doesn't index RAGDOLL_MAX_BONES\n\t%i not in [0, %i)", outBodyRadiusa, angleMin) )
      __debugbreak();
  }
  if ( v23 >= 0x40 )
  {
    LODWORD(angleMin) = 64;
    LODWORD(outBodyRadiusa) = v23;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 893, ASSERT_TYPE_ASSERT, "(unsigned)( hitBodyIndex ) < (unsigned)( 64 )", "hitBodyIndex doesn't index RAGDOLL_MAX_BONES\n\t%i not in [0, %i)", outBodyRadiusa, angleMin) )
      __debugbreak();
  }
  v25 = DCONST_DVARINT_cg_impaleMaxBoneDistance;
  if ( !DCONST_DVARINT_cg_impaleMaxBoneDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleMaxBoneDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  integer = v25->current.integer;
  if ( Ragdoll_CountLinksBetween(data->ragdollHandle, v24, v23) > integer )
    goto LABEL_82;
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_impaleWarpMode, "cg_impaleWarpMode");
  v28 = localClientNuma;
  v29 = Int_Internal_DebugName;
  if ( LocalClientGlobals->oldTime < LocalClientGlobals->killCamEndTime )
    v29 = Warp_Full_TraceRootPath;
  if ( !CG_RagdollCallback_WarpRagdoll(localClientNuma, data, v29, &outWorldHitPos, &axis, &outWarpedRagdollHitPos) )
  {
    hitBodyIdx = data->hitBodyIdx;
    data->creationFailed = 1;
LABEL_89:
    Ragdoll_ApplyVelocity(data->ragdollHandle, hitBodyIdx, axis.m, value);
    return 0;
  }
  v50 = v3;
  CG_RagdollCallback_CaptureInitialFriction(v28, data);
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_impaleFriction, "cg_impaleFriction");
  v32 = *(float *)&Float_Internal_DebugName;
  v33 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_impaleMaxAngle, "cg_impaleMaxAngle");
  v34 = *(float *)&v33;
  v35 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_impaleBreakThreshold, "cg_impaleBreakThreshold");
  if ( !Physics_InstantiateHingeConstraint((Physics_WorldId)outHitLocation, data->authInstanceId, data->hitBodyIdx, &outWarpedRagdollHitPos, axis.m, v32, COERCE_FLOAT(LODWORD(v34) ^ _xmm), v34, *(float *)&v35, &data->constraintId) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 340, ASSERT_TYPE_ASSERT, "(createdConstraint)", (const char *)&queryFormat, "createdConstraint") )
      __debugbreak();
LABEL_82:
    hitBodyIdx = *p_hitBodyIdx;
    data->creationFailed = 1;
    goto LABEL_89;
  }
  v36 = axis.m[3].v[0];
  v37 = axis.m[3].v[1];
  data->clientNum = v28;
  data->prevConstraintPos.v[0] = v36;
  data->prevConstraintPos.v[2] = axis.m[3].v[2];
  data->prevConstraintPos.v[1] = v37;
  *(_QWORD *)data->prevConstraintVel.v = 0i64;
  data->prevConstraintVel.v[2] = 0.0;
  if ( v13->nextState.lerp.u.anonymous.data[2] )
    CG_RagdollCallback_StartFX(data, &axis);
  return 1;
}

/*
==============
CG_RagdollCallback_DecodeConstraint
==============
*/
char CG_RagdollCallback_DecodeConstraint(LocalClientNum_t localClientNum, const centity_t *corpseEnt, const RagdollHitLocationInfo *info, hitLocation_t *outHitLocation, vec3_t *outWorldHitPos)
{
  hitLocation_t v9; 
  unsigned int number; 
  unsigned int v11; 
  unsigned int v12; 
  const DObj *v13; 
  const char *BoneNameForHitLocation; 
  const char *v15; 
  scr_string_t LowercaseString; 
  int BoneIndexInternal_58; 
  int v18; 
  float v19; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t in1; 
  tmat43_t<vec3_t> outTagMat; 

  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 525, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !corpseEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 526, ASSERT_TYPE_ASSERT, "(corpseEnt)", (const char *)&queryFormat, "corpseEnt") )
    __debugbreak();
  if ( !outHitLocation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 527, ASSERT_TYPE_ASSERT, "(outHitLocation)", (const char *)&queryFormat, "outHitLocation") )
    __debugbreak();
  v9 = *(_BYTE *)info;
  if ( (unsigned int)v9 >= HITLOC_NUM )
  {
    LODWORD(v21) = *(_BYTE *)info;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 530, ASSERT_TYPE_ASSERT, "(unsigned)( hitLoc ) < (unsigned)( HITLOC_NUM )", "hitLoc doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v21, 22) )
      __debugbreak();
  }
  number = corpseEnt->nextState.number;
  if ( number > 0x9E4 )
  {
    LODWORD(v22) = corpseEnt->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v22) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v22) = 2;
    LODWORD(v21) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  v11 = 2533 * localClientNum + number;
  if ( v11 >= 0x13CA )
  {
    LODWORD(v22) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v22) )
      __debugbreak();
  }
  v12 = clientObjMap[v11];
  if ( !v12 )
    goto LABEL_42;
  if ( v12 >= (unsigned int)s_objCount )
  {
    LODWORD(v22) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v22) )
      __debugbreak();
  }
  v13 = (const DObj *)s_objBuf[v12];
  if ( !v13 )
  {
LABEL_42:
    Com_PrintWarning(20, "CG_RagdollCallback_DecodeConstraint(), failed to get DObj for corpse.");
    return 0;
  }
  BoneNameForHitLocation = Ragdoll_GetBoneNameForHitLocation(v9);
  v15 = BoneNameForHitLocation;
  if ( !BoneNameForHitLocation )
  {
    Com_PrintWarning(20, "CG_RagdollCallback_DecodeConstraint(), failed to find valid boneName for hitLoc %i.", (unsigned int)v9);
    return 0;
  }
  LowercaseString = SL_FindLowercaseString(BoneNameForHitLocation);
  if ( !LowercaseString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 546, ASSERT_TYPE_ASSERT, "(boneNameScr != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneNameScr != NULL_SCR_STRING") )
    __debugbreak();
  inOutIndex[0] = -2;
  DObjLock(v13);
  BoneIndexInternal_58 = DObjGetBoneIndexInternal_58(v13, LowercaseString, inOutIndex, &modelIndex);
  DObjUnlock(v13);
  if ( !BoneIndexInternal_58 )
  {
    Com_PrintWarning(20, "CG_RagdollCallback_DecodeConstraint(), failed to get bone index for bone name %s.", v15);
    return 0;
  }
  v18 = *((char *)info + 2);
  in1.v[0] = (float)*((char *)info + 1);
  v19 = (float)*((char *)info + 3);
  in1.v[1] = (float)v18;
  in1.v[2] = v19;
  if ( !CG_DObjGetWorldBoneMatrix(&corpseEnt->pose, v13, inOutIndex[0], (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
  {
    Com_PrintWarning(20, "CG_RagdollCallback_DecodeConstraint(), failed to get bone transform for bone name %s.", v15);
    return 0;
  }
  MatrixTransformVector43(&in1, &outTagMat, outWorldHitPos);
  modelIndex = LODWORD(outWorldHitPos->v[0]);
  if ( (modelIndex & 0x7F800000) == 2139095040 || (modelIndex = LODWORD(outWorldHitPos->v[1]), (modelIndex & 0x7F800000) == 2139095040) || (modelIndex = LODWORD(outWorldHitPos->v[2]), (modelIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 578, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outWorldHitPos )[0] ) && !IS_NAN( ( outWorldHitPos )[1] ) && !IS_NAN( ( outWorldHitPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outWorldHitPos )[0] ) && !IS_NAN( ( outWorldHitPos )[1] ) && !IS_NAN( ( outWorldHitPos )[2] )") )
      __debugbreak();
  }
  *outHitLocation = v9;
  return 1;
}

/*
==============
CG_RagdollCallback_DestroyConstraint
==============
*/
char CG_RagdollCallback_DestroyConstraint(LocalClientNum_t localClientNum, RagdollConstraint *data)
{
  __int32 v4; 
  unsigned int v5; 
  unsigned int NumConstraints; 
  unsigned int authInstanceId; 
  bool v9; 
  ParticleManager *ParticleManager; 
  __int64 v11; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> result; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 365, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !data->ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 366, ASSERT_TYPE_ASSERT, "(data->ragdollHandle != 0)", (const char *)&queryFormat, "data->ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( data->constraintId == 0x7FFFFFFF )
    return 1;
  if ( data->clientNum != localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 370, ASSERT_TYPE_ASSERT, "(data->clientNum == localClientNum)", (const char *)&queryFormat, "data->clientNum == localClientNum") )
    __debugbreak();
  if ( data->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 371, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  CG_RagdollCallback_SetFrictionScale(localClientNum, data, 1.0);
  CG_RagdollCallback_MarkPenetrating(data, (const LocalClientNum_t)data->clientNum);
  v4 = 3 * localClientNum + 3;
  v5 = 0;
  NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v4, data->authInstanceId);
  if ( NumConstraints )
  {
    while ( 1 )
    {
      authInstanceId = data->authInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v4 > 7 )
      {
        LODWORD(v11) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v11) )
          __debugbreak();
      }
      if ( authInstanceId == -1 )
      {
        LODWORD(v11) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v11) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v4 - 2) <= 5 )
      {
        LODWORD(v11) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v11) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v4 <= 1 )
      {
        LODWORD(v11) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v11) )
          __debugbreak();
      }
      if ( HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v4, authInstanceId, v5)->m_value == data->constraintId )
        break;
      if ( ++v5 >= NumConstraints )
        goto LABEL_34;
    }
    Physics_DestroyConstraint((Physics_WorldId)v4, data->authInstanceId, v5, 0);
    v9 = data->clientNum == LOCAL_CLIENT_INVALID;
    data->constraintId = 0x7FFFFFFF;
    if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 1012, ASSERT_TYPE_ASSERT, "(data->clientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "data->clientNum != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    if ( data->spikeFx )
    {
      ParticleManager = ParticleManager::GetParticleManager(data->clientNum);
      ParticleManager::StopSystem(ParticleManager, data->spikeFx);
      data->spikeFx = PARTICLE_SYSTEM_INVALID_HANDLE;
    }
    return 1;
  }
LABEL_34:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 396, ASSERT_TYPE_ASSERT, "(0)", "%s\n\tFailed to destroy ragdoll constraint.", "0") )
    __debugbreak();
  return 0;
}

/*
==============
CG_RagdollCallback_EnterRunning
==============
*/
void CG_RagdollCallback_EnterRunning(LocalClientNum_t localClientNum, int entityNum, int ragdollHandle)
{
  __int64 v3; 
  int *p_ragdollHandle; 
  hknpWorld *World; 
  hknpEventSignal *EventSignal; 
  __int64 v8; 
  __int64 v9; 

  v3 = ragdollHandle;
  if ( (unsigned int)entityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 138, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, 2048) )
    __debugbreak();
  if ( (unsigned int)(v3 - 1) > 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 140, ASSERT_TYPE_ASSERT, "(0 < ragdollHandle && ragdollHandle <= 64)", (const char *)&queryFormat, "RAGDOLL_INVALID < ragdollHandle && ragdollHandle <= RAGDOLL_MAX") )
    __debugbreak();
  if ( (unsigned int)(v3 - 1) >= 0x40 )
  {
    LODWORD(v9) = 64;
    LODWORD(v8) = v3 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollIndex ) < (unsigned)( 64 )", "ragdollIndex doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE|0x80) )
  {
    p_ragdollHandle = &s_ragdollConstraint[v3 - 1].ragdollHandle;
    if ( *p_ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 150, ASSERT_TYPE_ASSERT, "(data.ragdollHandle == 0)", (const char *)&queryFormat, "data.ragdollHandle == RAGDOLL_INVALID") )
      __debugbreak();
    *p_ragdollHandle = v3;
    if ( 3 * localClientNum == -4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 156, ASSERT_TYPE_ASSERT, "(authWorldId != PHYSICS_WORLD_ID_INVALID)", (const char *)&queryFormat, "authWorldId != PHYSICS_WORLD_ID_INVALID") )
      __debugbreak();
    World = HavokPhysics_GetWorld((Physics_WorldId)(3 * localClientNum + 3));
    if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 158, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
      __debugbreak();
    EventSignal = hknpWorld::getEventSignal(World, CONSTRAINT_FORCE_EXCEEDED, (hknpBodyId)0xFFFFFF);
    if ( !hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::hasSubscription<hknpEventSignal,void (*)(hknpEventHandlerInput const &,hknpEvent const &)>(EventSignal, NULL, BreakableConstraintHandler) )
      hkSignal2<hknpEventHandlerInput const &,hknpEvent const &>::subscribe<void (*)(hknpEventHandlerInput const &,hknpEvent const &)>(EventSignal, BreakableConstraintHandler, "cg_ragdoll_callback");
  }
}

/*
==============
CG_RagdollCallback_ExitRunning
==============
*/
void CG_RagdollCallback_ExitRunning(LocalClientNum_t localClientNum, int entityNum, int ragdollHandle)
{
  __int64 v3; 
  RagdollConstraint *v5; 
  int v6; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v3 = ragdollHandle;
  if ( (unsigned int)entityNum >= 0x800 )
  {
    v10 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 214, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, v10) )
      __debugbreak();
  }
  if ( (unsigned int)(v3 - 1) > 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 216, ASSERT_TYPE_ASSERT, "(0 < ragdollHandle && ragdollHandle <= 64)", (const char *)&queryFormat, "RAGDOLL_INVALID < ragdollHandle && ragdollHandle <= RAGDOLL_MAX") )
    __debugbreak();
  if ( (unsigned int)(v3 - 1) >= 0x40 )
  {
    LODWORD(v9) = 64;
    LODWORD(v7) = v3 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 218, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollIndex ) < (unsigned)( 64 )", "ragdollIndex doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE|0x80) )
  {
    v5 = &s_ragdollConstraint[v3 - 1];
    v6 = v5->ragdollHandle;
    if ( v6 )
    {
      if ( v6 != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 230, ASSERT_TYPE_ASSERT, "(data.ragdollHandle == ragdollHandle)", (const char *)&queryFormat, "data.ragdollHandle == ragdollHandle") )
        __debugbreak();
      if ( v5->constraintId != 0x7FFFFFFF )
      {
        CG_RagdollCallback_DestroyConstraint(localClientNum, v5);
        if ( v5->constraintId != 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 237, ASSERT_TYPE_ASSERT, "(!Physics_IsConstraintIdValid( data.constraintId ))", (const char *)&queryFormat, "!Physics_IsConstraintIdValid( data.constraintId )") )
          __debugbreak();
      }
      v5->clientNum = LOCAL_CLIENT_INVALID;
      v5->ragdollHandle = 0;
      v5->rootBodyRadius = 0.0;
      v5->constraintCount = 0;
      *(_WORD *)&v5->creationFailed = 0;
      v5->markPenetratingTime = 0;
      *(_QWORD *)&v5->authInstanceId = -1i64;
      *(_QWORD *)&v5->constraintId = 0x7FFFFFFFi64;
      *(_QWORD *)&v5->prevConstraintPos.y = 0i64;
      *(_QWORD *)v5->prevConstraintVel.v = 0i64;
      v5->prevConstraintVel.v[2] = 0.0;
      memset_0(v5->initialFriction, 0, sizeof(v5->initialFriction));
      if ( v5->spikeFx )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 89, ASSERT_TYPE_ASSERT, "(spikeFx == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "spikeFx == PARTICLE_SYSTEM_INVALID_HANDLE") )
          __debugbreak();
      }
    }
  }
}

/*
==============
CG_RagdollCallback_MarkPenetrating
==============
*/
void CG_RagdollCallback_MarkPenetrating(RagdollConstraint *const data, const LocalClientNum_t localClientNum)
{
  __int64 ragdollHandle; 
  Ragdoll *v5; 
  cg_t *LocalClientGlobals; 
  __int64 v7; 
  __int64 v8; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 903, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !data->ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 904, ASSERT_TYPE_ASSERT, "(data->ragdollHandle != 0)", (const char *)&queryFormat, "data->ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( localClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 905, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "localClientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  ragdollHandle = data->ragdollHandle;
  if ( !(_DWORD)ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v7) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v7, 64) )
      __debugbreak();
  }
  if ( !(_DWORD)ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( (unsigned int)(ragdollHandle - 1) >= 0x40 )
  {
    LODWORD(v8) = 64;
    LODWORD(v7) = ragdollHandle - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = &g_ragdollBodies[ragdollHandle - 1];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
    __debugbreak();
  if ( v5->allocated )
  {
    Ragdoll_MarkPenetrating(data->ragdollHandle);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 912, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    data->markPenetratingTime = LocalClientGlobals->time;
  }
}

/*
==============
CG_RagdollCallback_SetFrictionScale
==============
*/
void CG_RagdollCallback_SetFrictionScale(LocalClientNum_t localClientNum, const RagdollConstraint *data, float frictionScale)
{
  __int32 v5; 
  hknpWorld *World; 
  unsigned int v7; 
  int NumConstraints; 
  __int64 v9; 
  float *initialFriction; 
  unsigned int authInstanceId; 
  __int64 m_value; 
  hkpRagdollConstraintData *m_ptr; 
  float v14; 
  int v15; 
  __int64 v16; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> result; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 837, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 838, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( !data->constraintCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 839, ASSERT_TYPE_ASSERT, "(data->constraintCount != 0)", (const char *)&queryFormat, "data->constraintCount != 0") )
    __debugbreak();
  v5 = 3 * localClientNum + 3;
  World = HavokPhysics_GetWorld((Physics_WorldId)v5);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 844, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  v7 = 0;
  NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v5, data->authInstanceId);
  v9 = NumConstraints;
  if ( NumConstraints > 0 )
  {
    initialFriction = data->initialFriction;
    do
    {
      authInstanceId = data->authInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(v16) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
          __debugbreak();
      }
      if ( authInstanceId == -1 )
      {
        LODWORD(v16) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v16) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(v16) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v16) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(v16) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v16) )
          __debugbreak();
      }
      m_value = (int)HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v5, authInstanceId, v7)->m_value;
      if ( (_DWORD)m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 851, ASSERT_TYPE_ASSERT, "(hConstraintId.isValid())", (const char *)&queryFormat, "hConstraintId.isValid()") )
        __debugbreak();
      m_ptr = (hkpRagdollConstraintData *)World->m_constraintManager->m_constraints.m_objects.m_data[m_value].m_pod.m_data.m_ptr;
      if ( !m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 854, ASSERT_TYPE_ASSERT, "(constraintData)", (const char *)&queryFormat, "constraintData") )
        __debugbreak();
      v14 = *initialFriction;
      v15 = m_ptr->getType(m_ptr);
      if ( v15 == 2 )
      {
        if ( v14 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 864, ASSERT_TYPE_ASSERT, "(initialFriction > 0.0f)", "%s\n\tInvalid ragdoll constraint friction value encountered. %f", "initialFriction > 0.0f", v14) )
          __debugbreak();
        m_ptr->m_atoms.m_ragdollMotors.m_target_bRca.m_col1.m_quad.m128_f32[2] = v14 * frictionScale;
      }
      else if ( v15 == 7 )
      {
        if ( v14 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 872, ASSERT_TYPE_ASSERT, "(initialFriction > 0.0f)", "%s\n\tInvalid ragdoll constraint friction value encountered. %f", "initialFriction > 0.0f", v14) )
          __debugbreak();
        hkpRagdollConstraintData::setMaxFrictionTorque(m_ptr, v14 * frictionScale);
      }
      ++v7;
      ++initialFriction;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
CG_RagdollCallback_StartFX
==============
*/
void CG_RagdollCallback_StartFX(RagdollConstraint *const data, const tmat43_t<vec3_t> *constraintTransform43)
{
  cg_t *LocalClientGlobals; 
  float v5; 
  LocalClientNum_t clientNum; 
  __int128 v8; 
  __m128 v12; 
  __m128 v16; 
  __m128 v20; 
  __m128 v24; 
  ParticleManager *ParticleManager; 
  __int128 v28; 
  __m128 v29; 
  __m128 v; 
  __m128 v31; 
  __m128 v32; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 
  __int128 v35; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 959, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->spikeFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 960, ASSERT_TYPE_ASSERT, "(data->spikeFx == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "data->spikeFx == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  if ( cgMedia.impalingSpikeFx.m_particleSystemDef )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)data->clientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 968, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v5 = constraintTransform43->m[3].v[0];
    clientNum = data->clientNum;
    HIDWORD(v28) = 0;
    v8 = v28;
    *(float *)&v8 = v5;
    _XMM0 = v8;
    __asm
    {
      vinsertps xmm0, xmm0, dword ptr [rsi+28h], 10h
      vinsertps xmm0, xmm0, dword ptr [rsi+2Ch], 20h ; ' '
    }
    v29 = _XMM0;
    emitterPos.v = _XMM0;
    v29.m128_i32[3] = 0;
    v12 = v29;
    v12.m128_f32[0] = constraintTransform43->m[0].v[0];
    _XMM3 = v12;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
    }
    _XMM0.m128_i32[0] = LODWORD(constraintTransform43->m[1].v[0]);
    v = _XMM3.v;
    emitterOrientationMat.x = (float4)_XMM3.v;
    v.m128_i32[3] = 0;
    v16 = v;
    v16.m128_f32[0] = _XMM0.m128_f32[0];
    _XMM3 = v16;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsi+10h], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+14h], 20h ; ' '
    }
    _XMM0.m128_i32[0] = LODWORD(constraintTransform43->m[2].v[0]);
    v31 = _XMM3.v;
    emitterOrientationMat.y = (float4)_XMM3.v;
    v31.m128_i32[3] = 0;
    v20 = v31;
    v20.m128_f32[0] = _XMM0.m128_f32[0];
    _XMM3 = v20;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rsi+1Ch], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+20h], 20h ; ' '
    }
    v32 = _XMM3.v;
    v32.m128_i32[3] = 0;
    v24 = v32;
    v24.m128_f32[0] = v5;
    _XMM2 = v24;
    __asm
    {
      vinsertps xmm2, xmm2, dword ptr [rsi+28h], 10h
      vinsertps xmm2, xmm2, dword ptr [rsi+2Ch], 20h ; ' '
    }
    v35 = (_XMM2 ^ *(_OWORD *)&g_one.v) & *(_OWORD *)&g_keepW.v ^ _XMM2;
    emitterOrientationMat.z = (float4)_XMM3.v;
    ParticleManager = ParticleManager::GetParticleManager(clientNum);
    data->spikeFx = ParticleManager::AddSystem(ParticleManager, data->clientNum, cgMedia.impalingSpikeFx.m_particleSystemDef, &emitterPos, &emitterOrientationMat, LocalClientGlobals->time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
  }
}

/*
==============
CG_RagdollCallback_UpdateConstraint
==============
*/
void CG_RagdollCallback_UpdateConstraint(LocalClientNum_t localClientNum, int entityNum, RagdollConstraint *data)
{
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  unsigned int eType; 
  int v9; 
  centity_t *v10; 
  int v11; 
  hknpWorld *World; 
  __int64 constraintId; 
  hkpConstraintData *m_ptr; 
  __int64 v15; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  int integer; 
  vec3_t *outWarpedRagdollHitPos; 
  __int64 v22; 
  vec3_t outOrigin; 
  char v24[8]; 
  __int64 v25; 
  int v26[4]; 
  int v27[4]; 
  tmat44_t<vec4_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> dst; 
  vec3_t v31; 

  v25 = -2i64;
  if ( (unsigned int)entityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 406, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, 2048) )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 407, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !data->ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 408, ASSERT_TYPE_ASSERT, "(data->ragdollHandle != 0)", (const char *)&queryFormat, "data->ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 411, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( data->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 413, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( data->hitBodyIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 414, ASSERT_TYPE_ASSERT, "(data->hitBodyIdx != 0xFFFFFFFF)", (const char *)&queryFormat, "data->hitBodyIdx != PHYSICSBODYINDEX_INVALID") )
    __debugbreak();
  if ( data->constraintId == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 415, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( data->constraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( data->constraintId )") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 419, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 420, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)Entity->nextState.eType;
  if ( (unsigned __int16)eType > 0x15u || (v9 = 2359300, !_bittest(&v9, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 421, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &cent->nextState )") )
      __debugbreak();
  }
  if ( Entity->typeData.flightDurationMs == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 422, ASSERT_TYPE_ASSERT, "(cent->typeData.ragdollConstraintEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "cent->typeData.ragdollConstraintEnt != ENTITYNUM_NONE") )
    __debugbreak();
  if ( Entity->typeData.flightDurationMs >= 0x800u )
  {
    LODWORD(v22) = 2048;
    LODWORD(outWarpedRagdollHitPos) = Entity->typeData.flightDurationMs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 423, ASSERT_TYPE_ASSERT, "(unsigned)( cent->typeData.ragdollConstraintEnt ) < (unsigned)( ( 2048 ) )", "cent->typeData.ragdollConstraintEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outWarpedRagdollHitPos, v22) )
      __debugbreak();
  }
  v10 = CG_GetEntity(localClientNum, Entity->typeData.flightDurationMs);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 427, ASSERT_TYPE_ASSERT, "(constraintEnt)", (const char *)&queryFormat, "constraintEnt") )
    __debugbreak();
  if ( (v10->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 428, ASSERT_TYPE_ASSERT, "(CENextValid( constraintEnt ))", (const char *)&queryFormat, "CENextValid( constraintEnt )") )
    __debugbreak();
  if ( v10->nextState.eType != ET_RAGDOLL_CONSTRAINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 429, ASSERT_TYPE_ASSERT, "(constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT") )
    __debugbreak();
  CG_GetPoseOrigin(&v10->pose, &outOrigin);
  AnglesToAxis(&v10->pose.angles, &axis);
  MatrixSet44(&out, &outOrigin, &axis, 1.0);
  v11 = 0;
  if ( LocalClientGlobals->oldTime < LocalClientGlobals->killCamStartTime )
  {
    MatrixCopy33(&axis, (tmat33_t<vec3_t> *)&dst);
    dst.m[3] = outOrigin;
    CG_RagdollCallback_WarpRagdoll(localClientNum, data, Warp_Full_TraceRootPath, &data->prevConstraintPos, &dst, &v31);
    data->prevConstraintPos = dst.m[3];
    *(_QWORD *)data->prevConstraintVel.v = 0i64;
    data->prevConstraintVel.v[2] = 0.0;
  }
  World = HavokPhysics_GetWorld((Physics_WorldId)(3 * localClientNum + 3));
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 457, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  constraintId = (int)data->constraintId;
  if ( (_DWORD)constraintId == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 461, ASSERT_TYPE_ASSERT, "(constraintId.isValid())", (const char *)&queryFormat, "constraintId.isValid()") )
    __debugbreak();
  m_ptr = World->m_constraintManager->m_constraints.m_objects.m_data[constraintId].m_pod.m_data.m_ptr;
  if ( !m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 466, ASSERT_TYPE_ASSERT, "(constraintData)", (const char *)&queryFormat, "constraintData") )
    __debugbreak();
  if ( m_ptr->getType(m_ptr) != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 467, ASSERT_TYPE_ASSERT, "(constraintData->getType() == hkpConstraintData::CONSTRAINT_TYPE_BREAKABLE)", (const char *)&queryFormat, "constraintData->getType() == hkpConstraintData::CONSTRAINT_TYPE_BREAKABLE") )
    __debugbreak();
  v15 = ((__int64 (__fastcall *)(hkpConstraintData *))m_ptr->__vftable[1].getExactType)(m_ptr);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 471, ASSERT_TYPE_ASSERT, "(hingeData)", (const char *)&queryFormat, "hingeData") )
    __debugbreak();
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24i64))(v15) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 472, ASSERT_TYPE_ASSERT, "(hingeData->getType() == hkpConstraintData::CONSTRAINT_TYPE_LIMITEDHINGE)", (const char *)&queryFormat, "hingeData->getType() == hkpConstraintData::CONSTRAINT_TYPE_LIMITEDHINGE") )
    __debugbreak();
  *(float *)(v15 + 112) = out.m[0].v[0];
  *(float *)(v15 + 128) = out.m[1].v[0];
  *(float *)(v15 + 144) = out.m[2].v[0];
  *(float *)(v15 + 116) = out.m[0].v[1];
  *(float *)(v15 + 132) = out.m[1].v[1];
  *(float *)(v15 + 148) = out.m[2].v[1];
  *(float *)(v15 + 120) = out.m[0].v[2];
  *(float *)(v15 + 136) = out.m[1].v[2];
  *(float *)(v15 + 152) = out.m[2].v[2];
  *(float *)(v15 + 160) = 0.03125 * out.m[3].v[0];
  *(float *)(v15 + 164) = 0.03125 * out.m[3].v[1];
  *(float *)(v15 + 168) = 0.03125 * out.m[3].v[2];
  *(_DWORD *)(v15 + 172) = 1065353216;
  *(float *)v26 = 0.03125 * outOrigin.v[0];
  *(float *)&v26[1] = 0.03125 * outOrigin.v[1];
  *(float *)&v26[2] = 0.03125 * outOrigin.v[2];
  *(float *)&v26[3] = 0.0;
  ((void (__fastcall *)(hkDebugDisplay *, char *, _QWORD, const char *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display3dText)(hkDebugDisplay::singleton.m_ptr, v24, 0i64, "Constraint", v26, hkColor::MAROON, hkDebugDisplayProcess::s_tag);
  *(float *)v27 = (float)((float)(18.0 * axis.m[0].v[0]) + outOrigin.v[0]) * 0.03125;
  *(float *)&v27[1] = (float)((float)(18.0 * axis.m[0].v[1]) + outOrigin.v[1]) * 0.03125;
  *(float *)&v27[2] = (float)((float)(18.0 * axis.m[0].v[2]) + outOrigin.v[2]) * 0.03125;
  *(float *)&v27[3] = 0.0;
  ((void (__fastcall *)(hkDebugDisplay *, char *, _QWORD, int *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display2Points)(hkDebugDisplay::singleton.m_ptr, v24, 0i64, v26, v27, hkColor::MAROON, hkDebugDisplayProcess::s_tag);
  v16 = fsqrt((float)((float)(data->prevConstraintVel.v[0] * data->prevConstraintVel.v[0]) + (float)(data->prevConstraintVel.v[1] * data->prevConstraintVel.v[1])) + (float)(data->prevConstraintVel.v[2] * data->prevConstraintVel.v[2]));
  CG_RagdollCallback_ApplyVelocityToBodies(localClientNum, data, v10);
  v17 = fsqrt((float)((float)(data->prevConstraintVel.v[0] * data->prevConstraintVel.v[0]) + (float)(data->prevConstraintVel.v[1] * data->prevConstraintVel.v[1])) + (float)(data->prevConstraintVel.v[2] * data->prevConstraintVel.v[2]));
  v18 = DCONST_DVARFLT_cg_impaleRagdollStiffnessRate;
  if ( !DCONST_DVARFLT_cg_impaleRagdollStiffnessRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleRagdollStiffnessRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  CG_RagdollCallback_SetFrictionScale(localClientNum, data, (float)(v17 / v18->current.value) + 1.0);
  if ( v17 <= 0.000001 )
  {
    if ( v16 > 0.000001 )
      CG_RagdollCallback_MarkPenetrating(data, (const LocalClientNum_t)data->clientNum);
    if ( LocalClientGlobals->time - data->markPenetratingTime < 0 )
      v11 = LocalClientGlobals->time - data->markPenetratingTime;
    v19 = DCONST_DVARINT_cg_impaleMaxPenetrationSolveTimeMs;
    if ( !DCONST_DVARINT_cg_impaleMaxPenetrationSolveTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleMaxPenetrationSolveTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    integer = v19->current.integer;
    if ( Ragdoll_IsPenetrating(data->ragdollHandle) && v11 >= integer )
      CG_RagdollCallback_DestroyConstraint(localClientNum, data);
  }
  CG_RagdollCallback_UpdateFX(data, &out);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_RagdollCallback_UpdateFX
==============
*/
void CG_RagdollCallback_UpdateFX(RagdollConstraint *const data, const tmat44_t<vec4_t> *constraintTransform44)
{
  ParticleSystemHandle spikeFx; 
  __int64 clientNum; 
  ParticleSystem *v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __m256i v10; 
  __m128 v; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m256i v16; 
  float4 normal[2]; 
  float4 v18[2]; 
  __m256i v19; 
  __m256i v20; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 991, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->clientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 992, ASSERT_TYPE_ASSERT, "(data->clientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "data->clientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  spikeFx = data->spikeFx;
  clientNum = data->clientNum;
  v6 = NULL;
  v7 = clientNum << 12;
  v8 = 0;
  if ( g_particleSystemsGeneration[v7 + (spikeFx & 0xFFF)].__all32 == spikeFx )
    v8 = spikeFx & 0xFFF;
  v9 = v7 + v8;
  if ( g_particleSystems[0][v9] >= (ParticleSystem *)0x1000 )
    v6 = g_particleSystems[0][v9];
  if ( v6 )
  {
    v19 = *(__m256i *)constraintTransform44->m[0].v;
    v20 = *(__m256i *)constraintTransform44->row2.v;
    *(__m256i *)normal[0].v.m128_f32 = v19;
    *(__m256i *)v18[0].v.m128_f32 = v20;
    Particle_AssertFloat4IsNormalized(normal);
    Particle_AssertFloat4IsNormalized(&normal[1]);
    Particle_AssertFloat4IsNormalized(v18);
    v10 = *(__m256i *)v18[0].v.m128_f32;
    *(__m256i *)v6->m_systemTransform.x.v.m128_f32 = *(__m256i *)normal[0].v.m128_f32;
    *(__m256i *)v6->m_systemTransform.z.v.m128_f32 = v10;
    v = v6->m_systemTransform.z.v;
    v12 = _mm_shuffle_ps(v, v6->m_systemTransform.w.v, 68);
    v13 = _mm_shuffle_ps(v, v6->m_systemTransform.w.v, 238);
    v14 = _mm_shuffle_ps(v6->m_systemTransform.x.v, v6->m_systemTransform.y.v, 68);
    v15 = _mm_shuffle_ps(v6->m_systemTransform.x.v, v6->m_systemTransform.y.v, 238);
    *(__m128 *)&v19.m256i_u64[2] = _mm_shuffle_ps(v14, v12, 221);
    *(__m128 *)v19.m256i_i8 = _mm_shuffle_ps(v14, v12, 136);
    *(__m128 *)v20.m256i_i8 = _mm_shuffle_ps(v15, v13, 136);
    *(__m128 *)&v20.m256i_u64[2] = _mm_shuffle_ps(v15, v13, 221);
    v16 = v20;
    *(__m256i *)v6->m_systemTransformTranspose.x.v.m128_f32 = v19;
    *(__m256i *)v6->m_systemTransformTranspose.z.v.m128_f32 = v16;
  }
}

/*
==============
CG_RagdollCallback_UpdateRunning
==============
*/
void CG_RagdollCallback_UpdateRunning(LocalClientNum_t localClientNum, int entityNum, int ragdollHandle)
{
  __int64 v3; 
  centity_t *Entity; 
  RagdollConstraint *v7; 
  int v8; 
  bool v9; 
  unsigned int constraintId; 
  char Constraint; 
  __int64 v12; 
  __int64 v13; 

  v3 = ragdollHandle;
  if ( (unsigned int)entityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 170, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, 2048) )
    __debugbreak();
  if ( (unsigned int)(v3 - 1) > 0x3F && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 172, ASSERT_TYPE_ASSERT, "(0 < ragdollHandle && ragdollHandle <= 64)", (const char *)&queryFormat, "RAGDOLL_INVALID < ragdollHandle && ragdollHandle <= RAGDOLL_MAX") )
    __debugbreak();
  if ( (unsigned int)(v3 - 1) >= 0x40 )
  {
    LODWORD(v13) = 64;
    LODWORD(v12) = v3 - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 174, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollIndex ) < (unsigned)( 64 )", "ragdollIndex doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE|0x80) )
  {
    Entity = CG_GetEntity(localClientNum, entityNum);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 182, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 183, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    v7 = &s_ragdollConstraint[v3 - 1];
    v8 = v7->ragdollHandle;
    if ( v8 )
    {
      if ( v8 != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 190, ASSERT_TYPE_ASSERT, "(data.ragdollHandle == ragdollHandle)", (const char *)&queryFormat, "data.ragdollHandle == ragdollHandle") )
        __debugbreak();
      v9 = !v7->broken && !v7->creationFailed && BG_IsCorpseEntity(&Entity->nextState) && Entity->typeData.flightDurationMs != 2047;
      constraintId = v7->constraintId;
      Constraint = constraintId != 0x7FFFFFFF;
      if ( v9 )
      {
        if ( constraintId == 0x7FFFFFFF )
          Constraint = CG_RagdollCallback_CreateConstraint(localClientNum, entityNum, &s_ragdollConstraint[v3 - 1]);
        if ( Constraint )
          CG_RagdollCallback_UpdateConstraint(localClientNum, entityNum, &s_ragdollConstraint[v3 - 1]);
      }
      else if ( constraintId != 0x7FFFFFFF )
      {
        CG_RagdollCallback_DestroyConstraint(localClientNum, &s_ragdollConstraint[v3 - 1]);
      }
    }
  }
}

/*
==============
CG_RagdollCallback_WarpRagdoll
==============
*/
char CG_RagdollCallback_WarpRagdoll(LocalClientNum_t localClientNum, RagdollConstraint *const data, RagdollWarpMode warpMode, const vec3_t *ragdollHitPos, const tmat43_t<vec3_t> *constraintTransform, vec3_t *outWarpedRagdollHitPos)
{
  vec3_t *v6; 
  const vec3_t *v7; 
  __int32 v12; 
  signed int v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  unsigned int RigidBodyID; 
  unsigned int v20; 
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
  float rootBodyRadius; 
  hknpShape *v32; 
  float v35; 
  float v36; 
  float v37; 
  int NumRigidBodys; 
  unsigned int authInstanceId; 
  unsigned int m_serialAndIndex; 
  int v41; 
  float v42; 
  int v43; 
  float v44; 
  Physics_ShapecastExtendedData *extendedData; 
  PhysicsQuery_ShapecastHit *hit; 
  hknpBodyId result; 
  LocalClientNum_t localClientNuma; 
  const vec3_t *v49; 
  vec3_t *v50; 
  Physics_ShapecastExtendedData v51; 
  vec3_t center; 
  vec3_t end; 
  vec3_t v54; 
  float v55; 
  vec4_t orientationAsQuat; 
  int v57[4]; 
  int v58[4]; 
  vec3_t position; 
  int v60[4]; 
  vec4_t orientation; 
  vec4_t v62; 
  PhysicsQuery_ShapecastHit v63; 
  char optionalInplaceBuffer[432]; 

  v6 = outWarpedRagdollHitPos;
  v7 = ragdollHitPos;
  v50 = outWarpedRagdollHitPos;
  v49 = ragdollHitPos;
  localClientNuma = localClientNum;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 644, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 645, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( data->hitBodyIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 646, ASSERT_TYPE_ASSERT, "(data->hitBodyIdx != 0xFFFFFFFF)", (const char *)&queryFormat, "data->hitBodyIdx != PHYSICSBODYINDEX_INVALID") )
    __debugbreak();
  if ( (unsigned int)warpMode >= Warp_ModeCount )
  {
    LODWORD(extendedData) = warpMode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 647, ASSERT_TYPE_ASSERT, "(unsigned)( warpMode ) < (unsigned)( Warp_ModeCount )", "warpMode doesn't index Warp_ModeCount\n\t%i not in [0, %i)", extendedData, 4) )
      __debugbreak();
  }
  *outWarpedRagdollHitPos = *v7;
  if ( warpMode == Warp_Off )
    return 1;
  v12 = 3 * localClientNum + 3;
  v13 = 0;
  v15 = constraintTransform->m[3].v[0] - v7->v[0];
  v14 = v15;
  v16 = constraintTransform->m[3].v[2] - v7->v[2];
  v17 = constraintTransform->m[3].v[1] - v7->v[1];
  if ( warpMode == Warp_NormalToAxis )
  {
    LODWORD(v18) = COERCE_UNSIGNED_INT((float)((float)(v15 * constraintTransform->m[0].v[0]) + (float)(v17 * constraintTransform->m[0].v[1])) + (float)(v16 * constraintTransform->m[0].v[2])) ^ _xmm;
    v14 = (float)(v18 * constraintTransform->m[0].v[0]) + v15;
    v16 = (float)(v18 * constraintTransform->m[0].v[2]) + v16;
    v17 = (float)(v18 * constraintTransform->m[0].v[1]) + v17;
  }
  else if ( warpMode == Warp_Full_TraceRootPath )
  {
    RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v12, data->authInstanceId, data->hitBodyIdx);
    Physics_GetRigidBodyTransform((const Physics_WorldId)v12, RigidBodyID, &position, &orientation);
    v20 = Physics_GetRigidBodyID((const Physics_WorldId)v12, data->authInstanceId, 0);
    Physics_GetRigidBodyTransform((const Physics_WorldId)v12, v20, &v54, &v62);
    v21 = (float)(position.v[0] - v7->v[0]) + (float)(v54.v[0] - position.v[0]);
    v22 = (float)(v54.v[1] - position.v[1]) + (float)(position.v[1] - v7->v[1]);
    v23 = 24.0 * constraintTransform->m[0].v[0];
    v24 = (float)(position.v[2] - v7->v[2]) + (float)(v54.v[2] - position.v[2]);
    v25 = v22 + constraintTransform->m[3].v[1];
    v26 = v24 + constraintTransform->m[3].v[2];
    end.v[0] = v21 + constraintTransform->m[3].v[0];
    center.v[0] = end.v[0] - v23;
    v27 = 24.0 * constraintTransform->m[0].v[1];
    end.v[1] = v25;
    v28 = v25 - v27;
    v29 = 24.0 * constraintTransform->m[0].v[2];
    center.v[1] = v28;
    v30 = v26 - v29;
    rootBodyRadius = data->rootBodyRadius;
    center.v[2] = v30;
    end.v[2] = v26;
    v32 = Physics_CreateShapeSphere(&center, rootBodyRadius, optionalInplaceBuffer, 432);
    if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 708, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    _XMM0 = LODWORD(FLOAT_0_016000001);
    v51.simplifyStart = 0;
    v51.ignoreBodies = NULL;
    v51.accuracy = FLOAT_0_016000001;
    v51.phaseSelection = All;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v51.permitOutwardTrace = 0;
    v51.startTolerance = 0.0;
    v51.collisionBuffer = 0.0;
    *(_OWORD *)&v51.nonBrushShape = _XMM0;
    v51.contents = 8389905;
    PhysicsQuery_ImmediateShapecastClosest((Physics_WorldId)v12, v32, &center, &end, &quat_identity, &v51, &v63);
    if ( v63.isValid )
    {
      if ( v63.fraction <= 0.0 )
      {
        v54.v[0] = 0.03125 * end.v[0];
        v54.v[1] = 0.03125 * end.v[1];
        v54.v[2] = 0.03125 * end.v[2];
        v55 = 0.0;
        ((void (__fastcall *)(hkDebugDisplay *, LocalClientNum_t *, _QWORD, const char *, vec3_t *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display3dText)(hkDebugDisplay::singleton.m_ptr, &localClientNuma, 0i64, "Failed Root Trace ", &v54, hkColor::DARKTURQUOISE, hkDebugDisplayProcess::s_tag);
        Com_PrintWarning(20, "CG_RagdollCallback_WarpRagdoll(), failed to find non-penetrating location to warp root.");
        return 0;
      }
      v35 = (float)((float)(v63.fraction * 24.0) * constraintTransform->m[0].v[0]) + center.v[0];
      v37 = (float)((float)(v63.fraction * 24.0) * constraintTransform->m[0].v[2]) + center.v[2];
      v36 = (float)((float)(v63.fraction * 24.0) * constraintTransform->m[0].v[1]) + center.v[1];
    }
    else
    {
      v35 = end.v[0];
      v36 = end.v[1];
      v37 = end.v[2];
    }
    *(float *)v57 = center.v[0] * 0.03125;
    *(float *)&v57[1] = center.v[1] * 0.03125;
    *(float *)&v57[2] = center.v[2] * 0.03125;
    orientationAsQuat.v[0] = v35 * 0.03125;
    orientationAsQuat.v[1] = v36 * 0.03125;
    orientationAsQuat.v[2] = v37 * 0.03125;
    *(float *)&v57[3] = 0.0;
    orientationAsQuat.v[3] = 0.0;
    ((void (__fastcall *)(hkDebugDisplay *, hknpBodyId *, _QWORD, const char *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display3dText)(hkDebugDisplay::singleton.m_ptr, &result, 0i64, "Root Trace", v57, hkColor::DARKTURQUOISE, hkDebugDisplayProcess::s_tag);
    ((void (__fastcall *)(hkDebugDisplay *, hknpBodyId *, _QWORD, int *, vec4_t *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display2Points)(hkDebugDisplay::singleton.m_ptr, &result, 0i64, v57, &orientationAsQuat, hkColor::DARKTURQUOISE, hkDebugDisplayProcess::s_tag);
    v14 = (float)(v35 - v21) - v7->v[0];
    v16 = (float)(v37 - v24) - v7->v[2];
    v17 = (float)(v36 - v22) - v7->v[1];
  }
  *(float *)&result.m_serialAndIndex = v14;
  if ( (LODWORD(v14) & 0x7F800000) == 2139095040 || (*(float *)&result.m_serialAndIndex = v17, (LODWORD(v17) & 0x7F800000) == 2139095040) || (*(float *)&result.m_serialAndIndex = v16, (LODWORD(v16) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 748, ASSERT_TYPE_SANITY, "( !IS_NAN( ( translation )[0] ) && !IS_NAN( ( translation )[1] ) && !IS_NAN( ( translation )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( translation )[0] ) && !IS_NAN( ( translation )[1] ) && !IS_NAN( ( translation )[2] )") )
      __debugbreak();
  }
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v12, data->authInstanceId);
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 752, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( NumRigidBodys > 0 )
  {
    do
    {
      authInstanceId = data->authInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v12 > 7 )
      {
        LODWORD(hit) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", hit) )
          __debugbreak();
      }
      if ( authInstanceId == -1 )
      {
        LODWORD(hit) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", hit) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
      {
        LODWORD(hit) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", hit) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
      {
        LODWORD(hit) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", hit) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v12, authInstanceId, v13)->m_serialAndIndex;
      Physics_GetRigidBodyTransform((const Physics_WorldId)v12, m_serialAndIndex, &center, &orientationAsQuat);
      center.v[0] = v14 + center.v[0];
      center.v[1] = v17 + center.v[1];
      center.v[2] = v16 + center.v[2];
      Physics_WarpRigidBodyTo((const Physics_WorldId)v12, m_serialAndIndex, &center, &orientationAsQuat, 0, 1);
      ++v13;
    }
    while ( v13 < NumRigidBodys );
    v7 = v49;
    v6 = v50;
  }
  Physics_UpdateBroadphase((Physics_WorldId)v12, 1);
  *(float *)&v41 = 0.03125 * v7->v[1];
  v42 = v17 + v7->v[1];
  *(float *)v58 = 0.03125 * v7->v[0];
  *(float *)&v43 = 0.03125 * v7->v[2];
  v58[1] = v41;
  v44 = v14 + v7->v[0];
  v58[2] = v43;
  *(float *)v60 = v44 * 0.03125;
  *(float *)&v60[2] = (float)(v16 + v7->v[2]) * 0.03125;
  *(float *)&v58[3] = 0.0;
  *(float *)&v60[1] = v42 * 0.03125;
  *(float *)&v60[3] = 0.0;
  ((void (__fastcall *)(hkDebugDisplay *, hknpBodyId *, _QWORD, const char *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display3dText)(hkDebugDisplay::singleton.m_ptr, &result, 0i64, "Warp Start", v58, hkColor::HOTPINK, hkDebugDisplayProcess::s_tag);
  ((void (__fastcall *)(hkDebugDisplay *, hknpBodyId *, _QWORD, int *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display2Points)(hkDebugDisplay::singleton.m_ptr, &result, 0i64, v58, v60, hkColor::HOTPINK, hkDebugDisplayProcess::s_tag);
  CG_RagdollCallback_MarkPenetrating(data, localClientNuma);
  v6->v[0] = v14 + v7->v[0];
  v6->v[1] = v17 + v7->v[1];
  v6->v[2] = v16 + v7->v[2];
  return 1;
}


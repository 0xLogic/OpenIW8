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
  char v17[8]; 
  vec3_t linVel; 
  int v19[4]; 

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
  _RBP = DCONST_DVARFLT_cg_impaleBreakVelocityScale;
  if ( !DCONST_DVARFLT_cg_impaleBreakVelocityScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleBreakVelocityScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBP);
  __asm
  {
    vmovss  xmm3, dword ptr [rbp+28h]
    vmulss  xmm1, xmm3, dword ptr [rsp+88h+linVel]
    vmulss  xmm0, xmm3, dword ptr [rsp+88h+linVel+4]
    vmulss  xmm2, xmm3, dword ptr [rsp+88h+linVel+8]
    vmovss  dword ptr [rsp+88h+linVel], xmm1
    vmovss  dword ptr [rsp+88h+linVel+4], xmm0
    vmovss  dword ptr [rsp+88h+linVel+8], xmm2
  }
  Physics_SetRigidBodyLinVel((const Physics_WorldId)v5, RigidBodyID, &linVel);
  __asm
  {
    vmovss  xmm3, cs:__real@3d000000
    vmulss  xmm2, xmm3, dword ptr [rbx+1Ch]
    vmulss  xmm0, xmm3, dword ptr [rbx+18h]
    vmulss  xmm1, xmm3, dword ptr [rbx+20h]
    vmovss  [rsp+88h+var_24], xmm2
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rsp+88h+var_1C], xmm2
    vmovss  [rsp+88h+var_28], xmm0
    vmovss  [rsp+88h+var_20], xmm1
  }
  ((void (__fastcall *)(hkDebugDisplay *, char *, _QWORD, const char *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display3dText)(hkDebugDisplay::singleton.m_ptr, v17, 0i64, "Constraint Broken", v19, hkColor::ORANGERED, hkDebugDisplayProcess::s_tag);
}

/*
==============
CG_RagdollCallback_ApplyVelocityToBodies
==============
*/
void CG_RagdollCallback_ApplyVelocityToBodies(LocalClientNum_t localClientNum, RagdollConstraint *data, const centity_t *constraintEnt)
{
  cg_t *LocalClientGlobals; 
  __int32 v36; 
  int NumRigidBodys; 
  signed int v38; 
  unsigned int authInstanceId; 
  unsigned int m_serialAndIndex; 
  int v42; 
  hknpWorld *world; 
  __int64 v44; 
  __int64 v65; 
  vec3_t outOrigin; 
  hknpBodyId result; 
  __int64 v68; 
  vec3_t linVel; 
  char v76; 
  void *retaddr; 

  _RAX = &retaddr;
  v68 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _RBP = data;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 589, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( _RBP->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 590, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( _RBP->hitBodyIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 591, ASSERT_TYPE_ASSERT, "(data->hitBodyIdx != 0xFFFFFFFF)", (const char *)&queryFormat, "data->hitBodyIdx != PHYSICSBODYINDEX_INVALID") )
    __debugbreak();
  if ( _RBP->constraintId == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 592, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( data->constraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( data->constraintId )") )
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
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+138h+outOrigin]
      vsubss  xmm3, xmm0, dword ptr [rbp+18h]
      vmovss  xmm1, dword ptr [rsp+138h+outOrigin+4]
      vsubss  xmm4, xmm1, dword ptr [rbp+1Ch]
      vmovss  xmm0, dword ptr [rsp+138h+outOrigin+8]
      vsubss  xmm5, xmm0, dword ptr [rbp+20h]
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, dword ptr [rbx+65E4h]
      vmovss  xmm1, cs:__real@447a0000
      vdivss  xmm0, xmm1, xmm2
      vmulss  xmm9, xmm3, xmm0
      vmulss  xmm10, xmm4, xmm0
      vmulss  xmm11, xmm5, xmm0
      vsubss  xmm6, xmm9, dword ptr [rbp+24h]
      vmovss  [rsp+138h+var_D8], xmm6
      vsubss  xmm7, xmm10, dword ptr [rbp+28h]
      vmovss  [rsp+138h+var_D4], xmm7
      vsubss  xmm8, xmm11, dword ptr [rbp+2Ch]
      vmovss  [rsp+138h+var_D0], xmm8
    }
    _RDI = DCONST_DVARFLT_cg_impaleVelocityAdjust;
    if ( !DCONST_DVARFLT_cg_impaleVelocityAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleVelocityAdjust") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+28h]
      vmulss  xmm0, xmm6, xmm2
      vmovss  [rsp+138h+var_C8], xmm0
      vmulss  xmm1, xmm7, xmm2
      vmovss  [rsp+138h+var_C4], xmm1
      vmulss  xmm0, xmm8, xmm2
      vmovss  [rsp+138h+var_C0], xmm0
    }
    v36 = 3 * localClientNum + 3;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v36, _RBP->authInstanceId);
    if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 624, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
      __debugbreak();
    v38 = 0;
    if ( NumRigidBodys > 0 )
    {
      __asm { vmovss  xmm6, cs:__real@42000000 }
      do
      {
        authInstanceId = _RBP->authInstanceId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v36 > 7 )
        {
          LODWORD(v65) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
            __debugbreak();
        }
        if ( authInstanceId == -1 )
        {
          LODWORD(v65) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v65) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v36 - 2) <= 5 )
        {
          LODWORD(v65) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v65) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v36 <= 1 )
        {
          LODWORD(v65) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v65) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v36, authInstanceId, v38)->m_serialAndIndex;
        v42 = m_serialAndIndex & 0xFFFFFF;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 628, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
          __debugbreak();
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 275, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v36 > 7 )
        {
          LODWORD(v65) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 276, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
            __debugbreak();
        }
        if ( v42 == 0xFFFFFF )
        {
          LODWORD(v65) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 277, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body LinVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v65) )
            __debugbreak();
        }
        if ( (unsigned int)v36 > 7 )
        {
          LODWORD(v65) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 403, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v65) )
            __debugbreak();
        }
        if ( v42 == 0xFFFFFF )
        {
          LODWORD(v65) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 404, ASSERT_TYPE_ASSERT, "(bodyId.isValid())", "%s\n\tHavok Physics: Trying to Get Rigid Body LinVel with invalid body id for world %i", "bodyId.isValid()", v65) )
            __debugbreak();
        }
        world = HavokPhysics_GetConstWorld((Physics_WorldId)v36)->world;
        if ( !world )
        {
          LODWORD(v65) = v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 408, ASSERT_TYPE_ASSERT, "(world)", "%s\n\tHavokPhysics IsRigidBodyKeyframed %i: world is NULL", "world", v65) )
            __debugbreak();
        }
        v44 = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getBody)(&world->hknpWorldReader, m_serialAndIndex);
        _RAX = ((__int64 (__fastcall *)(hknpWorldReader *, _QWORD))world->getMotion)(&world->hknpWorldReader, *(unsigned int *)(v44 + 64));
        __asm
        {
          vmovups xmm1, xmmword ptr [rax+40h]
          vmulss  xmm4, xmm1, xmm6
          vshufps xmm0, xmm1, xmm1, 55h ; 'U'
          vmulss  xmm3, xmm0, xmm6
          vshufps xmm1, xmm1, xmm1, 0AAh ; 'ª'
          vmulss  xmm2, xmm1, xmm6
          vaddss  xmm0, xmm4, dword ptr [rax]
          vmovss  dword ptr [rsp+138h+linVel], xmm0
          vaddss  xmm1, xmm3, dword ptr [rax+4]
          vmovss  dword ptr [rsp+138h+linVel+4], xmm1
          vaddss  xmm0, xmm2, dword ptr [rax+8]
          vmovss  dword ptr [rsp+138h+linVel+8], xmm0
        }
        Physics_SetRigidBodyLinVel((const Physics_WorldId)v36, m_serialAndIndex, &linVel);
        ++v38;
      }
      while ( v38 < NumRigidBodys );
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+138h+outOrigin]
      vmovss  dword ptr [rbp+18h], xmm0
      vmovss  xmm1, dword ptr [rsp+138h+outOrigin+4]
      vmovss  dword ptr [rbp+1Ch], xmm1
      vmovss  xmm0, dword ptr [rsp+138h+outOrigin+8]
      vmovss  dword ptr [rbp+20h], xmm0
      vmovss  dword ptr [rbp+24h], xmm9
      vmovss  dword ptr [rbp+28h], xmm10
      vmovss  dword ptr [rbp+2Ch], xmm11
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  _R11 = &v76;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_RagdollCallback_CaptureInitialFriction
==============
*/
void CG_RagdollCallback_CaptureInitialFriction(LocalClientNum_t localClientNum, RagdollConstraint *data)
{
  __int32 v6; 
  hknpWorld *World; 
  int NumConstraints; 
  int v9; 
  unsigned int authInstanceId; 
  __int64 m_value; 
  int v15; 
  int v17; 
  __int64 v21; 
  double v22; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> result; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 786, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 787, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  v6 = 3 * localClientNum + 3;
  World = HavokPhysics_GetWorld((Physics_WorldId)v6);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 792, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v6, data->authInstanceId);
  data->constraintCount = NumConstraints;
  if ( NumConstraints >= 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 794, ASSERT_TYPE_ASSERT, "(data->constraintCount < 64)", "%s\n\ttoo many constraints in ragdoll", "data->constraintCount < RAGDOLL_MAX_BONES") )
    __debugbreak();
  v9 = 0;
  if ( data->constraintCount > 0 )
  {
    _RBP = data->initialFriction;
    __asm
    {
      vmovaps [rsp+88h+var_48], xmm7
      vxorps  xmm7, xmm7, xmm7
      vmovaps [rsp+88h+var_38], xmm6
    }
    while ( 1 )
    {
      authInstanceId = data->authInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v6 > 7 )
      {
        LODWORD(v21) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v21) )
          __debugbreak();
      }
      if ( authInstanceId == -1 )
      {
        LODWORD(v21) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v21) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
      {
        LODWORD(v21) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v21) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
      {
        LODWORD(v21) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v21) )
          __debugbreak();
      }
      m_value = (int)HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v6, authInstanceId, v9)->m_value;
      if ( (_DWORD)m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 800, ASSERT_TYPE_ASSERT, "(hConstraintId.isValid())", (const char *)&queryFormat, "hConstraintId.isValid()") )
        __debugbreak();
      _RBX = World->m_constraintManager->m_constraints.m_objects.m_data[m_value].m_pod.m_data.m_ptr;
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 803, ASSERT_TYPE_ASSERT, "(constraintData)", (const char *)&queryFormat, "constraintData") )
        __debugbreak();
      v15 = _RBX->getType(_RBX);
      if ( v15 == 2 )
        break;
      if ( v15 == 7 )
      {
        __asm
        {
          vmovss  xmm6, dword ptr [rbx+128h]
          vcomiss xmm6, xmm7
        }
        v17 = 821;
        goto LABEL_44;
      }
LABEL_47:
      ++v9;
      ++_RBP;
      if ( v9 >= data->constraintCount )
      {
        __asm
        {
          vmovaps xmm7, [rsp+88h+var_48]
          vmovaps xmm6, [rsp+88h+var_38]
        }
        return;
      }
    }
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+0E8h]
      vcomiss xmm6, xmm7
    }
    v17 = 813;
LABEL_44:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+88h+var_58], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", v17, ASSERT_TYPE_ASSERT, "(initialFriction > 0.0f)", "%s\n\tInvalid ragdoll constraint friction value encountered. %f", "initialFriction > 0.0f", v22) )
      __debugbreak();
    __asm { vmovss  dword ptr [rbp+0], xmm6 }
    goto LABEL_47;
  }
}

/*
==============
CG_RagdollCallback_CreateConstraint
==============
*/
bool CG_RagdollCallback_CreateConstraint(LocalClientNum_t localClientNum, int entityNum, RagdollConstraint *data)
{
  bool result; 
  centity_t *Entity; 
  unsigned int eType; 
  int v15; 
  centity_t *v16; 
  int v17; 
  int v18; 
  hitLocation_t v20; 
  int ragdollHandle; 
  hitLocation_t v22; 
  unsigned int *p_hitBodyIdx; 
  bool BodyIdxForHitLocation; 
  bool v26; 
  char v27; 
  char v28; 
  unsigned int v29; 
  unsigned int v30; 
  const dvar_t *v31; 
  int integer; 
  int Int_Internal_DebugName; 
  LocalClientNum_t v34; 
  RagdollWarpMode v35; 
  int hitBodyIdx; 
  bool v40; 
  float *outBodyRadius; 
  float *outBodyRadiusa; 
  float outBodyRadiusb; 
  __int64 angleMin; 
  float angleMina; 
  float v53; 
  float v54; 
  hitLocation_t outHitLocation; 
  int outBodyIdx; 
  float v57; 
  float v58; 
  LocalClientNum_t localClientNuma; 
  cg_t *LocalClientGlobals; 
  tmat43_t<vec3_t> axis; 
  vec3_t outWorldHitPos; 
  vec3_t outWarpedRagdollHitPos; 

  localClientNuma = localClientNum;
  _RDI = data;
  if ( (unsigned int)entityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, 2048) )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 246, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !_RDI->ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 247, ASSERT_TYPE_ASSERT, "(data->ragdollHandle != 0)", (const char *)&queryFormat, "data->ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  if ( _RDI->constraintId != 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 248, ASSERT_TYPE_ASSERT, "(!Physics_IsConstraintIdValid( data->constraintId ))", (const char *)&queryFormat, "!Physics_IsConstraintIdValid( data->constraintId )") )
    __debugbreak();
  if ( _RDI->creationFailed )
    return 0;
  __asm { vmovaps [rsp+130h+var_60], xmm8 }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 257, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_cg_impaleFailBoneSpeed;
  if ( !DCONST_DVARFLT_cg_impaleFailBoneSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleFailBoneSpeed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  Entity = CG_GetEntity(localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 262, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 263, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)Entity->nextState.eType;
  if ( (unsigned __int16)eType > 0x15u || (v15 = 2359300, !_bittest(&v15, eType)) )
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
  v16 = CG_GetEntity(localClientNum, Entity->typeData.flightDurationMs);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 270, ASSERT_TYPE_ASSERT, "(constraintEnt)", (const char *)&queryFormat, "constraintEnt") )
    __debugbreak();
  if ( (v16->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 271, ASSERT_TYPE_ASSERT, "(CENextValid( constraintEnt ))", (const char *)&queryFormat, "CENextValid( constraintEnt )") )
    __debugbreak();
  if ( v16->nextState.eType != ET_RAGDOLL_CONSTRAINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 272, ASSERT_TYPE_ASSERT, "(constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT") )
    __debugbreak();
  AnglesToAxis(&v16->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&v16->pose, &axis.m[3]);
  v17 = 0;
  outHitLocation = HITLOC_NONE;
  if ( CG_RagdollCallback_DecodeConstraint(localClientNum, Entity, (const RagdollHitLocationInfo *)&v16->nextState.lerp.u, &outHitLocation, &outWorldHitPos) )
  {
    v20 = outHitLocation;
    __asm { vmovaps [rsp+130h+var_40], xmm6 }
    if ( (unsigned int)outHitLocation >= HITLOC_NUM )
    {
      LODWORD(angleMin) = 22;
      LODWORD(outBodyRadius) = outHitLocation;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 289, ASSERT_TYPE_ASSERT, "(unsigned)( hitLoc ) < (unsigned)( HITLOC_NUM )", "hitLoc doesn't index HITLOC_NUM\n\t%i not in [0, %i)", outBodyRadius, angleMin) )
        __debugbreak();
    }
    if ( v20 == HITLOC_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 290, ASSERT_TYPE_ASSERT, "(hitLoc != HITLOC_NONE)", (const char *)&queryFormat, "hitLoc != HITLOC_NONE") )
      __debugbreak();
    ragdollHandle = _RDI->ragdollHandle;
    v22 = 3 * localClientNum + 3;
    outHitLocation = v22;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    p_hitBodyIdx = (unsigned int *)&_RDI->hitBodyIdx;
    outBodyIdx = -1;
    __asm
    {
      vmovss  [rsp+130h+var_D4], xmm6
      vmovss  [rsp+130h+var_D8], xmm6
    }
    BodyIdxForHitLocation = Ragdoll_GetBodyIdxForHitLocation((Physics_WorldId)v22, ragdollHandle, v20, &_RDI->authInstanceId, &_RDI->hitBodyIdx, &v57);
    v26 = Ragdoll_GetBodyIdxForHitLocation((Physics_WorldId)v22, _RDI->ragdollHandle, HITLOC_TORSO_UPR, &_RDI->authInstanceId, &outBodyIdx, &v58);
    if ( !BodyIdxForHitLocation || !v26 )
    {
      _RDI->creationFailed = 1;
      if ( BodyIdxForHitLocation )
        v17 = *p_hitBodyIdx;
      hitBodyIdx = v17;
      goto LABEL_89;
    }
    *(double *)&_XMM0 = Ragdoll_GetRootRadius(_RDI->ragdollHandle);
    __asm
    {
      vcomiss xmm0, xmm6
      vmovss  dword ptr [rdi+10h], xmm0
    }
    if ( v27 | v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 307, ASSERT_TYPE_ASSERT, "(data->rootBodyRadius > 0.0f)", (const char *)&queryFormat, "data->rootBodyRadius > 0.0f") )
      __debugbreak();
    v29 = *p_hitBodyIdx;
    v30 = outBodyIdx;
    if ( !_RDI->ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 891, ASSERT_TYPE_ASSERT, "(data->ragdollHandle != 0)", (const char *)&queryFormat, "data->ragdollHandle != RAGDOLL_INVALID") )
      __debugbreak();
    if ( v30 >= 0x40 )
    {
      LODWORD(angleMin) = 64;
      LODWORD(outBodyRadiusa) = v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 892, ASSERT_TYPE_ASSERT, "(unsigned)( targetBodyIndex ) < (unsigned)( 64 )", "targetBodyIndex doesn't index RAGDOLL_MAX_BONES\n\t%i not in [0, %i)", outBodyRadiusa, angleMin) )
        __debugbreak();
    }
    if ( v29 >= 0x40 )
    {
      LODWORD(angleMin) = 64;
      LODWORD(outBodyRadiusa) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 893, ASSERT_TYPE_ASSERT, "(unsigned)( hitBodyIndex ) < (unsigned)( 64 )", "hitBodyIndex doesn't index RAGDOLL_MAX_BONES\n\t%i not in [0, %i)", outBodyRadiusa, angleMin) )
        __debugbreak();
    }
    v31 = DCONST_DVARINT_cg_impaleMaxBoneDistance;
    if ( !DCONST_DVARINT_cg_impaleMaxBoneDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleMaxBoneDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    integer = v31->current.integer;
    if ( Ragdoll_CountLinksBetween(_RDI->ragdollHandle, v30, v29) <= integer )
    {
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_cg_impaleWarpMode, "cg_impaleWarpMode");
      v34 = localClientNuma;
      v35 = Int_Internal_DebugName;
      if ( LocalClientGlobals->oldTime < LocalClientGlobals->killCamEndTime )
        v35 = Warp_Full_TraceRootPath;
      if ( !CG_RagdollCallback_WarpRagdoll(localClientNuma, _RDI, v35, &outWorldHitPos, &axis, &outWarpedRagdollHitPos) )
      {
        hitBodyIdx = _RDI->hitBodyIdx;
        _RDI->creationFailed = 1;
LABEL_89:
        __asm { vmovaps xmm3, xmm8; speed }
        Ragdoll_ApplyVelocity(_RDI->ragdollHandle, hitBodyIdx, axis.m, *(const float *)&_XMM3);
        result = 0;
LABEL_90:
        __asm { vmovaps xmm6, [rsp+130h+var_40] }
        goto LABEL_91;
      }
      __asm { vmovaps [rsp+130h+var_50], xmm7 }
      CG_RagdollCallback_CaptureInitialFriction(v34, _RDI);
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_impaleFriction, "cg_impaleFriction");
      __asm { vmovaps xmm7, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_impaleMaxAngle, "cg_impaleMaxAngle");
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_impaleBreakThreshold, "cg_impaleBreakThreshold");
      __asm
      {
        vxorps  xmm1, xmm6, cs:__xmm@80000000800000008000000080000000
        vmovss  [rsp+130h+var_F0], xmm0
        vmovss  [rsp+130h+var_F8], xmm6
        vmovss  [rsp+130h+angleMin], xmm1
        vmovss  dword ptr [rsp+130h+outBodyRadius], xmm7
      }
      v40 = Physics_InstantiateHingeConstraint((Physics_WorldId)outHitLocation, _RDI->authInstanceId, _RDI->hitBodyIdx, &outWarpedRagdollHitPos, axis.m, outBodyRadiusb, angleMina, v53, v54, &_RDI->constraintId);
      __asm { vmovaps xmm7, [rsp+130h+var_50] }
      if ( v40 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+30h+outOrigin]
          vmovss  xmm1, dword ptr [rbp+30h+outOrigin+4]
        }
        _RDI->clientNum = v34;
        __asm
        {
          vmovss  dword ptr [rdi+18h], xmm0
          vmovss  xmm0, dword ptr [rbp+30h+outOrigin+8]
          vmovss  dword ptr [rdi+20h], xmm0
          vmovss  dword ptr [rdi+1Ch], xmm1
        }
        *(_QWORD *)_RDI->prevConstraintVel.v = 0i64;
        _RDI->prevConstraintVel.v[2] = 0.0;
        if ( v16->nextState.lerp.u.anonymous.data[2] )
          CG_RagdollCallback_StartFX(_RDI, &axis);
        result = 1;
        goto LABEL_90;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 340, ASSERT_TYPE_ASSERT, "(createdConstraint)", (const char *)&queryFormat, "createdConstraint") )
        __debugbreak();
    }
    hitBodyIdx = *p_hitBodyIdx;
    _RDI->creationFailed = 1;
    goto LABEL_89;
  }
  v18 = _RDI->ragdollHandle;
  __asm { vmovaps xmm3, xmm8; speed }
  _RDI->creationFailed = 1;
  Ragdoll_ApplyVelocity(v18, 0, axis.m, *(const float *)&_XMM3);
  result = 0;
LABEL_91:
  __asm { vmovaps xmm8, [rsp+130h+var_60] }
  return result;
}

/*
==============
CG_RagdollCallback_DecodeConstraint
==============
*/
char CG_RagdollCallback_DecodeConstraint(LocalClientNum_t localClientNum, const centity_t *corpseEnt, const RagdollHitLocationInfo *info, hitLocation_t *outHitLocation, vec3_t *outWorldHitPos)
{
  hitLocation_t v12; 
  unsigned int number; 
  unsigned int v14; 
  unsigned int v15; 
  const DObj *v16; 
  const char *BoneNameForHitLocation; 
  const char *v18; 
  scr_string_t LowercaseString; 
  int BoneIndexInternal_58; 
  __int64 v31; 
  __int64 v32; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t in1; 
  tmat43_t<vec3_t> outTagMat; 

  _R14 = outWorldHitPos;
  if ( !info && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 525, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( !corpseEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 526, ASSERT_TYPE_ASSERT, "(corpseEnt)", (const char *)&queryFormat, "corpseEnt") )
    __debugbreak();
  if ( !outHitLocation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 527, ASSERT_TYPE_ASSERT, "(outHitLocation)", (const char *)&queryFormat, "outHitLocation") )
    __debugbreak();
  v12 = *(_BYTE *)info;
  if ( (unsigned int)v12 >= HITLOC_NUM )
  {
    LODWORD(v31) = *(_BYTE *)info;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 530, ASSERT_TYPE_ASSERT, "(unsigned)( hitLoc ) < (unsigned)( HITLOC_NUM )", "hitLoc doesn't index HITLOC_NUM\n\t%i not in [0, %i)", v31, 22) )
      __debugbreak();
  }
  number = corpseEnt->nextState.number;
  if ( number > 0x9E4 )
  {
    LODWORD(v32) = corpseEnt->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v32) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v32) = 2;
    LODWORD(v31) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  v14 = 2533 * localClientNum + number;
  if ( v14 >= 0x13CA )
  {
    LODWORD(v32) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v32) )
      __debugbreak();
  }
  v15 = clientObjMap[v14];
  if ( !v15 )
    goto LABEL_42;
  if ( v15 >= (unsigned int)s_objCount )
  {
    LODWORD(v32) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v32) )
      __debugbreak();
  }
  v16 = (const DObj *)s_objBuf[v15];
  if ( !v16 )
  {
LABEL_42:
    Com_PrintWarning(20, "CG_RagdollCallback_DecodeConstraint(), failed to get DObj for corpse.");
    return 0;
  }
  BoneNameForHitLocation = Ragdoll_GetBoneNameForHitLocation(v12);
  v18 = BoneNameForHitLocation;
  if ( !BoneNameForHitLocation )
  {
    Com_PrintWarning(20, "CG_RagdollCallback_DecodeConstraint(), failed to find valid boneName for hitLoc %i.", (unsigned int)v12);
    return 0;
  }
  LowercaseString = SL_FindLowercaseString(BoneNameForHitLocation);
  if ( !LowercaseString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 546, ASSERT_TYPE_ASSERT, "(boneNameScr != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "boneNameScr != NULL_SCR_STRING") )
    __debugbreak();
  inOutIndex[0] = -2;
  DObjLock(v16);
  BoneIndexInternal_58 = DObjGetBoneIndexInternal_58(v16, LowercaseString, inOutIndex, &modelIndex);
  DObjUnlock(v16);
  if ( !BoneIndexInternal_58 )
  {
    Com_PrintWarning(20, "CG_RagdollCallback_DecodeConstraint(), failed to get bone index for bone name %s.", v18);
    return 0;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rsp+0D8h+in1], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  dword ptr [rsp+0D8h+in1+4], xmm1
    vmovss  dword ptr [rsp+0D8h+in1+8], xmm0
  }
  if ( !CG_DObjGetWorldBoneMatrix(&corpseEnt->pose, v16, inOutIndex[0], (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
  {
    Com_PrintWarning(20, "CG_RagdollCallback_DecodeConstraint(), failed to get bone transform for bone name %s.", v18);
    return 0;
  }
  MatrixTransformVector43(&in1, &outTagMat, outWorldHitPos);
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+0D8h+modelIndex], xmm0
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+0D8h+modelIndex], xmm0
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+0D8h+modelIndex], xmm0
  }
  if ( (modelIndex & 0x7F800000) == 2139095040 )
  {
LABEL_46:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 578, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outWorldHitPos )[0] ) && !IS_NAN( ( outWorldHitPos )[1] ) && !IS_NAN( ( outWorldHitPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outWorldHitPos )[0] ) && !IS_NAN( ( outWorldHitPos )[1] ) && !IS_NAN( ( outWorldHitPos )[2] )") )
      __debugbreak();
  }
  *outHitLocation = v12;
  return 1;
}

/*
==============
CG_RagdollCallback_DestroyConstraint
==============
*/
char CG_RagdollCallback_DestroyConstraint(LocalClientNum_t localClientNum, RagdollConstraint *data)
{
  __int32 v5; 
  unsigned int v6; 
  unsigned int NumConstraints; 
  unsigned int authInstanceId; 
  bool v10; 
  ParticleManager *ParticleManager; 
  __int64 v12; 
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
  __asm { vmovss  xmm2, cs:__real@3f800000; frictionScale }
  CG_RagdollCallback_SetFrictionScale(localClientNum, data, *(float *)&_XMM2);
  CG_RagdollCallback_MarkPenetrating(data, (const LocalClientNum_t)data->clientNum);
  v5 = 3 * localClientNum + 3;
  v6 = 0;
  NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v5, data->authInstanceId);
  if ( NumConstraints )
  {
    while ( 1 )
    {
      authInstanceId = data->authInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(v12) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v12) )
          __debugbreak();
      }
      if ( authInstanceId == -1 )
      {
        LODWORD(v12) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v12) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(v12) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v12) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(v12) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v12) )
          __debugbreak();
      }
      if ( HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v5, authInstanceId, v6)->m_value == data->constraintId )
        break;
      if ( ++v6 >= NumConstraints )
        goto LABEL_34;
    }
    Physics_DestroyConstraint((Physics_WorldId)v5, data->authInstanceId, v6, 0);
    v10 = data->clientNum == LOCAL_CLIENT_INVALID;
    data->constraintId = 0x7FFFFFFF;
    if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 1012, ASSERT_TYPE_ASSERT, "(data->clientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "data->clientNum != LOCAL_CLIENT_INVALID") )
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

void __fastcall CG_RagdollCallback_SetFrictionScale(LocalClientNum_t localClientNum, const RagdollConstraint *data, double frictionScale)
{
  __int32 v9; 
  hknpWorld *World; 
  unsigned int v11; 
  int NumConstraints; 
  __int64 v13; 
  unsigned int authInstanceId; 
  __int64 m_value; 
  int v20; 
  __int64 v28; 
  double v29; 
  double v30; 
  hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant> result; 

  __asm
  {
    vmovaps [rsp+98h+var_48], xmm7
    vmovaps xmm7, xmm2
  }
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 837, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 838, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( !data->constraintCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 839, ASSERT_TYPE_ASSERT, "(data->constraintCount != 0)", (const char *)&queryFormat, "data->constraintCount != 0") )
    __debugbreak();
  v9 = 3 * localClientNum + 3;
  World = HavokPhysics_GetWorld((Physics_WorldId)v9);
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 844, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  v11 = 0;
  NumConstraints = Physics_GetNumConstraints((const Physics_WorldId)v9, data->authInstanceId);
  v13 = NumConstraints;
  if ( NumConstraints > 0 )
  {
    __asm { vmovaps [rsp+98h+var_38], xmm6 }
    _R15 = data->initialFriction;
    __asm
    {
      vmovaps [rsp+98h+var_58], xmm8
      vxorps  xmm8, xmm8, xmm8
    }
    do
    {
      authInstanceId = data->authInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 137, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v9 > 7 )
      {
        LODWORD(v28) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 138, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
          __debugbreak();
      }
      if ( authInstanceId == -1 )
      {
        LODWORD(v28) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 139, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Constraint ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v28) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
      {
        LODWORD(v28) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 140, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
      {
        LODWORD(v28) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 141, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Constraint ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
          __debugbreak();
      }
      m_value = (int)HavokPhysics_GetConstraintID(&result, (const Physics_WorldId)v9, authInstanceId, v11)->m_value;
      if ( (_DWORD)m_value == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 851, ASSERT_TYPE_ASSERT, "(hConstraintId.isValid())", (const char *)&queryFormat, "hConstraintId.isValid()") )
        __debugbreak();
      _RBX = (hkpRagdollConstraintData *)World->m_constraintManager->m_constraints.m_objects.m_data[m_value].m_pod.m_data.m_ptr;
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 854, ASSERT_TYPE_ASSERT, "(constraintData)", (const char *)&queryFormat, "constraintData") )
        __debugbreak();
      __asm { vmovss  xmm6, dword ptr [r15] }
      v20 = _RBX->getType(_RBX);
      if ( v20 == 2 )
      {
        __asm
        {
          vcomiss xmm6, xmm8
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+98h+var_68], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 864, ASSERT_TYPE_ASSERT, "(initialFriction > 0.0f)", "%s\n\tInvalid ragdoll constraint friction value encountered. %f", "initialFriction > 0.0f", v30) )
          __debugbreak();
        __asm
        {
          vmulss  xmm0, xmm6, xmm7
          vmovss  dword ptr [rbx+0E8h], xmm0
        }
      }
      else if ( v20 == 7 )
      {
        __asm
        {
          vcomiss xmm6, xmm8
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+98h+var_68], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 872, ASSERT_TYPE_ASSERT, "(initialFriction > 0.0f)", "%s\n\tInvalid ragdoll constraint friction value encountered. %f", "initialFriction > 0.0f", v29) )
          __debugbreak();
        __asm { vmulss  xmm1, xmm6, xmm7; tmag }
        hkpRagdollConstraintData::setMaxFrictionTorque(_RBX, *(float *)&_XMM1);
      }
      ++v11;
      ++_R15;
      --v13;
    }
    while ( v13 );
    __asm
    {
      vmovaps xmm8, [rsp+98h+var_58]
      vmovaps xmm6, [rsp+98h+var_38]
    }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
}

/*
==============
CG_RagdollCallback_StartFX
==============
*/
void CG_RagdollCallback_StartFX(RagdollConstraint *const data, const tmat43_t<vec3_t> *constraintTransform43)
{
  LocalClientNum_t clientNum; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t v8; 
  ParticleManager *ParticleManager; 
  ParticleSystemHandle v36; 
  __int128 v38; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 

  _RSI = constraintTransform43;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 959, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->spikeFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 960, ASSERT_TYPE_ASSERT, "(data->spikeFx == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "data->spikeFx == PARTICLE_SYSTEM_INVALID_HANDLE") )
    __debugbreak();
  if ( cgMedia.impalingSpikeFx.m_particleSystemDef )
  {
    clientNum = data->clientNum;
    __asm { vmovaps [rsp+0E0h+var_20], xmm6 }
    LocalClientGlobals = CG_GetLocalClientGlobals(clientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 968, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    __asm { vmovss  xmm4, dword ptr [rsi+24h] }
    v8 = data->clientNum;
    HIDWORD(v38) = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp-39h]
      vmovss  xmm0, xmm0, xmm4
      vinsertps xmm0, xmm0, dword ptr [rsi+28h], 10h
      vinsertps xmm0, xmm0, dword ptr [rsi+2Ch], 20h ; ' '
      vmovups xmmword ptr [rbp-39h], xmm0
      vmovups xmmword ptr [rbp+57h+emitterPos.v], xmm0
      vmovss  xmm0, dword ptr [rsi]
    }
    HIDWORD(v39) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rbp-39h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsi+4], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+8], 20h ; ' '
      vmovss  xmm0, dword ptr [rsi+0Ch]
      vmovups xmmword ptr [rbp-39h], xmm3
      vmovups xmmword ptr [rbp+57h+emitterOrientationMat.x.v], xmm3
    }
    HIDWORD(v40) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rbp-39h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsi+10h], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+14h], 20h ; ' '
      vmovss  xmm0, dword ptr [rsi+18h]
      vmovups xmmword ptr [rbp-39h], xmm3
      vmovups xmmword ptr [rbp+57h+emitterOrientationMat.y.v], xmm3
    }
    HIDWORD(v41) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rbp-39h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rsi+1Ch], 10h
      vinsertps xmm3, xmm3, dword ptr [rsi+20h], 20h ; ' '
      vmovups xmmword ptr [rbp-39h], xmm3
    }
    HIDWORD(v42) = 0;
    __asm
    {
      vmovups xmm2, xmmword ptr [rbp-39h]
      vmovss  xmm2, xmm2, xmm4
      vinsertps xmm2, xmm2, dword ptr [rsi+28h], 10h
      vinsertps xmm2, xmm2, dword ptr [rsi+2Ch], 20h ; ' '
      vxorps  xmm0, xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
      vxorps  xmm2, xmm1, xmm2
      vmovups [rbp+57h+var_40], xmm2
      vmovups xmmword ptr [rbp+57h+emitterOrientationMat.z.v], xmm3
    }
    ParticleManager = ParticleManager::GetParticleManager(v8);
    v36 = ParticleManager::AddSystem(ParticleManager, data->clientNum, cgMedia.impalingSpikeFx.m_particleSystemDef, &emitterPos, &emitterOrientationMat, LocalClientGlobals->time, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
    __asm { vmovaps xmm6, [rsp+0E0h+var_20] }
    data->spikeFx = v36;
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
  int v12; 
  centity_t *v13; 
  int v15; 
  hknpWorld *World; 
  __int64 constraintId; 
  hkpConstraintData *m_ptr; 
  const dvar_t *v71; 
  char v74; 
  char v75; 
  const dvar_t *v79; 
  int integer; 
  vec3_t *outWarpedRagdollHitPos; 
  __int64 v85; 
  vec3_t outOrigin; 
  char v87[8]; 
  __int64 v88; 
  int v89[4]; 
  int v90[4]; 
  tmat44_t<vec4_t> out; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> dst; 
  vec3_t v94; 
  char v95; 
  void *retaddr; 

  _RAX = &retaddr;
  v88 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RBX = data;
  if ( (unsigned int)entityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 406, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityNum, 2048) )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 407, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !_RBX->ragdollHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 408, ASSERT_TYPE_ASSERT, "(data->ragdollHandle != 0)", (const char *)&queryFormat, "data->ragdollHandle != RAGDOLL_INVALID") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 411, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( _RBX->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 413, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( _RBX->hitBodyIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 414, ASSERT_TYPE_ASSERT, "(data->hitBodyIdx != 0xFFFFFFFF)", (const char *)&queryFormat, "data->hitBodyIdx != PHYSICSBODYINDEX_INVALID") )
    __debugbreak();
  if ( _RBX->constraintId == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 415, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( data->constraintId ))", (const char *)&queryFormat, "Physics_IsConstraintIdValid( data->constraintId )") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, entityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 419, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 420, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)Entity->nextState.eType;
  if ( (unsigned __int16)eType > 0x15u || (v12 = 2359300, !_bittest(&v12, eType)) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 421, ASSERT_TYPE_ASSERT, "(BG_IsCorpseEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCorpseEntity( &cent->nextState )") )
      __debugbreak();
  }
  if ( Entity->typeData.flightDurationMs == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 422, ASSERT_TYPE_ASSERT, "(cent->typeData.ragdollConstraintEnt != ENTITYNUM_NONE)", (const char *)&queryFormat, "cent->typeData.ragdollConstraintEnt != ENTITYNUM_NONE") )
    __debugbreak();
  if ( Entity->typeData.flightDurationMs >= 0x800u )
  {
    LODWORD(v85) = 2048;
    LODWORD(outWarpedRagdollHitPos) = Entity->typeData.flightDurationMs;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 423, ASSERT_TYPE_ASSERT, "(unsigned)( cent->typeData.ragdollConstraintEnt ) < (unsigned)( ( 2048 ) )", "cent->typeData.ragdollConstraintEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outWarpedRagdollHitPos, v85) )
      __debugbreak();
  }
  v13 = CG_GetEntity(localClientNum, Entity->typeData.flightDurationMs);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 427, ASSERT_TYPE_ASSERT, "(constraintEnt)", (const char *)&queryFormat, "constraintEnt") )
    __debugbreak();
  if ( (v13->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 428, ASSERT_TYPE_ASSERT, "(CENextValid( constraintEnt ))", (const char *)&queryFormat, "CENextValid( constraintEnt )") )
    __debugbreak();
  if ( v13->nextState.eType != ET_RAGDOLL_CONSTRAINT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 429, ASSERT_TYPE_ASSERT, "(constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT)", (const char *)&queryFormat, "constraintEnt->nextState.eType == ET_RAGDOLL_CONSTRAINT") )
    __debugbreak();
  CG_GetPoseOrigin(&v13->pose, &outOrigin);
  AnglesToAxis(&v13->pose.angles, &axis);
  __asm { vmovss  xmm3, cs:__real@3f800000; scale }
  MatrixSet44(&out, &outOrigin, &axis, *(float *)&_XMM3);
  v15 = 0;
  if ( LocalClientGlobals->oldTime < LocalClientGlobals->killCamStartTime )
  {
    MatrixCopy33(&axis, (tmat33_t<vec3_t> *)&dst);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+180h+outOrigin]
      vmovss  [rbp+80h+var_74], xmm0
      vmovss  xmm1, dword ptr [rsp+180h+outOrigin+4]
      vmovss  [rbp+80h+var_70], xmm1
      vmovss  xmm0, dword ptr [rsp+180h+outOrigin+8]
      vmovss  [rbp+80h+var_6C], xmm0
    }
    CG_RagdollCallback_WarpRagdoll(localClientNum, _RBX, Warp_Full_TraceRootPath, &_RBX->prevConstraintPos, &dst, &v94);
    __asm
    {
      vmovss  xmm0, [rbp+80h+var_74]
      vmovss  dword ptr [rbx+18h], xmm0
      vmovss  xmm1, [rbp+80h+var_70]
      vmovss  dword ptr [rbx+1Ch], xmm1
      vmovss  xmm0, [rbp+80h+var_6C]
      vmovss  dword ptr [rbx+20h], xmm0
    }
    *(_QWORD *)_RBX->prevConstraintVel.v = 0i64;
    _RBX->prevConstraintVel.v[2] = 0.0;
  }
  World = HavokPhysics_GetWorld((Physics_WorldId)(3 * localClientNum + 3));
  if ( !World && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 457, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  constraintId = (int)_RBX->constraintId;
  if ( (_DWORD)constraintId == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 461, ASSERT_TYPE_ASSERT, "(constraintId.isValid())", (const char *)&queryFormat, "constraintId.isValid()") )
    __debugbreak();
  m_ptr = World->m_constraintManager->m_constraints.m_objects.m_data[constraintId].m_pod.m_data.m_ptr;
  if ( !m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 466, ASSERT_TYPE_ASSERT, "(constraintData)", (const char *)&queryFormat, "constraintData") )
    __debugbreak();
  if ( m_ptr->getType(m_ptr) != 12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 467, ASSERT_TYPE_ASSERT, "(constraintData->getType() == hkpConstraintData::CONSTRAINT_TYPE_BREAKABLE)", (const char *)&queryFormat, "constraintData->getType() == hkpConstraintData::CONSTRAINT_TYPE_BREAKABLE") )
    __debugbreak();
  _RDI = (_DWORD *)((__int64 (__fastcall *)(hkpConstraintData *))m_ptr->__vftable[1].getExactType)(m_ptr);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 471, ASSERT_TYPE_ASSERT, "(hingeData)", (const char *)&queryFormat, "hingeData") )
    __debugbreak();
  if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)_RDI + 24i64))(_RDI) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 472, ASSERT_TYPE_ASSERT, "(hingeData->getType() == hkpConstraintData::CONSTRAINT_TYPE_LIMITEDHINGE)", (const char *)&queryFormat, "hingeData->getType() == hkpConstraintData::CONSTRAINT_TYPE_LIMITEDHINGE") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+80h+out]
    vmovss  dword ptr [rdi+70h], xmm0
    vmovss  xmm1, dword ptr [rbp+80h+out+10h]
    vmovss  dword ptr [rdi+80h], xmm1
    vmovss  xmm0, dword ptr [rbp+80h+out+20h]
    vmovss  dword ptr [rdi+90h], xmm0
    vmovss  xmm1, dword ptr [rbp+80h+out+4]
    vmovss  dword ptr [rdi+74h], xmm1
    vmovss  xmm0, dword ptr [rbp+80h+out+14h]
    vmovss  dword ptr [rdi+84h], xmm0
    vmovss  xmm1, dword ptr [rbp+80h+out+24h]
    vmovss  dword ptr [rdi+94h], xmm1
    vmovss  xmm0, dword ptr [rbp+80h+out+8]
    vmovss  dword ptr [rdi+78h], xmm0
    vmovss  xmm1, dword ptr [rbp+80h+out+18h]
    vmovss  dword ptr [rdi+88h], xmm1
    vmovss  xmm0, dword ptr [rbp+80h+out+28h]
    vmovss  dword ptr [rdi+98h], xmm0
    vmovss  xmm7, cs:__real@3d000000
    vmulss  xmm1, xmm7, dword ptr [rbp+80h+out+30h]
    vmovss  dword ptr [rdi+0A0h], xmm1
    vmulss  xmm0, xmm7, dword ptr [rbp+80h+out+34h]
    vmovss  dword ptr [rdi+0A4h], xmm0
    vmulss  xmm2, xmm7, dword ptr [rbp+80h+out+38h]
    vmovss  dword ptr [rdi+0A8h], xmm2
  }
  _RDI[43] = 1065353216;
  __asm
  {
    vmulss  xmm1, xmm7, dword ptr [rsp+180h+outOrigin]
    vmovss  [rsp+180h+var_120], xmm1
    vmulss  xmm0, xmm7, dword ptr [rsp+180h+outOrigin+4]
    vmovss  [rsp+180h+var_11C], xmm0
    vmulss  xmm2, xmm7, dword ptr [rsp+180h+outOrigin+8]
    vmovss  [rsp+180h+var_118], xmm2
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+180h+var_114], xmm6
  }
  ((void (__fastcall *)(hkDebugDisplay *, char *, _QWORD, const char *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display3dText)(hkDebugDisplay::singleton.m_ptr, v87, 0i64, "Constraint", v89, hkColor::MAROON, hkDebugDisplayProcess::s_tag);
  __asm
  {
    vmovss  xmm3, cs:__real@41900000
    vmulss  xmm1, xmm3, dword ptr [rbp+80h+axis]
    vaddss  xmm5, xmm1, dword ptr [rsp+180h+outOrigin]
    vmulss  xmm0, xmm3, dword ptr [rbp+80h+axis+4]
    vaddss  xmm4, xmm0, dword ptr [rsp+180h+outOrigin+4]
    vmulss  xmm2, xmm3, dword ptr [rbp+80h+axis+8]
    vaddss  xmm3, xmm2, dword ptr [rsp+180h+outOrigin+8]
    vmulss  xmm0, xmm5, xmm7
    vmovss  [rsp+180h+var_110], xmm0
    vmulss  xmm1, xmm4, xmm7
    vmovss  [rsp+180h+var_10C], xmm1
    vmulss  xmm0, xmm3, xmm7
    vmovss  [rsp+180h+var_108], xmm0
    vmovss  [rsp+180h+var_104], xmm6
  }
  ((void (__fastcall *)(hkDebugDisplay *, char *, _QWORD, int *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display2Points)(hkDebugDisplay::singleton.m_ptr, v87, 0i64, v89, v90, hkColor::MAROON, hkDebugDisplayProcess::s_tag);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+28h]
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  xmm3, dword ptr [rbx+2Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm7, xmm2, xmm2
  }
  CG_RagdollCallback_ApplyVelocityToBodies(localClientNum, _RBX, v13);
  __asm
  {
    vmovss  xmm2, dword ptr [rbx+28h]
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  xmm3, dword ptr [rbx+2Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
  }
  v71 = DCONST_DVARFLT_cg_impaleRagdollStiffnessRate;
  if ( !DCONST_DVARFLT_cg_impaleRagdollStiffnessRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleRagdollStiffnessRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v71);
  __asm
  {
    vdivss  xmm0, xmm6, dword ptr [rdi+28h]
    vaddss  xmm2, xmm0, cs:__real@3f800000; frictionScale
  }
  CG_RagdollCallback_SetFrictionScale(localClientNum, _RBX, *(double *)&_XMM2);
  __asm
  {
    vcvtss2sd xmm0, xmm6, xmm6
    vmovsd  xmm1, cs:__real@3eb0c6f7a0b5ed8d
    vcomisd xmm0, xmm1
  }
  if ( v74 | v75 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm7, xmm7
      vcomisd xmm0, xmm1
    }
    if ( v74 | v75 )
      CG_RagdollCallback_MarkPenetrating(_RBX, (const LocalClientNum_t)_RBX->clientNum);
    if ( LocalClientGlobals->time - _RBX->markPenetratingTime < 0 )
      v15 = LocalClientGlobals->time - _RBX->markPenetratingTime;
    v79 = DCONST_DVARINT_cg_impaleMaxPenetrationSolveTimeMs;
    if ( !DCONST_DVARINT_cg_impaleMaxPenetrationSolveTimeMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_impaleMaxPenetrationSolveTimeMs") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v79);
    integer = v79->current.integer;
    if ( Ragdoll_IsPenetrating(_RBX->ragdollHandle) && v15 >= integer )
      CG_RagdollCallback_DestroyConstraint(localClientNum, _RBX);
  }
  CG_RagdollCallback_UpdateFX(_RBX, &out);
  memset(&outOrigin, 0, sizeof(outOrigin));
  _R11 = &v95;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
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
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  float4 normal[2]; 
  float4 v31[2]; 

  _RDI = constraintTransform44;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 991, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( data->clientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 992, ASSERT_TYPE_ASSERT, "(data->clientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "data->clientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  spikeFx = data->spikeFx;
  clientNum = data->clientNum;
  _RBX = NULL;
  v8 = clientNum << 12;
  v9 = 0;
  if ( g_particleSystemsGeneration[v8 + (spikeFx & 0xFFF)].__all32 == spikeFx )
    v9 = spikeFx & 0xFFF;
  v10 = v8 + v9;
  if ( g_particleSystems[0][v10] >= (ParticleSystem *)0x1000 )
    _RBX = g_particleSystems[0][v10];
  if ( _RBX )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups [rsp+0C8h+var_58], ymm0
      vmovups ymm0, ymmword ptr [rdi+20h]
      vmovups [rsp+0C8h+var_38], ymm0
      vmovups ymm0, [rsp+0C8h+var_58]
      vmovups ymm1, [rsp+0C8h+var_38]
      vmovaps [rsp+0C8h+var_18], xmm6
      vmovups ymmword ptr [rsp+0C8h+normal.v], ymm0
      vmovups ymmword ptr [rsp+0C8h+var_78.v], ymm1
    }
    Particle_AssertFloat4IsNormalized(normal);
    Particle_AssertFloat4IsNormalized(&normal[1]);
    Particle_AssertFloat4IsNormalized(v31);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsp+0C8h+normal.v]
      vmovups ymm1, ymmword ptr [rsp+0C8h+var_78.v]
      vmovups ymmword ptr [rbx], ymm0
      vmovups ymmword ptr [rbx+20h], ymm1
      vmovups xmm1, xmmword ptr [rbx+20h]
      vshufps xmm4, xmm1, xmmword ptr [rbx+30h], 44h ; 'D'
      vshufps xmm5, xmm1, xmmword ptr [rbx+30h], 0EEh ; 'î'
      vmovups xmm3, xmmword ptr [rbx]
      vshufps xmm6, xmm3, xmmword ptr [rbx+10h], 44h ; 'D'
      vshufps xmm2, xmm3, xmmword ptr [rbx+10h], 0EEh ; 'î'
      vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
      vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
      vmovaps xmm6, [rsp+0C8h+var_18]
      vmovups xmmword ptr [rsp+0C8h+var_58+10h], xmm1
      vmovups xmmword ptr [rsp+0C8h+var_58], xmm0
      vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
      vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
      vmovups xmmword ptr [rsp+0C8h+var_38], xmm0
      vmovups ymm0, [rsp+0C8h+var_58]
      vmovups xmmword ptr [rsp+0C8h+var_38+10h], xmm1
      vmovups ymm1, [rsp+0C8h+var_38]
      vmovups ymmword ptr [rbx+40h], ymm0
      vmovups ymmword ptr [rbx+60h], ymm1
    }
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
  bool Constraint; 
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
bool CG_RagdollCallback_WarpRagdoll(LocalClientNum_t localClientNum, RagdollConstraint *const data, RagdollWarpMode warpMode, const vec3_t *ragdollHitPos, const tmat43_t<vec3_t> *constraintTransform, vec3_t *outWarpedRagdollHitPos)
{
  bool v19; 
  __int32 v20; 
  signed int v22; 
  unsigned int RigidBodyID; 
  unsigned int v41; 
  hknpShape *v68; 
  int NumRigidBodys; 
  unsigned int authInstanceId; 
  unsigned int m_serialAndIndex; 
  Physics_ShapecastExtendedData *extendedData; 
  PhysicsQuery_ShapecastHit *hit; 
  hknpBodyId result; 
  LocalClientNum_t localClientNuma; 
  const vec3_t *v121; 
  vec3_t *v122; 
  Physics_ShapecastExtendedData v123; 
  vec3_t center; 
  vec3_t end; 
  vec3_t v126; 
  vec4_t orientationAsQuat; 
  int v128[4]; 
  int v129[4]; 
  vec3_t position; 
  int v131[4]; 
  vec4_t orientation; 
  vec4_t v133; 
  PhysicsQuery_ShapecastHit v134; 
  char optionalInplaceBuffer[432]; 

  _R13 = outWarpedRagdollHitPos;
  v122 = outWarpedRagdollHitPos;
  v121 = ragdollHitPos;
  _R15 = data;
  localClientNuma = localClientNum;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 644, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( _R15->authInstanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 645, ASSERT_TYPE_ASSERT, "(data->authInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "data->authInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( _R15->hitBodyIdx == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 646, ASSERT_TYPE_ASSERT, "(data->hitBodyIdx != 0xFFFFFFFF)", (const char *)&queryFormat, "data->hitBodyIdx != PHYSICSBODYINDEX_INVALID") )
    __debugbreak();
  if ( (unsigned int)warpMode >= Warp_ModeCount )
  {
    LODWORD(extendedData) = warpMode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 647, ASSERT_TYPE_ASSERT, "(unsigned)( warpMode ) < (unsigned)( Warp_ModeCount )", "warpMode doesn't index Warp_ModeCount\n\t%i not in [0, %i)", extendedData, 4) )
      __debugbreak();
  }
  *outWarpedRagdollHitPos = *ragdollHitPos;
  if ( warpMode == Warp_Off )
    return 1;
  v20 = 3 * localClientNum + 3;
  _RBX = constraintTransform;
  v22 = 0;
  __asm
  {
    vmovaps [rsp+3F0h+var_40], xmm6
    vmovaps [rsp+3F0h+var_50], xmm7
    vmovaps [rsp+3F0h+var_60], xmm8
    vmovaps [rsp+3F0h+var_70], xmm9
    vmovaps [rsp+3F0h+var_80], xmm10
    vmovaps [rsp+3F0h+var_90], xmm11
    vmovaps [rsp+3F0h+var_A0], xmm12
    vmovaps [rsp+3F0h+var_B0], xmm13
    vmovss  xmm0, dword ptr [rbx+24h]
    vsubss  xmm9, xmm0, dword ptr [r14]
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmovss  xmm1, dword ptr [rbx+28h]
    vsubss  xmm8, xmm0, dword ptr [r14+8]
    vsubss  xmm7, xmm1, dword ptr [r14+4]
    vmovss  xmm12, cs:__real@3d000000
    vxorps  xmm13, xmm13, xmm13
  }
  if ( warpMode == Warp_NormalToAxis )
  {
    __asm
    {
      vmulss  xmm1, xmm9, dword ptr [rbx]
      vmulss  xmm0, xmm7, dword ptr [rbx+4]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm8, dword ptr [rbx+8]
      vaddss  xmm2, xmm2, xmm1
      vxorps  xmm3, xmm2, cs:__xmm@80000000800000008000000080000000
      vmulss  xmm0, xmm3, dword ptr [rbx]
      vmulss  xmm1, xmm3, dword ptr [rbx+4]
      vaddss  xmm9, xmm0, xmm9
      vmulss  xmm0, xmm3, dword ptr [rbx+8]
      vaddss  xmm8, xmm0, xmm8
      vaddss  xmm7, xmm1, xmm7
    }
  }
  else if ( warpMode == Warp_Full_TraceRootPath )
  {
    RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v20, _R15->authInstanceId, _R15->hitBodyIdx);
    Physics_GetRigidBodyTransform((const Physics_WorldId)v20, RigidBodyID, &position, &orientation);
    v41 = Physics_GetRigidBodyID((const Physics_WorldId)v20, _R15->authInstanceId, 0);
    Physics_GetRigidBodyTransform((const Physics_WorldId)v20, v41, &v126, &v133);
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+2F0h+position+4]
      vmovss  xmm1, dword ptr [rbp+2F0h+position]
      vsubss  xmm2, xmm1, dword ptr [r14]
      vmovss  xmm0, dword ptr [rbp+2F0h+var_340]
      vmovss  xmm6, cs:__real@41c00000
      vsubss  xmm1, xmm0, xmm1
      vmovss  xmm0, dword ptr [rbp+2F0h+var_340+4]
      vaddss  xmm9, xmm2, xmm1
      vsubss  xmm1, xmm3, dword ptr [r14+4]
      vsubss  xmm2, xmm0, xmm3
      vmovss  xmm3, dword ptr [rbp+2F0h+position+8]
      vmovss  xmm0, dword ptr [rbp+2F0h+var_340+8]
      vaddss  xmm10, xmm2, xmm1
      vsubss  xmm2, xmm3, dword ptr [r14+8]
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm0, xmm6, dword ptr [rbx]
      vaddss  xmm11, xmm2, xmm1
      vaddss  xmm1, xmm9, dword ptr [rbx+24h]
      vaddss  xmm2, xmm10, dword ptr [rbx+28h]
      vaddss  xmm3, xmm11, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rbp+2F0h+end], xmm1
      vsubss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbp+2F0h+center], xmm1
      vmulss  xmm1, xmm6, dword ptr [rbx+4]
      vmovss  dword ptr [rbp+2F0h+end+4], xmm2
      vsubss  xmm2, xmm2, xmm1
      vmulss  xmm1, xmm6, dword ptr [rbx+8]
      vmovss  dword ptr [rbp+2F0h+center+4], xmm2
      vsubss  xmm2, xmm3, xmm1
      vmovss  xmm1, dword ptr [r15+10h]; radius
      vmovss  dword ptr [rbp+2F0h+center+8], xmm2
      vmovss  dword ptr [rbp+2F0h+end+8], xmm3
    }
    v68 = Physics_CreateShapeSphere(&center, *(float *)&_XMM1, optionalInplaceBuffer, 432);
    if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 708, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    __asm { vmovss  xmm0, cs:__real@3c83126f }
    v123.simplifyStart = 0;
    v123.ignoreBodies = NULL;
    __asm { vmovss  [rsp+3F0h+var_398.accuracy], xmm0 }
    v123.phaseSelection = All;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v123.permitOutwardTrace = 0;
    __asm
    {
      vmovss  [rsp+3F0h+var_398.startTolerance], xmm13
      vmovss  [rsp+3F0h+var_398.collisionBuffer], xmm13
      vmovdqu xmmword ptr [rsp+3F0h+var_398.nonBrushShape], xmm0
    }
    v123.contents = 8389905;
    PhysicsQuery_ImmediateShapecastClosest((Physics_WorldId)v20, v68, &center, &end, &quat_identity, &v123, &v134);
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+2F0h+center+8]
      vmovss  xmm4, dword ptr [rbp+2F0h+center+4]
      vmovss  xmm5, dword ptr [rbp+2F0h+center]
    }
    if ( v134.isValid )
    {
      __asm
      {
        vmovss  xmm0, [rbp+2F0h+var_2C0.fraction]
        vcomiss xmm0, xmm13
        vmulss  xmm2, xmm0, xmm6
        vmulss  xmm0, xmm2, dword ptr [rbx]
        vmulss  xmm1, xmm2, dword ptr [rbx+4]
        vaddss  xmm6, xmm0, xmm5
        vmulss  xmm0, xmm2, dword ptr [rbx+8]
        vaddss  xmm8, xmm0, xmm3
        vaddss  xmm7, xmm1, xmm4
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbp+2F0h+end]
        vmovss  xmm7, dword ptr [rbp+2F0h+end+4]
        vmovss  xmm8, dword ptr [rbp+2F0h+end+8]
      }
    }
    __asm
    {
      vmulss  xmm0, xmm5, xmm12
      vmovss  [rbp+2F0h+var_320], xmm0
      vmulss  xmm1, xmm4, xmm12
      vmovss  [rbp+2F0h+var_31C], xmm1
      vmulss  xmm0, xmm3, xmm12
      vmulss  xmm1, xmm6, xmm12
      vmovss  [rbp+2F0h+var_318], xmm0
      vmovss  dword ptr [rbp+2F0h+orientationAsQuat], xmm1
      vmulss  xmm0, xmm7, xmm12
      vmulss  xmm1, xmm8, xmm12
      vmovss  dword ptr [rbp+2F0h+orientationAsQuat+4], xmm0
      vmovss  dword ptr [rbp+2F0h+orientationAsQuat+8], xmm1
      vmovss  [rbp+2F0h+var_314], xmm13
      vmovss  dword ptr [rbp+2F0h+orientationAsQuat+0Ch], xmm13
    }
    ((void (__fastcall *)(hkDebugDisplay *, hknpBodyId *, _QWORD, const char *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display3dText)(hkDebugDisplay::singleton.m_ptr, &result, 0i64, "Root Trace", v128, hkColor::DARKTURQUOISE, hkDebugDisplayProcess::s_tag);
    ((void (__fastcall *)(hkDebugDisplay *, hknpBodyId *, _QWORD, int *, vec4_t *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display2Points)(hkDebugDisplay::singleton.m_ptr, &result, 0i64, v128, &orientationAsQuat, hkColor::DARKTURQUOISE, hkDebugDisplayProcess::s_tag);
    __asm
    {
      vsubss  xmm0, xmm6, xmm9
      vsubss  xmm9, xmm0, dword ptr [r14]
      vsubss  xmm0, xmm8, xmm11
      vsubss  xmm8, xmm0, dword ptr [r14+8]
      vsubss  xmm1, xmm7, xmm10
      vsubss  xmm7, xmm1, dword ptr [r14+4]
    }
  }
  __asm { vmovss  [rsp+3F0h+result.m_serialAndIndex], xmm9 }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_56;
  __asm { vmovss  [rsp+3F0h+result.m_serialAndIndex], xmm7 }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_56;
  __asm { vmovss  [rsp+3F0h+result.m_serialAndIndex], xmm8 }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_56:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 748, ASSERT_TYPE_SANITY, "( !IS_NAN( ( translation )[0] ) && !IS_NAN( ( translation )[1] ) && !IS_NAN( ( translation )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( translation )[0] ) && !IS_NAN( ( translation )[1] ) && !IS_NAN( ( translation )[2] )") )
      __debugbreak();
  }
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v20, _R15->authInstanceId);
  if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ragdoll_callback.cpp", 752, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
    __debugbreak();
  if ( NumRigidBodys > 0 )
  {
    do
    {
      authInstanceId = _R15->authInstanceId;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v20 > 7 )
      {
        LODWORD(hit) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", hit) )
          __debugbreak();
      }
      if ( authInstanceId == -1 )
      {
        LODWORD(hit) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", hit) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v20 - 2) <= 5 )
      {
        LODWORD(hit) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", hit) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v20 <= 1 )
      {
        LODWORD(hit) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", hit) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v20, authInstanceId, v22)->m_serialAndIndex;
      Physics_GetRigidBodyTransform((const Physics_WorldId)v20, m_serialAndIndex, &center, &orientationAsQuat);
      __asm
      {
        vaddss  xmm1, xmm9, dword ptr [rbp+2F0h+center]
        vaddss  xmm0, xmm7, dword ptr [rbp+2F0h+center+4]
        vaddss  xmm2, xmm8, dword ptr [rbp+2F0h+center+8]
        vmovss  dword ptr [rbp+2F0h+center], xmm1
        vmovss  dword ptr [rbp+2F0h+center+4], xmm0
        vmovss  dword ptr [rbp+2F0h+center+8], xmm2
      }
      Physics_WarpRigidBodyTo((const Physics_WorldId)v20, m_serialAndIndex, &center, &orientationAsQuat, 0, 1);
      ++v22;
    }
    while ( v22 < NumRigidBodys );
    _R13 = v122;
  }
  Physics_UpdateBroadphase((Physics_WorldId)v20, 1);
  __asm
  {
    vmulss  xmm0, xmm12, dword ptr [r14]
    vmulss  xmm1, xmm12, dword ptr [r14+4]
    vaddss  xmm2, xmm7, dword ptr [r14+4]
    vmovss  [rbp+2F0h+var_310], xmm0
    vmulss  xmm0, xmm12, dword ptr [r14+8]
    vmovss  [rbp+2F0h+var_30C], xmm1
    vaddss  xmm1, xmm9, dword ptr [r14]
    vmovss  [rbp+2F0h+var_308], xmm0
    vmulss  xmm0, xmm1, xmm12
    vmovss  [rbp+2F0h+var_2F0], xmm0
    vaddss  xmm0, xmm8, dword ptr [r14+8]
    vmulss  xmm1, xmm2, xmm12
    vmulss  xmm2, xmm0, xmm12
    vmovss  [rbp+2F0h+var_2E8], xmm2
    vmovss  [rbp+2F0h+var_304], xmm13
    vmovss  [rbp+2F0h+var_2EC], xmm1
    vmovss  [rbp+2F0h+var_2E4], xmm13
  }
  ((void (__fastcall *)(hkDebugDisplay *, hknpBodyId *, _QWORD, const char *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display3dText)(hkDebugDisplay::singleton.m_ptr, &result, 0i64, "Warp Start", v129, hkColor::HOTPINK, hkDebugDisplayProcess::s_tag);
  ((void (__fastcall *)(hkDebugDisplay *, hknpBodyId *, _QWORD, int *, int *, const unsigned int, int))hkDebugDisplay::singleton.m_ptr->display2Points)(hkDebugDisplay::singleton.m_ptr, &result, 0i64, v129, v131, hkColor::HOTPINK, hkDebugDisplayProcess::s_tag);
  CG_RagdollCallback_MarkPenetrating(_R15, localClientNuma);
  __asm
  {
    vaddss  xmm0, xmm9, dword ptr [r14]
    vmovss  dword ptr [r13+0], xmm0
    vaddss  xmm1, xmm7, dword ptr [r14+4]
    vmovss  dword ptr [r13+4], xmm1
    vaddss  xmm0, xmm8, dword ptr [r14+8]
    vmovss  dword ptr [r13+8], xmm0
  }
  v19 = 1;
  __asm
  {
    vmovaps xmm12, [rsp+3F0h+var_A0]
    vmovaps xmm11, [rsp+3F0h+var_90]
    vmovaps xmm10, [rsp+3F0h+var_80]
    vmovaps xmm9, [rsp+3F0h+var_70]
    vmovaps xmm8, [rsp+3F0h+var_60]
    vmovaps xmm7, [rsp+3F0h+var_50]
    vmovaps xmm6, [rsp+3F0h+var_40]
    vmovaps xmm13, [rsp+3F0h+var_B0]
  }
  return v19;
}


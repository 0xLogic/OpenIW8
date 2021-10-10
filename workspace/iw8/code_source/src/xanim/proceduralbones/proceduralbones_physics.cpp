/*
==============
XAnimBonePhysicsResetInternal
==============
*/

void __fastcall XAnimBonePhysicsResetInternal(DObjProceduralBones *procBones)
{
  ?XAnimBonePhysicsResetInternal@@YAXPEAUDObjProceduralBones@@@Z(procBones);
}

/*
==============
XAnimBonePhysicsSetGroundPlaneEnabled
==============
*/

void __fastcall XAnimBonePhysicsSetGroundPlaneEnabled(DObj *dobj, bool groundPlaneEnabled)
{
  ?XAnimBonePhysicsSetGroundPlaneEnabled@@YAXPEAUDObj@@_N@Z(dobj, groundPlaneEnabled);
}

/*
==============
GetSecureRootVec3
==============
*/

void __fastcall GetSecureRootVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  ?GetSecureRootVec3@@YAXAEBTvec3_t@@AEAT1@III@Z(from, to, xConst, yConst, zConst);
}

/*
==============
XAnimBonePhysicsReset
==============
*/

void __fastcall XAnimBonePhysicsReset(const DObj *dobj)
{
  ?XAnimBonePhysicsReset@@YAXPEBUDObj@@@Z(dobj);
}

/*
==============
XAnimBonePhysicsUpdateTime
==============
*/

void __fastcall XAnimBonePhysicsUpdateTime(DObj *dobj, float deltaTime)
{
  ?XAnimBonePhysicsUpdateTime@@YAXPEAUDObj@@M@Z(dobj, deltaTime);
}

/*
==============
XAnimBonePhysics_SetCurveState
==============
*/

void __fastcall XAnimBonePhysics_SetCurveState(DObj *dobj, XAnimCurve *const curve, const float strengthMul, const float rateMul)
{
  ?XAnimBonePhysics_SetCurveState@@YAXPEAUDObj@@QEAUXAnimCurve@@MM@Z(dobj, curve, strengthMul, rateMul);
}

/*
==============
DObjPhysicsState_SetPrevRootTrans
==============
*/

void __fastcall DObjPhysicsState_SetPrevRootTrans(DObjPhysicsState *dObjPhysicsState, const vec3_t *prevRootTrans)
{
  ?DObjPhysicsState_SetPrevRootTrans@@YAXPEAUDObjPhysicsState@@AEBTvec3_t@@@Z(dObjPhysicsState, prevRootTrans);
}

/*
==============
XAnimBonePhysicsSetDObjMatrix
==============
*/

void __fastcall XAnimBonePhysicsSetDObjMatrix(const DObj *dobj, const vec3_t *origin, const vec3_t *angles)
{
  ?XAnimBonePhysicsSetDObjMatrix@@YAXPEBUDObj@@AEBTvec3_t@@1@Z(dobj, origin, angles);
}

/*
==============
XAnimBonePhysics_GetModelSpaceGroundPlane
==============
*/

void __fastcall XAnimBonePhysics_GetModelSpaceGroundPlane(const DObjProceduralBones *procBones, vec4_t *outModelGroundPlane)
{
  ?XAnimBonePhysics_GetModelSpaceGroundPlane@@YAXPEBUDObjProceduralBones@@AEATvec4_t@@@Z(procBones, outModelGroundPlane);
}

/*
==============
XAnimBonePhysicsUpdate
==============
*/

void __fastcall XAnimBonePhysicsUpdate(DObjProceduralBones *procBones, XAnimProcNodeCalcParams *params)
{
  ?XAnimBonePhysicsUpdate@@YAXPEAUDObjProceduralBones@@PEAUXAnimProcNodeCalcParams@@@Z(procBones, params);
}

/*
==============
DObjPhysicsState_GetRootTrans
==============
*/

void __fastcall DObjPhysicsState_GetRootTrans(const DObjPhysicsState *dObjPhysicsState, vec3_t *outRootTrans)
{
  ?DObjPhysicsState_GetRootTrans@@YAXPEBUDObjPhysicsState@@AEATvec3_t@@@Z(dObjPhysicsState, outRootTrans);
}

/*
==============
DObjPhysicsState_SetRootTrans
==============
*/

void __fastcall DObjPhysicsState_SetRootTrans(DObjPhysicsState *dObjPhysicsState, const vec3_t *rootTrans)
{
  ?DObjPhysicsState_SetRootTrans@@YAXPEAUDObjPhysicsState@@AEBTvec3_t@@@Z(dObjPhysicsState, rootTrans);
}

/*
==============
XAnimBonePhysicsClearLinearVelocity
==============
*/

void __fastcall XAnimBonePhysicsClearLinearVelocity(DObj *dobj)
{
  ?XAnimBonePhysicsClearLinearVelocity@@YAXPEAUDObj@@@Z(dobj);
}

/*
==============
DObjPhysicsState_GetPrevRootTrans
==============
*/

void __fastcall DObjPhysicsState_GetPrevRootTrans(const DObjPhysicsState *dObjPhysicsState, vec3_t *outPrevRootTrans)
{
  ?DObjPhysicsState_GetPrevRootTrans@@YAXPEBUDObjPhysicsState@@AEATvec3_t@@@Z(dObjPhysicsState, outPrevRootTrans);
}

/*
==============
SetSecureRootVec3
==============
*/

void __fastcall SetSecureRootVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  ?SetSecureRootVec3@@YAXAEBTvec3_t@@AEAT1@III@Z(from, to, xConst, yConst, zConst);
}

/*
==============
DObjPhysicsState_CloneRootTrans
==============
*/

void __fastcall DObjPhysicsState_CloneRootTrans(const DObjPhysicsState *srcPhysicsState, DObjPhysicsState *destPhysicsState)
{
  ?DObjPhysicsState_CloneRootTrans@@YAXPEBUDObjPhysicsState@@PEAU1@@Z(srcPhysicsState, destPhysicsState);
}

/*
==============
XAnimBonePhysicsSetSettlingEnabled
==============
*/

void __fastcall XAnimBonePhysicsSetSettlingEnabled(DObj *dobj, bool settlingEnabled)
{
  ?XAnimBonePhysicsSetSettlingEnabled@@YAXPEAUDObj@@_N@Z(dobj, settlingEnabled);
}

/*
==============
XAnimBonePhysicsGetAudioEventList
==============
*/

unsigned int __fastcall XAnimBonePhysicsGetAudioEventList(const DObj *dobj, XAnimBonePhysicsAudioEvent *outAudioEvents, unsigned int maxEvents)
{
  return ?XAnimBonePhysicsGetAudioEventList@@YAIPEBUDObj@@PEAUXAnimBonePhysicsAudioEvent@@I@Z(dobj, outAudioEvents, maxEvents);
}

/*
==============
DObjPhysicsState_ClonePrevRootTrans
==============
*/

void __fastcall DObjPhysicsState_ClonePrevRootTrans(const DObjPhysicsState *srcPhysicsState, DObjPhysicsState *destPhysicsState)
{
  ?DObjPhysicsState_ClonePrevRootTrans@@YAXPEBUDObjPhysicsState@@PEAU1@@Z(srcPhysicsState, destPhysicsState);
}

/*
==============
XAnimBonePhysicsRestoreState
==============
*/

void __fastcall XAnimBonePhysicsRestoreState(const DObj *dobj, const XAnimBonePhysicsStateBuffer *stateBuffer)
{
  ?XAnimBonePhysicsRestoreState@@YAXPEBUDObj@@PEBUXAnimBonePhysicsStateBuffer@@@Z(dobj, stateBuffer);
}

/*
==============
XAnimBonePhysicsSaveState
==============
*/

void __fastcall XAnimBonePhysicsSaveState(const DObj *dobj, XAnimBonePhysicsStateBuffer *outStateBuffer)
{
  ?XAnimBonePhysicsSaveState@@YAXPEBUDObj@@PEAUXAnimBonePhysicsStateBuffer@@@Z(dobj, outStateBuffer);
}

/*
==============
XAnimBonePhysicsSetGroundPlaneHeight
==============
*/

void __fastcall XAnimBonePhysicsSetGroundPlaneHeight(DObj *dobj, float height)
{
  ?XAnimBonePhysicsSetGroundPlaneHeight@@YAXPEAUDObj@@M@Z(dobj, height);
}

/*
==============
XAnimBonePhysicsTeleportBones
==============
*/

void __fastcall XAnimBonePhysicsTeleportBones(const DObj *dobj, const vec3_t *translationDelta)
{
  ?XAnimBonePhysicsTeleportBones@@YAXPEBUDObj@@AEBTvec3_t@@@Z(dobj, translationDelta);
}

/*
==============
Copy_DObjPhysicsState
==============
*/
void Copy_DObjPhysicsState(DObjPhysicsState *out, const DObjPhysicsState *in)
{
  vec3_t outPrevRootTrans; 
  vec3_t outRootTrans; 

  DObjPhysicsState_GetRootTrans(in, &outRootTrans);
  DObjPhysicsState_GetPrevRootTrans(in, &outPrevRootTrans);
  *out = *in;
  DObjPhysicsState_SetRootTrans(out, &outRootTrans);
  DObjPhysicsState_SetPrevRootTrans(out, &outPrevRootTrans);
  memset(&outPrevRootTrans, 0, sizeof(outPrevRootTrans));
  memset(&outRootTrans, 0, sizeof(outRootTrans));
}

/*
==============
DObjPhysicsState_ClonePrevRootTrans
==============
*/
void DObjPhysicsState_ClonePrevRootTrans(const DObjPhysicsState *srcPhysicsState, DObjPhysicsState *destPhysicsState)
{
  vec3_t to; 

  if ( !srcPhysicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 183, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  GetSecureRootVec3(&srcPhysicsState->prevRootTrans.prevRootTrans, &to, s_ps_bones_aab_X, s_ps_bones_aab_Y, s_ps_bones_aab_Z);
  if ( !destPhysicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 202, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  SetSecureRootVec3(&to, &destPhysicsState->prevRootTrans.prevRootTrans, s_ps_bones_aab_X, s_ps_bones_aab_Y, s_ps_bones_aab_Z);
}

/*
==============
DObjPhysicsState_CloneRootTrans
==============
*/
void DObjPhysicsState_CloneRootTrans(const DObjPhysicsState *srcPhysicsState, DObjPhysicsState *destPhysicsState)
{
  vec3_t to; 

  if ( !srcPhysicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 145, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  GetSecureRootVec3(&srcPhysicsState->rootTrans.rootTrans, &to, s_bones_aab_X, s_bones_aab_Y, s_bones_aab_Z);
  if ( !destPhysicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 164, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  SetSecureRootVec3(&to, &destPhysicsState->rootTrans.rootTrans, s_bones_aab_X, s_bones_aab_Y, s_bones_aab_Z);
}

/*
==============
DObjPhysicsState_GetPrevRootTrans
==============
*/
void DObjPhysicsState_GetPrevRootTrans(const DObjPhysicsState *dObjPhysicsState, vec3_t *outPrevRootTrans)
{
  if ( !dObjPhysicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 183, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  GetSecureRootVec3(&dObjPhysicsState->prevRootTrans.prevRootTrans, outPrevRootTrans, s_ps_bones_aab_X, s_ps_bones_aab_Y, s_ps_bones_aab_Z);
}

/*
==============
DObjPhysicsState_GetRootTrans
==============
*/
void DObjPhysicsState_GetRootTrans(const DObjPhysicsState *dObjPhysicsState, vec3_t *outRootTrans)
{
  if ( !dObjPhysicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 145, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  GetSecureRootVec3(&dObjPhysicsState->rootTrans.rootTrans, outRootTrans, s_bones_aab_X, s_bones_aab_Y, s_bones_aab_Z);
}

/*
==============
DObjPhysicsState_SetPrevRootTrans
==============
*/
void DObjPhysicsState_SetPrevRootTrans(DObjPhysicsState *dObjPhysicsState, const vec3_t *prevRootTrans)
{
  if ( !dObjPhysicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 202, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  SetSecureRootVec3(prevRootTrans, &dObjPhysicsState->prevRootTrans.prevRootTrans, s_ps_bones_aab_X, s_ps_bones_aab_Y, s_ps_bones_aab_Z);
}

/*
==============
DObjPhysicsState_SetRootTrans
==============
*/
void DObjPhysicsState_SetRootTrans(DObjPhysicsState *dObjPhysicsState, const vec3_t *rootTrans)
{
  if ( !dObjPhysicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 164, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  SetSecureRootVec3(rootTrans, &dObjPhysicsState->rootTrans.rootTrans, s_bones_aab_X, s_bones_aab_Y, s_bones_aab_Z);
}

/*
==============
GetSecureRootVec3
==============
*/
void GetSecureRootVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  float v5; 
  float v6; 
  float v7; 
  int v8; 
  float v9; 
  __int64 v10; 
  int v11; 

  v5 = from->v[2];
  v6 = from->v[0];
  LOBYTE(v11) = BYTE3(from);
  HIBYTE(v11) = BYTE2(from);
  v7 = from->v[1];
  *(_WORD *)((char *)&v11 + 1) = (_WORD)from;
  v8 = v11;
  LODWORD(to->v[0]) = xConst ^ LODWORD(v5) ^ v11 ^ LODWORD(v7);
  LODWORD(to->v[1]) = yConst ^ LODWORD(v6) ^ LODWORD(v5) ^ v8;
  LODWORD(to->v[2]) = LODWORD(v6) ^ v8 ^ ~zConst;
  v9 = to->v[0];
  memset(&v10, 0, sizeof(v10));
  *(float *)&zConst = v9;
  if ( (LODWORD(v9) & 0x7F800000) == 2139095040 || (zConst = LODWORD(to->v[1]), (zConst & 0x7F800000) == 2139095040) || (zConst = LODWORD(to->v[2]), (zConst & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 138, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
      __debugbreak();
  }
}

/*
==============
SetSecureRootVec3
==============
*/
void SetSecureRootVec3(const vec3_t *from, vec3_t *to, const unsigned int xConst, const unsigned int yConst, const unsigned int zConst)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  vec3_t *v16; 
  float v17; 

  v16 = to;
  v17 = from->v[0];
  if ( (LODWORD(v17) & 0x7F800000) == 2139095040 || (v17 = from->v[1], (LODWORD(v17) & 0x7F800000) == 2139095040) || (v17 = from->v[2], (LODWORD(v17) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 88, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  v9 = from->v[2];
  v10 = from->v[1];
  LOBYTE(v17) = BYTE3(to);
  HIBYTE(v17) = BYTE2(v16);
  *(_WORD *)((char *)&v17 + 1) = (_WORD)to;
  v11 = v17;
  v12 = from->v[0];
  v13 = LODWORD(v17) ^ ~zConst ^ LODWORD(v9);
  v14 = LODWORD(v17) ^ v13 ^ LODWORD(v10);
  LODWORD(to->v[0]) = v13;
  v15 = yConst ^ v14;
  LODWORD(to->v[2]) = v15;
  LODWORD(to->v[1]) = xConst ^ LODWORD(v11) ^ v15 ^ LODWORD(v12);
  memset(&v16, 0, sizeof(v16));
}

/*
==============
XAnimBonePhysicsClearLinearVelocity
==============
*/
void XAnimBonePhysicsClearLinearVelocity(DObj *dobj)
{
  DObjProceduralBones *v2; 
  DObjProceduralBones *v3; 
  DObjPhysicsState *p_physicsState; 
  vec3_t to; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 796, ASSERT_TYPE_ASSERT, "(dobj != nullptr)", (const char *)&queryFormat, "dobj != nullptr") )
    __debugbreak();
  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v2 = DObjProceduralBones_TryLock(dobj);
    v3 = v2;
    if ( v2 )
    {
      p_physicsState = &v2->physicsState;
      if ( v2 == (DObjProceduralBones *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 145, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
        __debugbreak();
      GetSecureRootVec3(&p_physicsState->rootTrans.rootTrans, &to, s_bones_aab_X, s_bones_aab_Y, s_bones_aab_Z);
      if ( !p_physicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 202, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
        __debugbreak();
      SetSecureRootVec3(&to, &p_physicsState->prevRootTrans.prevRootTrans, s_ps_bones_aab_X, s_ps_bones_aab_Y, s_ps_bones_aab_Z);
      *(_QWORD *)v3->physicsState.prevVelocity.v = 0i64;
      *(_QWORD *)&v3->physicsState.prevVelocity.z = 0i64;
      *(_QWORD *)&v3->physicsState.inheritedAcceleration.y = 0i64;
      *(_QWORD *)v3->physicsState.inheritedVelocity.v = 0i64;
      v3->physicsState.inheritedVelocity.v[2] = 0.0;
      DObjProceduralBones_Unlock(dobj);
    }
  }
}

/*
==============
XAnimBonePhysicsGetAudioEventList
==============
*/
__int64 XAnimBonePhysicsGetAudioEventList(const DObj *dobj, XAnimBonePhysicsAudioEvent *outAudioEvents, unsigned int maxEvents)
{
  DObjProceduralBones *v6; 
  unsigned __int8 numAudioEvents; 
  __int64 v8; 

  if ( !outAudioEvents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 389, ASSERT_TYPE_ASSERT, "(outAudioEvents != 0)", (const char *)&queryFormat, "outAudioEvents != NULL") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 390, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) == 0 )
    return 0i64;
  v6 = DObjProceduralBones_TryLock(dobj);
  if ( !v6 )
    return 0i64;
  if ( !v6->numPhysicsBones || (numAudioEvents = v6->physicsState.numAudioEvents) == 0 )
  {
    DObjProceduralBones_Unlock(dobj);
    return 0i64;
  }
  v8 = numAudioEvents;
  if ( numAudioEvents > maxEvents )
    v8 = maxEvents;
  memcpy_0(outAudioEvents, v6->physicsState.audioEvents, 24 * v8);
  DObjProceduralBones_Unlock(dobj);
  return (unsigned int)v8;
}

/*
==============
XAnimBonePhysicsReset
==============
*/
void XAnimBonePhysicsReset(const DObj *dobj)
{
  DObjProceduralBones *v2; 
  DObjProceduralBones *v3; 
  DObjPhysicsState *p_physicsState; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 491, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v2 = DObjProceduralBones_TryLock(dobj);
    v3 = v2;
    if ( v2 )
    {
      v2->physicsState.timeSinceLastUpdate = 0.0;
      v2->physicsState.deltaTime = 0.0;
      *(_QWORD *)v2->physicsState.prevVelocity.v = 0i64;
      *(_QWORD *)&v2->physicsState.prevVelocity.z = 0i64;
      *(_QWORD *)v2->physicsState.prevAngularVelocity.v = 0i64;
      *(_QWORD *)&v2->physicsState.prevAngularVelocity.z = 0i64;
      *(_QWORD *)&v2->physicsState.inheritedAcceleration.y = 0i64;
      p_physicsState = &v2->physicsState;
      *(_QWORD *)&v2->physicsState.inheritedAngularAcceleration.y = 0i64;
      *(_QWORD *)v2->physicsState.inheritedVelocity.v = 0i64;
      v2->physicsState.inheritedVelocity.v[2] = 0.0;
      if ( v2 == (DObjProceduralBones *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 164, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
        __debugbreak();
      SetSecureRootVec3(&vec3_origin, &p_physicsState->rootTrans.rootTrans, s_bones_aab_X, s_bones_aab_Y, s_bones_aab_Z);
      if ( !p_physicsState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 202, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
        __debugbreak();
      SetSecureRootVec3(&vec3_origin, &p_physicsState->prevRootTrans.prevRootTrans, s_ps_bones_aab_X, s_ps_bones_aab_Y, s_ps_bones_aab_Z);
      *(_QWORD *)v3->physicsState.rootQuat.v = 0i64;
      *(_QWORD *)&v3->physicsState.rootQuat.xyz.z = 0i64;
      *(_QWORD *)v3->physicsState.prevRootQuat.v = 0i64;
      *(_QWORD *)&v3->physicsState.prevRootQuat.xyz.z = 0i64;
      v3->physicsState.idleVelocityWeight = 0.0;
      v3->physicsState.rootQuat.v[3] = 1.0;
      v3->physicsState.prevRootQuat.v[3] = 1.0;
      XAnimBonePhysics_ClearAudioEvents(v3);
      *(_WORD *)&v3->physicsState.firstMatrixUpdate = 257;
      DObjProceduralBones_Unlock(dobj);
    }
  }
}

/*
==============
XAnimBonePhysicsResetInternal
==============
*/
void XAnimBonePhysicsResetInternal(DObjProceduralBones *procBones)
{
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 463, ASSERT_TYPE_ASSERT, "(procBones != nullptr)", (const char *)&queryFormat, "procBones != nullptr") )
    __debugbreak();
  procBones->physicsState.timeSinceLastUpdate = 0.0;
  procBones->physicsState.deltaTime = 0.0;
  *(_QWORD *)procBones->physicsState.prevVelocity.v = 0i64;
  *(_QWORD *)&procBones->physicsState.prevVelocity.z = 0i64;
  *(_QWORD *)procBones->physicsState.prevAngularVelocity.v = 0i64;
  *(_QWORD *)&procBones->physicsState.prevAngularVelocity.z = 0i64;
  *(_QWORD *)&procBones->physicsState.inheritedAcceleration.y = 0i64;
  *(_QWORD *)&procBones->physicsState.inheritedAngularAcceleration.y = 0i64;
  *(_QWORD *)procBones->physicsState.inheritedVelocity.v = 0i64;
  procBones->physicsState.inheritedVelocity.v[2] = 0.0;
  if ( procBones == (DObjProceduralBones *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 164, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  SetSecureRootVec3(&vec3_origin, &procBones->physicsState.rootTrans.rootTrans, s_bones_aab_X, s_bones_aab_Y, s_bones_aab_Z);
  if ( procBones == (DObjProceduralBones *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 202, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  SetSecureRootVec3(&vec3_origin, &procBones->physicsState.prevRootTrans.prevRootTrans, s_ps_bones_aab_X, s_ps_bones_aab_Y, s_ps_bones_aab_Z);
  *(_QWORD *)procBones->physicsState.rootQuat.v = 0i64;
  *(_QWORD *)&procBones->physicsState.rootQuat.xyz.z = 0i64;
  *(_QWORD *)procBones->physicsState.prevRootQuat.v = 0i64;
  *(_QWORD *)&procBones->physicsState.prevRootQuat.xyz.z = 0i64;
  procBones->physicsState.idleVelocityWeight = 0.0;
  procBones->physicsState.rootQuat.v[3] = 1.0;
  procBones->physicsState.prevRootQuat.v[3] = 1.0;
  XAnimBonePhysics_ClearAudioEvents(procBones);
  *(_WORD *)&procBones->physicsState.firstMatrixUpdate = 257;
}

/*
==============
XAnimBonePhysicsRestoreState
==============
*/
void XAnimBonePhysicsRestoreState(const DObj *dobj, const XAnimBonePhysicsStateBuffer *stateBuffer)
{
  const DObj *v3; 
  DObjProceduralBones *v4; 
  DObjProceduralBones *v5; 
  unsigned int v6; 
  __int64 v7; 
  const XModel *v8; 
  __int64 v9; 
  int v10; 
  unsigned __int8 *v11; 
  bool v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  float timer; 
  __int64 v17; 
  __int64 v18; 
  int i; 
  unsigned int v21; 
  __int64 v22; 

  v3 = dobj;
  if ( !stateBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 587, ASSERT_TYPE_ASSERT, "(stateBuffer != 0)", (const char *)&queryFormat, "stateBuffer != NULL") )
    __debugbreak();
  if ( v3 && stateBuffer->numDynamicBones && (v3->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v4 = DObjLockProceduralBones(v3);
    v5 = v4;
    if ( v4 && v4->numPhysicsBones )
    {
      Copy_DObjPhysicsState(&v4->physicsState, &stateBuffer->dobjPhysicsState);
      if ( v5->physicsState.firstUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 612, ASSERT_TYPE_ASSERT, "(!procBones->physicsState.firstUpdate)", (const char *)&queryFormat, "!procBones->physicsState.firstUpdate") )
        __debugbreak();
      v6 = 0;
      v7 = 0i64;
      v21 = 0;
      for ( i = 0; (unsigned int)v7 < stateBuffer->numModels; i = v7 )
      {
        v8 = stateBuffer->models[v7];
        v9 = (unsigned int)v7;
        v22 = (unsigned int)v7;
        if ( !XModelIsDefaultAsset(v8) )
        {
          if ( !v8->dynamicBones )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 623, ASSERT_TYPE_ASSERT, "(stateModel->dynamicBones != 0)", (const char *)&queryFormat, "stateModel->dynamicBones != NULL") )
              __debugbreak();
            if ( !v8->dynamicBones )
              goto LABEL_40;
          }
          v10 = 0;
          if ( v5->numModels )
          {
            while ( 1 )
            {
              v11 = (unsigned __int8 *)&v5->modelInfo[v10];
              if ( DObjGetModel(v3, v11[16]) == stateBuffer->models[v9] && DObjGetModelParentBoneNameScriptString(v3, v11[16]) == stateBuffer->modelParentBoneNames[v9] )
                break;
              if ( ++v10 >= (unsigned int)v5->numModels )
                goto LABEL_38;
            }
            if ( v11[21] != v8->dynamicBones->numDynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 653, ASSERT_TYPE_ASSERT, "(modelInfo->numPhysicsBones == stateModel->dynamicBones->numDynamicBones)", (const char *)&queryFormat, "modelInfo->numPhysicsBones == stateModel->dynamicBones->numDynamicBones") )
              __debugbreak();
            v12 = v11[21] == 0;
            v11[26] = 0;
            if ( !v12 )
            {
              v13 = v6;
              v14 = -v6;
              do
              {
                v15 = (__int64)&v5->physicsBones[v13 + v14 + v11[20]];
                if ( v13 >= stateBuffer->numDynamicBones )
                {
                  LODWORD(v18) = stateBuffer->numDynamicBones;
                  LODWORD(v17) = v13;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 664, ASSERT_TYPE_ASSERT, "(unsigned)( dynamicBoneStateOffset + physicsBoneNum ) < (unsigned)( stateBuffer->numDynamicBones )", "dynamicBoneStateOffset + physicsBoneNum doesn't index stateBuffer->numDynamicBones\n\t%i not in [0, %i)", v17, v18) )
                    __debugbreak();
                }
                if ( v13 >= 0x60 )
                {
                  LODWORD(v18) = 96;
                  LODWORD(v17) = v13;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, v18) )
                    __debugbreak();
                }
                if ( ((0x80000000 >> (v13 & 0x1F)) & stateBuffer->validBoneStates.array[(unsigned __int64)v13 >> 5]) != 0 )
                {
                  *(__m256i *)(v15 + 28) = *(__m256i *)stateBuffer->boneStates[v13].rotationQuat.v;
                  *(__m256i *)(v15 + 60) = *(__m256i *)&stateBuffer->boneStates[v13].prevRotationQuat.xyz.y;
                  *(__m256i *)(v15 + 92) = *(__m256i *)&stateBuffer->boneStates[v13].velocity.z;
                  *(__m256i *)(v15 + 124) = *(__m256i *)&stateBuffer->boneStates[v13].noise.translation[1].strengthMul;
                  *(_OWORD *)(v15 + 156) = *(_OWORD *)&stateBuffer->boneStates[v13].noise.rotation[0].timer;
                  *(double *)(v15 + 172) = *(double *)&stateBuffer->boneStates[v13].noise.rotation[2].strengthMul;
                  timer = stateBuffer->boneStates[v13].noise.rotation[2].timer;
                  *(_BYTE *)(v15 + 16) &= ~8u;
                  *(float *)(v15 + 180) = timer;
                }
                ++v13;
              }
              while ( v14 + v13 < v11[21] );
              v3 = dobj;
              v9 = v22;
              v6 = v21;
            }
          }
LABEL_38:
          LODWORD(v7) = i;
        }
        v6 += stateBuffer->numModelDynamicBones[v9];
        v21 = v6;
LABEL_40:
        v7 = (unsigned int)(v7 + 1);
      }
    }
    DObjUnlockProceduralBones(v3);
  }
}

/*
==============
XAnimBonePhysicsSaveState
==============
*/
void XAnimBonePhysicsSaveState(const DObj *dobj, XAnimBonePhysicsStateBuffer *outStateBuffer)
{
  const DObj *v3; 
  DObjProceduralBones *v4; 
  DObjProceduralBones *v5; 
  unsigned int v6; 
  unsigned __int8 *v7; 
  int v8; 
  const XModel *Model; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int i; 

  v3 = dobj;
  if ( !outStateBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 514, ASSERT_TYPE_ASSERT, "(outStateBuffer != 0)", (const char *)&queryFormat, "outStateBuffer != NULL") )
    __debugbreak();
  *(_QWORD *)&outStateBuffer->numModels = 0i64;
  if ( v3 )
  {
    if ( (v3->proceduralBonesHandle.m_value & 0x80000000) != 0 )
    {
      v4 = DObjProceduralBones_TryLock(v3);
      v5 = v4;
      if ( v4 )
      {
        if ( !v4->numPhysicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 535, ASSERT_TYPE_ASSERT, "(procBones->numPhysicsBones > 0)", (const char *)&queryFormat, "procBones->numPhysicsBones > 0") )
          __debugbreak();
        if ( !v5->physicsState.firstUpdate )
        {
          Copy_DObjPhysicsState(&outStateBuffer->dobjPhysicsState, &v5->physicsState);
          *(_QWORD *)outStateBuffer->validBoneStates.array = 0i64;
          v6 = 0;
          outStateBuffer->validBoneStates.array[2] = 0;
          for ( i = 0; v6 < v5->numModels; i = ++v6 )
          {
            v7 = (unsigned __int8 *)&v5->modelInfo[v6];
            if ( v7[21] )
            {
              if ( !v7[26] )
              {
                v8 = v7[16];
                Model = DObjGetModel(v3, v8);
                if ( !XModelIsDefaultAsset(Model) )
                {
                  if ( !Model->dynamicBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 557, ASSERT_TYPE_ASSERT, "(model->dynamicBones != nullptr)", (const char *)&queryFormat, "model->dynamicBones != nullptr") )
                    __debugbreak();
                  outStateBuffer->models[outStateBuffer->numModels] = Model;
                  outStateBuffer->modelParentBoneNames[outStateBuffer->numModels] = DObjGetModelParentBoneNameScriptString(v3, v8);
                  outStateBuffer->numModelDynamicBones[outStateBuffer->numModels++] = v7[21];
                  if ( outStateBuffer->numDynamicBones + v7[21] > 0x46 )
                  {
                    LODWORD(v17) = 70;
                    LODWORD(v16) = outStateBuffer->numDynamicBones + v7[21];
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 563, ASSERT_TYPE_ASSERT, "( outStateBuffer->numDynamicBones + modelInfo->numPhysicsBones ) <= ( ( sizeof( *array_counter( outStateBuffer->boneStates ) ) + 0 ) )", "outStateBuffer->numDynamicBones + modelInfo->numPhysicsBones not in [0, ARRAY_COUNT( outStateBuffer->boneStates )]\n\t%u not in [0, %u]", v16, v17) )
                      __debugbreak();
                  }
                  LOBYTE(v10) = v7[21];
                  v11 = 0;
                  if ( (_BYTE)v10 )
                  {
                    do
                    {
                      v12 = (__int64)&v5->physicsBones[v11 + v7[20]];
                      if ( *(_WORD *)v12 != 255 )
                      {
                        v13 = v11 + outStateBuffer->numDynamicBones;
                        v14 = (int)v13;
                        *(__m256i *)outStateBuffer->boneStates[v14].rotationQuat.v = *(__m256i *)(v12 + 28);
                        *(__m256i *)&outStateBuffer->boneStates[v14].prevRotationQuat.xyz.y = *(__m256i *)(v12 + 60);
                        *(__m256i *)&outStateBuffer->boneStates[v14].velocity.z = *(__m256i *)(v12 + 92);
                        *(__m256i *)&outStateBuffer->boneStates[v14].noise.translation[1].strengthMul = *(__m256i *)(v12 + 124);
                        *(_OWORD *)&outStateBuffer->boneStates[v14].noise.rotation[0].timer = *(_OWORD *)(v12 + 156);
                        *(double *)&outStateBuffer->boneStates[v14].noise.rotation[2].strengthMul = *(double *)(v12 + 172);
                        outStateBuffer->boneStates[v14].noise.rotation[2].timer = *(float *)(v12 + 180);
                        if ( v13 >= 0x60 )
                        {
                          LODWORD(v19) = 96;
                          LODWORD(v18) = v13;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v18, v19) )
                            __debugbreak();
                        }
                        v15 = &outStateBuffer->validBoneStates.array[(unsigned __int64)v13 >> 5];
                        *v15 |= 0x80000000 >> (v13 & 0x1F);
                      }
                      v10 = v7[21];
                      ++v11;
                    }
                    while ( v11 < v10 );
                    v6 = i;
                    v3 = dobj;
                  }
                  outStateBuffer->numDynamicBones += (unsigned __int8)v10;
                }
              }
            }
          }
        }
        DObjProceduralBones_Unlock(v3);
      }
    }
  }
}

/*
==============
XAnimBonePhysicsSetDObjMatrix
==============
*/
void XAnimBonePhysicsSetDObjMatrix(const DObj *dobj, const vec3_t *origin, const vec3_t *angles)
{
  DObjProceduralBones *v6; 
  DObjProceduralBones *v7; 

  if ( dobj )
  {
    if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
    {
      v6 = DObjProceduralBones_TryLock(dobj);
      v7 = v6;
      if ( v6 )
      {
        if ( !v6->numPhysicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 338, ASSERT_TYPE_ASSERT, "(procBones->numPhysicsBones != 0)", (const char *)&queryFormat, "procBones->numPhysicsBones != 0") )
          __debugbreak();
        AnglesToQuat(angles, &v7->physicsState.rootQuat);
        DObjPhysicsState_SetRootTrans(&v7->physicsState, origin);
        if ( v7->physicsState.firstMatrixUpdate )
        {
          v7->physicsState.firstMatrixUpdate = 0;
          v7->physicsState.prevRootQuat.v[0] = v7->physicsState.rootQuat.v[0];
          v7->physicsState.prevRootQuat.v[1] = v7->physicsState.rootQuat.v[1];
          v7->physicsState.prevRootQuat.v[2] = v7->physicsState.rootQuat.v[2];
          v7->physicsState.prevRootQuat.v[3] = v7->physicsState.rootQuat.v[3];
          DObjPhysicsState_SetPrevRootTrans(&v7->physicsState, origin);
        }
        DObjProceduralBones_Unlock(dobj);
      }
    }
  }
}

/*
==============
XAnimBonePhysicsSetGroundPlaneEnabled
==============
*/
void XAnimBonePhysicsSetGroundPlaneEnabled(DObj *dobj, bool groundPlaneEnabled)
{
  DObjProceduralBones *v4; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 750, ASSERT_TYPE_ASSERT, "(dobj != nullptr)", (const char *)&queryFormat, "dobj != nullptr") )
    __debugbreak();
  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v4 = DObjProceduralBones_TryLock(dobj);
    if ( v4 )
    {
      v4->physicsState.groundPlaneEnabled = groundPlaneEnabled;
      DObjProceduralBones_Unlock(dobj);
    }
  }
}

/*
==============
XAnimBonePhysicsSetGroundPlaneHeight
==============
*/
void XAnimBonePhysicsSetGroundPlaneHeight(DObj *dobj, float height)
{
  DObjProceduralBones *v3; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 771, ASSERT_TYPE_ASSERT, "(dobj != nullptr)", (const char *)&queryFormat, "dobj != nullptr") )
    __debugbreak();
  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v3 = DObjProceduralBones_TryLock(dobj);
    if ( v3 )
    {
      if ( (LODWORD(height) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 784, ASSERT_TYPE_ASSERT, "(!IS_NAN( height ))", (const char *)&queryFormat, "!IS_NAN( height )") )
        __debugbreak();
      v3->physicsState.groundPlaneHeight = height;
      DObjProceduralBones_Unlock(dobj);
    }
  }
}

/*
==============
XAnimBonePhysicsSetSettlingEnabled
==============
*/
void XAnimBonePhysicsSetSettlingEnabled(DObj *dobj, bool settlingEnabled)
{
  signed int m_value; 
  DObjProceduralBones *v5; 
  unsigned int v6; 
  DObjProceduralBones *v7; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 822, ASSERT_TYPE_ASSERT, "(dobj != nullptr)", (const char *)&queryFormat, "dobj != nullptr") )
    __debugbreak();
  m_value = dobj->proceduralBonesHandle.m_value;
  if ( m_value < 0 )
  {
    if ( ((m_value & 0x20000000) != 0) == settlingEnabled )
    {
      v5 = DObjProceduralBones_TryLock(dobj);
      if ( !v5 )
        return;
      if ( v5->settlingEnabled != settlingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 839, ASSERT_TYPE_ASSERT, "(procBones->settlingEnabled == settlingEnabled)", (const char *)&queryFormat, "procBones->settlingEnabled == settlingEnabled") )
        __debugbreak();
      goto LABEL_15;
    }
    if ( settlingEnabled )
      v6 = m_value | 0x20000000;
    else
      v6 = m_value & 0xDFFFFFFF;
    dobj->proceduralBonesHandle.m_value = v6;
    v7 = DObjProceduralBones_TryLock(dobj);
    if ( v7 )
    {
      v7->settlingEnabled = settlingEnabled;
LABEL_15:
      DObjProceduralBones_Unlock(dobj);
    }
  }
}

/*
==============
XAnimBonePhysicsTeleportBones
==============
*/
void XAnimBonePhysicsTeleportBones(const DObj *dobj, const vec3_t *translationDelta)
{
  DObjProceduralBones *v4; 
  DObjProceduralBones *v5; 

  if ( dobj )
  {
    if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
    {
      v4 = DObjProceduralBones_TryLock(dobj);
      v5 = v4;
      if ( v4 )
      {
        if ( !v4->numPhysicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 376, ASSERT_TYPE_ASSERT, "(procBones->numPhysicsBones != 0)", (const char *)&queryFormat, "procBones->numPhysicsBones != 0") )
          __debugbreak();
        v5->physicsState.teleportBones = 1;
        v5->physicsState.teleportTranslationDelta.v[0] = translationDelta->v[0];
        v5->physicsState.teleportTranslationDelta.v[1] = translationDelta->v[1];
        v5->physicsState.teleportTranslationDelta.v[2] = translationDelta->v[2];
        DObjProceduralBones_Unlock(dobj);
      }
    }
  }
}

/*
==============
XAnimBonePhysicsUpdate
==============
*/
void XAnimBonePhysicsUpdate(DObjProceduralBones *procBones, XAnimProcNodeCalcParams *params)
{
  signed __int64 v2; 
  void *v3; 
  const DObj *obj; 
  char *Value; 
  unsigned int *v8; 
  unsigned int v9; 
  _QWORD *v10; 
  char *v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  ThreadContext CurrentThreadContext; 
  unsigned int numPhysicsBones; 
  const dvar_t *v16; 
  float v17; 
  float v18; 
  const dvar_t *v20; 
  char v21; 
  bool v22; 
  unsigned int v23; 
  XAnimPhysicsBone *v24; 
  unsigned __int64 boneIndex; 
  bool v26; 
  __m128 v; 
  unsigned __int16 parentBoneIndex; 
  unsigned __int64 v29; 
  bool v30; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  __int128 timeSinceLastUpdate_low; 
  int v35; 
  __int128 v36; 
  double v37; 
  float4 *outModelTranslation; 
  float4 *outModelTranslationa; 
  __int64 v40; 
  char v41; 
  bool teleportBones; 
  char v43; 
  unsigned int v44; 
  XAnimBonePhysicsUpdateContext context; 
  __int64 v46; 
  vec3_t inoutTrans1; 
  vec3_t out; 
  vec3_t outRootTrans; 
  vec4_t inoutQuat1; 
  vec3_t trans; 
  vec3_t v52; 
  vec3_t outInvTrans; 
  vec4_t outInvQuat; 
  float4 outModelQuat; 
  float4 v56; 
  vec4_t quat; 
  float4 v58; 
  float4 v59; 
  float4 v60; 
  float4 v61; 
  vec3_t outPinConstraintPoints; 
  DObjAnimMat outTransforms; 
  XAnimCollisionShape outShapes; 
  char v65; 

  v3 = alloca(v2);
  v46 = -2i64;
  obj = params->obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2966, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v8 = (unsigned int *)(Value + 19336);
  if ( (unsigned int)(*((_DWORD *)Value + 4834) + 1) >= 3 )
  {
    LODWORD(outModelTranslation) = *((_DWORD *)Value + 4834) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outModelTranslation, 3) )
      __debugbreak();
  }
  v9 = *v8 + 1;
  *v8 = v9;
  if ( v9 >= 3 )
  {
    LODWORD(v40) = 3;
    LODWORD(outModelTranslation) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outModelTranslation, v40) )
      __debugbreak();
  }
  v10 = Value + 2088;
  v11 = Value + 40;
  if ( *v10 < (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v10 += 8i64;
  if ( *v10 >= (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v10 = v8;
  if ( *v10 <= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v12 = (int)*v8;
  v13 = __rdtsc();
  v8[v12 + 2] = v13;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 431, NULL, 0);
  if ( (obj->proceduralBonesHandle.m_value & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2970, ASSERT_TYPE_ASSERT, "(dobj->proceduralBonesHandle.HasDynamicBones())", (const char *)&queryFormat, "dobj->proceduralBonesHandle.HasDynamicBones()") )
    __debugbreak();
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2971, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  XAnimBonePhysics_ClearAudioEvents(procBones);
  numPhysicsBones = procBones->numPhysicsBones;
  v44 = numPhysicsBones;
  v16 = DCONST_DVARFLT_xanim_physicsBonesUpdateRate;
  if ( !DCONST_DVARFLT_xanim_physicsBonesUpdateRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsBonesUpdateRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = v16->current.value;
  v18 = 1.0 / v17;
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, 0, &outModelQuat, &v56);
  quat = (vec4_t)outModelQuat.v;
  _XMM1 = v56.v;
  trans.v[0] = v56.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbp+1850h+trans+4], xmm1, 1
    vextractps dword ptr [rbp+1850h+trans+8], xmm1, 2
  }
  QuatTrans_Inverse(&quat, &trans, &outInvQuat, &outInvTrans);
  if ( procBones->physicsState.firstUpdate )
    goto LABEL_36;
  v20 = DCONST_DVARBOOL_xanim_physicsForceSettle;
  if ( !DCONST_DVARBOOL_xanim_physicsForceSettle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsForceSettle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v41 = 0;
  if ( v20->current.enabled )
LABEL_36:
    v41 = 1;
  procBones->physicsState.firstUpdate = 0;
  v21 = 0;
  v43 = 0;
  teleportBones = procBones->physicsState.teleportBones;
  v22 = teleportBones;
  procBones->physicsState.teleportBones = 0;
  if ( teleportBones )
  {
    QuatTransform(&outInvQuat, &procBones->physicsState.teleportTranslationDelta, &out);
    DObjPhysicsState_GetRootTrans(&procBones->physicsState, &outRootTrans);
    DObjPhysicsState_SetPrevRootTrans(&procBones->physicsState, &outRootTrans);
    memset(&outRootTrans, 0, sizeof(outRootTrans));
    v22 = teleportBones;
  }
  v23 = 1;
  if ( numPhysicsBones > 1 )
  {
    do
    {
      v24 = &procBones->physicsBones[v23];
      if ( v24->boneIndex != 255 )
      {
        if ( !DObjIsValidBoneIndex(obj, v24->boneIndex) )
        {
          LODWORD(outModelTranslationa) = v24->boneIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3017, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( dobj, physicsBone->boneIndex ) ) )", "( physicsBone->boneIndex ) = %i", outModelTranslationa) )
            __debugbreak();
        }
        if ( v41 || (v24->flags & 8) != 0 )
        {
          boneIndex = v24->boneIndex;
          if ( v24->boneIndex >> 15 )
          {
            v26 = (obj->skel.partBits.anim.array[7] & 2) != 0;
          }
          else
          {
            if ( (unsigned int)boneIndex >= 0x100 )
            {
              LODWORD(v40) = 256;
              LODWORD(outModelTranslationa) = v24->boneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outModelTranslationa, v40) )
                __debugbreak();
            }
            v26 = ((0x80000000 >> (boneIndex & 0x1F)) & obj->skel.partBits.anim.array[boneIndex >> 5]) != 0;
          }
          if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3027, ASSERT_TYPE_ASSERT, "(XAnimTestPartBit( &dobj->skel.partBits.anim, physicsBone->boneIndex ))", (const char *)&queryFormat, "XAnimTestPartBit( &dobj->skel.partBits.anim, physicsBone->boneIndex )") )
            __debugbreak();
          v24->flags &= ~8u;
          v43 = 1;
          XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v24->boneIndex, &v58, &v59);
          v24->state.rotationQuat = (vec4_t)v58.v;
          v = v59.v;
          QuatTransform(&v24->state.rotationQuat, &v24->jointOffset, &v52);
          v24->state.position.v[0] = v.m128_f32[0] - v52.v[0];
          v24->state.position.v[1] = _mm_shuffle_ps(v, v, 85).m128_f32[0] - v52.v[1];
          v24->state.position.v[2] = _mm_shuffle_ps(v, v, 170).m128_f32[0] - v52.v[2];
          QuatTrans_MultiplyEquals(&v24->state.rotationQuat, &v24->state.position, &outInvQuat, &outInvTrans);
          v24->state.prevRotationQuat.v[0] = v24->state.rotationQuat.v[0];
          v24->state.prevRotationQuat.v[1] = v24->state.rotationQuat.v[1];
          v24->state.prevRotationQuat.v[2] = v24->state.rotationQuat.v[2];
          v24->state.prevRotationQuat.v[3] = v24->state.rotationQuat.v[3];
          v24->state.prevPosition.v[0] = v24->state.position.v[0];
          v24->state.prevPosition.v[1] = v24->state.position.v[1];
          v24->state.prevPosition.v[2] = v24->state.position.v[2];
        }
        else if ( v22 )
        {
          v24->state.position.v[0] = out.v[0] + v24->state.position.v[0];
          v24->state.position.v[1] = out.v[1] + v24->state.position.v[1];
          v24->state.position.v[2] = out.v[2] + v24->state.position.v[2];
          v24->state.prevPosition.v[0] = out.v[0] + v24->state.prevPosition.v[0];
          v24->state.prevPosition.v[1] = out.v[1] + v24->state.prevPosition.v[1];
          v24->state.prevPosition.v[2] = out.v[2] + v24->state.prevPosition.v[2];
        }
        if ( v24->parentPhysicsBoneIndex == 0xFF )
        {
          if ( v24->rootPhysicsBoneIndex != v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3056, ASSERT_TYPE_ASSERT, "(physicsBone->rootPhysicsBoneIndex == physicsBoneIndex)", (const char *)&queryFormat, "physicsBone->rootPhysicsBoneIndex == physicsBoneIndex") )
            __debugbreak();
          parentBoneIndex = v24->parentBoneIndex;
          if ( parentBoneIndex == 255 )
          {
            inoutQuat1 = quat_identity;
            inoutTrans1.v[0] = 0.0;
            inoutTrans1.v[1] = 0.0;
            inoutTrans1.v[2] = 0.0;
          }
          else
          {
            if ( !DObjIsValidBoneIndex(obj, parentBoneIndex) )
            {
              LODWORD(outModelTranslationa) = v24->parentBoneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3068, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( dobj, physicsBone->parentBoneIndex ) ) )", "( physicsBone->parentBoneIndex ) = %i", outModelTranslationa) )
                __debugbreak();
            }
            v29 = v24->parentBoneIndex;
            if ( v24->parentBoneIndex >> 15 )
            {
              v30 = (obj->skel.partBits.anim.array[7] & 2) != 0;
            }
            else
            {
              if ( (unsigned int)v29 >= 0x100 )
              {
                LODWORD(v40) = 256;
                LODWORD(outModelTranslationa) = v24->parentBoneIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outModelTranslationa, v40) )
                  __debugbreak();
              }
              v30 = ((0x80000000 >> (v29 & 0x1F)) & obj->skel.partBits.anim.array[v29 >> 5]) != 0;
            }
            if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3070, ASSERT_TYPE_ASSERT, "(XAnimTestPartBit( &dobj->skel.partBits.anim, physicsBone->parentBoneIndex ))", (const char *)&queryFormat, "XAnimTestPartBit( &dobj->skel.partBits.anim, physicsBone->parentBoneIndex )") )
              __debugbreak();
            XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v24->parentBoneIndex, &v60, &v61);
            inoutQuat1 = (vec4_t)v60.v;
            _XMM1 = v61.v;
            inoutTrans1.v[0] = v61.v.m128_f32[0];
            __asm
            {
              vextractps dword ptr [rbp+1850h+inoutTrans1+4], xmm1, 1
              vextractps dword ptr [rbp+1850h+inoutTrans1+8], xmm1, 2
            }
            QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, &outInvQuat, &outInvTrans);
          }
          QuatTransform(&inoutQuat1, &v24->localBasePoseTrans, &outRootTrans);
          v24->modelPinPoint.v[0] = outRootTrans.v[0] + inoutTrans1.v[0];
          v24->modelPinPoint.v[1] = outRootTrans.v[1] + inoutTrans1.v[1];
          v24->modelPinPoint.v[2] = outRootTrans.v[2] + inoutTrans1.v[2];
          v24->parentBoneQuat = inoutQuat1;
        }
      }
      ++v23;
      v22 = teleportBones;
    }
    while ( v23 < v44 );
    v21 = v43;
  }
  XAnimBonePhysics_CalculateCustomPinConstraintPoints(params, procBones, &outInvQuat, &outInvTrans, &outPinConstraintPoints);
  XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams(params, procBones, &outTransforms, 0x20u);
  XAnimBonePhysics_PreTransformCollidableBoneShapes(procBones, &outTransforms, &outShapes, 0x40u);
  XAnimBonePhysics_CalculateInheritedAcceleration(procBones);
  context.timeStep = 1.0 / v17;
  v32 = DCONST_DVARINT_xanim_physicsMaxPositionSolverIterations;
  if ( !DCONST_DVARINT_xanim_physicsMaxPositionSolverIterations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxPositionSolverIterations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  context.maxPositionSolverIterations = v32->current.unsignedInt;
  context.contacts = (XAnimCollisionContact *)&v65;
  context.maxContacts = 55;
  context.pinConstraintPoints = &outPinConstraintPoints;
  context.collidableBoneCollisionShapes = &outShapes;
  context.collidableBoneTransforms = &outTransforms;
  context.dobj = obj;
  context.procBones = procBones;
  context.firstPhysicsBoneIndex = 1;
  context.endPhysicsBoneIndex = procBones->numPhysicsBones;
  if ( v21 )
    goto LABEL_88;
  v33 = DCONST_DVARBOOL_xanim_physicsForceSettle;
  if ( !DCONST_DVARBOOL_xanim_physicsForceSettle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsForceSettle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  if ( v33->current.enabled )
LABEL_88:
    XAnimBonePhysics_Settle(&context, params);
  timeSinceLastUpdate_low = LODWORD(procBones->physicsState.timeSinceLastUpdate);
  v35 = 0;
  do
  {
    if ( *(float *)&timeSinceLastUpdate_low < v18 )
      break;
    XAnimBonePhysics_Simulate(&context, params);
    ++v35;
    v36 = timeSinceLastUpdate_low;
    *(float *)&v36 = *(float *)&timeSinceLastUpdate_low - v18;
    timeSinceLastUpdate_low = v36;
  }
  while ( v35 < 2 );
  procBones->physicsState.timeSinceLastUpdate = fmodf_0(*(float *)&timeSinceLastUpdate_low, v18);
  procBones->physicsState.deltaTime = 0.0;
  v37 = I_fclamp(v17 * *(float *)&timeSinceLastUpdate_low, 0.0, 1.0);
  XAnimBonePhysics_SetDynamicBoneTransforms(params, procBones->physicsBones, procBones->numPhysicsBones, *(float *)&v37);
  Profile_EndInternal(NULL);
}

/*
==============
XAnimBonePhysicsUpdateTime
==============
*/
void XAnimBonePhysicsUpdateTime(DObj *dobj, float deltaTime)
{
  DObjProceduralBones *v3; 
  DObjProceduralBones *v4; 
  float v5; 

  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v3 = DObjProceduralBones_TryLock(dobj);
    v4 = v3;
    if ( v3 )
    {
      if ( !v3->numPhysicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 311, ASSERT_TYPE_ASSERT, "(procBones->numPhysicsBones > 0)", (const char *)&queryFormat, "procBones->numPhysicsBones > 0") )
        __debugbreak();
      v5 = deltaTime + v4->physicsState.timeSinceLastUpdate;
      v4->physicsState.deltaTime = deltaTime + v4->physicsState.deltaTime;
      v4->physicsState.timeSinceLastUpdate = v5;
      DObjProceduralBones_Unlock(dobj);
    }
  }
}

/*
==============
XAnimBonePhysics_AddAudioEvent
==============
*/
bool XAnimBonePhysics_AddAudioEvent(DObjProceduralBones *procBones, unsigned int physicsBoneIndex, const vec3_t *position, const SndAliasLookup *sound, float strength)
{
  unsigned __int8 numAudioEvents; 
  __int64 v10; 
  bool result; 
  __int64 v12; 

  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 436, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  if ( physicsBoneIndex >= procBones->numPhysicsBones )
  {
    LODWORD(v12) = physicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 437, ASSERT_TYPE_ASSERT, "(unsigned)( physicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "physicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v12, procBones->numPhysicsBones) )
      __debugbreak();
  }
  if ( !sound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 438, ASSERT_TYPE_ASSERT, "(sound != 0)", (const char *)&queryFormat, "sound != NULL") )
    __debugbreak();
  numAudioEvents = procBones->physicsState.numAudioEvents;
  if ( numAudioEvents >= 3u || !sound->name )
    return 0;
  v10 = numAudioEvents;
  procBones->physicsState.audioEvents[v10].localPosition.v[0] = position->v[0];
  procBones->physicsState.audioEvents[v10].localPosition.v[1] = position->v[1];
  procBones->physicsState.audioEvents[v10].localPosition.v[2] = position->v[2];
  procBones->physicsState.audioEvents[v10].sound = (SndAliasLookup)sound->name;
  result = 1;
  procBones->physicsState.audioEvents[v10].strength = strength;
  ++procBones->physicsState.numAudioEvents;
  return result;
}

/*
==============
XAnimBonePhysics_ApplyPositionDelta
==============
*/
void XAnimBonePhysics_ApplyPositionDelta(XAnimPhysicsBone *physicsBone, const float4 *deltaPos)
{
  __int128 v3; 
  __m128 v6; 
  float v7; 
  float v8; 
  float v9; 
  __int128 v10; 

  HIDWORD(v10) = 0;
  v3 = v10;
  *(float *)&v3 = physicsBone->state.position.v[0];
  _XMM3 = v3;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rcx+30h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+34h], 20h ; ' '
  }
  v6 = _mm128_add_ps(_XMM3, deltaPos->v);
  v9 = v6.m128_f32[0];
  LODWORD(v7) = _mm_shuffle_ps(v6, v6, 85).m128_u32[0];
  LODWORD(v8) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  physicsBone->state.position.v[0] = v6.m128_f32[0];
  physicsBone->state.position.v[1] = v7;
  physicsBone->state.position.v[2] = v8;
  if ( (v6.m128_i32[0] & 0x7F800000) == 2139095040 || (v9 = v7, (LODWORD(v7) & 0x7F800000) == 2139095040) || (v9 = v8, (LODWORD(v8) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 295, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.position)[0]) && IS_FINITE((physicsBone->state.position)[1]) && IS_FINITE((physicsBone->state.position)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.position)[0]) && IS_FINITE((physicsBone->state.position)[1]) && IS_FINITE((physicsBone->state.position)[2])", v9) )
      __debugbreak();
  }
}

/*
==============
XAnimBonePhysics_ApplyRotationDelta
==============
*/
void XAnimBonePhysics_ApplyRotationDelta(XAnimPhysicsBone *physicsBone, const float4 *deltaRot)
{
  vec4_t rotationQuat; 
  __m128 v5; 
  __m128 v6; 
  __m128 v11; 
  __m128 v14; 
  vec4_t v18; 
  float v19; 

  if ( !physicsBone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 268, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL") )
    __debugbreak();
  rotationQuat = physicsBone->state.rotationQuat;
  v5 = _mm128_mul_ps(_mm_shuffle_ps(deltaRot->v, _mm_shuffle_ps(deltaRot->v, (__m128)0i64, 250), 132), (__m128)_xmm);
  v6 = _mm_shuffle_ps(v5, v5, 255);
  _XMM1 = _mm128_mul_ps((__m128)rotationQuat, v5);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
  }
  v11 = _mm_shuffle_ps((__m128)rotationQuat, (__m128)rotationQuat, 255);
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v11, v6), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)rotationQuat, (__m128)rotationQuat, 210), _mm_shuffle_ps(v5, v5, 201)), _mm128_mul_ps(_mm_shuffle_ps((__m128)rotationQuat, (__m128)rotationQuat, 201), _mm_shuffle_ps(v5, v5, 210))), _mm128_add_ps(_mm128_mul_ps(v11, v5), _mm128_mul_ps((__m128)rotationQuat, v6)));
  __asm { vblendps xmm1, xmm2, xmm0, 7 }
  v14 = _mm128_add_ps(_XMM1, (__m128)rotationQuat);
  _XMM0 = _mm128_mul_ps(v14, v14);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v18 = (vec4_t)_mm128_div_ps(v14, _mm_sqrt_ps(_XMM0));
  v19 = v18.v[0];
  physicsBone->state.rotationQuat = v18;
  if ( (LODWORD(v18.v[0]) & 0x7F800000) == 2139095040 || (v19 = physicsBone->state.rotationQuat.v[1], (LODWORD(v19) & 0x7F800000) == 2139095040) || (v19 = physicsBone->state.rotationQuat.v[2], (LODWORD(v19) & 0x7F800000) == 2139095040) || (v19 = physicsBone->state.rotationQuat.v[3], (LODWORD(v19) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 282, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.rotationQuat)[0]) && IS_FINITE((physicsBone->state.rotationQuat)[1]) && IS_FINITE((physicsBone->state.rotationQuat)[2]) && IS_FINITE((physicsBone->state.rotationQuat)[3]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.rotationQuat)[0]) && IS_FINITE((physicsBone->state.rotationQuat)[1]) && IS_FINITE((physicsBone->state.rotationQuat)[2]) && IS_FINITE((physicsBone->state.rotationQuat)[3])", v19) )
      __debugbreak();
  }
}

/*
==============
XAnimBonePhysics_ApplyTranslationalSpringDamping
==============
*/
float4 *XAnimBonePhysics_ApplyTranslationalSpringDamping(float4 *result, DObjProceduralBones *procBones, int physicsBoneIndex, const float4 *velocity)
{
  __int64 v4; 
  XAnimPhysicsBone *physicsBones; 
  __int64 v9; 
  __int128 v11; 
  XAnimPhysicsBone *v14; 
  unsigned __int8 parentPhysicsBoneIndex; 
  vec4_t parentBoneQuat; 
  __m128 v17; 
  __m128 localBasePoseQuat; 
  __m128 v23; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __int64 v46; 
  __int64 v47; 
  __int128 v48; 

  v4 = physicsBoneIndex;
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2125, ASSERT_TYPE_ASSERT, "(procBones)", (const char *)&queryFormat, "procBones") )
    __debugbreak();
  if ( (unsigned int)v4 >= procBones->numPhysicsBones )
  {
    LODWORD(v46) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2126, ASSERT_TYPE_ASSERT, "(unsigned)( physicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "physicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v46, procBones->numPhysicsBones) )
      __debugbreak();
  }
  physicsBones = procBones->physicsBones;
  v9 = v4;
  HIDWORD(v48) = 0;
  v11 = v48;
  *(float *)&v11 = physicsBones[v4].properties->translationalSpring.damping.v[0];
  _XMM10 = v11;
  __asm
  {
    vinsertps xmm10, xmm10, xmm1, 10h
    vinsertps xmm10, xmm10, xmm2, 20h ; ' '
  }
  if ( (unsigned int)v4 >= procBones->numPhysicsBones )
  {
    LODWORD(v47) = procBones->numPhysicsBones;
    LODWORD(v46) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1004, ASSERT_TYPE_ASSERT, "(unsigned)( physicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "physicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  v14 = procBones->physicsBones;
  parentPhysicsBoneIndex = v14[v9].parentPhysicsBoneIndex;
  if ( parentPhysicsBoneIndex == 0xFF )
  {
    parentBoneQuat = v14[v9].parentBoneQuat;
  }
  else
  {
    if ( parentPhysicsBoneIndex >= procBones->numPhysicsBones )
    {
      LODWORD(v47) = procBones->numPhysicsBones;
      LODWORD(v46) = parentPhysicsBoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( physicsBone->parentPhysicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "physicsBone->parentPhysicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    parentBoneQuat = procBones->physicsBones[v14[v9].parentPhysicsBoneIndex].state.rotationQuat;
  }
  v17 = _mm_shuffle_ps((__m128)parentBoneQuat, (__m128)parentBoneQuat, 255);
  localBasePoseQuat = (__m128)physicsBones[v9].properties->localBasePoseQuat;
  _mm_shuffle_ps(localBasePoseQuat, localBasePoseQuat, 85);
  _mm_shuffle_ps(localBasePoseQuat, localBasePoseQuat, 170);
  _XMM8 = localBasePoseQuat;
  __asm
  {
    vinsertps xmm8, xmm8, xmm0, 10h
    vinsertps xmm8, xmm8, xmm1, 20h ; ' '
  }
  _mm_shuffle_ps(localBasePoseQuat, localBasePoseQuat, 255);
  __asm { vinsertps xmm8, xmm8, xmm2, 30h ; '0' }
  v23 = _mm_shuffle_ps(_XMM8, _XMM8, 255);
  _XMM1 = _mm128_mul_ps((__m128)parentBoneQuat, _XMM8);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
  }
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v23, v17), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)parentBoneQuat, (__m128)parentBoneQuat, 201), _mm_shuffle_ps(_XMM8, _XMM8, 210)), _mm128_mul_ps(_mm_shuffle_ps((__m128)parentBoneQuat, (__m128)parentBoneQuat, 210), _mm_shuffle_ps(_XMM8, _XMM8, 201))), _mm128_add_ps(_mm128_mul_ps((__m128)parentBoneQuat, v23), _mm128_mul_ps(v17, _XMM8)));
  __asm { vblendps xmm3, xmm2, xmm0, 7 }
  _XMM1 = _mm128_mul_ps(_XMM3, _XMM3);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
  }
  v33 = _mm128_div_ps(_XMM3, _mm_sqrt_ps(_XMM0));
  v34 = _mm128_mul_ps(v33, (__m128)_xmm);
  v35 = _mm_shuffle_ps(v34, v34, 210);
  v36 = _mm_shuffle_ps(v34, v34, 201);
  v37 = _mm_shuffle_ps(v34, v34, 255);
  v38 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(velocity->v, velocity->v, 210), v36), _mm128_mul_ps(_mm_shuffle_ps(velocity->v, velocity->v, 201), v35));
  v39 = _mm128_add_ps(v38, v38);
  v40 = _mm128_mul_ps(_XMM10, _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v39, v39, 210), v36), _mm128_mul_ps(_mm_shuffle_ps(v39, v39, 201), v35)), _mm128_add_ps(_mm128_mul_ps(v37, v39), velocity->v)));
  v41 = _mm_shuffle_ps(v33, v33, 210);
  v42 = _mm_shuffle_ps(v33, v33, 201);
  v43 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v40, v40, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v40, v40, 201), v41));
  v44 = _mm128_add_ps(v43, v43);
  result->v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v44, v44, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v44, v44, 201), v41)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v33, v33, 255), v44), v40));
  return result;
}

/*
==============
XAnimBonePhysics_CalcNoiseAcceleration
==============
*/
float4 *XAnimBonePhysics_CalcNoiseAcceleration(float4 *result, const XAnimDynamicBoneNoiseAxisSpace relative, const float4 *invRootQuat, const vec4_t *boneQuatV, const float4 *currentVelocity, const vec3_t *noiseVelocityV, const float invDeltaTime)
{
  __int128 v9; 
  __m128 v; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __int128 v42; 

  HIDWORD(v42) = 0;
  v9 = v42;
  *(float *)&v9 = noiseVelocityV->v[0];
  _XMM9 = v9;
  __asm
  {
    vinsertps xmm9, xmm9, xmm1, 10h
    vinsertps xmm9, xmm9, xmm2, 20h ; ' '
  }
  if ( relative == DYNAMIC_BONE_NOISE_AXIS_WORLD )
  {
    v = invRootQuat->v;
    v13 = _mm_shuffle_ps(v, v, 210);
    v14 = _mm_shuffle_ps(v, v, 201);
    v15 = _mm_shuffle_ps(v, v, 255);
    v16 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), v14), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), v13));
    v17 = _mm128_add_ps(v16, v16);
    v18 = _mm128_add_ps(_mm128_mul_ps(v15, v17), _XMM9);
    v19 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v17, v17, 210), v14), _mm128_mul_ps(_mm_shuffle_ps(v17, v17, 201), v13));
LABEL_5:
    _XMM9 = _mm128_add_ps(v19, v18);
    goto LABEL_6;
  }
  if ( relative == DYNAMIC_BONE_NOISE_AXIS_JOINT )
  {
    v20 = invRootQuat->v;
    _XMM0 = _mm128_mul_ps(*(__m128 *)boneQuatV, *(__m128 *)boneQuatV);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    v24 = _mm_shuffle_ps(v20, v20, 255);
    v25 = _mm128_div_ps(*(__m128 *)boneQuatV, _mm_sqrt_ps(_XMM0));
    v26 = _mm_shuffle_ps(v25, v25, 255);
    _XMM1 = _mm128_mul_ps(v25, invRootQuat->v);
    __asm
    {
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm3, xmm2, xmm2
    }
    _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v26, v24), _XMM3);
    _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v20, v20, 201), _mm_shuffle_ps(v25, v25, 210)), _mm128_mul_ps(_mm_shuffle_ps(v20, v20, 210), _mm_shuffle_ps(v25, v25, 201))), _mm128_add_ps(_mm128_mul_ps(v26, invRootQuat->v), _mm128_mul_ps(v24, v25)));
    __asm { vblendps xmm3, xmm2, xmm0, 7 }
    v33 = _mm_shuffle_ps(_XMM3, _XMM3, 201);
    v34 = _mm_shuffle_ps(_XMM3, _XMM3, 210);
    v35 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), v33), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), v34));
    v36 = _mm128_add_ps(v35, v35);
    v18 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM3, _XMM3, 255), v36), _XMM9);
    v19 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v36, v36, 210), v33), _mm128_mul_ps(_mm_shuffle_ps(v36, v36, 201), v34));
    goto LABEL_5;
  }
LABEL_6:
  __asm { vbroadcastss xmm0, [rsp+98h+arg_30] }
  _XMM1.v = _mm128_mul_ps(_XMM0, _mm128_sub_ps(_XMM9, currentVelocity->v));
  __asm
  {
    vcmpneqps xmm0, xmm1, xmm1
    vmovmskps eax, xmm0
  }
  *result = (float4)_XMM1.v;
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 920, ASSERT_TYPE_SANITY, "( !Float4IsNaN( noiseAccel ) )", (const char *)&queryFormat, "!Float4IsNaN( noiseAccel )") )
    __debugbreak();
  return result;
}

/*
==============
XAnimBonePhysics_CalculateCustomPinConstraintPoints
==============
*/
void XAnimBonePhysics_CalculateCustomPinConstraintPoints(const XAnimProcNodeCalcParams *params, const DObjProceduralBones *procBones, const vec4_t *invRootQuat, const vec3_t *invRootTrans, vec3_t *outPinConstraintPoints)
{
  const DObjProceduralBones *v5; 
  unsigned __int8 numModels; 
  __int64 v7; 
  __int64 v8; 
  DObjProceduralBonesModelInfo *modelInfo; 
  unsigned int numPinConstraints; 
  unsigned int v11; 
  __int64 p_boneNameIndexA; 
  __int64 v13; 
  unsigned __int16 v14; 
  int v15; 
  __int64 v17; 
  __int64 v18; 
  float4 *outModelTranslation; 
  __int64 v20; 
  __int64 v21; 
  vec3_t inoutTrans1; 
  vec3_t out; 
  vec4_t inoutQuat1; 
  float4 outModelQuat; 
  float4 v30; 

  v5 = procBones;
  if ( procBones->numCustomPinConstraints )
  {
    numModels = procBones->numModels;
    if ( numModels )
    {
      v7 = 0i64;
      v8 = numModels;
      v21 = numModels;
      do
      {
        modelInfo = v5->modelInfo;
        numPinConstraints = modelInfo[v7].numPinConstraints;
        if ( modelInfo[v7].numPinConstraints )
        {
          if ( !modelInfo[v7].dynamicBonesAsset )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2775, ASSERT_TYPE_ASSERT, "(modelInfo->dynamicBonesAsset)", (const char *)&queryFormat, "modelInfo->dynamicBonesAsset") )
              __debugbreak();
            v8 = v21;
          }
          v11 = 0;
          if ( numPinConstraints )
          {
            p_boneNameIndexA = (__int64)&modelInfo[v7].dynamicBonesAsset->customPinConstraints->boneNameIndexA;
            do
            {
              v13 = v11 + modelInfo[v7].firstPinConstraintIndex;
              if ( *(int *)(p_boneNameIndexA - 4) < 0 )
              {
                LODWORD(v20) = *(_DWORD *)(p_boneNameIndexA - 4);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2784, ASSERT_TYPE_ASSERT, "( pin->dynamicBoneIndexB ) >= ( 0 )", "%s >= %s\n\t%i, %i", "pin->dynamicBoneIndexB", "0", v20, 0i64) )
                  __debugbreak();
              }
              if ( *(int *)(p_boneNameIndexA - 8) < 0 )
              {
                v14 = v5->pinConstraintBoneIndices[*(_DWORD *)p_boneNameIndexA + modelInfo[v7].firstBoneIndex];
                if ( (unsigned __int16)(v14 - 254) <= 1u )
                {
                  v18 = v13;
                  *(_QWORD *)outPinConstraintPoints[v18].v = 0i64;
                  outPinConstraintPoints[v18].v[2] = 0.0;
                }
                else
                {
                  v15 = v14;
                  if ( !DObjIsValidBoneIndex(params->obj, v14) )
                  {
                    LODWORD(outModelTranslation) = v15;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2800, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( params->obj, boneIndex ) ) )", "( boneIndex ) = %i", outModelTranslation) )
                      __debugbreak();
                  }
                  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v15, &outModelQuat, &v30);
                  _XMM1 = v30.v;
                  inoutTrans1.v[0] = v30.v.m128_f32[0];
                  __asm
                  {
                    vextractps dword ptr [rsp+128h+inoutTrans1+4], xmm1, 1
                    vextractps dword ptr [rsp+128h+inoutTrans1+8], xmm1, 2
                  }
                  inoutQuat1 = (vec4_t)outModelQuat.v;
                  QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, invRootQuat, invRootTrans);
                  QuatTransform(&inoutQuat1, (const vec3_t *)(p_boneNameIndexA + 4), &out);
                  v5 = procBones;
                  v17 = v13;
                  outPinConstraintPoints[v17].v[0] = out.v[0] + inoutTrans1.v[0];
                  outPinConstraintPoints[v17].v[1] = out.v[1] + inoutTrans1.v[1];
                  outPinConstraintPoints[v17].v[2] = out.v[2] + inoutTrans1.v[2];
                }
              }
              ++v11;
              p_boneNameIndexA += 44i64;
            }
            while ( v11 < numPinConstraints );
            v8 = v21;
          }
        }
        ++v7;
        v21 = --v8;
      }
      while ( v8 );
    }
  }
}

/*
==============
XAnimBonePhysics_CalculateInheritedAcceleration
==============
*/
void XAnimBonePhysics_CalculateInheritedAcceleration(DObjProceduralBones *procBones)
{
  float deltaTime; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  float value; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  float v29; 
  const dvar_t *v30; 
  float v31; 
  const dvar_t *v32; 
  float v33; 
  const dvar_t *v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  const dvar_t *v39; 
  float v40; 
  const dvar_t *v41; 
  float v42; 
  double Float_Internal_DebugName; 
  double v44; 
  double v45; 
  double v46; 
  vec3_t outRootTrans; 
  vec3_t outPrevRootTrans; 
  __int64 v49; 
  vec3_t v; 
  vec4_t out; 
  vec4_t in1; 
  vec4_t in2; 

  v49 = -2i64;
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2599, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  deltaTime = procBones->physicsState.deltaTime;
  if ( deltaTime != 0.0 )
  {
    v4 = 1.0 / deltaTime;
    v3 = 1.0 / deltaTime;
    DObjPhysicsState_GetRootTrans(&procBones->physicsState, &outRootTrans);
    DObjPhysicsState_GetPrevRootTrans(&procBones->physicsState, &outPrevRootTrans);
    v.v[0] = (float)(outRootTrans.v[0] - outPrevRootTrans.v[0]) * (float)(1.0 / deltaTime);
    v.v[1] = (float)(outRootTrans.v[1] - outPrevRootTrans.v[1]) * (float)(1.0 / deltaTime);
    v.v[2] = (float)(outRootTrans.v[2] - outPrevRootTrans.v[2]) * (float)(1.0 / deltaTime);
    v5 = procBones->physicsState.prevRootQuat.v[0];
    LODWORD(in2.v[0]) = LODWORD(v5) ^ _xmm;
    v6 = procBones->physicsState.prevRootQuat.v[1];
    LODWORD(in2.v[1]) = LODWORD(v6) ^ _xmm;
    v7 = procBones->physicsState.prevRootQuat.v[2];
    LODWORD(in2.v[2]) = LODWORD(v7) ^ _xmm;
    in2.v[3] = procBones->physicsState.prevRootQuat.v[3];
    v8 = procBones->physicsState.rootQuat.v[0];
    v9 = procBones->physicsState.rootQuat.v[1];
    v10 = procBones->physicsState.rootQuat.v[2];
    v11 = procBones->physicsState.rootQuat.v[3];
    if ( (float)((float)((float)((float)(v6 * v9) + (float)(v5 * v8)) + (float)(v7 * v10)) + (float)(in2.v[3] * v11)) < 0.0 )
    {
      LODWORD(v8) ^= _xmm;
      LODWORD(v9) ^= _xmm;
      LODWORD(v10) ^= _xmm;
      LODWORD(v11) ^= _xmm;
    }
    in1.v[0] = (float)(v4 * 2.0) * (float)(v8 - v5);
    in1.v[1] = (float)(v4 * 2.0) * (float)(v9 - v6);
    in1.v[2] = (float)(v4 * 2.0) * (float)(v10 - v7);
    in1.v[3] = (float)(v4 * 2.0) * (float)(v11 - in2.v[3]);
    QuatMultiply(&in1, &in2, &out);
    LODWORD(v12) = LODWORD(out.v[0]) ^ _xmm;
    LODWORD(v13) = LODWORD(out.v[1]) ^ _xmm;
    LODWORD(v14) = LODWORD(out.v[2]) ^ _xmm;
    v15 = v.v[1];
    v16 = v.v[2];
    v17 = (float)(v.v[0] - procBones->physicsState.prevVelocity.v[0]) * v3;
    v18 = (float)(v.v[1] - procBones->physicsState.prevVelocity.v[1]) * v3;
    v19 = (float)(v.v[2] - procBones->physicsState.prevVelocity.v[2]) * v3;
    v20 = COERCE_FLOAT(LODWORD(out.v[1]) ^ _xmm) - procBones->physicsState.prevAngularVelocity.v[1];
    v21 = COERCE_FLOAT(LODWORD(out.v[2]) ^ _xmm) - procBones->physicsState.prevAngularVelocity.v[2];
    in2.v[0] = (float)(COERCE_FLOAT(LODWORD(out.v[0]) ^ _xmm) - procBones->physicsState.prevAngularVelocity.v[0]) * v3;
    in2.v[1] = v20 * v3;
    in2.v[2] = v21 * v3;
    procBones->physicsState.prevVelocity.v[0] = v.v[0];
    procBones->physicsState.prevVelocity.v[1] = v15;
    procBones->physicsState.prevVelocity.v[2] = v16;
    procBones->physicsState.prevAngularVelocity.v[0] = v12;
    procBones->physicsState.prevAngularVelocity.v[1] = v13;
    procBones->physicsState.prevAngularVelocity.v[2] = v14;
    procBones->physicsState.prevRootQuat.v[0] = procBones->physicsState.rootQuat.v[0];
    procBones->physicsState.prevRootQuat.v[1] = procBones->physicsState.rootQuat.v[1];
    procBones->physicsState.prevRootQuat.v[2] = procBones->physicsState.rootQuat.v[2];
    procBones->physicsState.prevRootQuat.v[3] = procBones->physicsState.rootQuat.v[3];
    DObjPhysicsState_SetPrevRootTrans(&procBones->physicsState, &outRootTrans);
    v22 = DCONST_DVARFLT_xanim_physicsExtAngularAccelCap;
    if ( !DCONST_DVARFLT_xanim_physicsExtAngularAccelCap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsExtAngularAccelCap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    Vec3LimitLength((vec3_t *)&in2, v22->current.value);
    out.v[0] = 0.0;
    out.v[1] = 0.0;
    out.v[2] = v19;
    v23 = DCONST_DVARFLT_xanim_physicsAccelScale;
    if ( !DCONST_DVARFLT_xanim_physicsAccelScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAccelScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    value = v23->current.value;
    in1.v[0] = v17 * value;
    in1.v[1] = v18 * value;
    in1.v[2] = 0.0 * value;
    v25 = DCONST_DVARFLT_xanim_physicsMaxWorldAccel;
    if ( !DCONST_DVARFLT_xanim_physicsMaxWorldAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxWorldAccel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    Vec3LimitLength((vec3_t *)&in1, v25->current.value);
    v26 = DCONST_DVARFLT_xanim_physicsWorldAccelDeadZone;
    if ( !DCONST_DVARFLT_xanim_physicsWorldAccelDeadZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsWorldAccelDeadZone") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = in1.v[1];
    v28 = in1.v[0];
    v29 = in1.v[2];
    if ( (float)((float)((float)(v27 * v27) + (float)(v28 * v28)) + (float)(v29 * v29)) < (float)(v26->current.value * v26->current.value) )
    {
      v28 = 0.0;
      v27 = 0.0;
      v29 = 0.0;
    }
    if ( v19 <= -0.0 )
    {
      v32 = DVARFLT_xanim_physicsGravity;
      if ( !DVARFLT_xanim_physicsGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsGravity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      v33 = v32->current.value;
      v34 = DCONST_DVARFLT_xanim_physicsMaxWorldAccel;
      if ( !DCONST_DVARFLT_xanim_physicsMaxWorldAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxWorldAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      v31 = v33 + v34->current.value;
    }
    else
    {
      v30 = DCONST_DVARFLT_xanim_physicsMaxWorldAccel;
      if ( !DCONST_DVARFLT_xanim_physicsMaxWorldAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxWorldAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      v31 = v30->current.value;
    }
    Vec3LimitLength((vec3_t *)&out, v31);
    v35 = v27 + out.v[1];
    LODWORD(v36) = COERCE_UNSIGNED_INT(v28 + out.v[0]) ^ _xmm;
    LODWORD(v37) = LODWORD(v35) ^ _xmm;
    LODWORD(v38) = COERCE_UNSIGNED_INT(v29 + out.v[2]) ^ _xmm;
    if ( ((LODWORD(v36) & 0x7F800000) == 2139095040 || (LODWORD(v37) & 0x7F800000) == 2139095040 || (LODWORD(v38) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2677, ASSERT_TYPE_ASSERT, "(IS_FINITE((accel)[0]) && IS_FINITE((accel)[1]) && IS_FINITE((accel)[2]))", (const char *)&queryFormat, "IS_FINITE((accel)[0]) && IS_FINITE((accel)[1]) && IS_FINITE((accel)[2])") )
      __debugbreak();
    v39 = DCONST_DVARFLT_xanim_physicsAccelSmoothing;
    if ( !DCONST_DVARFLT_xanim_physicsAccelSmoothing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAccelSmoothing") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    v40 = v39->current.value;
    procBones->physicsState.inheritedAcceleration.v[0] = (float)((float)(v36 - procBones->physicsState.inheritedAcceleration.v[0]) * v40) + procBones->physicsState.inheritedAcceleration.v[0];
    procBones->physicsState.inheritedAcceleration.v[1] = (float)((float)(v37 - procBones->physicsState.inheritedAcceleration.v[1]) * v40) + procBones->physicsState.inheritedAcceleration.v[1];
    procBones->physicsState.inheritedAcceleration.v[2] = (float)((float)(v38 - procBones->physicsState.inheritedAcceleration.v[2]) * v40) + procBones->physicsState.inheritedAcceleration.v[2];
    v41 = DCONST_DVARFLT_xanim_physicsAccelSmoothing;
    if ( !DCONST_DVARFLT_xanim_physicsAccelSmoothing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAccelSmoothing") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = v41->current.value;
    procBones->physicsState.inheritedAngularAcceleration.v[0] = (float)((float)(in2.v[0] - procBones->physicsState.inheritedAngularAcceleration.v[0]) * v42) + procBones->physicsState.inheritedAngularAcceleration.v[0];
    procBones->physicsState.inheritedAngularAcceleration.v[1] = (float)((float)(in2.v[1] - procBones->physicsState.inheritedAngularAcceleration.v[1]) * v42) + procBones->physicsState.inheritedAngularAcceleration.v[1];
    procBones->physicsState.inheritedAngularAcceleration.v[2] = (float)((float)(in2.v[2] - procBones->physicsState.inheritedAngularAcceleration.v[2]) * v42) + procBones->physicsState.inheritedAngularAcceleration.v[2];
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_physicsExtVelocityCap, "xanim_physicsExtVelocityCap");
    Vec3LimitLength(&v, *(float *)&Float_Internal_DebugName);
    v44 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_physicsExtVelocitySmoothing, "xanim_physicsExtVelocitySmoothing");
    procBones->physicsState.inheritedVelocity.v[0] = (float)((float)(v.v[0] - procBones->physicsState.inheritedVelocity.v[0]) * *(float *)&v44) + procBones->physicsState.inheritedVelocity.v[0];
    procBones->physicsState.inheritedVelocity.v[1] = (float)((float)(v.v[1] - procBones->physicsState.inheritedVelocity.v[1]) * *(float *)&v44) + procBones->physicsState.inheritedVelocity.v[1];
    procBones->physicsState.inheritedVelocity.v[2] = (float)((float)(v.v[2] - procBones->physicsState.inheritedVelocity.v[2]) * *(float *)&v44) + procBones->physicsState.inheritedVelocity.v[2];
    v45 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_physicsIdleAngularVelocityThreshold, "xanim_physicsIdleAngularVelocityThreshold");
    if ( (float)((float)((float)(procBones->physicsState.prevAngularVelocity.v[0] * procBones->physicsState.prevAngularVelocity.v[0]) + (float)(procBones->physicsState.prevAngularVelocity.v[1] * procBones->physicsState.prevAngularVelocity.v[1])) + (float)(procBones->physicsState.prevAngularVelocity.v[2] * procBones->physicsState.prevAngularVelocity.v[2])) > (float)(*(float *)&v45 * *(float *)&v45) )
    {
      procBones->physicsState.idleVelocityWeight = 0.0;
    }
    else
    {
      v46 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_physicsIdleVelocitySmoothing, "xanim_physicsIdleVelocitySmoothing");
      procBones->physicsState.idleVelocityWeight = (float)((float)(1.0 - *(float *)&v46) * procBones->physicsState.idleVelocityWeight) + *(float *)&v46;
    }
  }
  memset(&outPrevRootTrans, 0, sizeof(outPrevRootTrans));
  memset(&outRootTrans, 0, sizeof(outRootTrans));
}

/*
==============
XAnimBonePhysics_ClearAudioEvents
==============
*/
void XAnimBonePhysics_ClearAudioEvents(DObjProceduralBones *procBones)
{
  if ( procBones )
  {
    procBones->physicsState.numAudioEvents = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 428, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
      __debugbreak();
    MEMORY[0x128] = 0;
  }
}

/*
==============
XAnimBonePhysics_FindMaxBoneVelocitySquared
==============
*/
float XAnimBonePhysics_FindMaxBoneVelocitySquared(const XAnimBonePhysicsUpdateContext *context)
{
  __int64 firstPhysicsBoneIndex; 
  unsigned int endPhysicsBoneIndex; 
  XAnimPhysicsBone *physicsBones; 
  unsigned int v6; 
  __int64 p_z; 
  __int64 v8; 
  __int128 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  __int128 v18; 
  __int128 v21; 
  __int128 v24; 
  float *v26; 
  __int64 v27; 
  __int128 v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  __int128 v34; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2879, ASSERT_TYPE_ASSERT, "(context != 0)", (const char *)&queryFormat, "context != NULL") )
    __debugbreak();
  if ( !context->procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2880, ASSERT_TYPE_ASSERT, "(context->procBones != 0)", (const char *)&queryFormat, "context->procBones != NULL") )
    __debugbreak();
  firstPhysicsBoneIndex = context->firstPhysicsBoneIndex;
  endPhysicsBoneIndex = context->endPhysicsBoneIndex;
  physicsBones = context->procBones->physicsBones;
  LODWORD(_XMM8) = 0;
  if ( (unsigned int)firstPhysicsBoneIndex >= endPhysicsBoneIndex )
    return 0.0;
  if ( endPhysicsBoneIndex - (unsigned int)firstPhysicsBoneIndex >= 4 )
  {
    v6 = ((endPhysicsBoneIndex - (unsigned int)firstPhysicsBoneIndex - 4) >> 2) + 1;
    p_z = (__int64)&physicsBones[firstPhysicsBoneIndex + 2].state.angularVelocity.z;
    v8 = v6;
    LODWORD(firstPhysicsBoneIndex) = firstPhysicsBoneIndex + 4 * v6;
    do
    {
      v9 = *(unsigned int *)(p_z - 548);
      v10 = *(float *)(p_z - 544);
      v11 = *(float *)(p_z - 540);
      v12 = *(float *)(p_z - 532);
      v13 = *(float *)(p_z - 536);
      v14 = *(float *)(p_z - 528);
      p_z += 1056i64;
      v15 = v9;
      *(float *)&v15 = (float)((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v10 * v10)) + (float)(v11 * v11)) + (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14));
      _XMM0 = v15;
      __asm { vmaxss  xmm8, xmm0, xmm8 }
      v18 = *(unsigned int *)(p_z - 1328);
      *(float *)&v18 = (float)((float)((float)(*(float *)(p_z - 1328) * *(float *)(p_z - 1328)) + (float)(*(float *)(p_z - 1324) * *(float *)(p_z - 1324))) + (float)(*(float *)(p_z - 1320) * *(float *)(p_z - 1320))) + (float)((float)((float)(*(float *)(p_z - 1340) * *(float *)(p_z - 1340)) + (float)(*(float *)(p_z - 1336) * *(float *)(p_z - 1336))) + (float)(*(float *)(p_z - 1332) * *(float *)(p_z - 1332)));
      _XMM0 = v18;
      __asm { vmaxss  xmm8, xmm0, xmm8 }
      v21 = *(unsigned int *)(p_z - 1060);
      *(float *)&v21 = (float)((float)((float)(*(float *)(p_z - 1060) * *(float *)(p_z - 1060)) + (float)(*(float *)(p_z - 1064) * *(float *)(p_z - 1064))) + (float)(*(float *)(p_z - 1056) * *(float *)(p_z - 1056))) + (float)((float)((float)(*(float *)(p_z - 1072) * *(float *)(p_z - 1072)) + (float)(*(float *)(p_z - 1076) * *(float *)(p_z - 1076))) + (float)(*(float *)(p_z - 1068) * *(float *)(p_z - 1068)));
      _XMM0 = v21;
      __asm { vmaxss  xmm8, xmm0, xmm8 }
      v24 = *(unsigned int *)(p_z - 808);
      *(float *)&v24 = (float)((float)((float)(*(float *)(p_z - 808) * *(float *)(p_z - 808)) + (float)(*(float *)(p_z - 812) * *(float *)(p_z - 812))) + (float)(*(float *)(p_z - 804) * *(float *)(p_z - 804))) + (float)((float)((float)(*(float *)(p_z - 796) * *(float *)(p_z - 796)) + (float)(*(float *)(p_z - 800) * *(float *)(p_z - 800))) + (float)(*(float *)(p_z - 792) * *(float *)(p_z - 792)));
      _XMM0 = v24;
      __asm { vmaxss  xmm8, xmm0, xmm8 }
      --v8;
    }
    while ( v8 );
  }
  if ( (unsigned int)firstPhysicsBoneIndex < endPhysicsBoneIndex )
  {
    v26 = &physicsBones[(unsigned int)firstPhysicsBoneIndex].state.angularVelocity.v[2];
    v27 = endPhysicsBoneIndex - (unsigned int)firstPhysicsBoneIndex;
    do
    {
      v28 = *((unsigned int *)v26 - 5);
      v29 = *(v26 - 4);
      v30 = *(v26 - 3);
      v31 = *(v26 - 2);
      v32 = *(v26 - 1);
      v33 = *v26;
      v26 += 66;
      v34 = v28;
      *(float *)&v34 = (float)((float)((float)(*(float *)&v28 * *(float *)&v28) + (float)(v29 * v29)) + (float)(v30 * v30)) + (float)((float)((float)(v31 * v31) + (float)(v32 * v32)) + (float)(v33 * v33));
      _XMM2 = v34;
      __asm { vmaxss  xmm8, xmm2, xmm8 }
      --v27;
    }
    while ( v27 );
  }
  return *(float *)&_XMM8;
}

/*
==============
XAnimBonePhysics_FindTwistAngle
==============
*/
float XAnimBonePhysics_FindTwistAngle(const XAnimPhysicsBone *physicsBoneA, const XAnimPhysicsBone *physicsBoneB, const vec3_t *twistAxis, const vec3_t *twistU, const vec3_t *twistV, float4 *outCorrectionAxis)
{
  vec4_t rotationQuat; 
  vec4_t parentBoneQuat; 
  float v12; 
  __m128 v14; 
  float v15; 
  __m128 v19; 
  float v22; 
  __m128 v; 
  vec4_t localBasePoseQuat; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v67; 
  __m128 v68; 
  __m128 v72; 
  __m128 v79; 
  __m128 v80; 
  __m128 v81; 
  __m128 v82; 
  __m128 v83; 
  __m128 v84; 
  __m128 v85; 
  __m128 v86; 
  __m128 v87; 
  __m128 v93; 
  float4 v99; 
  __int128 v101; 
  __int128 v102; 
  __int128 v108; 
  __int128 v111; 
  float result; 
  __m128 v119; 
  float4 v120; 
  float4 v121; 
  __m128 v122; 
  __m128 v123; 
  __m128 v124; 
  __m128 v125; 
  float4 v126; 

  if ( !physicsBoneA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1837, ASSERT_TYPE_ASSERT, "(physicsBoneA != 0)", (const char *)&queryFormat, "physicsBoneA != NULL") )
    __debugbreak();
  if ( !physicsBoneA->properties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1838, ASSERT_TYPE_ASSERT, "(physicsBoneA->properties != 0)", (const char *)&queryFormat, "physicsBoneA->properties != NULL") )
    __debugbreak();
  rotationQuat = physicsBoneA->state.rotationQuat;
  v122 = (__m128)rotationQuat;
  if ( physicsBoneB )
  {
    parentBoneQuat = physicsBoneB->state.rotationQuat;
  }
  else
  {
    if ( physicsBoneA->parentPhysicsBoneIndex != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1848, ASSERT_TYPE_ASSERT, "(physicsBoneA->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX)", (const char *)&queryFormat, "physicsBoneA->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX") )
      __debugbreak();
    parentBoneQuat = physicsBoneA->parentBoneQuat;
  }
  v12 = twistAxis->v[0];
  v125.m128_i32[3] = 0;
  v14 = v125;
  v14.m128_f32[0] = v12;
  _XMM11 = v14;
  v15 = twistU->v[0];
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [rsi+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rsi+8], 20h ; ' '
  }
  v125 = _XMM11;
  v125.m128_i32[3] = 0;
  v19 = v125;
  v19.m128_f32[0] = v15;
  _XMM3 = v19;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rbp+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbp+8], 20h ; ' '
  }
  v22 = twistV->v[0];
  v125 = _XMM3;
  v126.v.m128_i32[3] = 0;
  v = v126.v;
  v.m128_f32[0] = v22;
  _XMM15 = v;
  __asm
  {
    vinsertps xmm15, xmm15, dword ptr [r14+4], 10h
    vinsertps xmm15, xmm15, dword ptr [r14+8], 20h ; ' '
  }
  localBasePoseQuat = physicsBoneA->properties->localBasePoseQuat;
  v28 = _mm_shuffle_ps((__m128)localBasePoseQuat, (__m128)localBasePoseQuat, 201);
  v29 = _mm_shuffle_ps((__m128)localBasePoseQuat, (__m128)localBasePoseQuat, 210);
  v30 = _mm_shuffle_ps((__m128)localBasePoseQuat, (__m128)localBasePoseQuat, 255);
  v31 = _mm_shuffle_ps(_XMM11, _XMM11, 201);
  v32 = _mm_shuffle_ps(_XMM11, _XMM11, 210);
  v33 = _mm128_sub_ps(_mm128_mul_ps(v28, v32), _mm128_mul_ps(v29, v31));
  v34 = _mm128_add_ps(v33, v33);
  v35 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v34, v34, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(v34, v34, 201), v29)), _mm128_add_ps(_mm128_mul_ps(v30, v34), _XMM11));
  v36 = _mm_shuffle_ps((__m128)rotationQuat, (__m128)rotationQuat, 255);
  v119 = (__m128)parentBoneQuat;
  v37 = _mm_shuffle_ps((__m128)rotationQuat, (__m128)rotationQuat, 210);
  v38 = _mm_shuffle_ps((__m128)rotationQuat, (__m128)rotationQuat, 201);
  v39 = _mm128_sub_ps(_mm128_mul_ps(v38, v32), _mm128_mul_ps(v37, v31));
  v40 = _mm128_add_ps(v39, v39);
  v41 = _mm128_add_ps(_mm128_mul_ps(v36, v40), _XMM11);
  v42 = _mm128_mul_ps(_mm_shuffle_ps(v40, v40, 201), v37);
  v43 = v119;
  v44 = _mm_shuffle_ps(v43, v43, 210);
  v45 = _mm_shuffle_ps(v43, v43, 255);
  v46 = _mm128_mul_ps(_mm_shuffle_ps(v40, v40, 210), v38);
  v47 = _mm_shuffle_ps(v43, v43, 201);
  v48 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v35, v35, 210), v47), _mm128_mul_ps(_mm_shuffle_ps(v35, v35, 201), v44));
  v49 = _mm128_add_ps(v48, v48);
  v124 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v49, v49, 210), v47), _mm128_mul_ps(_mm_shuffle_ps(v49, v49, 201), v44)), _mm128_add_ps(_mm128_mul_ps(v45, v49), v35));
  v120.v = v124;
  v123 = _mm128_add_ps(_mm128_sub_ps(v46, v42), v41);
  v126.v = v123;
  XAnimBonePhysics_CalculateShortestRotationQuaternion(&v120, &v126, &v121);
  v50 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v125, v125, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(v125, v125, 201), v29));
  v51 = _mm128_add_ps(v50, v50);
  v52 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v51, v51, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(v51, v51, 201), v29)), _mm128_add_ps(_mm128_mul_ps(v30, v51), v125));
  v53 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM15, _XMM15, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(_XMM15, _XMM15, 201), v29));
  v54 = _mm128_add_ps(v53, v53);
  v55 = _mm128_add_ps(_mm128_mul_ps(v30, v54), _XMM15);
  v56 = _mm128_mul_ps(_mm_shuffle_ps(v54, v54, 201), v29);
  v57 = _mm_shuffle_ps(v54, v54, 210);
  v58 = v121.v;
  v59 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(v57, v28), v56), v55);
  v60 = _mm_shuffle_ps(v58, v58, 255);
  _XMM0 = _mm128_mul_ps(v121.v, v119);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm3, xmm2, xmm2
  }
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v45, v60), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v58, v58, 201), v44), _mm128_mul_ps(_mm_shuffle_ps(v58, v58, 210), v47)), _mm128_add_ps(_mm128_mul_ps(v121.v, v45), _mm128_mul_ps(v60, v119)));
  __asm { vblendps xmm8, xmm2, xmm0, 7 }
  v67 = _mm128_mul_ps(v122, (__m128)_xmm);
  v68 = _mm_shuffle_ps(_XMM8, _XMM8, 255);
  _XMM1 = _mm128_mul_ps(_XMM8, v67);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
  }
  v72 = _mm_shuffle_ps(v67, v67, 255);
  __asm { vhaddps xmm3, xmm2, xmm2 }
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v68, v72), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 210), _mm_shuffle_ps(v67, v67, 201)), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), _mm_shuffle_ps(v67, v67, 210))), _mm128_add_ps(_mm128_mul_ps(v68, v67), _mm128_mul_ps(_XMM8, v72)));
  __asm { vblendps xmm3, xmm2, xmm0, 7 }
  _XMM1 = _mm128_mul_ps(_XMM3, _XMM3);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
  }
  v79 = _mm128_div_ps(_XMM3, _mm_sqrt_ps(_XMM0));
  v80 = _mm_shuffle_ps(v79, v79, 201);
  v81 = _mm_shuffle_ps(v79, v79, 255);
  v82 = _mm_shuffle_ps(v79, v79, 210);
  v83 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v52, v52, 210), v80), _mm128_mul_ps(_mm_shuffle_ps(v52, v52, 201), v82));
  v84 = _mm128_add_ps(v83, v83);
  v85 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v84, v84, 210), v80), _mm128_mul_ps(_mm_shuffle_ps(v84, v84, 201), v82)), _mm128_add_ps(_mm128_mul_ps(v81, v84), v52));
  v86 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v59, v59, 210), v80), _mm128_mul_ps(_mm_shuffle_ps(v59, v59, 201), v82));
  v87 = _mm128_add_ps(v86, v86);
  _XMM0 = _mm128_mul_ps(v85, v125);
  __asm { vinsertps xmm1, xmm0, xmm0, 8 }
  _XMM0 = _mm128_mul_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v87, v87, 210), v80), _mm128_mul_ps(_mm_shuffle_ps(v87, v87, 201), v82)), _mm128_add_ps(_mm128_mul_ps(v81, v87), v59)), v125);
  __asm
  {
    vhaddps xmm5, xmm1, xmm1
    vinsertps xmm1, xmm0, xmm0, 8
  }
  v93 = _mm128_add_ps(v123, v124);
  __asm
  {
    vhaddps xmm3, xmm1, xmm1
    vhaddps xmm6, xmm5, xmm5
  }
  _XMM0 = _mm128_mul_ps(v93, v93);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v99.v = _mm128_div_ps(v93, _mm_sqrt_ps(_XMM0));
  __asm { vhaddps xmm7, xmm3, xmm3 }
  v102 = _XMM7 & _xmm;
  *(float *)&v102 = COERCE_FLOAT(_XMM7 & _xmm) + 1.0e-10;
  v101 = v102;
  *(float *)&v102 = *(float *)&v102 + *(float *)&_XMM6;
  _XMM4 = v102;
  _XMM5 = 0i64;
  __asm { vcmpless xmm0, xmm5, xmm6 }
  *outCorrectionAxis = (float4)v99.v;
  __asm { vblendvps xmm2, xmm4, xmm1, xmm0 }
  v108 = v101;
  *(float *)&v108 = *(float *)&v101 - *(float *)&_XMM6;
  _XMM1 = v108;
  __asm
  {
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm1, xmm4, xmm0
  }
  v111 = _XMM2;
  *(float *)&v111 = (float)((float)((float)((float)(*(float *)&_XMM2 / *(float *)&_XMM0) * 0.1963) * (float)(*(float *)&_XMM2 / *(float *)&_XMM0)) - 0.9817) * (float)(*(float *)&_XMM2 / *(float *)&_XMM0);
  _XMM0 = LODWORD(FLOAT_2_3561945);
  __asm
  {
    vcmpless xmm2, xmm5, xmm6
    vblendvps xmm1, xmm0, xmm1, xmm2
  }
  *(float *)&v111 = *(float *)&v111 + *(float *)&_XMM1;
  _XMM1 = v111 ^ _xmm;
  __asm
  {
    vcmpless xmm0, xmm5, xmm7
    vblendvps xmm0, xmm1, xmm3, xmm0
  }
  LODWORD(result) = _XMM0 ^ _xmm;
  return result;
}

/*
==============
XAnimBonePhysics_GenerateAudioEvents
==============
*/
void XAnimBonePhysics_GenerateAudioEvents(XAnimBonePhysicsUpdateContext *context, int numContacts)
{
  const dvar_t *v2; 
  __int64 v3; 
  float value; 
  const dvar_t *v6; 
  int integer; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  XAnimCollisionContact *contacts; 
  __int64 bodyIndex; 
  XAnimPhysicsBone *v13; 
  char *p_pointA; 
  float v15; 
  const XAnimDynamicBoneProperties *properties; 
  unsigned __int8 v17; 
  const SndAliasLookup *p_heavyHitSound; 
  __int64 v19; 
  char v20[16]; 
  vec3_t outTransformedPoint; 

  v2 = DCONST_DVARFLT_xanim_physicsAudioMinHitDistance;
  v3 = (unsigned int)numContacts;
  if ( !DCONST_DVARFLT_xanim_physicsAudioMinHitDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAudioMinHitDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  v6 = DCONST_DVARINT_xanim_physicsAudioEventWaitTime;
  if ( !DCONST_DVARINT_xanim_physicsAudioEventWaitTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAudioEventWaitTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2704, ASSERT_TYPE_ASSERT, "(context != 0)", (const char *)&queryFormat, "context != NULL") )
    __debugbreak();
  if ( (int)v3 > 0 )
  {
    v8 = 0i64;
    v9 = v3;
    v10 = 0i64;
    v19 = v3;
    while ( 1 )
    {
      contacts = context->contacts;
      bodyIndex = context->contacts[v8].bodyIndex;
      v13 = &context->procBones->physicsBones[bodyIndex];
      if ( (v13->flags & 0x10) != 0 )
        break;
LABEL_35:
      ++v10;
      ++v8;
      v19 = --v9;
      if ( !v9 )
        return;
    }
    if ( v13->state.audioEventTimer )
    {
      if ( integer < 0 || (unsigned int)integer > 0xFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)integer, "signed", integer) )
          __debugbreak();
        v9 = v19;
      }
      v13->state.audioEventTimer = integer;
      goto LABEL_35;
    }
    p_pointA = (char *)&contacts[v8].pointA;
    if ( &v13->state.angularVelocity == (vec3_t *)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
      __debugbreak();
    if ( p_pointA == v20 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
      __debugbreak();
    v15 = (float)((float)((float)((float)((float)(v13->state.angularVelocity.v[2] * *(float *)p_pointA) - (float)(contacts[v8].pointA.v[2] * v13->state.angularVelocity.v[0])) + v13->state.velocity.v[1]) * context->contacts[v8].normal.v[1]) + (float)((float)((float)((float)(v13->state.angularVelocity.v[1] * contacts[v8].pointA.v[2]) - (float)(v13->state.angularVelocity.v[2] * contacts[v8].pointA.v[1])) + v13->state.velocity.v[0]) * context->contacts[v8].normal.v[0])) + (float)((float)((float)((float)(contacts[v8].pointA.v[1] * v13->state.angularVelocity.v[0]) - (float)(v13->state.angularVelocity.v[1] * *(float *)p_pointA)) + v13->state.velocity.v[2]) * context->contacts[v8].normal.v[2]);
    QuatTrans_TransformPoint(&v13->state.rotationQuat, &v13->state.position, &contacts[v8].pointA, &outTransformedPoint);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(outTransformedPoint.v[1] - contacts[v8].pointB.v[1]) * contacts[v8].normal.v[1]) + (float)((float)(outTransformedPoint.v[0] - contacts[v8].pointB.v[0]) * contacts[v8].normal.v[0])) + (float)((float)(outTransformedPoint.v[2] - contacts[v8].pointB.v[2]) * contacts[v8].normal.v[2])) & _xmm) >= value )
    {
      properties = v13->properties;
      if ( v15 > properties->heavyHitThreshold && properties->heavyHitSound.name )
      {
        v17 = truncate_cast<unsigned char,int>(integer);
        p_heavyHitSound = &v13->properties->heavyHitSound;
      }
      else
      {
        if ( v15 <= properties->lightHitThreshold || !properties->lightHitSound.name )
          goto LABEL_34;
        v17 = truncate_cast<unsigned char,int>(integer);
        p_heavyHitSound = &v13->properties->lightHitSound;
      }
      v13->state.audioEventTimer = v17;
      XAnimBonePhysics_AddAudioEvent(context->procBones, (unsigned __int8)bodyIndex, &context->contacts[v10].pointB, p_heavyHitSound, v15);
    }
LABEL_34:
    v9 = v19;
    goto LABEL_35;
  }
}

/*
==============
XAnimBonePhysics_GetModelSpaceGroundPlane
==============
*/
void XAnimBonePhysics_GetModelSpaceGroundPlane(const DObjProceduralBones *procBones, vec4_t *outModelGroundPlane)
{
  float groundPlaneHeight; 
  __int128 in; 
  __int128 v8; 
  vec3_t outInvTrans; 
  vec3_t to; 
  vec4_t outInvQuat; 

  groundPlaneHeight = procBones->physicsState.groundPlaneHeight;
  *(float *)&in = 0.0;
  *((float *)&in + 1) = 0.0;
  *((float *)&in + 2) = FLOAT_1_0;
  *((float *)&in + 3) = groundPlaneHeight;
  if ( (LODWORD(groundPlaneHeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 987, ASSERT_TYPE_ASSERT, "(!IS_NAN( worldGroundPlane[3] ))", (const char *)&queryFormat, "!IS_NAN( worldGroundPlane[3] )", groundPlaneHeight, in) )
    __debugbreak();
  if ( procBones == (const DObjProceduralBones *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 145, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  GetSecureRootVec3(&procBones->physicsState.rootTrans.rootTrans, &to, s_bones_aab_X, s_bones_aab_Y, s_bones_aab_Z);
  QuatTrans_Inverse(&procBones->physicsState.rootQuat, &to, &outInvQuat, &outInvTrans);
  QuatTransform(&outInvQuat, (const vec3_t *)&in, (vec3_t *)&v8);
  _XMM0 = v8;
  __asm { vinsertps xmm0, xmm0, xmm3, 30h ; '0' }
  *outModelGroundPlane = _XMM0;
}

/*
==============
XAnimBonePhysics_Integrate
==============
*/
void XAnimBonePhysics_Integrate(XAnimProcNodeCalcParams *params, DObjProceduralBones *procBones, unsigned int firstPhysicsBoneIndex, unsigned int endPhysicsBoneIndex, float timeStep)
{
  __int64 v5; 
  const DObj *obj; 
  __m128 v10; 
  __m128 v11; 
  float v12; 
  __m128 v15; 
  float v16; 
  __m128 v20; 
  float v23; 
  __m128 v25; 
  __m128 v30; 
  const dvar_t *v32; 
  __m128 v33; 
  __m128 v35; 
  __m128 idleVelocityWeight_low; 
  __m128 v39; 
  __m128 v40; 
  __m128 v41; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v45; 
  __m128 v46; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __m128 v56; 
  __m128 v57; 
  __m128 v59; 
  __int64 v60; 
  float v62; 
  __m128 rotationQuat; 
  __m128 v65; 
  float v66; 
  __m128 v70; 
  float v71; 
  __m128 v75; 
  float v78; 
  __m128 v81; 
  __m128 v82; 
  float v83; 
  XAnimDynamicBoneNoiseAxisSpace relative; 
  float4 *v85; 
  __m128 v87; 
  __m128 v89; 
  XAnimDynamicBoneNoiseAxisSpace v90; 
  float4 *v91; 
  __m128 v93; 
  const dvar_t *v95; 
  __m128 v96; 
  float v103; 
  const dvar_t *v109; 
  float v114; 
  __m128 v120; 
  __m128 v121; 
  __m128 v127; 
  __m128 v130; 
  unsigned __int8 audioEventTimer; 
  float4 *outModelTranslation; 
  XAnimPhysicsBone *physicsBones; 
  float4 v137; 
  float4 v138; 
  __m128 v139; 
  __m128 v140; 
  __m128 v141; 
  __m128 v142; 
  __m128 v143; 
  __m128 v144; 
  __m128 v145; 
  float4 v146; 
  float4 v147; 
  __m128 outAngularVelocity; 
  vec3_t outVelocity; 
  __m128 v150; 
  __m128 v151; 
  __m128 v152; 
  __m128 v; 
  float4 outModelQuat; 
  float4 v155; 
  float4 v156; 
  float4 v157; 

  v5 = firstPhysicsBoneIndex;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1031, ASSERT_TYPE_ASSERT, "(params != 0)", (const char *)&queryFormat, "params != NULL") )
    __debugbreak();
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1032, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  obj = params->obj;
  physicsBones = procBones->physicsBones;
  if ( endPhysicsBoneIndex > procBones->numPhysicsBones )
  {
    LODWORD(outModelTranslation) = endPhysicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1038, ASSERT_TYPE_ASSERT, "( endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", outModelTranslation, procBones->numPhysicsBones) )
      __debugbreak();
  }
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1039, ASSERT_TYPE_ASSERT, "( firstPhysicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "firstPhysicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", 0, 1) )
    __debugbreak();
  v10 = (__m128)LODWORD(timeStep);
  v10.m128_f32[0] = timeStep * 0.5;
  v145 = _mm_shuffle_ps(v10, v10, 0);
  v11 = _mm_shuffle_ps((__m128)LODWORD(timeStep), (__m128)LODWORD(timeStep), 0);
  if ( ((LODWORD(procBones->physicsState.inheritedAcceleration.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(procBones->physicsState.inheritedAcceleration.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(procBones->physicsState.inheritedAcceleration.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1044, ASSERT_TYPE_ASSERT, "(IS_FINITE((procBones->physicsState.inheritedAcceleration)[0]) && IS_FINITE((procBones->physicsState.inheritedAcceleration)[1]) && IS_FINITE((procBones->physicsState.inheritedAcceleration)[2]))", (const char *)&queryFormat, "IS_FINITE((procBones->physicsState.inheritedAcceleration)[0]) && IS_FINITE((procBones->physicsState.inheritedAcceleration)[1]) && IS_FINITE((procBones->physicsState.inheritedAcceleration)[2])") )
    __debugbreak();
  if ( ((LODWORD(procBones->physicsState.inheritedAngularAcceleration.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(procBones->physicsState.inheritedAngularAcceleration.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(procBones->physicsState.inheritedAngularAcceleration.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1045, ASSERT_TYPE_ASSERT, "(IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[0]) && IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[1]) && IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[2]))", (const char *)&queryFormat, "IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[0]) && IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[1]) && IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[2])") )
    __debugbreak();
  v12 = procBones->physicsState.inheritedAcceleration.v[0];
  _RDI = DCONST_DVARFLT_xanim_physicsExtVelocityScale;
  outAngularVelocity.m128_i32[3] = 0;
  v15 = outAngularVelocity;
  v15.m128_f32[0] = v12;
  _XMM9 = v15;
  v16 = procBones->physicsState.inheritedAngularAcceleration.v[0];
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rbx+0B0h], 10h
    vinsertps xmm9, xmm9, dword ptr [rbx+0B4h], 20h ; ' '
  }
  outAngularVelocity = _XMM9;
  outAngularVelocity.m128_i32[3] = 0;
  v20 = outAngularVelocity;
  v20.m128_f32[0] = v16;
  _XMM7 = v20;
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [rbx+0C8h], 10h
    vinsertps xmm7, xmm7, dword ptr [rbx+0CCh], 20h ; ' '
  }
  v23 = procBones->physicsState.inheritedVelocity.v[0];
  outAngularVelocity = _XMM7;
  outAngularVelocity.m128_i32[3] = 0;
  v25 = outAngularVelocity;
  v25.m128_f32[0] = v23;
  _XMM6 = v25;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rbx+0D4h], 10h
    vinsertps xmm6, xmm6, dword ptr [rbx+0D8h], 20h ; ' '
  }
  outAngularVelocity = _XMM6;
  if ( !DCONST_DVARFLT_xanim_physicsExtVelocityScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsExtVelocityScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vbroadcastss xmm0, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_xanim_physicsExtAngularAccelScale;
  v30 = _mm128_mul_ps(_XMM0, _XMM6);
  if ( !DCONST_DVARFLT_xanim_physicsExtAngularAccelScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsExtAngularAccelScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vbroadcastss xmm0, dword ptr [rdi+28h] }
  v32 = DCONST_DVARFLT_xanim_physicsIdleVelocityScale;
  outAngularVelocity.m128_i32[3] = 0;
  v33 = _mm128_mul_ps(_XMM0, _XMM7);
  v35 = outAngularVelocity;
  v35.m128_f32[0] = procBones->physicsState.prevAngularVelocity.v[0];
  _XMM6 = v35;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rbx+0BCh], 10h
    vinsertps xmm6, xmm6, dword ptr [rbx+0C0h], 20h ; ' '
  }
  outAngularVelocity = _XMM6;
  if ( !DCONST_DVARFLT_xanim_physicsIdleVelocityScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsIdleVelocityScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  idleVelocityWeight_low = (__m128)LODWORD(procBones->physicsState.idleVelocityWeight);
  idleVelocityWeight_low.m128_f32[0] = procBones->physicsState.idleVelocityWeight * v32->current.value;
  v39 = _mm128_mul_ps(_mm_shuffle_ps(idleVelocityWeight_low, idleVelocityWeight_low, 0), _XMM6);
  if ( (obj->skel.partBits.anim.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1057, ASSERT_TYPE_ASSERT, "(dobj->skel.partBits.anim.testBit( 0 ))", (const char *)&queryFormat, "dobj->skel.partBits.anim.testBit( 0 )") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, obj, params->destBuffer, 0, &outModelQuat, &v156);
  v40 = _mm128_mul_ps(outModelQuat.v, (__m128)_xmm);
  v41 = _mm_shuffle_ps(v40, v40, 210);
  v42 = _mm_shuffle_ps(v40, v40, 201);
  v139 = v40;
  v43 = _mm_shuffle_ps(v40, v40, 255);
  v44 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), v41));
  v45 = _mm128_add_ps(v44, v44);
  v142 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v45, v45, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v45, v45, 201), v41)), _mm128_add_ps(_mm128_mul_ps(v43, v45), _XMM9));
  v46 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v33, v33, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v33, v33, 201), v41));
  v47 = _mm128_add_ps(v46, v46);
  v48 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v47, v47, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v47, v47, 201), v41)), _mm128_add_ps(_mm128_mul_ps(v43, v47), v33));
  v49 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v39, v39, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v39, v39, 201), v41));
  v50 = _mm128_add_ps(v49, v49);
  v51 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v30, v30, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v30, v30, 201), v41));
  v144 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v50, v50, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v50, v50, 201), v41)), _mm128_add_ps(_mm128_mul_ps(v43, v50), v39));
  v52 = _mm128_add_ps(v51, v51);
  v53 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v52, v52, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v52, v52, 201), v41)), _mm128_add_ps(_mm128_mul_ps(v43, v52), v30));
  v54 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 210), v42), _mm128_mul_ps(_mm_shuffle_ps((__m128)_xmm, (__m128)_xmm, 201), v41));
  v141 = v48;
  v143 = v53;
  _RBX = DVARFLT_xanim_physicsGravity;
  v56 = _mm128_add_ps(v54, v54);
  v57 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v56, v56, 210), v42), _mm128_mul_ps(_mm_shuffle_ps(v56, v56, 201), v41)), _mm128_add_ps(_mm128_mul_ps(v43, v56), (__m128)_xmm));
  if ( !DVARFLT_xanim_physicsGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vbroadcastss xmm0, dword ptr [rbx+28h] }
  v59 = _mm128_mul_ps(_XMM0, v57);
  v140 = v59;
  if ( (unsigned int)v5 < endPhysicsBoneIndex )
  {
    v60 = v5;
    do
    {
      _RBX = &physicsBones[v60];
      if ( _RBX->boneIndex != 255 )
      {
        if ( _RBX->boneIndex == 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1092, ASSERT_TYPE_ASSERT, "(physicsBone->boneIndex != 254)", (const char *)&queryFormat, "physicsBone->boneIndex != UNDEFINED_BONEINDEX") )
          __debugbreak();
        v62 = _RBX->state.position.v[0];
        rotationQuat = (__m128)_RBX->state.rotationQuat;
        v150.m128_i32[3] = 0;
        v65 = v150;
        v65.m128_f32[0] = v62;
        _XMM9 = v65;
        v66 = _RBX->state.velocity.v[0];
        __asm
        {
          vinsertps xmm9, xmm9, dword ptr [rbx+30h], 10h
          vinsertps xmm9, xmm9, dword ptr [rbx+34h], 20h ; ' '
        }
        v151.m128_i32[3] = 0;
        v70 = v151;
        v70.m128_f32[0] = v66;
        _XMM7 = v70;
        v71 = _RBX->state.angularVelocity.v[0];
        __asm
        {
          vinsertps xmm7, xmm7, dword ptr [rbx+58h], 10h
          vinsertps xmm7, xmm7, dword ptr [rbx+5Ch], 20h ; ' '
        }
        v152.m128_i32[3] = 0;
        v75 = v152;
        v75.m128_f32[0] = v71;
        _XMM6 = v75;
        __asm
        {
          vinsertps xmm6, xmm6, dword ptr [rbx+64h], 10h
          vinsertps xmm6, xmm6, dword ptr [rbx+68h], 20h ; ' '
        }
        v78 = _mm_shuffle_ps(_XMM6, _XMM6, 255).m128_f32[0];
        v150 = _XMM9;
        v151 = _XMM7;
        v152 = _XMM6;
        if ( v78 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1118, ASSERT_TYPE_ASSERT, "( ( Float4ExtractW( angularVelocity ) == 0.0f ) )", "( Float4ExtractW( angularVelocity ) ) = %g", v78) )
          __debugbreak();
        _RAX = _RBX->properties;
        __asm { vbroadcastss xmm0, dword ptr [rax+3Ch] }
        v81 = _mm128_add_ps(_mm128_mul_ps(_XMM0, v59), v142);
        v82 = v48;
        if ( XAnimBonePhysics_UpdateNoise(_RBX, timeStep, &outVelocity, (vec3_t *)&outAngularVelocity) )
        {
          v83 = 1.0 / timeStep;
          XAnimGetLocalBoneTransform(params->animCalcInfo, obj, params->destBuffer, _RBX->boneIndex, &v155, &v157);
          v = v155.v;
          if ( (float)((float)((float)(outVelocity.v[0] * outVelocity.v[0]) + (float)(outVelocity.v[1] * outVelocity.v[1])) + (float)(outVelocity.v[2] * outVelocity.v[2])) > 0.0 )
          {
            relative = _RBX->properties->noise.translation.relative;
            v137.v = _XMM7;
            v138.v = v139;
            v85 = XAnimBonePhysics_CalcNoiseAcceleration(&v146, relative, &v138, (const vec4_t *)&v, &v137, &outVelocity, v83);
            _RDI = DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing;
            v87 = v85->v;
            if ( !DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsNoiseAccelSmoothing") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RDI);
            __asm { vbroadcastss xmm0, dword ptr [rdi+28h] }
            v89 = _mm128_mul_ps(_XMM0, v87);
            v53 = v143;
            v81 = _mm128_add_ps(v89, v81);
          }
          if ( (float)((float)((float)(outAngularVelocity.m128_f32[0] * outAngularVelocity.m128_f32[0]) + (float)(outAngularVelocity.m128_f32[1] * outAngularVelocity.m128_f32[1])) + (float)(outAngularVelocity.m128_f32[2] * outAngularVelocity.m128_f32[2])) > 0.0 )
          {
            v90 = _RBX->properties->noise.rotation.relative;
            v138.v = _XMM6;
            v137.v = v139;
            v91 = XAnimBonePhysics_CalcNoiseAcceleration(&v147, v90, &v137, (const vec4_t *)&v, &v138, (const vec3_t *)&outAngularVelocity, v83);
            _RDI = DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing;
            v93 = v91->v;
            if ( !DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsNoiseAccelSmoothing") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RDI);
            __asm { vbroadcastss xmm0, dword ptr [rdi+28h] }
            v82 = _mm128_add_ps(_mm128_mul_ps(_XMM0, v93), v82);
          }
        }
        v95 = DCONST_DVARFLT_xanim_physicsMaxVelocity;
        v96 = _mm128_add_ps(_mm128_mul_ps(v11, v81), _mm128_sub_ps(_XMM7, v53));
        _XMM10 = _mm128_add_ps(_mm128_mul_ps(v11, v82), _XMM6);
        _XMM11 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v144, v144, 201), _mm_shuffle_ps(_XMM9, _XMM9, 210)), _mm128_mul_ps(_mm_shuffle_ps(v144, v144, 210), _mm_shuffle_ps(_XMM9, _XMM9, 201))), v96);
        _XMM0 = _mm128_mul_ps(_XMM11, _XMM11);
        __asm
        {
          vinsertps xmm1, xmm0, xmm0, 8
          vhaddps xmm2, xmm1, xmm1
          vhaddps xmm0, xmm2, xmm2
        }
        LODWORD(v103) = _mm_sqrt_ps(_XMM0).m128_u32[0];
        if ( !DCONST_DVARFLT_xanim_physicsMaxVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxVelocity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v95);
        if ( v103 > v95->current.value )
        {
          _RDI = DCONST_DVARFLT_xanim_physicsMaxVelocity;
          if ( !DCONST_DVARFLT_xanim_physicsMaxVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxVelocity") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm { vbroadcastss xmm3, dword ptr [rdi+28h] }
          _XMM0 = _mm128_mul_ps(_XMM11, _XMM11);
          __asm
          {
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
          }
          _XMM11 = _mm128_mul_ps(_XMM3, _mm128_div_ps(_XMM11, _mm_sqrt_ps(_XMM0)));
        }
        v109 = DCONST_DVARFLT_xanim_physicsMaxAngularVelocity;
        _XMM0 = _mm128_mul_ps(_XMM10, _XMM10);
        __asm
        {
          vinsertps xmm1, xmm0, xmm0, 8
          vhaddps xmm2, xmm1, xmm1
          vhaddps xmm0, xmm2, xmm2
        }
        LODWORD(v114) = _mm_sqrt_ps(_XMM0).m128_u32[0];
        if ( !DCONST_DVARFLT_xanim_physicsMaxAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxAngularVelocity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v109);
        if ( v114 > v109->current.value )
        {
          _RDI = DCONST_DVARFLT_xanim_physicsMaxAngularVelocity;
          if ( !DCONST_DVARFLT_xanim_physicsMaxAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxAngularVelocity") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm { vbroadcastss xmm3, dword ptr [rdi+28h] }
          _XMM0 = _mm128_mul_ps(_XMM10, _XMM10);
          __asm
          {
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
          }
          _XMM10 = _mm128_mul_ps(_XMM3, _mm128_div_ps(_XMM10, _mm_sqrt_ps(_XMM0)));
        }
        v120 = _mm128_mul_ps(_XMM10, v145);
        v121 = _mm_shuffle_ps(v120, v120, 255);
        _XMM8 = _mm128_add_ps(_mm128_mul_ps(v11, _XMM11), _XMM9);
        _RBX->state.position.v[0] = _XMM8.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbx+30h], xmm8, 1
          vextractps dword ptr [rbx+34h], xmm8, 2
        }
        _XMM1 = _mm128_mul_ps(rotationQuat, v120);
        __asm
        {
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm3, xmm2, xmm2
        }
        v127 = _mm_shuffle_ps(rotationQuat, rotationQuat, 255);
        _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v127, v121), _XMM3);
        _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(rotationQuat, rotationQuat, 210), _mm_shuffle_ps(v120, v120, 201)), _mm128_mul_ps(_mm_shuffle_ps(rotationQuat, rotationQuat, 201), _mm_shuffle_ps(v120, v120, 210))), _mm128_add_ps(_mm128_mul_ps(v127, v120), _mm128_mul_ps(v121, rotationQuat)));
        __asm { vblendps xmm1, xmm2, xmm0, 7 }
        v130 = _mm128_add_ps(_XMM1, rotationQuat);
        _XMM0 = _mm128_mul_ps(v130, v130);
        __asm
        {
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm0, xmm2, xmm2
        }
        _RBX->state.rotationQuat = (vec4_t)_mm128_div_ps(v130, _mm_sqrt_ps(_XMM0));
        _RBX->state.prevPosition.v[0] = _XMM9.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbx+4Ch], xmm9, 1
          vextractps dword ptr [rbx+50h], xmm9, 2
        }
        _RBX->state.prevRotationQuat = (vec4_t)rotationQuat;
        _RBX->state.velocity.v[0] = _XMM11.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbx+58h], xmm11, 1
          vextractps dword ptr [rbx+5Ch], xmm11, 2
        }
        _RBX->state.angularVelocity.v[0] = _XMM10.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbx+64h], xmm10, 1
          vextractps dword ptr [rbx+68h], xmm10, 2
        }
        if ( ((LODWORD(_RBX->state.prevRotationQuat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.prevRotationQuat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.prevRotationQuat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.prevRotationQuat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1215, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.prevRotationQuat)[0]) && IS_FINITE((physicsBone->state.prevRotationQuat)[1]) && IS_FINITE((physicsBone->state.prevRotationQuat)[2]) && IS_FINITE((physicsBone->state.prevRotationQuat)[3]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.prevRotationQuat)[0]) && IS_FINITE((physicsBone->state.prevRotationQuat)[1]) && IS_FINITE((physicsBone->state.prevRotationQuat)[2]) && IS_FINITE((physicsBone->state.prevRotationQuat)[3])") )
          __debugbreak();
        if ( ((LODWORD(_RBX->state.rotationQuat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.rotationQuat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.rotationQuat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.rotationQuat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1216, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.rotationQuat)[0]) && IS_FINITE((physicsBone->state.rotationQuat)[1]) && IS_FINITE((physicsBone->state.rotationQuat)[2]) && IS_FINITE((physicsBone->state.rotationQuat)[3]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.rotationQuat)[0]) && IS_FINITE((physicsBone->state.rotationQuat)[1]) && IS_FINITE((physicsBone->state.rotationQuat)[2]) && IS_FINITE((physicsBone->state.rotationQuat)[3])") )
          __debugbreak();
        if ( ((LODWORD(_RBX->state.prevPosition.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.prevPosition.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.prevPosition.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1217, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.prevPosition)[0]) && IS_FINITE((physicsBone->state.prevPosition)[1]) && IS_FINITE((physicsBone->state.prevPosition)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.prevPosition)[0]) && IS_FINITE((physicsBone->state.prevPosition)[1]) && IS_FINITE((physicsBone->state.prevPosition)[2])") )
          __debugbreak();
        if ( ((LODWORD(_RBX->state.position.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.position.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.position.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1218, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.position)[0]) && IS_FINITE((physicsBone->state.position)[1]) && IS_FINITE((physicsBone->state.position)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.position)[0]) && IS_FINITE((physicsBone->state.position)[1]) && IS_FINITE((physicsBone->state.position)[2])") )
          __debugbreak();
        if ( ((LODWORD(_RBX->state.velocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.velocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.velocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1219, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.velocity)[0]) && IS_FINITE((physicsBone->state.velocity)[1]) && IS_FINITE((physicsBone->state.velocity)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.velocity)[0]) && IS_FINITE((physicsBone->state.velocity)[1]) && IS_FINITE((physicsBone->state.velocity)[2])") )
          __debugbreak();
        if ( ((LODWORD(_RBX->state.angularVelocity.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.angularVelocity.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(_RBX->state.angularVelocity.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1220, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.angularVelocity)[0]) && IS_FINITE((physicsBone->state.angularVelocity)[1]) && IS_FINITE((physicsBone->state.angularVelocity)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.angularVelocity)[0]) && IS_FINITE((physicsBone->state.angularVelocity)[1]) && IS_FINITE((physicsBone->state.angularVelocity)[2])") )
          __debugbreak();
        audioEventTimer = _RBX->state.audioEventTimer;
        v59 = v140;
        v48 = v141;
        if ( audioEventTimer )
          _RBX->state.audioEventTimer = audioEventTimer - 1;
      }
      LODWORD(v5) = v5 + 1;
      ++v60;
    }
    while ( (unsigned int)v5 < endPhysicsBoneIndex );
  }
}

/*
==============
XAnimBonePhysics_SetCurveState
==============
*/
void XAnimBonePhysics_SetCurveState(DObj *dobj, XAnimCurve *const curve, const float strengthMul, const float rateMul)
{
  DObjProceduralBones *v6; 
  DObjProceduralBones *v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  float *v13; 
  __int64 v14; 
  XAnimCurve *v15; 
  const char *name; 
  __int64 v17; 
  const char *v18; 
  signed __int64 v19; 
  char v20; 
  __int64 v21; 
  char v22; 
  XAnimCurve *v23; 
  const char *v24; 
  __int64 v25; 
  const char *v26; 
  signed __int64 v27; 
  char v28; 
  __int64 v29; 
  char v30; 
  unsigned int i; 
  __int64 v32; 
  DObjProceduralBones *v33; 
  unsigned int v35; 

  if ( !curve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 689, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 690, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v6 = DObjProceduralBones_TryLock(dobj);
    v33 = v6;
    v7 = v6;
    if ( v6 )
    {
      if ( !v6->numPhysicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 704, ASSERT_TYPE_ASSERT, "(procBones->numPhysicsBones > 0)", (const char *)&queryFormat, "procBones->numPhysicsBones > 0") )
        __debugbreak();
      v8 = 0;
      for ( i = 0; v8 < v7->numModels; i = ++v8 )
      {
        v9 = (__int64)&v7->modelInfo[v8];
        v32 = v9;
        if ( *(_BYTE *)(v9 + 21) )
        {
          v10 = 0;
          v35 = 0;
          do
          {
            v11 = (__int64)&v7->physicsBones[v10 + *(unsigned __int8 *)(v9 + 20)];
            if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 715, ASSERT_TYPE_ASSERT, "(physicsBone)", (const char *)&queryFormat, "physicsBone") )
              __debugbreak();
            if ( *(_BYTE *)(*(_QWORD *)(v11 + 8) + 192i64) )
            {
              v12 = 0i64;
              v13 = (float *)(v11 + 116);
              do
              {
                v14 = *(_QWORD *)(v11 + 8);
                v15 = *(XAnimCurve **)(v12 + v14 + 208);
                if ( v15 == curve )
                {
                  name = v15->name;
                  v17 = 0x7FFFFFFFi64;
                  v18 = curve->name;
                  if ( !v15->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                    __debugbreak();
                  v19 = name - v18;
                  do
                  {
                    v20 = v18[v19];
                    v21 = v17;
                    v22 = *v18++;
                    --v17;
                    if ( !v21 )
                      break;
                    if ( v20 != v22 )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 725, ASSERT_TYPE_ASSERT, "(I_strcmp( physicsBone->properties->noise.translation.axis[index].curve->name, curve->name ) == 0)", (const char *)&queryFormat, "I_strcmp( physicsBone->properties->noise.translation.axis[index].curve->name, curve->name ) == 0") )
                        __debugbreak();
                      break;
                    }
                  }
                  while ( v20 );
                  *(v13 - 1) = strengthMul;
                  *v13 = rateMul;
                  v14 = *(_QWORD *)(v11 + 8);
                }
                v23 = *(XAnimCurve **)(v12 + v14 + 288);
                if ( v23 == curve )
                {
                  v24 = v23->name;
                  v25 = 0x7FFFFFFFi64;
                  v26 = curve->name;
                  if ( !v23->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                    __debugbreak();
                  v27 = v24 - v26;
                  do
                  {
                    v28 = v26[v27];
                    v29 = v25;
                    v30 = *v26++;
                    --v25;
                    if ( !v29 )
                      break;
                    if ( v28 != v30 )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 733, ASSERT_TYPE_ASSERT, "(I_strcmp( physicsBone->properties->noise.rotation.axis[index].curve->name, curve->name ) == 0)", (const char *)&queryFormat, "I_strcmp( physicsBone->properties->noise.rotation.axis[index].curve->name, curve->name ) == 0") )
                        __debugbreak();
                      break;
                    }
                  }
                  while ( v28 );
                  v13[8] = strengthMul;
                  v13[9] = rateMul;
                }
                v12 += 24i64;
                v13 += 3;
              }
              while ( v12 < 72 );
              v10 = v35;
              v7 = v33;
            }
            v35 = ++v10;
            v9 = v32;
          }
          while ( v10 < *(unsigned __int8 *)(v32 + 21) );
          v8 = i;
        }
      }
      DObjProceduralBones_Unlock(dobj);
    }
  }
}

/*
==============
XAnimBonePhysics_SetDynamicBoneTransforms
==============
*/

void __fastcall XAnimBonePhysics_SetDynamicBoneTransforms(XAnimProcNodeCalcParams *params, const XAnimPhysicsBone *physicsBones, unsigned int numPhysicsBones, double lerpFraction)
{
  const dvar_t *v8; 
  XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  XAnimCalcAnimInfo *animCalcInfo; 
  __m128 v15; 
  unsigned int v16; 
  float *v17; 
  unsigned __int8 v18; 
  unsigned __int64 v19; 
  const DObj *v20; 
  bool v21; 
  float v22; 
  __m128 v23; 
  const dvar_t *v24; 
  __m128 v26; 
  __m128 v30; 
  __m128 v34; 
  __m128 v40; 
  __m128 v44; 
  unsigned __int16 v45; 
  const float4 *v46; 
  const float4 *v47; 
  float v48; 
  bool v49; 
  __m128 v51; 
  __int64 v54; 
  __m128 v55; 
  __m128 v56; 
  float v57; 
  __m128 v58; 
  __m128 v59; 
  __m128 v60; 
  __m128 v61; 
  __m128 v62; 
  __m128 v63; 
  __m128 v64; 
  __m128 v65; 
  __m128 v66; 
  __m128 v67; 
  __m128 v68; 
  __m128 v69; 
  __m128 v70; 
  __m128 v71; 
  __m128 v72; 
  __m128 v73; 
  __m128 v74; 
  __m128 v79; 
  __m128 v82; 
  __m128 v83; 
  __m128 v84; 
  __m128 v85; 
  __m128 v86; 
  __m128 v87; 
  __m128 v88; 
  __m128 v89; 
  __m128 v90; 
  __m128 v92; 
  __m128 v93; 
  __int128 v95; 
  __m128 v100; 
  __m128 v101; 
  __m128 v102; 
  __m128 v103; 
  __m128 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v109; 
  __m128 v110; 
  __m128 v111; 
  __m128 v112; 
  __m128 v113; 
  __m128 v114; 
  __m128 v115; 
  __m128 v116; 
  __m128 v; 
  __m128 v119; 
  __m128 v120; 
  __m128 v121; 
  __m128 v127; 
  __m128 v128; 
  int v129; 
  const DObj *v130; 
  __int64 v131; 
  __int64 v132; 
  DObjAnimMat *rotTransArray; 
  DObjAnimMat *v134; 
  const float4 *fmt; 
  float4 *outModelTranslation; 
  __int64 v137; 
  __m128 v138; 
  float4 v139; 
  __m128 v140; 
  __m128 v141; 
  __m128 v142; 
  __m128 v143; 
  __m128 v144; 
  __int128 v145; 
  float4 outModelQuat; 
  float4 v147; 
  float4 v148; 
  float4 v149; 

  _XMM6 = *(_OWORD *)&lerpFraction;
  if ( !params->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2441, ASSERT_TYPE_ASSERT, "(params->obj != 0)", (const char *)&queryFormat, "params->obj != NULL") )
    __debugbreak();
  if ( !physicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2442, ASSERT_TYPE_ASSERT, "(physicsBones != 0)", (const char *)&queryFormat, "physicsBones != NULL") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_xanim_physicsEnableInterpolation;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableInterpolation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableInterpolation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  destBuffer = params->destBuffer;
  obj = params->obj;
  animCalcInfo = params->animCalcInfo;
  _XMM0 = v8->current.color[0];
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm12, xmm6, xmm1, xmm2
  }
  v15 = _mm_shuffle_ps(_XMM12, _XMM12, 0);
  v140 = v15;
  XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, 0, &outModelQuat, &v149);
  v16 = 1;
  if ( numPhysicsBones > 1 )
  {
    v17 = &physicsBones[1].state.prevPosition.v[2];
    do
    {
      if ( *((_WORD *)v17 - 40) != 255 )
      {
        v18 = *((_BYTE *)v17 - 63);
        if ( v18 != 0xFF && v18 >= v16 )
        {
          outModelTranslation = (float4 *)"physicsBone->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX || (physicsBone->parentPhysicsBoneIndex < physicsBoneIndex)";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2472, ASSERT_TYPE_ASSERT, "(physicsBone->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX || (physicsBone->parentPhysicsBoneIndex < physicsBoneIndex))", (const char *)&queryFormat) )
            __debugbreak();
        }
        v19 = *((unsigned __int16 *)v17 - 40);
        v20 = params->obj;
        if ( *((unsigned __int16 *)v17 - 40) >> 15 )
        {
          v21 = (v20->skel.partBits.anim.array[7] & 2) != 0;
        }
        else
        {
          if ( (unsigned int)v19 >= 0x100 )
          {
            LODWORD(v137) = 256;
            LODWORD(outModelTranslation) = *((unsigned __int16 *)v17 - 40);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outModelTranslation, v137) )
              __debugbreak();
          }
          v21 = ((0x80000000 >> (v19 & 0x1F)) & v20->skel.partBits.anim.array[v19 >> 5]) != 0;
        }
        if ( !v21 )
        {
          outModelTranslation = (float4 *)"XAnimTestPartBit( &params->obj->skel.partBits.anim, physicsBone->boneIndex )";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2475, ASSERT_TYPE_ASSERT, "(XAnimTestPartBit( &params->obj->skel.partBits.anim, physicsBone->boneIndex ))", (const char *)&queryFormat) )
            __debugbreak();
        }
        v22 = *(v17 - 2);
        v23 = *(__m128 *)(v17 - 6);
        v24 = DCONST_DVARBOOL_xanim_physicsMaintainBindPoseTranslation;
        v142.m128_i32[3] = 0;
        v143.m128_i32[3] = 0;
        v144.m128_i32[3] = 0;
        v26 = v142;
        v26.m128_f32[0] = v22;
        _XMM7 = v26;
        __asm
        {
          vinsertps xmm7, xmm7, dword ptr [rbx-4], 10h
          vinsertps xmm7, xmm7, dword ptr [rbx], 20h ; ' '
        }
        v30 = v143;
        v30.m128_f32[0] = *(v17 - 9);
        _XMM8 = v30;
        __asm
        {
          vinsertps xmm8, xmm8, dword ptr [rbx-20h], 10h
          vinsertps xmm8, xmm8, dword ptr [rbx-1Ch], 20h ; ' '
        }
        v34 = v144;
        v34.m128_f32[0] = v17[26];
        _XMM9 = v34;
        _XMM0 = _mm128_mul_ps(v23, *(__m128 *)(v17 - 13));
        __asm
        {
          vinsertps xmm9, xmm9, dword ptr [rbx+6Ch], 10h
          vinsertps xmm9, xmm9, dword ptr [rbx+70h], 20h ; ' '
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
        }
        v40 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v15, (__m128)(_XMM0 & *(_OWORD *)&g_negativeZero.v | _xmm)), *(__m128 *)(v17 - 13)), _mm128_mul_ps(_mm128_sub_ps(g_one.v, v15), v23));
        _XMM1 = _mm128_mul_ps(v40, v40);
        __asm
        {
          vhaddps xmm0, xmm1, xmm1
          vhaddps xmm0, xmm0, xmm0
        }
        v44 = _mm128_div_ps(v40, _mm_sqrt_ps(_XMM0));
        v138 = v44;
        v142 = _XMM7;
        v143 = _XMM8;
        v144 = _XMM9;
        if ( !DCONST_DVARBOOL_xanim_physicsMaintainBindPoseTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaintainBindPoseTranslation") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        if ( !v24->current.enabled || (v45 = *((_WORD *)v17 - 39), v45 == 255) )
        {
          v110 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM8, _XMM7), v15), _XMM7);
          v111 = _mm_shuffle_ps(v44, v44, 201);
          v112 = _mm_shuffle_ps(v44, v44, 210);
          v113 = _mm_shuffle_ps(v44, v44, 255);
          v114 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), v111), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), v112));
          v115 = _mm128_add_ps(v114, v114);
          v116 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v115, v115, 210), v111), _mm128_mul_ps(_mm_shuffle_ps(v115, v115, 201), v112)), _mm128_add_ps(_mm128_mul_ps(v113, v115), _XMM9)), v110);
          v = outModelQuat.v;
          _XMM2 = _mm128_mul_ps(outModelQuat.v, v138);
          v119 = _mm_shuffle_ps(v, v, 255);
          v120 = _mm_shuffle_ps(v, v, 210);
          v121 = _mm_shuffle_ps(v, v, 201);
          __asm
          {
            vinsertps xmm0, xmm2, xmm2, 8
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
          }
          _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v113, v119), _XMM2);
          _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(v121, v112), _mm128_mul_ps(v120, v111)), _mm128_add_ps(_mm128_mul_ps(outModelQuat.v, v113), _mm128_mul_ps(v119, v138)));
          __asm { vblendps xmm7, xmm2, xmm0, 7 }
          v127 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v116, v116, 210), v121), _mm128_mul_ps(_mm_shuffle_ps(v116, v116, 201), v120));
          v128 = _mm128_add_ps(v127, v127);
          _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v128, v128, 210), v121), _mm128_mul_ps(_mm_shuffle_ps(v128, v128, 201), v120)), _mm128_add_ps(_mm128_mul_ps(v119, v128), v116)), v149.v);
          v139.v = _XMM7;
        }
        else
        {
          XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v45, &v147, &v148);
          v48 = v17[29];
          v49 = (*(_BYTE *)(v17 - 16) & 0x20) == 0;
          v141.m128_i32[3] = 0;
          v51 = v141;
          v51.m128_f32[0] = v48;
          _XMM6 = v51;
          __asm
          {
            vinsertps xmm6, xmm6, dword ptr [rbx+78h], 10h
            vinsertps xmm6, xmm6, dword ptr [rbx+7Ch], 20h ; ' '
          }
          v141 = _XMM6;
          if ( v49 )
          {
            v104 = v147.v;
            v105 = _mm_shuffle_ps(v104, v104, 210);
            v106 = _mm_shuffle_ps(v104, v104, 201);
            v107 = _mm_shuffle_ps(v104, v104, 255);
            v108 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 210), v106), _mm128_mul_ps(_mm_shuffle_ps(_XMM6, _XMM6, 201), v105));
            v109 = _mm128_add_ps(v108, v108);
            _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v109, v109, 210), v106), _mm128_mul_ps(_mm_shuffle_ps(v109, v109, 201), v105)), _mm128_add_ps(_mm128_mul_ps(v107, v109), _XMM6)), v148.v);
          }
          else
          {
            v54 = *((_QWORD *)v17 - 9);
            v47 = NULL;
            v55 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM8, _XMM7), v15), _XMM7);
            v56 = *(__m128 *)(v54 + 68);
            v57 = *(float *)(v54 + 140);
            v58 = _mm_shuffle_ps(v44, v44, 210);
            v59 = _mm_shuffle_ps(v44, v44, 201);
            v60 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), v59), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), v58));
            v61 = _mm128_add_ps(v60, v60);
            v62 = outModelQuat.v;
            v63 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v61, v61, 210), v59), _mm128_mul_ps(_mm_shuffle_ps(v61, v61, 201), v58)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v44, v44, 255), v61), _XMM9));
            v64 = _mm_shuffle_ps(v62, v62, 201);
            v65 = _mm_shuffle_ps(v62, v62, 255);
            v66 = _mm128_add_ps(v55, v63);
            v67 = _mm_shuffle_ps(v62, v62, 210);
            v68 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v66, v66, 210), v64), _mm128_mul_ps(_mm_shuffle_ps(v66, v66, 201), v67));
            v69 = _mm128_add_ps(v68, v68);
            v70 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v69, v69, 210), v64), _mm128_mul_ps(_mm_shuffle_ps(v69, v69, 201), v67)), _mm128_add_ps(_mm128_mul_ps(v65, v69), v66)), v149.v);
            v71 = v147.v;
            v72 = _mm_shuffle_ps(v71, v71, 201);
            v73 = _mm_shuffle_ps(v71, v71, 210);
            v74 = _mm_shuffle_ps(v71, v71, 255);
            _XMM0 = _mm128_mul_ps(v147.v, v56);
            __asm
            {
              vinsertps xmm1, xmm0, xmm0, 8
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm3, xmm2, xmm2
            }
            v79 = _mm_shuffle_ps(v56, v56, 255);
            _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v79, v74), _XMM3);
            _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v56, v56, 210), v72), _mm128_mul_ps(_mm_shuffle_ps(v56, v56, 201), v73)), _mm128_add_ps(_mm128_mul_ps(v147.v, v79), _mm128_mul_ps(v56, v74)));
            __asm { vblendps xmm11, xmm2, xmm0, 7 }
            v82 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v141, v141, 210), v72), _mm128_mul_ps(_mm_shuffle_ps(v141, v141, 201), v73));
            v83 = _mm128_add_ps(v82, v82);
            HIDWORD(v145) = 0;
            v84 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v83, v83, 210), v72), _mm128_mul_ps(_mm_shuffle_ps(v83, v83, 201), v73)), _mm128_add_ps(_mm128_mul_ps(v74, v83), v141)), v148.v);
            v85 = _mm128_mul_ps(_XMM11, (__m128)_xmm);
            v86 = _mm_shuffle_ps(v85, v85, 210);
            v87 = _mm_shuffle_ps(v85, v85, 201);
            v88 = _mm_shuffle_ps(v85, v85, 255);
            v89 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v84, v84, 210), v87), _mm128_mul_ps(_mm_shuffle_ps(v84, v84, 201), v86));
            v90 = _mm128_add_ps(v89, v89);
            _XMM9 = 0i64;
            v92 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v70, v70, 210), v87), _mm128_mul_ps(_mm_shuffle_ps(v70, v70, 201), v86));
            v93 = _mm128_add_ps(v92, v92);
            v95 = v145;
            *(float *)&v95 = v57;
            _XMM0 = v95;
            __asm
            {
              vinsertps xmm0, xmm0, dword ptr [rax+90h], 10h
              vinsertps xmm0, xmm0, dword ptr [rax+94h], 20h ; ' '
            }
            v145 = _XMM0;
            __asm { vcmpneqps xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one }
            _mm128_add_ps(_mm128_sub_ps((__m128)0i64, _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v90, v90, 210), v87), _mm128_mul_ps(_mm_shuffle_ps(v90, v90, 201), v86)), _mm128_add_ps(_mm128_mul_ps(v88, v90), v84))), _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v93, v93, 210), v87), _mm128_mul_ps(_mm_shuffle_ps(v93, v93, 201), v86)), _mm128_add_ps(_mm128_mul_ps(v88, v93), v70)));
            __asm { vblendvps xmm7, xmm9, xmm2, xmm0 }
            v100 = _mm_shuffle_ps(_XMM11, _XMM11, 201);
            v101 = _mm_shuffle_ps(_XMM11, _XMM11, 210);
            v102 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 210), v100), _mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 201), v101));
            v103 = _mm128_add_ps(v102, v102);
            _mm128_add_ps(v84, _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v103, v103, 210), v100), _mm128_mul_ps(_mm_shuffle_ps(v103, v103, 201), v101)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 255), v103), _XMM7)));
          }
          Float4QuatMultiply(v47, v46, &v139);
        }
        XAnimSetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, *((unsigned __int16 *)v17 - 40), fmt, outModelTranslation, params->weightScale);
        v129 = *((unsigned __int16 *)v17 - 40);
        v130 = params->obj;
        if ( (unsigned int)(v129 - 254) <= 1 )
        {
          outModelTranslation = (float4 *)"boneIndex != NO_BONEINDEX && boneIndex != UNDEFINED_BONEINDEX";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 278, ASSERT_TYPE_ASSERT, "(boneIndex != 255 && boneIndex != 254)", (const char *)&queryFormat) )
            __debugbreak();
        }
        v131 = v129 & 0x7FFF;
        if ( (unsigned int)v131 >= DObjTotalNumBones(v130) )
        {
          LODWORD(v137) = DObjTotalNumBones(v130);
          LODWORD(outModelTranslation) = v129 & 0x7FFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex & ((1 << 15) - 1) ) < (unsigned)( DObjTotalNumBones( obj ) )", "boneIndex & CLIENT_BONEINDEX_MASK doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", outModelTranslation, v137) )
            __debugbreak();
        }
        if ( (v129 & 0x8000) != 0 && (int)v131 < DObjNumBones(v130) )
        {
          outModelTranslation = (float4 *)"!(boneIndex & CLIENT_BONEINDEX_FLAG) || ((boneIndex & CLIENT_BONEINDEX_MASK) >= DObjNumBones( obj ))";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 280, ASSERT_TYPE_ASSERT, "(!(boneIndex & (1 << 15)) || ((boneIndex & ((1 << 15) - 1)) >= DObjNumBones( obj )))", (const char *)&queryFormat) )
            __debugbreak();
        }
        v132 = v131;
        rotTransArray = params->destBuffer->rotTransArray;
        if ( (LODWORD(rotTransArray[v132].quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotTransArray[v132].quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotTransArray[v132].quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotTransArray[v132].quat.v[3]) & 0x7F800000) == 2139095040 )
        {
          outModelTranslation = (float4 *)"IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[0]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[1]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[2]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[3])";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2578, ASSERT_TYPE_ASSERT, "(IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[0]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[1]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[2]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[3]))", (const char *)&queryFormat) )
            __debugbreak();
        }
        v134 = params->destBuffer->rotTransArray;
        if ( (LODWORD(v134[v132].trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v134[v132].trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v134[v132].trans.v[2]) & 0x7F800000) == 2139095040 )
        {
          outModelTranslation = (float4 *)"IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[0]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[1]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[2])";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2579, ASSERT_TYPE_ASSERT, "(IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[0]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[1]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[2]))", (const char *)&queryFormat) )
            __debugbreak();
        }
        v15 = v140;
      }
      ++v16;
      v17 += 66;
    }
    while ( v16 < numPhysicsBones );
  }
}

/*
==============
XAnimBonePhysics_Settle
==============
*/
void XAnimBonePhysics_Settle(const XAnimBonePhysicsUpdateContext *context, XAnimProcNodeCalcParams *params)
{
  const XAnimBonePhysicsUpdateContext *v3; 
  DObjProceduralBones *procBones; 
  const dvar_t *v5; 
  float v6; 
  const dvar_t *v7; 
  int integer; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  bool enabled; 
  unsigned int v12; 
  DObjProceduralBones *v13; 
  unsigned __int8 *v14; 
  unsigned __int8 v15; 
  unsigned int firstPhysicsBoneIndex; 
  unsigned int endPhysicsBoneIndex; 
  int v18; 
  _QWORD *p_z; 
  __int64 v20; 
  DObjProceduralBones *v21; 
  XAnimBonePhysicsUpdateContext contexta; 
  bool v24; 

  v3 = context;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2900, ASSERT_TYPE_ASSERT, "(context != 0)", (const char *)&queryFormat, "context != NULL") )
    __debugbreak();
  if ( !v3->procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2901, ASSERT_TYPE_ASSERT, "(context->procBones != 0)", (const char *)&queryFormat, "context->procBones != NULL") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF80FFFF, "XAnimBonePhysics_Settle");
  procBones = v3->procBones;
  v5 = DCONST_DVARFLT_xanim_physicsSettleVelocityThreshold;
  if ( !DCONST_DVARFLT_xanim_physicsSettleVelocityThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsSettleVelocityThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.value * v5->current.value;
  contexta = *v3;
  if ( procBones->settlingEnabled )
  {
    v7 = DCONST_DVARINT_xanim_physicsMaxSettleIterations;
    if ( !DCONST_DVARINT_xanim_physicsMaxSettleIterations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxSettleIterations") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    integer = v7->current.integer;
  }
  else
  {
    integer = 0;
  }
  v9 = DCONST_DVARINT_xanim_physicsMaxSettlePositionSolverIterations;
  if ( !DCONST_DVARINT_xanim_physicsMaxSettlePositionSolverIterations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxSettlePositionSolverIterations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  contexta.maxPositionSolverIterations = v9->current.unsignedInt;
  v10 = DCONST_DVARBOOL_xanim_physicsForceSettle;
  if ( !DCONST_DVARBOOL_xanim_physicsForceSettle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsForceSettle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  enabled = v10->current.enabled;
  v24 = enabled;
  v12 = 0;
  if ( procBones->numModels )
  {
    v13 = contexta.procBones;
    do
    {
      v14 = (unsigned __int8 *)&procBones->modelInfo[v12];
      v15 = v14[21];
      if ( v15 && (v14[26] || enabled) )
      {
        v14[26] = 0;
        firstPhysicsBoneIndex = v14[20];
        contexta.firstPhysicsBoneIndex = firstPhysicsBoneIndex;
        endPhysicsBoneIndex = firstPhysicsBoneIndex + v15;
        contexta.endPhysicsBoneIndex = endPhysicsBoneIndex;
        v18 = 0;
        if ( integer > 0 )
        {
          do
          {
            XAnimBonePhysics_Simulate(&contexta, params);
            if ( XAnimBonePhysics_FindMaxBoneVelocitySquared(&contexta) < v6 )
              break;
            ++v18;
          }
          while ( v18 < integer );
          endPhysicsBoneIndex = contexta.endPhysicsBoneIndex;
          firstPhysicsBoneIndex = contexta.firstPhysicsBoneIndex;
          v13 = contexta.procBones;
        }
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2865, ASSERT_TYPE_ASSERT, "(context->procBones != 0)", (const char *)&queryFormat, "context->procBones != NULL") )
          __debugbreak();
        if ( firstPhysicsBoneIndex < endPhysicsBoneIndex )
        {
          p_z = (_QWORD *)&v13->physicsBones[firstPhysicsBoneIndex].state.velocity.z;
          v20 = endPhysicsBoneIndex - firstPhysicsBoneIndex;
          do
          {
            *(p_z - 1) = 0i64;
            *p_z = 0i64;
            p_z[1] = 0i64;
            p_z += 33;
            --v20;
          }
          while ( v20 );
        }
        enabled = v24;
      }
      ++v12;
    }
    while ( v12 < procBones->numModels );
    v3 = context;
  }
  v21 = v3->procBones;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 428, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  v21->physicsState.numAudioEvents = 0;
  Sys_ProfEndNamedEvent();
}

/*
==============
XAnimBonePhysics_Simulate
==============
*/
void XAnimBonePhysics_Simulate(XAnimBonePhysicsUpdateContext *context, XAnimProcNodeCalcParams *params)
{
  DObjProceduralBones *procBones; 
  int Collisions; 
  const dvar_t *v6; 
  XAnimCollisionContact *v7; 
  const dvar_t *v8; 
  unsigned int numPhysicsBones; 
  XAnimPhysicsBone *physicsBones; 
  __int64 unsignedInt; 
  __int64 v12; 
  XAnimCollisionContact *v13; 
  __int64 v14; 
  XAnimCollisionContact *contacts; 
  __int64 numContacts; 

  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2826, ASSERT_TYPE_ASSERT, "(context != 0)", (const char *)&queryFormat, "context != NULL") )
    __debugbreak();
  if ( !context->dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2827, ASSERT_TYPE_ASSERT, "(context->dobj != 0)", (const char *)&queryFormat, "context->dobj != NULL") )
    __debugbreak();
  if ( !context->procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2828, ASSERT_TYPE_ASSERT, "(context->procBones != 0)", (const char *)&queryFormat, "context->procBones != NULL") )
    __debugbreak();
  procBones = context->procBones;
  if ( context->firstPhysicsBoneIndex >= procBones->numPhysicsBones )
  {
    LODWORD(contacts) = context->firstPhysicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2833, ASSERT_TYPE_ASSERT, "(unsigned)( context->firstPhysicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "context->firstPhysicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", contacts, procBones->numPhysicsBones) )
      __debugbreak();
  }
  if ( context->endPhysicsBoneIndex > procBones->numPhysicsBones )
  {
    LODWORD(numContacts) = procBones->numPhysicsBones;
    LODWORD(contacts) = context->endPhysicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2834, ASSERT_TYPE_ASSERT, "( context->endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "context->endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", contacts, numContacts) )
      __debugbreak();
  }
  XAnimBonePhysics_Integrate(params, procBones, context->firstPhysicsBoneIndex, context->endPhysicsBoneIndex, context->timeStep);
  Collisions = 0;
  XAnimBonePhysics_SolvePositionConstraints(procBones, context->firstPhysicsBoneIndex, context->endPhysicsBoneIndex, 1, context->pinConstraintPoints, context->contacts, 0);
  v6 = DCONST_DVARBOOL_xanim_physicsEnableCollisions;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableCollisions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableCollisions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    Collisions = XAnimBonePhysics_FindCollisions(procBones, context->firstPhysicsBoneIndex, context->endPhysicsBoneIndex, context->collidableBoneCollisionShapes, context->collidableBoneTransforms, context->contacts, context->maxContacts);
    XAnimBonePhysics_GenerateAudioEvents(context, Collisions);
  }
  XAnimBonePhysics_SolvePositionConstraints(procBones, context->firstPhysicsBoneIndex, context->endPhysicsBoneIndex, context->maxPositionSolverIterations, context->pinConstraintPoints, context->contacts, Collisions);
  XAnimBonePhysics_UpdateVelocities(procBones, context->firstPhysicsBoneIndex, context->endPhysicsBoneIndex, context->timeStep);
  v7 = context->contacts;
  v8 = DCONST_DVARINT_xanim_physicsMaxVelocitySolverIterations;
  numPhysicsBones = procBones->numPhysicsBones;
  physicsBones = procBones->physicsBones;
  if ( !DCONST_DVARINT_xanim_physicsMaxVelocitySolverIterations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxVelocitySolverIterations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  unsignedInt = v8->current.unsignedInt;
  if ( !physicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2414, ASSERT_TYPE_ASSERT, "(physicsBones != 0)", (const char *)&queryFormat, "physicsBones != NULL") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2415, ASSERT_TYPE_ASSERT, "(contacts != 0)", (const char *)&queryFormat, "contacts != NULL") )
    __debugbreak();
  if ( Collisions && (int)unsignedInt > 0 )
  {
    v12 = unsignedInt;
    do
    {
      if ( Collisions > 0 )
      {
        v13 = v7;
        v14 = (unsigned int)Collisions;
        do
        {
          XAnimBonePhysics_SolveWorldContactVelocityConstraint(v13++, physicsBones, numPhysicsBones);
          --v14;
        }
        while ( v14 );
      }
      --v12;
    }
    while ( v12 );
  }
}

/*
==============
XAnimBonePhysics_SolveCustomPinConstraints
==============
*/
void XAnimBonePhysics_SolveCustomPinConstraints(DObjProceduralBones *procBones, const vec3_t *pinConstraintPoints)
{
  unsigned __int8 numModels; 
  XAnimPhysicsBone *physicsBones; 
  __int64 v5; 
  __int64 v6; 
  DObjProceduralBonesModelInfo *modelInfo; 
  unsigned int numPinConstraints; 
  unsigned int v9; 
  __int64 p_dynamicBoneIndexB; 
  unsigned int v11; 
  XAnimPhysicsBone *v12; 
  int v13; 
  unsigned int v14; 
  XAnimPhysicsBone *v15; 
  __int64 strength; 
  vec4_t *constraintQuat; 
  __int64 v18; 
  __int64 v19; 
  XAnimPhysicsBone *v21; 

  numModels = procBones->numModels;
  physicsBones = procBones->physicsBones;
  v21 = physicsBones;
  if ( numModels )
  {
    v5 = 0i64;
    v6 = numModels;
    v19 = numModels;
    do
    {
      modelInfo = procBones->modelInfo;
      numPinConstraints = modelInfo[v5].numPinConstraints;
      if ( modelInfo[v5].numPinConstraints )
      {
        if ( !modelInfo[v5].dynamicBonesAsset )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2240, ASSERT_TYPE_ASSERT, "(modelInfo->dynamicBonesAsset)", (const char *)&queryFormat, "modelInfo->dynamicBonesAsset") )
            __debugbreak();
          v6 = v19;
        }
        v9 = 0;
        if ( numPinConstraints )
        {
          p_dynamicBoneIndexB = (__int64)&modelInfo[v5].dynamicBonesAsset->customPinConstraints->dynamicBoneIndexB;
          do
          {
            if ( *(int *)p_dynamicBoneIndexB < 0 )
            {
              LODWORD(v18) = *(_DWORD *)p_dynamicBoneIndexB;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2248, ASSERT_TYPE_ASSERT, "( pin->dynamicBoneIndexB ) >= ( 0 )", "%s >= %s\n\t%i, %i", "pin->dynamicBoneIndexB", "0", v18, 0i64) )
                __debugbreak();
            }
            v11 = *(_DWORD *)p_dynamicBoneIndexB + modelInfo[v5].firstPhysicsBoneIndex;
            if ( v11 >= procBones->numPhysicsBones )
            {
              LODWORD(constraintQuat) = procBones->numPhysicsBones;
              LODWORD(strength) = *(_DWORD *)p_dynamicBoneIndexB + modelInfo[v5].firstPhysicsBoneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2250, ASSERT_TYPE_ASSERT, "(unsigned)( dynamicBoneIndexB ) < (unsigned)( procBones->numPhysicsBones )", "dynamicBoneIndexB doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", strength, constraintQuat) )
                __debugbreak();
            }
            v12 = &physicsBones[v11];
            if ( v12->boneIndex != 255 )
            {
              v13 = *(_DWORD *)(p_dynamicBoneIndexB - 4);
              if ( v13 < 0 )
              {
                XAnimBonePhysics_SolvePinConstraint_Internal_1_1_0_(NULL, v12, &pinConstraintPoints[v9 + modelInfo[v5].firstPinConstraintIndex], (const vec3_t *)(p_dynamicBoneIndexB + 20), *(float *)(p_dynamicBoneIndexB + 32), *(float *)(p_dynamicBoneIndexB + 36), NULL);
              }
              else
              {
                v14 = v13 + modelInfo[v5].firstPhysicsBoneIndex;
                if ( v14 >= procBones->numPhysicsBones )
                {
                  LODWORD(constraintQuat) = procBones->numPhysicsBones;
                  LODWORD(strength) = v13 + modelInfo[v5].firstPhysicsBoneIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2260, ASSERT_TYPE_ASSERT, "(unsigned)( dynamicBoneIndexA ) < (unsigned)( procBones->numPhysicsBones )", "dynamicBoneIndexA doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", strength, constraintQuat) )
                    __debugbreak();
                }
                v15 = &v21[v14];
                if ( v15->boneIndex != 255 )
                  XAnimBonePhysics_SolvePinConstraint_Internal_0_1_0_(v15, v12, (const vec3_t *)(p_dynamicBoneIndexB + 8), (const vec3_t *)(p_dynamicBoneIndexB + 20), *(float *)(p_dynamicBoneIndexB + 32), *(float *)(p_dynamicBoneIndexB + 36), NULL);
              }
            }
            physicsBones = v21;
            ++v9;
            p_dynamicBoneIndexB += 44i64;
          }
          while ( v9 < numPinConstraints );
          v6 = v19;
        }
      }
      ++v5;
      v19 = --v6;
    }
    while ( v6 );
  }
}

/*
==============
XAnimBonePhysics_SolvePositionConstraints
==============
*/
void XAnimBonePhysics_SolvePositionConstraints(DObjProceduralBones *procBones, unsigned int firstPhysicsBoneIndex, unsigned int endPhysicsBoneIndex, int maxIterations, const vec3_t *pinConstraintPoints, XAnimCollisionContact *contacts, int numContacts)
{
  DObjProceduralBones *v7; 
  XAnimCollisionContact *v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  XAnimPhysicsBone *physicsBones; 
  const dvar_t *v13; 
  bool enabled; 
  const dvar_t *v15; 
  bool v16; 
  const dvar_t *v17; 
  int v18; 
  __int64 v19; 
  __int64 p_flags; 
  const vec3_t *v21; 
  unsigned __int8 v22; 
  XAnimPhysicsBone *v23; 
  char v24; 
  XAnimCollisionContact *v25; 
  __int64 v26; 
  __int64 v27; 
  const vec3_t *v28; 
  unsigned __int8 v29; 
  vec4_t *v30; 
  XAnimPhysicsBone *v31; 
  vec4_t *p_rotationQuat; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  vec4_t *v42; 
  float *v43; 
  float v44; 
  float v45; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  unsigned __int8 v52; 
  XAnimPhysicsBone *v53; 
  float v54; 
  const dvar_t *v55; 
  __int64 v56; 
  __int64 p_properties; 
  XAnimPhysicsBone *v58; 
  bool v59; 
  __int64 minAngle; 
  bool v61; 
  bool v62; 
  bool v63; 
  __int64 v67; 
  vec4_t constraintQuat; 
  vec3_t bodyPinPointA; 
  vec3_t bodyPinPointB; 

  v7 = procBones;
  v8 = contacts;
  v9 = endPhysicsBoneIndex;
  v10 = firstPhysicsBoneIndex;
  v11 = (unsigned int)maxIterations;
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2281, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  if ( !contacts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2282, ASSERT_TYPE_ASSERT, "(contacts != 0)", (const char *)&queryFormat, "contacts != NULL") )
    __debugbreak();
  physicsBones = v7->physicsBones;
  if ( v9 > v7->numPhysicsBones )
  {
    LODWORD(minAngle) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2286, ASSERT_TYPE_ASSERT, "( endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", minAngle, v7->numPhysicsBones) )
      __debugbreak();
  }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2287, ASSERT_TYPE_ASSERT, "( firstPhysicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "firstPhysicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", 0, 1) )
    __debugbreak();
  v13 = DCONST_DVARBOOL_xanim_physicsEnableSwingLimits;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableSwingLimits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableSwingLimits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  enabled = v13->current.enabled;
  v15 = DCONST_DVARBOOL_xanim_physicsEnableTwistLimits;
  v61 = enabled;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableTwistLimits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableTwistLimits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  v16 = v15->current.enabled;
  v17 = DCONST_DVARBOOL_xanim_physicsEnableSprings;
  v63 = v16;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableSprings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableSprings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  v62 = v17->current.enabled;
  if ( (int)v11 > 0 )
  {
    v18 = numContacts;
    v67 = v11;
    do
    {
      if ( v10 < v9 )
      {
        v19 = v9 - v10;
        p_flags = (__int64)&physicsBones[v10].flags;
        do
        {
          if ( *(_WORD *)(p_flags - 16) != 255 && (*(_BYTE *)p_flags & 3) != 0 )
          {
            v21 = *(const vec3_t **)(p_flags - 8);
            if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2308, ASSERT_TYPE_ASSERT, "(properties != 0)", (const char *)&queryFormat, "properties != NULL") )
              __debugbreak();
            v22 = *(_BYTE *)(p_flags + 1);
            if ( v22 == 0xFF )
              v23 = NULL;
            else
              v23 = &physicsBones[v22];
            v24 = *(_BYTE *)p_flags;
            if ( (*(_BYTE *)p_flags & 1) != 0 && v61 )
            {
              XAnimBonePhysics_SolveSwingLimitConstraint((XAnimPhysicsBone *)(p_flags - 16), v23, v21 + 3, v21[5].v[1]);
              v24 = *(_BYTE *)p_flags;
            }
            if ( (v24 & 2) != 0 && v16 )
              XAnimBonePhysics_SolveTwistLimitConstraint((XAnimPhysicsBone *)(p_flags - 16), v23, v21 + 3, (const vec3_t *)(p_flags + 220), (const vec3_t *)(p_flags + 232), v21[4].v[0], v21[4].v[1]);
          }
          p_flags += 264i64;
          --v19;
        }
        while ( v19 );
        v10 = firstPhysicsBoneIndex;
        v7 = procBones;
        v9 = endPhysicsBoneIndex;
        v18 = numContacts;
        v8 = contacts;
      }
      if ( v18 > 0 )
      {
        v25 = v8;
        v26 = (unsigned int)v18;
        do
        {
          XAnimBonePhysics_SolveWorldContactPositionConstraint(v25++, physicsBones, v7->numPhysicsBones);
          --v26;
        }
        while ( v26 );
      }
      if ( v7->numCustomPinConstraints )
        XAnimBonePhysics_SolveCustomPinConstraints(v7, pinConstraintPoints);
      if ( v10 < v9 )
      {
        v27 = v9 - v10;
        v28 = (const vec3_t *)&physicsBones[v10].parentBoneQuat.xyz.v[1];
        do
        {
          if ( LOWORD(v28[-18].y) != 255 )
          {
            if ( (LOBYTE(v28[-17].z) & 0x20) != 0 && v62 )
            {
              v29 = BYTE1(v28[-17].z);
              if ( v29 == 0xFF )
              {
                v42 = (vec4_t *)(*(_QWORD *)v28[-17].v + 68i64);
                if ( v42 == &constraintQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
                  __debugbreak();
                v43 = &v28[-1].v[2];
                if ( (vec4_t *)&v28[-1].z == &constraintQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
                  __debugbreak();
                v44 = v28->v[2];
                v45 = v42->v[0];
                v46 = v42->v[3];
                v47 = *v43;
                v48 = v42->v[2];
                v49 = v28->v[0];
                v50 = v42->v[1];
                v51 = v28->v[1];
                constraintQuat.v[0] = (float)((float)((float)(v46 * *v43) + (float)(v42->v[0] * v44)) + (float)(v48 * v28->v[0])) - (float)(v50 * v51);
                constraintQuat.v[1] = (float)((float)((float)(v50 * v44) - (float)(v48 * v47)) + (float)(v46 * v49)) + (float)(v45 * v51);
                constraintQuat.v[2] = (float)((float)((float)(v50 * v47) + (float)(v48 * v44)) - (float)(v45 * v49)) + (float)(v46 * v51);
                constraintQuat.v[3] = (float)((float)((float)(v46 * v44) - (float)(v45 * v47)) - (float)(v50 * v49)) - (float)(v48 * v51);
                XAnimBonePhysics_SolvePinConstraint_Internal_1_0_1_(NULL, (XAnimPhysicsBone *)&v28[-18].y, v28 + 1, (const vec3_t *)((char *)v28 - 28), 0.0, 0.0, &constraintQuat);
              }
              else
              {
                v30 = (vec4_t *)(*(_QWORD *)v28[-17].v + 68i64);
                v31 = &physicsBones[v29];
                p_rotationQuat = &v31->state.rotationQuat;
                v33 = v31->jointOffset.v[1] + v28[-1].v[0];
                bodyPinPointA.v[0] = v28[-2].v[2] + v31->jointOffset.v[0];
                bodyPinPointA.v[2] = v31->jointOffset.v[2] + v28[-1].v[1];
                bodyPinPointA.v[1] = v33;
                if ( v30 == &constraintQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
                  __debugbreak();
                if ( p_rotationQuat == &constraintQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
                  __debugbreak();
                v34 = v31->state.rotationQuat.v[3];
                v35 = v30->v[0];
                v36 = v30->v[3];
                v37 = p_rotationQuat->v[0];
                v38 = v31->state.rotationQuat.v[1];
                v39 = v30->v[2];
                v40 = v31->state.rotationQuat.v[2];
                v41 = v30->v[1];
                constraintQuat.v[0] = (float)((float)((float)(p_rotationQuat->v[0] * v36) + (float)(v30->v[0] * v34)) + (float)(v39 * v38)) - (float)(v41 * v40);
                constraintQuat.v[1] = (float)((float)((float)(v41 * v34) - (float)(v39 * v37)) + (float)(v38 * v36)) + (float)(v40 * v35);
                constraintQuat.v[2] = (float)((float)((float)(v41 * v37) + (float)(v39 * v34)) - (float)(v38 * v35)) + (float)(v40 * v36);
                constraintQuat.v[3] = (float)((float)((float)(v36 * v34) - (float)(v37 * v35)) - (float)(v41 * v38)) - (float)(v40 * v39);
                XAnimBonePhysics_SolvePinConstraint_Internal_0_0_1_(v31, (XAnimPhysicsBone *)&v28[-18].y, &bodyPinPointA, (const vec3_t *)((char *)v28 - 28), 0.0, 0.0, &constraintQuat);
              }
            }
            else
            {
              v52 = BYTE1(v28[-17].z);
              if ( v52 == 0xFF )
              {
                XAnimBonePhysics_SolvePinConstraint_Internal_1_0_0_(NULL, (XAnimPhysicsBone *)&v28[-18].y, v28 + 1, (const vec3_t *)((char *)v28 - 28), 0.0, 0.0, NULL);
              }
              else
              {
                v53 = &physicsBones[v52];
                v54 = v53->jointOffset.v[1] + v28[-1].v[0];
                bodyPinPointB.v[0] = v28[-2].v[2] + v53->jointOffset.v[0];
                bodyPinPointB.v[2] = v53->jointOffset.v[2] + v28[-1].v[1];
                bodyPinPointB.v[1] = v54;
                XAnimBonePhysics_SolvePinConstraint_Internal_0_0_0_((XAnimPhysicsBone *)&v28[-18].y, v53, (const vec3_t *)((char *)v28 - 28), &bodyPinPointB, 0.0, 0.0, NULL);
              }
            }
          }
          v28 += 22;
          --v27;
        }
        while ( v27 );
        v10 = firstPhysicsBoneIndex;
        v7 = procBones;
        v9 = endPhysicsBoneIndex;
        v16 = v63;
      }
      v55 = DCONST_DVARBOOL_xanim_physicsEnableMaxDistanceConstraint;
      if ( !DCONST_DVARBOOL_xanim_physicsEnableMaxDistanceConstraint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableMaxDistanceConstraint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v55);
      if ( v55->current.enabled && v10 < v9 )
      {
        v56 = v9 - v10;
        p_properties = (__int64)&physicsBones[v10].properties;
        do
        {
          if ( *(_WORD *)(p_properties - 8) != 255 )
          {
            v58 = &physicsBones[*(unsigned __int8 *)(p_properties + 10)];
            if ( v58->boneIndex != 255 )
              XAnimBonePhysics_SolveWorldMaxDistanceConstraint((XAnimPhysicsBone *)(p_properties - 8), (const vec3_t *)(p_properties + 176), &v58->modelPinPoint, *(float *)(*(_QWORD *)p_properties + 12i64));
          }
          p_properties += 264i64;
          --v56;
        }
        while ( v56 );
      }
      v59 = v67-- == 1;
      v18 = numContacts;
      v8 = contacts;
    }
    while ( !v59 );
  }
}

/*
==============
XAnimBonePhysics_SolveRotationConstraint1D
==============
*/
void XAnimBonePhysics_SolveRotationConstraint1D(XAnimPhysicsBone *physicsBoneA, XAnimPhysicsBone *physicsBoneB, const float4 *scalarConstraintError, const float4 *constraintAxis)
{
  __m128 v12; 
  float4 deltaRot; 
  float4 v14; 

  _RBX = physicsBoneB;
  _RDI = physicsBoneA;
  if ( !physicsBoneA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1525, ASSERT_TYPE_ASSERT, "(physicsBoneA != 0)", (const char *)&queryFormat, "physicsBoneA != NULL") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1526, ASSERT_TYPE_ASSERT, "(physicsBoneB != 0)", (const char *)&queryFormat, "physicsBoneB != NULL") )
    __debugbreak();
  __asm
  {
    vbroadcastss xmm5, dword ptr [rdi+18h]
    vbroadcastss xmm6, dword ptr [rbx+18h]
  }
  _XMM2 = _mm128_add_ps(_XMM5, _XMM6);
  __asm { vrcpps  xmm1, xmm2 }
  v12 = _mm128_sub_ps((__m128)0i64, _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2)), scalarConstraintError->v));
  deltaRot.v = _mm128_mul_ps(_XMM5, _mm128_mul_ps(v12, constraintAxis->v));
  v14.v = _mm128_mul_ps(_XMM6, _mm128_sub_ps((__m128)0i64, _mm128_mul_ps(v12, constraintAxis->v)));
  XAnimBonePhysics_ApplyRotationDelta(_RDI, &deltaRot);
  XAnimBonePhysics_ApplyRotationDelta(_RBX, &v14);
}

/*
==============
XAnimBonePhysics_SolveSwingLimitConstraint
==============
*/

void __fastcall XAnimBonePhysics_SolveSwingLimitConstraint(XAnimPhysicsBone *physicsBoneA, XAnimPhysicsBone *physicsBoneB, const vec3_t *axis, double cosMaxAngle)
{
  __m128 v7; 
  vec4_t rotationQuat; 
  const dvar_t *v9; 
  char v10; 
  float v11; 
  vec4_t v12; 
  __m128 v13; 
  __m128 v; 
  vec4_t localBasePoseQuat; 
  __m128 v19; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  bool v43; 
  __m128 v44; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v68; 
  __m128 v69; 
  __m128 v70; 
  const float4 *v77; 
  const float4 *v78; 
  const float4 *v79; 
  float4 constraintAxis; 
  float4 scalarConstraintError; 

  v7 = *(__m128 *)&cosMaxAngle;
  if ( !physicsBoneA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1723, ASSERT_TYPE_ASSERT, "(physicsBoneA != 0)", (const char *)&queryFormat, "physicsBoneA != NULL") )
    __debugbreak();
  if ( !physicsBoneA->properties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1724, ASSERT_TYPE_ASSERT, "(physicsBoneA->properties != 0)", (const char *)&queryFormat, "physicsBoneA->properties != NULL") )
    __debugbreak();
  if ( physicsBoneB )
  {
    rotationQuat = physicsBoneB->state.rotationQuat;
  }
  else
  {
    if ( physicsBoneA->parentPhysicsBoneIndex != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1732, ASSERT_TYPE_ASSERT, "(physicsBoneA->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX)", (const char *)&queryFormat, "physicsBoneA->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX") )
      __debugbreak();
    rotationQuat = physicsBoneA->parentBoneQuat;
  }
  if ( physicsBoneA->properties->rotationalSpring.swingStrength == 0.0 )
    goto LABEL_19;
  v9 = DCONST_DVARBOOL_xanim_physicsEnableSprings;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableSprings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableSprings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
LABEL_19:
    v10 = 0;
  else
    v10 = 1;
  v11 = axis->v[0];
  v12 = physicsBoneA->state.rotationQuat;
  v13 = _mm_shuffle_ps((__m128)rotationQuat, (__m128)rotationQuat, 255);
  scalarConstraintError.v.m128_i32[3] = 0;
  v = scalarConstraintError.v;
  v.m128_f32[0] = v11;
  _XMM11 = v;
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [rbp+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rbp+8], 20h ; ' '
  }
  localBasePoseQuat = physicsBoneA->properties->localBasePoseQuat;
  v19 = _mm_shuffle_ps((__m128)localBasePoseQuat, (__m128)localBasePoseQuat, 255);
  _XMM1 = _mm128_mul_ps((__m128)rotationQuat, (__m128)localBasePoseQuat);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
  }
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v19, v13), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)rotationQuat, (__m128)rotationQuat, 201), _mm_shuffle_ps((__m128)localBasePoseQuat, (__m128)localBasePoseQuat, 210)), _mm128_mul_ps(_mm_shuffle_ps((__m128)rotationQuat, (__m128)rotationQuat, 210), _mm_shuffle_ps((__m128)localBasePoseQuat, (__m128)localBasePoseQuat, 201))), _mm128_add_ps(_mm128_mul_ps((__m128)rotationQuat, v19), _mm128_mul_ps((__m128)localBasePoseQuat, v13)));
  __asm { vblendps xmm3, xmm2, xmm0, 7 }
  v26 = _mm_shuffle_ps(_XMM3, _XMM3, 210);
  v27 = _mm_shuffle_ps(_XMM3, _XMM3, 255);
  v28 = _mm_shuffle_ps(_XMM3, _XMM3, 201);
  v29 = _mm_shuffle_ps(_XMM11, _XMM11, 201);
  v30 = _mm_shuffle_ps(_XMM11, _XMM11, 210);
  v31 = _mm128_sub_ps(_mm128_mul_ps(v28, v30), _mm128_mul_ps(v26, v29));
  v32 = _mm128_add_ps(v31, v31);
  v33 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v32, v32, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(v32, v32, 201), v26)), _mm128_add_ps(_mm128_mul_ps(v27, v32), _XMM11));
  v34 = _mm_shuffle_ps((__m128)v12, (__m128)v12, 201);
  v35 = _mm_shuffle_ps((__m128)v12, (__m128)v12, 210);
  v36 = _mm128_sub_ps(_mm128_mul_ps(v34, v30), _mm128_mul_ps(v35, v29));
  v37 = _mm128_add_ps(v36, v36);
  v38 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v37, v37, 210), v34), _mm128_mul_ps(_mm_shuffle_ps(v37, v37, 201), v35)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)v12, (__m128)v12, 255), v37), _XMM11));
  _XMM0 = _mm128_mul_ps(v33, v38);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm6, xmm2, xmm2
  }
  scalarConstraintError.v = _XMM11;
  v43 = v7.m128_f32[0] > _XMM6.m128_f32[0];
  if ( v7.m128_f32[0] > _XMM6.m128_f32[0] || v10 )
  {
    v44 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v33, v33, 210), _mm_shuffle_ps(v38, v38, 201)), _mm128_mul_ps(_mm_shuffle_ps(v33, v33, 201), _mm_shuffle_ps(v38, v38, 210)));
    _XMM1 = _mm128_mul_ps(v44, v44);
    __asm
    {
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm1, xmm2, xmm2
    }
    if ( _XMM1.m128_f32[0] != 0.0 )
    {
      __asm { vrsqrtps xmm4, xmm1 }
      _XMM4 = _mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(g_one.v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM1)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4), v44);
      __asm
      {
        vcmpneqps xmm0, xmm4, xmm4
        vmovmskps eax, xmm0
      }
      constraintAxis.v = _XMM4;
      if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1770, ASSERT_TYPE_SANITY, "( !Float4IsNaN( normalizedConstraintAxis ) )", (const char *)&queryFormat, "!Float4IsNaN( normalizedConstraintAxis )") )
        __debugbreak();
      _mm_shuffle_ps(_mm_shuffle_ps(_XMM6, _mm_shuffle_ps(v7, v7, 0), 80), _XMM6, 232);
      v53 = s_acosConstants.v;
      v54 = _mm_shuffle_ps(v53, v53, 0);
      v55 = _mm_shuffle_ps(v53, v53, 85);
      v56 = _mm_shuffle_ps(v53, v53, 170);
      _XMM7 = _mm_shuffle_ps(v53, v53, 255);
      _XMM0 = g_negativeZero.v;
      _XMM6 = 0i64;
      __asm
      {
        vandnps xmm12, xmm0, xmm1
        vcmpltps xmm0, xmm7, xmm6
        vmovmskps eax, xmm0
        vcmpleps xmm11, xmm6, xmm1
      }
      if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
        __debugbreak();
      __asm
      {
        vmaxps  xmm1, xmm12, xmm6
        vminps  xmm4, xmm1, xmm7
      }
      _XMM1 = _mm128_sub_ps(v54, _mm128_mul_ps(_mm_sqrt_ps(_mm128_sub_ps(_XMM7, _XMM4)), _mm128_add_ps(_mm128_mul_ps(v56, _XMM4), v55)));
      __asm { vblendvps xmm2, xmm1, xmm5, xmm0 }
      v68 = _mm_shuffle_ps(_XMM2, _XMM2, 0);
      v69 = _mm_shuffle_ps(_XMM2, _XMM2, 85);
      if ( v43 )
      {
        v70 = _mm128_sub_ps(v69, v68);
      }
      else
      {
        _RAX = physicsBoneA->properties;
        __asm { vbroadcastss xmm0, dword ptr [rax+84h] }
        v70 = _mm128_mul_ps(_mm128_sub_ps((__m128)0i64, v68), _XMM0);
      }
      _RSI = DCONST_DVARFLT_xanim_physicsSwingStiffness;
      if ( !DCONST_DVARFLT_xanim_physicsSwingStiffness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsSwingStiffness") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vbroadcastss xmm0, dword ptr [rsi+28h] }
      _RSI = DCONST_DVARFLT_xanim_physicsMaxSwingAdjustment;
      scalarConstraintError.v = _mm128_mul_ps(_XMM0, v70);
      if ( !DCONST_DVARFLT_xanim_physicsMaxSwingAdjustment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxSwingAdjustment") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RSI);
      __asm { vbroadcastss xmm2, dword ptr [rsi+28h] }
      _mm128_sub_ps((__m128)0i64, _XMM2);
      Float4Clamp(v78, v77, v79, &scalarConstraintError);
      if ( physicsBoneB )
        XAnimBonePhysics_SolveRotationConstraint1D(physicsBoneA, physicsBoneB, &scalarConstraintError, &constraintAxis);
      else
        XAnimBonePhysics_SolveWorldRotationConstraint1D(physicsBoneA, &scalarConstraintError, &constraintAxis);
    }
  }
}

/*
==============
XAnimBonePhysics_SolveTwistLimitConstraint
==============
*/
void XAnimBonePhysics_SolveTwistLimitConstraint(XAnimPhysicsBone *physicsBoneA, XAnimPhysicsBone *physicsBoneB, const vec3_t *twistAxis, const vec3_t *twistU, const vec3_t *twistV, float minAngle, float maxAngle)
{
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  float v13; 
  bool v14; 
  const dvar_t *v15; 
  char v16; 
  __int128 v23; 
  __int128 v26; 
  __int128 v27; 
  __int128 v29; 
  __int128 v35; 
  __int128 v39; 
  const dvar_t *v40; 
  __int128 v45; 
  __int128 v50; 
  const dvar_t *v51; 
  float v52; 
  const dvar_t *v53; 
  __m128 v54; 
  float4 constraintAxis; 
  float4 scalarConstraintError; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 

  *(float *)&v7 = XAnimBonePhysics_FindTwistAngle(physicsBoneA, physicsBoneB, twistAxis, twistU, twistV, &constraintAxis);
  v13 = *(float *)&v7;
  v14 = *(float *)&v7 < minAngle || *(float *)&v7 > maxAngle;
  if ( physicsBoneA->properties->rotationalSpring.twistStrength == 0.0 )
    goto LABEL_11;
  v15 = DCONST_DVARBOOL_xanim_physicsEnableSprings;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableSprings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableSprings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled )
LABEL_11:
    v16 = 0;
  else
    v16 = 1;
  if ( v14 )
  {
    v59 = v8;
    v58 = v9;
    v57 = v10;
    v29 = LODWORD(minAngle);
    *(float *)&v29 = minAngle - *(float *)&v7;
    _XMM0 = v29;
    *(float *)&_XMM0 = fmodf_0(minAngle - v13, 6.2831855);
    _XMM7 = LODWORD(FLOAT_3_1415927);
    _XMM6 = LODWORD(FLOAT_N3_1415927);
    __asm
    {
      vcmpless xmm1, xmm7, xmm0
      vblendvps xmm3, xmm0, xmm2, xmm1
    }
    v35 = _XMM3;
    *(float *)&v35 = *(float *)&_XMM3 + 6.2831855;
    _XMM1 = v35;
    __asm
    {
      vcmpless xmm0, xmm6, xmm3
      vblendvps xmm8, xmm1, xmm3, xmm0
    }
    v39 = LODWORD(maxAngle);
    *(float *)&v39 = maxAngle - v13;
    _XMM0 = v39;
    *(float *)&_XMM0 = fmodf_0(maxAngle - v13, 6.2831855);
    v40 = DCONST_DVARFLT_xanim_physicsTwistStiffness;
    __asm
    {
      vcmpless xmm1, xmm7, xmm0
      vblendvps xmm3, xmm0, xmm2, xmm1
    }
    _XMM2 = _XMM8 & _xmm;
    v45 = _XMM3;
    *(float *)&v45 = *(float *)&_XMM3 + 6.2831855;
    _XMM1 = v45;
    __asm
    {
      vcmpless xmm0, xmm6, xmm3
      vblendvps xmm4, xmm1, xmm3, xmm0
      vcmpltss xmm1, xmm2, xmm0
      vblendvps xmm0, xmm4, xmm8, xmm1
    }
    if ( !DCONST_DVARFLT_xanim_physicsTwistStiffness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsTwistStiffness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    v50 = (unsigned int)_XMM0;
    *(float *)&v50 = *(float *)&_XMM0 * v40->current.value;
    v26 = v50;
  }
  else
  {
    if ( !v16 )
      return;
    _XMM0 = v7 ^ _xmm;
    *(float *)&_XMM0 = fmodf_0(COERCE_FLOAT(LODWORD(v13) ^ _xmm), 6.2831855);
    _XMM1 = LODWORD(FLOAT_3_1415927);
    __asm
    {
      vcmpless xmm2, xmm1, xmm0
      vblendvps xmm4, xmm0, xmm3, xmm2
    }
    _XMM0 = LODWORD(FLOAT_N3_1415927);
    v23 = _XMM4;
    *(float *)&v23 = *(float *)&_XMM4 + 6.2831855;
    _XMM2 = v23;
    __asm
    {
      vcmpless xmm1, xmm0, xmm4
      vblendvps xmm2, xmm2, xmm4, xmm1
    }
    v27 = _XMM2;
    *(float *)&v27 = *(float *)&_XMM2 * physicsBoneA->properties->rotationalSpring.twistStrength;
    v26 = v27;
  }
  v51 = DCONST_DVARFLT_xanim_physicsTwistStiffness;
  if ( !DCONST_DVARFLT_xanim_physicsTwistStiffness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsTwistStiffness") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v51);
  v52 = *(float *)&v26 * v51->current.value;
  v53 = DCONST_DVARFLT_xanim_physicsMaxTwistAdjustment;
  if ( !DCONST_DVARFLT_xanim_physicsMaxTwistAdjustment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxTwistAdjustment") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  v54.m128_u64[1] = *((_QWORD *)&v26 + 1);
  *(double *)v54.m128_u64 = I_fclamp(v52, COERCE_FLOAT(v53->current.integer ^ _xmm), v53->current.value);
  scalarConstraintError.v = _mm_shuffle_ps(v54, v54, 0);
  if ( physicsBoneB )
    XAnimBonePhysics_SolveRotationConstraint1D(physicsBoneA, physicsBoneB, &scalarConstraintError, &constraintAxis);
  else
    XAnimBonePhysics_SolveWorldRotationConstraint1D(physicsBoneA, &scalarConstraintError, &constraintAxis);
}

/*
==============
XAnimBonePhysics_SolveWorldContactPositionConstraint
==============
*/
void XAnimBonePhysics_SolveWorldContactPositionConstraint(XAnimCollisionContact *contact, XAnimPhysicsBone *physicsBones, unsigned int numPhysicsBones)
{
  __m128 rotationQuat; 
  __m128 v; 
  float v10; 
  __m128 v13; 
  __m128 v15; 
  float v16; 
  __m128 v20; 
  float v21; 
  __m128 v25; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v36; 
  __m128 v45; 
  __int64 v46; 
  float4 deltaRot; 
  float4 deltaPos; 

  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1973, ASSERT_TYPE_ASSERT, "(contact != 0)", (const char *)&queryFormat, "contact != NULL") )
    __debugbreak();
  if ( !physicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1974, ASSERT_TYPE_ASSERT, "(physicsBones != 0)", (const char *)&queryFormat, "physicsBones != NULL") )
    __debugbreak();
  if ( contact->bodyIndex >= numPhysicsBones )
  {
    LODWORD(v46) = contact->bodyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1976, ASSERT_TYPE_ASSERT, "(unsigned)( contact->bodyIndex ) < (unsigned)( numPhysicsBones )", "contact->bodyIndex doesn't index numPhysicsBones\n\t%i not in [0, %i)", v46, numPhysicsBones) )
      __debugbreak();
  }
  _RBX = &physicsBones[contact->bodyIndex];
  deltaPos.v.m128_i32[3] = 0;
  rotationQuat = (__m128)_RBX->state.rotationQuat;
  v = deltaPos.v;
  v.m128_f32[0] = _RBX->state.position.v[0];
  _XMM10 = v;
  v10 = contact->normal.v[0];
  __asm
  {
    vinsertps xmm10, xmm10, dword ptr [rbx+30h], 10h
    vinsertps xmm10, xmm10, dword ptr [rbx+34h], 20h ; ' '
  }
  v13 = _mm_shuffle_ps(rotationQuat, rotationQuat, 210);
  deltaPos.v = _XMM10;
  deltaPos.v.m128_i32[3] = 0;
  v15 = deltaPos.v;
  v15.m128_f32[0] = v10;
  _XMM11 = v15;
  v16 = contact->pointA.v[0];
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [rdi+20h], 10h
    vinsertps xmm11, xmm11, dword ptr [rdi+24h], 20h ; ' '
  }
  deltaPos.v = _XMM11;
  deltaPos.v.m128_i32[3] = 0;
  v20 = deltaPos.v;
  v20.m128_f32[0] = v16;
  _XMM9 = v20;
  v21 = contact->pointB.v[0];
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rdi+8], 10h
    vinsertps xmm9, xmm9, dword ptr [rdi+0Ch], 20h ; ' '
  }
  deltaPos.v = _XMM9;
  deltaPos.v.m128_i32[3] = 0;
  v25 = deltaPos.v;
  v25.m128_f32[0] = v21;
  _XMM8 = v25;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rdi+14h], 10h
    vinsertps xmm8, xmm8, dword ptr [rdi+18h], 20h ; ' '
  }
  v28 = _mm_shuffle_ps(rotationQuat, rotationQuat, 201);
  v29 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), v13));
  v30 = _mm128_add_ps(v29, v29);
  v31 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v30, v30, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(v30, v30, 201), v13)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(rotationQuat, rotationQuat, 255), v30), _XMM9));
  _XMM2 = _mm128_mul_ps(_XMM11, _mm128_sub_ps(_XMM8, _mm128_add_ps(_XMM10, v31)));
  __asm
  {
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
  }
  deltaPos.v = _XMM8;
  __asm { vhaddps xmm8, xmm1, xmm1 }
  if ( _XMM8.m128_f32[0] < 0.0 )
  {
    v36 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 210), _mm_shuffle_ps(v31, v31, 201)), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 201), _mm_shuffle_ps(v31, v31, 210)));
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1592, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL") )
      __debugbreak();
    __asm
    {
      vbroadcastss xmm6, dword ptr [rbx+18h]
      vbroadcastss xmm5, dword ptr [rbx+14h]
    }
    _XMM1 = _mm128_mul_ps(_mm128_mul_ps(v36, _XMM6), v36);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
    }
    _XMM2 = _mm128_add_ps(_XMM5, _XMM1);
    __asm { vrcpps  xmm3, xmm2 }
    v45 = _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM3, _XMM3), _mm128_mul_ps(_mm128_mul_ps(_XMM3, _XMM3), _XMM2)), _XMM8);
    deltaPos.v = _mm128_mul_ps(_XMM5, _mm128_mul_ps(_XMM11, v45));
    deltaRot.v = _mm128_mul_ps(_mm128_mul_ps(v36, v45), _XMM6);
    XAnimBonePhysics_ApplyPositionDelta(_RBX, &deltaPos);
    XAnimBonePhysics_ApplyRotationDelta(_RBX, &deltaRot);
  }
}

/*
==============
XAnimBonePhysics_SolveWorldContactVelocityConstraint
==============
*/
void XAnimBonePhysics_SolveWorldContactVelocityConstraint(XAnimCollisionContact *contact, XAnimPhysicsBone *physicsBones, unsigned int numPhysicsBones)
{
  __m128 rotationQuat; 
  __int128 v11; 
  __m128 v14; 
  __m128 v15; 
  __m128 v17; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v25; 
  __m128 v29; 
  __m128 v32; 
  __m128 v41; 
  __m128 v48; 
  __m128 v56; 
  __m128 v66; 
  __m128 v67; 
  __m128 v68; 
  __m128 v69; 
  __m128 v75; 
  __m128 v76; 
  __m128 v77; 
  __m128 v78; 
  __m128 v79; 
  __m128 v88; 
  __m128 v95; 
  __m128 v96; 
  __m128 v97; 
  __m128 v98; 
  __m128 v99; 
  __m128 v108; 
  __m128 v115; 
  __int64 v116; 
  __m128 v117; 
  __int128 v118; 
  __m128 v119; 
  __m128 v120; 
  __m128 v121; 

  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2069, ASSERT_TYPE_ASSERT, "(contact != 0)", (const char *)&queryFormat, "contact != NULL") )
    __debugbreak();
  if ( !physicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2070, ASSERT_TYPE_ASSERT, "(physicsBones != 0)", (const char *)&queryFormat, "physicsBones != NULL") )
    __debugbreak();
  if ( contact->bodyIndex >= numPhysicsBones )
  {
    LODWORD(v116) = contact->bodyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2071, ASSERT_TYPE_ASSERT, "(unsigned)( contact->bodyIndex ) < (unsigned)( numPhysicsBones )", "contact->bodyIndex doesn't index numPhysicsBones\n\t%i not in [0, %i)", v116, numPhysicsBones) )
      __debugbreak();
  }
  _RBX = &physicsBones[contact->bodyIndex];
  HIDWORD(v118) = 0;
  rotationQuat = (__m128)_RBX->state.rotationQuat;
  __asm
  {
    vbroadcastss xmm15, dword ptr [rbx+18h]
    vbroadcastss xmm14, dword ptr [rbx+14h]
  }
  v11 = v118;
  *(float *)&v11 = contact->normal.v[0];
  _XMM9 = v11;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rdi+20h], 10h
    vinsertps xmm9, xmm9, dword ptr [rdi+24h], 20h ; ' '
  }
  v14 = _mm_shuffle_ps(rotationQuat, rotationQuat, 210);
  v15 = _mm_shuffle_ps(rotationQuat, rotationQuat, 201);
  v119 = _XMM9;
  v119.m128_i32[3] = 0;
  v17 = v119;
  v17.m128_f32[0] = contact->pointA.v[0];
  _XMM8 = v17;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rdi+8], 10h
    vinsertps xmm8, xmm8, dword ptr [rdi+0Ch], 20h ; ' '
  }
  v120 = _XMM8;
  v20 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 210), v15), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), v14));
  v21 = _mm128_add_ps(v20, v20);
  v22 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v21, v21, 210), v15), _mm128_mul_ps(_mm_shuffle_ps(v21, v21, 201), v14)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(rotationQuat, rotationQuat, 255), v21), _XMM8));
  v23 = _mm128_sub_ps((__m128)0i64, _XMM9);
  v120.m128_i32[3] = 0;
  v25 = v120;
  v25.m128_f32[0] = _RBX->state.velocity.v[0];
  _XMM7 = v25;
  __asm
  {
    vinsertps xmm7, xmm7, dword ptr [rbx+58h], 10h
    vinsertps xmm7, xmm7, dword ptr [rbx+5Ch], 20h ; ' '
  }
  v121 = _XMM7;
  v121.m128_i32[3] = 0;
  v29 = v121;
  v29.m128_f32[0] = _RBX->state.angularVelocity.v[0];
  _XMM6 = v29;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rbx+64h], 10h
    vinsertps xmm6, xmm6, dword ptr [rbx+68h], 20h ; ' '
  }
  v32 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v22, v22, 201), _mm_shuffle_ps(v23, v23, 210)), _mm128_mul_ps(_mm_shuffle_ps(v22, v22, 210), _mm_shuffle_ps(v23, v23, 201)));
  _XMM1 = _mm128_mul_ps(_XMM7, v23);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
  }
  _XMM0 = _mm128_mul_ps(v32, _XMM6);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v117 = v22;
  v41 = _mm128_add_ps(_XMM0, _XMM3);
  _XMM0 = _mm128_mul_ps(_mm128_mul_ps(_XMM15, v32), v32);
  __asm
  {
    vinsertps xmm2, xmm0, xmm0, 8
    vhaddps xmm1, xmm2, xmm2
    vhaddps xmm0, xmm1, xmm1
  }
  _XMM2 = _mm128_add_ps(_XMM0, _XMM14);
  __asm { vrcpps  xmm1, xmm2 }
  v48 = _mm128_sub_ps((__m128)0i64, _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2)), v41), g_one.v));
  _XMM13 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v32, v48), _XMM15), _XMM6);
  _XMM12 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v48, v23), _XMM14), _XMM7);
  if ( contact->groundPlane )
  {
    _RDI = DCONST_DVARFLT_xanim_physicsGroundPlaneFriction;
    if ( !DCONST_DVARFLT_xanim_physicsGroundPlaneFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsGroundPlaneFriction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vbroadcastss xmm11, dword ptr [rdi+28h] }
    _XMM5 = _mm_shuffle_ps(v23, v23, 89);
    __asm { vcmpltps xmm1, xmm5, xmm10 }
    _XMM6 = _mm_shuffle_ps(v23, v23, 170);
    v56 = _mm128_sub_ps((__m128)0i64, v23);
    __asm
    {
      vcmpltps xmm0, xmm6, xmm10
      vpcmpeqd xmm0, xmm0, xmm1
    }
    _mm_shuffle_ps(_mm_shuffle_ps(_mm128_add_ps(_XMM6, _XMM5), v56, 0), v56, 8);
    _XMM3 = _mm_shuffle_ps(_mm_shuffle_ps(_mm128_sub_ps(_XMM5, _XMM6), v23, 0), v23, 8);
    __asm { vblendvps xmm5, xmm3, xmm4, xmm0 }
    _XMM1 = _mm128_mul_ps(_XMM5, _XMM5);
    __asm
    {
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm0, xmm2, xmm2
      vrsqrtps xmm1, xmm0
    }
    v66 = _mm128_mul_ps(_XMM1, _XMM5);
    v67 = _mm_shuffle_ps(v66, v66, 201);
    v68 = _mm_shuffle_ps(v66, v66, 210);
    v69 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v23, v23, 201), v68), _mm128_mul_ps(_mm_shuffle_ps(v23, v23, 210), v67));
    _XMM0 = _mm128_mul_ps(v69, v69);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vrsqrtps xmm1, xmm0
    }
    v75 = v117;
    v76 = _mm_shuffle_ps(v75, v75, 201);
    v77 = _mm128_mul_ps(_XMM1, v69);
    v78 = _mm_shuffle_ps(v75, v75, 210);
    v79 = _mm128_sub_ps(_mm128_mul_ps(v68, v76), _mm128_mul_ps(v67, v78));
    _XMM2 = _mm128_mul_ps(v66, _XMM12);
    __asm
    {
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm3, xmm1, xmm1
    }
    _XMM0 = _mm128_mul_ps(v79, _XMM13);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
    }
    v88 = _mm128_add_ps(_XMM0, _XMM3);
    _XMM0 = _mm128_mul_ps(_mm128_mul_ps(_XMM15, v79), v79);
    __asm
    {
      vinsertps xmm2, xmm0, xmm0, 8
      vhaddps xmm1, xmm2, xmm2
      vhaddps xmm0, xmm1, xmm1
    }
    _XMM2 = _mm128_add_ps(_XMM0, _XMM14);
    __asm { vrcpps  xmm1, xmm2 }
    v95 = _mm128_sub_ps((__m128)0i64, _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2)), v88), _XMM11));
    v96 = _mm128_mul_ps(_mm128_mul_ps(v66, v95), _XMM14);
    v97 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v79, v95), _XMM15), _XMM13);
    v98 = _mm128_add_ps(v96, _XMM12);
    v99 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v77, v77, 210), v76), _mm128_mul_ps(_mm_shuffle_ps(v77, v77, 201), v78));
    _XMM0 = _mm128_mul_ps(v77, v98);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm3, xmm2, xmm2
    }
    _XMM0 = _mm128_mul_ps(v99, v97);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
    }
    v108 = _mm128_add_ps(_XMM0, _XMM3);
    _XMM0 = _mm128_mul_ps(_mm128_mul_ps(_XMM15, v99), v99);
    __asm
    {
      vinsertps xmm2, xmm0, xmm0, 8
      vhaddps xmm1, xmm2, xmm2
      vhaddps xmm0, xmm1, xmm1
    }
    _XMM2 = _mm128_add_ps(_XMM0, _XMM14);
    __asm { vrcpps  xmm1, xmm2 }
    v115 = _mm128_sub_ps((__m128)0i64, _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM1, _XMM1), _mm128_mul_ps(_mm128_mul_ps(_XMM1, _XMM1), _XMM2)), v108), _XMM11));
    _XMM13 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v99, v115), _XMM15), v97);
    _XMM12 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v77, v115), _XMM14), v98);
  }
  _RBX->state.velocity.v[0] = _XMM12.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+58h], xmm12, 1
    vextractps dword ptr [rbx+5Ch], xmm12, 2
  }
  _RBX->state.angularVelocity.v[0] = _XMM13.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+64h], xmm13, 1
    vextractps dword ptr [rbx+68h], xmm13, 2
  }
}

/*
==============
XAnimBonePhysics_SolveWorldMaxDistanceConstraint
==============
*/

void __fastcall XAnimBonePhysics_SolveWorldMaxDistanceConstraint(XAnimPhysicsBone *physicsBone, const vec3_t *bodyPinPoint, const vec3_t *worldPinPoint, double maxDistance)
{
  __m128 v7; 
  __m128 rotationQuat; 
  float v9; 
  __m128 v10; 
  __m128 v11; 
  __m128 v; 
  float v14; 
  __m128 v18; 
  float v21; 
  __m128 v23; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __m128 v46; 
  float4 deltaRot; 
  float4 deltaPos; 

  _RBX = physicsBone;
  v7 = *(__m128 *)&maxDistance;
  if ( !physicsBone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1632, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL") )
    __debugbreak();
  rotationQuat = (__m128)_RBX->state.rotationQuat;
  v9 = _RBX->state.position.v[0];
  v10 = _mm_shuffle_ps(rotationQuat, rotationQuat, 210);
  v11 = _mm_shuffle_ps(rotationQuat, rotationQuat, 201);
  deltaPos.v.m128_i32[3] = 0;
  v = deltaPos.v;
  v.m128_f32[0] = v9;
  _XMM10 = v;
  v14 = bodyPinPoint->v[0];
  __asm
  {
    vinsertps xmm10, xmm10, dword ptr [rbx+30h], 10h
    vinsertps xmm10, xmm10, dword ptr [rbx+34h], 20h ; ' '
  }
  deltaPos.v = _XMM10;
  deltaPos.v.m128_i32[3] = 0;
  v18 = deltaPos.v;
  v18.m128_f32[0] = v14;
  _XMM9 = v18;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rdi+4], 10h
    vinsertps xmm9, xmm9, dword ptr [rdi+8], 20h ; ' '
  }
  v21 = worldPinPoint->v[0];
  deltaPos.v = _XMM9;
  deltaPos.v.m128_i32[3] = 0;
  v23 = deltaPos.v;
  v23.m128_f32[0] = v21;
  _XMM8 = v23;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rsi+4], 10h
    vinsertps xmm8, xmm8, dword ptr [rsi+8], 20h ; ' '
  }
  v26 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), v11), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), v10));
  v27 = _mm128_add_ps(v26, v26);
  v28 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v27, v27, 210), v11), _mm128_mul_ps(_mm_shuffle_ps(v27, v27, 201), v10)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(rotationQuat, rotationQuat, 255), v27), _XMM9));
  v29 = _mm128_sub_ps(_XMM8, _mm128_add_ps(_XMM10, v28));
  _XMM0 = _mm128_mul_ps(v29, v29);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v34 = _mm_sqrt_ps(_XMM0);
  v35 = _mm128_sub_ps(v34, _mm_shuffle_ps(v7, v7, 0));
  deltaPos.v = _XMM8;
  if ( v35.m128_f32[0] > 0.0 )
  {
    v36 = _mm128_div_ps(v29, v34);
    v37 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v28, v28, 201), _mm_shuffle_ps(v36, v36, 210)), _mm128_mul_ps(_mm_shuffle_ps(v28, v28, 210), _mm_shuffle_ps(v36, v36, 201)));
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1592, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL") )
      __debugbreak();
    __asm
    {
      vbroadcastss xmm6, dword ptr [rbx+18h]
      vbroadcastss xmm5, dword ptr [rbx+14h]
    }
    _XMM1 = _mm128_mul_ps(_mm128_mul_ps(v37, _XMM6), v37);
    __asm
    {
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
    }
    _XMM2 = _mm128_add_ps(_XMM5, _XMM1);
    __asm { vrcpps  xmm3, xmm2 }
    v46 = _mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_XMM3, _XMM3), _mm128_mul_ps(_mm128_mul_ps(_XMM3, _XMM3), _XMM2)), v35);
    deltaPos.v = _mm128_mul_ps(_XMM5, _mm128_mul_ps(v36, v46));
    deltaRot.v = _mm128_mul_ps(_mm128_mul_ps(v37, v46), _XMM6);
    XAnimBonePhysics_ApplyPositionDelta(_RBX, &deltaPos);
    XAnimBonePhysics_ApplyRotationDelta(_RBX, &deltaRot);
  }
}

/*
==============
XAnimBonePhysics_SolveWorldRotationConstraint1D
==============
*/
void XAnimBonePhysics_SolveWorldRotationConstraint1D(XAnimPhysicsBone *physicsBone, const float4 *scalarConstraintError, const float4 *constraintAxis)
{
  float4 deltaRot; 

  if ( !physicsBone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1564, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL") )
    __debugbreak();
  if ( physicsBone->invInertiaTensor == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1565, ASSERT_TYPE_ASSERT, "(physicsBone->invInertiaTensor != 0.0f)", (const char *)&queryFormat, "physicsBone->invInertiaTensor != 0.0f") )
    __debugbreak();
  deltaRot.v = _mm128_mul_ps(_mm128_sub_ps((__m128)0i64, scalarConstraintError->v), constraintAxis->v);
  XAnimBonePhysics_ApplyRotationDelta(physicsBone, &deltaRot);
}

/*
==============
XAnimBonePhysics_UpdateNoise
==============
*/
bool XAnimBonePhysics_UpdateNoise(XAnimPhysicsBone *physicsBone, const float timeStep, vec3_t *outVelocity, vec3_t *outAngularVelocity)
{
  const XAnimDynamicBoneProperties *properties; 
  XAnimDynamicBoneNoiseState *p_noise; 
  unsigned int v9; 
  const dvar_t *v10; 
  XAnimPhysicsNoiseStateInfo *v11; 
  __int64 v12; 
  const XAnimDynamicBoneNoiseAxis *axis; 
  XAnimPhysicsNoiseStateInfo *rotation; 
  float *p_strength; 
  const XAnimCurve **v16; 
  float *p_strengthMul; 
  double Value; 
  float v19; 
  __int64 v20; 
  const XAnimCurve **v21; 
  double v22; 
  float v23; 
  float v24; 
  float v25; 
  bool result; 

  if ( !physicsBone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 930, ASSERT_TYPE_ASSERT, "(physicsBone)", (const char *)&queryFormat, "physicsBone") )
    __debugbreak();
  properties = physicsBone->properties;
  p_noise = &physicsBone->state.noise;
  v9 = 0;
  *(_QWORD *)outVelocity->v = 0i64;
  outVelocity->v[2] = 0.0;
  *(_QWORD *)outAngularVelocity->v = 0i64;
  outAngularVelocity->v[2] = 0.0;
  v10 = DCONST_DVARBOOL_xanim_physicsNoiseEnable;
  if ( !DCONST_DVARBOOL_xanim_physicsNoiseEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsNoiseEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled || !properties->noise.enable || timeStep == 0.0 )
    return 0;
  v11 = (XAnimPhysicsNoiseStateInfo *)p_noise;
  v12 = 3i64;
  axis = properties->noise.rotation.axis;
  do
  {
    XAnimBonePhysics_UpdateNoiseTimer((const XAnimDynamicBoneNoiseAxis *)((char *)axis - 80), v11, timeStep);
    XAnimBonePhysics_UpdateNoiseTimer(axis, v11 + 3, timeStep);
    ++v11;
    ++axis;
    --v12;
  }
  while ( v12 );
  rotation = p_noise->rotation;
  p_strength = &properties->noise.rotation.axis[0].strength;
  do
  {
    v16 = (const XAnimCurve **)(p_strength - 22);
    if ( p_strength == (float *)88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 877, ASSERT_TYPE_ASSERT, "(properties)", (const char *)&queryFormat, "properties") )
      __debugbreak();
    p_strengthMul = &rotation[-3].strengthMul;
    if ( rotation == (XAnimPhysicsNoiseStateInfo *)36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 878, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    if ( *(p_strength - 20) == 0.0 || *p_strengthMul == 0.0 || !*v16 )
    {
      v19 = 0.0;
    }
    else
    {
      Value = XAnimCurve_GetValue(*v16, rotation[-3].timer);
      v19 = (float)(*(p_strength - 20) * *p_strengthMul) * *(float *)&Value;
    }
    v20 = (int)v9;
    v21 = (const XAnimCurve **)(p_strength - 2);
    outVelocity->v[v9] = v19;
    if ( p_strength == (float *)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 877, ASSERT_TYPE_ASSERT, "(properties)", (const char *)&queryFormat, "properties") )
      __debugbreak();
    if ( !rotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 878, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
      __debugbreak();
    if ( *p_strength == 0.0 || rotation->strengthMul == 0.0 || !*v21 )
    {
      v23 = 0.0;
    }
    else
    {
      v22 = XAnimCurve_GetValue(*v21, rotation->timer);
      v23 = (float)(rotation->strengthMul * *p_strength) * *(float *)&v22;
    }
    ++v9;
    ++rotation;
    p_strength += 6;
    outAngularVelocity->v[v20] = v23;
  }
  while ( v9 < 3 );
  v24 = 0.017453292 * outAngularVelocity->v[1];
  v25 = 0.017453292 * outAngularVelocity->v[2];
  result = 1;
  outAngularVelocity->v[0] = 0.017453292 * outAngularVelocity->v[0];
  outAngularVelocity->v[1] = v24;
  outAngularVelocity->v[2] = v25;
  return result;
}

/*
==============
XAnimBonePhysics_UpdateNoiseTimer
==============
*/
void XAnimBonePhysics_UpdateNoiseTimer(const XAnimDynamicBoneNoiseAxis *properties, XAnimPhysicsNoiseStateInfo *outState, const float timeStep)
{
  float v5; 

  if ( !properties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 862, ASSERT_TYPE_ASSERT, "(properties)", (const char *)&queryFormat, "properties") )
    __debugbreak();
  if ( !outState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 863, ASSERT_TYPE_ASSERT, "(outState)", (const char *)&queryFormat, "outState") )
    __debugbreak();
  v5 = 0.0;
  if ( properties->curve && properties->strength != 0.0 && outState->strengthMul != 0.0 )
    v5 = fmodf_0((float)((float)(timeStep * properties->rate) * outState->rateMul) + outState->timer, properties->curve->duration);
  outState->timer = v5;
}

/*
==============
XAnimBonePhysics_UpdateVelocities
==============
*/
void XAnimBonePhysics_UpdateVelocities(DObjProceduralBones *procBones, unsigned int firstPhysicsBoneIndex, unsigned int endPhysicsBoneIndex, float timeStep)
{
  __int64 v6; 
  XAnimPhysicsBone *physicsBones; 
  const dvar_t *v8; 
  float v9; 
  const dvar_t *v10; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v21; 
  float v23; 
  __m128 v24; 
  bool v26; 
  __m128 v27; 
  __m128 v29; 
  float v30; 
  __m128 v34; 
  __m128 v; 
  __m128 v41; 
  __m128 v45; 
  __int64 v48; 
  float4 velocity; 
  float4 result; 
  __m128 v51; 
  __m128 v52; 

  v6 = firstPhysicsBoneIndex;
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2158, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  physicsBones = procBones->physicsBones;
  if ( endPhysicsBoneIndex > procBones->numPhysicsBones )
  {
    LODWORD(v48) = endPhysicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2162, ASSERT_TYPE_ASSERT, "( endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", v48, procBones->numPhysicsBones) )
      __debugbreak();
  }
  if ( !(_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2163, ASSERT_TYPE_ASSERT, "( firstPhysicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "firstPhysicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", 0, 1) )
    __debugbreak();
  if ( timeStep <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2164, ASSERT_TYPE_ASSERT, "( timeStep ) > ( 0.0f )", "%s > %s\n\t%g, %g", "timeStep", "0.0f", timeStep, 0.0) )
    __debugbreak();
  v8 = DCONST_DVARFLT_xanim_physicsVelocityDamping;
  if ( !DCONST_DVARFLT_xanim_physicsVelocityDamping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsVelocityDamping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = 1.0 - v8->current.value;
  v10 = DCONST_DVARFLT_xanim_physicsAngularVelocityDamping;
  if ( !DCONST_DVARFLT_xanim_physicsAngularVelocityDamping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAngularVelocityDamping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = (__m128)LODWORD(FLOAT_1_0);
  v11.m128_f32[0] = (float)(1.0 - v10->current.value) * 2.0;
  v12 = v11;
  v14 = (__m128)LODWORD(FLOAT_1_0);
  v14.m128_f32[0] = 1.0 / timeStep;
  v13 = v14;
  v16 = v12;
  v16.m128_f32[0] = v12.m128_f32[0] * v13.m128_f32[0];
  v15 = v16;
  v17 = v13;
  v17.m128_f32[0] = v13.m128_f32[0] * v9;
  v18 = _mm_shuffle_ps(v15, v15, 0);
  v19 = _mm_shuffle_ps(v17, v17, 0);
  if ( (unsigned int)v6 < endPhysicsBoneIndex )
  {
    _RBX = (__int64)&physicsBones[v6].state.position.z;
    do
    {
      if ( *(_WORD *)(_RBX - 52) != 255 )
      {
        v21 = *(__m128 *)(_RBX - 24);
        _RAX = *(_QWORD *)(_RBX - 44);
        v23 = *(float *)(_RBX - 8);
        v24 = _mm128_mul_ps(*(__m128 *)(_RBX + 4), (__m128)_xmm);
        __asm { vbroadcastss xmm11, dword ptr [rax+38h] }
        v26 = (*(_BYTE *)(_RBX - 36) & 0x20) == 0;
        v27 = _mm_shuffle_ps(v21, v21, 255);
        v51.m128_i32[3] = 0;
        v29 = v51;
        v29.m128_f32[0] = v23;
        _XMM4 = v29;
        v30 = *(float *)(_RBX + 20);
        __asm
        {
          vinsertps xmm4, xmm4, dword ptr [rbx-4], 10h
          vinsertps xmm4, xmm4, dword ptr [rbx], 20h ; ' '
        }
        v52.m128_i32[3] = 0;
        v34 = v52;
        v34.m128_f32[0] = v30;
        _XMM3 = v34;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rbx+18h], 10h
          vinsertps xmm3, xmm3, dword ptr [rbx+1Ch], 20h ; ' '
        }
        v = _mm128_mul_ps(v19, _mm128_sub_ps(_XMM4, _XMM3));
        v52 = _XMM3;
        _XMM1 = _mm128_mul_ps(v21, v24);
        __asm
        {
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
        }
        v41 = _mm_shuffle_ps(v24, v24, 255);
        __asm { vhaddps xmm3, xmm2, xmm2 }
        _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v41, v27), _XMM3);
        v51 = _XMM4;
        _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v21, v21, 201), _mm_shuffle_ps(v24, v24, 210)), _mm128_mul_ps(_mm_shuffle_ps(v21, v21, 210), _mm_shuffle_ps(v24, v24, 201))), _mm128_add_ps(_mm128_mul_ps(v21, v41), _mm128_mul_ps(v24, v27)));
        __asm { vblendps xmm2, xmm2, xmm0, 7 }
        v45 = _mm128_mul_ps(v18, _XMM2);
        velocity.v = v;
        if ( !v26 )
          v = XAnimBonePhysics_ApplyTranslationalSpringDamping(&result, procBones, v6, &velocity)->v;
        _XMM1 = _mm128_mul_ps(_XMM11, v);
        _XMM2 = _mm128_mul_ps(_XMM11, v45);
        *(float *)(_RBX + 32) = _XMM1.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbx+24h], xmm1, 1
          vextractps dword ptr [rbx+28h], xmm1, 2
        }
        *(float *)(_RBX + 44) = _XMM2.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rbx+30h], xmm2, 1
          vextractps dword ptr [rbx+34h], xmm2, 2
        }
      }
      LODWORD(v6) = v6 + 1;
      _RBX += 264i64;
    }
    while ( (unsigned int)v6 < endPhysicsBoneIndex );
  }
}


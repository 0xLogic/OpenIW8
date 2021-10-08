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

  _RDI = in;
  _RBX = out;
  DObjPhysicsState_GetRootTrans(in, &outRootTrans);
  DObjPhysicsState_GetPrevRootTrans(_RDI, &outPrevRootTrans);
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovups xmmword ptr [rbx], xmm0
    vmovups xmm1, xmmword ptr [rdi+10h]
    vmovups xmmword ptr [rbx+10h], xmm1
    vmovups xmm0, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rbx+20h], xmm0
    vmovups xmm1, xmmword ptr [rdi+30h]
    vmovups xmmword ptr [rbx+30h], xmm1
    vmovups xmm0, xmmword ptr [rdi+40h]
    vmovups xmmword ptr [rbx+40h], xmm0
    vmovups xmm1, xmmword ptr [rdi+50h]
    vmovups xmmword ptr [rbx+50h], xmm1
    vmovups xmm0, xmmword ptr [rdi+60h]
    vmovups xmmword ptr [rbx+60h], xmm0
    vmovups xmm0, xmmword ptr [rdi+70h]
    vmovups xmmword ptr [rbx+70h], xmm0
    vmovups xmm1, xmmword ptr [rdi+80h]
    vmovups xmmword ptr [rbx+80h], xmm1
    vmovups xmm0, xmmword ptr [rdi+90h]
    vmovups xmmword ptr [rbx+90h], xmm0
    vmovups xmm1, xmmword ptr [rdi+0A0h]
    vmovups xmmword ptr [rbx+0A0h], xmm1
    vmovups xmm0, xmmword ptr [rdi+0B0h]
    vmovups xmmword ptr [rbx+0B0h], xmm0
    vmovups xmm1, xmmword ptr [rdi+0C0h]
    vmovups xmmword ptr [rbx+0C0h], xmm1
    vmovups xmm0, xmmword ptr [rdi+0D0h]
    vmovups xmmword ptr [rbx+0D0h], xmm0
  }
  DObjPhysicsState_SetRootTrans(_RBX, &outRootTrans);
  DObjPhysicsState_SetPrevRootTrans(_RBX, &outPrevRootTrans);
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
  __int64 v12; 
  int v13; 

  v5 = from->v[2];
  v6 = from->v[0];
  LOBYTE(v13) = BYTE3(from);
  HIBYTE(v13) = BYTE2(from);
  v7 = from->v[1];
  *(_WORD *)((char *)&v13 + 1) = (_WORD)from;
  v8 = v13;
  LODWORD(to->v[0]) = xConst ^ LODWORD(v5) ^ v13 ^ LODWORD(v7);
  LODWORD(to->v[1]) = yConst ^ LODWORD(v6) ^ LODWORD(v5) ^ v8;
  LODWORD(to->v[2]) = LODWORD(v6) ^ v8 ^ ~zConst;
  __asm { vmovss  xmm0, dword ptr [rdx] }
  memset(&v12, 0, sizeof(v12));
  __asm { vmovss  [rsp+38h+zConst], xmm0 }
  if ( (zConst & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+38h+zConst], xmm0
  }
  if ( (zConst & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+38h+zConst], xmm0
  }
  if ( (zConst & 0x7F800000) == 2139095040 )
  {
LABEL_8:
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
  const vec3_t *v9; 
  float v12; 
  float v13; 
  int v14; 
  float v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  vec3_t *v19; 
  int v20; 

  v19 = to;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  v9 = from;
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_9;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
  {
LABEL_9:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 88, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
      __debugbreak();
  }
  v12 = v9->v[2];
  v13 = v9->v[1];
  LOBYTE(v20) = BYTE3(to);
  HIBYTE(v20) = BYTE2(v19);
  *(_WORD *)((char *)&v20 + 1) = (_WORD)to;
  v14 = v20;
  v15 = v9->v[0];
  v16 = v20 ^ ~zConst ^ LODWORD(v12);
  v17 = v20 ^ v16 ^ LODWORD(v13);
  LODWORD(to->v[0]) = v16;
  v18 = yConst ^ v17;
  LODWORD(to->v[2]) = v18;
  LODWORD(to->v[1]) = xConst ^ v14 ^ v18 ^ LODWORD(v15);
  memset(&v19, 0, sizeof(v19));
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
  float timer; 
  __int64 v24; 
  __int64 v25; 
  int i; 
  unsigned int v28; 
  __int64 v29; 

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
      v28 = 0;
      for ( i = 0; (unsigned int)v7 < stateBuffer->numModels; i = v7 )
      {
        v8 = stateBuffer->models[v7];
        v9 = (unsigned int)v7;
        v29 = (unsigned int)v7;
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
                _RSI = (__int64)&v5->physicsBones[v13 + v14 + v11[20]];
                _RBP = &stateBuffer->boneStates[v13];
                if ( v13 >= stateBuffer->numDynamicBones )
                {
                  LODWORD(v25) = stateBuffer->numDynamicBones;
                  LODWORD(v24) = v13;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 664, ASSERT_TYPE_ASSERT, "(unsigned)( dynamicBoneStateOffset + physicsBoneNum ) < (unsigned)( stateBuffer->numDynamicBones )", "dynamicBoneStateOffset + physicsBoneNum doesn't index stateBuffer->numDynamicBones\n\t%i not in [0, %i)", v24, v25) )
                    __debugbreak();
                }
                if ( v13 >= 0x60 )
                {
                  LODWORD(v25) = 96;
                  LODWORD(v24) = v13;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v24, v25) )
                    __debugbreak();
                }
                if ( ((0x80000000 >> (v13 & 0x1F)) & stateBuffer->validBoneStates.array[(unsigned __int64)v13 >> 5]) != 0 )
                {
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [rbp+0]
                    vmovups ymmword ptr [rsi+1Ch], ymm0
                    vmovups ymm1, ymmword ptr [rbp+20h]
                    vmovups ymmword ptr [rsi+3Ch], ymm1
                    vmovups ymm0, ymmword ptr [rbp+40h]
                    vmovups ymmword ptr [rsi+5Ch], ymm0
                    vmovups ymm1, ymmword ptr [rbp+60h]
                    vmovups ymmword ptr [rsi+7Ch], ymm1
                    vmovups xmm0, xmmword ptr [rbp+80h]
                    vmovups xmmword ptr [rsi+9Ch], xmm0
                    vmovsd  xmm1, qword ptr [rbp+90h]
                    vmovsd  qword ptr [rsi+0ACh], xmm1
                  }
                  timer = stateBuffer->boneStates[v13].noise.rotation[2].timer;
                  *(_BYTE *)(_RSI + 16) &= ~8u;
                  *(float *)(_RSI + 180) = timer;
                }
                ++v13;
              }
              while ( v14 + v13 < v11[21] );
              v3 = dobj;
              v9 = v29;
              v6 = v28;
            }
          }
LABEL_38:
          LODWORD(v7) = i;
        }
        v6 += stateBuffer->numModelDynamicBones[v9];
        v28 = v6;
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
  unsigned int v14; 
  unsigned int *v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned int i; 

  _R14 = outStateBuffer;
  v3 = dobj;
  if ( !outStateBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 514, ASSERT_TYPE_ASSERT, "(outStateBuffer != 0)", (const char *)&queryFormat, "outStateBuffer != NULL") )
    __debugbreak();
  *(_QWORD *)&_R14->numModels = 0i64;
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
          Copy_DObjPhysicsState(&_R14->dobjPhysicsState, &v5->physicsState);
          *(_QWORD *)_R14->validBoneStates.array = 0i64;
          v6 = 0;
          _R14->validBoneStates.array[2] = 0;
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
                  _R14->models[_R14->numModels] = Model;
                  _R14->modelParentBoneNames[_R14->numModels] = DObjGetModelParentBoneNameScriptString(v3, v8);
                  _R14->numModelDynamicBones[_R14->numModels++] = v7[21];
                  if ( _R14->numDynamicBones + v7[21] > 0x46 )
                  {
                    LODWORD(v23) = 70;
                    LODWORD(v22) = _R14->numDynamicBones + v7[21];
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 563, ASSERT_TYPE_ASSERT, "( outStateBuffer->numDynamicBones + modelInfo->numPhysicsBones ) <= ( ( sizeof( *array_counter( outStateBuffer->boneStates ) ) + 0 ) )", "outStateBuffer->numDynamicBones + modelInfo->numPhysicsBones not in [0, ARRAY_COUNT( outStateBuffer->boneStates )]\n\t%u not in [0, %u]", v22, v23) )
                      __debugbreak();
                  }
                  LOBYTE(v10) = v7[21];
                  v11 = 0;
                  if ( (_BYTE)v10 )
                  {
                    do
                    {
                      _RAX = (__int64)&v5->physicsBones[v11 + v7[20]];
                      if ( *(_WORD *)_RAX != 255 )
                      {
                        __asm { vmovups ymm0, ymmword ptr [rax+1Ch] }
                        v14 = v11 + _R14->numDynamicBones;
                        _RDX = (int)v14;
                        __asm
                        {
                          vmovups ymmword ptr [rdx+r14+430h], ymm0
                          vmovups ymm1, ymmword ptr [rax+3Ch]
                          vmovups ymmword ptr [rdx+r14+450h], ymm1
                          vmovups ymm0, ymmword ptr [rax+5Ch]
                          vmovups ymmword ptr [rdx+r14+470h], ymm0
                          vmovups ymm1, ymmword ptr [rax+7Ch]
                          vmovups ymmword ptr [rdx+r14+490h], ymm1
                          vmovups xmm0, xmmword ptr [rax+9Ch]
                          vmovups xmmword ptr [rdx+r14+4B0h], xmm0
                          vmovsd  xmm1, qword ptr [rax+0ACh]
                          vmovsd  qword ptr [rdx+r14+4C0h], xmm1
                        }
                        _R14->boneStates[_RDX].noise.rotation[2].timer = *(float *)(_RAX + 180);
                        if ( v14 >= 0x60 )
                        {
                          LODWORD(v25) = 96;
                          LODWORD(v24) = v14;
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v24, v25) )
                            __debugbreak();
                        }
                        v21 = &_R14->validBoneStates.array[(unsigned __int64)v14 >> 5];
                        *v21 |= 0x80000000 >> (v14 & 0x1F);
                      }
                      v10 = v7[21];
                      ++v11;
                    }
                    while ( v11 < v10 );
                    v6 = i;
                    v3 = dobj;
                  }
                  _R14->numDynamicBones += (unsigned __int8)v10;
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

void __fastcall XAnimBonePhysicsSetGroundPlaneHeight(DObj *dobj, double height)
{
  int v8; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 771, ASSERT_TYPE_ASSERT, "(dobj != nullptr)", (const char *)&queryFormat, "dobj != nullptr") )
    __debugbreak();
  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    if ( DObjProceduralBones_TryLock(dobj) )
    {
      __asm { vmovss  [rsp+48h+arg_0], xmm6 }
      if ( (v8 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 784, ASSERT_TYPE_ASSERT, "(!IS_NAN( height ))", (const char *)&queryFormat, "!IS_NAN( height )") )
        __debugbreak();
      __asm { vmovss  dword ptr [rdi+12Ch], xmm6 }
      DObjProceduralBones_Unlock(dobj);
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  void *v10; 
  const DObj *obj; 
  char *Value; 
  unsigned int *v15; 
  unsigned int v16; 
  _QWORD *v17; 
  char *v18; 
  __int64 v19; 
  unsigned __int64 v20; 
  ThreadContext CurrentThreadContext; 
  unsigned int numPhysicsBones; 
  const dvar_t *v29; 
  char v30; 
  bool v31; 
  unsigned int v32; 
  unsigned __int64 boneIndex; 
  bool v48; 
  unsigned __int16 parentBoneIndex; 
  unsigned __int64 v58; 
  bool v59; 
  const dvar_t *v70; 
  const dvar_t *v71; 
  bool v73; 
  int i; 
  float4 *outModelTranslation; 
  float4 *outModelTranslationa; 
  __int64 v91; 
  char v92; 
  bool teleportBones; 
  char v94; 
  unsigned int v95; 
  XAnimBonePhysicsUpdateContext context; 
  __int64 v97; 
  vec3_t inoutTrans1; 
  vec3_t out; 
  vec3_t outRootTrans; 
  vec4_t inoutQuat1; 
  vec3_t trans; 
  vec3_t v103; 
  vec3_t outInvTrans; 
  vec4_t outInvQuat; 
  float4 outModelQuat; 
  float4 v107; 
  vec4_t quat; 
  float4 v109; 
  float4 v110; 
  float4 v111; 
  float4 v112; 
  vec3_t outPinConstraintPoints; 
  DObjAnimMat outTransforms; 
  XAnimCollisionShape outShapes; 
  char v116; 
  char v124; 

  v10 = alloca(v2);
  v97 = -2i64;
  __asm
  {
    vmovaps [rsp+1950h+var_40], xmm6
    vmovaps [rsp+1950h+var_50], xmm7
    vmovaps [rsp+1950h+var_60], xmm8
    vmovaps [rsp+1950h+var_70], xmm9
    vmovaps [rsp+1950h+var_80], xmm10
    vmovaps [rsp+1950h+var_90], xmm11
    vmovaps [rsp+1950h+var_A0], xmm12
  }
  _R14 = procBones;
  obj = params->obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2966, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  Value = (char *)Sys_GetValue(0);
  v15 = (unsigned int *)(Value + 19336);
  if ( (unsigned int)(*((_DWORD *)Value + 4834) + 1) >= 3 )
  {
    LODWORD(outModelTranslation) = *((_DWORD *)Value + 4834) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outModelTranslation, 3) )
      __debugbreak();
  }
  v16 = *v15 + 1;
  *v15 = v16;
  if ( v16 >= 3 )
  {
    LODWORD(v91) = 3;
    LODWORD(outModelTranslation) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", outModelTranslation, v91) )
      __debugbreak();
  }
  v17 = Value + 2088;
  v18 = Value + 40;
  if ( *v17 < (unsigned __int64)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v17 += 8i64;
  if ( *v17 >= (unsigned __int64)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v17 = v15;
  if ( *v17 <= (unsigned __int64)v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v19 = (int)*v15;
  v20 = __rdtsc();
  v15[v19 + 2] = v20;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 431, NULL, 0);
  if ( (obj->proceduralBonesHandle.m_value & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2970, ASSERT_TYPE_ASSERT, "(dobj->proceduralBonesHandle.HasDynamicBones())", (const char *)&queryFormat, "dobj->proceduralBonesHandle.HasDynamicBones()") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2971, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  XAnimBonePhysics_ClearAudioEvents(_R14);
  numPhysicsBones = _R14->numPhysicsBones;
  v95 = numPhysicsBones;
  _RDI = DCONST_DVARFLT_xanim_physicsBonesUpdateRate;
  if ( !DCONST_DVARFLT_xanim_physicsBonesUpdateRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsBonesUpdateRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm11, dword ptr [rdi+28h]
    vmovss  xmm12, cs:__real@3f800000
    vdivss  xmm9, xmm12, xmm11
  }
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, 0, &outModelQuat, &v107);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+1850h+outModelQuat.v]
    vmovups xmmword ptr [rbp+1850h+quat], xmm0
    vmovups xmm1, xmmword ptr [rbp+1850h+var_1810.v]
    vmovss  dword ptr [rbp+1850h+trans], xmm1
    vextractps dword ptr [rbp+1850h+trans+4], xmm1, 1
    vextractps dword ptr [rbp+1850h+trans+8], xmm1, 2
  }
  QuatTrans_Inverse(&quat, &trans, &outInvQuat, &outInvTrans);
  if ( _R14->physicsState.firstUpdate )
    goto LABEL_36;
  v29 = DCONST_DVARBOOL_xanim_physicsForceSettle;
  if ( !DCONST_DVARBOOL_xanim_physicsForceSettle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsForceSettle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  v92 = 0;
  if ( v29->current.enabled )
LABEL_36:
    v92 = 1;
  _R14->physicsState.firstUpdate = 0;
  v30 = 0;
  v94 = 0;
  teleportBones = _R14->physicsState.teleportBones;
  v31 = teleportBones;
  _R14->physicsState.teleportBones = 0;
  if ( teleportBones )
  {
    QuatTransform(&outInvQuat, &_R14->physicsState.teleportTranslationDelta, &out);
    DObjPhysicsState_GetRootTrans(&_R14->physicsState, &outRootTrans);
    DObjPhysicsState_SetPrevRootTrans(&_R14->physicsState, &outRootTrans);
    memset(&outRootTrans, 0, sizeof(outRootTrans));
    v31 = teleportBones;
  }
  v32 = 1;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  if ( numPhysicsBones > 1 )
  {
    do
    {
      _RSI = &_R14->physicsBones[v32];
      if ( _RSI->boneIndex != 255 )
      {
        if ( !DObjIsValidBoneIndex(obj, _RSI->boneIndex) )
        {
          LODWORD(outModelTranslationa) = _RSI->boneIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3017, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( dobj, physicsBone->boneIndex ) ) )", "( physicsBone->boneIndex ) = %i", outModelTranslationa) )
            __debugbreak();
        }
        if ( v92 || (_RSI->flags & 8) != 0 )
        {
          boneIndex = _RSI->boneIndex;
          if ( _RSI->boneIndex >> 15 )
          {
            v48 = (obj->skel.partBits.anim.array[7] & 2) != 0;
          }
          else
          {
            if ( (unsigned int)boneIndex >= 0x100 )
            {
              LODWORD(v91) = 256;
              LODWORD(outModelTranslationa) = _RSI->boneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outModelTranslationa, v91) )
                __debugbreak();
            }
            v48 = ((0x80000000 >> (boneIndex & 0x1F)) & obj->skel.partBits.anim.array[boneIndex >> 5]) != 0;
          }
          if ( !v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3027, ASSERT_TYPE_ASSERT, "(XAnimTestPartBit( &dobj->skel.partBits.anim, physicsBone->boneIndex ))", (const char *)&queryFormat, "XAnimTestPartBit( &dobj->skel.partBits.anim, physicsBone->boneIndex )") )
            __debugbreak();
          _RSI->flags &= ~8u;
          v94 = 1;
          XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, _RSI->boneIndex, &v109, &v110);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+1850h+var_17F0.v]
            vmovups xmmword ptr [rsi+1Ch], xmm0
            vmovups xmm6, xmmword ptr [rbp+1850h+var_17E0.v]
            vshufps xmm7, xmm6, xmm6, 55h ; 'U'
            vshufps xmm8, xmm6, xmm6, 0AAh ; 'ª'
          }
          QuatTransform(&_RSI->state.rotationQuat, &_RSI->jointOffset, &v103);
          _RDI = (unsigned __int16 *)&_RSI->state.position;
          __asm
          {
            vsubss  xmm0, xmm6, dword ptr [rbp+1850h+var_1858]
            vmovss  dword ptr [rdi], xmm0
            vsubss  xmm1, xmm7, dword ptr [rbp+1850h+var_1858+4]
            vmovss  dword ptr [rdi+4], xmm1
            vsubss  xmm0, xmm8, dword ptr [rbp+1850h+var_1858+8]
            vmovss  dword ptr [rdi+8], xmm0
          }
          QuatTrans_MultiplyEquals(&_RSI->state.rotationQuat, &_RSI->state.position, &outInvQuat, &outInvTrans);
          _RSI->state.prevRotationQuat.v[0] = _RSI->state.rotationQuat.v[0];
          _RSI->state.prevRotationQuat.v[1] = _RSI->state.rotationQuat.v[1];
          _RSI->state.prevRotationQuat.v[2] = _RSI->state.rotationQuat.v[2];
          _RSI->state.prevRotationQuat.v[3] = _RSI->state.rotationQuat.v[3];
          _RSI->state.prevPosition.v[0] = _RSI->state.position.v[0];
          _RSI->state.prevPosition.v[1] = _RSI->state.position.v[1];
          _RSI->state.prevPosition.v[2] = _RSI->state.position.v[2];
        }
        else if ( v31 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1850h+out]
            vaddss  xmm1, xmm0, dword ptr [rsi+2Ch]
            vmovss  dword ptr [rsi+2Ch], xmm1
            vmovss  xmm2, dword ptr [rbp+1850h+out+4]
            vaddss  xmm0, xmm2, dword ptr [rsi+30h]
            vmovss  dword ptr [rsi+30h], xmm0
            vmovss  xmm1, dword ptr [rbp+1850h+out+8]
            vaddss  xmm2, xmm1, dword ptr [rsi+34h]
            vmovss  dword ptr [rsi+34h], xmm2
            vmovss  xmm0, dword ptr [rbp+1850h+out]
            vaddss  xmm1, xmm0, dword ptr [rsi+48h]
            vmovss  dword ptr [rsi+48h], xmm1
            vmovss  xmm2, dword ptr [rbp+1850h+out+4]
            vaddss  xmm0, xmm2, dword ptr [rsi+4Ch]
            vmovss  dword ptr [rsi+4Ch], xmm0
            vmovss  xmm1, dword ptr [rbp+1850h+out+8]
            vaddss  xmm2, xmm1, dword ptr [rsi+50h]
            vmovss  dword ptr [rsi+50h], xmm2
          }
        }
        if ( _RSI->parentPhysicsBoneIndex == 0xFF )
        {
          if ( _RSI->rootPhysicsBoneIndex != v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3056, ASSERT_TYPE_ASSERT, "(physicsBone->rootPhysicsBoneIndex == physicsBoneIndex)", (const char *)&queryFormat, "physicsBone->rootPhysicsBoneIndex == physicsBoneIndex") )
            __debugbreak();
          parentBoneIndex = _RSI->parentBoneIndex;
          if ( parentBoneIndex == 255 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
              vmovups xmmword ptr [rbp+1850h+inoutQuat1], xmm0
              vmovss  dword ptr [rbp+1850h+inoutTrans1], xmm10
              vmovss  dword ptr [rbp+1850h+inoutTrans1+4], xmm10
              vmovss  dword ptr [rbp+1850h+inoutTrans1+8], xmm10
            }
          }
          else
          {
            if ( !DObjIsValidBoneIndex(obj, parentBoneIndex) )
            {
              LODWORD(outModelTranslationa) = _RSI->parentBoneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3068, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( dobj, physicsBone->parentBoneIndex ) ) )", "( physicsBone->parentBoneIndex ) = %i", outModelTranslationa) )
                __debugbreak();
            }
            v58 = _RSI->parentBoneIndex;
            if ( _RSI->parentBoneIndex >> 15 )
            {
              v59 = (obj->skel.partBits.anim.array[7] & 2) != 0;
            }
            else
            {
              if ( (unsigned int)v58 >= 0x100 )
              {
                LODWORD(v91) = 256;
                LODWORD(outModelTranslationa) = _RSI->parentBoneIndex;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outModelTranslationa, v91) )
                  __debugbreak();
              }
              v59 = ((0x80000000 >> (v58 & 0x1F)) & obj->skel.partBits.anim.array[v58 >> 5]) != 0;
            }
            if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 3070, ASSERT_TYPE_ASSERT, "(XAnimTestPartBit( &dobj->skel.partBits.anim, physicsBone->parentBoneIndex ))", (const char *)&queryFormat, "XAnimTestPartBit( &dobj->skel.partBits.anim, physicsBone->parentBoneIndex )") )
              __debugbreak();
            XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, _RSI->parentBoneIndex, &v111, &v112);
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+1850h+var_17D0.v]
              vmovups xmmword ptr [rbp+1850h+inoutQuat1], xmm0
              vmovups xmm1, xmmword ptr [rbp+1850h+var_17C0.v]
              vmovss  dword ptr [rbp+1850h+inoutTrans1], xmm1
              vextractps dword ptr [rbp+1850h+inoutTrans1+4], xmm1, 1
              vextractps dword ptr [rbp+1850h+inoutTrans1+8], xmm1, 2
            }
            QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, &outInvQuat, &outInvTrans);
          }
          QuatTransform(&inoutQuat1, &_RSI->localBasePoseTrans, &outRootTrans);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1850h+outRootTrans]
            vaddss  xmm1, xmm0, dword ptr [rbp+1850h+inoutTrans1]
            vmovss  dword ptr [rsi+0E0h], xmm1
            vmovss  xmm2, dword ptr [rbp+1850h+outRootTrans+4]
            vaddss  xmm0, xmm2, dword ptr [rbp+1850h+inoutTrans1+4]
            vmovss  dword ptr [rsi+0E4h], xmm0
            vmovss  xmm1, dword ptr [rbp+1850h+outRootTrans+8]
            vaddss  xmm2, xmm1, dword ptr [rbp+1850h+inoutTrans1+8]
            vmovss  dword ptr [rsi+0E8h], xmm2
            vmovups xmm0, xmmword ptr [rbp+1850h+inoutQuat1]
            vmovups xmmword ptr [rsi+0D0h], xmm0
          }
        }
      }
      ++v32;
      v31 = teleportBones;
    }
    while ( v32 < v95 );
    v30 = v94;
  }
  XAnimBonePhysics_CalculateCustomPinConstraintPoints(params, _R14, &outInvQuat, &outInvTrans, &outPinConstraintPoints);
  XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams(params, _R14, &outTransforms, 0x20u);
  XAnimBonePhysics_PreTransformCollidableBoneShapes(_R14, &outTransforms, &outShapes, 0x40u);
  XAnimBonePhysics_CalculateInheritedAcceleration(_R14);
  __asm { vmovss  [rbp+1850h+context.timeStep], xmm9 }
  v70 = DCONST_DVARINT_xanim_physicsMaxPositionSolverIterations;
  if ( !DCONST_DVARINT_xanim_physicsMaxPositionSolverIterations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxPositionSolverIterations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  context.maxPositionSolverIterations = v70->current.unsignedInt;
  context.contacts = (XAnimCollisionContact *)&v116;
  context.maxContacts = 55;
  context.pinConstraintPoints = &outPinConstraintPoints;
  context.collidableBoneCollisionShapes = &outShapes;
  context.collidableBoneTransforms = &outTransforms;
  context.dobj = obj;
  context.procBones = _R14;
  context.firstPhysicsBoneIndex = 1;
  context.endPhysicsBoneIndex = _R14->numPhysicsBones;
  if ( v30 )
    goto LABEL_88;
  v71 = DCONST_DVARBOOL_xanim_physicsForceSettle;
  if ( !DCONST_DVARBOOL_xanim_physicsForceSettle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsForceSettle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v71);
  if ( v71->current.enabled )
LABEL_88:
    XAnimBonePhysics_Settle(&context, params);
  __asm { vmovss  xmm6, dword ptr [r14+60h] }
  v73 = 0;
  for ( i = 0; i < 2; v73 = (unsigned int)i < 2 )
  {
    __asm { vcomiss xmm6, xmm9 }
    if ( v73 )
      break;
    XAnimBonePhysics_Simulate(&context, params);
    ++i;
    __asm { vsubss  xmm6, xmm6, xmm9 }
  }
  __asm
  {
    vmovaps xmm1, xmm9; Y
    vmovaps xmm0, xmm6; X
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmovss  dword ptr [r14+60h], xmm0 }
  _R14->physicsState.deltaTime = 0.0;
  __asm
  {
    vmulss  xmm0, xmm11, xmm6; val
    vmovaps xmm2, xmm12; max
    vmovaps xmm1, xmm10; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovaps xmm3, xmm0; lerpFraction }
  XAnimBonePhysics_SetDynamicBoneTransforms(params, _R14->physicsBones, _R14->numPhysicsBones, *(float *)&_XMM3);
  Profile_EndInternal(NULL);
  _R11 = &v124;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
XAnimBonePhysicsUpdateTime
==============
*/

void __fastcall XAnimBonePhysicsUpdateTime(DObj *dobj, double deltaTime)
{
  DObjProceduralBones *v5; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm1
  }
  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v5 = DObjProceduralBones_TryLock(dobj);
    _RBX = v5;
    if ( v5 )
    {
      if ( !v5->numPhysicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 311, ASSERT_TYPE_ASSERT, "(procBones->numPhysicsBones > 0)", (const char *)&queryFormat, "procBones->numPhysicsBones > 0") )
        __debugbreak();
      __asm
      {
        vaddss  xmm0, xmm6, dword ptr [rbx+64h]
        vaddss  xmm1, xmm6, dword ptr [rbx+60h]
        vmovss  dword ptr [rbx+64h], xmm0
        vmovss  dword ptr [rbx+60h], xmm1
      }
      DObjProceduralBones_Unlock(dobj);
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
XAnimBonePhysics_AddAudioEvent
==============
*/
bool XAnimBonePhysics_AddAudioEvent(DObjProceduralBones *procBones, unsigned int physicsBoneIndex, const vec3_t *position, const SndAliasLookup *sound, float strength)
{
  unsigned __int8 numAudioEvents; 
  bool result; 
  __int64 v13; 

  _RBX = procBones;
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 436, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  if ( physicsBoneIndex >= _RBX->numPhysicsBones )
  {
    LODWORD(v13) = physicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 437, ASSERT_TYPE_ASSERT, "(unsigned)( physicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "physicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v13, _RBX->numPhysicsBones) )
      __debugbreak();
  }
  if ( !sound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 438, ASSERT_TYPE_ASSERT, "(sound != 0)", (const char *)&queryFormat, "sound != NULL") )
    __debugbreak();
  numAudioEvents = _RBX->physicsState.numAudioEvents;
  if ( numAudioEvents >= 3u || !sound->name )
    return 0;
  __asm { vmovss  xmm0, [rsp+48h+strength] }
  _RCX = numAudioEvents;
  _RBX->physicsState.audioEvents[_RCX].localPosition.v[0] = position->v[0];
  _RBX->physicsState.audioEvents[_RCX].localPosition.v[1] = position->v[1];
  _RBX->physicsState.audioEvents[_RCX].localPosition.v[2] = position->v[2];
  _RBX->physicsState.audioEvents[_RCX].sound = (SndAliasLookup)sound->name;
  result = 1;
  __asm { vmovss  dword ptr [rbx+rcx*8+0F4h], xmm0 }
  ++_RBX->physicsState.numAudioEvents;
  return result;
}

/*
==============
XAnimBonePhysics_ApplyPositionDelta
==============
*/
void XAnimBonePhysics_ApplyPositionDelta(XAnimPhysicsBone *physicsBone, const float4 *deltaPos)
{
  int v10; 
  int v11; 
  int v12; 
  __int128 v13; 

  __asm { vmovss  xmm0, dword ptr [rcx+2Ch] }
  HIDWORD(v13) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+40h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rcx+30h], 10h
    vinsertps xmm3, xmm3, dword ptr [rcx+34h], 20h ; ' '
    vaddps  xmm2, xmm3, xmmword ptr [rdx]
    vmovss  [rsp+68h+var_38], xmm2
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vshufps xmm1, xmm2, xmm2, 0AAh ; 'ª'
    vmovss  dword ptr [rcx+2Ch], xmm2
    vmovss  dword ptr [rcx+30h], xmm0
    vmovss  dword ptr [rcx+34h], xmm1
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+68h+var_38], xmm0 }
  if ( (v11 & 0x7F800000) == 2139095040 )
    goto LABEL_8;
  __asm { vmovss  [rsp+68h+var_38], xmm1 }
  if ( (v12 & 0x7F800000) == 2139095040 )
  {
LABEL_8:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 295, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.position)[0]) && IS_FINITE((physicsBone->state.position)[1]) && IS_FINITE((physicsBone->state.position)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.position)[0]) && IS_FINITE((physicsBone->state.position)[1]) && IS_FINITE((physicsBone->state.position)[2])") )
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
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  char v54; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovaps [rsp+78h+var_38], xmm8
  }
  _RDI = deltaRot;
  _RBX = physicsBone;
  if ( !physicsBone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 268, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL") )
    __debugbreak();
  __asm
  {
    vmovups xmm8, xmmword ptr [rbx+1Ch]
    vmovups xmm2, xmmword ptr [rdi]
    vxorps  xmm0, xmm0, xmm0
    vshufps xmm1, xmm2, xmm0, 0FAh ; 'ú'
    vshufps xmm3, xmm2, xmm1, 84h ; '„'
    vmulps  xmm4, xmm3, cs:__xmm@3f0000003f0000003f0000003f000000
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vshufps xmm6, xmm4, xmm4, 0FFh
    vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm2, xmm8, xmm8, 0D2h ; 'Ò'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm0, xmm3
    vmulps  xmm1, xmm8, xmm4
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
    vshufps xmm7, xmm8, xmm8, 0FFh
    vmulps  xmm0, xmm7, xmm6
    vsubps  xmm2, xmm0, xmm3
    vmulps  xmm4, xmm7, xmm4
    vmulps  xmm1, xmm8, xmm6
    vaddps  xmm1, xmm4, xmm1
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm1, xmm2, xmm0, 7
    vaddps  xmm3, xmm1, xmm8
    vmulps  xmm0, xmm3, xmm3
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm3, xmm1
    vmovss  [rsp+78h+var_48], xmm2
    vmovups xmmword ptr [rbx+1Ch], xmm2
  }
  if ( (v47 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+20h]
    vmovss  [rsp+78h+var_48], xmm0
  }
  if ( (v48 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+24h]
    vmovss  [rsp+78h+var_48], xmm0
  }
  if ( (v49 & 0x7F800000) == 2139095040 )
    goto LABEL_13;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+78h+var_48], xmm0
  }
  if ( (v50 & 0x7F800000) == 2139095040 )
  {
LABEL_13:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 282, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.rotationQuat)[0]) && IS_FINITE((physicsBone->state.rotationQuat)[1]) && IS_FINITE((physicsBone->state.rotationQuat)[2]) && IS_FINITE((physicsBone->state.rotationQuat)[3]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.rotationQuat)[0]) && IS_FINITE((physicsBone->state.rotationQuat)[1]) && IS_FINITE((physicsBone->state.rotationQuat)[2]) && IS_FINITE((physicsBone->state.rotationQuat)[3])") )
      __debugbreak();
  }
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
XAnimBonePhysics_ApplyTranslationalSpringDamping
==============
*/
float4 *XAnimBonePhysics_ApplyTranslationalSpringDamping(float4 *result, DObjProceduralBones *procBones, int physicsBoneIndex, const float4 *velocity)
{
  __int64 v10; 
  XAnimPhysicsBone *physicsBones; 
  unsigned __int8 parentPhysicsBoneIndex; 
  float4 *v100; 
  __int64 v107; 
  __int64 v108; 
  __int128 v109; 
  char v111; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps [rsp+0E8h+var_88], xmm10
  }
  v10 = physicsBoneIndex;
  _R15 = velocity;
  _R14 = result;
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2125, ASSERT_TYPE_ASSERT, "(procBones)", (const char *)&queryFormat, "procBones") )
    __debugbreak();
  if ( (unsigned int)v10 >= procBones->numPhysicsBones )
  {
    LODWORD(v107) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2126, ASSERT_TYPE_ASSERT, "(unsigned)( physicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "physicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v107, procBones->numPhysicsBones) )
      __debugbreak();
  }
  physicsBones = procBones->physicsBones;
  _RSI = v10;
  _RAX = physicsBones[v10].properties;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+98h]
    vmovss  xmm1, dword ptr [rax+9Ch]
    vmovss  xmm2, dword ptr [rax+0A0h]
  }
  HIDWORD(v109) = 0;
  __asm
  {
    vmovups xmm10, xmmword ptr [rsp+40h]
    vmovss  xmm10, xmm10, xmm0
    vinsertps xmm10, xmm10, xmm1, 10h
    vinsertps xmm10, xmm10, xmm2, 20h ; ' '
  }
  if ( (unsigned int)v10 >= procBones->numPhysicsBones )
  {
    LODWORD(v108) = procBones->numPhysicsBones;
    LODWORD(v107) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1004, ASSERT_TYPE_ASSERT, "(unsigned)( physicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "physicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v107, v108) )
      __debugbreak();
  }
  _RDI = procBones->physicsBones;
  parentPhysicsBoneIndex = _RDI[_RSI].parentPhysicsBoneIndex;
  if ( parentPhysicsBoneIndex == 0xFF )
  {
    __asm { vmovups xmm4, xmmword ptr [rsi+rdi+0D0h] }
  }
  else
  {
    if ( parentPhysicsBoneIndex >= procBones->numPhysicsBones )
    {
      LODWORD(v108) = procBones->numPhysicsBones;
      LODWORD(v107) = parentPhysicsBoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1008, ASSERT_TYPE_ASSERT, "(unsigned)( physicsBone->parentPhysicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "physicsBone->parentPhysicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v107, v108) )
        __debugbreak();
    }
    _RCX = 264i64 * _RDI[_RSI].parentPhysicsBoneIndex;
    _RAX = procBones->physicsBones;
    __asm { vmovups xmm4, xmmword ptr [rcx+rax+1Ch] }
  }
  _RAX = physicsBones[_RSI].properties;
  __asm
  {
    vshufps xmm6, xmm4, xmm4, 0FFh
    vmovups xmm2, xmmword ptr [rax+44h]
    vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    vshufps xmm1, xmm2, xmm2, 0AAh ; 'ª'
    vmovaps xmm8, xmm2
    vinsertps xmm8, xmm8, xmm0, 10h
    vinsertps xmm8, xmm8, xmm1, 20h ; ' '
    vshufps xmm2, xmm2, xmm2, 0FFh
    vinsertps xmm8, xmm8, xmm2, 30h ; '0'
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
    vshufps xmm7, xmm8, xmm8, 0FFh
    vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm3, xmm0
    vmulps  xmm1, xmm4, xmm8
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
    vmulps  xmm0, xmm7, xmm6
    vsubps  xmm2, xmm0, xmm3
    vmulps  xmm4, xmm4, xmm7
    vmovups xmm7, xmmword ptr [r15]
    vmulps  xmm1, xmm6, xmm8
    vaddps  xmm1, xmm4, xmm1
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm3, xmm2, xmm0, 7
    vmulps  xmm1, xmm3, xmm3
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm9, xmm3, xmm1
    vmulps  xmm0, xmm9, cs:__xmm@3f800000bf800000bf800000bf800000
    vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm5, xmm0, xmm0, 0FFh
    vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm7
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm5
    vmulps  xmm7, xmm10, xmm3
    vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vshufps xmm8, xmm9, xmm9, 0D2h ; 'Ò'
    vmulps  xmm2, xmm1, xmm8
    vshufps xmm6, xmm9, xmm9, 0C9h ; 'É'
    vmulps  xmm3, xmm0, xmm6
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vshufps xmm5, xmm9, xmm9, 0FFh
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm7
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm5
    vmovups xmmword ptr [r14], xmm3
  }
  v100 = _R14;
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
  return v100;
}

/*
==============
XAnimBonePhysics_CalcNoiseAcceleration
==============
*/
float4 *XAnimBonePhysics_CalcNoiseAcceleration(float4 *result, const XAnimDynamicBoneNoiseAxisSpace relative, const float4 *invRootQuat, const vec4_t *boneQuatV, const float4 *currentVelocity, const vec3_t *noiseVelocityV, const float invDeltaTime)
{
  float4 *v12; 
  __int128 v89; 

  _RAX = noiseVelocityV;
  v12 = result;
  __asm
  {
    vmovaps [rsp+98h+var_18], xmm6
    vmovaps [rsp+98h+var_28], xmm7
    vmovaps [rsp+98h+var_48], xmm9
    vmovss  xmm0, dword ptr [rax]
    vmovss  xmm1, dword ptr [rax+4]
    vmovss  xmm2, dword ptr [rax+8]
  }
  HIDWORD(v89) = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp+30h]
    vmovss  xmm9, xmm9, xmm0
    vinsertps xmm9, xmm9, xmm1, 10h
    vinsertps xmm9, xmm9, xmm2, 20h ; ' '
  }
  if ( relative == DYNAMIC_BONE_NOISE_AXIS_WORLD )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r8]
      vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
      vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
      vshufps xmm5, xmm0, xmm0, 0FFh
      vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
      vmulps  xmm3, xmm0, xmm6
      vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
      vmulps  xmm2, xmm1, xmm7
      vsubps  xmm0, xmm3, xmm2
      vaddps  xmm4, xmm0, xmm0
      vmulps  xmm0, xmm5, xmm4
      vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
      vaddps  xmm5, xmm0, xmm9
      vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
      vmulps  xmm2, xmm0, xmm7
      vmulps  xmm3, xmm1, xmm6
      vsubps  xmm1, xmm3, xmm2
    }
LABEL_5:
    __asm { vaddps  xmm9, xmm1, xmm5 }
    goto LABEL_6;
  }
  if ( relative == DYNAMIC_BONE_NOISE_AXIS_JOINT )
  {
    __asm
    {
      vmovups xmm4, xmmword ptr [r8]
      vmovups xmm2, xmmword ptr [r9]
      vmulps  xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vsqrtps xmm1, xmm0
      vshufps xmm6, xmm4, xmm4, 0FFh
      vmovaps [rsp+98h+var_38], xmm8
      vdivps  xmm8, xmm2, xmm1
      vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
      vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
      vshufps xmm7, xmm8, xmm8, 0FFh
      vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
      vmulps  xmm3, xmm1, xmm0
      vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
      vmulps  xmm0, xmm2, xmm1
      vsubps  xmm5, xmm3, xmm0
      vmulps  xmm1, xmm8, xmm4
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm3, xmm2, xmm2
      vmulps  xmm0, xmm7, xmm6
      vsubps  xmm2, xmm0, xmm3
      vmulps  xmm4, xmm7, xmm4
      vmulps  xmm1, xmm6, xmm8
      vmovaps xmm8, [rsp+98h+var_38]
      vaddps  xmm1, xmm4, xmm1
      vaddps  xmm0, xmm5, xmm1
      vblendps xmm3, xmm2, xmm0, 7
      vshufps xmm7, xmm3, xmm3, 0C9h ; 'É'
      vshufps xmm5, xmm3, xmm3, 0FFh
      vshufps xmm6, xmm3, xmm3, 0D2h ; 'Ò'
      vshufps xmm0, xmm9, xmm9, 0C9h ; 'É'
      vmulps  xmm3, xmm0, xmm6
      vshufps xmm1, xmm9, xmm9, 0D2h ; 'Ò'
      vmulps  xmm2, xmm1, xmm7
      vsubps  xmm0, xmm2, xmm3
      vaddps  xmm4, xmm0, xmm0
      vmulps  xmm0, xmm5, xmm4
      vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
      vaddps  xmm5, xmm0, xmm9
      vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
      vmulps  xmm2, xmm0, xmm7
      vmulps  xmm3, xmm1, xmm6
      vsubps  xmm1, xmm2, xmm3
    }
    goto LABEL_5;
  }
LABEL_6:
  __asm
  {
    vbroadcastss xmm0, [rsp+98h+arg_30]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm6, [rsp+98h+var_18]
    vsubps  xmm1, xmm9, xmmword ptr [rax]
    vmovaps xmm9, [rsp+98h+var_48]
    vmulps  xmm1, xmm0, xmm1
    vcmpneqps xmm0, xmm1, xmm1
    vmovmskps eax, xmm0
    vmovups xmmword ptr [rcx], xmm1
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 920, ASSERT_TYPE_SANITY, "( !Float4IsNaN( noiseAccel ) )", (const char *)&queryFormat, "!Float4IsNaN( noiseAccel )") )
    __debugbreak();
  return v12;
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
  __int64 v8; 
  __int64 v9; 
  DObjProceduralBonesModelInfo *modelInfo; 
  unsigned int numPinConstraints; 
  unsigned int v12; 
  __int64 p_boneNameIndexA; 
  __int64 v14; 
  unsigned __int16 v15; 
  int v16; 
  __int64 v26; 
  float4 *outModelTranslation; 
  __int64 v28; 
  __int64 v29; 
  vec3_t inoutTrans1; 
  vec3_t out; 
  vec4_t inoutQuat1; 
  float4 outModelQuat; 
  float4 v38; 

  v5 = procBones;
  _R15 = outPinConstraintPoints;
  if ( procBones->numCustomPinConstraints )
  {
    numModels = procBones->numModels;
    if ( numModels )
    {
      v8 = 0i64;
      v9 = numModels;
      v29 = numModels;
      do
      {
        modelInfo = v5->modelInfo;
        numPinConstraints = modelInfo[v8].numPinConstraints;
        if ( modelInfo[v8].numPinConstraints )
        {
          if ( !modelInfo[v8].dynamicBonesAsset )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2775, ASSERT_TYPE_ASSERT, "(modelInfo->dynamicBonesAsset)", (const char *)&queryFormat, "modelInfo->dynamicBonesAsset") )
              __debugbreak();
            v9 = v29;
          }
          v12 = 0;
          if ( numPinConstraints )
          {
            p_boneNameIndexA = (__int64)&modelInfo[v8].dynamicBonesAsset->customPinConstraints->boneNameIndexA;
            do
            {
              v14 = v12 + modelInfo[v8].firstPinConstraintIndex;
              if ( *(int *)(p_boneNameIndexA - 4) < 0 )
              {
                LODWORD(v28) = *(_DWORD *)(p_boneNameIndexA - 4);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2784, ASSERT_TYPE_ASSERT, "( pin->dynamicBoneIndexB ) >= ( 0 )", "%s >= %s\n\t%i, %i", "pin->dynamicBoneIndexB", "0", v28, 0i64) )
                  __debugbreak();
              }
              if ( *(int *)(p_boneNameIndexA - 8) < 0 )
              {
                v15 = v5->pinConstraintBoneIndices[*(_DWORD *)p_boneNameIndexA + modelInfo[v8].firstBoneIndex];
                if ( (unsigned __int16)(v15 - 254) <= 1u )
                {
                  v26 = v14;
                  *(_QWORD *)outPinConstraintPoints[v26].v = 0i64;
                  outPinConstraintPoints[v26].v[2] = 0.0;
                }
                else
                {
                  v16 = v15;
                  if ( !DObjIsValidBoneIndex(params->obj, v15) )
                  {
                    LODWORD(outModelTranslation) = v16;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2800, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( params->obj, boneIndex ) ) )", "( boneIndex ) = %i", outModelTranslation) )
                      __debugbreak();
                  }
                  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v16, &outModelQuat, &v38);
                  __asm
                  {
                    vmovups xmm1, xmmword ptr [rsp+128h+var_68.v]
                    vmovups xmm0, xmmword ptr [rsp+128h+outModelQuat.v]
                    vmovss  dword ptr [rsp+128h+inoutTrans1], xmm1
                    vextractps dword ptr [rsp+128h+inoutTrans1+4], xmm1, 1
                    vextractps dword ptr [rsp+128h+inoutTrans1+8], xmm1, 2
                    vmovups xmmword ptr [rsp+128h+inoutQuat1], xmm0
                  }
                  QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, invRootQuat, invRootTrans);
                  QuatTransform(&inoutQuat1, (const vec3_t *)(p_boneNameIndexA + 4), &out);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+128h+out]
                    vaddss  xmm1, xmm0, dword ptr [rsp+128h+inoutTrans1]
                  }
                  v5 = procBones;
                  _RCX = 3 * v14;
                  __asm
                  {
                    vmovss  dword ptr [r15+rcx*4], xmm1
                    vmovss  xmm2, dword ptr [rsp+128h+out+4]
                    vaddss  xmm0, xmm2, dword ptr [rsp+128h+inoutTrans1+4]
                    vmovss  dword ptr [r15+rcx*4+4], xmm0
                    vmovss  xmm1, dword ptr [rsp+128h+out+8]
                    vaddss  xmm2, xmm1, dword ptr [rsp+128h+inoutTrans1+8]
                    vmovss  dword ptr [r15+rcx*4+8], xmm2
                  }
                }
              }
              ++v12;
              p_boneNameIndexA += 44i64;
            }
            while ( v12 < numPinConstraints );
            v9 = v29;
          }
        }
        ++v8;
        v29 = --v9;
      }
      while ( v9 );
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
  bool v13; 
  bool v14; 
  char v90; 
  char v91; 
  const dvar_t *v106; 
  int v185; 
  int v186; 
  int v187; 
  vec3_t outRootTrans; 
  vec3_t outPrevRootTrans; 
  __int64 v190; 
  vec3_t v; 
  vec4_t out; 
  vec4_t in1; 
  vec4_t in2; 
  char v195; 
  void *retaddr; 

  _RAX = &retaddr;
  v190 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _RDI = procBones;
  v13 = procBones == NULL;
  if ( !procBones )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2599, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL");
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+64h]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
  }
  if ( !v13 )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f800000
      vdivss  xmm11, xmm1, xmm0
    }
    DObjPhysicsState_GetRootTrans(&_RDI->physicsState, &outRootTrans);
    DObjPhysicsState_GetPrevRootTrans(&_RDI->physicsState, &outPrevRootTrans);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+180h+outRootTrans]
      vsubss  xmm2, xmm0, dword ptr [rsp+180h+outPrevRootTrans]
      vmovss  xmm1, dword ptr [rsp+180h+outRootTrans+4]
      vsubss  xmm3, xmm1, dword ptr [rsp+180h+outPrevRootTrans+4]
      vmovss  xmm0, dword ptr [rsp+180h+outRootTrans+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+180h+outPrevRootTrans+8]
      vmulss  xmm0, xmm2, xmm11
      vmovss  dword ptr [rsp+180h+v], xmm0
      vmulss  xmm0, xmm3, xmm11
      vmovss  dword ptr [rsp+180h+v+4], xmm0
      vmulss  xmm0, xmm4, xmm11
      vmovss  dword ptr [rsp+180h+v+8], xmm0
      vmovss  xmm12, dword ptr [rdi+84h]
      vmovss  xmm7, dword ptr cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm12, xmm7
      vmovss  dword ptr [rbp+80h+in2], xmm0
      vmovss  xmm13, dword ptr [rdi+88h]
      vxorps  xmm1, xmm13, xmm7
      vmovss  dword ptr [rbp+80h+in2+4], xmm1
      vmovss  xmm14, dword ptr [rdi+8Ch]
      vxorps  xmm0, xmm14, xmm7
      vmovss  dword ptr [rbp+80h+in2+8], xmm0
      vmovss  xmm15, dword ptr [rdi+90h]
      vmovss  dword ptr [rbp+80h+in2+0Ch], xmm15
      vmovss  xmm5, dword ptr [rdi+68h]
      vmovss  xmm8, dword ptr [rdi+6Ch]
      vmovss  xmm9, dword ptr [rdi+70h]
      vmovss  xmm10, dword ptr [rdi+74h]
      vmulss  xmm1, xmm13, xmm8
      vmulss  xmm0, xmm12, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm14, xmm9
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm15, xmm10
      vaddss  xmm4, xmm3, xmm0
      vcomiss xmm4, xmm6
    }
    if ( v90 )
    {
      __asm
      {
        vxorps  xmm5, xmm5, xmm7
        vxorps  xmm8, xmm8, xmm7
        vxorps  xmm9, xmm9, xmm7
        vxorps  xmm10, xmm10, xmm7
      }
    }
    __asm
    {
      vsubss  xmm0, xmm5, xmm12
      vsubss  xmm1, xmm8, xmm13
      vsubss  xmm2, xmm9, xmm14
      vsubss  xmm4, xmm10, xmm15
      vmulss  xmm3, xmm11, cs:__real@40000000
      vmulss  xmm0, xmm3, xmm0
      vmovss  dword ptr [rbp+80h+in1], xmm0
      vmulss  xmm1, xmm3, xmm1
      vmovss  dword ptr [rbp+80h+in1+4], xmm1
      vmulss  xmm0, xmm3, xmm2
      vmovss  dword ptr [rbp+80h+in1+8], xmm0
      vmulss  xmm1, xmm3, xmm4
      vmovss  dword ptr [rbp+80h+in1+0Ch], xmm1
    }
    QuatMultiply(&in1, &in2, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+80h+out]
      vxorps  xmm5, xmm0, xmm7
      vmovss  xmm1, dword ptr [rbp+80h+out+4]
      vxorps  xmm4, xmm1, xmm7
      vmovss  xmm0, dword ptr [rbp+80h+out+8]
      vxorps  xmm3, xmm0, xmm7
      vmovss  xmm10, dword ptr [rsp+180h+v]
      vsubss  xmm0, xmm10, dword ptr [rdi+0A0h]
      vmovss  xmm9, dword ptr [rsp+180h+v+4]
      vsubss  xmm1, xmm9, dword ptr [rdi+0A4h]
      vmovss  xmm8, dword ptr [rsp+180h+v+8]
      vsubss  xmm2, xmm8, dword ptr [rdi+0A8h]
      vmulss  xmm13, xmm0, xmm11
      vmulss  xmm14, xmm1, xmm11
      vmulss  xmm12, xmm2, xmm11
      vsubss  xmm0, xmm5, dword ptr [rdi+0B8h]
      vsubss  xmm1, xmm4, dword ptr [rdi+0BCh]
      vsubss  xmm2, xmm3, dword ptr [rdi+0C0h]
      vmulss  xmm0, xmm0, xmm11
      vmovss  dword ptr [rbp+80h+in2], xmm0
      vmulss  xmm1, xmm1, xmm11
      vmovss  dword ptr [rbp+80h+in2+4], xmm1
      vmulss  xmm0, xmm2, xmm11
      vmovss  dword ptr [rbp+80h+in2+8], xmm0
      vmovss  dword ptr [rdi+0A0h], xmm10
      vmovss  dword ptr [rdi+0A4h], xmm9
      vmovss  dword ptr [rdi+0A8h], xmm8
      vmovss  dword ptr [rdi+0B8h], xmm5
      vmovss  dword ptr [rdi+0BCh], xmm4
      vmovss  dword ptr [rdi+0C0h], xmm3
    }
    _RDI->physicsState.prevRootQuat.v[0] = _RDI->physicsState.rootQuat.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+6Ch]
      vmovss  dword ptr [rdi+88h], xmm0
      vmovss  xmm1, dword ptr [rdi+70h]
      vmovss  dword ptr [rdi+8Ch], xmm1
      vmovss  xmm0, dword ptr [rdi+74h]
      vmovss  dword ptr [rdi+90h], xmm0
    }
    DObjPhysicsState_SetPrevRootTrans(&_RDI->physicsState, &outRootTrans);
    _RBX = DCONST_DVARFLT_xanim_physicsExtAngularAccelCap;
    if ( !DCONST_DVARFLT_xanim_physicsExtAngularAccelCap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsExtAngularAccelCap") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm1, dword ptr [rbx+28h]; maxLength }
    Vec3LimitLength((vec3_t *)&in2, *(float *)&_XMM1);
    __asm
    {
      vmovss  dword ptr [rbp+80h+out], xmm6
      vmovss  dword ptr [rbp+80h+out+4], xmm6
      vmovss  dword ptr [rbp+80h+out+8], xmm12
    }
    _RBX = DCONST_DVARFLT_xanim_physicsAccelScale;
    if ( !DCONST_DVARFLT_xanim_physicsAccelScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAccelScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+28h]
      vmulss  xmm0, xmm13, xmm2
      vmovss  dword ptr [rbp+80h+in1], xmm0
      vmulss  xmm1, xmm14, xmm2
      vmovss  dword ptr [rbp+80h+in1+4], xmm1
      vmulss  xmm0, xmm6, xmm2
      vmovss  dword ptr [rbp+80h+in1+8], xmm0
    }
    _RBX = DCONST_DVARFLT_xanim_physicsMaxWorldAccel;
    if ( !DCONST_DVARFLT_xanim_physicsMaxWorldAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxWorldAccel") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm1, dword ptr [rbx+28h]; maxLength }
    Vec3LimitLength((vec3_t *)&in1, *(float *)&_XMM1);
    _RBX = DCONST_DVARFLT_xanim_physicsWorldAccelDeadZone;
    if ( !DCONST_DVARFLT_xanim_physicsWorldAccelDeadZone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsWorldAccelDeadZone") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+28h]
      vmovss  xmm8, dword ptr [rbp+80h+in1+4]
      vmulss  xmm1, xmm8, xmm8
      vmovss  xmm9, dword ptr [rbp+80h+in1]
      vmulss  xmm0, xmm9, xmm9
      vaddss  xmm2, xmm1, xmm0
      vmovss  xmm10, dword ptr [rbp+80h+in1+8]
      vmulss  xmm1, xmm10, xmm10
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm0, xmm3, xmm3
      vcomiss xmm2, xmm0
    }
    if ( v90 )
    {
      __asm
      {
        vxorps  xmm9, xmm9, xmm9
        vxorps  xmm8, xmm8, xmm8
        vxorps  xmm10, xmm10, xmm10
      }
    }
    __asm { vcomiss xmm12, cs:__real@80000000 }
    if ( v90 | v91 )
    {
      _RBX = DVARFLT_xanim_physicsGravity;
      if ( !DVARFLT_xanim_physicsGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsGravity") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm6, dword ptr [rbx+28h] }
      v106 = DCONST_DVARFLT_xanim_physicsMaxWorldAccel;
      if ( !DCONST_DVARFLT_xanim_physicsMaxWorldAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxWorldAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v106);
      __asm { vaddss  xmm1, xmm6, dword ptr [rbx+28h]; maxLength }
    }
    else
    {
      _RBX = DCONST_DVARFLT_xanim_physicsMaxWorldAccel;
      if ( !DCONST_DVARFLT_xanim_physicsMaxWorldAccel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxWorldAccel") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vmovss  xmm1, dword ptr [rbx+28h] }
    }
    Vec3LimitLength((vec3_t *)&out, *(float *)&_XMM1);
    __asm
    {
      vaddss  xmm0, xmm9, dword ptr [rbp+80h+out]
      vaddss  xmm1, xmm8, dword ptr [rbp+80h+out+4]
      vaddss  xmm2, xmm10, dword ptr [rbp+80h+out+8]
      vxorps  xmm8, xmm0, xmm7
      vxorps  xmm6, xmm1, xmm7
      vxorps  xmm7, xmm2, xmm7
      vmovss  [rsp+180h+var_140], xmm8
    }
    if ( (v185 & 0x7F800000) == 2139095040 )
      goto LABEL_50;
    __asm { vmovss  [rsp+180h+var_140], xmm6 }
    if ( (v186 & 0x7F800000) == 2139095040 )
      goto LABEL_50;
    __asm { vmovss  [rsp+180h+var_140], xmm7 }
    if ( (v187 & 0x7F800000) == 2139095040 )
    {
LABEL_50:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2677, ASSERT_TYPE_ASSERT, "(IS_FINITE((accel)[0]) && IS_FINITE((accel)[1]) && IS_FINITE((accel)[2]))", (const char *)&queryFormat, "IS_FINITE((accel)[0]) && IS_FINITE((accel)[1]) && IS_FINITE((accel)[2])") )
        __debugbreak();
    }
    _RBX = DCONST_DVARFLT_xanim_physicsAccelSmoothing;
    if ( !DCONST_DVARFLT_xanim_physicsAccelSmoothing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAccelSmoothing") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm5, dword ptr [rbx+28h]
      vmovss  xmm2, dword ptr [rdi+0ACh]
      vsubss  xmm0, xmm8, xmm2
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rdi+0ACh], xmm2
      vmovss  xmm3, dword ptr [rdi+0B0h]
      vsubss  xmm0, xmm6, xmm3
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, xmm3
      vmovss  dword ptr [rdi+0B0h], xmm2
      vmovss  xmm4, dword ptr [rdi+0B4h]
      vsubss  xmm0, xmm7, xmm4
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rdi+0B4h], xmm2
    }
    _RBX = DCONST_DVARFLT_xanim_physicsAccelSmoothing;
    if ( !DCONST_DVARFLT_xanim_physicsAccelSmoothing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAccelSmoothing") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm6, dword ptr [rbx+28h]
      vmovss  xmm3, dword ptr [rdi+0C4h]
      vmovss  xmm0, dword ptr [rbp+80h+in2]
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm3
      vmovss  dword ptr [rdi+0C4h], xmm3
      vmovss  xmm4, dword ptr [rdi+0C8h]
      vmovss  xmm0, dword ptr [rbp+80h+in2+4]
      vsubss  xmm1, xmm0, xmm4
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm4
      vmovss  dword ptr [rdi+0C8h], xmm3
      vmovss  xmm5, dword ptr [rdi+0CCh]
      vmovss  xmm0, dword ptr [rbp+80h+in2+8]
      vsubss  xmm1, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm5
      vmovss  dword ptr [rdi+0CCh], xmm3
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_physicsExtVelocityCap, "xanim_physicsExtVelocityCap");
    __asm { vmovaps xmm1, xmm0; maxLength }
    Vec3LimitLength(&v, *(float *)&_XMM1);
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_physicsExtVelocitySmoothing, "xanim_physicsExtVelocitySmoothing");
    __asm
    {
      vmovaps xmm6, xmm0
      vmovss  xmm4, dword ptr [rdi+0D0h]
      vmovss  xmm1, dword ptr [rsp+180h+v]
      vsubss  xmm2, xmm1, xmm4
      vmulss  xmm3, xmm2, xmm0
      vaddss  xmm4, xmm3, xmm4
      vmovss  dword ptr [rdi+0D0h], xmm4
      vmovss  xmm5, dword ptr [rdi+0D4h]
      vmovss  xmm1, dword ptr [rsp+180h+v+4]
      vsubss  xmm2, xmm1, xmm5
      vmulss  xmm3, xmm2, xmm0
      vaddss  xmm4, xmm3, xmm5
      vmovss  dword ptr [rdi+0D4h], xmm4
      vmovss  xmm3, dword ptr [rdi+0D8h]
      vmovss  xmm0, dword ptr [rsp+180h+v+8]
      vsubss  xmm1, xmm0, xmm3
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, xmm3
      vmovss  dword ptr [rdi+0D8h], xmm3
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_physicsIdleAngularVelocityThreshold, "xanim_physicsIdleAngularVelocityThreshold");
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+0BCh]
      vmovss  xmm1, dword ptr [rdi+0B8h]
      vmovss  xmm4, dword ptr [rdi+0C0h]
      vmulss  xmm2, xmm1, xmm1
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm2, xmm4, xmm4
      vaddss  xmm4, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm0
      vcomiss xmm4, xmm0
    }
    if ( v90 | v13 )
    {
      Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_physicsIdleVelocitySmoothing, "xanim_physicsIdleVelocitySmoothing");
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vsubss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, dword ptr [rdi+0DCh]
        vaddss  xmm0, xmm2, xmm0
        vmovss  dword ptr [rdi+0DCh], xmm0
      }
    }
    else
    {
      _RDI->physicsState.idleVelocityWeight = 0.0;
    }
  }
  memset(&outPrevRootTrans, 0, sizeof(outPrevRootTrans));
  memset(&outRootTrans, 0, sizeof(outRootTrans));
  _R11 = &v195;
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
  unsigned int v10; 
  __int64 v12; 
  __int64 v85; 

  __asm { vmovaps [rsp+68h+var_38], xmm8 }
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2879, ASSERT_TYPE_ASSERT, "(context != 0)", (const char *)&queryFormat, "context != NULL") )
    __debugbreak();
  if ( !context->procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2880, ASSERT_TYPE_ASSERT, "(context->procBones != 0)", (const char *)&queryFormat, "context->procBones != NULL") )
    __debugbreak();
  firstPhysicsBoneIndex = context->firstPhysicsBoneIndex;
  endPhysicsBoneIndex = context->endPhysicsBoneIndex;
  physicsBones = context->procBones->physicsBones;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  if ( (unsigned int)firstPhysicsBoneIndex >= endPhysicsBoneIndex )
  {
    __asm
    {
      vmovaps xmm8, [rsp+68h+var_38]
      vxorps  xmm0, xmm0, xmm0
    }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+68h+var_18], xmm6
      vmovaps [rsp+68h+var_28], xmm7
    }
    if ( endPhysicsBoneIndex - (unsigned int)firstPhysicsBoneIndex >= 4 )
    {
      v10 = ((endPhysicsBoneIndex - (unsigned int)firstPhysicsBoneIndex - 4) >> 2) + 1;
      _R9 = (__int64)&physicsBones[firstPhysicsBoneIndex + 2].state.angularVelocity.z;
      v12 = v10;
      LODWORD(firstPhysicsBoneIndex) = firstPhysicsBoneIndex + 4 * v10;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r9-224h]
          vmovss  xmm2, dword ptr [r9-220h]
          vmovss  xmm3, dword ptr [r9-21Ch]
          vmovss  xmm6, dword ptr [r9-214h]
          vmovss  xmm5, dword ptr [r9-218h]
          vmovss  xmm7, dword ptr [r9-210h]
        }
        _R9 += 1056i64;
        __asm
        {
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm4, xmm2, xmm1
          vmulss  xmm3, xmm5, xmm5
          vmovss  xmm5, dword ptr [r9-53Ch]
          vmulss  xmm0, xmm6, xmm6
          vmovss  xmm6, dword ptr [r9-538h]
          vaddss  xmm2, xmm3, xmm0
          vmovss  xmm3, dword ptr [r9-528h]
          vmulss  xmm1, xmm7, xmm7
          vmovss  xmm7, dword ptr [r9-534h]
          vaddss  xmm2, xmm2, xmm1
          vaddss  xmm0, xmm4, xmm2
          vmovss  xmm2, dword ptr [r9-52Ch]
          vmaxss  xmm8, xmm0, xmm8
          vmovss  xmm0, dword ptr [r9-530h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm4, xmm2, xmm1
          vmulss  xmm3, xmm5, xmm5
          vmovss  xmm5, dword ptr [r9-430h]
          vmulss  xmm0, xmm6, xmm6
          vmovss  xmm6, dword ptr [r9-434h]
          vaddss  xmm2, xmm3, xmm0
          vmovss  xmm3, dword ptr [r9-420h]
          vmulss  xmm1, xmm7, xmm7
          vmovss  xmm7, dword ptr [r9-42Ch]
          vaddss  xmm2, xmm2, xmm1
          vmovss  xmm1, dword ptr [r9-424h]
          vaddss  xmm0, xmm4, xmm2
          vmaxss  xmm8, xmm0, xmm8
          vmovss  xmm0, dword ptr [r9-428h]
          vmulss  xmm0, xmm0, xmm0
          vmulss  xmm1, xmm1, xmm1
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm4, xmm2, xmm1
          vmulss  xmm3, xmm5, xmm5
          vmovss  xmm5, dword ptr [r9-31Ch]
          vmulss  xmm0, xmm6, xmm6
          vmovss  xmm6, dword ptr [r9-320h]
          vaddss  xmm2, xmm3, xmm0
          vmovss  xmm3, dword ptr [r9-324h]
          vmulss  xmm1, xmm7, xmm7
          vmovss  xmm7, dword ptr [r9-318h]
          vaddss  xmm2, xmm2, xmm1
          vaddss  xmm0, xmm4, xmm2
          vmovss  xmm2, dword ptr [r9-32Ch]
          vmaxss  xmm8, xmm0, xmm8
          vmovss  xmm0, dword ptr [r9-328h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm4, xmm2, xmm1
          vmulss  xmm0, xmm6, xmm6
          vmulss  xmm3, xmm5, xmm5
          vaddss  xmm2, xmm3, xmm0
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm2, xmm2, xmm1
          vaddss  xmm0, xmm4, xmm2
          vmaxss  xmm8, xmm0, xmm8
        }
        --v12;
      }
      while ( v12 );
    }
    if ( (unsigned int)firstPhysicsBoneIndex < endPhysicsBoneIndex )
    {
      _RAX = (__int64)&physicsBones[(unsigned int)firstPhysicsBoneIndex].state.angularVelocity.z;
      v85 = endPhysicsBoneIndex - (unsigned int)firstPhysicsBoneIndex;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax-14h]
          vmovss  xmm2, dword ptr [rax-10h]
          vmovss  xmm3, dword ptr [rax-0Ch]
          vmovss  xmm4, dword ptr [rax-8]
          vmovss  xmm6, dword ptr [rax-4]
          vmovss  xmm7, dword ptr [rax]
        }
        _RAX += 264i64;
        __asm
        {
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm5, xmm2, xmm1
          vmulss  xmm2, xmm6, xmm6
          vmulss  xmm3, xmm4, xmm4
          vaddss  xmm4, xmm3, xmm2
          vmulss  xmm1, xmm7, xmm7
          vaddss  xmm3, xmm4, xmm1
          vaddss  xmm2, xmm5, xmm3
          vmaxss  xmm8, xmm2, xmm8
        }
        --v85;
      }
      while ( v85 );
    }
    __asm
    {
      vmovaps xmm6, [rsp+68h+var_18]
      vmovaps xmm7, [rsp+68h+var_28]
      vmovaps xmm0, xmm8
      vmovaps xmm8, [rsp+68h+var_38]
    }
  }
  return *(float *)&_XMM0;
}

/*
==============
XAnimBonePhysics_FindTwistAngle
==============
*/
float XAnimBonePhysics_FindTwistAngle(const XAnimPhysicsBone *physicsBoneA, const XAnimPhysicsBone *physicsBoneB, const vec3_t *twistAxis, const vec3_t *twistU, const vec3_t *twistV, float4 *outCorrectionAxis)
{
  float4 v250; 
  float4 v251; 
  __int128 v255; 
  float4 v256; 
  char v257; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
  }
  _R14 = twistV;
  _RBP = twistU;
  _R15 = outCorrectionAxis;
  _RSI = twistAxis;
  _RDI = physicsBoneB;
  _RBX = physicsBoneA;
  if ( !physicsBoneA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1837, ASSERT_TYPE_ASSERT, "(physicsBoneA != 0)", (const char *)&queryFormat, "physicsBoneA != NULL") )
    __debugbreak();
  if ( !_RBX->properties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1838, ASSERT_TYPE_ASSERT, "(physicsBoneA->properties != 0)", (const char *)&queryFormat, "physicsBoneA->properties != NULL") )
    __debugbreak();
  __asm
  {
    vmovups xmm6, xmmword ptr [rbx+1Ch]
    vmovups [rsp+188h+var_128], xmm6
  }
  if ( _RDI )
  {
    __asm { vmovups xmm7, xmmword ptr [rdi+1Ch] }
  }
  else
  {
    if ( _RBX->parentPhysicsBoneIndex != 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1848, ASSERT_TYPE_ASSERT, "(physicsBoneA->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX)", (const char *)&queryFormat, "physicsBoneA->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX") )
      __debugbreak();
    __asm { vmovups xmm7, xmmword ptr [rbx+0D0h] }
  }
  __asm { vmovss  xmm0, dword ptr [rsi] }
  HIDWORD(v255) = 0;
  __asm
  {
    vmovups xmm11, xmmword ptr [rsp+90h]
    vmovss  xmm11, xmm11, xmm0
    vmovss  xmm0, dword ptr [rbp+0]
    vinsertps xmm11, xmm11, dword ptr [rsi+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rsi+8], 20h ; ' '
    vmovups xmmword ptr [rsp+90h], xmm11
  }
  HIDWORD(v255) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp+90h]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rbp+4], 10h
    vinsertps xmm3, xmm3, dword ptr [rbp+8], 20h ; ' '
    vmovss  xmm0, dword ptr [r14]
    vmovups xmmword ptr [rsp+90h], xmm3
  }
  v256.v.m128_i32[3] = 0;
  __asm { vmovups xmm15, [rsp+188h+var_E8] }
  _RAX = _RBX->properties;
  __asm
  {
    vmovss  xmm15, xmm15, xmm0
    vinsertps xmm15, xmm15, dword ptr [r14+4], 10h
    vinsertps xmm15, xmm15, dword ptr [r14+8], 20h ; ' '
    vmovups xmm0, xmmword ptr [rax+44h]
    vshufps xmm12, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm14, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm13, xmm0, xmm0, 0FFh
    vshufps xmm9, xmm11, xmm11, 0C9h ; 'É'
    vshufps xmm8, xmm11, xmm11, 0D2h ; 'Ò'
    vmulps  xmm1, xmm12, xmm8
    vmulps  xmm0, xmm14, xmm9
    vsubps  xmm2, xmm1, xmm0
    vaddps  xmm4, xmm2, xmm2
    vmulps  xmm0, xmm13, xmm4
    vaddps  xmm5, xmm0, xmm11
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm14
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm12
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm10, xmm1, xmm5
    vshufps xmm3, xmm6, xmm6, 0FFh
    vmovups [rsp+188h+var_158], xmm7
    vshufps xmm7, xmm6, xmm6, 0D2h ; 'Ò'
    vmulps  xmm0, xmm7, xmm9
    vshufps xmm6, xmm6, xmm6, 0C9h ; 'É'
    vmulps  xmm1, xmm6, xmm8
    vsubps  xmm2, xmm1, xmm0
    vaddps  xmm4, xmm2, xmm2
    vmulps  xmm0, xmm3, xmm4
    vaddps  xmm5, xmm0, xmm11
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm7
    vmovups xmm0, [rsp+188h+var_158]
    vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm8, xmm0, xmm0, 0FFh
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm9, xmm1, xmm5
    vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
    vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm8, xmm4
    vaddps  xmm5, xmm0, xmm10
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm2, xmm0, xmm7
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm0, xmm1, xmm5
    vmovups [rsp+188h+var_E8], xmm15
    vmovups [rsp+188h+var_108], xmm0
    vmovdqa [rsp+188h+var_148], xmm0
    vmovups [rsp+188h+var_118], xmm9
    vmovdqa [rsp+188h+var_E8], xmm9
  }
  XAnimBonePhysics_CalculateShortestRotationQuaternion(&v250, &v256, &v251);
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+90h]
    vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm12
    vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm14
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm13, xmm4
    vaddps  xmm5, xmm0, xmm5
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm14
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm12
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm10, xmm1, xmm5
    vshufps xmm1, xmm15, xmm15, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm14
    vshufps xmm0, xmm15, xmm15, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm12
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm13, xmm4
    vaddps  xmm5, xmm0, xmm15
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm14
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmovups xmm4, [rsp+188h+var_138]
    vmulps  xmm3, xmm1, xmm12
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm11, xmm1, xmm5
    vshufps xmm5, xmm4, xmm4, 0FFh
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vmulps  xmm0, xmm4, [rsp+188h+var_158]
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
    vinsertps xmm1, xmm0, xmm0, 8
    vsubps  xmm6, xmm2, xmm3
    vhaddps xmm2, xmm1, xmm1
    vmulps  xmm1, xmm5, [rsp+188h+var_158]
    vhaddps xmm3, xmm2, xmm2
    vmulps  xmm4, xmm4, xmm8
    vaddps  xmm1, xmm4, xmm1
    vmulps  xmm0, xmm8, xmm5
    vsubps  xmm2, xmm0, xmm3
    vaddps  xmm0, xmm6, xmm1
    vblendps xmm8, xmm2, xmm0, 7
    vmovups xmm0, [rsp+188h+var_128]
    vmulps  xmm4, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
    vshufps xmm7, xmm8, xmm8, 0FFh
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm2, xmm8, xmm8, 0D2h ; 'Ò'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm0, xmm3
    vmulps  xmm1, xmm8, xmm4
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vshufps xmm6, xmm4, xmm4, 0FFh
    vhaddps xmm3, xmm2, xmm2
    vmulps  xmm0, xmm7, xmm6
    vsubps  xmm2, xmm0, xmm3
    vmulps  xmm4, xmm7, xmm4
    vmulps  xmm1, xmm8, xmm6
    vaddps  xmm1, xmm4, xmm1
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm3, xmm2, xmm0, 7
    vmulps  xmm1, xmm3, xmm3
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm3, xmm1
    vshufps xmm7, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm7
    vshufps xmm8, xmm2, xmm2, 0FFh
    vshufps xmm9, xmm2, xmm2, 0D2h ; 'Ò'
    vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm9
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm8, xmm4
    vaddps  xmm5, xmm0, xmm10
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm9
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm7
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm6, xmm1, xmm5
    vshufps xmm1, xmm11, xmm11, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm9
    vshufps xmm0, xmm11, xmm11, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm7
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm8, xmm4
    vaddps  xmm5, xmm0, xmm11
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm9
    vmulps  xmm0, xmm6, xmmword ptr [rsp+90h]
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm7
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vinsertps xmm1, xmm0, xmm0, 8
    vmulps  xmm0, xmm4, xmmword ptr [rsp+90h]
    vhaddps xmm5, xmm1, xmm1
    vinsertps xmm1, xmm0, xmm0, 8
    vmovups xmm0, [rsp+188h+var_118]
    vaddps  xmm2, xmm0, [rsp+188h+var_108]
    vhaddps xmm3, xmm1, xmm1
    vhaddps xmm6, xmm5, xmm5
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm2, xmm1
    vhaddps xmm7, xmm3, xmm3
    vandps  xmm0, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vaddss  xmm3, xmm0, cs:__real@2edbe6ff
    vaddss  xmm4, xmm3, xmm6
    vxorps  xmm5, xmm5, xmm5
    vsubss  xmm1, xmm6, xmm3
    vcmpless xmm0, xmm5, xmm6
    vmovups xmmword ptr [r15], xmm2
    vblendvps xmm2, xmm4, xmm1, xmm0
    vsubss  xmm1, xmm3, xmm6
    vcmpless xmm0, xmm5, xmm6
    vblendvps xmm0, xmm1, xmm4, xmm0
    vdivss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm3, cs:__real@3e4902de
    vmulss  xmm2, xmm1, xmm3
    vsubss  xmm0, xmm2, cs:__real@3f7b50b1
    vmovss  xmm1, cs:__real@3f490fdb
    vmulss  xmm4, xmm0, xmm3
    vmovss  xmm0, cs:__real@4016cbe4
    vcmpless xmm2, xmm5, xmm6
    vblendvps xmm1, xmm0, xmm1, xmm2
    vaddss  xmm3, xmm4, xmm1
    vxorps  xmm1, xmm3, cs:__xmm@80000000800000008000000080000000
    vcmpless xmm0, xmm5, xmm7
    vblendvps xmm0, xmm1, xmm3, xmm0
    vxorps  xmm0, xmm0, cs:__xmm@80000000800000008000000080000000
  }
  _R11 = &v257;
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
XAnimBonePhysics_GenerateAudioEvents
==============
*/
void XAnimBonePhysics_GenerateAudioEvents(XAnimBonePhysicsUpdateContext *context, int numContacts)
{
  __int64 v8; 
  const dvar_t *v11; 
  int integer; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  XAnimCollisionContact *contacts; 
  __int64 bodyIndex; 
  char v42; 
  bool v43; 
  unsigned __int8 v57; 
  const SndAliasLookup *p_lightHitSound; 
  float fmt; 
  __int64 v65; 
  char v66[16]; 
  vec3_t outTransformedPoint; 

  __asm { vmovaps [rsp+0F8h+var_68], xmm9 }
  _RBX = DCONST_DVARFLT_xanim_physicsAudioMinHitDistance;
  v8 = (unsigned int)numContacts;
  if ( !DCONST_DVARFLT_xanim_physicsAudioMinHitDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAudioMinHitDistance") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  v11 = DCONST_DVARINT_xanim_physicsAudioEventWaitTime;
  if ( !DCONST_DVARINT_xanim_physicsAudioEventWaitTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAudioEventWaitTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2704, ASSERT_TYPE_ASSERT, "(context != 0)", (const char *)&queryFormat, "context != NULL") )
    __debugbreak();
  if ( (int)v8 > 0 )
  {
    __asm
    {
      vmovaps [rsp+0F8h+var_78], xmm10
      vmovss  xmm10, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+0F8h+var_38], xmm6
    }
    v14 = 0i64;
    v15 = v8;
    __asm
    {
      vmovaps [rsp+0F8h+var_48], xmm7
      vmovaps [rsp+0F8h+var_58], xmm8
    }
    v16 = 0i64;
    v65 = v8;
    while ( 1 )
    {
      contacts = context->contacts;
      bodyIndex = context->contacts[v14].bodyIndex;
      _RBX = &context->procBones->physicsBones[bodyIndex];
      if ( (_RBX->flags & 0x10) != 0 )
        break;
LABEL_35:
      ++v16;
      ++v14;
      v65 = --v15;
      if ( !v15 )
      {
        __asm
        {
          vmovaps xmm10, [rsp+0F8h+var_78]
          vmovaps xmm8, [rsp+0F8h+var_58]
          vmovaps xmm7, [rsp+0F8h+var_48]
          vmovaps xmm6, [rsp+0F8h+var_38]
        }
        goto LABEL_37;
      }
    }
    if ( _RBX->state.audioEventTimer )
    {
      if ( integer < 0 || (unsigned int)integer > 0xFF )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)integer, "signed", integer) )
          __debugbreak();
        v15 = v65;
      }
      _RBX->state.audioEventTimer = integer;
      goto LABEL_35;
    }
    _R13 = (char *)&contacts[v14].pointA;
    if ( &_RBX->state.angularVelocity == (vec3_t *)v66 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1667, ASSERT_TYPE_ASSERT, "( &v0 != &cross )", (const char *)&queryFormat, "&v0 != &cross") )
      __debugbreak();
    if ( _R13 == v66 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
      __debugbreak();
    __asm
    {
      vmovss  xmm3, dword ptr [r13+8]
      vmovss  xmm8, dword ptr [rbx+64h]
      vmovss  xmm2, dword ptr [rbx+68h]
      vmovss  xmm5, dword ptr [r13+4]
      vmulss  xmm0, xmm2, xmm5
      vmulss  xmm2, xmm2, dword ptr [r13+0]
      vmulss  xmm1, xmm8, xmm3
      vsubss  xmm1, xmm1, xmm0
      vaddss  xmm7, xmm1, dword ptr [rbx+54h]
      vmulss  xmm0, xmm3, dword ptr [rbx+60h]
      vsubss  xmm1, xmm2, xmm0
      vaddss  xmm3, xmm1, dword ptr [rbx+58h]
      vmulss  xmm2, xmm5, dword ptr [rbx+60h]
      vmulss  xmm0, xmm8, dword ptr [r13+0]
      vsubss  xmm1, xmm2, xmm0
      vaddss  xmm4, xmm1, dword ptr [rbx+5Ch]
      vmulss  xmm1, xmm3, dword ptr [r14+rax+20h]
      vmulss  xmm0, xmm7, dword ptr [r14+rax+1Ch]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, dword ptr [r14+rax+24h]
      vaddss  xmm6, xmm2, xmm1
    }
    QuatTrans_TransformPoint(&_RBX->state.rotationQuat, &_RBX->state.position, &contacts[v14].pointA, &outTransformedPoint);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0F8h+outTransformedPoint+4]
      vsubss  xmm1, xmm0, dword ptr [r14+rbp+14h]
      vmulss  xmm3, xmm1, dword ptr [r14+rbp+20h]
      vmovss  xmm2, dword ptr [rsp+0F8h+outTransformedPoint]
      vsubss  xmm0, xmm2, dword ptr [r14+rbp+10h]
      vmulss  xmm1, xmm0, dword ptr [r14+rbp+1Ch]
      vmovss  xmm2, dword ptr [rsp+0F8h+outTransformedPoint+8]
      vsubss  xmm0, xmm2, dword ptr [r14+rbp+18h]
      vaddss  xmm4, xmm3, xmm1
      vmulss  xmm1, xmm0, dword ptr [r14+rbp+24h]
      vaddss  xmm3, xmm4, xmm1
      vandps  xmm3, xmm3, xmm10
      vcomiss xmm3, xmm9
    }
    if ( !v42 )
    {
      _RAX = _RBX->properties;
      __asm { vcomiss xmm6, dword ptr [rax+7Ch] }
      if ( v42 | v43 || (v42 = 0, v43 = _RAX->heavyHitSound.name == NULL, !_RAX->heavyHitSound.name) )
      {
        __asm { vcomiss xmm6, dword ptr [rax+78h] }
        if ( v42 | v43 || !_RAX->lightHitSound.name )
          goto LABEL_34;
        v57 = truncate_cast<unsigned char,int>(integer);
        p_lightHitSound = &_RBX->properties->lightHitSound;
      }
      else
      {
        v57 = truncate_cast<unsigned char,int>(integer);
        p_lightHitSound = &_RBX->properties->heavyHitSound;
      }
      _RBX->state.audioEventTimer = v57;
      __asm { vmovss  dword ptr [rsp+0F8h+fmt], xmm6 }
      XAnimBonePhysics_AddAudioEvent(context->procBones, (unsigned __int8)bodyIndex, &context->contacts[v16].pointB, p_lightHitSound, fmt);
    }
LABEL_34:
    v15 = v65;
    goto LABEL_35;
  }
LABEL_37:
  __asm { vmovaps xmm9, [rsp+0F8h+var_68] }
}

/*
==============
XAnimBonePhysics_GetModelSpaceGroundPlane
==============
*/
void XAnimBonePhysics_GetModelSpaceGroundPlane(const DObjProceduralBones *procBones, vec4_t *outModelGroundPlane)
{
  const DObjProceduralBones *v6; 
  int v19; 
  vec3_t in; 
  __int128 v22; 
  vec3_t outInvTrans; 
  vec3_t to; 
  vec4_t outInvQuat; 

  __asm
  {
    vmovss  xmm1, dword ptr [rcx+12Ch]
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+0A8h+var_78], xmm1
  }
  _RSI = outModelGroundPlane;
  v6 = procBones;
  __asm
  {
    vmovss  dword ptr [rsp+0A8h+in], xmm0
    vmovss  dword ptr [rsp+0A8h+in+4], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rsp+0A8h+in+8], xmm0
    vmovss  [rsp+0A8h+var_64], xmm1
  }
  if ( (v19 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 987, ASSERT_TYPE_ASSERT, "(!IS_NAN( worldGroundPlane[3] ))", (const char *)&queryFormat, "!IS_NAN( worldGroundPlane[3] )") )
    __debugbreak();
  if ( v6 == (const DObjProceduralBones *)-96i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 145, ASSERT_TYPE_ASSERT, "(dObjPhysicsState)", (const char *)&queryFormat, "dObjPhysicsState") )
    __debugbreak();
  GetSecureRootVec3(&v6->physicsState.rootTrans.rootTrans, &to, s_bones_aab_X, s_bones_aab_Y, s_bones_aab_Z);
  QuatTrans_Inverse(&v6->physicsState.rootQuat, &to, &outInvQuat, &outInvTrans);
  QuatTransform(&outInvQuat, &in, (vec3_t *)&v22);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+var_60]
    vmulss  xmm3, xmm0, dword ptr [rsp+0A8h+outInvTrans]
    vmovss  xmm1, dword ptr [rsp+0A8h+var_60+4]
    vmulss  xmm2, xmm1, dword ptr [rsp+0A8h+outInvTrans+4]
    vmovss  xmm0, dword ptr [rsp+0A8h+var_60+8]
    vmulss  xmm1, xmm0, dword ptr [rsp+0A8h+outInvTrans+8]
    vmovups xmm0, [rsp+0A8h+var_60]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vaddss  xmm3, xmm2, [rsp+0A8h+var_64]
    vinsertps xmm0, xmm0, xmm3, 30h ; '0'
    vmovups xmmword ptr [rsi], xmm0
  }
}

/*
==============
XAnimBonePhysics_Integrate
==============
*/
void XAnimBonePhysics_Integrate(XAnimProcNodeCalcParams *params, DObjProceduralBones *procBones, unsigned int firstPhysicsBoneIndex, unsigned int endPhysicsBoneIndex, float timeStep)
{
  __int64 v16; 
  const DObj *obj; 
  const dvar_t *v52; 
  __int64 v142; 
  char v171; 
  char v172; 
  XAnimDynamicBoneNoiseAxisSpace relative; 
  XAnimDynamicBoneNoiseAxisSpace v200; 
  unsigned __int8 audioEventTimer; 
  float4 *outModelTranslation; 
  float v310; 
  float v311; 
  int v312; 
  int v313; 
  int v314; 
  int v315; 
  int v316; 
  int v317; 
  int v318; 
  int v319; 
  int v320; 
  int v321; 
  int v322; 
  int v323; 
  int v324; 
  int v325; 
  int v326; 
  int v327; 
  int v328; 
  int v329; 
  int v330; 
  int v331; 
  int v332; 
  int v333; 
  int v334; 
  int v335; 
  int v336; 
  int v337; 
  XAnimPhysicsBone *physicsBones; 
  float4 v339; 
  float4 v340; 
  float4 v348; 
  float4 v349; 
  __int128 outAngularVelocity; 
  vec3_t outVelocity; 
  __int128 v352; 
  __int128 v353; 
  __int128 v354; 
  vec4_t v355; 
  float4 outModelQuat; 
  float4 v357; 
  float4 v358; 
  float4 v359; 
  char v362; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0D8h], xmm14
  }
  v16 = firstPhysicsBoneIndex;
  _RBX = procBones;
  if ( !params && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1031, ASSERT_TYPE_ASSERT, "(params != 0)", (const char *)&queryFormat, "params != NULL") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1032, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  obj = params->obj;
  physicsBones = _RBX->physicsBones;
  if ( endPhysicsBoneIndex > _RBX->numPhysicsBones )
  {
    LODWORD(outModelTranslation) = endPhysicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1038, ASSERT_TYPE_ASSERT, "( endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", outModelTranslation, _RBX->numPhysicsBones) )
      __debugbreak();
  }
  if ( !(_DWORD)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1039, ASSERT_TYPE_ASSERT, "( firstPhysicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "firstPhysicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", 0, 1) )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rbp+1A0h+timeStep]
    vmovaps xmm14, xmm0
    vmulss  xmm0, xmm0, cs:__real@3f000000
    vshufps xmm0, xmm0, xmm0, 0
    vmovups [rbp+1A0h+var_1C0], xmm0
    vmovss  xmm0, dword ptr [rbx+0ACh]
    vmovss  dword ptr [rsp+2A0h+var_250], xmm0
    vshufps xmm14, xmm14, xmm14, 0
  }
  if ( (v312 & 0x7F800000) == 2139095040 )
    goto LABEL_110;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0B0h]
    vmovss  dword ptr [rsp+2A0h+var_250], xmm0
  }
  if ( (v313 & 0x7F800000) == 2139095040 )
    goto LABEL_110;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0B4h]
    vmovss  dword ptr [rsp+2A0h+var_250], xmm0
  }
  if ( (v314 & 0x7F800000) == 2139095040 )
  {
LABEL_110:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1044, ASSERT_TYPE_ASSERT, "(IS_FINITE((procBones->physicsState.inheritedAcceleration)[0]) && IS_FINITE((procBones->physicsState.inheritedAcceleration)[1]) && IS_FINITE((procBones->physicsState.inheritedAcceleration)[2]))", (const char *)&queryFormat, "IS_FINITE((procBones->physicsState.inheritedAcceleration)[0]) && IS_FINITE((procBones->physicsState.inheritedAcceleration)[1]) && IS_FINITE((procBones->physicsState.inheritedAcceleration)[2])") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C4h]
    vmovss  dword ptr [rsp+2A0h+var_250], xmm0
  }
  if ( (v315 & 0x7F800000) == 2139095040 )
    goto LABEL_111;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0C8h]
    vmovss  dword ptr [rsp+2A0h+var_250], xmm0
  }
  if ( (v316 & 0x7F800000) == 2139095040 )
    goto LABEL_111;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0CCh]
    vmovss  dword ptr [rsp+2A0h+var_250], xmm0
  }
  if ( (v317 & 0x7F800000) == 2139095040 )
  {
LABEL_111:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1045, ASSERT_TYPE_ASSERT, "(IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[0]) && IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[1]) && IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[2]))", (const char *)&queryFormat, "IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[0]) && IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[1]) && IS_FINITE((procBones->physicsState.inheritedAngularAcceleration)[2])") )
      __debugbreak();
  }
  __asm { vmovss  xmm0, dword ptr [rbx+0ACh] }
  _RDI = DCONST_DVARFLT_xanim_physicsExtVelocityScale;
  HIDWORD(outAngularVelocity) = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rbp+10h]
    vmovss  xmm9, xmm9, xmm0
    vmovss  xmm0, dword ptr [rbx+0C4h]
    vinsertps xmm9, xmm9, dword ptr [rbx+0B0h], 10h
    vinsertps xmm9, xmm9, dword ptr [rbx+0B4h], 20h ; ' '
    vmovups xmmword ptr [rbp+10h], xmm9
  }
  HIDWORD(outAngularVelocity) = 0;
  __asm
  {
    vmovups xmm7, xmmword ptr [rbp+10h]
    vmovss  xmm7, xmm7, xmm0
    vinsertps xmm7, xmm7, dword ptr [rbx+0C8h], 10h
    vinsertps xmm7, xmm7, dword ptr [rbx+0CCh], 20h ; ' '
    vmovss  xmm0, dword ptr [rbx+0D0h]
    vmovups xmmword ptr [rbp+10h], xmm7
  }
  HIDWORD(outAngularVelocity) = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rbp+10h]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rbx+0D4h], 10h
    vinsertps xmm6, xmm6, dword ptr [rbx+0D8h], 20h ; ' '
    vmovups xmmword ptr [rbp+10h], xmm6
  }
  if ( !DCONST_DVARFLT_xanim_physicsExtVelocityScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsExtVelocityScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vbroadcastss xmm0, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_xanim_physicsExtAngularAccelScale;
  __asm { vmulps  xmm12, xmm0, xmm6 }
  if ( !DCONST_DVARFLT_xanim_physicsExtAngularAccelScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsExtAngularAccelScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vbroadcastss xmm0, dword ptr [rdi+28h] }
  v52 = DCONST_DVARFLT_xanim_physicsIdleVelocityScale;
  HIDWORD(outAngularVelocity) = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rbp+10h]
    vmulps  xmm11, xmm0, xmm7
    vmovss  xmm0, dword ptr [rbx+0B8h]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rbx+0BCh], 10h
    vinsertps xmm6, xmm6, dword ptr [rbx+0C0h], 20h ; ' '
    vmovups xmmword ptr [rbp+10h], xmm6
  }
  if ( !DCONST_DVARFLT_xanim_physicsIdleVelocityScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsIdleVelocityScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0DCh]
    vmulss  xmm1, xmm0, dword ptr [rdi+28h]
    vshufps xmm1, xmm1, xmm1, 0
    vmulps  xmm10, xmm1, xmm6
  }
  if ( (obj->skel.partBits.anim.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1057, ASSERT_TYPE_ASSERT, "(dobj->skel.partBits.anim.testBit( 0 ))", (const char *)&queryFormat, "dobj->skel.partBits.anim.testBit( 0 )") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, obj, params->destBuffer, 0, &outModelQuat, &v358);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+1A0h+outModelQuat.v]
    vmulps  xmm0, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
    vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vmovups [rbp+1A0h+var_220], xmm0
    vshufps xmm7, xmm0, xmm0, 0FFh
    vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm7, xmm4
    vaddps  xmm5, xmm0, xmm9
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm0, xmm1, xmm5
    vmovups [rbp+1A0h+var_1F0], xmm0
    vshufps xmm0, xmm11, xmm11, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm11, xmm11, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm7, xmm4
    vaddps  xmm5, xmm0, xmm11
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm11, xmm1, xmm5
    vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm7, xmm4
    vaddps  xmm5, xmm0, xmm10
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vshufps xmm1, xmm12, xmm12, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm8
    vshufps xmm0, xmm12, xmm12, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vsubps  xmm0, xmm3, xmm2
    vmovups [rbp+1A0h+var_1D0], xmm4
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm7, xmm4
    vaddps  xmm5, xmm0, xmm12
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm12, xmm1, xmm5
    vmovups xmm5, cs:__xmm@00000000bf8000000000000000000000
    vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
    vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
    vmulps  xmm3, xmm0, xmm6
    vmulps  xmm2, xmm1, xmm8
    vsubps  xmm0, xmm3, xmm2
    vmovups [rbp+1A0h+var_200], xmm11
    vmovups [rbp+1A0h+var_1E0], xmm12
  }
  _RBX = DVARFLT_xanim_physicsGravity;
  __asm
  {
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm7, xmm4
    vaddps  xmm5, xmm0, xmm5
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm8
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm6, xmm1, xmm5
  }
  if ( !DVARFLT_xanim_physicsGravity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsGravity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vbroadcastss xmm0, dword ptr [rbx+28h]
    vmulps  xmm8, xmm0, xmm6
    vmovups [rbp+1A0h+var_210], xmm8
  }
  if ( (unsigned int)v16 < endPhysicsBoneIndex )
  {
    __asm
    {
      vmovaps xmmword ptr [rsp+2A0h+var_E8+8], xmm15
      vmovaps xmmword ptr [rsp+2A0h+var_C8+8], xmm13
    }
    v142 = v16;
    __asm { vxorps  xmm15, xmm15, xmm15 }
    do
    {
      _RBX = &physicsBones[v142];
      if ( _RBX->boneIndex != 255 )
      {
        if ( _RBX->boneIndex == 254 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1092, ASSERT_TYPE_ASSERT, "(physicsBone->boneIndex != 254)", (const char *)&queryFormat, "physicsBone->boneIndex != UNDEFINED_BONEINDEX") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+2Ch]
          vmovups xmm13, xmmword ptr [rbx+1Ch]
        }
        HIDWORD(v352) = 0;
        __asm
        {
          vmovups xmm9, xmmword ptr [rbp+30h]
          vmovss  xmm9, xmm9, xmm0
          vmovss  xmm0, dword ptr [rbx+54h]
          vinsertps xmm9, xmm9, dword ptr [rbx+30h], 10h
          vinsertps xmm9, xmm9, dword ptr [rbx+34h], 20h ; ' '
        }
        HIDWORD(v353) = 0;
        __asm
        {
          vmovups xmm7, xmmword ptr [rbp+40h]
          vmovss  xmm7, xmm7, xmm0
          vmovss  xmm0, dword ptr [rbx+60h]
          vinsertps xmm7, xmm7, dword ptr [rbx+58h], 10h
          vinsertps xmm7, xmm7, dword ptr [rbx+5Ch], 20h ; ' '
        }
        HIDWORD(v354) = 0;
        __asm
        {
          vmovups xmm6, xmmword ptr [rbp+50h]
          vmovss  xmm6, xmm6, xmm0
          vinsertps xmm6, xmm6, dword ptr [rbx+64h], 10h
          vinsertps xmm6, xmm6, dword ptr [rbx+68h], 20h ; ' '
          vshufps xmm0, xmm6, xmm6, 0FFh
          vucomiss xmm0, xmm15
          vmovups xmmword ptr [rbp+30h], xmm9
          vmovups xmmword ptr [rbp+40h], xmm7
          vmovups xmmword ptr [rbp+50h], xmm6
        }
        _RAX = _RBX->properties;
        __asm
        {
          vbroadcastss xmm0, dword ptr [rax+3Ch]
          vmulps  xmm1, xmm0, xmm8
          vaddps  xmm10, xmm1, [rbp+1A0h+var_1F0]
          vmovdqa xmm8, xmm11
          vmovss  xmm11, [rbp+1A0h+timeStep]
          vmovaps xmm1, xmm11; timeStep
        }
        if ( XAnimBonePhysics_UpdateNoise(_RBX, *(const float *)&_XMM1, &outVelocity, (vec3_t *)&outAngularVelocity) )
        {
          __asm
          {
            vmovss  xmm0, cs:__real@3f800000
            vdivss  xmm11, xmm0, xmm11
          }
          XAnimGetLocalBoneTransform(params->animCalcInfo, obj, params->destBuffer, _RBX->boneIndex, &v357, &v359);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+1A0h+var_120.v]
            vmovss  xmm1, dword ptr [rbp+1A0h+outVelocity]
            vmovups [rbp+1A0h+var_140], xmm0
            vmovss  xmm0, dword ptr [rbp+1A0h+outVelocity+4]
            vmulss  xmm2, xmm0, xmm0
            vmulss  xmm3, xmm1, xmm1
            vmovss  xmm1, dword ptr [rbp+1A0h+outVelocity+8]
            vaddss  xmm4, xmm3, xmm2
            vmulss  xmm0, xmm1, xmm1
            vaddss  xmm2, xmm4, xmm0
            vcomiss xmm2, xmm15
          }
          if ( !(v171 | v172) )
          {
            __asm
            {
              vmovups xmm0, [rbp+1A0h+var_220]
              vmovss  [rsp+2A0h+var_270], xmm11
            }
            relative = _RBX->properties->noise.translation.relative;
            __asm
            {
              vmovdqa [rsp+2A0h+var_248+8], xmm7
              vmovdqa xmmword ptr [rsp+2A0h+var_238+8], xmm0
            }
            _RAX = XAnimBonePhysics_CalcNoiseAcceleration(&v348, relative, &v340, &v355, &v339, &outVelocity, v310);
            _RDI = DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing;
            __asm { vmovups xmm12, xmmword ptr [rax] }
            if ( !DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsNoiseAccelSmoothing") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RDI);
            __asm
            {
              vbroadcastss xmm0, dword ptr [rdi+28h]
              vmulps  xmm0, xmm0, xmm12
              vmovups xmm12, [rbp+1A0h+var_1E0]
              vaddps  xmm10, xmm0, xmm10
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+1A0h+outAngularVelocity]
            vmovss  xmm1, dword ptr [rbp+1A0h+outAngularVelocity+4]
            vmulss  xmm2, xmm1, xmm1
            vmulss  xmm3, xmm0, xmm0
            vmovss  xmm0, dword ptr [rbp+1A0h+outAngularVelocity+8]
            vmulss  xmm1, xmm0, xmm0
            vaddss  xmm4, xmm3, xmm2
            vaddss  xmm2, xmm4, xmm1
            vcomiss xmm2, xmm15
          }
          if ( !(v171 | v172) )
          {
            __asm
            {
              vmovups xmm0, [rbp+1A0h+var_220]
              vmovss  [rsp+2A0h+var_270], xmm11
            }
            v200 = _RBX->properties->noise.rotation.relative;
            __asm
            {
              vmovdqa xmmword ptr [rsp+2A0h+var_238+8], xmm6
              vmovdqa [rsp+2A0h+var_248+8], xmm0
            }
            _RAX = XAnimBonePhysics_CalcNoiseAcceleration(&v349, v200, &v339, &v355, &v340, (const vec3_t *)&outAngularVelocity, v311);
            _RDI = DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing;
            __asm { vmovups xmm11, xmmword ptr [rax] }
            if ( !DCONST_DVARFLT_xanim_physicsNoiseAccelSmoothing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsNoiseAccelSmoothing") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RDI);
            __asm
            {
              vbroadcastss xmm0, dword ptr [rdi+28h]
              vmulps  xmm0, xmm0, xmm11
              vaddps  xmm8, xmm0, xmm8
            }
          }
        }
        _RDI = DCONST_DVARFLT_xanim_physicsMaxVelocity;
        __asm
        {
          vmulps  xmm0, xmm14, xmm10
          vsubps  xmm1, xmm7, xmm12
          vaddps  xmm5, xmm0, xmm1
          vmulps  xmm1, xmm14, xmm8
          vaddps  xmm10, xmm1, xmm6
          vmovups xmm1, [rbp+1A0h+var_1D0]
          vshufps xmm2, xmm1, xmm1, 0C9h ; 'É'
          vshufps xmm3, xmm1, xmm1, 0D2h ; 'Ò'
          vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
          vmulps  xmm4, xmm2, xmm0
          vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
          vmulps  xmm0, xmm3, xmm1
          vsubps  xmm2, xmm4, xmm0
          vaddps  xmm11, xmm2, xmm5
          vmulps  xmm0, xmm11, xmm11
          vinsertps xmm1, xmm0, xmm0, 8
          vhaddps xmm2, xmm1, xmm1
          vhaddps xmm0, xmm2, xmm2
          vsqrtps xmm6, xmm0
        }
        if ( !DCONST_DVARFLT_xanim_physicsMaxVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxVelocity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vcomiss xmm6, dword ptr [rdi+28h] }
        if ( !(v171 | v172) )
        {
          _RDI = DCONST_DVARFLT_xanim_physicsMaxVelocity;
          if ( !DCONST_DVARFLT_xanim_physicsMaxVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxVelocity") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm
          {
            vbroadcastss xmm3, dword ptr [rdi+28h]
            vmulps  xmm0, xmm11, xmm11
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
            vsqrtps xmm1, xmm0
            vdivps  xmm2, xmm11, xmm1
            vmulps  xmm11, xmm3, xmm2
          }
        }
        _RDI = DCONST_DVARFLT_xanim_physicsMaxAngularVelocity;
        __asm
        {
          vmulps  xmm0, xmm10, xmm10
          vinsertps xmm1, xmm0, xmm0, 8
          vhaddps xmm2, xmm1, xmm1
          vhaddps xmm0, xmm2, xmm2
          vsqrtps xmm6, xmm0
        }
        if ( !DCONST_DVARFLT_xanim_physicsMaxAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxAngularVelocity") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(_RDI);
        __asm { vcomiss xmm6, dword ptr [rdi+28h] }
        if ( !(v171 | v172) )
        {
          _RDI = DCONST_DVARFLT_xanim_physicsMaxAngularVelocity;
          if ( !DCONST_DVARFLT_xanim_physicsMaxAngularVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxAngularVelocity") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(_RDI);
          __asm
          {
            vbroadcastss xmm3, dword ptr [rdi+28h]
            vmulps  xmm0, xmm10, xmm10
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
            vsqrtps xmm1, xmm0
            vdivps  xmm2, xmm10, xmm1
            vmulps  xmm10, xmm3, xmm2
          }
        }
        __asm
        {
          vmulps  xmm4, xmm10, [rbp+1A0h+var_1C0]
          vshufps xmm6, xmm4, xmm4, 0FFh
          vmulps  xmm0, xmm14, xmm11
          vaddps  xmm8, xmm0, xmm9
          vmovss  dword ptr [rbx+2Ch], xmm8
          vextractps dword ptr [rbx+30h], xmm8, 1
          vextractps dword ptr [rbx+34h], xmm8, 2
          vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
          vshufps xmm1, xmm13, xmm13, 0C9h ; 'É'
          vmulps  xmm3, xmm1, xmm0
          vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
          vshufps xmm2, xmm13, xmm13, 0D2h ; 'Ò'
          vmulps  xmm0, xmm2, xmm1
          vsubps  xmm5, xmm0, xmm3
          vmulps  xmm1, xmm13, xmm4
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm3, xmm2, xmm2
          vshufps xmm7, xmm13, xmm13, 0FFh
          vmulps  xmm0, xmm7, xmm6
          vsubps  xmm2, xmm0, xmm3
          vmulps  xmm4, xmm7, xmm4
          vmulps  xmm1, xmm6, xmm13
          vaddps  xmm1, xmm4, xmm1
          vaddps  xmm0, xmm5, xmm1
          vblendps xmm1, xmm2, xmm0, 7
          vaddps  xmm3, xmm1, xmm13
          vmulps  xmm0, xmm3, xmm3
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm0, xmm2, xmm2
          vsqrtps xmm1, xmm0
          vdivps  xmm2, xmm3, xmm1
          vmovups xmmword ptr [rbx+1Ch], xmm2
          vmovss  dword ptr [rbx+48h], xmm9
          vextractps dword ptr [rbx+4Ch], xmm9, 1
          vextractps dword ptr [rbx+50h], xmm9, 2
          vmovups xmmword ptr [rbx+38h], xmm13
          vmovss  dword ptr [rbx+54h], xmm11
          vextractps dword ptr [rbx+58h], xmm11, 1
          vextractps dword ptr [rbx+5Ch], xmm11, 2
          vmovss  dword ptr [rbx+60h], xmm10
          vextractps dword ptr [rbx+64h], xmm10, 1
          vextractps dword ptr [rbx+68h], xmm10, 2
          vmovss  xmm0, dword ptr [rbx+38h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v318 & 0x7F800000) == 2139095040 )
          goto LABEL_112;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+3Ch]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v319 & 0x7F800000) == 2139095040 )
          goto LABEL_112;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+40h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v320 & 0x7F800000) == 2139095040 )
          goto LABEL_112;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+44h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v321 & 0x7F800000) == 2139095040 )
        {
LABEL_112:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1215, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.prevRotationQuat)[0]) && IS_FINITE((physicsBone->state.prevRotationQuat)[1]) && IS_FINITE((physicsBone->state.prevRotationQuat)[2]) && IS_FINITE((physicsBone->state.prevRotationQuat)[3]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.prevRotationQuat)[0]) && IS_FINITE((physicsBone->state.prevRotationQuat)[1]) && IS_FINITE((physicsBone->state.prevRotationQuat)[2]) && IS_FINITE((physicsBone->state.prevRotationQuat)[3])") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+1Ch]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v322 & 0x7F800000) == 2139095040 )
          goto LABEL_113;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+20h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v323 & 0x7F800000) == 2139095040 )
          goto LABEL_113;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+24h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v324 & 0x7F800000) == 2139095040 )
          goto LABEL_113;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+28h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v325 & 0x7F800000) == 2139095040 )
        {
LABEL_113:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1216, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.rotationQuat)[0]) && IS_FINITE((physicsBone->state.rotationQuat)[1]) && IS_FINITE((physicsBone->state.rotationQuat)[2]) && IS_FINITE((physicsBone->state.rotationQuat)[3]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.rotationQuat)[0]) && IS_FINITE((physicsBone->state.rotationQuat)[1]) && IS_FINITE((physicsBone->state.rotationQuat)[2]) && IS_FINITE((physicsBone->state.rotationQuat)[3])") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+48h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v326 & 0x7F800000) == 2139095040 )
          goto LABEL_114;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4Ch]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v327 & 0x7F800000) == 2139095040 )
          goto LABEL_114;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+50h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v328 & 0x7F800000) == 2139095040 )
        {
LABEL_114:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1217, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.prevPosition)[0]) && IS_FINITE((physicsBone->state.prevPosition)[1]) && IS_FINITE((physicsBone->state.prevPosition)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.prevPosition)[0]) && IS_FINITE((physicsBone->state.prevPosition)[1]) && IS_FINITE((physicsBone->state.prevPosition)[2])") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+2Ch]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v329 & 0x7F800000) == 2139095040 )
          goto LABEL_115;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+30h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v330 & 0x7F800000) == 2139095040 )
          goto LABEL_115;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+34h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v331 & 0x7F800000) == 2139095040 )
        {
LABEL_115:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1218, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.position)[0]) && IS_FINITE((physicsBone->state.position)[1]) && IS_FINITE((physicsBone->state.position)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.position)[0]) && IS_FINITE((physicsBone->state.position)[1]) && IS_FINITE((physicsBone->state.position)[2])") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+54h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v332 & 0x7F800000) == 2139095040 )
          goto LABEL_116;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+58h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v333 & 0x7F800000) == 2139095040 )
          goto LABEL_116;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+5Ch]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v334 & 0x7F800000) == 2139095040 )
        {
LABEL_116:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1219, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.velocity)[0]) && IS_FINITE((physicsBone->state.velocity)[1]) && IS_FINITE((physicsBone->state.velocity)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.velocity)[0]) && IS_FINITE((physicsBone->state.velocity)[1]) && IS_FINITE((physicsBone->state.velocity)[2])") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+60h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v335 & 0x7F800000) == 2139095040 )
          goto LABEL_117;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+64h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v336 & 0x7F800000) == 2139095040 )
          goto LABEL_117;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+68h]
          vmovss  dword ptr [rsp+2A0h+var_250], xmm0
        }
        if ( (v337 & 0x7F800000) == 2139095040 )
        {
LABEL_117:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1220, ASSERT_TYPE_ASSERT, "(IS_FINITE((physicsBone->state.angularVelocity)[0]) && IS_FINITE((physicsBone->state.angularVelocity)[1]) && IS_FINITE((physicsBone->state.angularVelocity)[2]))", (const char *)&queryFormat, "IS_FINITE((physicsBone->state.angularVelocity)[0]) && IS_FINITE((physicsBone->state.angularVelocity)[1]) && IS_FINITE((physicsBone->state.angularVelocity)[2])") )
            __debugbreak();
        }
        audioEventTimer = _RBX->state.audioEventTimer;
        __asm
        {
          vmovups xmm8, [rbp+1A0h+var_210]
          vmovups xmm11, [rbp+1A0h+var_200]
        }
        if ( audioEventTimer )
          _RBX->state.audioEventTimer = audioEventTimer - 1;
      }
      LODWORD(v16) = v16 + 1;
      ++v142;
    }
    while ( (unsigned int)v16 < endPhysicsBoneIndex );
    __asm
    {
      vmovaps xmm15, xmmword ptr [rsp+2A0h+var_E8+8]
      vmovaps xmm13, xmmword ptr [rsp+2A0h+var_C8+8]
    }
  }
  _R11 = &v362;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, xmmword ptr [r11-98h]
  }
}

/*
==============
XAnimBonePhysics_SetCurveState
==============
*/

void __fastcall XAnimBonePhysics_SetCurveState(DObj *dobj, XAnimCurve *const curve, double strengthMul, double rateMul)
{
  DObjProceduralBones *v10; 
  DObjProceduralBones *v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v18; 
  XAnimCurve *v19; 
  const char *name; 
  __int64 v21; 
  const char *v22; 
  signed __int64 v23; 
  char v24; 
  __int64 v25; 
  char v26; 
  XAnimCurve *v27; 
  const char *v28; 
  __int64 v29; 
  const char *v30; 
  signed __int64 v31; 
  char v32; 
  __int64 v33; 
  char v34; 
  unsigned int i; 
  __int64 v38; 
  DObjProceduralBones *v39; 
  unsigned int v43; 

  __asm
  {
    vmovaps [rsp+0A8h+var_48], xmm6
    vmovaps [rsp+0A8h+var_58], xmm7
    vmovaps xmm7, xmm2
    vmovaps xmm6, xmm3
  }
  if ( !curve && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 689, ASSERT_TYPE_ASSERT, "(curve)", (const char *)&queryFormat, "curve") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 690, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( (dobj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v10 = DObjProceduralBones_TryLock(dobj);
    v39 = v10;
    v11 = v10;
    if ( v10 )
    {
      if ( !v10->numPhysicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 704, ASSERT_TYPE_ASSERT, "(procBones->numPhysicsBones > 0)", (const char *)&queryFormat, "procBones->numPhysicsBones > 0") )
        __debugbreak();
      v12 = 0;
      for ( i = 0; v12 < v11->numModels; i = ++v12 )
      {
        v13 = (__int64)&v11->modelInfo[v12];
        v38 = v13;
        if ( *(_BYTE *)(v13 + 21) )
        {
          v14 = 0;
          v43 = 0;
          do
          {
            v15 = (__int64)&v11->physicsBones[v14 + *(unsigned __int8 *)(v13 + 20)];
            if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 715, ASSERT_TYPE_ASSERT, "(physicsBone)", (const char *)&queryFormat, "physicsBone") )
              __debugbreak();
            if ( *(_BYTE *)(*(_QWORD *)(v15 + 8) + 192i64) )
            {
              v16 = 0i64;
              _RBP = v15 + 116;
              do
              {
                v18 = *(_QWORD *)(v15 + 8);
                v19 = *(XAnimCurve **)(v16 + v18 + 208);
                if ( v19 == curve )
                {
                  name = v19->name;
                  v21 = 0x7FFFFFFFi64;
                  v22 = curve->name;
                  if ( !v19->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                    __debugbreak();
                  v23 = name - v22;
                  do
                  {
                    v24 = v22[v23];
                    v25 = v21;
                    v26 = *v22++;
                    --v21;
                    if ( !v25 )
                      break;
                    if ( v24 != v26 )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 725, ASSERT_TYPE_ASSERT, "(I_strcmp( physicsBone->properties->noise.translation.axis[index].curve->name, curve->name ) == 0)", (const char *)&queryFormat, "I_strcmp( physicsBone->properties->noise.translation.axis[index].curve->name, curve->name ) == 0") )
                        __debugbreak();
                      break;
                    }
                  }
                  while ( v24 );
                  __asm
                  {
                    vmovss  dword ptr [rbp-4], xmm7
                    vmovss  dword ptr [rbp+0], xmm6
                  }
                  v18 = *(_QWORD *)(v15 + 8);
                }
                v27 = *(XAnimCurve **)(v16 + v18 + 288);
                if ( v27 == curve )
                {
                  v28 = v27->name;
                  v29 = 0x7FFFFFFFi64;
                  v30 = curve->name;
                  if ( !v27->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
                    __debugbreak();
                  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                    __debugbreak();
                  v31 = v28 - v30;
                  do
                  {
                    v32 = v30[v31];
                    v33 = v29;
                    v34 = *v30++;
                    --v29;
                    if ( !v33 )
                      break;
                    if ( v32 != v34 )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 733, ASSERT_TYPE_ASSERT, "(I_strcmp( physicsBone->properties->noise.rotation.axis[index].curve->name, curve->name ) == 0)", (const char *)&queryFormat, "I_strcmp( physicsBone->properties->noise.rotation.axis[index].curve->name, curve->name ) == 0") )
                        __debugbreak();
                      break;
                    }
                  }
                  while ( v32 );
                  __asm
                  {
                    vmovss  dword ptr [rbp+20h], xmm7
                    vmovss  dword ptr [rbp+24h], xmm6
                  }
                }
                v16 += 24i64;
                _RBP += 12i64;
              }
              while ( v16 < 72 );
              v14 = v43;
              v11 = v39;
            }
            v43 = ++v14;
            v13 = v38;
          }
          while ( v14 < *(unsigned __int8 *)(v38 + 21) );
          v12 = i;
        }
      }
      DObjProceduralBones_Unlock(dobj);
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0A8h+var_48]
    vmovaps xmm7, [rsp+0A8h+var_58]
  }
}

/*
==============
XAnimBonePhysics_SetDynamicBoneTransforms
==============
*/

void __fastcall XAnimBonePhysics_SetDynamicBoneTransforms(XAnimProcNodeCalcParams *params, const XAnimPhysicsBone *physicsBones, unsigned int numPhysicsBones, double lerpFraction)
{
  const dvar_t *v18; 
  const XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  const XAnimCalcAnimInfo *animCalcInfo; 
  unsigned int v30; 
  unsigned __int8 v32; 
  unsigned __int64 v33; 
  const DObj *v34; 
  bool v35; 
  const dvar_t *v38; 
  unsigned __int16 v69; 
  const float4 *v70; 
  const float4 *v71; 
  bool v73; 
  int v293; 
  const DObj *v294; 
  __int64 v295; 
  const float4 *fmt; 
  float4 *outModelTranslation; 
  __int64 v318; 
  float v319; 
  int v320; 
  int v321; 
  int v322; 
  int v323; 
  int v324; 
  int v325; 
  int v326; 
  float4 v328; 
  __int128 v330; 
  __int128 v331; 
  __int128 v332; 
  __int128 v333; 
  __int128 v334; 
  float4 outModelQuat; 
  float4 v336; 
  float4 v337; 
  float4 v338; 

  __asm
  {
    vmovaps [rsp+1F0h+var_40], xmm6
    vmovaps [rsp+1F0h+var_A0], xmm12
    vmovaps xmm6, xmm3
  }
  _RDI = params;
  if ( !params->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2441, ASSERT_TYPE_ASSERT, "(params->obj != 0)", (const char *)&queryFormat, "params->obj != NULL") )
    __debugbreak();
  if ( !physicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2442, ASSERT_TYPE_ASSERT, "(physicsBones != 0)", (const char *)&queryFormat, "physicsBones != NULL") )
    __debugbreak();
  v18 = DCONST_DVARBOOL_xanim_physicsEnableInterpolation;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableInterpolation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableInterpolation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  destBuffer = _RDI->destBuffer;
  _EAX = 0;
  obj = _RDI->obj;
  animCalcInfo = _RDI->animCalcInfo;
  __asm { vmovd   xmm1, eax }
  _EAX = v18->current.color[0];
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm12, xmm6, xmm1, xmm2
    vshufps xmm12, xmm12, xmm12, 0
    vmovups [rsp+1F0h+var_180], xmm12
  }
  XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, 0, &outModelQuat, &v338);
  v30 = 1;
  if ( numPhysicsBones > 1 )
  {
    _RBX = (char *)&physicsBones[1].state.prevPosition.z;
    __asm
    {
      vmovaps [rsp+1F0h+var_50], xmm7
      vmovaps [rsp+1F0h+var_60], xmm8
      vmovaps [rsp+1F0h+var_70], xmm9
      vmovaps [rsp+1F0h+var_80], xmm10
      vmovaps [rsp+1F0h+var_90], xmm11
      vmovaps [rsp+1F0h+var_B0], xmm13
      vmovaps [rsp+1F0h+var_C0], xmm14
      vmovaps [rsp+1F0h+var_D0], xmm15
    }
    do
    {
      if ( *((_WORD *)_RBX - 40) != 255 )
      {
        v32 = *(_RBX - 63);
        if ( v32 != 0xFF && v32 >= v30 )
        {
          outModelTranslation = (float4 *)"physicsBone->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX || (physicsBone->parentPhysicsBoneIndex < physicsBoneIndex)";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2472, ASSERT_TYPE_ASSERT, "(physicsBone->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX || (physicsBone->parentPhysicsBoneIndex < physicsBoneIndex))", (const char *)&queryFormat) )
            __debugbreak();
        }
        v33 = *((unsigned __int16 *)_RBX - 40);
        v34 = _RDI->obj;
        if ( *((unsigned __int16 *)_RBX - 40) >> 15 )
        {
          v35 = (v34->skel.partBits.anim.array[7] & 2) != 0;
        }
        else
        {
          if ( (unsigned int)v33 >= 0x100 )
          {
            LODWORD(v318) = 256;
            LODWORD(outModelTranslation) = *((unsigned __int16 *)_RBX - 40);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outModelTranslation, v318) )
              __debugbreak();
          }
          v35 = ((0x80000000 >> (v33 & 0x1F)) & v34->skel.partBits.anim.array[v33 >> 5]) != 0;
        }
        if ( !v35 )
        {
          outModelTranslation = (float4 *)"XAnimTestPartBit( &params->obj->skel.partBits.anim, physicsBone->boneIndex )";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2475, ASSERT_TYPE_ASSERT, "(XAnimTestPartBit( &params->obj->skel.partBits.anim, physicsBone->boneIndex ))", (const char *)&queryFormat) )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-8]
          vmovups xmm4, xmmword ptr [rbx-18h]
        }
        v38 = DCONST_DVARBOOL_xanim_physicsMaintainBindPoseTranslation;
        HIDWORD(v331) = 0;
        HIDWORD(v332) = 0;
        HIDWORD(v333) = 0;
        __asm
        {
          vmovups xmm7, xmmword ptr [rbp-70h]
          vmovups xmm8, xmmword ptr [rbp-60h]
          vmovups xmm9, xmmword ptr [rbp-50h]
          vmovss  xmm7, xmm7, xmm0
          vmovss  xmm0, dword ptr [rbx-24h]
          vinsertps xmm7, xmm7, dword ptr [rbx-4], 10h
          vinsertps xmm7, xmm7, dword ptr [rbx], 20h ; ' '
          vmovss  xmm8, xmm8, xmm0
          vmovss  xmm0, dword ptr [rbx+68h]
          vinsertps xmm8, xmm8, dword ptr [rbx-20h], 10h
          vinsertps xmm8, xmm8, dword ptr [rbx-1Ch], 20h ; ' '
          vmovss  xmm9, xmm9, xmm0
          vmulps  xmm0, xmm4, xmmword ptr [rbx-34h]
          vinsertps xmm9, xmm9, dword ptr [rbx+6Ch], 10h
          vinsertps xmm9, xmm9, dword ptr [rbx+70h], 20h ; ' '
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
          vandps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
          vorps   xmm3, xmm2, cs:__xmm@3f8000003f8000003f8000003f800000
          vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
          vsubps  xmm1, xmm0, xmm12
          vmulps  xmm2, xmm1, xmm4
          vmulps  xmm0, xmm12, xmm3
          vmulps  xmm0, xmm0, xmmword ptr [rbx-34h]
          vaddps  xmm3, xmm0, xmm2
          vmulps  xmm1, xmm3, xmm3
          vhaddps xmm0, xmm1, xmm1
          vhaddps xmm0, xmm0, xmm0
          vsqrtps xmm1, xmm0
          vdivps  xmm11, xmm3, xmm1
          vmovups [rsp+1F0h+var_1A0], xmm11
          vmovups xmmword ptr [rbp-70h], xmm7
          vmovups xmmword ptr [rbp-60h], xmm8
          vmovups xmmword ptr [rbp-50h], xmm9
        }
        if ( !DCONST_DVARBOOL_xanim_physicsMaintainBindPoseTranslation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaintainBindPoseTranslation") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v38);
        if ( !v38->current.enabled || (v69 = *((_WORD *)_RBX - 39), v69 == 255) )
        {
          __asm
          {
            vsubps  xmm0, xmm8, xmm7
            vmulps  xmm1, xmm0, xmm12
            vaddps  xmm6, xmm1, xmm7
            vshufps xmm7, xmm11, xmm11, 0C9h ; 'É'
            vshufps xmm8, xmm11, xmm11, 0D2h ; 'Ò'
            vshufps xmm12, xmm11, xmm11, 0FFh
            vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
            vmulps  xmm2, xmm1, xmm8
            vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
            vmulps  xmm3, xmm0, xmm7
            vsubps  xmm0, xmm3, xmm2
            vaddps  xmm4, xmm0, xmm0
            vmulps  xmm0, xmm12, xmm4
            vaddps  xmm5, xmm0, xmm9
            vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
            vmulps  xmm2, xmm0, xmm8
            vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
            vmulps  xmm3, xmm1, xmm7
            vsubps  xmm1, xmm3, xmm2
            vaddps  xmm3, xmm1, xmm5
            vaddps  xmm11, xmm3, xmm6
            vmovups xmm3, xmmword ptr [rbp+0F0h+outModelQuat.v]
            vmulps  xmm2, xmm3, [rsp+1F0h+var_1A0]
            vshufps xmm6, xmm3, xmm3, 0FFh
            vshufps xmm10, xmm3, xmm3, 0D2h ; 'Ò'
            vshufps xmm9, xmm3, xmm3, 0C9h ; 'É'
            vmulps  xmm1, xmm10, xmm7
            vmulps  xmm3, xmm3, xmm12
            vmulps  xmm0, xmm9, xmm8
            vsubps  xmm4, xmm0, xmm1
            vinsertps xmm0, xmm2, xmm2, 8
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm2, xmm1, xmm1
            vmulps  xmm1, xmm6, [rsp+1F0h+var_1A0]
            vaddps  xmm1, xmm3, xmm1
            vmulps  xmm0, xmm12, xmm6
            vsubps  xmm2, xmm0, xmm2
            vaddps  xmm0, xmm4, xmm1
            vblendps xmm7, xmm2, xmm0, 7
            vshufps xmm0, xmm11, xmm11, 0D2h ; 'Ò'
            vmulps  xmm3, xmm0, xmm9
            vshufps xmm1, xmm11, xmm11, 0C9h ; 'É'
            vmulps  xmm2, xmm1, xmm10
            vsubps  xmm0, xmm3, xmm2
            vaddps  xmm5, xmm0, xmm0
            vshufps xmm1, xmm5, xmm5, 0D2h ; 'Ò'
            vmulps  xmm0, xmm6, xmm5
            vshufps xmm2, xmm5, xmm5, 0C9h ; 'É'
            vaddps  xmm6, xmm0, xmm11
            vmulps  xmm4, xmm1, xmm9
            vmulps  xmm3, xmm2, xmm10
            vsubps  xmm1, xmm4, xmm3
            vaddps  xmm5, xmm1, xmm6
            vaddps  xmm6, xmm5, xmmword ptr [rbp+0F0h+var_F0.v]
            vmovups [rsp+1F0h+var_190], xmm7
          }
        }
        else
        {
          XAnimGetLocalBoneTransform(_RDI->animCalcInfo, _RDI->obj, _RDI->destBuffer, v69, &v336, &v337);
          __asm { vmovss  xmm0, dword ptr [rbx+74h] }
          v73 = (*(_RBX - 64) & 0x20) == 0;
          HIDWORD(v330) = 0;
          __asm
          {
            vmovups xmm6, xmmword ptr [rbp-80h]
            vmovss  xmm6, xmm6, xmm0
            vinsertps xmm6, xmm6, dword ptr [rbx+78h], 10h
            vinsertps xmm6, xmm6, dword ptr [rbx+7Ch], 20h ; ' '
            vmovups xmmword ptr [rbp-80h], xmm6
          }
          if ( v73 )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rbp+0F0h+var_110.v]
              vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
              vshufps xmm7, xmm0, xmm0, 0C9h ; 'É'
              vshufps xmm5, xmm0, xmm0, 0FFh
              vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
              vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
              vmulps  xmm3, xmm0, xmm7
              vmulps  xmm2, xmm1, xmm8
              vsubps  xmm0, xmm3, xmm2
              vaddps  xmm4, xmm0, xmm0
              vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
              vmulps  xmm0, xmm5, xmm4
              vshufps xmm3, xmm4, xmm4, 0C9h ; 'É'
              vmulps  xmm4, xmm3, xmm8
              vaddps  xmm6, xmm0, xmm6
              vmulps  xmm5, xmm2, xmm7
              vsubps  xmm2, xmm5, xmm4
              vaddps  xmm4, xmm2, xmm6
              vaddps  xmm6, xmm4, xmmword ptr [rbp+0F0h+var_100.v]
            }
          }
          else
          {
            _RAX = *((_QWORD *)_RBX - 9);
            v71 = NULL;
            __asm
            {
              vsubps  xmm0, xmm8, xmm7
              vmulps  xmm1, xmm0, xmm12
              vaddps  xmm8, xmm1, xmm7
              vmovups xmm10, xmmword ptr [rax+44h]
              vmovss  xmm13, dword ptr [rax+8Ch]
              vshufps xmm7, xmm11, xmm11, 0D2h ; 'Ò'
              vshufps xmm6, xmm11, xmm11, 0C9h ; 'É'
              vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
              vmulps  xmm2, xmm1, xmm7
              vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
              vmulps  xmm3, xmm0, xmm6
              vsubps  xmm0, xmm3, xmm2
              vaddps  xmm4, xmm0, xmm0
              vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
              vmulps  xmm3, xmm1, xmm6
              vshufps xmm5, xmm11, xmm11, 0FFh
              vmulps  xmm0, xmm5, xmm4
              vaddps  xmm5, xmm0, xmm9
              vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
              vmulps  xmm2, xmm0, xmm7
              vmovups xmm0, xmmword ptr [rbp+0F0h+outModelQuat.v]
              vsubps  xmm1, xmm3, xmm2
              vaddps  xmm3, xmm1, xmm5
              vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
              vshufps xmm5, xmm0, xmm0, 0FFh
              vaddps  xmm7, xmm8, xmm3
              vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
              vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
              vmulps  xmm3, xmm0, xmm6
              vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
              vmulps  xmm2, xmm1, xmm8
              vsubps  xmm0, xmm3, xmm2
              vaddps  xmm4, xmm0, xmm0
              vmulps  xmm0, xmm5, xmm4
              vaddps  xmm5, xmm0, xmm7
              vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
              vmulps  xmm2, xmm0, xmm8
              vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
              vmulps  xmm3, xmm1, xmm6
              vsubps  xmm1, xmm3, xmm2
              vaddps  xmm4, xmm1, xmm5
              vaddps  xmm12, xmm4, xmmword ptr [rbp+0F0h+var_F0.v]
              vmovups xmm4, xmmword ptr [rbp+0F0h+var_110.v]
              vshufps xmm7, xmm4, xmm4, 0C9h ; 'É'
              vshufps xmm9, xmm4, xmm4, 0D2h ; 'Ò'
              vshufps xmm8, xmm4, xmm4, 0FFh
              vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
              vmulps  xmm3, xmm0, xmm7
              vmulps  xmm0, xmm4, xmm10
              vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
              vmulps  xmm2, xmm1, xmm9
              vsubps  xmm5, xmm3, xmm2
              vinsertps xmm1, xmm0, xmm0, 8
              vhaddps xmm2, xmm1, xmm1
              vhaddps xmm3, xmm2, xmm2
              vshufps xmm6, xmm10, xmm10, 0FFh
              vmulps  xmm4, xmm4, xmm6
              vmulps  xmm0, xmm6, xmm8
              vsubps  xmm2, xmm0, xmm3
              vmulps  xmm1, xmm10, xmm8
              vaddps  xmm1, xmm4, xmm1
              vaddps  xmm0, xmm5, xmm1
              vmovups xmm5, xmmword ptr [rbp-80h]
              vblendps xmm11, xmm2, xmm0, 7
              vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
              vmulps  xmm3, xmm0, xmm7
              vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
              vmulps  xmm2, xmm1, xmm9
              vsubps  xmm0, xmm3, xmm2
              vaddps  xmm4, xmm0, xmm0
              vmulps  xmm0, xmm8, xmm4
              vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
              vaddps  xmm5, xmm0, xmm5
              vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
              vmulps  xmm2, xmm0, xmm9
              vmulps  xmm3, xmm1, xmm7
              vsubps  xmm1, xmm3, xmm2
              vaddps  xmm4, xmm1, xmm5
            }
            HIDWORD(v334) = 0;
            __asm
            {
              vaddps  xmm10, xmm4, xmmword ptr [rbp+0F0h+var_100.v]
              vmulps  xmm0, xmm11, cs:__xmm@3f800000bf800000bf800000bf800000
              vshufps xmm8, xmm0, xmm0, 0D2h ; 'Ò'
              vshufps xmm7, xmm0, xmm0, 0C9h ; 'É'
              vshufps xmm5, xmm0, xmm0, 0FFh
              vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
              vmulps  xmm3, xmm0, xmm7
              vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
              vmulps  xmm2, xmm1, xmm8
              vsubps  xmm0, xmm3, xmm2
              vaddps  xmm1, xmm0, xmm0
              vmulps  xmm0, xmm5, xmm1
              vaddps  xmm4, xmm0, xmm10
              vshufps xmm0, xmm1, xmm1, 0D2h ; 'Ò'
              vmulps  xmm3, xmm0, xmm7
              vshufps xmm1, xmm1, xmm1, 0C9h ; 'É'
              vmulps  xmm2, xmm1, xmm8
              vsubps  xmm0, xmm3, xmm2
              vaddps  xmm3, xmm0, xmm4
              vxorps  xmm9, xmm9, xmm9
              vsubps  xmm6, xmm9, xmm3
              vshufps xmm0, xmm12, xmm12, 0D2h ; 'Ò'
              vmulps  xmm3, xmm0, xmm7
              vshufps xmm1, xmm12, xmm12, 0C9h ; 'É'
              vmulps  xmm2, xmm1, xmm8
              vsubps  xmm0, xmm3, xmm2
              vaddps  xmm4, xmm0, xmm0
              vmulps  xmm0, xmm5, xmm4
              vaddps  xmm5, xmm0, xmm12
              vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
              vmulps  xmm2, xmm0, xmm8
              vmovups xmm0, xmmword ptr [rbp-40h]
              vmovss  xmm0, xmm0, xmm13
              vinsertps xmm0, xmm0, dword ptr [rax+90h], 10h
              vinsertps xmm0, xmm0, dword ptr [rax+94h], 20h ; ' '
              vmovups xmmword ptr [rbp-40h], xmm0
              vcmpneqps xmm0, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
              vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
              vmulps  xmm3, xmm1, xmm7
              vsubps  xmm1, xmm3, xmm2
              vaddps  xmm3, xmm1, xmm5
              vaddps  xmm2, xmm6, xmm3
              vblendvps xmm7, xmm9, xmm2, xmm0
              vshufps xmm6, xmm11, xmm11, 0C9h ; 'É'
              vshufps xmm8, xmm11, xmm11, 0D2h ; 'Ò'
              vshufps xmm5, xmm11, xmm11, 0FFh
              vmovups xmm11, [rsp+1F0h+var_1A0]
              vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
              vmulps  xmm3, xmm0, xmm6
              vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
              vmulps  xmm2, xmm1, xmm8
              vsubps  xmm0, xmm3, xmm2
              vaddps  xmm4, xmm0, xmm0
              vmulps  xmm0, xmm5, xmm4
              vaddps  xmm5, xmm0, xmm7
              vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
              vmulps  xmm3, xmm1, xmm6
              vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
              vmulps  xmm2, xmm0, xmm8
              vsubps  xmm1, xmm3, xmm2
              vaddps  xmm3, xmm1, xmm5
              vaddps  xmm6, xmm10, xmm3
            }
          }
          __asm
          {
            vmovups xmm1, xmmword ptr [rbp+0F0h+outModelQuat.v]
            vmovups xmm0, xmm11
          }
          Float4QuatMultiply(v71, v70, &v328);
          __asm { vmovups xmm7, [rsp+1F0h+var_190] }
        }
        __asm
        {
          vmovss  xmm2, dword ptr [rdi+18h]
          vmovups xmm1, xmm6
          vmovups xmm0, xmm7
          vmovss  [rsp+1F0h+var_1C0], xmm2
        }
        XAnimSetLocalBoneTransform(_RDI->animCalcInfo, _RDI->obj, _RDI->destBuffer, *((unsigned __int16 *)_RBX - 40), fmt, outModelTranslation, v319);
        v293 = *((unsigned __int16 *)_RBX - 40);
        v294 = _RDI->obj;
        if ( (unsigned int)(v293 - 254) <= 1 )
        {
          outModelTranslation = (float4 *)"boneIndex != NO_BONEINDEX && boneIndex != UNDEFINED_BONEINDEX";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 278, ASSERT_TYPE_ASSERT, "(boneIndex != 255 && boneIndex != 254)", (const char *)&queryFormat) )
            __debugbreak();
        }
        v295 = v293 & 0x7FFF;
        if ( (unsigned int)v295 >= DObjTotalNumBones(v294) )
        {
          LODWORD(v318) = DObjTotalNumBones(v294);
          LODWORD(outModelTranslation) = v293 & 0x7FFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex & ((1 << 15) - 1) ) < (unsigned)( DObjTotalNumBones( obj ) )", "boneIndex & CLIENT_BONEINDEX_MASK doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", outModelTranslation, v318) )
            __debugbreak();
        }
        if ( (v293 & 0x8000) != 0 && (int)v295 < DObjNumBones(v294) )
        {
          outModelTranslation = (float4 *)"!(boneIndex & CLIENT_BONEINDEX_FLAG) || ((boneIndex & CLIENT_BONEINDEX_MASK) >= DObjNumBones( obj ))";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 280, ASSERT_TYPE_ASSERT, "(!(boneIndex & (1 << 15)) || ((boneIndex & ((1 << 15) - 1)) >= DObjNumBones( obj )))", (const char *)&queryFormat) )
            __debugbreak();
        }
        _RSI = 32 * v295;
        _RCX = _RDI->destBuffer->rotTransArray;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi]
          vmovss  [rsp+1F0h+var_1B0], xmm0
        }
        if ( (v320 & 0x7F800000) == 2139095040 )
          goto LABEL_63;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+4]
          vmovss  [rsp+1F0h+var_1B0], xmm0
        }
        if ( (v321 & 0x7F800000) == 2139095040 )
          goto LABEL_63;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+8]
          vmovss  [rsp+1F0h+var_1B0], xmm0
        }
        if ( (v322 & 0x7F800000) == 2139095040 )
          goto LABEL_63;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+0Ch]
          vmovss  [rsp+1F0h+var_1B0], xmm0
        }
        if ( (v323 & 0x7F800000) == 2139095040 )
        {
LABEL_63:
          outModelTranslation = (float4 *)"IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[0]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[1]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[2]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[3])";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2578, ASSERT_TYPE_ASSERT, "(IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[0]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[1]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[2]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].quat)[3]))", (const char *)&queryFormat) )
            __debugbreak();
        }
        _RCX = _RDI->destBuffer->rotTransArray;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+10h]
          vmovss  [rsp+1F0h+var_1B0], xmm0
        }
        if ( (v324 & 0x7F800000) == 2139095040 )
          goto LABEL_55;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+14h]
          vmovss  [rsp+1F0h+var_1B0], xmm0
        }
        if ( (v325 & 0x7F800000) == 2139095040 )
          goto LABEL_55;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+18h]
          vmovss  [rsp+1F0h+var_1B0], xmm0
        }
        if ( (v326 & 0x7F800000) == 2139095040 )
        {
LABEL_55:
          outModelTranslation = (float4 *)"IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[0]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[1]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[2])";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2579, ASSERT_TYPE_ASSERT, "(IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[0]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[1]) && IS_FINITE((params->destBuffer->rotTransArray[physSkelBoneIndex].trans)[2]))", (const char *)&queryFormat) )
            __debugbreak();
        }
        __asm { vmovups xmm12, [rsp+1F0h+var_180] }
      }
      ++v30;
      _RBX += 264;
    }
    while ( v30 < numPhysicsBones );
    __asm
    {
      vmovaps xmm15, [rsp+1F0h+var_D0]
      vmovaps xmm14, [rsp+1F0h+var_C0]
      vmovaps xmm13, [rsp+1F0h+var_B0]
      vmovaps xmm11, [rsp+1F0h+var_90]
      vmovaps xmm10, [rsp+1F0h+var_80]
      vmovaps xmm9, [rsp+1F0h+var_70]
      vmovaps xmm8, [rsp+1F0h+var_60]
      vmovaps xmm7, [rsp+1F0h+var_50]
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+1F0h+var_40]
    vmovaps xmm12, [rsp+1F0h+var_A0]
  }
}

/*
==============
XAnimBonePhysics_Settle
==============
*/
void XAnimBonePhysics_Settle(const XAnimBonePhysicsUpdateContext *context, XAnimProcNodeCalcParams *params)
{
  DObjProceduralBones *procBones; 
  const dvar_t *v13; 
  int integer; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  bool enabled; 
  unsigned int v18; 
  DObjProceduralBones *v19; 
  unsigned __int8 *v20; 
  unsigned __int8 v21; 
  unsigned int firstPhysicsBoneIndex; 
  unsigned int endPhysicsBoneIndex; 
  int v24; 
  char v25; 
  _QWORD *p_z; 
  __int64 v27; 
  DObjProceduralBones *v28; 
  XAnimBonePhysicsUpdateContext contexta; 
  void *retaddr; 
  bool v34; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RDI = context;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2900, ASSERT_TYPE_ASSERT, "(context != 0)", (const char *)&queryFormat, "context != NULL") )
    __debugbreak();
  if ( !_RDI->procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2901, ASSERT_TYPE_ASSERT, "(context->procBones != 0)", (const char *)&queryFormat, "context->procBones != NULL") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF80FFFF, "XAnimBonePhysics_Settle");
  procBones = _RDI->procBones;
  _RBX = DCONST_DVARFLT_xanim_physicsSettleVelocityThreshold;
  if ( !DCONST_DVARFLT_xanim_physicsSettleVelocityThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsSettleVelocityThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm6, xmm0, xmm0
    vmovups ymm1, ymmword ptr [rdi]
    vmovups ymmword ptr [rsp+0F8h+context.contacts], ymm1
    vmovups ymm0, ymmword ptr [rdi+20h]
    vmovups ymmword ptr [rsp+0F8h+context.dobj], ymm0
    vmovsd  xmm1, qword ptr [rdi+40h]
    vmovsd  qword ptr [rsp+0F8h+context.maxContacts], xmm1
  }
  if ( procBones->settlingEnabled )
  {
    v13 = DCONST_DVARINT_xanim_physicsMaxSettleIterations;
    if ( !DCONST_DVARINT_xanim_physicsMaxSettleIterations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxSettleIterations") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
  }
  else
  {
    integer = 0;
  }
  v15 = DCONST_DVARINT_xanim_physicsMaxSettlePositionSolverIterations;
  if ( !DCONST_DVARINT_xanim_physicsMaxSettlePositionSolverIterations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxSettlePositionSolverIterations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  contexta.maxPositionSolverIterations = v15->current.unsignedInt;
  v16 = DCONST_DVARBOOL_xanim_physicsForceSettle;
  if ( !DCONST_DVARBOOL_xanim_physicsForceSettle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsForceSettle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  enabled = v16->current.enabled;
  v34 = enabled;
  v18 = 0;
  if ( procBones->numModels )
  {
    v19 = contexta.procBones;
    do
    {
      v20 = (unsigned __int8 *)&procBones->modelInfo[v18];
      v21 = v20[21];
      if ( v21 && (v20[26] || enabled) )
      {
        v20[26] = 0;
        firstPhysicsBoneIndex = v20[20];
        contexta.firstPhysicsBoneIndex = firstPhysicsBoneIndex;
        endPhysicsBoneIndex = firstPhysicsBoneIndex + v21;
        contexta.endPhysicsBoneIndex = endPhysicsBoneIndex;
        v24 = 0;
        if ( integer > 0 )
        {
          do
          {
            XAnimBonePhysics_Simulate(&contexta, params);
            *(float *)&_XMM0 = XAnimBonePhysics_FindMaxBoneVelocitySquared(&contexta);
            __asm { vcomiss xmm0, xmm6 }
            if ( v25 )
              break;
            ++v24;
          }
          while ( v24 < integer );
          endPhysicsBoneIndex = contexta.endPhysicsBoneIndex;
          firstPhysicsBoneIndex = contexta.firstPhysicsBoneIndex;
          v19 = contexta.procBones;
        }
        if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2865, ASSERT_TYPE_ASSERT, "(context->procBones != 0)", (const char *)&queryFormat, "context->procBones != NULL") )
          __debugbreak();
        if ( firstPhysicsBoneIndex < endPhysicsBoneIndex )
        {
          p_z = (_QWORD *)&v19->physicsBones[firstPhysicsBoneIndex].state.velocity.z;
          v27 = endPhysicsBoneIndex - firstPhysicsBoneIndex;
          do
          {
            *(p_z - 1) = 0i64;
            *p_z = 0i64;
            p_z[1] = 0i64;
            p_z += 33;
            --v27;
          }
          while ( v27 );
        }
        enabled = v34;
      }
      ++v18;
    }
    while ( v18 < procBones->numModels );
    _RDI = context;
  }
  v28 = _RDI->procBones;
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 428, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  v28->physicsState.numAudioEvents = 0;
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
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
  const dvar_t *v7; 
  XAnimCollisionContact *v9; 
  const dvar_t *v10; 
  unsigned int numPhysicsBones; 
  XAnimPhysicsBone *physicsBones; 
  __int64 unsignedInt; 
  __int64 v14; 
  XAnimCollisionContact *v15; 
  __int64 v16; 
  float fmt; 
  XAnimCollisionContact *contacts; 
  __int64 numContacts; 

  _RBX = context;
  if ( !context && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2826, ASSERT_TYPE_ASSERT, "(context != 0)", (const char *)&queryFormat, "context != NULL") )
    __debugbreak();
  if ( !_RBX->dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2827, ASSERT_TYPE_ASSERT, "(context->dobj != 0)", (const char *)&queryFormat, "context->dobj != NULL") )
    __debugbreak();
  if ( !_RBX->procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2828, ASSERT_TYPE_ASSERT, "(context->procBones != 0)", (const char *)&queryFormat, "context->procBones != NULL") )
    __debugbreak();
  procBones = _RBX->procBones;
  if ( _RBX->firstPhysicsBoneIndex >= procBones->numPhysicsBones )
  {
    LODWORD(contacts) = _RBX->firstPhysicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2833, ASSERT_TYPE_ASSERT, "(unsigned)( context->firstPhysicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "context->firstPhysicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", contacts, procBones->numPhysicsBones) )
      __debugbreak();
  }
  if ( _RBX->endPhysicsBoneIndex > procBones->numPhysicsBones )
  {
    LODWORD(numContacts) = procBones->numPhysicsBones;
    LODWORD(contacts) = _RBX->endPhysicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2834, ASSERT_TYPE_ASSERT, "( context->endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "context->endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", contacts, numContacts) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+30h]
    vmovss  dword ptr [rsp+68h+fmt], xmm0
  }
  XAnimBonePhysics_Integrate(params, procBones, _RBX->firstPhysicsBoneIndex, _RBX->endPhysicsBoneIndex, fmt);
  Collisions = 0;
  XAnimBonePhysics_SolvePositionConstraints(procBones, _RBX->firstPhysicsBoneIndex, _RBX->endPhysicsBoneIndex, 1, _RBX->pinConstraintPoints, _RBX->contacts, 0);
  v7 = DCONST_DVARBOOL_xanim_physicsEnableCollisions;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableCollisions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableCollisions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    Collisions = XAnimBonePhysics_FindCollisions(procBones, _RBX->firstPhysicsBoneIndex, _RBX->endPhysicsBoneIndex, _RBX->collidableBoneCollisionShapes, _RBX->collidableBoneTransforms, _RBX->contacts, _RBX->maxContacts);
    XAnimBonePhysics_GenerateAudioEvents(_RBX, Collisions);
  }
  XAnimBonePhysics_SolvePositionConstraints(procBones, _RBX->firstPhysicsBoneIndex, _RBX->endPhysicsBoneIndex, _RBX->maxPositionSolverIterations, _RBX->pinConstraintPoints, _RBX->contacts, Collisions);
  __asm { vmovss  xmm3, dword ptr [rbx+30h]; timeStep }
  XAnimBonePhysics_UpdateVelocities(procBones, _RBX->firstPhysicsBoneIndex, _RBX->endPhysicsBoneIndex, *(float *)&_XMM3);
  v9 = _RBX->contacts;
  v10 = DCONST_DVARINT_xanim_physicsMaxVelocitySolverIterations;
  numPhysicsBones = procBones->numPhysicsBones;
  physicsBones = procBones->physicsBones;
  if ( !DCONST_DVARINT_xanim_physicsMaxVelocitySolverIterations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxVelocitySolverIterations") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  unsignedInt = v10->current.unsignedInt;
  if ( !physicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2414, ASSERT_TYPE_ASSERT, "(physicsBones != 0)", (const char *)&queryFormat, "physicsBones != NULL") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2415, ASSERT_TYPE_ASSERT, "(contacts != 0)", (const char *)&queryFormat, "contacts != NULL") )
    __debugbreak();
  if ( Collisions && (int)unsignedInt > 0 )
  {
    v14 = unsignedInt;
    do
    {
      if ( Collisions > 0 )
      {
        v15 = v9;
        v16 = (unsigned int)Collisions;
        do
        {
          XAnimBonePhysics_SolveWorldContactVelocityConstraint(v15++, physicsBones, numPhysicsBones);
          --v16;
        }
        while ( v16 );
      }
      --v14;
    }
    while ( v14 );
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
  unsigned int v11; 
  XAnimPhysicsBone *v12; 
  int v13; 
  unsigned int v14; 
  XAnimPhysicsBone *v15; 
  float fmt; 
  float fmta; 
  __int64 strength; 
  float strengtha; 
  float strengthb; 
  vec4_t *constraintQuat; 
  __int64 v26; 
  __int64 v27; 
  XAnimPhysicsBone *v29; 

  numModels = procBones->numModels;
  physicsBones = procBones->physicsBones;
  v29 = physicsBones;
  if ( numModels )
  {
    v5 = 0i64;
    v6 = numModels;
    v27 = numModels;
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
          v6 = v27;
        }
        v9 = 0;
        if ( numPinConstraints )
        {
          _RBX = (__int64)&modelInfo[v5].dynamicBonesAsset->customPinConstraints->dynamicBoneIndexB;
          do
          {
            if ( *(int *)_RBX < 0 )
            {
              LODWORD(v26) = *(_DWORD *)_RBX;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2248, ASSERT_TYPE_ASSERT, "( pin->dynamicBoneIndexB ) >= ( 0 )", "%s >= %s\n\t%i, %i", "pin->dynamicBoneIndexB", "0", v26, 0i64) )
                __debugbreak();
            }
            v11 = *(_DWORD *)_RBX + modelInfo[v5].firstPhysicsBoneIndex;
            if ( v11 >= procBones->numPhysicsBones )
            {
              LODWORD(constraintQuat) = procBones->numPhysicsBones;
              LODWORD(strength) = *(_DWORD *)_RBX + modelInfo[v5].firstPhysicsBoneIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2250, ASSERT_TYPE_ASSERT, "(unsigned)( dynamicBoneIndexB ) < (unsigned)( procBones->numPhysicsBones )", "dynamicBoneIndexB doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", strength, constraintQuat) )
                __debugbreak();
            }
            v12 = &physicsBones[v11];
            if ( v12->boneIndex != 255 )
            {
              v13 = *(_DWORD *)(_RBX - 4);
              if ( v13 < 0 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rbx+24h]
                  vmovss  xmm1, dword ptr [rbx+20h]
                  vmovss  [rsp+88h+strength], xmm0
                  vmovss  dword ptr [rsp+88h+fmt], xmm1
                }
                XAnimBonePhysics_SolvePinConstraint_Internal_1_1_0_(NULL, v12, &pinConstraintPoints[v9 + modelInfo[v5].firstPinConstraintIndex], (const vec3_t *)(_RBX + 20), fmta, strengthb, NULL);
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
                v15 = &v29[v14];
                if ( v15->boneIndex != 255 )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbx+24h]
                    vmovss  xmm1, dword ptr [rbx+20h]
                    vmovss  [rsp+88h+strength], xmm0
                    vmovss  dword ptr [rsp+88h+fmt], xmm1
                  }
                  XAnimBonePhysics_SolvePinConstraint_Internal_0_1_0_(v15, v12, (const vec3_t *)(_RBX + 8), (const vec3_t *)(_RBX + 20), fmt, strengtha, NULL);
                }
              }
            }
            physicsBones = v29;
            ++v9;
            _RBX += 44i64;
          }
          while ( v9 < numPinConstraints );
          v6 = v27;
        }
      }
      ++v5;
      v27 = --v6;
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
  DObjProceduralBones *v14; 
  XAnimCollisionContact *v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  XAnimPhysicsBone *physicsBones; 
  const dvar_t *v20; 
  bool enabled; 
  const dvar_t *v22; 
  bool v23; 
  const dvar_t *v24; 
  int v25; 
  __int64 v27; 
  __int64 p_flags; 
  unsigned __int8 v30; 
  XAnimPhysicsBone *v31; 
  char v32; 
  XAnimCollisionContact *v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned __int8 v40; 
  unsigned __int8 v124; 
  const dvar_t *v132; 
  __int64 v133; 
  __int64 p_properties; 
  XAnimPhysicsBone *v135; 
  bool v138; 
  float fmta; 
  float fmtb; 
  float fmt; 
  __int64 minAngle; 
  float minAngleb; 
  float minAnglec; 
  float minAngled; 
  float minAnglea; 
  float maxAngle; 
  bool v155; 
  bool v156; 
  bool v157; 
  __int64 v161; 
  vec4_t constraintQuat; 
  vec3_t bodyPinPointA; 
  vec3_t bodyPinPointB; 

  v14 = procBones;
  v15 = contacts;
  v16 = endPhysicsBoneIndex;
  v17 = firstPhysicsBoneIndex;
  v18 = (unsigned int)maxIterations;
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2281, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  if ( !contacts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2282, ASSERT_TYPE_ASSERT, "(contacts != 0)", (const char *)&queryFormat, "contacts != NULL") )
    __debugbreak();
  physicsBones = v14->physicsBones;
  if ( v16 > v14->numPhysicsBones )
  {
    LODWORD(minAngle) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2286, ASSERT_TYPE_ASSERT, "( endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", minAngle, v14->numPhysicsBones) )
      __debugbreak();
  }
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2287, ASSERT_TYPE_ASSERT, "( firstPhysicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "firstPhysicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", 0, 1) )
    __debugbreak();
  v20 = DCONST_DVARBOOL_xanim_physicsEnableSwingLimits;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableSwingLimits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableSwingLimits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  enabled = v20->current.enabled;
  v22 = DCONST_DVARBOOL_xanim_physicsEnableTwistLimits;
  v155 = enabled;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableTwistLimits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableTwistLimits") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = v22->current.enabled;
  v24 = DCONST_DVARBOOL_xanim_physicsEnableSprings;
  v157 = v23;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableSprings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableSprings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v156 = v24->current.enabled;
  if ( (int)v18 > 0 )
  {
    v25 = numContacts;
    __asm
    {
      vmovaps [rsp+168h+var_48], xmm6
      vmovaps [rsp+168h+var_58], xmm7
      vmovaps [rsp+168h+var_68], xmm8
      vmovaps [rsp+168h+var_78], xmm9
      vmovaps [rsp+168h+var_88], xmm10
      vmovaps [rsp+168h+var_98], xmm11
      vmovaps [rsp+168h+var_A8], xmm12
      vxorps  xmm12, xmm12, xmm12
    }
    v161 = v18;
    do
    {
      if ( v17 < v16 )
      {
        v27 = v16 - v17;
        p_flags = (__int64)&physicsBones[v17].flags;
        do
        {
          if ( *(_WORD *)(p_flags - 16) != 255 && (*(_BYTE *)p_flags & 3) != 0 )
          {
            _RDI = *(const vec3_t **)(p_flags - 8);
            if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2308, ASSERT_TYPE_ASSERT, "(properties != 0)", (const char *)&queryFormat, "properties != NULL") )
              __debugbreak();
            v30 = *(_BYTE *)(p_flags + 1);
            if ( v30 == 0xFF )
              v31 = NULL;
            else
              v31 = &physicsBones[v30];
            v32 = *(_BYTE *)p_flags;
            if ( (*(_BYTE *)p_flags & 1) != 0 && v155 )
            {
              __asm { vmovss  xmm3, dword ptr [rdi+40h]; cosMaxAngle }
              XAnimBonePhysics_SolveSwingLimitConstraint((XAnimPhysicsBone *)(p_flags - 16), v31, _RDI + 3, *(float *)&_XMM3);
              v32 = *(_BYTE *)p_flags;
            }
            if ( (v32 & 2) != 0 && v23 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+34h]
                vmovss  xmm1, dword ptr [rdi+30h]
                vmovss  [rsp+168h+maxAngle], xmm0
                vmovss  [rsp+168h+minAngle], xmm1
              }
              XAnimBonePhysics_SolveTwistLimitConstraint((XAnimPhysicsBone *)(p_flags - 16), v31, _RDI + 3, (const vec3_t *)(p_flags + 220), (const vec3_t *)(p_flags + 232), minAngleb, maxAngle);
            }
          }
          p_flags += 264i64;
          --v27;
        }
        while ( v27 );
        v17 = firstPhysicsBoneIndex;
        v14 = procBones;
        v16 = endPhysicsBoneIndex;
        v25 = numContacts;
        v15 = contacts;
      }
      if ( v25 > 0 )
      {
        v36 = v15;
        v37 = (unsigned int)v25;
        do
        {
          XAnimBonePhysics_SolveWorldContactPositionConstraint(v36++, physicsBones, v14->numPhysicsBones);
          --v37;
        }
        while ( v37 );
      }
      if ( v14->numCustomPinConstraints )
        XAnimBonePhysics_SolveCustomPinConstraints(v14, pinConstraintPoints);
      if ( v17 < v16 )
      {
        v38 = v16 - v17;
        _RBX = (const vec3_t *)&physicsBones[v17].parentBoneQuat.xyz.v[1];
        do
        {
          if ( LOWORD(_RBX[-18].y) != 255 )
          {
            if ( (LOBYTE(_RBX[-17].z) & 0x20) != 0 && v156 )
            {
              v40 = BYTE1(_RBX[-17].z);
              if ( v40 == 0xFF )
              {
                _RDI = (vec4_t *)(*(_QWORD *)_RBX[-17].v + 68i64);
                if ( _RDI == &constraintQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
                  __debugbreak();
                _RSI = (char *)&_RBX[-1].z;
                if ( (vec4_t *)&_RBX[-1].z == &constraintQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
                  __debugbreak();
                __asm
                {
                  vmovss  xmm9, dword ptr [rbx+8]
                  vmovss  xmm10, dword ptr [rdi]
                  vmovss  xmm5, dword ptr [rdi+0Ch]
                  vmovss  xmm6, dword ptr [rsi]
                  vmovss  xmm11, dword ptr [rdi+8]
                  vmovss  xmm7, dword ptr [rbx]
                  vmovss  xmm4, dword ptr [rdi+4]
                  vmovss  xmm8, dword ptr [rbx+4]
                  vmulss  xmm1, xmm5, xmm6
                  vmulss  xmm0, xmm10, xmm9
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm11, xmm7
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm4, xmm8
                  vsubss  xmm2, xmm3, xmm0
                  vmovss  dword ptr [rsp+168h+constraintQuat], xmm2
                  vmulss  xmm0, xmm11, xmm6
                  vmulss  xmm1, xmm4, xmm9
                  vsubss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm5, xmm7
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm10, xmm8
                  vaddss  xmm2, xmm3, xmm0
                  vmovss  dword ptr [rsp+168h+constraintQuat+4], xmm2
                  vmulss  xmm0, xmm11, xmm9
                  vmulss  xmm1, xmm4, xmm6
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm10, xmm7
                  vsubss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm5, xmm8
                  vaddss  xmm2, xmm3, xmm0
                  vmulss  xmm0, xmm10, xmm6
                  vmulss  xmm1, xmm5, xmm9
                  vmovss  dword ptr [rsp+168h+constraintQuat+8], xmm2
                  vsubss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm4, xmm7
                  vsubss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm11, xmm8
                  vsubss  xmm2, xmm3, xmm0
                  vmovss  [rsp+168h+minAngle], xmm12
                  vmovss  dword ptr [rsp+168h+constraintQuat+0Ch], xmm2
                  vmovss  dword ptr [rsp+168h+fmt], xmm12
                }
                XAnimBonePhysics_SolvePinConstraint_Internal_1_0_1_(NULL, (XAnimPhysicsBone *)&_RBX[-18].y, _RBX + 1, (const vec3_t *)((char *)_RBX - 28), fmtb, minAngled, &constraintQuat);
              }
              else
              {
                __asm { vmovss  xmm0, dword ptr [rbx-10h] }
                _RSI = (vec4_t *)(*(_QWORD *)_RBX[-17].v + 68i64);
                _RDI = &physicsBones[v40];
                _R14 = &_RDI->state.rotationQuat;
                __asm
                {
                  vaddss  xmm1, xmm0, dword ptr [rdi+0B8h]
                  vmovss  xmm2, dword ptr [rdi+0BCh]
                  vaddss  xmm0, xmm2, dword ptr [rbx-0Ch]
                  vmovss  dword ptr [rsp+168h+bodyPinPointA], xmm1
                  vmovss  xmm1, dword ptr [rdi+0C0h]
                  vaddss  xmm2, xmm1, dword ptr [rbx-8]
                  vmovss  dword ptr [rsp+168h+bodyPinPointA+8], xmm2
                  vmovss  dword ptr [rsp+168h+bodyPinPointA+4], xmm0
                }
                if ( _RSI == &constraintQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
                  __debugbreak();
                if ( _R14 == &constraintQuat && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
                  __debugbreak();
                __asm
                {
                  vmovss  xmm9, dword ptr [r14+0Ch]
                  vmovss  xmm10, dword ptr [rsi]
                  vmovss  xmm5, dword ptr [rsi+0Ch]
                  vmovss  xmm6, dword ptr [r14]
                  vmovss  xmm7, dword ptr [r14+4]
                  vmovss  xmm11, dword ptr [rsi+8]
                  vmovss  xmm8, dword ptr [r14+8]
                  vmovss  xmm4, dword ptr [rsi+4]
                  vmulss  xmm1, xmm6, xmm5
                  vmulss  xmm0, xmm10, xmm9
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm11, xmm7
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm4, xmm8
                  vsubss  xmm2, xmm3, xmm0
                  vmovss  dword ptr [rsp+168h+constraintQuat], xmm2
                  vmulss  xmm0, xmm11, xmm6
                  vmulss  xmm1, xmm4, xmm9
                  vsubss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm7, xmm5
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm8, xmm10
                  vaddss  xmm2, xmm3, xmm0
                  vmovss  dword ptr [rsp+168h+constraintQuat+4], xmm2
                  vmulss  xmm0, xmm11, xmm9
                  vmulss  xmm1, xmm4, xmm6
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm7, xmm10
                  vsubss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm8, xmm5
                  vaddss  xmm2, xmm3, xmm0
                  vmulss  xmm0, xmm6, xmm10
                  vmulss  xmm1, xmm5, xmm9
                  vmovss  dword ptr [rsp+168h+constraintQuat+8], xmm2
                  vsubss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm4, xmm7
                  vsubss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm8, xmm11
                  vsubss  xmm2, xmm3, xmm0
                  vmovss  [rsp+168h+minAngle], xmm12
                  vmovss  dword ptr [rsp+168h+constraintQuat+0Ch], xmm2
                  vmovss  dword ptr [rsp+168h+fmt], xmm12
                }
                XAnimBonePhysics_SolvePinConstraint_Internal_0_0_1_(_RDI, (XAnimPhysicsBone *)&_RBX[-18].y, &bodyPinPointA, (const vec3_t *)((char *)_RBX - 28), fmta, minAnglec, &constraintQuat);
              }
            }
            else
            {
              v124 = BYTE1(_RBX[-17].z);
              __asm
              {
                vmovss  [rsp+168h+minAngle], xmm12
                vmovss  dword ptr [rsp+168h+fmt], xmm12
              }
              if ( v124 == 0xFF )
              {
                XAnimBonePhysics_SolvePinConstraint_Internal_1_0_0_(NULL, (XAnimPhysicsBone *)&_RBX[-18].y, _RBX + 1, (const vec3_t *)((char *)_RBX - 28), fmt, minAnglea, NULL);
              }
              else
              {
                __asm { vmovss  xmm0, dword ptr [rbx-10h] }
                _RDX = &physicsBones[v124];
                __asm
                {
                  vaddss  xmm1, xmm0, dword ptr [rdx+0B8h]
                  vmovss  xmm2, dword ptr [rdx+0BCh]
                  vaddss  xmm0, xmm2, dword ptr [rbx-0Ch]
                  vmovss  dword ptr [rsp+168h+bodyPinPointB], xmm1
                  vmovss  xmm1, dword ptr [rdx+0C0h]
                  vaddss  xmm2, xmm1, dword ptr [rbx-8]
                  vmovss  dword ptr [rsp+168h+bodyPinPointB+8], xmm2
                  vmovss  dword ptr [rsp+168h+bodyPinPointB+4], xmm0
                }
                XAnimBonePhysics_SolvePinConstraint_Internal_0_0_0_((XAnimPhysicsBone *)&_RBX[-18].y, _RDX, (const vec3_t *)((char *)_RBX - 28), &bodyPinPointB, fmt, minAnglea, NULL);
              }
            }
          }
          _RBX += 22;
          --v38;
        }
        while ( v38 );
        v17 = firstPhysicsBoneIndex;
        v14 = procBones;
        v16 = endPhysicsBoneIndex;
        v23 = v157;
      }
      v132 = DCONST_DVARBOOL_xanim_physicsEnableMaxDistanceConstraint;
      if ( !DCONST_DVARBOOL_xanim_physicsEnableMaxDistanceConstraint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableMaxDistanceConstraint") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v132);
      if ( v132->current.enabled && v17 < v16 )
      {
        v133 = v16 - v17;
        p_properties = (__int64)&physicsBones[v17].properties;
        do
        {
          if ( *(_WORD *)(p_properties - 8) != 255 )
          {
            v135 = &physicsBones[*(unsigned __int8 *)(p_properties + 10)];
            if ( v135->boneIndex != 255 )
            {
              _RAX = *(_QWORD *)p_properties;
              __asm { vmovss  xmm3, dword ptr [rax+0Ch]; maxDistance }
              XAnimBonePhysics_SolveWorldMaxDistanceConstraint((XAnimPhysicsBone *)(p_properties - 8), (const vec3_t *)(p_properties + 176), &v135->modelPinPoint, *(float *)&_XMM3);
            }
          }
          p_properties += 264i64;
          --v133;
        }
        while ( v133 );
      }
      v138 = v161-- == 1;
      v25 = numContacts;
      v15 = contacts;
    }
    while ( !v138 );
    __asm
    {
      vmovaps xmm12, [rsp+168h+var_A8]
      vmovaps xmm11, [rsp+168h+var_98]
      vmovaps xmm10, [rsp+168h+var_88]
      vmovaps xmm9, [rsp+168h+var_78]
      vmovaps xmm8, [rsp+168h+var_68]
      vmovaps xmm7, [rsp+168h+var_58]
      vmovaps xmm6, [rsp+168h+var_48]
    }
  }
}

/*
==============
XAnimBonePhysics_SolveRotationConstraint1D
==============
*/
void XAnimBonePhysics_SolveRotationConstraint1D(XAnimPhysicsBone *physicsBoneA, XAnimPhysicsBone *physicsBoneB, const float4 *scalarConstraintError, const float4 *constraintAxis)
{
  float4 deltaRot; 
  float4 v26; 

  __asm { vmovaps [rsp+88h+var_28], xmm6 }
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
    vaddps  xmm2, xmm5, xmm6
    vrcpps  xmm1, xmm2
    vmulps  xmm0, xmm1, xmm1
    vmulps  xmm2, xmm0, xmm2
    vaddps  xmm1, xmm1, xmm1
    vsubps  xmm3, xmm1, xmm2
    vmulps  xmm0, xmm3, xmmword ptr [rbp+0]
    vxorps  xmm4, xmm4, xmm4
    vsubps  xmm2, xmm4, xmm0
    vmulps  xmm1, xmm2, xmmword ptr [rsi]
    vmulps  xmm0, xmm5, xmm1
    vmovups xmmword ptr [rsp+88h+deltaRot.v], xmm0
    vmulps  xmm0, xmm2, xmmword ptr [rsi]
    vsubps  xmm2, xmm4, xmm0
    vmulps  xmm1, xmm6, xmm2
    vmovups xmmword ptr [rsp+88h+var_48.v], xmm1
  }
  XAnimBonePhysics_ApplyRotationDelta(_RDI, &deltaRot);
  XAnimBonePhysics_ApplyRotationDelta(_RBX, &v26);
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
XAnimBonePhysics_SolveSwingLimitConstraint
==============
*/

void __fastcall XAnimBonePhysics_SolveSwingLimitConstraint(XAnimPhysicsBone *physicsBoneA, XAnimPhysicsBone *physicsBoneB, const vec3_t *axis, double cosMaxAngle)
{
  bool v18; 
  bool v20; 
  const dvar_t *v23; 
  char v24; 
  const float4 *v149; 
  const float4 *v150; 
  const float4 *v151; 
  float4 constraintAxis; 
  float4 scalarConstraintError; 
  char v165; 
  void *retaddr; 

  _RAX = &retaddr;
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
    vmovaps [rsp+138h+var_C8], xmm14
  }
  _RBP = axis;
  _RDI = physicsBoneB;
  _RBX = physicsBoneA;
  __asm { vmovaps xmm14, xmm3 }
  if ( !physicsBoneA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1723, ASSERT_TYPE_ASSERT, "(physicsBoneA != 0)", (const char *)&queryFormat, "physicsBoneA != NULL") )
    __debugbreak();
  if ( !_RBX->properties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1724, ASSERT_TYPE_ASSERT, "(physicsBoneA->properties != 0)", (const char *)&queryFormat, "physicsBoneA->properties != NULL") )
    __debugbreak();
  v18 = _RDI == NULL;
  if ( _RDI )
  {
    __asm { vmovups xmm9, xmmword ptr [rdi+1Ch] }
  }
  else
  {
    v18 = _RBX->parentPhysicsBoneIndex == 0xFF;
    if ( _RBX->parentPhysicsBoneIndex != 0xFF )
    {
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1732, ASSERT_TYPE_ASSERT, "(physicsBoneA->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX)", (const char *)&queryFormat, "physicsBoneA->parentPhysicsBoneIndex == XANIM_NO_PHYSICS_BONE_INDEX");
      v18 = !v20;
      if ( v20 )
        __debugbreak();
    }
    __asm { vmovups xmm9, xmmword ptr [rbx+0D0h] }
  }
  _RAX = _RBX->properties;
  __asm
  {
    vxorps  xmm13, xmm13, xmm13
    vucomiss xmm13, dword ptr [rax+84h]
  }
  if ( v18 )
    goto LABEL_19;
  v23 = DCONST_DVARBOOL_xanim_physicsEnableSprings;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableSprings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableSprings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( !v23->current.enabled )
LABEL_19:
    v24 = 0;
  else
    v24 = 1;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovups xmm10, xmmword ptr [rbx+1Ch]
    vshufps xmm6, xmm9, xmm9, 0FFh
  }
  scalarConstraintError.v.m128_i32[3] = 0;
  __asm { vmovups xmm11, xmmword ptr [rsp+138h+scalarConstraintError.v] }
  _RAX = _RBX->properties;
  __asm
  {
    vmovss  xmm11, xmm11, xmm0
    vinsertps xmm11, xmm11, dword ptr [rbp+4], 10h
    vinsertps xmm11, xmm11, dword ptr [rbp+8], 20h ; ' '
    vmovups xmm7, xmmword ptr [rax+44h]
    vshufps xmm8, xmm7, xmm7, 0FFh
    vmulps  xmm4, xmm9, xmm8
    vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
    vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vshufps xmm2, xmm9, xmm9, 0D2h ; 'Ò'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm3, xmm0
    vmulps  xmm1, xmm9, xmm7
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
    vmulps  xmm0, xmm8, xmm6
    vsubps  xmm2, xmm0, xmm3
    vmulps  xmm1, xmm7, xmm6
    vaddps  xmm1, xmm4, xmm1
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm3, xmm2, xmm0, 7
    vshufps xmm6, xmm3, xmm3, 0D2h ; 'Ò'
    vshufps xmm5, xmm3, xmm3, 0FFh
    vshufps xmm3, xmm3, xmm3, 0C9h ; 'É'
    vshufps xmm9, xmm11, xmm11, 0C9h ; 'É'
    vmulps  xmm0, xmm6, xmm9
    vshufps xmm8, xmm11, xmm11, 0D2h ; 'Ò'
    vmulps  xmm1, xmm3, xmm8
    vsubps  xmm2, xmm1, xmm0
    vaddps  xmm4, xmm2, xmm2
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm11
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm6
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm3
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm12, xmm1, xmm5
    vshufps xmm6, xmm10, xmm10, 0C9h ; 'É'
    vmulps  xmm1, xmm6, xmm8
    vshufps xmm7, xmm10, xmm10, 0D2h ; 'Ò'
    vmulps  xmm0, xmm7, xmm9
    vsubps  xmm2, xmm1, xmm0
    vaddps  xmm4, xmm2, xmm2
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vshufps xmm3, xmm10, xmm10, 0FFh
    vmulps  xmm0, xmm3, xmm4
    vaddps  xmm5, xmm0, xmm11
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm7
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vmulps  xmm0, xmm12, xmm4
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm6, xmm2, xmm2
    vcomiss xmm14, xmm6
    vmovups xmmword ptr [rsp+138h+scalarConstraintError.v], xmm11
  }
  if ( v24 )
  {
    __asm
    {
      vshufps xmm1, xmm12, xmm12, 0C9h ; 'É'
      vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
      vmulps  xmm3, xmm1, xmm0
      vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
      vshufps xmm2, xmm12, xmm12, 0D2h ; 'Ò'
      vmulps  xmm0, xmm2, xmm1
      vsubps  xmm5, xmm0, xmm3
      vmulps  xmm1, xmm5, xmm5
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm1, xmm2, xmm2
      vucomiss xmm1, xmm13
      vrsqrtps xmm4, xmm1
      vmulps  xmm0, xmm4, xmm4
      vmulps  xmm2, xmm0, xmm1
      vmulps  xmm0, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
      vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vsubps  xmm3, xmm1, xmm2
      vmulps  xmm2, xmm3, xmm0
      vaddps  xmm1, xmm2, xmm4
      vmulps  xmm4, xmm1, xmm5
      vcmpneqps xmm0, xmm4, xmm4
      vmovmskps eax, xmm0
      vmovups xmmword ptr [rsp+138h+constraintAxis.v], xmm4
    }
    if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1770, ASSERT_TYPE_SANITY, "( !Float4IsNaN( normalizedConstraintAxis ) )", (const char *)&queryFormat, "!Float4IsNaN( normalizedConstraintAxis )") )
      __debugbreak();
    __asm
    {
      vmovaps xmm0, xmm14
      vshufps xmm0, xmm0, xmm0, 0
      vshufps xmm0, xmm6, xmm0, 50h ; 'P'
      vshufps xmm1, xmm0, xmm6, 0E8h ; 'è'
      vmovups xmm0, xmmword ptr cs:s_acosConstants.v
      vshufps xmm8, xmm0, xmm0, 0
      vshufps xmm9, xmm0, xmm0, 55h ; 'U'
      vshufps xmm10, xmm0, xmm0, 0AAh ; 'ª'
      vshufps xmm7, xmm0, xmm0, 0FFh
      vmovups xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
      vxorps  xmm6, xmm6, xmm6
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
      vmulps  xmm2, xmm10, xmm4
      vaddps  xmm3, xmm2, xmm9
      vsubps  xmm1, xmm7, xmm4
      vsqrtps xmm2, xmm1
      vmulps  xmm5, xmm2, xmm3
      vmovups xmm0, xmm11
      vsubps  xmm1, xmm8, xmm5
      vblendvps xmm2, xmm1, xmm5, xmm0
      vshufps xmm3, xmm2, xmm2, 0
      vshufps xmm0, xmm2, xmm2, 55h ; 'U'
    }
    _RAX = _RBX->properties;
    __asm
    {
      vsubps  xmm1, xmm6, xmm3
      vbroadcastss xmm0, dword ptr [rax+84h]
      vmulps  xmm7, xmm1, xmm0
    }
    _RSI = DCONST_DVARFLT_xanim_physicsSwingStiffness;
    if ( !DCONST_DVARFLT_xanim_physicsSwingStiffness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsSwingStiffness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vbroadcastss xmm0, dword ptr [rsi+28h] }
    _RSI = DCONST_DVARFLT_xanim_physicsMaxSwingAdjustment;
    __asm
    {
      vmulps  xmm7, xmm0, xmm7
      vmovups xmmword ptr [rsp+138h+scalarConstraintError.v], xmm7
    }
    if ( !DCONST_DVARFLT_xanim_physicsMaxSwingAdjustment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxSwingAdjustment") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vbroadcastss xmm2, dword ptr [rsi+28h]
      vsubps  xmm1, xmm6, xmm2
      vmovups xmm0, xmm7
    }
    Float4Clamp(v150, v149, v151, &scalarConstraintError);
    if ( _RDI )
      XAnimBonePhysics_SolveRotationConstraint1D(_RBX, _RDI, &scalarConstraintError, &constraintAxis);
    else
      XAnimBonePhysics_SolveWorldRotationConstraint1D(_RBX, &scalarConstraintError, &constraintAxis);
  }
  _R11 = &v165;
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
    vmovaps xmm14, [rsp+138h+var_C8]
  }
}

/*
==============
XAnimBonePhysics_SolveTwistLimitConstraint
==============
*/
void XAnimBonePhysics_SolveTwistLimitConstraint(XAnimPhysicsBone *physicsBoneA, XAnimPhysicsBone *physicsBoneB, const vec3_t *twistAxis, const vec3_t *twistU, const vec3_t *twistV, float minAngle, float maxAngle)
{
  char v17; 
  char v18; 
  char v22; 
  const dvar_t *v25; 
  char v26; 
  const dvar_t *v52; 
  const dvar_t *v70; 
  float4 constraintAxis; 
  float4 scalarConstraintError; 
  char v86; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm12
  }
  *(float *)&_XMM0 = XAnimBonePhysics_FindTwistAngle(physicsBoneA, physicsBoneB, twistAxis, twistU, twistV, &constraintAxis);
  __asm
  {
    vmovss  xmm6, [rsp+0D8h+minAngle]
    vcomiss xmm0, xmm6
    vmovss  xmm12, [rsp+0D8h+maxAngle]
    vmovaps xmm10, xmm0
  }
  if ( v17 )
    goto LABEL_4;
  __asm { vcomiss xmm0, xmm12 }
  if ( !(v17 | v18) )
  {
LABEL_4:
    v22 = 1;
  }
  else
  {
    v22 = 0;
    v18 = 1;
  }
  _RAX = physicsBoneA->properties;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rax+88h]
  }
  if ( v18 )
    goto LABEL_11;
  v25 = DCONST_DVARBOOL_xanim_physicsEnableSprings;
  if ( !DCONST_DVARBOOL_xanim_physicsEnableSprings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsEnableSprings") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( !v25->current.enabled )
LABEL_11:
    v26 = 0;
  else
    v26 = 1;
  if ( v22 )
  {
    __asm
    {
      vmovaps [rsp+0D8h+var_38], xmm7
      vmovaps [rsp+0D8h+var_48], xmm8
      vmovaps [rsp+0D8h+var_58], xmm9
      vmovss  xmm9, cs:__real@40c90fdb
      vmovaps xmm1, xmm9; Y
      vsubss  xmm0, xmm6, xmm10; X
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm7, cs:__real@40490fdb
      vmovss  xmm6, cs:__real@c0490fdb
      vcmpless xmm1, xmm7, xmm0
      vsubss  xmm2, xmm0, xmm9
      vblendvps xmm3, xmm0, xmm2, xmm1
      vaddss  xmm1, xmm3, xmm9
      vcmpless xmm0, xmm6, xmm3
      vblendvps xmm8, xmm1, xmm3, xmm0
      vsubss  xmm0, xmm12, xmm10; X
      vmovaps xmm1, xmm9; Y
      vmovss  [rsp+0D8h+minAngle], xmm3
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    v52 = DCONST_DVARFLT_xanim_physicsTwistStiffness;
    __asm
    {
      vsubss  xmm2, xmm0, xmm9
      vcmpless xmm1, xmm7, xmm0
      vmovaps xmm7, [rsp+0D8h+var_38]
      vblendvps xmm3, xmm0, xmm2, xmm1
      vandps  xmm2, xmm8, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vaddss  xmm1, xmm3, xmm9
      vmovaps xmm9, [rsp+0D8h+var_58]
      vcmpless xmm0, xmm6, xmm3
      vblendvps xmm4, xmm1, xmm3, xmm0
      vandps  xmm0, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcmpltss xmm1, xmm2, xmm0
      vblendvps xmm0, xmm4, xmm8, xmm1
      vmovss  [rsp+0D8h+minAngle], xmm3
      vmovss  [rsp+0D8h+minAngle], xmm8
      vmovaps xmm8, [rsp+0D8h+var_48]
      vmovss  [rsp+0D8h+minAngle], xmm4
      vmovss  [rsp+0D8h+minAngle], xmm0
    }
    if ( !DCONST_DVARFLT_xanim_physicsTwistStiffness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsTwistStiffness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    __asm
    {
      vmovss  xmm0, [rsp+0D8h+minAngle]
      vmulss  xmm6, xmm0, dword ptr [rdi+28h]
    }
  }
  else
  {
    if ( !v26 )
      goto LABEL_28;
    __asm
    {
      vmovss  xmm6, cs:__real@40c90fdb
      vxorps  xmm0, xmm10, cs:__xmm@80000000800000008000000080000000; X
      vmovaps xmm1, xmm6; Y
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm
    {
      vmovss  xmm1, cs:__real@40490fdb
      vcmpless xmm2, xmm1, xmm0
      vsubss  xmm3, xmm0, xmm6
      vblendvps xmm4, xmm0, xmm3, xmm2
      vmovss  xmm0, cs:__real@c0490fdb
      vaddss  xmm2, xmm4, xmm6
      vcmpless xmm1, xmm0, xmm4
      vblendvps xmm2, xmm2, xmm4, xmm1
      vmulss  xmm6, xmm2, dword ptr [rax+88h]
    }
  }
  v70 = DCONST_DVARFLT_xanim_physicsTwistStiffness;
  if ( !DCONST_DVARFLT_xanim_physicsTwistStiffness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsTwistStiffness") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  __asm { vmulss  xmm6, xmm6, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_xanim_physicsMaxTwistAdjustment;
  if ( !DCONST_DVARFLT_xanim_physicsMaxTwistAdjustment && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsMaxTwistAdjustment") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+28h]; max
    vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000; min
    vmovaps xmm0, xmm6; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vshufps xmm0, xmm0, xmm0, 0
    vmovups xmmword ptr [rsp+0D8h+scalarConstraintError.v], xmm0
  }
  if ( physicsBoneB )
    XAnimBonePhysics_SolveRotationConstraint1D(physicsBoneA, physicsBoneB, &scalarConstraintError, &constraintAxis);
  else
    XAnimBonePhysics_SolveWorldRotationConstraint1D(physicsBoneA, &scalarConstraintError, &constraintAxis);
LABEL_28:
  _R11 = &v86;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
  }
}

/*
==============
XAnimBonePhysics_SolveWorldContactPositionConstraint
==============
*/
void XAnimBonePhysics_SolveWorldContactPositionConstraint(XAnimCollisionContact *contact, XAnimPhysicsBone *physicsBones, unsigned int numPhysicsBones)
{
  __int64 bodyIndex; 
  bool v14; 
  __int64 v93; 
  float4 deltaRot; 
  float4 deltaPos; 
  char v97; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rsp+0F0h+var_88+8], xmm11
  }
  _RDI = contact;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1973, ASSERT_TYPE_ASSERT, "(contact != 0)", (const char *)&queryFormat, "contact != NULL") )
    __debugbreak();
  if ( !physicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1974, ASSERT_TYPE_ASSERT, "(physicsBones != 0)", (const char *)&queryFormat, "physicsBones != NULL") )
    __debugbreak();
  if ( _RDI->bodyIndex >= numPhysicsBones )
  {
    LODWORD(v93) = _RDI->bodyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1976, ASSERT_TYPE_ASSERT, "(unsigned)( contact->bodyIndex ) < (unsigned)( numPhysicsBones )", "contact->bodyIndex doesn't index numPhysicsBones\n\t%i not in [0, %i)", v93, numPhysicsBones) )
      __debugbreak();
  }
  bodyIndex = _RDI->bodyIndex;
  v14 = __CFADD__(physicsBones, bodyIndex * 264);
  _RBX = &physicsBones[bodyIndex];
  deltaPos.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm10, xmmword ptr [rbp-49h]
    vmovups xmm3, xmmword ptr [rbx+1Ch]
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmovss  xmm10, xmm10, xmm0
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vinsertps xmm10, xmm10, dword ptr [rbx+30h], 10h
    vinsertps xmm10, xmm10, dword ptr [rbx+34h], 20h ; ' '
    vshufps xmm7, xmm3, xmm3, 0D2h ; 'Ò'
    vshufps xmm5, xmm3, xmm3, 0FFh
    vmovups xmmword ptr [rbp-49h], xmm10
  }
  deltaPos.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm11, xmmword ptr [rbp-49h]
    vmovss  xmm11, xmm11, xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vinsertps xmm11, xmm11, dword ptr [rdi+20h], 10h
    vinsertps xmm11, xmm11, dword ptr [rdi+24h], 20h ; ' '
    vmovups xmmword ptr [rbp-49h], xmm11
  }
  deltaPos.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rbp-49h]
    vmovss  xmm9, xmm9, xmm0
    vmovss  xmm0, dword ptr [rdi+10h]
    vinsertps xmm9, xmm9, dword ptr [rdi+8], 10h
    vinsertps xmm9, xmm9, dword ptr [rdi+0Ch], 20h ; ' '
    vmovups xmmword ptr [rbp-49h], xmm9
  }
  deltaPos.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm8, xmmword ptr [rbp-49h]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [rdi+14h], 10h
    vinsertps xmm8, xmm8, dword ptr [rdi+18h], 20h ; ' '
    vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
    vshufps xmm6, xmm3, xmm3, 0C9h ; 'É'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm9
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm7
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vaddps  xmm0, xmm10, xmm4
    vsubps  xmm1, xmm8, xmm0
    vmulps  xmm2, xmm11, xmm1
    vinsertps xmm0, xmm2, xmm2, 8
    vhaddps xmm1, xmm0, xmm0
    vmovups xmmword ptr [rbp-49h], xmm8
    vhaddps xmm8, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm8, xmm0
  }
  if ( v14 )
  {
    __asm
    {
      vshufps xmm1, xmm11, xmm11, 0C9h ; 'É'
      vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
      vmulps  xmm3, xmm1, xmm0
      vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
      vshufps xmm2, xmm11, xmm11, 0D2h ; 'Ò'
      vmulps  xmm0, xmm2, xmm1
      vsubps  xmm7, xmm0, xmm3
    }
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1592, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL") )
      __debugbreak();
    __asm
    {
      vbroadcastss xmm6, dword ptr [rbx+18h]
      vbroadcastss xmm5, dword ptr [rbx+14h]
      vmulps  xmm0, xmm7, xmm6
      vmulps  xmm1, xmm0, xmm7
      vinsertps xmm2, xmm1, xmm1, 8
      vhaddps xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
      vaddps  xmm2, xmm5, xmm1
      vrcpps  xmm3, xmm2
      vmulps  xmm0, xmm3, xmm3
      vmulps  xmm2, xmm0, xmm2
      vaddps  xmm1, xmm3, xmm3
      vsubps  xmm2, xmm1, xmm2
      vmulps  xmm4, xmm2, xmm8
      vmulps  xmm0, xmm11, xmm4
      vmulps  xmm1, xmm7, xmm4
      vmulps  xmm0, xmm5, xmm0
      vmulps  xmm2, xmm1, xmm6
      vmovups xmmword ptr [rbp+57h+deltaPos.v], xmm0
      vmovups xmmword ptr [rbp+57h+deltaRot.v], xmm2
    }
    XAnimBonePhysics_ApplyPositionDelta(_RBX, &deltaPos);
    XAnimBonePhysics_ApplyRotationDelta(_RBX, &deltaRot);
  }
  _R11 = &v97;
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
XAnimBonePhysics_SolveWorldContactVelocityConstraint
==============
*/
void XAnimBonePhysics_SolveWorldContactVelocityConstraint(XAnimCollisionContact *contact, XAnimPhysicsBone *physicsBones, unsigned int numPhysicsBones)
{
  __int64 v210; 
  __int128 v212; 
  __int128 v213; 
  __int128 v214; 
  __int128 v215; 
  char v218; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-28h], xmm6
    vmovaps xmmword ptr [r11-38h], xmm7
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovaps xmmword ptr [r11-58h], xmm9
    vmovaps xmmword ptr [r11-68h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm12
    vmovaps xmmword ptr [r11-98h], xmm13
    vmovaps xmmword ptr [r11-0A8h], xmm14
    vmovaps [rsp+128h+var_B8], xmm15
  }
  _RDI = contact;
  if ( !contact && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2069, ASSERT_TYPE_ASSERT, "(contact != 0)", (const char *)&queryFormat, "contact != NULL") )
    __debugbreak();
  if ( !physicsBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2070, ASSERT_TYPE_ASSERT, "(physicsBones != 0)", (const char *)&queryFormat, "physicsBones != NULL") )
    __debugbreak();
  if ( _RDI->bodyIndex >= numPhysicsBones )
  {
    LODWORD(v210) = _RDI->bodyIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2071, ASSERT_TYPE_ASSERT, "(unsigned)( contact->bodyIndex ) < (unsigned)( numPhysicsBones )", "contact->bodyIndex doesn't index numPhysicsBones\n\t%i not in [0, %i)", v210, numPhysicsBones) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vxorps  xmm10, xmm10, xmm10
  }
  _RBX = &physicsBones[_RDI->bodyIndex];
  HIDWORD(v212) = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp+50h]
    vmovups xmm3, xmmword ptr [rbx+1Ch]
    vbroadcastss xmm15, dword ptr [rbx+18h]
    vbroadcastss xmm14, dword ptr [rbx+14h]
    vmovss  xmm9, xmm9, xmm0
    vmovss  xmm0, dword ptr [rdi+4]
    vinsertps xmm9, xmm9, dword ptr [rdi+20h], 10h
    vinsertps xmm9, xmm9, dword ptr [rdi+24h], 20h ; ' '
    vshufps xmm7, xmm3, xmm3, 0D2h ; 'Ò'
    vshufps xmm5, xmm3, xmm3, 0FFh
    vshufps xmm6, xmm3, xmm3, 0C9h ; 'É'
    vmovups xmmword ptr [rsp+50h], xmm9
  }
  HIDWORD(v213) = 0;
  __asm
  {
    vmovups xmm8, xmmword ptr [rsp+50h]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [rdi+8], 10h
    vinsertps xmm8, xmm8, dword ptr [rdi+0Ch], 20h ; ' '
    vmovups xmmword ptr [rsp+50h], xmm8
    vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm8
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm7
    vmovss  xmm0, dword ptr [rbx+54h]
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vsubps  xmm8, xmm10, xmm9
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
  }
  HIDWORD(v214) = 0;
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+50h]
    vmovss  xmm7, xmm7, xmm0
    vmovss  xmm0, dword ptr [rbx+60h]
    vinsertps xmm7, xmm7, dword ptr [rbx+58h], 10h
    vinsertps xmm7, xmm7, dword ptr [rbx+5Ch], 20h ; ' '
    vmovups xmmword ptr [rsp+50h], xmm7
  }
  HIDWORD(v215) = 0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rsp+50h]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rbx+64h], 10h
    vinsertps xmm6, xmm6, dword ptr [rbx+68h], 20h ; ' '
    vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm3, xmm0
    vmulps  xmm1, xmm7, xmm8
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
    vmulps  xmm0, xmm5, xmm6
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vmulps  xmm1, xmm15, xmm5
    vmovups [rsp+128h+var_E8], xmm4
    vaddps  xmm4, xmm0, xmm3
    vmulps  xmm0, xmm1, xmm5
    vinsertps xmm2, xmm0, xmm0, 8
    vhaddps xmm1, xmm2, xmm2
    vhaddps xmm0, xmm1, xmm1
    vaddps  xmm2, xmm0, xmm14
    vrcpps  xmm1, xmm2
    vmulps  xmm0, xmm1, xmm1
    vmulps  xmm2, xmm0, xmm2
    vaddps  xmm1, xmm1, xmm1
    vsubps  xmm2, xmm1, xmm2
    vmulps  xmm0, xmm2, xmm4
    vmulps  xmm3, xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vsubps  xmm1, xmm10, xmm3
    vmulps  xmm0, xmm1, xmm8
    vmulps  xmm2, xmm0, xmm14
    vmulps  xmm1, xmm5, xmm1
    vmulps  xmm0, xmm1, xmm15
    vaddps  xmm13, xmm0, xmm6
    vaddps  xmm12, xmm2, xmm7
  }
  if ( _RDI->groundPlane )
  {
    _RDI = DCONST_DVARFLT_xanim_physicsGroundPlaneFriction;
    __asm { vmovaps [rsp+128h+var_78], xmm11 }
    if ( !DCONST_DVARFLT_xanim_physicsGroundPlaneFriction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsGroundPlaneFriction") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vbroadcastss xmm11, dword ptr [rdi+28h]
      vshufps xmm5, xmm8, xmm8, 59h ; 'Y'
      vcmpltps xmm1, xmm5, xmm10
      vshufps xmm6, xmm8, xmm8, 0AAh ; 'ª'
      vsubps  xmm3, xmm10, xmm8
      vcmpltps xmm0, xmm6, xmm10
      vpcmpeqd xmm0, xmm0, xmm1
      vaddps  xmm1, xmm6, xmm5
      vshufps xmm2, xmm1, xmm3, 0
      vshufps xmm4, xmm2, xmm3, 8
      vsubps  xmm1, xmm5, xmm6
      vshufps xmm2, xmm1, xmm8, 0
      vshufps xmm3, xmm2, xmm8, 8
      vblendvps xmm5, xmm3, xmm4, xmm0
      vmulps  xmm1, xmm5, xmm5
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm0, xmm2, xmm2
      vrsqrtps xmm1, xmm0
      vmulps  xmm7, xmm1, xmm5
      vshufps xmm6, xmm7, xmm7, 0C9h ; 'É'
      vshufps xmm5, xmm7, xmm7, 0D2h ; 'Ò'
      vshufps xmm0, xmm8, xmm8, 0C9h ; 'É'
      vmulps  xmm3, xmm0, xmm5
      vshufps xmm1, xmm8, xmm8, 0D2h ; 'Ò'
      vmulps  xmm2, xmm1, xmm6
      vsubps  xmm4, xmm3, xmm2
      vmulps  xmm0, xmm4, xmm4
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vrsqrtps xmm1, xmm0
      vmovups xmm0, [rsp+128h+var_E8]
      vshufps xmm8, xmm0, xmm0, 0C9h ; 'É'
      vmulps  xmm10, xmm1, xmm4
      vshufps xmm9, xmm0, xmm0, 0D2h ; 'Ò'
      vmulps  xmm1, xmm5, xmm8
      vmulps  xmm0, xmm6, xmm9
      vsubps  xmm5, xmm1, xmm0
      vmulps  xmm2, xmm7, xmm12
      vinsertps xmm0, xmm2, xmm2, 8
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm3, xmm1, xmm1
      vmulps  xmm0, xmm5, xmm13
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vaddps  xmm4, xmm0, xmm3
      vmulps  xmm1, xmm15, xmm5
      vmulps  xmm0, xmm1, xmm5
      vinsertps xmm2, xmm0, xmm0, 8
      vhaddps xmm1, xmm2, xmm2
      vhaddps xmm0, xmm1, xmm1
      vaddps  xmm2, xmm0, xmm14
      vrcpps  xmm1, xmm2
      vmulps  xmm0, xmm1, xmm1
      vmulps  xmm2, xmm0, xmm2
      vaddps  xmm1, xmm1, xmm1
      vsubps  xmm2, xmm1, xmm2
      vmulps  xmm0, xmm2, xmm4
      vmulps  xmm3, xmm0, xmm11
      vxorps  xmm1, xmm1, xmm1
      vsubps  xmm1, xmm1, xmm3
      vmulps  xmm0, xmm7, xmm1
      vmulps  xmm2, xmm0, xmm14
      vmulps  xmm1, xmm5, xmm1
      vmulps  xmm0, xmm1, xmm15
      vaddps  xmm7, xmm0, xmm13
      vaddps  xmm6, xmm2, xmm12
      vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
      vmulps  xmm3, xmm0, xmm8
      vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
      vmulps  xmm2, xmm1, xmm9
      vsubps  xmm5, xmm3, xmm2
      vmulps  xmm0, xmm10, xmm6
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm3, xmm2, xmm2
      vmulps  xmm0, xmm5, xmm7
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm0, xmm2, xmm2
      vaddps  xmm4, xmm0, xmm3
      vmulps  xmm1, xmm15, xmm5
      vmulps  xmm0, xmm1, xmm5
      vinsertps xmm2, xmm0, xmm0, 8
      vhaddps xmm1, xmm2, xmm2
      vhaddps xmm0, xmm1, xmm1
      vaddps  xmm2, xmm0, xmm14
      vrcpps  xmm1, xmm2
      vmulps  xmm0, xmm1, xmm1
      vmulps  xmm2, xmm0, xmm2
      vaddps  xmm1, xmm1, xmm1
      vsubps  xmm2, xmm1, xmm2
      vmulps  xmm0, xmm2, xmm4
      vmulps  xmm3, xmm0, xmm11
      vmovaps xmm11, [rsp+128h+var_78]
      vxorps  xmm0, xmm0, xmm0
      vsubps  xmm1, xmm0, xmm3
      vmulps  xmm0, xmm10, xmm1
      vmulps  xmm2, xmm0, xmm14
      vmulps  xmm1, xmm5, xmm1
      vmulps  xmm0, xmm1, xmm15
      vaddps  xmm13, xmm0, xmm7
      vaddps  xmm12, xmm2, xmm6
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+54h], xmm12
    vextractps dword ptr [rbx+58h], xmm12, 1
    vextractps dword ptr [rbx+5Ch], xmm12, 2
    vmovss  dword ptr [rbx+60h], xmm13
    vextractps dword ptr [rbx+64h], xmm13, 1
    vextractps dword ptr [rbx+68h], xmm13, 2
  }
  _R11 = &v218;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, [rsp+128h+var_B8]
  }
}

/*
==============
XAnimBonePhysics_SolveWorldMaxDistanceConstraint
==============
*/

void __fastcall XAnimBonePhysics_SolveWorldMaxDistanceConstraint(XAnimPhysicsBone *physicsBone, const vec3_t *bodyPinPoint, const vec3_t *worldPinPoint, double maxDistance)
{
  float4 deltaPos; 
  float4 deltaPosa; 
  float4 deltaPosb; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps [rsp+0E8h+var_88], xmm11
  }
  _RSI = worldPinPoint;
  _RDI = bodyPinPoint;
  _RBX = physicsBone;
  __asm { vmovaps xmm11, xmm3 }
  if ( !physicsBone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1632, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL") )
    __debugbreak();
  __asm
  {
    vmovups xmm3, xmmword ptr [rbx+1Ch]
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vshufps xmm7, xmm3, xmm3, 0D2h ; 'Ò'
    vshufps xmm5, xmm3, xmm3, 0FFh
    vshufps xmm6, xmm3, xmm3, 0C9h ; 'É'
  }
  deltaPos.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm10, xmmword ptr [rsp+0E8h+deltaPos.v]
    vmovss  xmm10, xmm10, xmm0
    vmovss  xmm0, dword ptr [rdi]
    vinsertps xmm10, xmm10, dword ptr [rbx+30h], 10h
    vinsertps xmm10, xmm10, dword ptr [rbx+34h], 20h ; ' '
    vmovups xmmword ptr [rsp+0E8h+deltaPos.v], xmm10
  }
  deltaPosa.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp+0E8h+deltaPos.v]
    vmovss  xmm9, xmm9, xmm0
    vinsertps xmm9, xmm9, dword ptr [rdi+4], 10h
    vinsertps xmm9, xmm9, dword ptr [rdi+8], 20h ; ' '
    vmovss  xmm0, dword ptr [rsi]
    vmovups xmmword ptr [rsp+0E8h+deltaPos.v], xmm9
    vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
  }
  deltaPosb.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm8, xmmword ptr [rsp+0E8h+deltaPos.v]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [rsi+4], 10h
    vinsertps xmm8, xmm8, dword ptr [rsi+8], 20h ; ' '
    vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm9
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm7
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vaddps  xmm0, xmm10, xmm4
    vsubps  xmm5, xmm8, xmm0
    vmulps  xmm0, xmm5, xmm5
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vmovaps xmm3, xmm11
    vshufps xmm3, xmm3, xmm3, 0
    vsubps  xmm9, xmm1, xmm3
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm9, xmm0
    vmovups xmmword ptr [rsp+0E8h+deltaPos.v], xmm8
  }
  _R11 = &v71;
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
XAnimBonePhysics_SolveWorldRotationConstraint1D
==============
*/
void XAnimBonePhysics_SolveWorldRotationConstraint1D(XAnimPhysicsBone *physicsBone, const float4 *scalarConstraintError, const float4 *constraintAxis)
{
  bool v5; 
  bool v6; 
  float4 deltaRot; 

  _RBX = physicsBone;
  v5 = physicsBone == NULL;
  if ( !physicsBone )
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1564, ASSERT_TYPE_ASSERT, "(physicsBone != 0)", (const char *)&queryFormat, "physicsBone != NULL");
    v5 = !v6;
    if ( v6 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx+18h]
  }
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 1565, ASSERT_TYPE_ASSERT, "(physicsBone->invInertiaTensor != 0.0f)", (const char *)&queryFormat, "physicsBone->invInertiaTensor != 0.0f") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vsubps  xmm2, xmm0, xmmword ptr [rsi]
    vmulps  xmm0, xmm2, xmmword ptr [rdi]
    vmovups xmmword ptr [rsp+58h+deltaRot.v], xmm0
  }
  XAnimBonePhysics_ApplyRotationDelta(_RBX, &deltaRot);
}

/*
==============
XAnimBonePhysics_UpdateNoise
==============
*/

bool __fastcall XAnimBonePhysics_UpdateNoise(XAnimPhysicsBone *physicsBone, double timeStep, vec3_t *outVelocity, vec3_t *outAngularVelocity)
{
  const XAnimDynamicBoneProperties *properties; 
  XAnimDynamicBoneNoiseState *p_noise; 
  unsigned int v12; 
  const dvar_t *v13; 
  XAnimPhysicsNoiseStateInfo *v15; 
  __int64 v16; 
  const XAnimDynamicBoneNoiseAxis *axis; 
  const XAnimCurve **v22; 
  bool v24; 
  bool v25; 
  const XAnimCurve **v31; 
  bool v32; 
  bool v33; 
  bool result; 

  __asm { vmovaps [rsp+88h+var_38], xmm6 }
  _R12 = outAngularVelocity;
  _R13 = outVelocity;
  __asm { vmovaps xmm6, xmm1 }
  if ( !physicsBone && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 930, ASSERT_TYPE_ASSERT, "(physicsBone)", (const char *)&queryFormat, "physicsBone") )
    __debugbreak();
  properties = physicsBone->properties;
  p_noise = &physicsBone->state.noise;
  v12 = 0;
  *(_QWORD *)_R13->v = 0i64;
  _R13->v[2] = 0.0;
  *(_QWORD *)_R12->v = 0i64;
  _R12->v[2] = 0.0;
  v13 = DCONST_DVARBOOL_xanim_physicsNoiseEnable;
  if ( !DCONST_DVARBOOL_xanim_physicsNoiseEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsNoiseEnable") )
    __debugbreak();
  __asm { vmovaps [rsp+88h+var_48], xmm7 }
  Dvar_CheckFrontendServerThread(v13);
  if ( !v13->current.enabled )
    goto LABEL_35;
  if ( !properties->noise.enable )
    goto LABEL_35;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm6, xmm7
  }
  if ( properties->noise.enable )
  {
    v15 = (XAnimPhysicsNoiseStateInfo *)p_noise;
    v16 = 3i64;
    axis = properties->noise.rotation.axis;
    do
    {
      __asm { vmovaps xmm2, xmm6; timeStep }
      XAnimBonePhysics_UpdateNoiseTimer((const XAnimDynamicBoneNoiseAxis *)((char *)axis - 80), v15, *(const float *)&_XMM2);
      __asm { vmovaps xmm2, xmm6; timeStep }
      XAnimBonePhysics_UpdateNoiseTimer(axis, v15 + 3, *(const float *)&_XMM2);
      ++v15;
      ++axis;
      --v16;
    }
    while ( v16 );
    _R15 = p_noise->rotation;
    _R14 = &properties->noise.rotation.axis[0].strength;
    do
    {
      v22 = (const XAnimCurve **)(_R14 - 22);
      if ( _R14 == (float *)88 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 877, ASSERT_TYPE_ASSERT, "(properties)", (const char *)&queryFormat, "properties") )
        __debugbreak();
      _RBX = _R15 - 3;
      v24 = _R15 == (XAnimPhysicsNoiseStateInfo *)36;
      if ( _R15 == (XAnimPhysicsNoiseStateInfo *)36 )
      {
        v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 878, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state");
        v24 = !v25;
        if ( v25 )
          __debugbreak();
      }
      __asm { vucomiss xmm7, dword ptr [r14-50h] }
      if ( v24 )
        goto LABEL_22;
      __asm { vucomiss xmm7, dword ptr [rbx] }
      if ( !*v22 )
      {
LABEL_22:
        __asm { vmovaps xmm6, xmm7 }
      }
      else
      {
        __asm { vmovss  xmm1, dword ptr [r15-1Ch]; time }
        XAnimCurve_GetValue(*v22, *(const float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, dword ptr [r14-50h]
          vmulss  xmm2, xmm1, dword ptr [rbx]
          vmulss  xmm6, xmm2, xmm0
        }
      }
      _RDI = (int)v12;
      v31 = (const XAnimCurve **)(_R14 - 2);
      __asm { vmovss  dword ptr [r13+rdi*4+0], xmm6 }
      if ( _R14 == (float *)8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 877, ASSERT_TYPE_ASSERT, "(properties)", (const char *)&queryFormat, "properties") )
        __debugbreak();
      v32 = _R15 == NULL;
      if ( !_R15 )
      {
        v33 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 878, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state");
        v32 = !v33;
        if ( v33 )
          __debugbreak();
      }
      __asm { vucomiss xmm7, dword ptr [r14] }
      if ( v32 )
        goto LABEL_32;
      __asm { vucomiss xmm7, dword ptr [r15] }
      if ( !*v31 )
      {
LABEL_32:
        __asm { vmovaps xmm6, xmm7 }
      }
      else
      {
        __asm { vmovss  xmm1, dword ptr [r15+8]; time }
        XAnimCurve_GetValue(*v31, *(const float *)&_XMM1);
        __asm
        {
          vmovss  xmm1, dword ptr [r15]
          vmulss  xmm2, xmm1, dword ptr [r14]
          vmulss  xmm6, xmm2, xmm0
        }
      }
      ++v12;
      ++_R15;
      _R14 += 6;
      __asm { vmovss  dword ptr [r12+rdi*4], xmm6 }
    }
    while ( v12 < 3 );
    __asm
    {
      vmovss  xmm3, cs:__real@3c8efa35
      vmulss  xmm0, xmm3, dword ptr [r12]
      vmulss  xmm2, xmm3, dword ptr [r12+4]
      vmulss  xmm1, xmm3, dword ptr [r12+8]
    }
    result = 1;
    __asm
    {
      vmovss  dword ptr [r12], xmm0
      vmovss  dword ptr [r12+4], xmm2
      vmovss  dword ptr [r12+8], xmm1
    }
  }
  else
  {
LABEL_35:
    result = 0;
  }
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_48]
    vmovaps xmm6, [rsp+88h+var_38]
  }
  return result;
}

/*
==============
XAnimBonePhysics_UpdateNoiseTimer
==============
*/

void __fastcall XAnimBonePhysics_UpdateNoiseTimer(const XAnimDynamicBoneNoiseAxis *properties, XAnimPhysicsNoiseStateInfo *outState, double timeStep)
{
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RBX = outState;
  _RDI = properties;
  __asm { vmovaps xmm6, xmm2 }
  if ( !properties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 862, ASSERT_TYPE_ASSERT, "(properties)", (const char *)&queryFormat, "properties") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 863, ASSERT_TYPE_ASSERT, "(outState)", (const char *)&queryFormat, "outState") )
    __debugbreak();
  _RAX = _RDI->curve;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  if ( _RDI->curve )
  {
    __asm { vucomiss xmm0, dword ptr [rdi+8] }
    if ( _RDI->curve )
    {
      __asm { vucomiss xmm0, dword ptr [rbx] }
      if ( _RDI->curve )
      {
        __asm
        {
          vmulss  xmm0, xmm6, dword ptr [rdi+0Ch]
          vmulss  xmm2, xmm0, dword ptr [rbx+4]
          vaddss  xmm0, xmm2, dword ptr [rbx+8]; X
          vmovss  xmm1, dword ptr [rax+18h]; Y
        }
        *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      }
    }
  }
  __asm
  {
    vmovss  dword ptr [rbx+8], xmm0
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
XAnimBonePhysics_UpdateVelocities
==============
*/

void __fastcall XAnimBonePhysics_UpdateVelocities(DObjProceduralBones *procBones, unsigned int firstPhysicsBoneIndex, unsigned int endPhysicsBoneIndex, double timeStep)
{
  __int64 v16; 
  XAnimPhysicsBone *physicsBones; 
  bool v19; 
  bool v20; 
  const dvar_t *v23; 
  const dvar_t *v26; 
  bool v41; 
  __int64 v87; 
  double v88; 
  double v89; 
  float4 velocity; 
  float4 result; 
  __int128 v92; 
  __int128 v93; 
  char v97; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
  }
  v16 = firstPhysicsBoneIndex;
  __asm { vmovaps xmm7, xmm3 }
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2158, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  physicsBones = procBones->physicsBones;
  if ( endPhysicsBoneIndex > procBones->numPhysicsBones )
  {
    LODWORD(v87) = endPhysicsBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2162, ASSERT_TYPE_ASSERT, "( endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", v87, procBones->numPhysicsBones) )
      __debugbreak();
  }
  v19 = (unsigned int)v16 <= 1;
  if ( !(_DWORD)v16 )
  {
    v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2163, ASSERT_TYPE_ASSERT, "( firstPhysicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "firstPhysicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", 0, 1);
    v19 = !v20;
    if ( v20 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm7, xmm0
  }
  if ( v19 )
  {
    __asm
    {
      vmovsd  [rsp+158h+var_118], xmm0
      vcvtss2sd xmm1, xmm7, xmm7
      vmovsd  [rsp+158h+var_120], xmm1
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics.cpp", 2164, ASSERT_TYPE_ASSERT, "( timeStep ) > ( 0.0f )", "%s > %s\n\t%g, %g", "timeStep", "0.0f", v88, v89) )
      __debugbreak();
  }
  v23 = DCONST_DVARFLT_xanim_physicsVelocityDamping;
  if ( !DCONST_DVARFLT_xanim_physicsVelocityDamping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsVelocityDamping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vsubss  xmm8, xmm6, dword ptr [rbx+28h]
  }
  v26 = DCONST_DVARFLT_xanim_physicsAngularVelocityDamping;
  if ( !DCONST_DVARFLT_xanim_physicsAngularVelocityDamping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsAngularVelocityDamping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  __asm
  {
    vsubss  xmm0, xmm6, dword ptr [rbx+28h]
    vmulss  xmm1, xmm0, cs:__real@40000000
    vdivss  xmm2, xmm6, xmm7
    vmulss  xmm13, xmm1, xmm2
    vmulss  xmm12, xmm2, xmm8
    vshufps xmm13, xmm13, xmm13, 0
    vshufps xmm12, xmm12, xmm12, 0
  }
  if ( (unsigned int)v16 < endPhysicsBoneIndex )
  {
    __asm
    {
      vmovaps [rsp+158h+var_78], xmm9
      vmovaps [rsp+158h+var_88], xmm10
      vmovaps [rsp+158h+var_98], xmm11
    }
    _RBX = (__int64)&physicsBones[v16].state.position.z;
    do
    {
      if ( *(_WORD *)(_RBX - 52) != 255 )
      {
        __asm { vmovups xmm9, xmmword ptr [rbx-18h] }
        _RAX = *(_QWORD *)(_RBX - 44);
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-8]
          vmovups xmm1, xmmword ptr [rbx+4]
          vmulps  xmm7, xmm1, cs:__xmm@3f800000bf800000bf800000bf800000
          vbroadcastss xmm11, dword ptr [rax+38h]
        }
        v41 = (*(_BYTE *)(_RBX - 36) & 0x20) == 0;
        __asm { vshufps xmm6, xmm9, xmm9, 0FFh }
        HIDWORD(v92) = 0;
        __asm
        {
          vmovups xmm4, xmmword ptr [rsp+70h]
          vmovss  xmm4, xmm4, xmm0
          vmovss  xmm0, dword ptr [rbx+14h]
          vinsertps xmm4, xmm4, dword ptr [rbx-4], 10h
          vinsertps xmm4, xmm4, dword ptr [rbx], 20h ; ' '
        }
        HIDWORD(v93) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+80h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rbx+18h], 10h
          vinsertps xmm3, xmm3, dword ptr [rbx+1Ch], 20h ; ' '
          vsubps  xmm0, xmm4, xmm3
          vmulps  xmm10, xmm12, xmm0
          vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
          vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
          vmovups xmmword ptr [rsp+80h], xmm3
          vmulps  xmm3, xmm1, xmm0
          vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
          vshufps xmm2, xmm9, xmm9, 0D2h ; 'Ò'
          vmulps  xmm0, xmm2, xmm1
          vsubps  xmm5, xmm3, xmm0
          vmulps  xmm1, xmm9, xmm7
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vshufps xmm8, xmm7, xmm7, 0FFh
          vmulps  xmm0, xmm8, xmm6
          vmulps  xmm1, xmm7, xmm6
          vhaddps xmm3, xmm2, xmm2
          vsubps  xmm2, xmm0, xmm3
          vmovups xmmword ptr [rsp+70h], xmm4
          vmulps  xmm4, xmm9, xmm8
          vaddps  xmm1, xmm4, xmm1
          vaddps  xmm0, xmm5, xmm1
          vblendps xmm2, xmm2, xmm0, 7
          vmulps  xmm6, xmm13, xmm2
          vmovups xmmword ptr [rsp+158h+velocity.v], xmm10
        }
        if ( !v41 )
        {
          _RAX = XAnimBonePhysics_ApplyTranslationalSpringDamping(&result, procBones, v16, &velocity);
          __asm { vmovups xmm10, xmmword ptr [rax] }
        }
        __asm
        {
          vmulps  xmm1, xmm11, xmm10
          vmulps  xmm2, xmm11, xmm6
          vmovss  dword ptr [rbx+20h], xmm1
          vextractps dword ptr [rbx+24h], xmm1, 1
          vextractps dword ptr [rbx+28h], xmm1, 2
          vmovss  dword ptr [rbx+2Ch], xmm2
          vextractps dword ptr [rbx+30h], xmm2, 1
          vextractps dword ptr [rbx+34h], xmm2, 2
        }
      }
      LODWORD(v16) = v16 + 1;
      _RBX += 264i64;
    }
    while ( (unsigned int)v16 < endPhysicsBoneIndex );
    __asm
    {
      vmovaps xmm11, [rsp+158h+var_98]
      vmovaps xmm10, [rsp+158h+var_88]
      vmovaps xmm9, [rsp+158h+var_78]
    }
  }
  _R11 = &v97;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-20h]
    vmovaps xmm7, xmmword ptr [r11-30h]
    vmovaps xmm8, xmmword ptr [r11-40h]
    vmovaps xmm12, xmmword ptr [r11-80h]
    vmovaps xmm13, xmmword ptr [r11-90h]
  }
}


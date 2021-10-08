/*
==============
PB_DebugCapsule
==============
*/

void __fastcall PB_DebugCapsule(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, bool depthTest, int duration)
{
  ?PB_DebugCapsule@@YAXAEBTvec3_t@@0MAEBTvec4_t@@_NH@Z(start, end, radius, color, depthTest, duration);
}

/*
==============
PB_DebugLine
==============
*/

void __fastcall PB_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, bool depthTest, int duration)
{
  ?PB_DebugLine@@YAXAEBTvec3_t@@0AEBTvec4_t@@_NH@Z(start, end, color, depthTest, duration);
}

/*
==============
XAnimDebugDrawCollidableBoneCollisionShapes
==============
*/

void __fastcall XAnimDebugDrawCollidableBoneCollisionShapes(const DObj *dobj, const cpose_t *pose)
{
  ?XAnimDebugDrawCollidableBoneCollisionShapes@@YAXPEBUDObj@@PEBUcpose_t@@@Z(dobj, pose);
}

/*
==============
PB_DebugEllipsoid
==============
*/

void __fastcall PB_DebugEllipsoid(const vec3_t *center, const tmat33_t<vec3_t> *rotation, const vec3_t *size, const vec4_t *color, bool depthTest, int duration)
{
  ?PB_DebugEllipsoid@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@0AEBTvec4_t@@_NH@Z(center, rotation, size, color, depthTest, duration);
}

/*
==============
PB_DebugBoxOriented
==============
*/

void __fastcall PB_DebugBoxOriented(const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color, int depthTest, int duration)
{
  ?PB_DebugBoxOriented@@YAXAEBTvec3_t@@PEBUBounds@@AEBT?$tmat33_t@Tvec3_t@@@@AEBTvec4_t@@HH@Z(origin, bounds, rotation, color, depthTest, duration);
}

/*
==============
PB_DebugSphere
==============
*/

void __fastcall PB_DebugSphere(const vec3_t *center, float radius, const vec4_t *color, bool depthTest, int duration)
{
  ?PB_DebugSphere@@YAXAEBTvec3_t@@MAEBTvec4_t@@_NH@Z(center, radius, color, depthTest, duration);
}

/*
==============
XAnimDebugDrawDynamicBones
==============
*/

void __fastcall XAnimDebugDrawDynamicBones(const DObj *dobj, const cpose_t *pose)
{
  ?XAnimDebugDrawDynamicBones@@YAXPEBUDObj@@PEBUcpose_t@@@Z(dobj, pose);
}

/*
==============
XAnimDebugDrawDynamicBoneAudioEvents
==============
*/

void __fastcall XAnimDebugDrawDynamicBoneAudioEvents(DObj *dobj, const cpose_t *pose)
{
  ?XAnimDebugDrawDynamicBoneAudioEvents@@YAXPEAUDObj@@PEBUcpose_t@@@Z(dobj, pose);
}

/*
==============
PB_DebugCylinder
==============
*/

void __fastcall PB_DebugCylinder(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, bool depthTest, int duration)
{
  ?PB_DebugCylinder@@YAXAEBTvec3_t@@0MAEBTvec4_t@@_NH@Z(start, end, radius, color, depthTest, duration);
}

/*
==============
DrawBoneAxis
==============
*/

void __fastcall DrawBoneAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, double length, const int depthTest, int duration)
{
  vec3_t end; 

  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmulss  xmm0, xmm2, dword ptr [rcx]
    vaddss  xmm1, xmm0, dword ptr [rdx]
    vmulss  xmm0, xmm2, dword ptr [rcx+4]
    vmovss  dword ptr [rsp+78h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdx+4]
    vmulss  xmm0, xmm2, dword ptr [rcx+8]
    vmovss  dword ptr [rsp+78h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rdx+8]
    vmovss  dword ptr [rsp+78h+end+8], xmm1
    vmovaps xmm6, xmm2
  }
  CG_DebugLine(pos, &end, &colorRed, depthTest, duration);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi+0Ch]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmulss  xmm0, xmm6, dword ptr [rdi+10h]
    vmovss  dword ptr [rsp+78h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vmulss  xmm0, xmm6, dword ptr [rdi+14h]
    vmovss  dword ptr [rsp+78h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+78h+end+8], xmm1
  }
  CG_DebugLine(pos, &end, &colorGreen, depthTest, duration);
  __asm
  {
    vmulss  xmm0, xmm6, dword ptr [rdi+18h]
    vaddss  xmm1, xmm0, dword ptr [rbp+0]
    vmulss  xmm0, xmm6, dword ptr [rdi+1Ch]
    vmovss  dword ptr [rsp+78h+end], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+4]
    vmulss  xmm0, xmm6, dword ptr [rdi+20h]
    vmovss  dword ptr [rsp+78h+end+4], xmm1
    vaddss  xmm1, xmm0, dword ptr [rbp+8]
    vmovss  dword ptr [rsp+78h+end+8], xmm1
  }
  CG_DebugLine(pos, &end, &colorBlue, depthTest, duration);
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
}

/*
==============
DrawContactPointMarker
==============
*/

void __fastcall DrawContactPointMarker(const vec3_t *origin, double size, const vec4_t *colour, int duration)
{
  vec3_t end; 
  vec3_t start; 

  __asm
  {
    vmovaps [rsp+80h+var_10], xmm6
    vmovaps [rsp+80h+var_20], xmm7
    vmovss  xmm2, dword ptr [rcx+4]
    vxorps  xmm6, xmm1, cs:__xmm@80000000800000008000000080000000
    vaddss  xmm0, xmm6, dword ptr [rcx]
    vmovaps xmm7, xmm1
    vmovss  xmm1, dword ptr [rcx+8]
    vmovss  dword ptr [rbp+start], xmm0
    vaddss  xmm0, xmm7, dword ptr [rcx]
  }
  _RBX = origin;
  __asm
  {
    vmovss  dword ptr [rbp+end], xmm0
    vmovss  dword ptr [rbp+start+4], xmm2
    vmovss  dword ptr [rbp+start+8], xmm1
    vmovss  dword ptr [rbp+end+4], xmm2
    vmovss  dword ptr [rbp+end+8], xmm1
  }
  CG_DebugLine(&start, &end, colour, 0, duration);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+start+4], xmm0
    vaddss  xmm0, xmm7, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+end+4], xmm0
    vmovss  dword ptr [rbp+start], xmm3
    vmovss  dword ptr [rbp+start+8], xmm1
    vmovss  dword ptr [rbp+end], xmm3
    vmovss  dword ptr [rbp+end+8], xmm1
  }
  CG_DebugLine(&start, &end, colour, 0, duration);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rbx+8]
    vmovss  xmm3, dword ptr [rbx]
    vmovss  xmm2, dword ptr [rbx+4]
    vmovss  dword ptr [rbp+start+8], xmm0
    vaddss  xmm0, xmm7, dword ptr [rbx+8]
    vmovss  dword ptr [rbp+end+8], xmm0
    vmovss  dword ptr [rbp+start], xmm3
    vmovss  dword ptr [rbp+start+4], xmm2
    vmovss  dword ptr [rbp+end], xmm3
    vmovss  dword ptr [rbp+end+4], xmm2
  }
  CG_DebugLine(&start, &end, colour, 0, duration);
  __asm
  {
    vmovaps xmm6, [rsp+80h+var_10]
    vmovaps xmm7, [rsp+80h+var_20]
  }
}

/*
==============
PB_DebugBoxOriented
==============
*/

void __fastcall PB_DebugBoxOriented(const vec3_t *origin, const Bounds *bounds, const tmat33_t<vec3_t> *rotation, const vec4_t *color, int depthTest, int duration)
{
  CG_DebugBoxOriented(origin, bounds, rotation, color, depthTest, duration);
}

/*
==============
PB_DebugCapsule
==============
*/
void PB_DebugCapsule(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, bool depthTest, int duration)
{
  CG_DebugCapsule(start, end, radius, color, depthTest, duration);
}

/*
==============
PB_DebugCylinder
==============
*/
void PB_DebugCylinder(const vec3_t *start, const vec3_t *end, float radius, const vec4_t *color, bool depthTest, int duration)
{
  CG_DebugCylinder(start, end, radius, color, depthTest, duration);
}

/*
==============
PB_DebugEllipsoid
==============
*/
void PB_DebugEllipsoid(const vec3_t *center, const tmat33_t<vec3_t> *rotation, const vec3_t *size, const vec4_t *color, bool depthTest, int duration)
{
  float v10; 
  float v11; 

  _R11 = size;
  __asm
  {
    vmovss  xmm0, dword ptr [r11+8]
    vmovss  xmm1, dword ptr [r11+4]
    vmovss  xmm3, dword ptr [r11]; radiusA
    vmovss  [rsp+58h+var_30], xmm0
    vmovss  [rsp+58h+var_38], xmm1
  }
  CG_DebugEllipsoid(center, rotation->m, &rotation->m[1], *(const float *)&_XMM3, v10, v11, color, depthTest, duration);
}

/*
==============
PB_DebugLine
==============
*/
void PB_DebugLine(const vec3_t *start, const vec3_t *end, const vec4_t *color, bool depthTest, int duration)
{
  CG_DebugLine(start, end, color, depthTest, duration);
}

/*
==============
PB_DebugSphere
==============
*/
void PB_DebugSphere(const vec3_t *center, float radius, const vec4_t *color, bool depthTest, int duration)
{
  CG_DebugSphere(center, radius, color, depthTest, duration);
}

/*
==============
XAnimDebugCalculateCustomPinConstraintPoints
==============
*/
void XAnimDebugCalculateCustomPinConstraintPoints(const DObj *dobj, const cpose_t *pose, const DObjProceduralBones *procBones, vec3_t *outPinConstraintPoints)
{
  const DObjProceduralBones *v4; 
  DObjAnimMat *LocalBoneMatrix; 
  unsigned __int8 numModels; 
  __int64 v9; 
  __int64 v10; 
  __int64 modelInfo; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned __int16 v16; 
  int v17; 
  char *Value; 
  int *v19; 
  _QWORD *v20; 
  char *v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  ThreadContext CurrentThreadContext; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  int boneIndices; 
  unsigned int v46; 
  __int64 v47; 
  const DObjProceduralBones *v48; 
  cpose_t *posea; 
  vec3_t *v50; 
  __int64 v51; 
  vec3_t inoutTrans1; 
  vec4_t inoutQuat1; 
  vec3_t out; 
  vec3_t outInvTrans; 
  vec4_t outInvQuat; 

  posea = (cpose_t *)pose;
  v48 = procBones;
  v4 = procBones;
  v50 = outPinConstraintPoints;
  _RDI = outPinConstraintPoints;
  LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(pose, dobj, 0);
  QuatTrans_Inverse(&LocalBoneMatrix->quat, &LocalBoneMatrix->trans, &outInvQuat, &outInvTrans);
  numModels = v4->numModels;
  if ( numModels )
  {
    v9 = numModels;
    v10 = 0i64;
    v47 = 0i64;
    v44 = numModels;
    do
    {
      modelInfo = (__int64)v4->modelInfo;
      v51 = modelInfo;
      v12 = *(unsigned __int8 *)(v10 + modelInfo + 24);
      v46 = v12;
      if ( v12 )
      {
        if ( !*(_QWORD *)(v10 + modelInfo + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 385, ASSERT_TYPE_ASSERT, "(modelInfo->dynamicBonesAsset)", (const char *)&queryFormat, "modelInfo->dynamicBonesAsset") )
          __debugbreak();
        v13 = 0;
        v14 = *(_QWORD *)(*(_QWORD *)(v10 + modelInfo + 8) + 64i64) + 8i64;
        do
        {
          v15 = v13 + *(unsigned __int8 *)(v10 + modelInfo + 25);
          if ( *(int *)(v14 - 4) < 0 )
          {
            LODWORD(v43) = *(_DWORD *)(v14 - 4);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 394, ASSERT_TYPE_ASSERT, "( pin->dynamicBoneIndexB ) >= ( 0 )", "%s >= %s\n\t%i, %i", "pin->dynamicBoneIndexB", "0", v43, 0i64) )
              __debugbreak();
          }
          if ( *(int *)(v14 - 8) < 0 )
          {
            v16 = v48->pinConstraintBoneIndices[*(_DWORD *)v14 + *(unsigned __int8 *)(v10 + modelInfo + 23)];
            if ( (unsigned __int16)(v16 - 254) <= 1u )
            {
              v40 = v15;
              *(_QWORD *)_RDI[v40].v = 0i64;
              _RDI[v40].v[2] = 0.0;
            }
            else
            {
              v17 = v16;
              if ( !DObjIsValidBoneIndex(dobj, v16) )
              {
                LODWORD(v41) = v17;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 409, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( dobj, boneIndex ) ) )", "( boneIndex ) = %i", v41) )
                  __debugbreak();
              }
              if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 86, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
                __debugbreak();
              Value = (char *)Sys_GetValue(0);
              v19 = (int *)(Value + 18936);
              if ( (unsigned int)(*((_DWORD *)Value + 4734) + 1) >= 3 )
              {
                LODWORD(v42) = 3;
                LODWORD(v41) = *((_DWORD *)Value + 4734) + 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v41, v42) )
                  __debugbreak();
              }
              if ( (unsigned int)++*v19 >= 3 )
              {
                LODWORD(v42) = 3;
                LODWORD(v41) = *v19;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v41, v42) )
                  __debugbreak();
              }
              v20 = Value + 2088;
              v21 = Value + 40;
              if ( *v20 < (unsigned __int64)v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
                __debugbreak();
              *v20 += 8i64;
              if ( *v20 >= (unsigned __int64)v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
                __debugbreak();
              *(_QWORD *)*v20 = v19;
              if ( *v20 <= (unsigned __int64)v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
                __debugbreak();
              v22 = *v19;
              v23 = __rdtsc();
              v19[v22 + 2] = v23;
              if ( Sys_HasValidCurrentThreadContext() )
                CurrentThreadContext = Sys_GetCurrentThreadContext();
              else
                CurrentThreadContext = THREAD_CONTEXT_COUNT;
              CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 421, NULL, 0);
              boneIndices = v17;
              CG_DObjCalcBones(posea, dobj, 1, &boneIndices);
              Profile_EndInternal(NULL);
              _RAX = DObjGetRotTransArray(dobj);
              if ( _RAX )
                _RAX = DObjGetSkelBoneMatrix(dobj, v17);
              __asm
              {
                vmovss  xmm0, dword ptr [rax]
                vmovss  dword ptr [rsp+138h+inoutQuat1], xmm0
                vmovss  xmm1, dword ptr [rax+4]
                vmovss  dword ptr [rsp+138h+inoutQuat1+4], xmm1
                vmovss  xmm0, dword ptr [rax+8]
                vmovss  dword ptr [rsp+138h+inoutQuat1+8], xmm0
                vmovss  xmm1, dword ptr [rax+0Ch]
                vmovss  dword ptr [rsp+138h+inoutQuat1+0Ch], xmm1
                vmovss  xmm0, dword ptr [rax+10h]
                vmovss  dword ptr [rsp+138h+inoutTrans1], xmm0
                vmovss  xmm1, dword ptr [rax+14h]
                vmovss  dword ptr [rsp+138h+inoutTrans1+4], xmm1
                vmovss  xmm0, dword ptr [rax+18h]
                vmovss  dword ptr [rsp+138h+inoutTrans1+8], xmm0
              }
              QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, &outInvQuat, &outInvTrans);
              QuatTransform(&inoutQuat1, (const vec3_t *)(v14 + 4), &out);
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+138h+out]
                vaddss  xmm1, xmm0, dword ptr [rsp+138h+inoutTrans1]
              }
              _RDI = v50;
              _RCX = 3 * v15;
              v10 = v47;
              modelInfo = v51;
              v12 = v46;
              __asm
              {
                vmovss  dword ptr [rdi+rcx*4], xmm1
                vmovss  xmm2, dword ptr [rsp+138h+out+4]
                vaddss  xmm0, xmm2, dword ptr [rsp+138h+inoutTrans1+4]
                vmovss  dword ptr [rdi+rcx*4+4], xmm0
                vmovss  xmm1, dword ptr [rsp+138h+out+8]
                vaddss  xmm2, xmm1, dword ptr [rsp+138h+inoutTrans1+8]
                vmovss  dword ptr [rdi+rcx*4+8], xmm2
              }
            }
          }
          ++v13;
          v14 += 44i64;
        }
        while ( v13 < v12 );
        v9 = v44;
      }
      v4 = v48;
      v10 += 32i64;
      --v9;
      v47 = v10;
      v44 = v9;
    }
    while ( v9 );
  }
}

/*
==============
XAnimDebugDrawCollidableBoneCollisionShapes
==============
*/
void XAnimDebugDrawCollidableBoneCollisionShapes(const DObj *dobj, const cpose_t *pose)
{
  const DObj *v4; 
  int v5; 
  XAnimDynamicBones *dynamicBones; 
  __int64 i; 
  XAnimCollidableBone *collidableBones; 
  __int64 numCollisionShapes; 
  int v12; 
  __int64 v13; 
  cpose_t *v14; 
  __int64 v16; 
  vec3_t *p_out; 
  char v33; 
  char v34; 
  const vec4_t *v37; 
  __int64 duration; 
  int v41; 
  unsigned __int16 inoutIndex; 
  int NumModels; 
  cpose_t *posea; 
  const DObj *v45; 
  vec3_t out; 
  vec3_t end; 
  Bounds bounds; 
  tmat43_t<vec3_t> outTagMat; 
  vec3_t center; 

  posea = (cpose_t *)pose;
  v4 = dobj;
  v45 = dobj;
  v5 = 0;
  NumModels = DObjGetNumModels(dobj);
  v41 = 0;
  if ( NumModels > 0 )
  {
    __asm
    {
      vmovaps [rsp+120h+var_40], xmm6
      vmovss  xmm6, cs:__real@3a83126f
      vmovaps [rsp+120h+var_50], xmm7
      vmovss  xmm7, cs:__real@3e800000
    }
    do
    {
      dynamicBones = DObjGetModel(v4, v5)->dynamicBones;
      if ( dynamicBones )
      {
        for ( i = 0i64; (unsigned int)i < dynamicBones->numCollidableBones; i = (unsigned int)(i + 1) )
        {
          collidableBones = dynamicBones->collidableBones;
          inoutIndex = 254;
          if ( DObjGetBoneIndexFromStartModelClient(v4, collidableBones[i].boneName, v5, &inoutIndex) )
          {
            numCollisionShapes = (int)collidableBones[i].numCollisionShapes;
            v12 = inoutIndex;
            v13 = (__int64)&dynamicBones->collisionShapes[collidableBones[i].firstCollisionShapeIndex];
            if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 235, ASSERT_TYPE_ASSERT, "(shapes != 0)", (const char *)&queryFormat, "shapes != NULL") )
              __debugbreak();
            v14 = posea;
            if ( !posea && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 236, ASSERT_TYPE_ASSERT, "(pose != 0)", (const char *)&queryFormat, "pose != NULL") )
              __debugbreak();
            if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 237, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
              __debugbreak();
            if ( (_DWORD)numCollisionShapes )
            {
              if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 242, ASSERT_TYPE_ASSERT, "(shapes != 0)", (const char *)&queryFormat, "shapes != NULL") )
                __debugbreak();
              if ( v12 != 254 && v12 != 255 )
              {
                if ( CG_DObjGetWorldBoneMatrix(v14, v4, v12, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
                {
                  __asm { vmovaps xmm2, xmm7; length }
                  DrawBoneAxis((const tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3], *(double *)&_XMM2, 0, 0);
                  v16 = numCollisionShapes;
                  if ( (int)numCollisionShapes > 0 )
                  {
                    _RBX = v13 + 12;
                    while ( *(_BYTE *)(_RBX - 12) )
                    {
                      if ( *(_BYTE *)(_RBX - 12) != 1 )
                      {
                        if ( *(_BYTE *)(_RBX - 12) == 2 )
                        {
                          __asm
                          {
                            vmovups xmm0, xmmword ptr [rbx-8]
                            vmovss  xmm1, dword ptr [rbx+0Ch]
                            vmovups xmmword ptr [rsp+120h+bounds.midPoint], xmm0
                            vmovss  xmm0, dword ptr [rbx+8]
                            vmovss  dword ptr [rbp+20h+bounds.halfSize+4], xmm0
                            vmovss  dword ptr [rbp+20h+bounds.halfSize+8], xmm1
                          }
                          CG_DebugBoxOriented(&outTagMat.m[3], &bounds, (const tmat33_t<vec3_t> *)&outTagMat, &colorYellow, 0, 0);
                        }
                        else
                        {
                          LODWORD(duration) = *(unsigned __int8 *)(_RBX - 12);
                          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 297, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "bad collision shape type %d", duration) )
                            __debugbreak();
                        }
                        goto LABEL_35;
                      }
                      MatrixTransformVector43((const vec3_t *)(_RBX - 8), &outTagMat, &out);
                      MatrixTransformVector43((const vec3_t *)(_RBX + 4), &outTagMat, &end);
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rsp+120h+end]
                        vsubss  xmm3, xmm0, dword ptr [rsp+120h+out]
                        vmovss  xmm1, dword ptr [rsp+120h+end+4]
                        vsubss  xmm2, xmm1, dword ptr [rsp+120h+out+4]
                        vmovss  xmm0, dword ptr [rsp+120h+end+8]
                        vsubss  xmm4, xmm0, dword ptr [rsp+120h+out+8]
                        vmulss  xmm2, xmm2, xmm2
                        vmulss  xmm1, xmm3, xmm3
                        vmulss  xmm0, xmm4, xmm4
                        vaddss  xmm3, xmm2, xmm1
                        vaddss  xmm2, xmm3, xmm0
                        vcomiss xmm2, xmm6
                      }
                      p_out = &out;
                      if ( v33 | v34 )
                      {
                        __asm { vmovss  xmm1, dword ptr [rbx+10h] }
                        v37 = &colorOrange;
LABEL_34:
                        CG_DebugSphere(p_out, *(float *)&_XMM1, v37, 0, 0);
                        goto LABEL_35;
                      }
                      __asm { vmovss  xmm2, dword ptr [rbx+10h]; radius }
                      CG_DebugCapsule(&out, &end, *(float *)&_XMM2, &colorOrange, 0, 0);
LABEL_35:
                      _RBX += 32i64;
                      if ( !--v16 )
                      {
                        v4 = v45;
                        goto LABEL_37;
                      }
                    }
                    MatrixTransformVector43((const vec3_t *)(_RBX - 8), &outTagMat, &center);
                    __asm { vmovss  xmm1, dword ptr [rbx+4]; radius }
                    v37 = &colorLtBlue;
                    p_out = &center;
                    goto LABEL_34;
                  }
                }
              }
            }
LABEL_37:
            v5 = v41;
          }
        }
      }
      v41 = ++v5;
    }
    while ( v5 < NumModels );
    __asm
    {
      vmovaps xmm7, [rsp+120h+var_50]
      vmovaps xmm6, [rsp+120h+var_40]
    }
  }
}

/*
==============
XAnimDebugDrawCustomPinConstraints
==============
*/
void XAnimDebugDrawCustomPinConstraints(const DObj *dobj, const cpose_t *pose, const DObjProceduralBones *procBones)
{
  DObjAnimMat *v14; 
  unsigned __int8 numModels; 
  __int64 v16; 
  __int64 v19; 
  DObjProceduralBonesModelInfo *modelInfo; 
  unsigned int numPinConstraints; 
  unsigned int v23; 
  __int64 p_dynamicBoneIndexB; 
  int firstPhysicsBoneIndex; 
  XAnimPhysicsBone *physicsBones; 
  __int64 v27; 
  int v28; 
  unsigned __int64 v29; 
  const vec3_t *v30; 
  const vec3_t *v31; 
  char v32; 
  const vec3_t *p_trans; 
  const vec3_t *v34; 
  __int64 v71; 
  DObjAnimMat *quat; 
  __int64 v73; 
  unsigned int v74; 
  DObjProceduralBonesModelInfo *v75; 
  vec3_t v76; 
  vec3_t end; 
  vec3_t v78; 
  vec3_t outTransformedPoint; 
  vec3_t point; 
  vec3_t start; 
  vec3_t v82; 
  vec3_t v83; 
  vec3_t v84; 
  vec3_t outPinConstraintPoints[50]; 

  if ( procBones->numCustomPinConstraints )
  {
    quat = CG_DObjGetLocalBoneMatrix(pose, dobj, 0);
    v14 = quat;
    XAnimDebugCalculateCustomPinConstraintPoints(dobj, pose, procBones, outPinConstraintPoints);
    numModels = procBones->numModels;
    if ( numModels )
    {
      __asm
      {
        vmovaps [rsp+420h+var_40], xmm6
        vmovaps [rsp+420h+var_50], xmm7
      }
      v16 = 0i64;
      __asm
      {
        vmovaps [rsp+420h+var_60], xmm8
        vmovaps [rsp+420h+var_70], xmm9
        vmovaps [rsp+420h+var_80], xmm10
        vmovaps [rsp+420h+var_90], xmm11
        vmovss  xmm11, cs:__real@3f800000
        vmovaps [rsp+420h+var_A0], xmm12
        vmovss  xmm12, cs:__real@3a83126f
      }
      v19 = numModels;
      __asm
      {
        vmovaps [rsp+420h+var_B0], xmm13
        vmovss  xmm13, cs:__real@80000000
      }
      v73 = numModels;
      do
      {
        modelInfo = procBones->modelInfo;
        v75 = modelInfo;
        numPinConstraints = modelInfo[v16].numPinConstraints;
        v74 = numPinConstraints;
        if ( modelInfo[v16].numPinConstraints )
        {
          if ( !modelInfo[v16].dynamicBonesAsset )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 464, ASSERT_TYPE_ASSERT, "(modelInfo->dynamicBonesAsset)", (const char *)&queryFormat, "modelInfo->dynamicBonesAsset") )
              __debugbreak();
            v19 = v73;
          }
          v23 = 0;
          if ( numPinConstraints )
          {
            p_dynamicBoneIndexB = (__int64)&modelInfo[v16].dynamicBonesAsset->customPinConstraints->dynamicBoneIndexB;
            do
            {
              if ( *(int *)p_dynamicBoneIndexB < 0 )
              {
                LODWORD(v71) = *(_DWORD *)p_dynamicBoneIndexB;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 474, ASSERT_TYPE_ASSERT, "( pin->dynamicBoneIndexB ) >= ( 0 )", "%s >= %s\n\t%i, %i", "pin->dynamicBoneIndexB", "0", v71, 0i64) )
                  __debugbreak();
              }
              firstPhysicsBoneIndex = modelInfo[v16].firstPhysicsBoneIndex;
              physicsBones = procBones->physicsBones;
              v27 = firstPhysicsBoneIndex + *(_DWORD *)p_dynamicBoneIndexB;
              if ( physicsBones[v27].boneIndex != 255 )
              {
                v28 = *(_DWORD *)(p_dynamicBoneIndexB - 4);
                if ( v28 < 0 )
                {
                  p_trans = &v14->trans;
                  QuatTrans_TransformPoint(&quat->quat, p_trans, &outPinConstraintPoints[v23 + modelInfo[v16].firstPinConstraintIndex], &end);
                  QuatTrans_TransformPoint(&procBones->physicsBones[v27].state.rotationQuat, &procBones->physicsBones[v27].state.position, (const vec3_t *)(p_dynamicBoneIndexB + 20), &v83);
                  QuatTrans_TransformPoint(&quat->quat, p_trans, &v83, &v76);
                  v34 = p_trans;
                  v14 = quat;
                  QuatTrans_TransformPoint(&quat->quat, v34, &procBones->physicsBones[v27].state.position, &v84);
                  CG_DebugLine(&v84, &v76, &colorLtBlue, 0, 0);
                }
                else
                {
                  v29 = firstPhysicsBoneIndex + v28;
                  if ( physicsBones[v29].boneIndex == 255 )
                  {
                    v32 = 0;
                  }
                  else
                  {
                    QuatTrans_TransformPoint(&physicsBones[v29].state.rotationQuat, &physicsBones[v29].state.position, (const vec3_t *)(p_dynamicBoneIndexB + 8), &outTransformedPoint);
                    v30 = &v14->trans;
                    QuatTrans_TransformPoint(&quat->quat, v30, &outTransformedPoint, &end);
                    QuatTrans_TransformPoint(&procBones->physicsBones[v27].state.rotationQuat, &procBones->physicsBones[v27].state.position, (const vec3_t *)(p_dynamicBoneIndexB + 20), &point);
                    QuatTrans_TransformPoint(&quat->quat, v30, &point, &v76);
                    QuatTrans_TransformPoint(&quat->quat, v30, &procBones->physicsBones[v29].state.position, &start);
                    v31 = v30;
                    v14 = quat;
                    QuatTrans_TransformPoint(&quat->quat, v31, &procBones->physicsBones[v27].state.position, &v82);
                    CG_DebugLine(&start, &end, &colorLtBlue, 0, 0);
                    CG_DebugLine(&v82, &v76, &colorLtBlue, 0, 0);
                  }
                  modelInfo = v75;
                }
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+420h+var_3B0]
                  vmovss  xmm1, dword ptr [rsp+420h+var_3B0+4]
                  vmovss  xmm8, dword ptr [rbp+320h+end]
                  vmovss  xmm9, dword ptr [rbp+320h+end+4]
                  vmovss  xmm10, dword ptr [rbp+320h+end+8]
                  vsubss  xmm5, xmm0, xmm8
                  vmovss  xmm0, dword ptr [rsp+420h+var_3B0+8]
                  vsubss  xmm6, xmm1, xmm9
                  vmulss  xmm2, xmm6, xmm6
                  vsubss  xmm7, xmm0, xmm10
                  vmulss  xmm1, xmm5, xmm5
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm7, xmm7
                  vaddss  xmm4, xmm3, xmm0
                  vcomiss xmm4, xmm12
                  vsqrtss xmm2, xmm4, xmm4
                }
                if ( v32 )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vxorps  xmm4, xmm4, xmm4
                    vxorps  xmm5, xmm5, xmm5
                  }
                }
                else
                {
                  __asm
                  {
                    vcmpless xmm0, xmm2, xmm13
                    vblendvps xmm0, xmm2, xmm11, xmm0
                    vdivss  xmm1, xmm11, xmm0
                    vmulss  xmm0, xmm1, xmm5
                    vmulss  xmm5, xmm1, xmm7
                    vmulss  xmm4, xmm1, xmm6
                  }
                }
                __asm
                {
                  vsubss  xmm3, xmm2, dword ptr [rdi+20h]
                  vmulss  xmm0, xmm0, xmm3
                  vaddss  xmm1, xmm0, xmm8
                  vmulss  xmm2, xmm4, xmm3
                  vaddss  xmm0, xmm2, xmm9
                  vmovss  dword ptr [rbp+320h+var_390], xmm1
                  vmulss  xmm1, xmm5, xmm3
                  vaddss  xmm2, xmm1, xmm10
                  vmovss  dword ptr [rbp+320h+var_390+8], xmm2
                  vmovss  dword ptr [rbp+320h+var_390+4], xmm0
                }
                CG_DebugLine(&end, &v76, &colorLtBlue, 0, 0);
                CG_DebugLine(&end, &v78, &colorRed, 0, 0);
              }
              ++v23;
              p_dynamicBoneIndexB += 44i64;
            }
            while ( v23 < v74 );
            v19 = v73;
          }
        }
        ++v16;
        v73 = --v19;
      }
      while ( v19 );
      __asm
      {
        vmovaps xmm13, [rsp+420h+var_B0]
        vmovaps xmm12, [rsp+420h+var_A0]
        vmovaps xmm11, [rsp+420h+var_90]
        vmovaps xmm10, [rsp+420h+var_80]
        vmovaps xmm9, [rsp+420h+var_70]
        vmovaps xmm8, [rsp+420h+var_60]
        vmovaps xmm7, [rsp+420h+var_50]
        vmovaps xmm6, [rsp+420h+var_40]
      }
    }
  }
}

/*
==============
XAnimDebugDrawDynamicBoneAudioEvents
==============
*/
void XAnimDebugDrawDynamicBoneAudioEvents(DObj *dobj, const cpose_t *pose)
{
  __int64 AudioEventList; 
  vec3_t *p_localPosition; 
  vec3_t out; 
  tmat43_t<vec3_t> outTagMat; 
  XAnimBonePhysicsAudioEvent outAudioEvents; 

  AudioEventList = XAnimBonePhysicsGetAudioEventList(dobj, &outAudioEvents, 3u);
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 338, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 339, ASSERT_TYPE_ASSERT, "(pose != 0)", (const char *)&queryFormat, "pose != NULL") )
    __debugbreak();
  CG_DObjGetWorldBoneMatrix(pose, dobj, 0, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]);
  if ( (_DWORD)AudioEventList )
  {
    __asm { vmovaps [rsp+0F8h+var_28], xmm6 }
    p_localPosition = &outAudioEvents.localPosition;
    __asm { vmovss  xmm6, cs:__real@3dcccccd }
    do
    {
      MatrixTransformVector43(p_localPosition, &outTagMat, &out);
      __asm { vmovaps xmm1, xmm6; size }
      DrawContactPointMarker(&out, *(double *)&_XMM1, &colorBlueHeat, 30);
      p_localPosition += 2;
      --AudioEventList;
    }
    while ( AudioEventList );
    __asm { vmovaps xmm6, [rsp+0F8h+var_28] }
  }
}

/*
==============
XAnimDebugDrawDynamicBones
==============
*/
void XAnimDebugDrawDynamicBones(const DObj *dobj, const cpose_t *pose)
{
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  const dvar_t *v24; 
  int v25; 
  int Collisions; 
  XAnimPhysicsBone *physicsBones; 
  __int64 v28; 
  XAnimCollisionContact *v29; 
  const dvar_t *v40; 
  int v43; 
  float v44; 
  float v45; 
  int v58; 
  float v59; 
  float v60; 
  unsigned int v70; 
  __int64 v74; 
  unsigned int v75; 
  unsigned int v76; 
  unsigned int v77; 
  const dvar_t *v87; 
  const dvar_t *v89; 
  __int64 v95; 
  __int64 v96; 
  unsigned int v97; 
  __int64 v98[2]; 
  DObjProceduralBones *v99; 
  __int64 v100; 
  vec3_t end; 
  vec3_t start; 
  vec3_t outTransformedPoint; 
  vec3_t origin; 
  vec4_t color; 
  vec4_t out; 
  tmat43_t<vec3_t> axes; 
  tmat43_t<vec3_t> outTagMat; 
  XAnimCollisionContact outContacts[55]; 
  char v110; 
  void *retaddr; 

  _RAX = &retaddr;
  v100 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  XAnimDebugDrawCollidableBoneCollisionShapes(dobj, pose);
  if ( dobj->proceduralBonesHandle.m_value )
  {
    _RBX = DObjLockProceduralBones(dobj);
    v99 = _RBX;
    DObjUnlockProceduralBones(dobj);
    if ( _RBX )
    {
      CG_DObjGetWorldBoneMatrix(pose, dobj, 0, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]);
      Axis43ToQuat(&outTagMat, &out);
      if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
      FunctionPointer_origin(&pose->origin.origin.origin, (vec3_t *)v98);
      if ( pose->isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, [rsp+0A60h+var_A08]
          vcvtdq2pd xmm0, xmm0
          vmovsd  xmm3, cs:__real@3f30000000000000
          vmulsd  xmm0, xmm0, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  [rsp+0A60h+var_A08], xmm1
          vmovd   xmm2, [rsp+0A60h+var_A04]
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  [rsp+0A60h+var_A04], xmm1
          vmovd   xmm2, dword ptr [rsp+0A60h+var_A00]
          vcvtdq2pd xmm2, xmm2
          vmulsd  xmm0, xmm2, xmm3
          vcvtsd2ss xmm1, xmm0, xmm0
          vmovss  dword ptr [rsp+0A60h+var_A00], xmm1
        }
      }
      v24 = DCONST_DVARBOOL_xanim_physicsDebugCollisions;
      if ( !DCONST_DVARBOOL_xanim_physicsDebugCollisions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsDebugCollisions") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      v25 = 0;
      if ( v24->current.enabled )
      {
        Collisions = XAnimPhysicsDebugFindCollisions(dobj, pose, _RBX, outContacts, 55);
        physicsBones = _RBX->physicsBones;
        v28 = Collisions;
        if ( Collisions > 0 )
        {
          v29 = outContacts;
          __asm { vmovss  xmm6, cs:__real@40000000 }
          do
          {
            QuatTrans_TransformPoint(&physicsBones[v29->bodyIndex].state.rotationQuat, &physicsBones[v29->bodyIndex].state.position, &outContacts[v25].pointA, &outTransformedPoint);
            QuatTrans_TransformPoint(&out, &outTagMat.m[3], &outTransformedPoint, (vec3_t *)&color);
            QuatTrans_TransformPoint(&out, &outTagMat.m[3], &outContacts[v25].pointB, &origin);
            QuatTransform(&out, &outContacts[v25].normal, &start);
            __asm { vmovss  xmm1, cs:dword_147F8F090; size }
            DrawContactPointMarker((const vec3_t *)&color, *(double *)&_XMM1, &colorOrange, dword_147F8F08C);
            __asm { vmovss  xmm1, cs:dword_147F8F090; size }
            DrawContactPointMarker(&origin, *(double *)&_XMM1, &colorCyan, dword_147F8F08C);
            __asm
            {
              vmulss  xmm3, xmm6, cs:dword_147F8F090
              vmulss  xmm2, xmm3, dword ptr [rbp+960h+start]
              vaddss  xmm0, xmm2, dword ptr [rbp+960h+color]
              vmovss  dword ptr [rsp+0A60h+end], xmm0
              vmulss  xmm2, xmm3, dword ptr [rbp+960h+start+4]
              vaddss  xmm0, xmm2, dword ptr [rbp+960h+color+4]
              vmovss  dword ptr [rsp+0A60h+end+4], xmm0
              vmulss  xmm2, xmm3, dword ptr [rbp+960h+start+8]
              vaddss  xmm0, xmm2, dword ptr [rbp+960h+color+8]
              vmovss  dword ptr [rbp+960h+end+8], xmm0
            }
            CG_DebugLine((const vec3_t *)&color, &end, &colorLtBlue, 0, dword_147F8F08C);
            ++v25;
            ++v29;
            --v28;
          }
          while ( v28 );
        }
        _RBX = v99;
      }
      if ( _RBX->physicsState.groundPlaneEnabled )
      {
        v40 = DCONST_DVARBOOL_xanim_physicsDebugDrawGroundPlane;
        if ( !DCONST_DVARBOOL_xanim_physicsDebugDrawGroundPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsDebugDrawGroundPlane") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v40);
        if ( v40->current.enabled )
        {
          __asm
          {
            vmovss  xmm9, dword ptr [rbx+12Ch]
            vmovups xmm0, xmmword ptr cs:?colorGreenFaded@@3Tvec4_t@@B; vec4_t const colorGreenFaded
            vmovups xmmword ptr [rbp+960h+color], xmm0
          }
          v43 = 0;
          __asm
          {
            vmovss  dword ptr [rbp+960h+origin+8], xmm9
            vmovss  dword ptr [rbp+960h+outTransformedPoint+8], xmm9
          }
          v44 = origin.v[2];
          v45 = outTransformedPoint.v[2];
          __asm
          {
            vmovss  xmm7, cs:__real@41480000
            vmovss  xmm8, cs:__real@3f400000
            vmovss  xmm6, cs:__real@41160000
          }
          do
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, edi
              vsubss  xmm1, xmm0, xmm7
              vmulss  xmm2, xmm1, xmm8
              vaddss  xmm4, xmm2, [rsp+0A60h+var_A04]
              vmovss  xmm3, [rsp+0A60h+var_A08]
              vsubss  xmm0, xmm3, xmm6
              vunpcklps xmm0, xmm0, xmm4
              vmovsd  qword ptr [rbp+960h+start], xmm0
            }
            start.v[2] = v44;
            __asm
            {
              vaddss  xmm0, xmm3, xmm6
              vunpcklps xmm0, xmm0, xmm4
              vmovsd  qword ptr [rsp+0A60h+end], xmm0
            }
            end.v[2] = v45;
            CG_DebugLine(&start, &end, &color, 1, 0);
            ++v43;
          }
          while ( v43 <= 25 );
          v58 = 0;
          __asm
          {
            vmovss  dword ptr [rbp+960h+origin+8], xmm9
            vmovss  dword ptr [rbp+960h+outTransformedPoint+8], xmm9
          }
          v59 = origin.v[2];
          v60 = outTransformedPoint.v[2];
          do
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, edi
              vsubss  xmm1, xmm0, xmm7
              vmulss  xmm2, xmm1, xmm8
              vaddss  xmm4, xmm2, [rsp+0A60h+var_A08]
              vmovss  xmm3, [rsp+0A60h+var_A04]
              vsubss  xmm0, xmm3, xmm6
              vunpcklps xmm0, xmm4, xmm0
              vmovsd  qword ptr [rbp+960h+start], xmm0
            }
            start.v[2] = v59;
            __asm
            {
              vaddss  xmm0, xmm3, xmm6
              vunpcklps xmm0, xmm4, xmm0
              vmovsd  qword ptr [rsp+0A60h+end], xmm0
            }
            end.v[2] = v60;
            CG_DebugLine(&start, &end, &color, 1, 0);
            ++v58;
          }
          while ( v58 <= 25 );
          _RBX = v99;
        }
      }
      v70 = 0;
      v97 = 0;
      if ( _RBX->numModels )
      {
        __asm
        {
          vmovss  xmm6, dword ptr cs:__xmm@80000000800000008000000080000000
          vmovss  xmm7, cs:__real@3dcccccd
          vmovss  xmm8, cs:__real@3f800000
        }
        do
        {
          v74 = (__int64)&_RBX->modelInfo[v70];
          v75 = *(unsigned __int8 *)(v74 + 21);
          if ( *(_BYTE *)(v74 + 21) && v75 != *(_DWORD *)(*(_QWORD *)(v74 + 8) + 8i64) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 605, ASSERT_TYPE_ASSERT, "(numModelPhysicsBones == 0 || numModelPhysicsBones == modelInfo->dynamicBonesAsset->numDynamicBones)", (const char *)&queryFormat, "numModelPhysicsBones == 0 || numModelPhysicsBones == modelInfo->dynamicBonesAsset->numDynamicBones") )
              __debugbreak();
            v70 = v97;
          }
          v76 = 0;
          if ( v75 )
          {
            do
            {
              v77 = v76 + *(unsigned __int8 *)(v74 + 20);
              if ( !v77 )
              {
                LODWORD(v96) = 1;
                LODWORD(v95) = 0;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 614, ASSERT_TYPE_ASSERT, "( physicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "physicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", v95, v96) )
                  __debugbreak();
              }
              _RDI = &_RBX->physicsBones[v77];
              if ( (unsigned __int16)(_RDI->boneIndex - 254) > 1u )
              {
                if ( (_RDI->flags & 4) == 0 )
                  XAnimDrawBoneCollisionShapes(dobj, pose, (const XAnimCollisionShape *)(*(_QWORD *)(*(_QWORD *)(v74 + 8) + 48i64) + 32i64 * _RDI->properties->firstCollisionShapeIndex), _RDI->properties->numCollisionShapes, _RDI->boneIndex, 1);
                if ( _RDI->parentPhysicsBoneIndex == 0xFF && CG_DObjGetWorldBoneMatrix(pose, dobj, _RDI->parentBoneIndex, (tmat33_t<vec3_t> *)&axes, &axes.m[3]) )
                {
                  MatrixTransformVector43(&_RDI->localBasePoseTrans, &axes, &origin);
                  __asm { vmovaps xmm1, xmm7; radius }
                  CG_DebugSphere(&origin, *(float *)&_XMM1, &colorGreen, 0, 0);
                }
                if ( _RDI->boneIndex != 255 && CG_DObjGetWorldBoneMatrix(pose, dobj, _RDI->boneIndex, (tmat33_t<vec3_t> *)&axes, &axes.m[3]) )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdi+0B8h]
                    vxorps  xmm1, xmm0, xmm6
                    vmovss  dword ptr [rsp+0A60h+end], xmm1
                    vmovss  xmm2, dword ptr [rdi+0BCh]
                    vxorps  xmm0, xmm2, xmm6
                    vmovss  dword ptr [rsp+0A60h+end+4], xmm0
                    vmovss  xmm1, dword ptr [rdi+0C0h]
                    vxorps  xmm2, xmm1, xmm6
                    vmovss  dword ptr [rbp+960h+end+8], xmm2
                  }
                  MatrixTransformVector43(&end, &axes, &outTransformedPoint);
                  __asm { vmovaps xmm1, xmm7; radius }
                  CG_DebugSphere(&outTransformedPoint, *(float *)&_XMM1, &colorLtBlue, 0, 0);
                  v87 = DCONST_DVARBOOL_xanim_physicsDebugCollisions;
                  if ( !DCONST_DVARBOOL_xanim_physicsDebugCollisions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsDebugCollisions") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v87);
                  if ( !v87->current.enabled && (_RDI->flags & 4) != 0 )
                  {
                    __asm { vmovaps xmm2, xmm8; length }
                    DrawBoneAxis((const tmat33_t<vec3_t> *)&axes, &axes.m[3], *(double *)&_XMM2, 0, 0);
                  }
                  _RBX = v99;
                }
              }
              ++v76;
            }
            while ( v76 < v75 );
            v70 = v97;
          }
          v97 = ++v70;
        }
        while ( v70 < _RBX->numModels );
      }
      v89 = DCONST_DVARBOOL_xanim_physicsDebugCustomPinConstraints;
      if ( !DCONST_DVARBOOL_xanim_physicsDebugCustomPinConstraints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsDebugCustomPinConstraints") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v89);
      if ( v89->current.enabled )
        XAnimDebugDrawCustomPinConstraints(dobj, pose, _RBX);
      memset(v98, 0, 0xCui64);
    }
  }
  _R11 = &v110;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}

/*
==============
XAnimDrawBoneCollisionShapes
==============
*/
void XAnimDrawBoneCollisionShapes(const DObj *dobj, const cpose_t *pose, const XAnimCollisionShape *shapes, int numShapes, int boneIndex, bool isDynamicBone)
{
  __int64 v8; 
  vec3_t *p_out; 
  char v29; 
  char v30; 
  const vec4_t *v32; 
  const vec4_t *v34; 
  __int64 duration; 
  vec3_t out; 
  vec3_t end; 
  Bounds bounds; 
  tmat43_t<vec3_t> outTagMat; 
  vec3_t center; 

  v8 = numShapes;
  if ( !shapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 235, ASSERT_TYPE_ASSERT, "(shapes != 0)", (const char *)&queryFormat, "shapes != NULL") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 236, ASSERT_TYPE_ASSERT, "(pose != 0)", (const char *)&queryFormat, "pose != NULL") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 237, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( (_DWORD)v8 )
  {
    if ( !shapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 242, ASSERT_TYPE_ASSERT, "(shapes != 0)", (const char *)&queryFormat, "shapes != NULL") )
      __debugbreak();
    if ( (unsigned int)(boneIndex - 254) > 1 )
    {
      if ( CG_DObjGetWorldBoneMatrix(pose, dobj, boneIndex, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
      {
        __asm { vmovss  xmm2, cs:__real@3e800000; length }
        DrawBoneAxis((const tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3], *(double *)&_XMM2, 0, 0);
        if ( v8 > 0 )
        {
          __asm
          {
            vmovaps [rsp+0F0h+var_40], xmm6
            vmovss  xmm6, cs:__real@3a83126f
          }
          _RBX = &shapes->u.sphere.center.v[2];
          while ( 1 )
          {
            if ( *((_BYTE *)_RBX - 12) )
            {
              if ( *((_BYTE *)_RBX - 12) != 1 )
              {
                if ( *((_BYTE *)_RBX - 12) == 2 )
                {
                  __asm
                  {
                    vmovups xmm0, xmmword ptr [rbx-8]
                    vmovss  xmm1, dword ptr [rbx+0Ch]
                    vmovups xmmword ptr [rbp+47h+bounds.midPoint], xmm0
                    vmovss  xmm0, dword ptr [rbx+8]
                    vmovss  dword ptr [rbp+47h+bounds.halfSize+4], xmm0
                    vmovss  dword ptr [rbp+47h+bounds.halfSize+8], xmm1
                  }
                  CG_DebugBoxOriented(&outTagMat.m[3], &bounds, (const tmat33_t<vec3_t> *)&outTagMat, &colorYellow, 0, 0);
                }
                else
                {
                  LODWORD(duration) = *((unsigned __int8 *)_RBX - 12);
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 297, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "bad collision shape type %d", duration) )
                    __debugbreak();
                }
                goto LABEL_33;
              }
              MatrixTransformVector43((const vec3_t *)(_RBX - 2), &outTagMat, &out);
              MatrixTransformVector43((const vec3_t *)(_RBX + 1), &outTagMat, &end);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+47h+end]
                vsubss  xmm3, xmm0, dword ptr [rbp+47h+out]
                vmovss  xmm1, dword ptr [rbp+47h+end+4]
                vsubss  xmm2, xmm1, dword ptr [rbp+47h+out+4]
                vmovss  xmm0, dword ptr [rbp+47h+end+8]
                vsubss  xmm4, xmm0, dword ptr [rbp+47h+out+8]
                vmulss  xmm2, xmm2, xmm2
                vmulss  xmm1, xmm3, xmm3
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm3, xmm2, xmm1
                vaddss  xmm2, xmm3, xmm0
                vcomiss xmm2, xmm6
              }
              p_out = &out;
              if ( !(v29 | v30) )
              {
                __asm { vmovss  xmm2, dword ptr [rbx+10h]; radius }
                v32 = &colorOrange;
                if ( isDynamicBone )
                  v32 = &colorMagenta;
                CG_DebugCapsule(&out, &end, *(float *)&_XMM2, v32, 0, 0);
                goto LABEL_33;
              }
              __asm { vmovss  xmm1, dword ptr [rbx+10h] }
              v34 = &colorOrange;
              if ( isDynamicBone )
                v34 = &colorMagenta;
            }
            else
            {
              MatrixTransformVector43((const vec3_t *)(_RBX - 2), &outTagMat, &center);
              __asm { vmovss  xmm1, dword ptr [rbx+4]; radius }
              v34 = &colorLtBlue;
              p_out = &center;
            }
            CG_DebugSphere(p_out, *(float *)&_XMM1, v34, 0, 0);
LABEL_33:
            _RBX += 8;
            if ( !--v8 )
            {
              __asm { vmovaps xmm6, [rsp+0F0h+var_40] }
              return;
            }
          }
        }
      }
    }
  }
}

/*
==============
XAnimPhysicsDebugFindCollisions
==============
*/
int XAnimPhysicsDebugFindCollisions(const DObj *dobj, const cpose_t *pose, const DObjProceduralBones *procBones, XAnimCollisionContact *outContacts, int maxContacts)
{
  __int64 numCollidableBones; 
  signed __int64 v10; 
  int *v11; 
  XAnimCollisionContact *outContactsa; 
  int boneIndices[32]; 
  DObjAnimMat outTransforms; 
  XAnimCollisionShape outShapes; 

  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 178, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 179, ASSERT_TYPE_ASSERT, "(pose != 0)", (const char *)&queryFormat, "pose != NULL") )
    __debugbreak();
  if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 180, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
    __debugbreak();
  if ( !outContacts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 181, ASSERT_TYPE_ASSERT, "(outContacts != 0)", (const char *)&queryFormat, "outContacts != NULL") )
    __debugbreak();
  if ( procBones->numCollidableBones > 0x20 )
  {
    LODWORD(outContactsa) = procBones->numCollidableBones;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 183, ASSERT_TYPE_ASSERT, "( procBones->numCollidableBones ) <= ( XANIM_MAX_DOBJ_COLLIDABLE_BONES )", "procBones->numCollidableBones not in [0, XANIM_MAX_DOBJ_COLLIDABLE_BONES]\n\t%u not in [0, %u]", outContactsa, 32) )
      __debugbreak();
  }
  numCollidableBones = procBones->numCollidableBones;
  if ( (_DWORD)numCollidableBones )
  {
    v10 = (char *)procBones->collidableBoneInfo - (char *)boneIndices;
    v11 = boneIndices;
    do
    {
      *v11 = *(unsigned __int16 *)((char *)v11 + v10);
      ++v11;
      --numCollidableBones;
    }
    while ( numCollidableBones );
    LODWORD(numCollidableBones) = procBones->numCollidableBones;
  }
  CG_DObjCalcBones(pose, dobj, numCollidableBones, boneIndices);
  XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj(dobj, procBones, &outTransforms, 0x20u);
  XAnimBonePhysics_PreTransformCollidableBoneShapes(procBones, &outTransforms, &outShapes, 0x20u);
  return XAnimBonePhysics_FindCollisions(procBones, 1u, procBones->numPhysicsBones, &outShapes, &outTransforms, outContacts, maxContacts);
}


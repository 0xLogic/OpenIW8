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
void DrawBoneAxis(const tmat33_t<vec3_t> *axes, const vec3_t *pos, float length, const int depthTest, int duration)
{
  float v5; 
  float v6; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t end; 

  v5 = length * axes->m[0].v[1];
  end.v[0] = (float)(length * axes->m[0].v[0]) + pos->v[0];
  v6 = length * axes->m[0].v[2];
  end.v[1] = v5 + pos->v[1];
  end.v[2] = v6 + pos->v[2];
  CG_DebugLine(pos, &end, &colorRed, depthTest, duration);
  v10 = length * axes->m[1].v[1];
  end.v[0] = (float)(length * axes->m[1].v[0]) + pos->v[0];
  v11 = length * axes->m[1].v[2];
  end.v[1] = v10 + pos->v[1];
  end.v[2] = v11 + pos->v[2];
  CG_DebugLine(pos, &end, &colorGreen, depthTest, duration);
  v12 = length * axes->m[2].v[1];
  end.v[0] = (float)(length * axes->m[2].v[0]) + pos->v[0];
  v13 = length * axes->m[2].v[2];
  end.v[1] = v12 + pos->v[1];
  end.v[2] = v13 + pos->v[2];
  CG_DebugLine(pos, &end, &colorBlue, depthTest, duration);
}

/*
==============
DrawContactPointMarker
==============
*/
void DrawContactPointMarker(const vec3_t *origin, float size, const vec4_t *colour, int duration)
{
  float v4; 
  float v5; 
  float v6; 
  float v8; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t end; 
  vec3_t start; 

  v4 = origin->v[1];
  LODWORD(v5) = LODWORD(size) ^ _xmm;
  v6 = COERCE_FLOAT(LODWORD(size) ^ _xmm) + origin->v[0];
  v8 = origin->v[2];
  start.v[0] = v6;
  end.v[0] = size + origin->v[0];
  start.v[1] = v4;
  start.v[2] = v8;
  end.v[1] = v4;
  end.v[2] = v8;
  CG_DebugLine(&start, &end, colour, 0, duration);
  v12 = origin->v[0];
  v13 = origin->v[2];
  start.v[1] = v5 + origin->v[1];
  end.v[1] = size + origin->v[1];
  start.v[0] = v12;
  start.v[2] = v13;
  end.v[0] = v12;
  end.v[2] = v13;
  CG_DebugLine(&start, &end, colour, 0, duration);
  v14 = origin->v[0];
  v15 = origin->v[1];
  start.v[2] = v5 + origin->v[2];
  end.v[2] = size + origin->v[2];
  start.v[0] = v14;
  start.v[1] = v15;
  end.v[0] = v14;
  end.v[1] = v15;
  CG_DebugLine(&start, &end, colour, 0, duration);
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
  CG_DebugEllipsoid(center, rotation->m, &rotation->m[1], size->v[0], size->v[1], size->v[2], color, depthTest, duration);
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
  vec3_t *v6; 
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
  DObjAnimMat *RotTransArray; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  int boneIndices; 
  unsigned int v33; 
  __int64 v34; 
  const DObjProceduralBones *v35; 
  cpose_t *posea; 
  vec3_t *v37; 
  __int64 v38; 
  vec3_t inoutTrans1; 
  vec4_t inoutQuat1; 
  vec3_t out; 
  vec3_t outInvTrans; 
  vec4_t outInvQuat; 

  posea = (cpose_t *)pose;
  v35 = procBones;
  v4 = procBones;
  v37 = outPinConstraintPoints;
  v6 = outPinConstraintPoints;
  LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(pose, dobj, 0);
  QuatTrans_Inverse(&LocalBoneMatrix->quat, &LocalBoneMatrix->trans, &outInvQuat, &outInvTrans);
  numModels = v4->numModels;
  if ( numModels )
  {
    v9 = numModels;
    v10 = 0i64;
    v34 = 0i64;
    v31 = numModels;
    do
    {
      modelInfo = (__int64)v4->modelInfo;
      v38 = modelInfo;
      v12 = *(unsigned __int8 *)(v10 + modelInfo + 24);
      v33 = v12;
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
            LODWORD(v30) = *(_DWORD *)(v14 - 4);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 394, ASSERT_TYPE_ASSERT, "( pin->dynamicBoneIndexB ) >= ( 0 )", "%s >= %s\n\t%i, %i", "pin->dynamicBoneIndexB", "0", v30, 0i64) )
              __debugbreak();
          }
          if ( *(int *)(v14 - 8) < 0 )
          {
            v16 = v35->pinConstraintBoneIndices[*(_DWORD *)v14 + *(unsigned __int8 *)(v10 + modelInfo + 23)];
            if ( (unsigned __int16)(v16 - 254) <= 1u )
            {
              v27 = v15;
              *(_QWORD *)v6[v27].v = 0i64;
              v6[v27].v[2] = 0.0;
            }
            else
            {
              v17 = v16;
              if ( !DObjIsValidBoneIndex(dobj, v16) )
              {
                LODWORD(v28) = v17;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 409, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( dobj, boneIndex ) ) )", "( boneIndex ) = %i", v28) )
                  __debugbreak();
              }
              if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 86, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
                __debugbreak();
              Value = (char *)Sys_GetValue(0);
              v19 = (int *)(Value + 18936);
              if ( (unsigned int)(*((_DWORD *)Value + 4734) + 1) >= 3 )
              {
                LODWORD(v29) = 3;
                LODWORD(v28) = *((_DWORD *)Value + 4734) + 1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v28, v29) )
                  __debugbreak();
              }
              if ( (unsigned int)++*v19 >= 3 )
              {
                LODWORD(v29) = 3;
                LODWORD(v28) = *v19;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v28, v29) )
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
              RotTransArray = DObjGetRotTransArray(dobj);
              if ( RotTransArray )
                RotTransArray = DObjGetSkelBoneMatrix(dobj, v17);
              inoutQuat1 = RotTransArray->quat;
              inoutTrans1 = RotTransArray->trans;
              QuatTrans_MultiplyEquals(&inoutQuat1, &inoutTrans1, &outInvQuat, &outInvTrans);
              QuatTransform(&inoutQuat1, (const vec3_t *)(v14 + 4), &out);
              v6 = v37;
              v26 = v15;
              v10 = v34;
              modelInfo = v38;
              v12 = v33;
              v37[v26].v[0] = out.v[0] + inoutTrans1.v[0];
              v6[v26].v[1] = out.v[1] + inoutTrans1.v[1];
              v6[v26].v[2] = out.v[2] + inoutTrans1.v[2];
            }
          }
          ++v13;
          v14 += 44i64;
        }
        while ( v13 < v12 );
        v9 = v31;
      }
      v4 = v35;
      v10 += 32i64;
      --v9;
      v34 = v10;
      v31 = v9;
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
  const DObj *v2; 
  int v3; 
  XAnimDynamicBones *dynamicBones; 
  __int64 v5; 
  XAnimCollidableBone *collidableBones; 
  __int64 numCollisionShapes; 
  int v8; 
  __int64 v9; 
  cpose_t *v10; 
  __int64 v11; 
  __int64 v12; 
  float v13; 
  vec3_t *p_out; 
  float v15; 
  const vec4_t *v16; 
  __int64 duration; 
  int v18; 
  unsigned __int16 inoutIndex; 
  int NumModels; 
  cpose_t *posea; 
  const DObj *v22; 
  vec3_t out; 
  vec3_t end; 
  Bounds bounds; 
  tmat43_t<vec3_t> outTagMat; 
  vec3_t center; 

  posea = (cpose_t *)pose;
  v2 = dobj;
  v22 = dobj;
  v3 = 0;
  NumModels = DObjGetNumModels(dobj);
  v18 = 0;
  if ( NumModels > 0 )
  {
    while ( 1 )
    {
      dynamicBones = DObjGetModel(v2, v3)->dynamicBones;
      if ( dynamicBones )
      {
        v5 = 0i64;
        if ( dynamicBones->numCollidableBones )
          break;
      }
LABEL_38:
      v18 = ++v3;
      if ( v3 >= NumModels )
        return;
    }
    while ( 1 )
    {
      collidableBones = dynamicBones->collidableBones;
      inoutIndex = 254;
      if ( DObjGetBoneIndexFromStartModelClient(v2, collidableBones[v5].boneName, v3, &inoutIndex) )
      {
        numCollisionShapes = (int)collidableBones[v5].numCollisionShapes;
        v8 = inoutIndex;
        v9 = (__int64)&dynamicBones->collisionShapes[collidableBones[v5].firstCollisionShapeIndex];
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 235, ASSERT_TYPE_ASSERT, "(shapes != 0)", (const char *)&queryFormat, "shapes != NULL") )
          __debugbreak();
        v10 = posea;
        if ( !posea && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 236, ASSERT_TYPE_ASSERT, "(pose != 0)", (const char *)&queryFormat, "pose != NULL") )
          __debugbreak();
        if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 237, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
          __debugbreak();
        if ( (_DWORD)numCollisionShapes )
        {
          if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 242, ASSERT_TYPE_ASSERT, "(shapes != 0)", (const char *)&queryFormat, "shapes != NULL") )
            __debugbreak();
          if ( v8 != 254 && v8 != 255 )
          {
            if ( CG_DObjGetWorldBoneMatrix(v10, v2, v8, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
            {
              DrawBoneAxis((const tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3], 0.25, 0, 0);
              v11 = numCollisionShapes;
              if ( (int)numCollisionShapes > 0 )
              {
                v12 = v9 + 12;
                while ( *(_BYTE *)(v12 - 12) )
                {
                  if ( *(_BYTE *)(v12 - 12) != 1 )
                  {
                    if ( *(_BYTE *)(v12 - 12) == 2 )
                    {
                      v13 = *(float *)(v12 + 12);
                      *(_OWORD *)bounds.midPoint.v = *(_OWORD *)(v12 - 8);
                      bounds.halfSize.v[1] = *(float *)(v12 + 8);
                      bounds.halfSize.v[2] = v13;
                      CG_DebugBoxOriented(&outTagMat.m[3], &bounds, (const tmat33_t<vec3_t> *)&outTagMat, &colorYellow, 0, 0);
                    }
                    else
                    {
                      LODWORD(duration) = *(unsigned __int8 *)(v12 - 12);
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 297, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "bad collision shape type %d", duration) )
                        __debugbreak();
                    }
                    goto LABEL_34;
                  }
                  MatrixTransformVector43((const vec3_t *)(v12 - 8), &outTagMat, &out);
                  MatrixTransformVector43((const vec3_t *)(v12 + 4), &outTagMat, &end);
                  p_out = &out;
                  if ( (float)((float)((float)((float)(end.v[1] - out.v[1]) * (float)(end.v[1] - out.v[1])) + (float)((float)(end.v[0] - out.v[0]) * (float)(end.v[0] - out.v[0]))) + (float)((float)(end.v[2] - out.v[2]) * (float)(end.v[2] - out.v[2]))) <= 0.001 )
                  {
                    v15 = *(float *)(v12 + 16);
                    v16 = &colorOrange;
LABEL_33:
                    CG_DebugSphere(p_out, v15, v16, 0, 0);
                    goto LABEL_34;
                  }
                  CG_DebugCapsule(&out, &end, *(float *)(v12 + 16), &colorOrange, 0, 0);
LABEL_34:
                  v12 += 32i64;
                  if ( !--v11 )
                  {
                    v2 = v22;
                    goto LABEL_36;
                  }
                }
                MatrixTransformVector43((const vec3_t *)(v12 - 8), &outTagMat, &center);
                v15 = *(float *)(v12 + 4);
                v16 = &colorLtBlue;
                p_out = &center;
                goto LABEL_33;
              }
            }
          }
        }
LABEL_36:
        v3 = v18;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= dynamicBones->numCollidableBones )
        goto LABEL_38;
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
  DObjAnimMat *v6; 
  unsigned __int8 numModels; 
  __int64 v8; 
  __int64 v9; 
  DObjProceduralBonesModelInfo *modelInfo; 
  unsigned int numPinConstraints; 
  unsigned int v12; 
  __int64 p_dynamicBoneIndexB; 
  int firstPhysicsBoneIndex; 
  XAnimPhysicsBone *physicsBones; 
  __int64 v16; 
  int v17; 
  unsigned __int64 v18; 
  const vec3_t *v19; 
  const vec3_t *v20; 
  const vec3_t *p_trans; 
  const vec3_t *v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v28; 
  float v29; 
  float v30; 
  float v31; 
  float v34; 
  float v35; 
  __int64 v36; 
  DObjAnimMat *quat; 
  __int64 v38; 
  unsigned int v39; 
  DObjProceduralBonesModelInfo *v40; 
  vec3_t v41; 
  vec3_t end; 
  vec3_t v43; 
  vec3_t outTransformedPoint; 
  vec3_t point; 
  vec3_t start; 
  vec3_t v47; 
  vec3_t v48; 
  vec3_t v49; 
  vec3_t outPinConstraintPoints[50]; 

  if ( procBones->numCustomPinConstraints )
  {
    quat = CG_DObjGetLocalBoneMatrix(pose, dobj, 0);
    v6 = quat;
    XAnimDebugCalculateCustomPinConstraintPoints(dobj, pose, procBones, outPinConstraintPoints);
    numModels = procBones->numModels;
    if ( numModels )
    {
      v8 = 0i64;
      v9 = numModels;
      v38 = numModels;
      do
      {
        modelInfo = procBones->modelInfo;
        v40 = modelInfo;
        numPinConstraints = modelInfo[v8].numPinConstraints;
        v39 = numPinConstraints;
        if ( modelInfo[v8].numPinConstraints )
        {
          if ( !modelInfo[v8].dynamicBonesAsset )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 464, ASSERT_TYPE_ASSERT, "(modelInfo->dynamicBonesAsset)", (const char *)&queryFormat, "modelInfo->dynamicBonesAsset") )
              __debugbreak();
            v9 = v38;
          }
          v12 = 0;
          if ( numPinConstraints )
          {
            p_dynamicBoneIndexB = (__int64)&modelInfo[v8].dynamicBonesAsset->customPinConstraints->dynamicBoneIndexB;
            do
            {
              if ( *(int *)p_dynamicBoneIndexB < 0 )
              {
                LODWORD(v36) = *(_DWORD *)p_dynamicBoneIndexB;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 474, ASSERT_TYPE_ASSERT, "( pin->dynamicBoneIndexB ) >= ( 0 )", "%s >= %s\n\t%i, %i", "pin->dynamicBoneIndexB", "0", v36, 0i64) )
                  __debugbreak();
              }
              firstPhysicsBoneIndex = modelInfo[v8].firstPhysicsBoneIndex;
              physicsBones = procBones->physicsBones;
              v16 = firstPhysicsBoneIndex + *(_DWORD *)p_dynamicBoneIndexB;
              if ( physicsBones[v16].boneIndex != 255 )
              {
                v17 = *(_DWORD *)(p_dynamicBoneIndexB - 4);
                if ( v17 < 0 )
                {
                  p_trans = &v6->trans;
                  QuatTrans_TransformPoint(&quat->quat, p_trans, &outPinConstraintPoints[v12 + modelInfo[v8].firstPinConstraintIndex], &end);
                  QuatTrans_TransformPoint(&procBones->physicsBones[v16].state.rotationQuat, &procBones->physicsBones[v16].state.position, (const vec3_t *)(p_dynamicBoneIndexB + 20), &v48);
                  QuatTrans_TransformPoint(&quat->quat, p_trans, &v48, &v41);
                  v22 = p_trans;
                  v6 = quat;
                  QuatTrans_TransformPoint(&quat->quat, v22, &procBones->physicsBones[v16].state.position, &v49);
                  CG_DebugLine(&v49, &v41, &colorLtBlue, 0, 0);
                }
                else
                {
                  v18 = firstPhysicsBoneIndex + v17;
                  if ( physicsBones[v18].boneIndex != 255 )
                  {
                    QuatTrans_TransformPoint(&physicsBones[v18].state.rotationQuat, &physicsBones[v18].state.position, (const vec3_t *)(p_dynamicBoneIndexB + 8), &outTransformedPoint);
                    v19 = &v6->trans;
                    QuatTrans_TransformPoint(&quat->quat, v19, &outTransformedPoint, &end);
                    QuatTrans_TransformPoint(&procBones->physicsBones[v16].state.rotationQuat, &procBones->physicsBones[v16].state.position, (const vec3_t *)(p_dynamicBoneIndexB + 20), &point);
                    QuatTrans_TransformPoint(&quat->quat, v19, &point, &v41);
                    QuatTrans_TransformPoint(&quat->quat, v19, &procBones->physicsBones[v18].state.position, &start);
                    v20 = v19;
                    v6 = quat;
                    QuatTrans_TransformPoint(&quat->quat, v20, &procBones->physicsBones[v16].state.position, &v47);
                    CG_DebugLine(&start, &end, &colorLtBlue, 0, 0);
                    CG_DebugLine(&v47, &v41, &colorLtBlue, 0, 0);
                  }
                  modelInfo = v40;
                }
                v23 = v41.v[0] - end.v[0];
                v28 = LODWORD(v41.v[1]);
                v24 = v41.v[1] - end.v[1];
                v25 = v41.v[2] - end.v[2];
                v26 = (float)(v24 * v24) + (float)(v23 * v23);
                *(float *)&v28 = fsqrt(v26 + (float)(v25 * v25));
                _XMM2 = v28;
                if ( (float)(v26 + (float)(v25 * v25)) >= 0.001 )
                {
                  __asm
                  {
                    vcmpless xmm0, xmm2, xmm13
                    vblendvps xmm0, xmm2, xmm11, xmm0
                  }
                  v34 = 1.0 / *(float *)&_XMM0;
                  v29 = (float)(1.0 / *(float *)&_XMM0) * v23;
                  v31 = v34 * v25;
                  v30 = v34 * v24;
                }
                else
                {
                  v29 = 0.0;
                  v30 = 0.0;
                  v31 = 0.0;
                }
                v35 = *(float *)&v28 - *(float *)(p_dynamicBoneIndexB + 32);
                v43.v[0] = (float)(v29 * v35) + end.v[0];
                v43.v[2] = (float)(v31 * v35) + end.v[2];
                v43.v[1] = (float)(v30 * v35) + end.v[1];
                CG_DebugLine(&end, &v41, &colorLtBlue, 0, 0);
                CG_DebugLine(&end, &v43, &colorRed, 0, 0);
              }
              ++v12;
              p_dynamicBoneIndexB += 44i64;
            }
            while ( v12 < v39 );
            v9 = v38;
          }
        }
        ++v8;
        v38 = --v9;
      }
      while ( v9 );
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
    p_localPosition = &outAudioEvents.localPosition;
    do
    {
      MatrixTransformVector43(p_localPosition, &outTagMat, &out);
      DrawContactPointMarker(&out, 0.1, &colorBlueHeat, 30);
      p_localPosition += 2;
      --AudioEventList;
    }
    while ( AudioEventList );
  }
}

/*
==============
XAnimDebugDrawDynamicBones
==============
*/
void XAnimDebugDrawDynamicBones(const DObj *dobj, const cpose_t *pose)
{
  DObjProceduralBones *v4; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v9; 
  const dvar_t *v19; 
  int v20; 
  int Collisions; 
  XAnimPhysicsBone *physicsBones; 
  __int64 v23; 
  XAnimCollisionContact *v24; 
  const dvar_t *v25; 
  float groundPlaneHeight; 
  int v27; 
  __int128 v29; 
  __int128 v32; 
  int v34; 
  __int128 v35; 
  unsigned int v39; 
  __int64 v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  XAnimPhysicsBone *v44; 
  const dvar_t *v45; 
  const dvar_t *v46; 
  __int64 v47; 
  __int64 v48; 
  unsigned int i; 
  __int64 v50[2]; 
  DObjProceduralBones *v51; 
  __int64 v52; 
  vec3_t end; 
  vec3_t start; 
  vec3_t outTransformedPoint; 
  vec3_t origin; 
  vec4_t color; 
  vec4_t out; 
  tmat43_t<vec3_t> axes; 
  tmat43_t<vec3_t> outTagMat; 
  XAnimCollisionContact outContacts[55]; 

  v52 = -2i64;
  XAnimDebugDrawCollidableBoneCollisionShapes(dobj, pose);
  if ( dobj->proceduralBonesHandle.m_value )
  {
    v4 = DObjLockProceduralBones(dobj);
    v51 = v4;
    DObjUnlockProceduralBones(dobj);
    if ( v4 )
    {
      CG_DObjGetWorldBoneMatrix(pose, dobj, 0, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]);
      Axis43ToQuat(&outTagMat, &out);
      if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(pose->origin.Get_origin, pose);
      FunctionPointer_origin(&pose->origin.origin.origin, (vec3_t *)v50);
      if ( pose->isPosePrecise )
      {
        _XMM0 = LODWORD(v50[0]);
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v9 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v9 = *(double *)&_XMM0 * 0.000244140625;
        _XMM0 = v9;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        *(float *)v50 = *(float *)&_XMM1;
        _XMM2 = HIDWORD(v50[0]);
        __asm { vcvtdq2pd xmm2, xmm2 }
        *((_QWORD *)&v9 + 1) = *((_QWORD *)&_XMM2 + 1);
        *(double *)&v9 = *(double *)&_XMM2 * 0.000244140625;
        _XMM0 = v9;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        *((float *)v50 + 1) = *(float *)&_XMM1;
        _XMM2 = LODWORD(v50[1]);
        __asm { vcvtdq2pd xmm2, xmm2 }
        *((_QWORD *)&v9 + 1) = *((_QWORD *)&_XMM2 + 1);
        *(double *)&v9 = *(double *)&_XMM2 * 0.000244140625;
        _XMM0 = v9;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        *(float *)&v50[1] = *(float *)&_XMM1;
      }
      v19 = DCONST_DVARBOOL_xanim_physicsDebugCollisions;
      if ( !DCONST_DVARBOOL_xanim_physicsDebugCollisions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsDebugCollisions") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v20 = 0;
      if ( v19->current.enabled )
      {
        Collisions = XAnimPhysicsDebugFindCollisions(dobj, pose, v4, outContacts, 55);
        physicsBones = v4->physicsBones;
        v23 = Collisions;
        if ( Collisions > 0 )
        {
          v24 = outContacts;
          do
          {
            QuatTrans_TransformPoint(&physicsBones[v24->bodyIndex].state.rotationQuat, &physicsBones[v24->bodyIndex].state.position, &outContacts[v20].pointA, &outTransformedPoint);
            QuatTrans_TransformPoint(&out, &outTagMat.m[3], &outTransformedPoint, (vec3_t *)&color);
            QuatTrans_TransformPoint(&out, &outTagMat.m[3], &outContacts[v20].pointB, &origin);
            QuatTransform(&out, &outContacts[v20].normal, &start);
            DrawContactPointMarker((const vec3_t *)&color, *(float *)&dword_147F8F090, &colorOrange, dword_147F8F08C);
            DrawContactPointMarker(&origin, *(float *)&dword_147F8F090, &colorCyan, dword_147F8F08C);
            end.v[0] = (float)((float)(2.0 * *(float *)&dword_147F8F090) * start.v[0]) + color.v[0];
            end.v[1] = (float)((float)(2.0 * *(float *)&dword_147F8F090) * start.v[1]) + color.v[1];
            end.v[2] = (float)((float)(2.0 * *(float *)&dword_147F8F090) * start.v[2]) + color.v[2];
            CG_DebugLine((const vec3_t *)&color, &end, &colorLtBlue, 0, dword_147F8F08C);
            ++v20;
            ++v24;
            --v23;
          }
          while ( v23 );
        }
        v4 = v51;
      }
      if ( v4->physicsState.groundPlaneEnabled )
      {
        v25 = DCONST_DVARBOOL_xanim_physicsDebugDrawGroundPlane;
        if ( !DCONST_DVARBOOL_xanim_physicsDebugDrawGroundPlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsDebugDrawGroundPlane") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        if ( v25->current.enabled )
        {
          groundPlaneHeight = v4->physicsState.groundPlaneHeight;
          color = colorGreenFaded;
          v27 = 0;
          origin.v[2] = groundPlaneHeight;
          outTransformedPoint.v[2] = groundPlaneHeight;
          do
          {
            v29 = LODWORD(v50[0]);
            *(float *)&v29 = *(float *)v50 - 9.375;
            _XMM0 = v29;
            __asm { vunpcklps xmm0, xmm0, xmm4 }
            *(double *)start.v = *(double *)&_XMM0;
            start.v[2] = groundPlaneHeight;
            v32 = LODWORD(v50[0]);
            *(float *)&v32 = *(float *)v50 + 9.375;
            _XMM0 = v32;
            __asm { vunpcklps xmm0, xmm0, xmm4 }
            *(double *)end.v = *(double *)&_XMM0;
            end.v[2] = groundPlaneHeight;
            CG_DebugLine(&start, &end, &color, 1, 0);
            ++v27;
          }
          while ( v27 <= 25 );
          v34 = 0;
          origin.v[2] = groundPlaneHeight;
          outTransformedPoint.v[2] = groundPlaneHeight;
          do
          {
            v35 = 0i64;
            *(float *)&v35 = (float)((float)((float)v34 - 12.5) * 0.75) + *(float *)v50;
            _XMM4 = v35;
            __asm { vunpcklps xmm0, xmm4, xmm0 }
            *(double *)start.v = *(double *)&_XMM0;
            start.v[2] = groundPlaneHeight;
            __asm { vunpcklps xmm0, xmm4, xmm0 }
            *(double *)end.v = *(double *)&_XMM0;
            end.v[2] = groundPlaneHeight;
            CG_DebugLine(&start, &end, &color, 1, 0);
            ++v34;
          }
          while ( v34 <= 25 );
          v4 = v51;
        }
      }
      v39 = 0;
      for ( i = 0; v39 < v4->numModels; i = ++v39 )
      {
        v40 = (__int64)&v4->modelInfo[v39];
        v41 = *(unsigned __int8 *)(v40 + 21);
        if ( *(_BYTE *)(v40 + 21) && v41 != *(_DWORD *)(*(_QWORD *)(v40 + 8) + 8i64) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 605, ASSERT_TYPE_ASSERT, "(numModelPhysicsBones == 0 || numModelPhysicsBones == modelInfo->dynamicBonesAsset->numDynamicBones)", (const char *)&queryFormat, "numModelPhysicsBones == 0 || numModelPhysicsBones == modelInfo->dynamicBonesAsset->numDynamicBones") )
            __debugbreak();
          v39 = i;
        }
        v42 = 0;
        if ( v41 )
        {
          do
          {
            v43 = v42 + *(unsigned __int8 *)(v40 + 20);
            if ( !v43 )
            {
              LODWORD(v48) = 1;
              LODWORD(v47) = 0;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 614, ASSERT_TYPE_ASSERT, "( physicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "physicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", v47, v48) )
                __debugbreak();
            }
            v44 = &v4->physicsBones[v43];
            if ( (unsigned __int16)(v44->boneIndex - 254) > 1u )
            {
              if ( (v44->flags & 4) == 0 )
                XAnimDrawBoneCollisionShapes(dobj, pose, (const XAnimCollisionShape *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) + 48i64) + 32i64 * v44->properties->firstCollisionShapeIndex), v44->properties->numCollisionShapes, v44->boneIndex, 1);
              if ( v44->parentPhysicsBoneIndex == 0xFF && CG_DObjGetWorldBoneMatrix(pose, dobj, v44->parentBoneIndex, (tmat33_t<vec3_t> *)&axes, &axes.m[3]) )
              {
                MatrixTransformVector43(&v44->localBasePoseTrans, &axes, &origin);
                CG_DebugSphere(&origin, 0.1, &colorGreen, 0, 0);
              }
              if ( v44->boneIndex != 255 && CG_DObjGetWorldBoneMatrix(pose, dobj, v44->boneIndex, (tmat33_t<vec3_t> *)&axes, &axes.m[3]) )
              {
                LODWORD(end.v[0]) = LODWORD(v44->jointOffset.v[0]) ^ _xmm;
                LODWORD(end.v[1]) = LODWORD(v44->jointOffset.v[1]) ^ _xmm;
                LODWORD(end.v[2]) = LODWORD(v44->jointOffset.v[2]) ^ _xmm;
                MatrixTransformVector43(&end, &axes, &outTransformedPoint);
                CG_DebugSphere(&outTransformedPoint, 0.1, &colorLtBlue, 0, 0);
                v45 = DCONST_DVARBOOL_xanim_physicsDebugCollisions;
                if ( !DCONST_DVARBOOL_xanim_physicsDebugCollisions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsDebugCollisions") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v45);
                if ( !v45->current.enabled && (v44->flags & 4) != 0 )
                  DrawBoneAxis((const tmat33_t<vec3_t> *)&axes, &axes.m[3], 1.0, 0, 0);
                v4 = v51;
              }
            }
            ++v42;
          }
          while ( v42 < v41 );
          v39 = i;
        }
      }
      v46 = DCONST_DVARBOOL_xanim_physicsDebugCustomPinConstraints;
      if ( !DCONST_DVARBOOL_xanim_physicsDebugCustomPinConstraints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_physicsDebugCustomPinConstraints") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v46);
      if ( v46->current.enabled )
        XAnimDebugDrawCustomPinConstraints(dobj, pose, v4);
      memset(v50, 0, 0xCui64);
    }
  }
}

/*
==============
XAnimDrawBoneCollisionShapes
==============
*/
void XAnimDrawBoneCollisionShapes(const DObj *dobj, const cpose_t *pose, const XAnimCollisionShape *shapes, int numShapes, int boneIndex, bool isDynamicBone)
{
  __int64 v7; 
  float *v10; 
  float v11; 
  vec3_t *p_out; 
  const vec4_t *v13; 
  float v14; 
  const vec4_t *v15; 
  __int64 duration; 
  vec3_t out; 
  vec3_t end; 
  Bounds bounds; 
  tmat43_t<vec3_t> outTagMat; 
  vec3_t center; 

  v7 = numShapes;
  if ( !shapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 235, ASSERT_TYPE_ASSERT, "(shapes != 0)", (const char *)&queryFormat, "shapes != NULL") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 236, ASSERT_TYPE_ASSERT, "(pose != 0)", (const char *)&queryFormat, "pose != NULL") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 237, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( (_DWORD)v7 )
  {
    if ( !shapes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 242, ASSERT_TYPE_ASSERT, "(shapes != 0)", (const char *)&queryFormat, "shapes != NULL") )
      __debugbreak();
    if ( (unsigned int)(boneIndex - 254) > 1 )
    {
      if ( CG_DObjGetWorldBoneMatrix(pose, dobj, boneIndex, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
      {
        DrawBoneAxis((const tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3], 0.25, 0, 0);
        if ( v7 > 0 )
        {
          v10 = &shapes->u.sphere.center.v[2];
          do
          {
            if ( *((_BYTE *)v10 - 12) )
            {
              if ( *((_BYTE *)v10 - 12) != 1 )
              {
                if ( *((_BYTE *)v10 - 12) == 2 )
                {
                  v11 = v10[3];
                  *(_OWORD *)bounds.midPoint.v = *(_OWORD *)(v10 - 2);
                  bounds.halfSize.v[1] = v10[2];
                  bounds.halfSize.v[2] = v11;
                  CG_DebugBoxOriented(&outTagMat.m[3], &bounds, (const tmat33_t<vec3_t> *)&outTagMat, &colorYellow, 0, 0);
                }
                else
                {
                  LODWORD(duration) = *((unsigned __int8 *)v10 - 12);
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_debug.cpp", 297, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "bad collision shape type %d", duration) )
                    __debugbreak();
                }
                goto LABEL_33;
              }
              MatrixTransformVector43((const vec3_t *)(v10 - 2), &outTagMat, &out);
              MatrixTransformVector43((const vec3_t *)(v10 + 1), &outTagMat, &end);
              p_out = &out;
              if ( (float)((float)((float)((float)(end.v[1] - out.v[1]) * (float)(end.v[1] - out.v[1])) + (float)((float)(end.v[0] - out.v[0]) * (float)(end.v[0] - out.v[0]))) + (float)((float)(end.v[2] - out.v[2]) * (float)(end.v[2] - out.v[2]))) > 0.001 )
              {
                v13 = &colorOrange;
                if ( isDynamicBone )
                  v13 = &colorMagenta;
                CG_DebugCapsule(&out, &end, v10[4], v13, 0, 0);
                goto LABEL_33;
              }
              v14 = v10[4];
              v15 = &colorOrange;
              if ( isDynamicBone )
                v15 = &colorMagenta;
            }
            else
            {
              MatrixTransformVector43((const vec3_t *)(v10 - 2), &outTagMat, &center);
              v14 = v10[1];
              v15 = &colorLtBlue;
              p_out = &center;
            }
            CG_DebugSphere(p_out, v14, v15, 0, 0);
LABEL_33:
            v10 += 8;
            --v7;
          }
          while ( v7 );
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


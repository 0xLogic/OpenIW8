/*
==============
XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams
==============
*/

void __fastcall XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams(XAnimProcNodeCalcParams *params, const DObjProceduralBones *procBones, DObjAnimMat *outTransforms, const unsigned int maxTransforms)
{
  ?XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams@@YAXPEAUXAnimProcNodeCalcParams@@PEBUDObjProceduralBones@@PEAUDObjAnimMat@@I@Z(params, procBones, outTransforms, maxTransforms);
}

/*
==============
XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj
==============
*/

void __fastcall XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj(const DObj *dobj, const DObjProceduralBones *procBones, DObjAnimMat *outTransforms, const unsigned int maxTransforms)
{
  ?XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj@@YAXPEBUDObj@@PEBUDObjProceduralBones@@PEAUDObjAnimMat@@I@Z(dobj, procBones, outTransforms, maxTransforms);
}

/*
==============
XAnimBonePhysics_FindCollisions
==============
*/

int __fastcall XAnimBonePhysics_FindCollisions(const DObjProceduralBones *procBones, unsigned int firstPhysicsBoneIndex, unsigned int endPhysicsBoneIndex, const XAnimCollisionShape *collidableBoneCollisionShapes, const DObjAnimMat *collidableBoneTransforms, XAnimCollisionContact *outContacts, const int maxContacts)
{
  return ?XAnimBonePhysics_FindCollisions@@YAHPEBUDObjProceduralBones@@IIPEBUXAnimCollisionShape@@PEBUDObjAnimMat@@PEAUXAnimCollisionContact@@H@Z(procBones, firstPhysicsBoneIndex, endPhysicsBoneIndex, collidableBoneCollisionShapes, collidableBoneTransforms, outContacts, maxContacts);
}

/*
==============
XAnimBonePhysics_TransformCollisionShape
==============
*/

void __fastcall XAnimBonePhysics_TransformCollisionShape(const XAnimCollisionShape *srcShape, const vec4_t *quat, const vec3_t *trans, XAnimCollisionShape *outShape)
{
  ?XAnimBonePhysics_TransformCollisionShape@@YAXPEBUXAnimCollisionShape@@AEBTvec4_t@@AEBTvec3_t@@PEAU1@@Z(srcShape, quat, trans, outShape);
}

/*
==============
XAnimBonePhysics_PreTransformCollidableBoneShapes
==============
*/

void __fastcall XAnimBonePhysics_PreTransformCollidableBoneShapes(const DObjProceduralBones *procBones, const DObjAnimMat *collidableBoneTransforms, XAnimCollisionShape *outShapes, unsigned int maxShapes)
{
  ?XAnimBonePhysics_PreTransformCollidableBoneShapes@@YAXPEBUDObjProceduralBones@@PEBUDObjAnimMat@@PEAUXAnimCollisionShape@@I@Z(procBones, collidableBoneTransforms, outShapes, maxShapes);
}

/*
==============
FindNearestPointOnAlignedBoxFace
==============
*/
float FindNearestPointOnAlignedBoxFace(const vec3_t *p, const vec3_t *extents, vec3_t *outFaceNormal, vec3_t *outContactPoint)
{
  float v17; 
  float v18; 
  float v19; 
  __int64 v20; 
  int *v21; 
  int v26[4]; 
  int v27[3]; 
  int v28[3]; 
  int v29[4]; 

  _XMM6 = LODWORD(p->v[0]);
  _XMM5 = LODWORD(extents->v[0]);
  _XMM7 = LODWORD(p->v[1]);
  _XMM8 = LODWORD(p->v[2]);
  _XMM4 = LODWORD(extents->v[1]);
  _XMM2 = LODWORD(extents->v[2]);
  _XMM9 = 0i64;
  __asm
  {
    vcmpltss xmm0, xmm6, xmm9
    vblendvps xmm0, xmm5, xmm1, xmm0
  }
  v27[0] = _XMM0;
  __asm
  {
    vcmpltss xmm0, xmm7, xmm9
    vblendvps xmm0, xmm4, xmm1, xmm0
  }
  v27[1] = _XMM7;
  v27[2] = _XMM8;
  v28[1] = _XMM0;
  __asm
  {
    vcmpltss xmm0, xmm8, xmm9
    vblendvps xmm0, xmm2, xmm1, xmm0
  }
  v28[0] = _XMM6;
  v28[2] = _XMM8;
  v29[2] = _XMM0;
  v29[0] = _XMM6;
  LODWORD(v17) = COERCE_UNSIGNED_INT(*(float *)&_XMM5 - COERCE_FLOAT(_XMM6 & _xmm)) & _xmm;
  v29[1] = _XMM7;
  LODWORD(v18) = COERCE_UNSIGNED_INT(*(float *)&_XMM4 - COERCE_FLOAT(_XMM7 & _xmm)) & _xmm;
  LODWORD(v19) = COERCE_UNSIGNED_INT(*(float *)&_XMM2 - COERCE_FLOAT(_XMM8 & _xmm)) & _xmm;
  *(float *)v26 = v17;
  *(float *)&v26[1] = v18;
  *(float *)&v26[2] = v19;
  if ( v17 >= v18 || v17 >= v19 )
  {
    if ( v18 >= v19 )
    {
      v20 = 2i64;
      v21 = v29;
    }
    else
    {
      v20 = 1i64;
      v21 = v28;
    }
  }
  else
  {
    v20 = 0i64;
    v21 = v27;
  }
  _XMM1 = LODWORD(FLOAT_1_0);
  *outContactPoint = *(vec3_t *)v21;
  *(_QWORD *)outFaceNormal->v = 0i64;
  outFaceNormal->v[2] = 0.0;
  __asm
  {
    vcmpless xmm3, xmm9, dword ptr [rcx+r9]
    vblendvps xmm4, xmm1, xmm2, xmm3
  }
  outFaceNormal->v[v20] = *(float *)&_XMM4;
  return *(float *)&v26[v20];
}

/*
==============
FindNearestPointSegmentAlignedBoxEdge
==============
*/
float FindNearestPointSegmentAlignedBoxEdge(const vec3_t *segStart, const vec3_t *segEnd, const vec3_t *segMidPoint, const vec3_t *extents, vec3_t *outNormal, vec3_t *outContactPointSeg, vec3_t *outContactPointBox)
{
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
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  __int128 v35; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  __int128 v43; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float t1; 
  float t0; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  vec3_t s00; 
  vec3_t s01; 
  vec3_t v67; 
  vec3_t v68; 

  _XMM2 = LODWORD(extents->v[0]);
  _XMM0 = LODWORD(segMidPoint->v[0]);
  __asm
  {
    vcmpltss xmm0, xmm0, xmm9
    vblendvps xmm5, xmm2, xmm1, xmm0
  }
  _XMM2 = LODWORD(extents->v[1]);
  _XMM0 = LODWORD(segMidPoint->v[1]);
  __asm
  {
    vcmpltss xmm0, xmm0, xmm9
    vblendvps xmm4, xmm2, xmm1, xmm0
  }
  _XMM2 = LODWORD(extents->v[2]);
  _XMM0 = LODWORD(segMidPoint->v[2]);
  __asm
  {
    vcmpltss xmm0, xmm0, xmm9
    vblendvps xmm3, xmm2, xmm1, xmm0
  }
  LODWORD(s01.v[0]) = _XMM5 ^ _xmm;
  LODWORD(v67.v[1]) = _XMM4 ^ _xmm;
  LODWORD(v68.v[2]) = _XMM3 ^ _xmm;
  s00.v[0] = *(float *)&_XMM5;
  s00.v[1] = *(float *)&_XMM4;
  s00.v[2] = *(float *)&_XMM3;
  s01.v[1] = *(float *)&_XMM4;
  s01.v[2] = *(float *)&_XMM3;
  v67.v[0] = *(float *)&_XMM5;
  v67.v[2] = *(float *)&_XMM3;
  v68.v[0] = *(float *)&_XMM5;
  v68.v[1] = *(float *)&_XMM4;
  v52 = *(float *)&_XMM3;
  ClosestPointsTwoSegs(&s00, &s01, segStart, segEnd, &t0, &t1);
  v21 = (float)((float)(s01.v[0] - s00.v[0]) * t0) + s00.v[0];
  v22 = (float)((float)(s01.v[1] - s00.v[1]) * t0) + s00.v[1];
  v23 = (float)((float)(s01.v[2] - s00.v[2]) * t0) + s00.v[2];
  v24 = (float)((float)(segEnd->v[0] - segStart->v[0]) * t1) + segStart->v[0];
  v25 = (float)((float)(segEnd->v[1] - segStart->v[1]) * t1) + segStart->v[1];
  v26 = (float)((float)(segEnd->v[2] - segStart->v[2]) * t1) + segStart->v[2];
  ClosestPointsTwoSegs(&s00, &v67, segStart, segEnd, &v55, &v54);
  v27 = (float)((float)(v67.v[0] - s00.v[0]) * v55) + s00.v[0];
  v59 = (float)((float)(v67.v[1] - s00.v[1]) * v55) + s00.v[1];
  v58 = (float)((float)(v67.v[2] - s00.v[2]) * v55) + s00.v[2];
  v62 = (float)((float)(segEnd->v[0] - segStart->v[0]) * v54) + segStart->v[0];
  v61 = (float)((float)(segEnd->v[1] - segStart->v[1]) * v54) + segStart->v[1];
  v60 = (float)((float)(segEnd->v[2] - segStart->v[2]) * v54) + segStart->v[2];
  v63 = v27;
  ClosestPointsTwoSegs(&s00, &v68, segStart, segEnd, &v53, &v52);
  v28 = s00.v[1];
  v29 = s00.v[2];
  v64 = (float)((float)(v68.v[0] - s00.v[0]) * v53) + s00.v[0];
  v54 = (float)((float)(v68.v[1] - s00.v[1]) * v53) + s00.v[1];
  t1 = (float)((float)(v68.v[2] - s00.v[2]) * v53) + s00.v[2];
  v53 = (float)((float)(segEnd->v[0] - segStart->v[0]) * v52) + segStart->v[0];
  v55 = (float)((float)(segEnd->v[1] - segStart->v[1]) * v52) + segStart->v[1];
  t0 = (float)((float)(segEnd->v[2] - segStart->v[2]) * v52) + segStart->v[2];
  v52 = (float)((float)((float)(v22 - v25) * (float)(v22 - v25)) + (float)((float)(v21 - v24) * (float)(v21 - v24))) + (float)((float)(v23 - v26) * (float)(v23 - v26));
  v30 = (float)((float)((float)(v59 - v61) * (float)(v59 - v61)) + (float)((float)(v27 - v62) * (float)(v27 - v62))) + (float)((float)(v58 - v60) * (float)(v58 - v60));
  v31 = t1 - t0;
  v32 = (float)((float)((float)(v54 - v55) * (float)(v54 - v55)) + (float)((float)(v64 - v53) * (float)(v64 - v53))) + (float)(v31 * v31);
  if ( v52 >= v30 || (float)((float)((float)((float)(v22 - v25) * (float)(v22 - v25)) + (float)((float)(v21 - v24) * (float)(v21 - v24))) + (float)((float)(v23 - v26) * (float)(v23 - v26))) >= v32 )
  {
    if ( v30 >= v32 )
    {
      v48 = v64;
      v49 = v54;
      v50 = v54 - v55;
      v23 = t1;
      v26 = t0;
      v25 = v55;
      v24 = v53;
      v33 = fsqrt(v32);
      outNormal->v[0] = (float)(v64 - v53) * (float)(1.0 / v33);
      outNormal->v[2] = v31 * (float)(1.0 / v33);
      outNormal->v[1] = v50 * (float)(1.0 / v33);
      v22 = v49;
      v21 = v48;
    }
    else
    {
      v21 = v63;
      v39 = fsqrt(v30);
      v33 = v39;
      if ( v39 <= 0.0 )
      {
        v43 = LODWORD(s00.v[1]);
        *(float *)&v43 = fsqrt((float)((float)(s00.v[1] * s00.v[1]) + (float)(s00.v[0] * s00.v[0])) + (float)(s00.v[2] * s00.v[2]));
        _XMM3 = v43;
        __asm
        {
          vcmpless xmm0, xmm3, cs:__real@80000000
          vblendvps xmm0, xmm3, xmm1, xmm0
        }
        v47 = 1.0 / *(float *)&_XMM0;
        v41 = s00.v[2] * (float)(1.0 / *(float *)&_XMM0);
        v42 = s00.v[1] * (float)(1.0 / *(float *)&_XMM0);
        v40 = s00.v[0] * v47;
      }
      else
      {
        v40 = (float)(1.0 / v39) * (float)(v63 - v62);
        v41 = (float)(1.0 / v39) * (float)(v58 - v60);
        v42 = (float)(1.0 / v39) * (float)(v59 - v61);
      }
      v23 = v58;
      v22 = v59;
      v26 = v60;
      v25 = v61;
      v24 = v62;
      outNormal->v[0] = v40;
      outNormal->v[1] = v42;
      outNormal->v[2] = v41;
    }
  }
  else
  {
    v34 = fsqrt(v52);
    v33 = v34;
    if ( v34 <= 0.0 )
    {
      v35 = LODWORD(s00.v[1]);
      *(float *)&v35 = fsqrt((float)((float)(s00.v[1] * s00.v[1]) + (float)(s00.v[0] * s00.v[0])) + (float)(s00.v[2] * s00.v[2]));
      _XMM3 = v35;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      outNormal->v[0] = s00.v[0] * (float)(1.0 / *(float *)&_XMM0);
      outNormal->v[1] = v28 * (float)(1.0 / *(float *)&_XMM0);
      outNormal->v[2] = v29 * (float)(1.0 / *(float *)&_XMM0);
    }
    else
    {
      outNormal->v[0] = (float)(1.0 / v34) * (float)(v21 - v24);
      outNormal->v[1] = (float)(1.0 / v34) * (float)(v22 - v25);
      outNormal->v[2] = (float)(1.0 / v34) * (float)(v23 - v26);
    }
  }
  outContactPointSeg->v[0] = v24;
  outContactPointSeg->v[1] = v25;
  outContactPointSeg->v[2] = v26;
  outContactPointBox->v[0] = v21;
  outContactPointBox->v[1] = v22;
  outContactPointBox->v[2] = v23;
  return v33;
}

/*
==============
TestSegmentAlignedBoxAtOrigin
==============
*/
bool TestSegmentAlignedBoxAtOrigin(const vec3_t *segStart, const vec3_t *segEnd, const vec3_t *boxExtents)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  vec3_t v1; 
  vec3_t cross; 

  v3 = segStart->v[1];
  v4 = segStart->v[2];
  v5 = (float)((float)(segEnd->v[0] - segStart->v[0]) * 0.5) + segStart->v[0];
  v6 = (float)((float)(segEnd->v[1] - v3) * 0.5) + v3;
  v7 = (float)((float)(segEnd->v[2] - v4) * 0.5) + v4;
  v8 = v6 - v3;
  v9 = v5 - segStart->v[0];
  LODWORD(v10) = LODWORD(v9) & _xmm;
  v11 = v7 - v4;
  LODWORD(v13) = LODWORD(v8) & _xmm;
  LODWORD(v14) = COERCE_UNSIGNED_INT(v7 - v4) & _xmm;
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) > (float)(COERCE_FLOAT(LODWORD(v9) & _xmm) + boxExtents->v[0]) )
    return 0;
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) > (float)(v13 + boxExtents->v[1]) )
    return 0;
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) > (float)(v14 + boxExtents->v[2]) )
    return 0;
  v15 = v14 + 0.001;
  v16 = v10 + 0.001;
  v17 = (float)(v11 * v6) - (float)(v8 * v7);
  v18 = (float)(v9 * v7) - (float)(v11 * v5);
  v19 = (float)(v5 * v8) - (float)(v6 * v9);
  v1.v[0] = v10 + 0.001;
  v1.v[1] = v13 + 0.001;
  v1.v[2] = v14 + 0.001;
  Vec3Cross(boxExtents, &v1, &cross);
  v20 = boxExtents->v[1];
  v21 = boxExtents->v[2];
  return COERCE_FLOAT(LODWORD(v17) & _xmm) <= (float)((float)(v21 * (float)(v13 + 0.001)) + (float)(v20 * v15)) && COERCE_FLOAT(LODWORD(v18) & _xmm) <= (float)((float)(v15 * boxExtents->v[0]) + (float)(v21 * v16)) && COERCE_FLOAT(LODWORD(v19) & _xmm) <= (float)((float)(v16 * v20) + (float)((float)(v13 + 0.001) * boxExtents->v[0]));
}

/*
==============
XAnimBonePhysics_FindCollisions
==============
*/
__int64 XAnimBonePhysics_FindCollisions(const DObjProceduralBones *procBones, unsigned int firstPhysicsBoneIndex, unsigned int endPhysicsBoneIndex, const XAnimCollisionShape *collidableBoneCollisionShapes, const DObjAnimMat *collidableBoneTransforms, XAnimCollisionContact *outContacts, const int maxContacts)
{
  const DObjProceduralBones *v8; 
  unsigned int numModels; 
  unsigned int v10; 
  int v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v14; 
  DObjProceduralBonesModelInfo *modelInfo; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  float *p_boneIndex; 
  const vec4_t *v23; 
  __int64 v24; 
  unsigned int v25; 
  XAnimCollisionShape *v26; 
  XAnimCollisionContact *v27; 
  XAnimCollisionContact *v28; 
  __int64 v29; 
  float v30; 
  float v31; 
  float *v32; 
  float v33; 
  unsigned int v34; 
  const DObjProceduralBones *v35; 
  __int64 v36; 
  XAnimCollidableBoneInfo *collidableBoneInfo; 
  unsigned int v38; 
  const DObjAnimMat *v39; 
  unsigned int v40; 
  const XAnimCollisionShape *v41; 
  XAnimCollisionContact *v42; 
  int v43; 
  float v44; 
  float v45; 
  float v46; 
  __int128 v47; 
  float v51; 
  float v52; 
  float v53; 
  float *v54; 
  char v55; 
  float v56; 
  XAnimCollisionContact *v58; 
  vec3_t *outPointB; 
  vec3_t *outNormal; 
  __int64 v61; 
  bool groundPlaneEnabled; 
  unsigned int v63; 
  unsigned int v64; 
  unsigned int v65; 
  unsigned int v66; 
  unsigned int numCollidableBones; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  vec4_t *boxQuat; 
  XAnimCollidableBoneInfo *v75; 
  float *v76; 
  __int64 v77; 
  XAnimPhysicsBone *physicsBones; 
  XAnimCollisionShape *collisionShapes; 
  __int64 v81; 
  DObjProceduralBonesModelInfo *v82; 
  XAnimCollisionShapeType type; 
  XAnimCapsuleCollisionShape capsule; 
  vec3_t out; 
  vec4_t outModelGroundPlane; 
  vec4_t quat; 
  vec3_t in; 
  vec3_t v89; 

  v8 = procBones;
  if ( outContacts && maxContacts && endPhysicsBoneIndex >= firstPhysicsBoneIndex )
  {
    if ( !procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1067, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
      __debugbreak();
    numModels = v8->numModels;
    physicsBones = v8->physicsBones;
    numCollidableBones = v8->numCollidableBones;
    v65 = numModels;
    groundPlaneEnabled = v8->physicsState.groundPlaneEnabled;
    if ( groundPlaneEnabled )
      XAnimBonePhysics_GetModelSpaceGroundPlane(v8, &outModelGroundPlane);
    if ( firstPhysicsBoneIndex >= v8->numPhysicsBones )
    {
      LODWORD(v58) = firstPhysicsBoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1079, ASSERT_TYPE_ASSERT, "(unsigned)( firstPhysicsBoneIndex ) < (unsigned)( procBones->numPhysicsBones )", "firstPhysicsBoneIndex doesn't index procBones->numPhysicsBones\n\t%i not in [0, %i)", v58, v8->numPhysicsBones) )
        __debugbreak();
    }
    if ( endPhysicsBoneIndex > v8->numPhysicsBones )
    {
      LODWORD(outPointB) = v8->numPhysicsBones;
      LODWORD(v58) = endPhysicsBoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1080, ASSERT_TYPE_ASSERT, "( endPhysicsBoneIndex ) <= ( procBones->numPhysicsBones )", "endPhysicsBoneIndex not in [0, procBones->numPhysicsBones]\n\t%u not in [0, %u]", v58, outPointB) )
        __debugbreak();
    }
    v10 = 0;
    v11 = 0;
    v64 = 0;
    if ( !numModels )
      return (unsigned int)v11;
    v12 = numCollidableBones;
    v13 = numModels;
    v14 = 0i64;
    v77 = 0i64;
    while ( 1 )
    {
      modelInfo = v8->modelInfo;
      v82 = modelInfo;
      v16 = *(&modelInfo->numPhysicsBones + v14);
      if ( (_BYTE)v16 )
        break;
LABEL_112:
      ++v10;
      v14 += 32i64;
      v64 = v10;
      v77 = v14;
      if ( v10 >= v13 )
        return (unsigned int)v11;
    }
    if ( !*(const XAnimDynamicBones **)((char *)&modelInfo->dynamicBonesAsset + v14) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1093, ASSERT_TYPE_ASSERT, "(modelInfo->dynamicBonesAsset != 0)", (const char *)&queryFormat, "modelInfo->dynamicBonesAsset != NULL") )
        __debugbreak();
      v10 = v64;
    }
    v17 = *(&modelInfo->firstPhysicsBoneIndex + v14);
    v18 = v17 + *(&modelInfo->numPhysicsBones + v14);
    collisionShapes = (*(const XAnimDynamicBones **)((char *)&modelInfo->dynamicBonesAsset + v14))->collisionShapes;
    if ( v18 <= firstPhysicsBoneIndex )
    {
LABEL_111:
      v13 = v65;
      goto LABEL_112;
    }
    if ( v17 >= endPhysicsBoneIndex )
      return (unsigned int)v11;
    v19 = endPhysicsBoneIndex - v17;
    if ( endPhysicsBoneIndex >= v18 )
      v19 = v16;
    v20 = firstPhysicsBoneIndex - v17;
    v63 = v19;
    if ( firstPhysicsBoneIndex <= v17 )
      v20 = 0;
    v71 = v20;
    if ( v20 >= v19 )
    {
LABEL_110:
      v10 = v64;
      goto LABEL_111;
    }
    while ( 1 )
    {
      v21 = v20 + *(&modelInfo->firstPhysicsBoneIndex + v14);
      v66 = v21;
      if ( !v21 )
      {
        LODWORD(v61) = 1;
        LODWORD(outNormal) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1120, ASSERT_TYPE_ASSERT, "( physicsBoneIndex ) >= ( XANIM_NUM_RESERVED_PHYSICS_BONES )", "%s >= %s\n\t%i, %i", "physicsBoneIndex", "XANIM_NUM_RESERVED_PHYSICS_BONES", outNormal, v61) )
          __debugbreak();
        v19 = v63;
      }
      v81 = v21;
      p_boneIndex = (float *)&physicsBones[v21].boneIndex;
      v76 = p_boneIndex;
      if ( *(_WORD *)p_boneIndex == 255 )
        goto LABEL_108;
      if ( ((_BYTE)p_boneIndex[4] & 4) == 0 )
        break;
      if ( *(_DWORD *)(*((_QWORD *)p_boneIndex + 1) + 100i64) )
      {
        LODWORD(v58) = *(_DWORD *)(*((_QWORD *)p_boneIndex + 1) + 100i64);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1131, ASSERT_TYPE_ASSERT, "( ( pb->properties->numCollisionShapes == 0 ) )", "( pb->properties->numCollisionShapes ) = %i", v58) )
          __debugbreak();
        goto LABEL_107;
      }
LABEL_108:
      v14 = v77;
      v20 = v71 + 1;
      modelInfo = v82;
      v71 = v20;
      if ( v20 >= v19 )
      {
        v8 = procBones;
        goto LABEL_110;
      }
    }
    v23 = (const vec4_t *)(p_boneIndex + 7);
    LODWORD(quat.v[0]) = *((_DWORD *)p_boneIndex + 7) ^ _xmm;
    LODWORD(quat.v[1]) = *((_DWORD *)p_boneIndex + 8) ^ _xmm;
    LODWORD(quat.v[2]) = *((_DWORD *)p_boneIndex + 9) ^ _xmm;
    boxQuat = (vec4_t *)(p_boneIndex + 7);
    quat.v[3] = p_boneIndex[10];
    QuatTransform((const vec4_t *)(p_boneIndex + 7), (const vec3_t *)(p_boneIndex + 46), &out);
    out.v[0] = out.v[0] + p_boneIndex[11];
    out.v[1] = out.v[1] + p_boneIndex[12];
    out.v[2] = out.v[2] + p_boneIndex[13];
    v24 = *((_QWORD *)p_boneIndex + 1);
    v25 = 0;
    v70 = 0;
    if ( !*(_DWORD *)(v24 + 100) )
    {
LABEL_107:
      v19 = v63;
      goto LABEL_108;
    }
    while ( 1 )
    {
      v26 = &collisionShapes[v25 + *(_DWORD *)(v24 + 96)];
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 852, ASSERT_TYPE_ASSERT, "(srcShape != 0)", (const char *)&queryFormat, "srcShape != NULL") )
        __debugbreak();
      type = v26->type;
      if ( v26->type )
      {
        if ( v26->type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
        {
          QuatTrans_TransformPoint(v23, &out, &v26->u.sphere.center, &capsule.start);
          QuatTrans_TransformPoint(v23, &out, &v26->u.capsule.end, &capsule.end);
          capsule.radius = v26->u.capsule.radius;
        }
        else if ( v26->type == XANIM_COLLISION_SHAPE_TYPE_BOX )
        {
          *(XAnimSphereCollisionShape *)capsule.start.v = v26->u.sphere;
          *(_QWORD *)&capsule.end.y = *(_QWORD *)&v26->u.box.extents.y;
        }
      }
      else
      {
        QuatTrans_TransformPoint(v23, &out, &v26->u.sphere.center, &capsule.start);
        capsule.end.v[0] = v26->u.sphere.radius;
      }
      v27 = outContacts;
      if ( groundPlaneEnabled )
        break;
LABEL_63:
      v69 = 0;
      v34 = 0;
      if ( v12 )
      {
        v35 = procBones;
        v36 = 0i64;
        do
        {
          collidableBoneInfo = v35->collidableBoneInfo;
          v75 = collidableBoneInfo;
          if ( collidableBoneInfo[v36].boneIndex != 255 )
          {
            v38 = 0;
            v39 = &collidableBoneTransforms[v34];
            if ( collidableBoneInfo[v36].numCollisionShapes )
            {
              while ( 1 )
              {
                v40 = v38 + collidableBoneInfo[v36].firstCollisionShapeIndex;
                v41 = &collidableBoneCollisionShapes[v40];
                if ( v40 >= v35->numCollidableBoneCollisionShapes )
                {
                  LODWORD(outPointB) = v35->numCollidableBoneCollisionShapes;
                  LODWORD(v58) = v38 + collidableBoneInfo[v36].firstCollisionShapeIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1215, ASSERT_TYPE_ASSERT, "(unsigned)( collidableBoneInfo->firstCollisionShapeIndex + collisionShapeIndex ) < (unsigned)( procBones->numCollidableBoneCollisionShapes )", "collidableBoneInfo->firstCollisionShapeIndex + collisionShapeIndex doesn't index procBones->numCollidableBoneCollisionShapes\n\t%i not in [0, %i)", v58, outPointB) )
                    __debugbreak();
                }
                v42 = &v27[v11];
                if ( type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
                {
                  if ( v41->type )
                  {
                    if ( v41->type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
                    {
                      v43 = XAnimBonePhysics_TestCapsuleCapsule(&capsule, (const XAnimCapsuleCollisionShape *)&v41->u, v42, maxContacts - v11);
                    }
                    else
                    {
                      if ( v41->type != XANIM_COLLISION_SHAPE_TYPE_BOX )
                        goto LABEL_102;
                      v43 = XAnimBonePhysics_TestCapsuleOrientedBox(&capsule, (const XAnimBoxCollisionShape *)&v41->u, &v39->quat, &v39->trans, 0, v42, maxContacts - v11);
                    }
                  }
                  else
                  {
                    v43 = XAnimBonePhysics_TestCapsuleSphere(&capsule, &v41->u.sphere, 0, &v42->pointA, &v42->pointB, &v42->normal);
                  }
                  goto LABEL_90;
                }
                if ( type )
                  break;
                if ( v41->type )
                {
                  if ( v41->type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
                  {
                    v43 = XAnimBonePhysics_TestCapsuleSphere((const XAnimCapsuleCollisionShape *)&v41->u, (const XAnimSphereCollisionShape *)&capsule, 1, &v42->pointB, &v42->pointA, &v42->normal);
                  }
                  else
                  {
                    if ( v41->type != XANIM_COLLISION_SHAPE_TYPE_BOX )
                      goto LABEL_102;
                    v43 = XAnimBonePhysics_TestSphereOrientedBox((const XAnimSphereCollisionShape *)&capsule, (const XAnimBoxCollisionShape *)&v41->u, &v39->quat, &v39->trans, 0, &v42->pointA, &v42->pointB, &v42->normal);
                  }
                  goto LABEL_90;
                }
                v44 = v41->u.sphere.center.v[0] - capsule.start.v[0];
                v47 = LODWORD(v41->u.sphere.center.v[1]);
                v45 = v41->u.sphere.center.v[1] - capsule.start.v[1];
                v46 = v41->u.sphere.center.v[2] - capsule.start.v[2];
                *(float *)&v47 = (float)((float)(v45 * v45) + (float)(v44 * v44)) + (float)(v46 * v46);
                if ( (float)(*(float *)&v47 - (float)((float)(v41->u.sphere.radius * v41->u.sphere.radius) + (float)(capsule.end.v[0] * capsule.end.v[0]))) < 0.0 )
                {
                  *(float *)&v47 = fsqrt(*(float *)&v47);
                  _XMM1 = v47;
                  __asm
                  {
                    vcmpless xmm0, xmm1, xmm11
                    vblendvps xmm0, xmm1, xmm10, xmm0
                  }
                  v51 = (float)(1.0 / *(float *)&_XMM0) * v44;
                  v42->normal.v[0] = v51;
                  v42->normal.v[1] = (float)(1.0 / *(float *)&_XMM0) * v45;
                  v42->normal.v[2] = (float)(1.0 / *(float *)&_XMM0) * v46;
                  v52 = capsule.end.v[0];
                  v42->pointA.v[0] = (float)(v51 * capsule.end.v[0]) + capsule.start.v[0];
                  v42->pointA.v[1] = (float)(v52 * v42->normal.v[1]) + capsule.start.v[1];
                  v42->pointA.v[2] = (float)(v52 * v42->normal.v[2]) + capsule.start.v[2];
                  LODWORD(v53) = LODWORD(v41->u.sphere.radius) ^ _xmm;
                  v42->pointB.v[0] = (float)(v53 * v42->normal.v[0]) + v41->u.sphere.center.v[0];
                  v42->pointB.v[1] = (float)(v53 * v42->normal.v[1]) + v41->u.sphere.center.v[1];
                  v42->pointB.v[2] = (float)(v53 * v42->normal.v[2]) + v41->u.sphere.center.v[2];
                  LODWORD(v41) = 1;
LABEL_91:
                  v11 += (int)v41;
                  if ( v11 > maxContacts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1275, ASSERT_TYPE_ASSERT, "(numShapeContacts + numContacts <= maxContacts)", (const char *)&queryFormat, "numShapeContacts + numContacts <= maxContacts") )
                    __debugbreak();
                  v41 = (const XAnimCollisionShape *)(int)v41;
                  if ( (int)v41 > 0 )
                  {
                    v54 = &v42->pointA.v[2];
                    do
                    {
                      v55 = v66;
                      if ( v66 > 0xFF )
                      {
                        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v66, "unsigned", v81) )
                          __debugbreak();
                        v55 = v66;
                      }
                      *((_BYTE *)v54 - 12) = v55;
                      *((_BYTE *)v54 - 11) = 0;
                      v56 = *(v54 - 1) - v76[12];
                      v89.v[0] = *(v54 - 2) - v76[11];
                      v89.v[2] = *v54 - v76[13];
                      v89.v[1] = v56;
                      QuatTransform(&quat, &v89, (vec3_t *)(v54 - 2));
                      v54 += 10;
                      v41 = (const XAnimCollisionShape *)((char *)v41 - 1);
                    }
                    while ( v41 );
                  }
                  if ( v11 >= maxContacts )
                    return (unsigned int)v11;
                }
LABEL_102:
                ++v38;
                v35 = procBones;
                v27 = outContacts;
                collidableBoneInfo = v75;
                if ( v38 >= v75[v36].numCollisionShapes )
                {
                  v34 = v69;
                  goto LABEL_104;
                }
              }
              if ( type != XANIM_COLLISION_SHAPE_TYPE_BOX )
                goto LABEL_102;
              if ( v41->type )
              {
                if ( v41->type != XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
                  goto LABEL_102;
                v43 = XAnimBonePhysics_TestCapsuleOrientedBox((const XAnimCapsuleCollisionShape *)&v41->u, (const XAnimBoxCollisionShape *)&capsule, boxQuat, &out, 1, v42, maxContacts - v11);
              }
              else
              {
                v43 = XAnimBonePhysics_TestSphereOrientedBox(&v41->u.sphere, (const XAnimBoxCollisionShape *)&capsule, boxQuat, &out, 1, &v42->pointA, &v42->pointB, &v42->normal);
              }
LABEL_90:
              LODWORD(v41) = v43;
              if ( v43 > 0 )
                goto LABEL_91;
              goto LABEL_102;
            }
          }
LABEL_104:
          v27 = outContacts;
          ++v34;
          ++v36;
          v69 = v34;
        }
        while ( v34 < numCollidableBones );
        v21 = v66;
        p_boneIndex = v76;
        v12 = numCollidableBones;
      }
      v23 = (const vec4_t *)(p_boneIndex + 7);
      v24 = *((_QWORD *)p_boneIndex + 1);
      v25 = v70 + 1;
      v70 = v25;
      if ( v25 >= *(_DWORD *)(v24 + 100) )
        goto LABEL_107;
    }
    v28 = &outContacts[v11];
    if ( type )
    {
      if ( type != XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
        goto LABEL_63;
      LODWORD(v29) = XAnimBonePhysics_TestCapsulePlane(&capsule, &outModelGroundPlane, &outContacts[v11], maxContacts - v11);
      if ( (int)v29 <= 0 )
        goto LABEL_62;
    }
    else
    {
      v30 = (float)((float)((float)(outModelGroundPlane.v[0] * capsule.start.v[0]) + (float)(outModelGroundPlane.v[1] * capsule.start.v[1])) + (float)(outModelGroundPlane.v[2] * capsule.start.v[2])) - outModelGroundPlane.v[3];
      if ( v30 > capsule.end.v[0] )
        goto LABEL_63;
      v28->normal.v[0] = COERCE_FLOAT(LODWORD(outModelGroundPlane.v[0]) ^ _xmm);
      v28->normal.v[1] = COERCE_FLOAT(LODWORD(outModelGroundPlane.v[1]) ^ _xmm);
      v28->normal.v[2] = COERCE_FLOAT(LODWORD(outModelGroundPlane.v[2]) ^ _xmm);
      LODWORD(v31) = LODWORD(capsule.end.v[0]) ^ _xmm;
      v28->pointA.v[0] = (float)(COERCE_FLOAT(LODWORD(capsule.end.v[0]) ^ _xmm) * outModelGroundPlane.v[0]) + capsule.start.v[0];
      v28->pointA.v[1] = (float)(v31 * outModelGroundPlane.v[1]) + capsule.start.v[1];
      v28->pointA.v[2] = (float)(v31 * outModelGroundPlane.v[2]) + capsule.start.v[2];
      v28->pointB.v[0] = (float)(COERCE_FLOAT(LODWORD(v30) ^ _xmm) * outModelGroundPlane.v[0]) + capsule.start.v[0];
      v28->pointB.v[1] = (float)(COERCE_FLOAT(LODWORD(v30) ^ _xmm) * outModelGroundPlane.v[1]) + capsule.start.v[1];
      v28->pointB.v[2] = (float)(COERCE_FLOAT(LODWORD(v30) ^ _xmm) * outModelGroundPlane.v[2]) + capsule.start.v[2];
      LODWORD(v29) = 1;
    }
    v11 += v29;
    if ( v11 > maxContacts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1174, ASSERT_TYPE_ASSERT, "(numShapeContacts + numContacts <= maxContacts)", (const char *)&queryFormat, "numShapeContacts + numContacts <= maxContacts") )
      __debugbreak();
    v29 = (int)v29;
    v32 = &v28->pointA.v[2];
    do
    {
      *((_BYTE *)v32 - 12) = truncate_cast<unsigned char,unsigned int>(v21);
      *((_BYTE *)v32 - 11) = 1;
      v33 = *(v32 - 1) - p_boneIndex[12];
      in.v[0] = *(v32 - 2) - p_boneIndex[11];
      in.v[2] = *v32 - p_boneIndex[13];
      in.v[1] = v33;
      QuatTransform(&quat, &in, (vec3_t *)(v32 - 2));
      v32 += 10;
      --v29;
    }
    while ( v29 );
    if ( v11 >= maxContacts )
      return (unsigned int)v11;
LABEL_62:
    v27 = outContacts;
    goto LABEL_63;
  }
  return 0i64;
}

/*
==============
XAnimBonePhysics_PreTransformCollidableBoneShapes
==============
*/
void XAnimBonePhysics_PreTransformCollidableBoneShapes(const DObjProceduralBones *procBones, const DObjAnimMat *collidableBoneTransforms, XAnimCollisionShape *outShapes, unsigned int maxShapes)
{
  const DObjProceduralBones *v4; 
  __int64 v5; 
  unsigned int numModels; 
  const DObjAnimMat *v7; 
  unsigned int v8; 
  XAnimCollisionShape *v9; 
  __int64 v10; 
  char *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  const vec4_t *p_quat; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  __int64 v25; 
  __int64 i; 
  __int64 v27; 
  char *v28; 
  XAnimCollisionShape *v31; 

  v31 = outShapes;
  v4 = procBones;
  v5 = maxShapes;
  numModels = procBones->numModels;
  v7 = collidableBoneTransforms;
  v22 = numModels;
  if ( v4->numCollidableBoneCollisionShapes >= maxShapes )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1000, ASSERT_TYPE_ASSERT, "(unsigned)( procBones->numCollidableBoneCollisionShapes ) < (unsigned)( maxShapes )", "procBones->numCollidableBoneCollisionShapes doesn't index maxShapes\n\t%i not in [0, %i)", v4->numCollidableBoneCollisionShapes, maxShapes) )
      __debugbreak();
    numModels = v22;
    v7 = collidableBoneTransforms;
    outShapes = v31;
  }
  if ( !v4->numCollidableBones )
    return;
  v8 = 0;
  v23 = 0;
  v9 = outShapes;
  if ( !numModels )
    return;
  v10 = 0i64;
  for ( i = 0i64; ; i += 32i64 )
  {
    v11 = (char *)v4->modelInfo + v10;
    v28 = v11;
    v12 = *((_QWORD *)v11 + 1);
    v27 = v12;
    if ( v12 )
    {
      v24 = *(_DWORD *)(v12 + 24);
      if ( v24 )
        break;
    }
LABEL_24:
    ++v8;
    v7 = collidableBoneTransforms;
    v10 = i + 32;
    v23 = v8;
    if ( v8 >= v22 )
      return;
  }
  v13 = *(_QWORD *)(v12 + 48);
  v14 = 0;
  v25 = v13;
  v15 = 0i64;
  while ( 1 )
  {
    v16 = v14 + (unsigned __int8)v11[22];
    if ( v4->collidableBoneInfo[v16].boneIndex != 255 )
      break;
LABEL_22:
    v13 = v25;
    ++v14;
    v12 = v27;
    v15 += 12i64;
    v11 = v28;
    v7 = collidableBoneTransforms;
    if ( v14 >= v24 )
    {
      v8 = v23;
      goto LABEL_24;
    }
  }
  v17 = *(_QWORD *)(v12 + 32);
  p_quat = &v7[(unsigned int)v16].quat;
  if ( (unsigned int)v16 >= v4->numCollidableBones )
  {
    LODWORD(v21) = v4->numCollidableBones;
    LODWORD(v20) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 1033, ASSERT_TYPE_ASSERT, "(unsigned)( modelInfo->firstCollidableBoneIndex + modelCollidableBoneIndex ) < (unsigned)( procBones->numCollidableBones )", "modelInfo->firstCollidableBoneIndex + modelCollidableBoneIndex doesn't index procBones->numCollidableBones\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
    v13 = v25;
  }
  v19 = 0;
  if ( !*(_DWORD *)(v17 + v15 + 8) )
  {
LABEL_21:
    v4 = procBones;
    goto LABEL_22;
  }
  while ( 1 )
  {
    XAnimBonePhysics_TransformCollisionShape((const XAnimCollisionShape *)(v13 + 32i64 * (unsigned int)(v19 + *(_DWORD *)(v17 + v15 + 4))), p_quat, (const vec3_t *)&p_quat[1], v9++);
    if ( v9 - v31 >= v5 )
      break;
    v13 = v25;
    if ( (unsigned int)++v19 >= *(_DWORD *)(v17 + v15 + 8) )
    {
      v5 = maxShapes;
      goto LABEL_21;
    }
  }
}

/*
==============
XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj
==============
*/
void XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseDobj(const DObj *dobj, const DObjProceduralBones *procBones, DObjAnimMat *outTransforms, const unsigned int maxTransforms)
{
  unsigned int v4; 
  unsigned int numCollidableBones; 
  const DObjProceduralBones *v7; 
  DObjAnimMat *RotTransArray; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t *v16; 
  __int64 v17; 
  unsigned __int16 boneIndex; 
  int v19; 
  DObjAnimMat *SkelBoneMatrix; 
  vec4_t *p_z; 
  DObjAnimMat *v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  __int64 v34; 
  vec3_t out; 
  vec4_t quat; 
  vec3_t in; 

  v4 = 0;
  numCollidableBones = maxTransforms;
  v7 = procBones;
  if ( procBones->numCollidableBones > maxTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 945, ASSERT_TYPE_ASSERT, "( 0 ) <= ( procBones->numCollidableBones ) && ( procBones->numCollidableBones ) <= ( maxTransforms )", "procBones->numCollidableBones not in [0, maxTransforms]\n\t%i not in [%i, %i]", procBones->numCollidableBones, 0i64, maxTransforms) )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 946, ASSERT_TYPE_ASSERT, "(dobj != 0)", (const char *)&queryFormat, "dobj != NULL") )
    __debugbreak();
  if ( !outTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 948, ASSERT_TYPE_ASSERT, "(outTransforms != 0)", (const char *)&queryFormat, "outTransforms != NULL") )
    __debugbreak();
  RotTransArray = DObjGetRotTransArray(dobj);
  if ( v7->numCollidableBones <= numCollidableBones )
    numCollidableBones = v7->numCollidableBones;
  v10 = RotTransArray->quat.v[0];
  v11 = RotTransArray->quat.v[1];
  v12 = RotTransArray->quat.v[2];
  v13 = RotTransArray->quat.v[3];
  in = RotTransArray->trans;
  v14 = fsqrt((float)((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12)) + (float)(v13 * v13));
  if ( v14 != 0.0 )
  {
    v15 = 1.0 / v14;
    v10 = v15 * v10;
    v11 = v15 * v11;
    v12 = v15 * v12;
    v13 = v13 * v15;
  }
  LODWORD(quat.v[0]) = LODWORD(v10) ^ _xmm;
  LODWORD(quat.v[2]) = LODWORD(v12) ^ _xmm;
  LODWORD(quat.v[1]) = LODWORD(v11) ^ _xmm;
  quat.v[3] = v13;
  QuatTransform(&quat, &in, &out);
  LODWORD(out.v[0]) ^= _xmm;
  LODWORD(out.v[2]) ^= _xmm;
  LODWORD(out.v[1]) ^= _xmm;
  if ( numCollidableBones )
  {
    v16 = (vec3_t *)&outTransforms->quat.xyz.v[1];
    v17 = 0i64;
    do
    {
      boneIndex = v7->collidableBoneInfo[v17].boneIndex;
      if ( boneIndex != 255 )
      {
        v19 = boneIndex;
        if ( !DObjIsValidBoneIndex(dobj, boneIndex) )
        {
          LODWORD(v34) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 979, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( dobj, boneIndex ) ) )", "( boneIndex ) = %i", v34) )
            __debugbreak();
        }
        SkelBoneMatrix = DObjGetSkelBoneMatrix(dobj, v19);
        p_z = (vec4_t *)&v16[-1].z;
        v22 = SkelBoneMatrix;
        if ( SkelBoneMatrix == (DObjAnimMat *)&v16[-1].z && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        if ( &quat == p_z && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
          __debugbreak();
        v23 = quat.v[1];
        v24 = quat.v[3];
        v25 = quat.v[0];
        v26 = quat.v[2];
        v27 = (float)((float)((float)(quat.v[3] * v22->quat.v[0]) + (float)(quat.v[0] * v22->quat.v[3])) + (float)(quat.v[1] * v22->quat.v[2])) - (float)(quat.v[2] * v22->quat.v[1]);
        p_z->v[0] = v27;
        v28 = (float)((float)((float)(v24 * v22->quat.v[1]) - (float)(v25 * v22->quat.v[2])) + (float)(v23 * v22->quat.v[3])) + (float)(v26 * v22->quat.v[0]);
        v16->v[0] = v28;
        v29 = (float)((float)((float)(v25 * v22->quat.v[1]) + (float)(v24 * v22->quat.v[2])) - (float)(v23 * v22->quat.v[0])) + (float)(v26 * v22->quat.v[3]);
        v16->v[1] = v29;
        v30 = (float)((float)((float)(v24 * v22->quat.v[3]) - (float)(v25 * v22->quat.v[0])) - (float)(v23 * v22->quat.v[1])) - (float)(v26 * v22->quat.v[2]);
        v31 = fsqrt((float)((float)((float)(v28 * v28) + (float)(v27 * v27)) + (float)(v29 * v29)) + (float)(v30 * v30));
        v16->v[2] = v30;
        if ( v31 != 0.0 )
        {
          p_z->v[0] = v27 * (float)(1.0 / v31);
          v16->v[0] = v28 * (float)(1.0 / v31);
          v16->v[1] = v29 * (float)(1.0 / v31);
          v16->v[2] = v30 * (float)(1.0 / v31);
        }
        QuatTransform(&quat, &v22->trans, v16 + 1);
        v32 = out.v[1];
        v33 = out.v[2];
        v7 = procBones;
        v16[1].v[0] = out.v[0] + v16[1].v[0];
        v16[1].v[1] = v32 + v16[1].v[1];
        v16[1].v[2] = v33 + v16[1].v[2];
      }
      ++v4;
      ++v17;
      v16 = (vec3_t *)((char *)v16 + 32);
    }
    while ( v4 < numCollidableBones );
  }
}

/*
==============
XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams
==============
*/
void XAnimBonePhysics_SnapshotCollidableBoneTransforms_UseProcNodeParams(XAnimProcNodeCalcParams *params, const DObjProceduralBones *procBones, DObjAnimMat *outTransforms, const unsigned int maxTransforms)
{
  unsigned int v4; 
  unsigned int numCollidableBones; 
  float *v10; 
  __int64 v11; 
  unsigned __int16 boneIndex; 
  int v13; 
  vec4_t *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float4 *outModelTranslation; 
  vec4_t outInvQuat; 
  __m128 v; 
  vec3_t trans; 
  vec3_t in; 
  vec3_t outInvTrans; 
  float4 outModelQuat; 
  float4 v30; 
  vec4_t quat; 
  float4 v32; 
  float4 v33; 

  v4 = 0;
  numCollidableBones = maxTransforms;
  if ( procBones->numCollidableBones > maxTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 885, ASSERT_TYPE_ASSERT, "( 0 ) <= ( procBones->numCollidableBones ) && ( procBones->numCollidableBones ) <= ( maxTransforms )", "procBones->numCollidableBones not in [0, maxTransforms]\n\t%i not in [%i, %i]", procBones->numCollidableBones, 0i64, maxTransforms) )
    __debugbreak();
  if ( !params->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 886, ASSERT_TYPE_ASSERT, "(params->obj != 0)", (const char *)&queryFormat, "params->obj != NULL") )
    __debugbreak();
  if ( !outTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 888, ASSERT_TYPE_ASSERT, "(outTransforms != 0)", (const char *)&queryFormat, "outTransforms != NULL") )
    __debugbreak();
  if ( procBones->numCollidableBones <= numCollidableBones )
    numCollidableBones = procBones->numCollidableBones;
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, 0, &outModelQuat, &v30);
  _XMM1 = v30.v;
  trans.v[0] = v30.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rsp+1D0h+trans+4], xmm1, 1
    vextractps dword ptr [rsp+1D0h+trans+8], xmm1, 2
  }
  quat = (vec4_t)outModelQuat.v;
  QuatTrans_Inverse(&quat, &trans, &outInvQuat, &outInvTrans);
  if ( numCollidableBones )
  {
    v10 = &outTransforms->trans.v[2];
    v11 = 0i64;
    do
    {
      boneIndex = procBones->collidableBoneInfo[v11].boneIndex;
      if ( boneIndex != 255 )
      {
        v13 = boneIndex;
        if ( !DObjIsValidBoneIndex(params->obj, boneIndex) )
        {
          LODWORD(outModelTranslation) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 923, ASSERT_TYPE_ASSERT, "( ( DObjIsValidBoneIndex( params->obj, boneIndex ) ) )", "( boneIndex ) = %i", outModelTranslation) )
            __debugbreak();
        }
        XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v13, &v32, &v33);
        _XMM1 = v33.v;
        v15 = (vec4_t *)(v10 - 6);
        in.v[0] = v33.v.m128_f32[0];
        __asm
        {
          vextractps dword ptr [rsp+1D0h+in+4], xmm1, 1
          vextractps dword ptr [rsp+1D0h+in+8], xmm1, 2
        }
        v = v32.v;
        if ( &v == (__m128 *)(v10 - 6) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 722, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
          __debugbreak();
        if ( &outInvQuat == v15 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 723, ASSERT_TYPE_SANITY, "( &in2 != &out )", (const char *)&queryFormat, "&in2 != &out") )
          __debugbreak();
        v16 = (float)((float)((float)(outInvQuat.v[0] * v.m128_f32[3]) + (float)(outInvQuat.v[3] * v.m128_f32[0])) + (float)(outInvQuat.v[1] * v.m128_f32[2])) - (float)(outInvQuat.v[2] * v.m128_f32[1]);
        v17 = (float)((float)((float)(v.m128_f32[1] * outInvQuat.v[3]) - (float)(v.m128_f32[2] * outInvQuat.v[0])) + (float)(outInvQuat.v[1] * v.m128_f32[3])) + (float)(outInvQuat.v[2] * v.m128_f32[0]);
        v18 = (float)((float)((float)(v.m128_f32[1] * outInvQuat.v[0]) + (float)(v.m128_f32[2] * outInvQuat.v[3])) - (float)(outInvQuat.v[1] * v.m128_f32[0])) + (float)(outInvQuat.v[2] * v.m128_f32[3]);
        v19 = (float)((float)((float)(v.m128_f32[3] * outInvQuat.v[3]) - (float)(outInvQuat.v[0] * v.m128_f32[0])) - (float)(v.m128_f32[1] * outInvQuat.v[1])) - (float)(outInvQuat.v[2] * v.m128_f32[2]);
        v20 = fsqrt((float)((float)((float)(v17 * v17) + (float)(v16 * v16)) + (float)(v18 * v18)) + (float)(v19 * v19));
        v15->v[0] = v16;
        *(v10 - 5) = v17;
        *(v10 - 4) = v18;
        *(v10 - 3) = v19;
        if ( v20 != 0.0 )
        {
          v15->v[0] = (float)(1.0 / v20) * v16;
          *(v10 - 5) = (float)(1.0 / v20) * v17;
          *(v10 - 4) = (float)(1.0 / v20) * v18;
          *(v10 - 3) = (float)(1.0 / v20) * v19;
        }
        QuatTransform(&outInvQuat, &in, (vec3_t *)(v10 - 2));
        v21 = outInvTrans.v[1];
        v22 = outInvTrans.v[2];
        *(v10 - 2) = outInvTrans.v[0] + *(v10 - 2);
        *(v10 - 1) = v21 + *(v10 - 1);
        *v10 = v22 + *v10;
      }
      ++v4;
      ++v11;
      v10 += 8;
    }
    while ( v4 < numCollidableBones );
  }
}

/*
==============
XAnimBonePhysics_TestCapsuleAxisAlignedBoxAtOrigin
==============
*/
__int64 XAnimBonePhysics_TestCapsuleAxisAlignedBoxAtOrigin(const XAnimCapsuleCollisionShape *capsule, const vec3_t *boxExtents, XAnimCollisionContact *outContacts, const int maxContacts)
{
  float v16; 
  float v24; 
  float v25; 
  float v26; 
  __int128 v27; 
  __int128 v28; 
  float v29; 
  int v30; 
  char v31; 
  unsigned int v33; 
  unsigned int v34; 
  __int64 v35; 
  bool v36; 
  int v37; 
  const vec3_t *v38; 
  bool v39; 
  float *v40; 
  float v41; 
  __int128 v43; 
  float v47; 
  float v48; 
  __int128 v49; 
  float v53; 
  __int128 v55; 
  float v59; 
  __int128 v60; 
  bool v64; 
  float NearestPointSegmentAlignedBoxEdge; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
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
  float NearestPointOnAlignedBoxFace; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  vec3_t *outContactPointSeg; 
  vec3_t *outContactPointSega; 
  vec3_t *outContactPointSegb; 
  vec3_t *outContactPointSegc; 
  vec3_t *outContactPointSegd; 
  vec3_t *outContactPointBox; 
  vec3_t *outContactPointBoxa; 
  vec3_t *outContactPointBoxb; 
  vec3_t *outContactPointBoxc; 
  vec3_t *outContactPointBoxd; 
  int v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  vec3_t p; 
  vec3_t v123; 
  vec3_t segStart; 
  vec3_t v125; 
  vec3_t v126; 
  vec3_t v127; 
  vec3_t outNormal; 
  vec3_t v129; 
  vec3_t v130; 
  int v131[4]; 
  vec3_t segMidPoint; 
  int v133[4]; 
  vec3_t outFaceNormal; 
  vec3_t outContactPoint; 

  *(_QWORD *)v123.v = outContacts;
  *(_QWORD *)segStart.v = capsule;
  if ( maxContacts <= 0 )
    return 0i64;
  _XMM2 = LODWORD(boxExtents->v[0]);
  __asm { vminss  xmm0, xmm2, dword ptr [rcx] }
  _XMM3 = LODWORD(boxExtents->v[1]);
  _XMM5 = LODWORD(boxExtents->v[2]);
  _XMM7 = LODWORD(capsule->end.v[0]);
  _XMM9 = LODWORD(capsule->end.v[2]);
  __asm
  {
    vmaxss  xmm8, xmm0, xmm1
    vminss  xmm0, xmm3, dword ptr [rcx+4]
    vmaxss  xmm0, xmm0, xmm4
  }
  p.v[1] = *(float *)&_XMM0;
  __asm
  {
    vminss  xmm0, xmm5, dword ptr [rcx+8]
    vmaxss  xmm0, xmm0, xmm6
  }
  p.v[2] = *(float *)&_XMM0;
  v16 = *(float *)&_XMM0;
  __asm
  {
    vminss  xmm0, xmm7, xmm2
    vmaxss  xmm14, xmm0, xmm1
  }
  v131[2] = LODWORD(p.v[2]) & _xmm;
  p.v[0] = *(float *)&_XMM8;
  _XMM8 = LODWORD(capsule->end.v[1]);
  __asm
  {
    vminss  xmm0, xmm8, xmm3
    vmaxss  xmm15, xmm0, xmm4
  }
  v133[1] = _XMM15 & _xmm;
  __asm
  {
    vminss  xmm0, xmm9, xmm5
    vmaxss  xmm4, xmm0, xmm6
  }
  v131[0] = LODWORD(p.v[0]) & _xmm;
  v131[1] = LODWORD(p.v[1]) & _xmm;
  v133[0] = _XMM14 & _xmm;
  v133[2] = _XMM4 & _xmm;
  segMidPoint.v[0] = (float)((float)(*(float *)&_XMM14 - p.v[0]) * 0.5) + p.v[0];
  *(float *)&_XMM3 = v16 - capsule->start.v[2];
  segMidPoint.v[1] = (float)((float)(*(float *)&_XMM15 - p.v[1]) * 0.5) + p.v[1];
  v116 = p.v[0] - capsule->start.v[0];
  v24 = p.v[1];
  v117 = p.v[1] - capsule->start.v[1];
  v114 = v116 * v116;
  segMidPoint.v[2] = (float)((float)(*(float *)&_XMM4 - p.v[2]) * 0.5) + p.v[2];
  v118 = *(float *)&_XMM3;
  v25 = *(float *)&_XMM3 * *(float *)&_XMM3;
  v26 = (float)((float)(v116 * v116) + (float)(v117 * v117)) + v25;
  v28 = _XMM14;
  *(float *)&v28 = *(float *)&_XMM14 - *(float *)&_XMM7;
  v27 = v28;
  v29 = *(float *)&_XMM4 - *(float *)&_XMM9;
  v120 = *(float *)&_XMM15 - *(float *)&_XMM8;
  v115 = v117 * v117;
  v119 = (float)(*(float *)&_XMM15 - *(float *)&_XMM8) * (float)(*(float *)&_XMM15 - *(float *)&_XMM8);
  v127.v[0] = *(float *)&_XMM14;
  v127.v[1] = *(float *)&_XMM15;
  v127.v[2] = *(float *)&_XMM4;
  v30 = 0;
  v31 = 0;
  v113 = 0;
  *(float *)&v28 = (float)((float)(*(float *)&v28 * *(float *)&v28) + v119) + (float)(v29 * v29);
  _XMM7 = v28;
  v33 = 1;
  v34 = 0;
  v35 = 0i64;
  v36 = 1;
  do
  {
    if ( !v36 )
    {
      LODWORD(outContactPointBox) = 3;
      LODWORD(outContactPointSeg) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSeg, outContactPointBox) )
        __debugbreak();
      LODWORD(outContactPointBoxa) = 3;
      LODWORD(outContactPointSega) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSega, outContactPointBoxa) )
        __debugbreak();
    }
    if ( v127.v[v35] == p.v[v35] )
    {
      if ( v34 >= 3 )
      {
        LODWORD(outContactPointBox) = 3;
        LODWORD(outContactPointSeg) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSeg, outContactPointBox) )
          __debugbreak();
        LODWORD(outContactPointBoxb) = 3;
        LODWORD(outContactPointSegb) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSegb, outContactPointBoxb) )
          __debugbreak();
      }
      if ( boxExtents->v[v35] == *(float *)&v131[v35] )
        v31 = 1;
    }
    if ( v34 >= 3 )
    {
      LODWORD(outContactPointBox) = 3;
      LODWORD(outContactPointSeg) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSeg, outContactPointBox) )
        __debugbreak();
      LODWORD(outContactPointBoxc) = 3;
      LODWORD(outContactPointSegc) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSegc, outContactPointBoxc) )
        __debugbreak();
    }
    if ( boxExtents->v[v35] == *(float *)&v131[v35] )
      ++v30;
    if ( v34 >= 3 )
    {
      LODWORD(outContactPointBox) = 3;
      LODWORD(outContactPointSeg) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSeg, outContactPointBox) )
        __debugbreak();
      LODWORD(outContactPointBoxd) = 3;
      LODWORD(outContactPointSegd) = v34;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outContactPointSegd, outContactPointBoxd) )
        __debugbreak();
    }
    v37 = v113;
    if ( boxExtents->v[v35] == *(float *)&v133[v35] )
      v37 = ++v113;
    ++v34;
    ++v35;
    v36 = v34 < 3;
  }
  while ( (int)v34 < 3 );
  v38 = *(const vec3_t **)segStart.v;
  v39 = v31 == 0;
  v40 = *(float **)v123.v;
  if ( !v39 )
  {
    v41 = *(float *)(*(_QWORD *)segStart.v + 24i64) * *(float *)(*(_QWORD *)segStart.v + 24i64);
    __asm { vminss  xmm1, xmm7, xmm6 }
    if ( *(float *)&_XMM1 <= v41 )
    {
      if ( v26 >= v41 || *(float *)&_XMM7 >= v41 )
      {
        if ( v26 >= *(float *)&_XMM7 )
        {
          v59 = v127.v[2];
          *(float *)(*(_QWORD *)v123.v + 16i64) = *(float *)&_XMM14;
          v40[5] = *(float *)&_XMM15;
          v40[6] = v59;
          v60 = v27;
          *(float *)&v60 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) + v119) + (float)(v29 * v29));
          _XMM2 = v60;
          __asm
          {
            vcmpless xmm0, xmm2, cs:__real@80000000
            vblendvps xmm0, xmm2, xmm1, xmm0
          }
          v40[8] = (float)(1.0 / *(float *)&_XMM0) * v120;
          *(float *)&v60 = *(float *)&v27 * (float)(1.0 / *(float *)&_XMM0);
          v40[7] = *(float *)&v60;
          v40[9] = (float)(1.0 / *(float *)&_XMM0) * v29;
          *(float *)&_XMM2 = v38[2].v[0];
          v40[1] = (float)(*(float *)&_XMM2 * *(float *)&v60) + v38[1].v[0];
          v40[2] = (float)(*(float *)&_XMM2 * v40[8]) + v38[1].v[1];
          v40[3] = (float)(*(float *)&_XMM2 * v40[9]) + v38[1].v[2];
        }
        else
        {
          v55 = LODWORD(v114);
          *(float *)(*(_QWORD *)v123.v + 16i64) = p.v[0];
          v40[5] = v24;
          v40[6] = v16;
          *(float *)&v55 = fsqrt((float)(v114 + v115) + v25);
          _XMM2 = v55;
          __asm
          {
            vcmpless xmm0, xmm2, cs:__real@80000000
            vblendvps xmm0, xmm2, xmm1, xmm0
          }
          *(float *)&v55 = (float)(1.0 / *(float *)&_XMM0) * v116;
          v40[8] = (float)(1.0 / *(float *)&_XMM0) * v117;
          v40[7] = *(float *)&v55;
          v40[9] = (float)(1.0 / *(float *)&_XMM0) * v118;
          *(float *)&_XMM2 = v38[2].v[0];
          v40[1] = (float)(*(float *)&_XMM2 * *(float *)&v55) + v38->v[0];
          v40[2] = (float)(*(float *)&_XMM2 * v40[8]) + v38->v[1];
          v40[3] = (float)(*(float *)&_XMM2 * v40[9]) + v38->v[2];
        }
        return 1i64;
      }
      else
      {
        v43 = LODWORD(v114);
        *(float *)(*(_QWORD *)v123.v + 16i64) = p.v[0];
        v40[5] = v24;
        v40[6] = v16;
        *(float *)&v43 = fsqrt((float)(v114 + v115) + v25);
        _XMM2 = v43;
        __asm
        {
          vcmpless xmm0, xmm2, xmm5
          vblendvps xmm0, xmm2, xmm4, xmm0
        }
        *(float *)&v43 = (float)(1.0 / *(float *)&_XMM0) * v116;
        v40[8] = (float)(1.0 / *(float *)&_XMM0) * v117;
        v40[9] = (float)(1.0 / *(float *)&_XMM0) * v118;
        v40[7] = *(float *)&v43;
        v47 = v38[2].v[0];
        v40[1] = (float)(v47 * *(float *)&v43) + v38->v[0];
        v40[2] = (float)(v47 * v40[8]) + v38->v[1];
        v40[3] = (float)(v47 * v40[9]) + v38->v[2];
        if ( maxContacts > 1 )
        {
          v48 = v127.v[2];
          v40[14] = *(float *)&_XMM14;
          v40[15] = *(float *)&_XMM15;
          v40[16] = v48;
          v49 = v27;
          *(float *)&v49 = fsqrt((float)((float)(*(float *)&v27 * *(float *)&v27) + v119) + (float)(v29 * v29));
          _XMM2 = v49;
          __asm
          {
            vcmpless xmm0, xmm2, xmm5
            vblendvps xmm0, xmm2, xmm4, xmm0
          }
          v40[18] = (float)(1.0 / *(float *)&_XMM0) * v120;
          *(float *)&v49 = *(float *)&v27 * (float)(1.0 / *(float *)&_XMM0);
          v40[17] = *(float *)&v49;
          v40[19] = (float)(1.0 / *(float *)&_XMM0) * v29;
          v53 = v38[2].v[0];
          v40[11] = (float)(v53 * *(float *)&v49) + v38[1].v[0];
          v40[12] = (float)(v53 * v40[18]) + v38[1].v[1];
          v40[13] = (float)(v53 * v40[19]) + v38[1].v[2];
          return 2;
        }
        return v33;
      }
    }
    if ( v37 == 1 && v30 == 1 )
      return 0i64;
  }
  v64 = v26 < 0.001;
  if ( v26 < 0.001 || *(float *)&_XMM7 < 0.001 )
  {
    NearestPointOnAlignedBoxFace = FindNearestPointOnAlignedBoxFace(&p, boxExtents, &v123, &segStart);
    v84 = FindNearestPointOnAlignedBoxFace(&v127, boxExtents, &v125, &v126);
    v85 = v84;
    if ( v64 )
    {
      if ( *(float *)&_XMM7 < 0.001 )
      {
        if ( NearestPointOnAlignedBoxFace > v84 )
        {
LABEL_56:
          v86 = v123.v[1];
          v40[7] = v123.v[0];
          v87 = v123.v[2];
          v40[8] = v86;
          v88 = segStart.v[0];
          v40[9] = v87;
          v89 = segStart.v[1];
          v40[4] = v88;
          v90 = segStart.v[2];
LABEL_62:
          v40[6] = v90;
          v40[5] = v89;
          goto LABEL_63;
        }
LABEL_61:
        v99 = v125.v[1];
        v40[7] = v125.v[0];
        v100 = v125.v[2];
        v40[8] = v99;
        v101 = v126.v[0];
        v40[9] = v100;
        v89 = v126.v[1];
        v40[4] = v101;
        v90 = v126.v[2];
        NearestPointOnAlignedBoxFace = v85;
        goto LABEL_62;
      }
      v91 = p.v[0];
      v92 = v125.v[1];
      v93 = v125.v[0];
      v94 = (float)((float)((float)(v24 - v126.v[1]) * v125.v[1]) + (float)((float)(p.v[0] - v126.v[0]) * v125.v[0])) + (float)((float)(v16 - v126.v[2]) * v125.v[2]);
      if ( v94 >= NearestPointOnAlignedBoxFace )
        goto LABEL_56;
      v40[9] = v125.v[2];
      v40[7] = v93;
      v40[8] = v92;
      v40[4] = (float)(COERCE_FLOAT(LODWORD(v94) ^ _xmm) * v93) + v91;
      v40[5] = (float)(COERCE_FLOAT(LODWORD(v94) ^ _xmm) * v40[8]) + v24;
      v40[6] = (float)(COERCE_FLOAT(LODWORD(v94) ^ _xmm) * v40[9]) + v16;
      NearestPointOnAlignedBoxFace = v94;
    }
    else
    {
      v95 = v123.v[1];
      v96 = v123.v[0];
      v97 = v127.v[2];
      v98 = (float)((float)((float)(*(float *)&_XMM15 - segStart.v[1]) * v123.v[1]) + (float)((float)(*(float *)&_XMM14 - segStart.v[0]) * v123.v[0])) + (float)((float)(v127.v[2] - segStart.v[2]) * v123.v[2]);
      NearestPointOnAlignedBoxFace = v98;
      if ( v98 >= v84 )
        goto LABEL_61;
      v40[9] = v123.v[2];
      v40[7] = v96;
      v40[8] = v95;
      v40[4] = (float)(COERCE_FLOAT(LODWORD(v98) ^ _xmm) * v96) + *(float *)&_XMM14;
      v40[5] = (float)(COERCE_FLOAT(LODWORD(v98) ^ _xmm) * v40[8]) + *(float *)&_XMM15;
      v40[6] = (float)(COERCE_FLOAT(LODWORD(v98) ^ _xmm) * v40[9]) + v97;
    }
LABEL_63:
    v102 = NearestPointOnAlignedBoxFace + v38[2].v[0];
    v40[1] = (float)(v102 * v40[7]) + v40[4];
    v40[2] = (float)(v102 * v40[8]) + v40[5];
    v40[3] = (float)(v102 * v40[9]) + v40[6];
    return 1i64;
  }
  NearestPointSegmentAlignedBoxEdge = FindNearestPointSegmentAlignedBoxEdge(*(const vec3_t **)segStart.v, (const vec3_t *)(*(_QWORD *)segStart.v + 12i64), &segMidPoint, boxExtents, &outNormal, &v129, &v130);
  if ( !TestSegmentAlignedBoxAtOrigin(v38, v38 + 1, boxExtents) )
  {
    if ( NearestPointSegmentAlignedBoxEdge <= v38[2].v[0] )
    {
      v77 = outNormal.v[0];
      v78 = outNormal.v[1];
      v79 = outNormal.v[2];
      v40[7] = outNormal.v[0];
      v40[8] = v78;
      v40[9] = v79;
      v80 = v38[2].v[0];
      v40[1] = (float)(v77 * v80) + v129.v[0];
      v40[2] = (float)(v78 * v80) + v129.v[1];
      v81 = v130.v[0];
      v82 = v130.v[1];
      v40[3] = (float)(v79 * v80) + v129.v[2];
      v40[4] = v81;
      v40[6] = v130.v[2];
      v40[5] = v82;
      return 1i64;
    }
    return 0i64;
  }
  v66 = FindNearestPointOnAlignedBoxFace(&segMidPoint, boxExtents, &outFaceNormal, &outContactPoint);
  if ( v66 >= NearestPointSegmentAlignedBoxEdge )
  {
    v71 = outNormal.v[1];
    v40[7] = COERCE_FLOAT(LODWORD(outNormal.v[0]) ^ _xmm);
    v72 = outNormal.v[2];
    v40[8] = COERCE_FLOAT(LODWORD(v71) ^ _xmm);
    v73 = v130.v[0];
    LODWORD(v74) = LODWORD(v72) ^ _xmm;
    v75 = v130.v[1];
    v40[9] = v74;
    v40[5] = v75;
    v40[4] = v73;
    v40[6] = v130.v[2];
    v76 = v38[2].v[0];
    v40[1] = (float)(v76 * v40[7]) + v129.v[0];
    v40[2] = (float)(v76 * v40[8]) + v129.v[1];
    v40[3] = (float)(v76 * v40[9]) + v129.v[2];
  }
  else
  {
    v67 = outFaceNormal.v[1];
    v68 = outContactPoint.v[0];
    v40[7] = outFaceNormal.v[0];
    v40[9] = outFaceNormal.v[2];
    v69 = outContactPoint.v[1];
    v40[8] = v67;
    v40[4] = v68;
    v40[6] = outContactPoint.v[2];
    v40[5] = v69;
    v70 = v66 + v38[2].v[0];
    v40[1] = (float)(v70 * v40[7]) + v40[4];
    v40[2] = (float)(v70 * v40[8]) + v40[5];
    v40[3] = (float)(v70 * v40[9]) + v40[6];
  }
  return 1i64;
}

/*
==============
XAnimBonePhysics_TestCapsuleCapsule
==============
*/
__int64 XAnimBonePhysics_TestCapsuleCapsule(const XAnimCapsuleCollisionShape *capsuleA, const XAnimCapsuleCollisionShape *capsuleB, XAnimCollisionContact *outContacts, const int maxContacts)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  float v31; 
  float v32; 
  float v33; 
  __int128 v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v43; 
  float v44; 
  __int64 result; 
  float v46; 
  float v47; 
  float v48; 
  __int128 v49; 
  float v50; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  __int128 v60; 
  float v63; 
  float radius; 
  float v65; 
  float t0; 
  float t1; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  vec3_t v76; 
  vec3_t pointOut; 
  vec3_t segHalfDir; 
  vec3_t segMidPoint; 

  if ( maxContacts <= 0 )
    return 0i64;
  v8 = capsuleA->end.v[0];
  v9 = capsuleA->start.v[0];
  v10 = capsuleA->end.v[1];
  v11 = capsuleA->start.v[1];
  v12 = capsuleA->end.v[2];
  v13 = capsuleA->start.v[2];
  v14 = capsuleB->end.v[0] - capsuleB->start.v[0];
  v16 = LODWORD(capsuleB->end.v[1]);
  *(float *)&v16 = capsuleB->end.v[1] - capsuleB->start.v[1];
  v69 = capsuleB->end.v[2] - capsuleB->start.v[2];
  v15 = v69;
  v68 = *(float *)&v16;
  ClosestPointsTwoSegs(&capsuleA->start, &capsuleA->end, &capsuleB->start, &capsuleB->end, &t0, &t1);
  v17 = capsuleB->start.v[0];
  v18 = capsuleB->start.v[1];
  v19 = v8 - v9;
  v20 = capsuleB->start.v[2];
  v21 = (float)(v19 * t0) + capsuleA->start.v[0];
  v22 = (float)((float)(v10 - v11) * t0) + capsuleA->start.v[1];
  v23 = (float)((float)(v12 - v13) * t0) + capsuleA->start.v[2];
  v24 = (float)(v14 * t1) + capsuleB->start.v[0];
  v25 = (float)((float)(v15 * t1) + v20) - v23;
  v26 = v24 - v21;
  v75 = (float)(v15 * t1) + v20;
  v27 = capsuleA->radius + capsuleB->radius;
  v28 = (float)((float)(*(float *)&v16 * t1) + v18) - v22;
  v72 = v23;
  v74 = (float)(*(float *)&v16 * t1) + v18;
  v29 = v27 * v27;
  v70 = v21;
  v73 = v24;
  *(float *)&v16 = (float)((float)(v28 * v28) + (float)(v26 * v26)) + (float)(v25 * v25);
  v30 = v16;
  v71 = v22;
  if ( *(float *)&v16 > (float)(v27 * v27) )
    return 0i64;
  segMidPoint.v[0] = (float)(v14 * 0.5) + v17;
  segHalfDir.v[0] = v14 * 0.5;
  segMidPoint.v[2] = (float)(0.5 * v69) + v20;
  segHalfDir.v[1] = 0.5 * v68;
  segHalfDir.v[2] = 0.5 * v69;
  segMidPoint.v[1] = (float)(0.5 * v68) + v18;
  SegmentPointClosestToPoint(&capsuleA->start, &segMidPoint, &segHalfDir, &pointOut);
  SegmentPointClosestToPoint(&capsuleA->end, &segMidPoint, &segHalfDir, &v76);
  v31 = pointOut.v[0] - capsuleA->start.v[0];
  v34 = LODWORD(pointOut.v[1]);
  v32 = pointOut.v[1] - capsuleA->start.v[1];
  v33 = pointOut.v[2] - capsuleA->start.v[2];
  *(float *)&v34 = (float)((float)(v32 * v32) + (float)(v31 * v31)) + (float)(v33 * v33);
  if ( *(float *)&v34 > v29 || (float)((float)((float)((float)(v76.v[1] - capsuleA->end.v[1]) * (float)(v76.v[1] - capsuleA->end.v[1])) + (float)((float)(v76.v[0] - capsuleA->end.v[0]) * (float)(v76.v[0] - capsuleA->end.v[0]))) + (float)((float)(v76.v[2] - capsuleA->end.v[2]) * (float)(v76.v[2] - capsuleA->end.v[2]))) > v29 )
  {
    v56 = FLOAT_1_0;
    if ( *(float *)&v30 >= 0.001 )
    {
      v60 = v30;
      *(float *)&v60 = fsqrt(*(float *)&v30);
      _XMM2 = v60;
      __asm
      {
        vcmpless xmm0, xmm2, cs:__real@80000000
        vblendvps xmm0, xmm2, xmm1, xmm0
      }
      v63 = 1.0 / *(float *)&_XMM0;
      v57 = (float)(1.0 / *(float *)&_XMM0) * v25;
      v58 = v63 * v28;
      v56 = v63 * v26;
    }
    else
    {
      v57 = 0.0;
      v58 = 0.0;
    }
    outContacts->normal.v[0] = v56;
    outContacts->normal.v[1] = v58;
    outContacts->normal.v[2] = v57;
    radius = capsuleA->radius;
    outContacts->pointA.v[0] = (float)(radius * outContacts->normal.v[0]) + v70;
    outContacts->pointA.v[1] = (float)(radius * outContacts->normal.v[1]) + v71;
    outContacts->pointA.v[2] = (float)(radius * outContacts->normal.v[2]) + v72;
    LODWORD(v65) = LODWORD(capsuleB->radius) ^ _xmm;
    outContacts->pointB.v[0] = (float)(v65 * outContacts->normal.v[0]) + v73;
    outContacts->pointB.v[1] = (float)(v65 * outContacts->normal.v[1]) + v74;
    outContacts->pointB.v[2] = (float)(v65 * outContacts->normal.v[2]) + v75;
    return 1i64;
  }
  else
  {
    v35 = FLOAT_1_0;
    v36 = 0.0;
    if ( *(float *)&v34 >= 0.001 )
    {
      *(float *)&v34 = fsqrt(*(float *)&v34);
      _XMM1 = v34;
      __asm
      {
        vcmpless xmm0, xmm1, xmm9
        vblendvps xmm0, xmm1, xmm3, xmm0
      }
      *(float *)&_XMM1 = 1.0 / *(float *)&_XMM0;
      v37 = v33 * (float)(1.0 / *(float *)&_XMM0);
      v38 = *(float *)&_XMM1 * v32;
      v39 = *(float *)&_XMM1 * v31;
    }
    else
    {
      v37 = 0.0;
      v38 = 0.0;
      v39 = FLOAT_1_0;
    }
    outContacts->normal.v[0] = v39;
    outContacts->normal.v[1] = v38;
    outContacts->normal.v[2] = v37;
    v43 = capsuleA->radius;
    outContacts->pointA.v[0] = (float)(v43 * outContacts->normal.v[0]) + capsuleA->start.v[0];
    outContacts->pointA.v[1] = (float)(v43 * outContacts->normal.v[1]) + capsuleA->start.v[1];
    outContacts->pointA.v[2] = (float)(v43 * outContacts->normal.v[2]) + capsuleA->start.v[2];
    LODWORD(v44) = LODWORD(capsuleB->radius) ^ _xmm;
    outContacts->pointB.v[0] = (float)(v44 * outContacts->normal.v[0]) + pointOut.v[0];
    outContacts->pointB.v[1] = (float)(v44 * outContacts->normal.v[1]) + pointOut.v[1];
    result = 1i64;
    outContacts->pointB.v[2] = (float)(v44 * outContacts->normal.v[2]) + pointOut.v[2];
    if ( maxContacts > 1 )
    {
      v46 = v76.v[0] - capsuleA->end.v[0];
      v47 = v76.v[2] - capsuleA->end.v[2];
      v49 = LODWORD(v76.v[1]);
      v48 = v76.v[1] - capsuleA->end.v[1];
      *(float *)&v49 = (float)((float)(v48 * v48) + (float)(v46 * v46)) + (float)(v47 * v47);
      if ( *(float *)&v49 >= 0.001 )
      {
        *(float *)&v49 = fsqrt(*(float *)&v49);
        _XMM1 = v49;
        __asm
        {
          vcmpless xmm0, xmm1, xmm9
          vblendvps xmm0, xmm1, xmm3, xmm0
        }
        *(float *)&_XMM1 = 1.0 / *(float *)&_XMM0;
        v36 = (float)(1.0 / *(float *)&_XMM0) * v47;
        v50 = v48 * (float)(1.0 / *(float *)&_XMM0);
        v35 = v46 * *(float *)&_XMM1;
      }
      else
      {
        v50 = 0.0;
      }
      outContacts[1].normal.v[0] = v35;
      outContacts[1].normal.v[1] = v50;
      outContacts[1].normal.v[2] = v36;
      v54 = capsuleA->radius;
      outContacts[1].pointA.v[0] = (float)(v54 * outContacts[1].normal.v[0]) + capsuleA->end.v[0];
      outContacts[1].pointA.v[1] = (float)(v54 * outContacts[1].normal.v[1]) + capsuleA->end.v[1];
      outContacts[1].pointA.v[2] = (float)(v54 * outContacts[1].normal.v[2]) + capsuleA->end.v[2];
      LODWORD(v55) = LODWORD(capsuleB->radius) ^ _xmm;
      outContacts[1].pointB.v[0] = (float)(v55 * outContacts[1].normal.v[0]) + v76.v[0];
      outContacts[1].pointB.v[1] = (float)(v55 * outContacts[1].normal.v[1]) + v76.v[1];
      outContacts[1].pointB.v[2] = (float)(v55 * outContacts[1].normal.v[2]) + v76.v[2];
      return 2i64;
    }
  }
  return result;
}

/*
==============
XAnimBonePhysics_TestCapsuleOrientedBox
==============
*/
__int64 XAnimBonePhysics_TestCapsuleOrientedBox(const XAnimCapsuleCollisionShape *capsule, const XAnimBoxCollisionShape *box, const vec4_t *boxQuat, const vec3_t *boxTrans, bool flipNormalSign, XAnimCollisionContact *outContacts, const int maxContacts)
{
  int v11; 
  vec3_t *p_extents; 
  int v13; 
  int v14; 
  __int64 v15; 
  float *v16; 
  vec3_t outTransformedPoint; 
  vec3_t outInvTrans; 
  vec4_t outInvQuat; 
  XAnimCapsuleCollisionShape v20; 
  XAnimCollisionContact v21[2]; 

  if ( maxContacts <= 0 )
    return 0i64;
  v20.radius = capsule->radius;
  QuatTrans_TransformPoint(boxQuat, boxTrans, &box->center, &outTransformedPoint);
  QuatTrans_Inverse(boxQuat, &outTransformedPoint, &outInvQuat, &outInvTrans);
  QuatTrans_TransformPoint(&outInvQuat, &outInvTrans, &capsule->start, &v20.start);
  QuatTrans_TransformPoint(&outInvQuat, &outInvTrans, &capsule->end, &v20.end);
  v11 = 2;
  p_extents = &box->extents;
  if ( maxContacts < 2 )
    v11 = maxContacts;
  v13 = 0;
  v14 = XAnimBonePhysics_TestCapsuleAxisAlignedBoxAtOrigin(&v20, p_extents, v21, v11);
  v15 = v14;
  if ( v14 > 0 )
  {
    v16 = &outContacts->normal.v[2];
    do
    {
      QuatTrans_TransformPoint(boxQuat, &outTransformedPoint, &v21[v13].pointA, &outContacts[v13].pointA);
      QuatTrans_TransformPoint(boxQuat, &outTransformedPoint, &v21[v13].pointB, &outContacts[v13].pointB);
      QuatTransform(boxQuat, &v21[v13].normal, &outContacts[v13].normal);
      if ( flipNormalSign )
      {
        *(v16 - 2) = COERCE_FLOAT(*((_DWORD *)v16 - 2) ^ _xmm);
        *(v16 - 1) = COERCE_FLOAT(*((_DWORD *)v16 - 1) ^ _xmm);
        *v16 = COERCE_FLOAT(*(_DWORD *)v16 ^ _xmm);
      }
      ++v13;
      v16 += 10;
      --v15;
    }
    while ( v15 );
  }
  return (unsigned int)v14;
}

/*
==============
XAnimBonePhysics_TestCapsulePlane
==============
*/
__int64 XAnimBonePhysics_TestCapsulePlane(const XAnimCapsuleCollisionShape *capsule, const vec4_t *planeNormalDistance, XAnimCollisionContact *outContacts, int maxContacts)
{
  __int64 result; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float radius; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 

  if ( maxContacts <= 0 )
    return 0i64;
  v5 = planeNormalDistance->v[1];
  v6 = planeNormalDistance->v[2];
  v7 = (float)((float)((float)(planeNormalDistance->v[0] * capsule->start.v[0]) + (float)(v5 * capsule->start.v[1])) + (float)(v6 * capsule->start.v[2])) - planeNormalDistance->v[3];
  v9 = (float)((float)((float)(v5 * capsule->end.v[1]) + (float)(planeNormalDistance->v[0] * capsule->end.v[0])) + (float)(v6 * capsule->end.v[2])) - planeNormalDistance->v[3];
  v8 = v9;
  radius = capsule->radius;
  if ( v7 < 0.0 == v9 < 0.0 && radius < v7 && radius < v9 )
    return 0i64;
  outContacts->normal.v[0] = COERCE_FLOAT(LODWORD(planeNormalDistance->v[0]) ^ _xmm);
  outContacts->normal.v[1] = COERCE_FLOAT(LODWORD(planeNormalDistance->v[1]) ^ _xmm);
  outContacts->normal.v[2] = COERCE_FLOAT(LODWORD(planeNormalDistance->v[2]) ^ _xmm);
  if ( radius < v7 || radius < v9 )
  {
    LODWORD(v13) = LODWORD(capsule->radius) ^ _xmm;
    v14 = planeNormalDistance->v[0] * v13;
    if ( v7 >= v8 )
    {
      outContacts->pointA.v[0] = v14 + capsule->end.v[0];
      outContacts->pointA.v[1] = (float)(v13 * planeNormalDistance->v[1]) + capsule->end.v[1];
      outContacts->pointA.v[2] = (float)(v13 * planeNormalDistance->v[2]) + capsule->end.v[2];
      outContacts->pointB.v[0] = (float)(COERCE_FLOAT(LODWORD(v8) ^ _xmm) * planeNormalDistance->v[0]) + capsule->end.v[0];
      outContacts->pointB.v[1] = (float)(COERCE_FLOAT(LODWORD(v8) ^ _xmm) * planeNormalDistance->v[1]) + capsule->end.v[1];
      v15 = (float)(COERCE_FLOAT(LODWORD(v8) ^ _xmm) * planeNormalDistance->v[2]) + capsule->end.v[2];
    }
    else
    {
      outContacts->pointA.v[0] = v14 + capsule->start.v[0];
      outContacts->pointA.v[1] = (float)(v13 * planeNormalDistance->v[1]) + capsule->start.v[1];
      outContacts->pointA.v[2] = (float)(v13 * planeNormalDistance->v[2]) + capsule->start.v[2];
      outContacts->pointB.v[0] = (float)(COERCE_FLOAT(LODWORD(v7) ^ _xmm) * planeNormalDistance->v[0]) + capsule->start.v[0];
      outContacts->pointB.v[1] = (float)(COERCE_FLOAT(LODWORD(v7) ^ _xmm) * planeNormalDistance->v[1]) + capsule->start.v[1];
      v15 = (float)(COERCE_FLOAT(LODWORD(v7) ^ _xmm) * planeNormalDistance->v[2]) + capsule->start.v[2];
    }
    outContacts->pointB.v[2] = v15;
  }
  else
  {
    outContacts->normal.v[0] = COERCE_FLOAT(LODWORD(planeNormalDistance->v[0]) ^ _xmm);
    outContacts->normal.v[1] = COERCE_FLOAT(LODWORD(planeNormalDistance->v[1]) ^ _xmm);
    outContacts->normal.v[2] = COERCE_FLOAT(LODWORD(planeNormalDistance->v[2]) ^ _xmm);
    LODWORD(v11) = LODWORD(capsule->radius) ^ _xmm;
    outContacts->pointA.v[0] = (float)(v11 * planeNormalDistance->v[0]) + capsule->start.v[0];
    outContacts->pointA.v[1] = (float)(v11 * planeNormalDistance->v[1]) + capsule->start.v[1];
    outContacts->pointA.v[2] = (float)(v11 * planeNormalDistance->v[2]) + capsule->start.v[2];
    outContacts->pointB.v[0] = (float)(COERCE_FLOAT(LODWORD(v7) ^ _xmm) * planeNormalDistance->v[0]) + capsule->start.v[0];
    outContacts->pointB.v[1] = (float)(COERCE_FLOAT(LODWORD(v7) ^ _xmm) * planeNormalDistance->v[1]) + capsule->start.v[1];
    outContacts->pointB.v[2] = (float)(COERCE_FLOAT(LODWORD(v7) ^ _xmm) * planeNormalDistance->v[2]) + capsule->start.v[2];
    if ( maxContacts != 1 )
    {
      result = 2i64;
      outContacts[1].normal.v[0] = COERCE_FLOAT(LODWORD(planeNormalDistance->v[0]) ^ _xmm);
      outContacts[1].normal.v[1] = COERCE_FLOAT(LODWORD(planeNormalDistance->v[1]) ^ _xmm);
      outContacts[1].normal.v[2] = COERCE_FLOAT(LODWORD(planeNormalDistance->v[2]) ^ _xmm);
      LODWORD(v12) = LODWORD(capsule->radius) ^ _xmm;
      outContacts[1].pointA.v[0] = (float)(v12 * planeNormalDistance->v[0]) + capsule->end.v[0];
      outContacts[1].pointA.v[1] = (float)(v12 * planeNormalDistance->v[1]) + capsule->end.v[1];
      outContacts[1].pointA.v[2] = (float)(v12 * planeNormalDistance->v[2]) + capsule->end.v[2];
      outContacts[1].pointB.v[0] = (float)(COERCE_FLOAT(LODWORD(v9) ^ _xmm) * planeNormalDistance->v[0]) + capsule->end.v[0];
      outContacts[1].pointB.v[1] = (float)(COERCE_FLOAT(LODWORD(v9) ^ _xmm) * planeNormalDistance->v[1]) + capsule->end.v[1];
      outContacts[1].pointB.v[2] = (float)(COERCE_FLOAT(LODWORD(v9) ^ _xmm) * planeNormalDistance->v[2]) + capsule->end.v[2];
      return result;
    }
  }
  return 1i64;
}

/*
==============
XAnimBonePhysics_TestCapsuleSphere
==============
*/
__int64 XAnimBonePhysics_TestCapsuleSphere(const XAnimCapsuleCollisionShape *capsule, const XAnimSphereCollisionShape *sphere, bool flipNormalSign, vec3_t *outPointA, vec3_t *outPointB, vec3_t *outNormal)
{
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int128 v18; 
  float v20; 
  float v21; 
  float v22; 
  float v26; 
  float radius; 
  float v28; 
  float v29; 
  vec3_t pointOut; 
  vec3_t segHalfDir; 
  vec3_t segMidPoint; 

  v7 = (float)(capsule->end.v[0] - capsule->start.v[0]) * 0.5;
  v8 = (float)(capsule->end.v[1] - capsule->start.v[1]) * 0.5;
  v9 = (float)(capsule->end.v[2] - capsule->start.v[2]) * 0.5;
  v10 = v8 + capsule->start.v[1];
  segMidPoint.v[0] = v7 + capsule->start.v[0];
  segMidPoint.v[2] = v9 + capsule->start.v[2];
  segHalfDir.v[0] = v7;
  segHalfDir.v[1] = v8;
  segHalfDir.v[2] = v9;
  segMidPoint.v[1] = v10;
  SegmentPointClosestToPoint(&sphere->center, &segMidPoint, &segHalfDir, &pointOut);
  v14 = sphere->center.v[0] - pointOut.v[0];
  v18 = LODWORD(sphere->center.v[1]);
  v15 = sphere->center.v[1] - pointOut.v[1];
  v16 = sphere->center.v[2] - pointOut.v[2];
  v17 = capsule->radius + sphere->radius;
  *(float *)&v18 = (float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v16 * v16);
  if ( *(float *)&v18 > (float)(v17 * v17) )
    return 0i64;
  if ( *(float *)&v18 >= 0.001 )
  {
    *(float *)&v18 = fsqrt(*(float *)&v18);
    _XMM2 = v18;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    v26 = 1.0 / *(float *)&_XMM0;
    v20 = (float)(1.0 / *(float *)&_XMM0) * v14;
    v21 = v16 * v26;
    v22 = v15 * v26;
  }
  else
  {
    v20 = FLOAT_1_0;
    v21 = 0.0;
    v22 = 0.0;
  }
  outNormal->v[0] = v20;
  outNormal->v[1] = v22;
  outNormal->v[2] = v21;
  radius = capsule->radius;
  outPointA->v[0] = (float)(v20 * radius) + pointOut.v[0];
  outPointA->v[1] = (float)(radius * outNormal->v[1]) + pointOut.v[1];
  outPointA->v[2] = (float)(radius * outNormal->v[2]) + pointOut.v[2];
  LODWORD(v28) = LODWORD(sphere->radius) ^ _xmm;
  outPointB->v[0] = (float)(v28 * outNormal->v[0]) + sphere->center.v[0];
  outPointB->v[1] = (float)(v28 * outNormal->v[1]) + sphere->center.v[1];
  outPointB->v[2] = (float)(v28 * outNormal->v[2]) + sphere->center.v[2];
  if ( flipNormalSign )
  {
    LODWORD(v29) = LODWORD(outNormal->v[1]) ^ _xmm;
    outNormal->v[0] = COERCE_FLOAT(LODWORD(outNormal->v[0]) ^ _xmm);
    outNormal->v[2] = COERCE_FLOAT(LODWORD(outNormal->v[2]) ^ _xmm);
    outNormal->v[1] = v29;
  }
  return 1i64;
}

/*
==============
XAnimBonePhysics_TestSphereAxisAlignedBox
==============
*/
char XAnimBonePhysics_TestSphereAxisAlignedBox(const XAnimSphereCollisionShape *sphere, const XAnimBoxCollisionShape *box, bool flipNormalSign, vec3_t *outPointA, vec3_t *outPointB, vec3_t *outNormal)
{
  vec3_t *p_extents; 
  int v8; 
  signed __int64 v9; 
  int v10; 
  unsigned int v11; 
  __int128 v12; 
  __int128 v13; 
  float v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v19; 
  int v21; 
  float v23; 
  __int128 v24; 
  __int128 v28; 
  int v29; 
  float v30; 
  __int128 v31; 
  float *v34; 
  int v36; 
  float v37; 
  float v38; 
  float v39; 
  __int128 v40; 
  float v44; 
  float v45; 
  float *v46; 
  float v47; 
  __int64 v48; 
  __int64 v49; 
  signed __int64 v50; 
  vec3_t *v51; 
  const XAnimSphereCollisionShape *v52; 
  float v53; 

  p_extents = &box->extents;
  *(float *)&_XMM10 = FLOAT_3_4028235e38;
  v8 = 0;
  v51 = outPointA;
  v9 = (char *)sphere - (char *)&box->extents;
  v52 = sphere;
  v10 = 0;
  v11 = 0;
  v50 = (char *)outPointB - (char *)&box->extents;
  v12 = 0i64;
  do
  {
    if ( v11 >= 3 )
    {
      LODWORD(v49) = 3;
      LODWORD(v48) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v48, v49) )
        __debugbreak();
    }
    v13 = LODWORD(p_extents[-1].v[0]);
    if ( v11 >= 3 )
    {
      LODWORD(v49) = 3;
      LODWORD(v48) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v48, v49) )
        __debugbreak();
    }
    v14 = *(float *)&v13 - p_extents->v[0];
    v16 = v13;
    *(float *)&v16 = *(float *)&v13 + p_extents->v[0];
    v15 = v16;
    if ( v11 >= 3 )
    {
      LODWORD(v49) = 3;
      LODWORD(v48) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v48, v49) )
        __debugbreak();
    }
    _XMM2 = *(unsigned int *)((char *)p_extents->v + v9);
    v19 = _XMM2;
    *(float *)&v19 = *(float *)&_XMM2 - v14;
    _XMM1 = v19;
    _XMM0 = v19 & (unsigned int)_xmm;
    v21 = ~v11;
    if ( *(float *)&_XMM10 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&_XMM2 - v14) & _xmm) )
      v21 = v8;
    __asm { vminss  xmm3, xmm0, xmm10 }
    if ( *(float *)&v19 >= 0.0 )
    {
      ++v10;
    }
    else
    {
      v23 = *(float *)&v19 * *(float *)&v19;
      v24 = v12;
      *(float *)&v24 = *(float *)&v12 + v23;
      v12 = v24;
    }
    __asm
    {
      vcmpltss xmm0, xmm1, xmm9
      vblendvps xmm2, xmm2, xmm8, xmm0
    }
    v28 = v15;
    *(float *)&v28 = *(float *)&v15 - *(float *)&_XMM2;
    _XMM1 = v28;
    v29 = v11 + 1;
    v8 = v11 + 1;
    if ( *(float *)&_XMM3 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v15 - *(float *)&_XMM2) & _xmm) )
      v8 = v21;
    __asm { vminss  xmm10, xmm3, xmm0 }
    if ( *(float *)&v28 >= 0.0 )
    {
      ++v10;
    }
    else
    {
      v30 = *(float *)&v28 * *(float *)&v28;
      v31 = v12;
      *(float *)&v31 = *(float *)&v12 + v30;
      v12 = v31;
    }
    __asm
    {
      vcmpltss xmm0, xmm1, xmm9
      vblendvps xmm0, xmm2, xmm6, xmm0
    }
    if ( v11 >= 3 )
    {
      LODWORD(v49) = 3;
      LODWORD(v48) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v48, v49) )
        __debugbreak();
    }
    ++v11;
    *(float *)((char *)p_extents->v + v50) = *(float *)&_XMM0;
    p_extents = (vec3_t *)((char *)p_extents + 4);
  }
  while ( v29 < 3 );
  v34 = (float *)v52;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 677, ASSERT_TYPE_ASSERT, "(normalAxis != 0)", (const char *)&queryFormat, "normalAxis != 0") )
    __debugbreak();
  if ( v10 != 6 && *(float *)&v12 > (float)(v52->radius * v52->radius) )
    return 0;
  v52 = NULL;
  v53 = 0.0;
  if ( v8 <= 0 )
  {
    v36 = ~v8;
    if ( (unsigned int)v36 >= 3 )
    {
      LODWORD(v49) = 3;
      LODWORD(v48) = v36;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v48, v49) )
        __debugbreak();
    }
    *((_DWORD *)&v52 + v36) = 1065353216;
  }
  else
  {
    if ( (unsigned int)(v8 - 1) >= 3 )
    {
      LODWORD(v49) = 3;
      LODWORD(v48) = v8 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v48, v49) )
        __debugbreak();
    }
    *((_DWORD *)&v51 + v8 + 1) = -1082130432;
  }
  if ( v10 == 6 || (v37 = outPointB->v[0] - *v34, v38 = outPointB->v[2] - v34[2], v40 = LODWORD(outPointB->v[1]), v39 = outPointB->v[1] - v34[1], *(float *)&v40 = (float)((float)(v39 * v39) + (float)(v37 * v37)) + (float)(v38 * v38), *(float *)&v40 < 0.001) )
  {
    v45 = *((float *)&v52 + 1);
    outNormal->v[0] = *(float *)&v52;
    v44 = v53;
  }
  else
  {
    *(float *)&v40 = fsqrt(*(float *)&v40);
    _XMM2 = v40;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm0, xmm2, xmm1, xmm0
    }
    *(float *)&_XMM2 = 1.0 / *(float *)&_XMM0;
    outNormal->v[0] = (float)(1.0 / *(float *)&_XMM0) * v37;
    v44 = (float)(1.0 / *(float *)&_XMM0) * v38;
    v45 = v39 * *(float *)&_XMM2;
  }
  v46 = (float *)v51;
  outNormal->v[2] = v44;
  outNormal->v[1] = v45;
  v47 = v34[3];
  *v46 = (float)(v47 * outNormal->v[0]) + *v34;
  v46[1] = (float)(v47 * outNormal->v[1]) + v34[1];
  v46[2] = (float)(v47 * outNormal->v[2]) + v34[2];
  return 1;
}

/*
==============
XAnimBonePhysics_TestSphereOrientedBox
==============
*/
__int64 XAnimBonePhysics_TestSphereOrientedBox(const XAnimSphereCollisionShape *sphere, const XAnimBoxCollisionShape *box, const vec4_t *boxQuat, const vec3_t *boxTrans, bool flipNormalSign, vec3_t *outPointA, vec3_t *outPointB, vec3_t *outNormal)
{
  XAnimSphereCollisionShape outTransformedPoint; 
  vec3_t outInvTrans; 
  vec3_t point; 
  vec3_t v16; 
  vec3_t in; 
  vec4_t outInvQuat; 

  outTransformedPoint.radius = sphere->radius;
  QuatTrans_Inverse(boxQuat, boxTrans, &outInvQuat, &outInvTrans);
  QuatTrans_TransformPoint(&outInvQuat, &outInvTrans, &sphere->center, &outTransformedPoint.center);
  if ( !XAnimBonePhysics_TestSphereAxisAlignedBox(&outTransformedPoint, box, flipNormalSign, &point, &v16, &in) )
    return 0i64;
  QuatTrans_TransformPoint(boxQuat, boxTrans, &point, outPointA);
  QuatTrans_TransformPoint(boxQuat, boxTrans, &v16, outPointB);
  QuatTransform(boxQuat, &in, outNormal);
  return 1i64;
}

/*
==============
XAnimBonePhysics_TransformCollisionShape
==============
*/
void XAnimBonePhysics_TransformCollisionShape(const XAnimCollisionShape *srcShape, const vec4_t *quat, const vec3_t *trans, XAnimCollisionShape *outShape)
{
  if ( !srcShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 852, ASSERT_TYPE_ASSERT, "(srcShape != 0)", (const char *)&queryFormat, "srcShape != NULL") )
    __debugbreak();
  if ( !outShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_physics_collision.cpp", 853, ASSERT_TYPE_ASSERT, "(outShape != 0)", (const char *)&queryFormat, "outShape != NULL") )
    __debugbreak();
  outShape->type = srcShape->type;
  if ( srcShape->type )
  {
    if ( srcShape->type == XANIM_COLLISION_SHAPE_TYPE_CAPSULE )
    {
      QuatTrans_TransformPoint(quat, trans, &srcShape->u.sphere.center, &outShape->u.sphere.center);
      QuatTrans_TransformPoint(quat, trans, &srcShape->u.capsule.end, &outShape->u.capsule.end);
      outShape->u.capsule.radius = srcShape->u.capsule.radius;
    }
    else if ( srcShape->type == XANIM_COLLISION_SHAPE_TYPE_BOX )
    {
      outShape->u.sphere = srcShape->u.sphere;
      *(double *)&outShape->u.box.extents.y = *(double *)&srcShape->u.box.extents.y;
    }
  }
  else
  {
    QuatTrans_TransformPoint(quat, trans, &srcShape->u.sphere.center, &outShape->u.sphere.center);
    outShape->u.sphere.radius = srcShape->u.sphere.radius;
  }
}


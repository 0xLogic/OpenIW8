/*
==============
XAnimNode_IKLadder_GetClampedHandPosition
==============
*/

void __fastcall XAnimNode_IKLadder_GetClampedHandPosition(const DObj *obj, XAnimNode_IKLadder *node, float rungIKWeight, const vec3_t *bonePos, vec3_t *outBoneTargetPos)
{
  ?XAnimNode_IKLadder_GetClampedHandPosition@@YAXPEBUDObj@@PEAUXAnimNode_IKLadder@@MAEBTvec3_t@@AEAT3@@Z(obj, node, rungIKWeight, bonePos, outBoneTargetPos);
}

/*
==============
XAnimNode_IKLadder_GetRungIKWeight
==============
*/

double __fastcall XAnimNode_IKLadder_GetRungIKWeight(const DObj *obj, int ikType)
{
  double result; 

  *(float *)&result = ?XAnimNode_IKLadder_GetRungIKWeight@@YAMPEBUDObj@@H@Z(obj, ikType);
  return result;
}

/*
==============
XAnimNode_IKLadder_Register
==============
*/

void XAnimNode_IKLadder_Register(void)
{
  ?XAnimNode_IKLadder_Register@@YAXXZ();
}

/*
==============
XAnimNode_IKLadder_GetBestRungTarget
==============
*/

void __fastcall XAnimNode_IKLadder_GetBestRungTarget(const vec3_t *bonePos, const vec4_t *boneQuat, vec3_t *outBoneTargetPos, int ikType, XAnimNode_IKLadder *node)
{
  ?XAnimNode_IKLadder_GetBestRungTarget@@YAXAEBTvec3_t@@Tvec4_t@@AEAT1@HPEAUXAnimNode_IKLadder@@@Z(bonePos, boneQuat, outBoneTargetPos, ikType, node);
}

/*
==============
XAnimNode_IKLadder_BlendRungTarget
==============
*/

void __fastcall XAnimNode_IKLadder_BlendRungTarget(XAnimNode_IKLadder *node, const vec3_t *handPos, const vec3_t *rungTargetPos, float rungIKWeight, vec3_t *outBoneTargetPos)
{
  ?XAnimNode_IKLadder_BlendRungTarget@@YAXPEAUXAnimNode_IKLadder@@AEBTvec3_t@@1MAEAT2@@Z(node, handPos, rungTargetPos, rungIKWeight, outBoneTargetPos);
}

/*
==============
XAnimNode_IKLadder_Init
==============
*/
void XAnimNode_IKLadder_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  int v3; 

  *((_DWORD *)nodeData + 20) = 0;
  *((_WORD *)nodeData + 66) = -258;
  *((_WORD *)nodeData + 78) = -258;
  *((_DWORD *)nodeData + 34) = -1082130432;
  *((_DWORD *)nodeData + 35) = -1082130432;
  v3 = *((_DWORD *)nodeData + 20);
  *((_DWORD *)nodeData + 37) = v3;
  *((_DWORD *)nodeData + 38) = v3;
  *((_BYTE *)nodeData + 92) = 0;
}

/*
==============
XAnimNode_IKLadder_Destroy
==============
*/
void XAnimNode_IKLadder_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimNode_IKLadder_Update
==============
*/
void XAnimNode_IKLadder_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime)
{
  refdef_t *v8; 
  int v9; 
  int v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  double v15; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 79, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 80, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 81, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v8 = g_activeRefDef;
  if ( g_activeRefDef )
  {
    *((_DWORD *)nodeData + 14) = LODWORD(g_activeRefDef->viewOffset.v[0]);
    *((_DWORD *)nodeData + 15) = LODWORD(v8->viewOffset.v[1]);
    *((_DWORD *)nodeData + 16) = LODWORD(v8->viewOffset.v[2]);
    AxisToAngles(&g_activeRefDef->view.axis, (vec3_t *)((char *)nodeData + 68));
    *((float *)nodeData + 36) = atanf_0(g_activeRefDef->view.fov.tanHalfFovX) * 114.59155;
    *((_DWORD *)nodeData + 42) += g_activeRefDef->frameTime;
  }
  v9 = *((_DWORD *)nodeData + 38);
  v10 = *((_DWORD *)nodeData + 20);
  if ( v9 != v10 )
  {
    v11 = *((float *)nodeData + 21);
    if ( v11 > 0.0 && v9 )
    {
      if ( v10 == 1 || v10 == 4 )
        v12 = (float)(1.0 - *((float *)nodeData + 40)) / v11;
      else
        LODWORD(v12) = COERCE_UNSIGNED_INT(*((float *)nodeData + 40) / v11) ^ _xmm;
    }
    else
    {
      if ( v10 == 1 || v10 == 4 )
        v13 = FLOAT_1_0;
      else
        v13 = 0.0;
      *((float *)nodeData + 40) = v13;
      v12 = 0.0;
    }
    *((float *)nodeData + 41) = v12;
    *((_DWORD *)nodeData + 37) = v9;
    *((_DWORD *)nodeData + 38) = v10;
    *((_DWORD *)nodeData + 24) = *((_DWORD *)nodeData + 42);
    if ( v10 == 4 )
      *((_QWORD *)nodeData + 17) = 0i64;
  }
  v14 = (float)(dtime * *((float *)nodeData + 41)) + *((float *)nodeData + 40);
  *((float *)nodeData + 40) = v14;
  v15 = I_fclamp(v14, 0.0, 1.0);
  *((float *)nodeData + 40) = *(float *)&v15;
}

/*
==============
XAnimNode_IKLadder_Calc
==============
*/
void XAnimNode_IKLadder_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  XAnimIKCalcInfo *ikCalcInfo; 
  bool v15; 
  int v16; 
  __int64 v17; 
  unsigned int v18; 
  XAnimIKDObjData *dObjData; 
  _DWORD *v20; 
  unsigned __int8 targetBoneIndex; 
  unsigned int i; 
  __int64 v28; 
  float v29; 
  float v30; 
  __m128 v; 
  XAnimTree *tree; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  unsigned __int16 children; 
  const XAnimInfo *v38; 
  int v39; 
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
  int v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  unsigned __int8 v56; 
  __m128 v58; 
  __m128 v62; 
  float v65; 
  __m128 v67; 
  __m128 v70; 
  __m128 v71; 
  __m128 v72; 
  __m128 v73; 
  __m128 v74; 
  __m128 v75; 
  __m128 v76; 
  __m128 v77; 
  __m128 v78; 
  double v79; 
  float v80; 
  __m128 v81; 
  __m128 v82; 
  double v83; 
  __m128 v84; 
  __m128 v85; 
  __int128 v86; 
  float v87; 
  float v88; 
  double v89; 
  unsigned __int8 *v91; 
  unsigned __int8 v92; 
  float v93; 
  __m128 v95; 
  vec4_t v98; 
  __m128 v99; 
  __m128 v100; 
  __m128 v101; 
  __m128 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  __m128 v109; 
  __m128 v110; 
  __m128 v114; 
  double Weight; 
  float v124; 
  __m128 v126; 
  const float4 *fmt; 
  const float4 *fmta; 
  const float4 *fmtb; 
  XAnimCalcBuffer *v137; 
  const float4 *v138; 
  XAnimCalcBuffer *v139; 
  char v140; 
  float buffer; 
  int modelIndex[2]; 
  XAnimInfo *info; 
  __m128 info_8; 
  __m128 v145; 
  vec3_t angles; 
  vec3_t outAnimWeights; 
  __m128 v148; 
  float4 v149; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> axis; 
  float4 outModelQuat; 
  float4 v153; 
  float4 v154; 
  float4 outModelTranslation; 
  vec4_t quat; 
  float4 v157; 
  vec4_t out; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  __int128 v160; 
  __int128 v161; 
  __int128 v162; 
  __int128 v163; 

  ikCalcInfo = animCalcInfo->ikCalcInfo;
  info = (XAnimInfo *)animInfo;
  *(_QWORD *)outAnimWeights.v = nodeData;
  if ( ikCalcInfo->dObjData && ikCalcInfo->ikData )
  {
    v15 = *((_DWORD *)nodeData + 22) < 2;
    v163 = v7;
    v162 = v8;
    v161 = v9;
    v160 = v10;
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 346, ASSERT_TYPE_ASSERT, "(node->m_ladderHand < XANIM_IK_NUM_HAND_TYPES)", (const char *)&queryFormat, "node->m_ladderHand < XANIM_IK_NUM_HAND_TYPES") )
      __debugbreak();
    v16 = *((_DWORD *)nodeData + 22);
    v17 = v16 != 1;
    v148.m128_u64[0] = v16 != 1;
    v18 = 0;
    dObjData = animCalcInfo->ikCalcInfo->dObjData;
    v20 = (char *)nodeData + 100;
    while ( !*v20 )
    {
      ++v18;
      ++v20;
      if ( v18 >= 8 )
      {
        bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 100, dObjData->boneInfo[v17].targetBoneIndex);
        bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 100, dObjData->boneInfo[v17].thirdBoneIndex);
        DObjCompleteHierarchyBits(obj, (DObjPartBits *)((char *)nodeData + 100));
        break;
      }
    }
    if ( *((_BYTE *)nodeData + 92) && v16 != 1 && *((_BYTE *)nodeData + 157) == 0xFE )
      DObjGetBoneIndexInternal_30(obj, scr_const.tag_weapon, (unsigned __int8 *)nodeData + 157, modelIndex);
    targetBoneIndex = dObjData->boneInfo[v17].targetBoneIndex;
    if ( bitarray_base<bitarray<256>>::testBit(&animCalcInfo->ignorePartBits, targetBoneIndex) || (v140 = 0, targetBoneIndex > 0xFDu) )
      v140 = 1;
    if ( *((_BYTE *)nodeData + 92) && !*((_DWORD *)nodeData + 22) && *((_BYTE *)nodeData + 157) != 0xFE )
      targetBoneIndex = *((_BYTE *)nodeData + 157);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, animCalcInfo->partBits);
    _RSI = animCalcInfo->partBits;
    _R12 = (char *)((_BYTE *)nodeData + 100 - (_BYTE *)_RSI);
    for ( i = 0; i < 2; ++i )
    {
      __asm
      {
        vlddqu  xmm6, xmmword ptr [r12+rsi]
        vlddqu  xmm0, xmmword ptr [rsi]
        vpor    xmm6, xmm0, xmm6
      }
      *(_OWORD *)_RSI->array = _XMM6;
      _RSI = (DObjPartBits *)((char *)_RSI + 16);
    }
    XAnimCalcDefaultBlendNode(animCalcInfo, obj, info, weightScale, bNormQuat, destBuffer, LINEAR);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(animCalcInfo->partBits, &otherBitSet);
    v28 = *(_QWORD *)outAnimWeights.v;
    outModelTranslation.v = 0i64;
    outModelQuat.v = 0i64;
    v29 = 0.0;
    v30 = 0.0;
    if ( !v140 )
    {
      angles.v[0] = 0.0;
      angles.v[1] = 0.0;
      angles.v[2] = 0.0;
      XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, targetBoneIndex, &outModelQuat, &outModelTranslation);
      v = outModelTranslation.v;
      tree = obj->tree;
      *(_QWORD *)modelIndex = 0i64;
      *(_QWORD *)outAnimWeights.v = 0i64;
      v34 = outModelTranslation.v.m128_f32[0] + *(float *)(v28 + 56);
      v33 = v34;
      v35 = _mm_shuffle_ps(v, v, 170).m128_f32[0] + *(float *)(v28 + 64);
      v36 = _mm_shuffle_ps(v, v, 85).m128_f32[0] + *(float *)(v28 + 60);
      buffer = v35;
      v149.v = outModelQuat.v;
      if ( tree && (children = tree->children) != 0 )
      {
        v38 = GetAnimInfo(children);
        BG_CalcFingerPoseWeights(v38, (float *)modelIndex, outAnimWeights.v);
        v39 = v148.m128_i32[0];
        v40 = *(float *)&modelIndex[v148.m128_u32[0]];
      }
      else
      {
        v39 = v148.m128_i32[0];
        v40 = 0.0;
      }
      AnglesToAxis((const vec3_t *)(v28 + 36), &axis);
      v42 = (float)((float)((float)(v34 - *(float *)(v28 + 12)) * axis.m[1].v[0]) + (float)((float)(v36 - *(float *)(v28 + 16)) * axis.m[1].v[1])) + (float)((float)(v35 - *(float *)(v28 + 20)) * axis.m[1].v[2]);
      v41 = v42;
      if ( *(_DWORD *)(v28 + 88) == 1 )
      {
        v43 = v42 - -7.6248002;
        v44 = FLOAT_N0_5;
      }
      else
      {
        v43 = v42 - 7.6248002;
        v44 = FLOAT_0_5;
      }
      v45 = v43 - (float)((float)((float)((float)(*(float *)(v28 + 4) - *(float *)(v28 + 16)) * axis.m[1].v[1]) + (float)((float)(*(float *)v28 - *(float *)(v28 + 12)) * axis.m[1].v[0])) + (float)((float)(*(float *)(v28 + 8) - *(float *)(v28 + 20)) * axis.m[1].v[2]));
      if ( *(_BYTE *)(v28 + 92) )
        v46 = (float)((float)((float)(v44 * *(float *)(v28 + 48)) + v45) * *(float *)(v28 + 160)) + (float)((float)(1.0 - *(float *)(v28 + 160)) * v42);
      else
        v46 = (float)((float)(1.0 - v40) * v45) + (float)(v44 * *(float *)(v28 + 48));
      v29 = (float)(axis.m[1].v[0] * (float)(v46 - v42)) + v33;
      v47 = (float)(axis.m[1].v[1] * (float)(v46 - v42)) + v36;
      v48 = (float)(axis.m[1].v[2] * (float)(v46 - v42)) + buffer;
      outAnimWeights.v[0] = v29;
      outAnimWeights.v[1] = (float)(axis.m[1].v[1] * (float)(v46 - v41)) + v36;
      outAnimWeights.v[2] = (float)(axis.m[1].v[2] * (float)(v46 - v41)) + buffer;
      XAnimNode_IKLadder_GetBestRungTarget(&outAnimWeights, (const vec4_t *)&v149, &angles, v39, (XAnimNode_IKLadder *)v28);
      v49 = angles.v[2];
      v50 = angles.v[1];
      if ( *(_DWORD *)(v28 + 148) == 4 && *(_DWORD *)(v28 + 152) == 1 && (v51 = *(_DWORD *)(v28 + 168) - *(_DWORD *)(v28 + 96), v51 <= LADDER_SLIDE_TO_CLIMB_IK_END) )
      {
        v52 = angles.v[0];
        if ( v51 < LADDER_SLIDE_TO_CLIMB_IK_BEGIN )
        {
          v30 = v29;
          v55 = v47;
          v54 = v48;
        }
        else
        {
          v53 = _mm_cvtepi32_ps((__m128i)(unsigned int)(v51 - LADDER_SLIDE_TO_CLIMB_IK_BEGIN)).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)(LADDER_SLIDE_TO_CLIMB_IK_END - LADDER_SLIDE_TO_CLIMB_IK_BEGIN)).m128_f32[0];
          v30 = (float)((float)(angles.v[0] - v29) * v53) + v29;
          v54 = (float)((float)(angles.v[2] - v48) * v53) + v48;
          v55 = (float)((float)(angles.v[1] - v47) * v53) + v47;
        }
      }
      else
      {
        v30 = (float)((float)(angles.v[0] - v29) * v40) + v29;
        v52 = angles.v[0];
        v55 = (float)((float)(angles.v[1] - v47) * v40) + v47;
        v54 = (float)((float)(angles.v[2] - v48) * v40) + v48;
      }
      *(_DWORD *)(v28 + 208) = 0;
      *(float *)(v28 + 172) = v29;
      *(float *)(v28 + 176) = v47;
      *(float *)(v28 + 180) = v48;
      *(float *)(v28 + 196) = v52;
      *(float *)(v28 + 200) = v50;
      *(float *)(v28 + 204) = v49;
      *(float *)(v28 + 184) = v30;
      *(float *)(v28 + 188) = v55;
      *(float *)(v28 + 192) = v54;
    }
    v56 = *(_BYTE *)(v28 + 156);
    if ( v56 == 0xFE )
    {
      DObjGetBoneIndexInternal_30(obj, scr_const.j_spineupper, (unsigned __int8 *)(v28 + 156), modelIndex);
      v56 = *(_BYTE *)(v28 + 156);
    }
    if ( v56 != 0xFF )
    {
      XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v56, &v149, &v157);
      quat = (vec4_t)v149.v;
      QuatToAxis(&quat, &axis);
      v145.m128_f32[0] = axis.m[0].v[0];
      v145.m128_f32[2] = axis.m[0].v[2];
      v148.m128_i32[3] = 0;
      v58 = v148;
      v58.m128_f32[0] = axis.m[1].v[0];
      _XMM3 = v58;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rbp+190h+axis+10h], 190h+outModelQuat
        vinsertps xmm3, xmm3, dword ptr [rbp+190h+axis+14h], 190h+var_170
      }
      v145.m128_f32[1] = axis.m[0].v[1];
      v145.m128_i32[3] = 0;
      v62 = v145;
      v62.m128_f32[0] = axis.m[2].v[0];
      _XMM7 = v62;
      __asm
      {
        vinsertps xmm7, xmm7, dword ptr [rbp+190h+axis+1Ch], 190h+outModelQuat
        vinsertps xmm7, xmm7, dword ptr [rbp+190h+axis+20h], 190h+var_170
      }
      v145 = _XMM7;
      v148 = _XMM3;
      QuatToAngles(&quat, &outAnimWeights);
      v65 = *(float *)(v28 + 56);
      v145.m128_i32[3] = 0;
      v67 = v145;
      v67.m128_f32[0] = v65;
      _XMM3 = v67;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rbx+3Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [rbx+40h], 20h ; ' '
      }
      v67.m128_f32[0] = *(float *)(v28 + 40) + 180.0;
      info_8 = _mm128_add_ps(_XMM3, v157.v);
      v145 = _XMM3;
      AngleNormalize360(v67.m128_f32[0]);
      v70 = (__m128)*(unsigned int *)(v28 + 72);
      *(double *)v70.m128_u64 = AngleDelta(v70.m128_f32[0], v67.m128_f32[0]);
      v71 = v70;
      modelIndex[0] = *(_DWORD *)(v28 + 160);
      *(double *)v70.m128_u64 = I_fclamp(v70.m128_f32[0], RIGHT_DIFF_BEGIN, RIGHT_DIFF_END);
      v72 = v70;
      v72.m128_f32[0] = (float)((float)(v70.m128_f32[0] - RIGHT_DIFF_BEGIN) / (float)(RIGHT_DIFF_END - RIGHT_DIFF_BEGIN)) * RIGHT_PUSH_DIST;
      v73 = _mm_shuffle_ps(v72, v72, 0);
      *(double *)v70.m128_u64 = I_fclamp(v71.m128_f32[0], LEFT_DIFF_END, LEFT_DIFF_BEGIN);
      v74 = v71;
      v74.m128_f32[0] = (float)((float)(v70.m128_f32[0] - LEFT_DIFF_BEGIN) / (float)(LEFT_DIFF_END - LEFT_DIFF_BEGIN)) * LEFT_PUSH_DIST;
      v75 = _mm128_mul_ps(_mm_shuffle_ps((__m128)(*(_OWORD *)&v74 ^ _xmm), (__m128)(*(_OWORD *)&v74 ^ _xmm), 0), _XMM7);
      v76 = _mm128_mul_ps(_XMM7, v73);
      v77 = info_8;
      v78 = _mm128_add_ps(v75, _mm128_add_ps(v76, info_8));
      if ( COERCE_FLOAT(v71.m128_i32[0] & _xmm) > FORWARD_DIFF_BEGIN )
      {
        if ( v71.m128_f32[0] <= 0.0 )
        {
          v83 = I_fclamp(v71.m128_f32[0], COERCE_FLOAT(LODWORD(FORWARD_DIFF_END) ^ _xmm), COERCE_FLOAT(LODWORD(FORWARD_DIFF_BEGIN) ^ _xmm));
          v80 = FORWARD_DIFF_BEGIN;
          v84 = v71;
          v84.m128_f32[0] = *(float *)&v83 + FORWARD_DIFF_BEGIN;
          v81 = v84;
        }
        else
        {
          v79 = I_fclamp(v71.m128_f32[0], FORWARD_DIFF_BEGIN, FORWARD_DIFF_END);
          v80 = FORWARD_DIFF_BEGIN;
          v82 = v71;
          v82.m128_f32[0] = *(float *)&v79 - FORWARD_DIFF_BEGIN;
          v81 = v82;
        }
        v85 = v81;
        v85.m128_f32[0] = v81.m128_f32[0] / (float)(FORWARD_DIFF_END - v80);
        v86 = *(_OWORD *)&v85 & _xmm;
        *(float *)&v86 = *(float *)&v86 * FORWARD_PUSH_DIST;
        v78 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)(v86 ^ _xmm), (__m128)(v86 ^ _xmm), 0), v148), v78);
      }
      v87 = *(float *)(v28 + 40);
      v88 = *(float *)(v28 + 44);
      angles.v[0] = *(float *)(v28 + 36);
      angles.v[1] = v87 + 180.0;
      angles.v[2] = v88;
      v89 = AngleNormalize360(v87 + 180.0);
      angles.v[1] = *(float *)&v89;
      AnglesToQuat(&angles, (vec4_t *)&otherBitSet);
      __asm { vbroadcastss xmm0, [rsp+290h+modelIndex] }
      _mm128_sub_ps(_mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v78, v77), _XMM0), v77), v145);
      XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, *(unsigned __int8 *)(v28 + 156), fmt, (const float4 *)v137, weightScale);
    }
    v91 = (unsigned __int8 *)(v28 + 133);
    if ( *(_BYTE *)(v28 + 132) == 0xFE || *v91 == 0xFE )
    {
      DObjGetBoneIndexInternal_30(obj, scr_const.j_clavicle_le, (unsigned __int8 *)(v28 + 132), modelIndex);
      DObjGetBoneIndexInternal_30(obj, scr_const.j_clavicle_ri, (unsigned __int8 *)(v28 + 133), modelIndex);
    }
    if ( *(_DWORD *)(v28 + 88) == 1 )
    {
      XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, *v91, &v154, &v153);
      v92 = *v91;
    }
    else
    {
      XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, *(unsigned __int8 *)(v28 + 132), &v154, &v153);
      v92 = *(_BYTE *)(v28 + 132);
    }
    v93 = *(float *)(v28 + 56);
    v145.m128_i32[3] = 0;
    v95 = v145;
    v95.m128_f32[0] = v93;
    _XMM11 = v95;
    __asm
    {
      vinsertps xmm11, xmm11, dword ptr [rbx+3Ch], 10h
      vinsertps xmm11, xmm11, dword ptr [rbx+40h], 20h ; ' '
    }
    v153.v = _mm128_add_ps(_XMM11, v153.v);
    v145 = _XMM11;
    AnglesToAxis((const vec3_t *)(v28 + 68), &mat);
    *(_OWORD *)mat.m[0].v ^= _xmm;
    LODWORD(mat.m[1].v[2]) ^= _xmm;
    LODWORD(mat.m[1].v[1]) ^= _xmm;
    AxisToQuat(&mat, &out);
    v98 = out;
    v99 = _mm_shuffle_ps((__m128)v98, (__m128)v98, 201);
    v100 = _mm_shuffle_ps((__m128)v98, (__m128)v98, 255);
    v101 = _mm_shuffle_ps((__m128)v98, (__m128)v98, 210);
    _XMM5 = 0i64;
    __asm { vinsertps xmm5, xmm5, cs:offset, 0 }
    v104 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 210), v99), _mm128_mul_ps(_mm_shuffle_ps(_XMM5, _XMM5, 201), v101));
    v105 = _mm128_add_ps(v104, v104);
    v106 = _mm128_add_ps(_mm128_mul_ps(v100, v105), _XMM5);
    v107 = _mm128_mul_ps(_mm_shuffle_ps(v105, v105, 201), v101);
    v108 = _mm_shuffle_ps(v105, v105, 210);
    v109 = v154.v;
    v110 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(v108, v99), v107), v106), v153.v);
    _XMM0 = _mm128_mul_ps((__m128)out, v154.v);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
    }
    v114 = _mm_shuffle_ps(v109, v109, 255);
    __asm { vhaddps xmm3, xmm2, xmm2 }
    _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v100, v114), _XMM3);
    _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v109, v109, 201), v101), _mm128_mul_ps(_mm_shuffle_ps(v109, v109, 210), v99)), _mm128_add_ps(_mm128_mul_ps(v100, v154.v), _mm128_mul_ps((__m128)out, v114)));
    __asm { vblendps xmm3, xmm2, xmm0, 7 }
    _XMM6 = _mm128_sub_ps(v110, _XMM11);
    __asm
    {
      vcmpneqps xmm0, xmm3, xmm3
      vmovmskps eax, xmm0
    }
    v154.v = _XMM3;
    if ( _EAX )
    {
      v138 = (const float4 *)"!Float4IsNaN( clavicleQuat )";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 601, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( clavicleQuat ))", (const char *)&queryFormat) )
        __debugbreak();
    }
    __asm
    {
      vcmpneqps xmm0, xmm6, xmm6
      vmovmskps eax, xmm0
    }
    if ( _EAX )
    {
      v138 = (const float4 *)"!Float4IsNaN( adjustedClaviclePos )";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 602, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( adjustedClaviclePos ))", (const char *)&queryFormat) )
        __debugbreak();
    }
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, v92, fmta, v138, weightScale);
    Weight = XAnimGetWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, info->animIndex);
    if ( !v140 )
    {
      if ( *(float *)&Weight < 1.0 )
        v30 = (float)(v29 * (float)(1.0 - *(float *)&Weight)) + (float)(v30 * *(float *)&Weight);
      v124 = v30 - *(float *)(v28 + 56);
      v145.m128_i32[3] = 0;
      v126 = v145;
      v126.m128_f32[0] = v124;
      _XMM6 = v126;
      __asm
      {
        vinsertps xmm6, xmm6, xmm1, 10h
        vinsertps xmm6, xmm6, xmm2, 20h ; ' '
      }
      XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, targetBoneIndex, fmtb, (const float4 *)v139, weightScale);
      _XMM0 = outModelQuat.v;
      __asm
      {
        vcmpneqps xmm1, xmm0, xmm0
        vmovmskps eax, xmm1
      }
      if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 638, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( localTargetQuat ))", (const char *)&queryFormat, "!Float4IsNaN( localTargetQuat )") )
        __debugbreak();
      __asm
      {
        vcmpneqps xmm0, xmm6, xmm6
        vmovmskps eax, xmm0
      }
      if ( _EAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 639, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( ladderHandPos ))", (const char *)&queryFormat, "!Float4IsNaN( ladderHandPos )") )
          __debugbreak();
      }
    }
  }
}

/*
==============
XAnimNode_IKLadder_Read
==============
*/
void XAnimNode_IKLadder_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  double v11; 
  double v12; 
  double v13; 
  double v14; 
  double v15; 
  double v16; 
  double v17; 
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  int p; 

  Float = MemFile_ReadFloat(memFile);
  *(float *)nodeData = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 1) = *(float *)&v5;
  v6 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 2) = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 3) = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 4) = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 5) = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 6) = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 7) = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 8) = *(float *)&v12;
  v13 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 9) = *(float *)&v13;
  v14 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 10) = *(float *)&v14;
  v15 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 11) = *(float *)&v15;
  v16 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 12) = *(float *)&v16;
  v17 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 13) = *(float *)&v17;
  v18 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 14) = *(float *)&v18;
  v19 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 15) = *(float *)&v19;
  v20 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 16) = *(float *)&v20;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 20) = p;
  v21 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 21) = *(float *)&v21;
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 22) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 92) = p;
  *((_WORD *)nodeData + 66) = -258;
  *((_BYTE *)nodeData + 156) = -2;
}

/*
==============
XAnimNode_IKLadder_Write
==============
*/
void XAnimNode_IKLadder_Write(void *nodeData, MemoryFile *memFile)
{
  int data; 

  MemFile_ArchiveData(memFile, 12, nodeData);
  MemFile_ArchiveData(memFile, 12, (char *)nodeData + 12);
  MemFile_ArchiveData(memFile, 12, (char *)nodeData + 24);
  MemFile_ArchiveData(memFile, 12, (char *)nodeData + 36);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 12);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 13);
  MemFile_ArchiveData(memFile, 12, (char *)nodeData + 56);
  data = *((_DWORD *)nodeData + 20);
  MemFile_ArchiveData(memFile, 4, &data);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 21);
  MemFile_ArchiveData(memFile, 4, (char *)nodeData + 88);
  MemFile_ArchiveData(memFile, 1, (char *)nodeData + 92);
}

/*
==============
XAnimNode_IKLadder_PostParse
==============
*/
char XAnimNode_IKLadder_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  return 1;
}

/*
==============
XAnimNode_IKLadder_PrintDebug
==============
*/
void XAnimNode_IKLadder_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v6; 
  __int64 v9; 
  int v10; 

  v6 = size;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 693, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( depth > 0 )
  {
    v9 = (unsigned int)depth;
    do
    {
      Com_sprintfPos_truncate(buffer, v6, inoutPos, "  ");
      --v9;
    }
    while ( v9 );
  }
  v10 = *((_DWORD *)nodeData + 20);
  if ( v10 == 1 )
  {
    Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5[^7mode: climb");
  }
  else if ( v10 == 2 )
  {
    Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5[^7mode: aim");
  }
  else if ( (unsigned int)(v10 - 3) > 1 )
  {
    if ( !v10 )
      Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5[^7mode: invalid");
  }
  else
  {
    Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5[^7mode: vault");
  }
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^1angles: %0.2f  %0.2f  %0.2f", *((float *)nodeData + 9), *((float *)nodeData + 10), *((float *)nodeData + 11));
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^hand: x= %0.2f  %0.2f  %0.2f", *((float *)nodeData + 43), *((float *)nodeData + 44), *((float *)nodeData + 45));
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^3target: x= %0.2f  %0.2f  %0.2f", *((float *)nodeData + 49), *((float *)nodeData + 50), *((float *)nodeData + 51));
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^4result: x= %0.2f  %0.2f  %0.2f", *((float *)nodeData + 46), *((float *)nodeData + 47), *((float *)nodeData + 48));
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^5IK: %0.2f", *((float *)nodeData + 52));
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^6hide: %0.2f^5]\n", *((float *)nodeData + 40));
}

/*
==============
XAnimNode_IKLadder_BlendRungTarget
==============
*/
void XAnimNode_IKLadder_BlendRungTarget(XAnimNode_IKLadder *node, const vec3_t *handPos, const vec3_t *rungTargetPos, float rungIKWeight, vec3_t *outBoneTargetPos)
{
  float v8; 
  int v9; 
  float v10; 
  float v11; 

  v8 = rungIKWeight;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 308, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *(_DWORD *)node->m_prevLadderState != 4 || *(_DWORD *)node->m_currLadderState != 1 || (v9 = node->m_frameTime - node->m_prevStateTime, v9 > LADDER_SLIDE_TO_CLIMB_IK_END) )
  {
    v10 = (float)(rungTargetPos->v[0] - handPos->v[0]) * rungIKWeight;
    goto LABEL_11;
  }
  if ( v9 >= LADDER_SLIDE_TO_CLIMB_IK_BEGIN )
  {
    v8 = _mm_cvtepi32_ps((__m128i)(unsigned int)(v9 - LADDER_SLIDE_TO_CLIMB_IK_BEGIN)).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)(LADDER_SLIDE_TO_CLIMB_IK_END - LADDER_SLIDE_TO_CLIMB_IK_BEGIN)).m128_f32[0];
    v10 = (float)(rungTargetPos->v[0] - handPos->v[0]) * v8;
LABEL_11:
    outBoneTargetPos->v[0] = v10 + handPos->v[0];
    outBoneTargetPos->v[1] = (float)((float)(rungTargetPos->v[1] - handPos->v[1]) * v8) + handPos->v[1];
    v11 = (float)((float)(rungTargetPos->v[2] - handPos->v[2]) * v8) + handPos->v[2];
    goto LABEL_12;
  }
  *(_QWORD *)outBoneTargetPos->v = *(_QWORD *)handPos->v;
  v11 = handPos->v[2];
LABEL_12:
  outBoneTargetPos->v[2] = v11;
}

/*
==============
XAnimNode_IKLadder_GetBestRungTarget
==============
*/
void XAnimNode_IKLadder_GetBestRungTarget(const vec3_t *bonePos, const vec4_t *boneQuat, vec3_t *outBoneTargetPos, int ikType, XAnimNode_IKLadder *node)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int64 v12; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  __int128 v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int128 m_ladderRungDist_low; 
  float v29; 
  const dvar_t *v30; 
  float value; 
  __int128 v34; 
  __int128 unsignedInt; 
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
  const dvar_t *v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 
  vec3_t in; 
  __int128 v62; 
  __int128 v63; 
  __int128 v64; 
  __int128 v65; 
  __int128 v66; 
  __int128 v67; 

  v12 = ikType;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 196, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( node->m_hasWeapon && (_DWORD)v12 == 1 )
  {
    outBoneTargetPos->v[0] = bonePos->v[0];
    outBoneTargetPos->v[1] = bonePos->v[1];
    outBoneTargetPos->v[2] = bonePos->v[2];
  }
  else
  {
    v67 = v5;
    v66 = v6;
    v65 = v7;
    v64 = v8;
    v63 = v9;
    v62 = v10;
    AnglesToAxis(&node->m_ladderAngles, &axis);
    v15 = node->m_ladderTop.v[0] - node->m_ladderBottom.v[0];
    v16 = DCONST_DVARFLT_xanim_ladder_wrist_query_offset;
    v17 = node->m_ladderTop.v[2] - node->m_ladderBottom.v[2];
    v18 = LODWORD(node->m_ladderTop.v[1]);
    *(float *)&v18 = node->m_ladderTop.v[1] - node->m_ladderBottom.v[1];
    if ( !DCONST_DVARFLT_xanim_ladder_wrist_query_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_wrist_query_offset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    LODWORD(in.v[0]) = v16->current.integer;
    in.v[1] = 0.0;
    in.v[2] = 0.0;
    QuatTransform(boneQuat, &in, &out);
    v19 = out.v[0] + bonePos->v[0];
    v20 = v19 - node->m_ladderBottom.v[0];
    v21 = out.v[1] + bonePos->v[1];
    v22 = v21 - node->m_ladderBottom.v[1];
    v23 = (float)(out.v[2] + bonePos->v[2]) - node->m_ladderBottom.v[2];
    m_ladderRungDist_low = LODWORD(node->m_ladderRungDist);
    out.v[2] = out.v[2] + bonePos->v[2];
    out.v[1] = v21;
    *(float *)&v18 = fsqrt((float)((float)(*(float *)&v18 * *(float *)&v18) + (float)(v15 * v15)) + (float)(v17 * v17));
    _XMM4 = v18;
    out.v[0] = v19;
    __asm { vminss  xmm0, xmm4, xmm2; X }
    _XMM6 = 0i64;
    __asm { vroundss xmm6, xmm6, xmm3, 1 }
    v29 = fmodf_0(*(float *)&_XMM0, *(float *)&m_ladderRungDist_low);
    v30 = DCONST_DVARFLT_xanim_ladder_ik_dist_ratio;
    if ( !DCONST_DVARFLT_xanim_ladder_ik_dist_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_ik_dist_ratio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    value = v30->current.value;
    if ( v29 < (float)((float)(1.0 - value) * *(float *)&m_ladderRungDist_low) )
    {
      if ( node->m_prevRungTarget[v12] >= 0.0 )
      {
        unsignedInt = v30->current.unsignedInt;
        *(float *)&unsignedInt = value * *(float *)&m_ladderRungDist_low;
        _XMM0 = unsignedInt;
        __asm
        {
          vcmpltss xmm1, xmm0, xmm8
          vblendvps xmm2, xmm6, xmm3, xmm1
        }
      }
      else
      {
        v34 = m_ladderRungDist_low;
        *(float *)&v34 = *(float *)&m_ladderRungDist_low * 0.5;
        _XMM0 = v34;
        __asm
        {
          vcmpless xmm0, xmm0, xmm8
          vblendvps xmm2, xmm6, xmm1, xmm0
        }
      }
    }
    else
    {
      *(float *)&_XMM2 = *(float *)&_XMM6 + 1.0;
    }
    node->m_prevRungTarget[v12] = *(float *)&_XMM2;
    v39 = *(float *)&_XMM2 * *(float *)&m_ladderRungDist_low;
    v40 = (float)((float)(*(float *)&_XMM2 * *(float *)&m_ladderRungDist_low) * axis.m[2].v[0]) + node->m_ladderBottom.v[0];
    v41 = v39 * axis.m[2].v[1];
    v42 = v22 * axis.m[1].v[1];
    outBoneTargetPos->v[0] = v40;
    v43 = v41 + node->m_ladderBottom.v[1];
    v44 = (float)((float)(v20 * axis.m[1].v[0]) + v42) + (float)(v23 * axis.m[1].v[2]);
    v45 = (float)(v44 * axis.m[1].v[0]) + v40;
    v46 = (float)(v44 * axis.m[1].v[1]) + v43;
    outBoneTargetPos->v[1] = v43;
    v47 = node->m_ladderBottom.v[2];
    outBoneTargetPos->v[0] = v45;
    v48 = v39 * axis.m[2].v[2];
    outBoneTargetPos->v[1] = v46;
    outBoneTargetPos->v[2] = (float)(v48 + v47) + (float)(v44 * axis.m[1].v[2]);
    v49 = DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset;
    if ( !DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_rung_wrist_ik_offset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v49);
    v50 = v49->current.vector.v[2];
    v51 = v49->current.value;
    v52 = v49->current.vector.v[1];
    v53 = (float)((float)(v51 * axis.m[0].v[2]) + outBoneTargetPos->v[2]) + (float)(v52 * axis.m[1].v[2]);
    v54 = (float)(v51 * axis.m[0].v[1]) + outBoneTargetPos->v[1];
    v55 = v50 * axis.m[2].v[1];
    v56 = v52 * axis.m[1].v[1];
    outBoneTargetPos->v[0] = (float)((float)((float)(v51 * axis.m[0].v[0]) + outBoneTargetPos->v[0]) + (float)(v52 * axis.m[1].v[0])) + (float)(v50 * axis.m[2].v[0]);
    v57 = v54 + v56;
    v58 = v50 * axis.m[2].v[2];
    outBoneTargetPos->v[1] = v57 + v55;
    outBoneTargetPos->v[2] = v58 + v53;
  }
}

/*
==============
XAnimNode_IKLadder_GetClampedHandPosition
==============
*/
void XAnimNode_IKLadder_GetClampedHandPosition(const DObj *obj, XAnimNode_IKLadder *node, float rungIKWeight, const vec3_t *bonePos, vec3_t *outBoneTargetPos)
{
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
  tmat33_t<vec3_t> axis; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 140, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 141, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  AnglesToAxis(&node->m_ladderAngles, &axis);
  v7 = axis.m[1].v[1];
  v8 = axis.m[1].v[2];
  v10 = (float)((float)((float)(bonePos->v[0] - node->m_ladderBottom.v[0]) * axis.m[1].v[0]) + (float)((float)(bonePos->v[1] - node->m_ladderBottom.v[1]) * axis.m[1].v[1])) + (float)((float)(bonePos->v[2] - node->m_ladderBottom.v[2]) * axis.m[1].v[2]);
  v9 = v10;
  v11 = (float)((float)((float)(node->m_ladderAnchor.v[1] - node->m_ladderBottom.v[1]) * axis.m[1].v[1]) + (float)((float)(node->m_ladderAnchor.v[0] - node->m_ladderBottom.v[0]) * axis.m[1].v[0])) + (float)((float)(node->m_ladderAnchor.v[2] - node->m_ladderBottom.v[2]) * axis.m[1].v[2]);
  if ( node->m_ladderHand == 1 )
  {
    v12 = v10 - -7.6248002;
    v13 = FLOAT_N0_5;
  }
  else
  {
    v12 = v10 - 7.6248002;
    v13 = FLOAT_0_5;
  }
  v15 = v12 - v11;
  v14 = v12 - v11;
  v16 = node->m_ladderWidth * v13;
  if ( node->m_hasWeapon )
    v17 = (float)((float)(v15 + v16) * node->m_hideRatio) + (float)((float)(1.0 - node->m_hideRatio) * v9);
  else
    v17 = (float)((float)(1.0 - rungIKWeight) * v14) + v16;
  outBoneTargetPos->v[0] = (float)(axis.m[1].v[0] * (float)(v17 - v9)) + bonePos->v[0];
  outBoneTargetPos->v[1] = (float)(v7 * (float)(v17 - v9)) + bonePos->v[1];
  outBoneTargetPos->v[2] = (float)(v8 * (float)(v17 - v9)) + bonePos->v[2];
}

/*
==============
XAnimNode_IKLadder_GetRungIKWeight
==============
*/
float XAnimNode_IKLadder_GetRungIKWeight(const DObj *obj, int ikType)
{
  __int64 v2; 
  unsigned __int16 children; 
  const XAnimInfo *AnimInfo; 
  __int64 outWeights; 
  __int64 outAnimWeights; 

  v2 = ikType;
  outWeights = 0i64;
  outAnimWeights = 0i64;
  if ( !obj->tree )
    return 0.0;
  children = obj->tree->children;
  if ( !children )
    return 0.0;
  AnimInfo = GetAnimInfo(children);
  BG_CalcFingerPoseWeights(AnimInfo, (float *)&outWeights, (float *)&outAnimWeights);
  return *((float *)&outWeights + v2);
}

/*
==============
XAnimNode_IKLadder_Register
==============
*/
void XAnimNode_IKLadder_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimNode_IKLadder>::ms_typeInfo);
}


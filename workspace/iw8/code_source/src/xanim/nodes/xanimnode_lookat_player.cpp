/*
==============
XAnimLookAtPlayer_Register
==============
*/

void XAnimLookAtPlayer_Register(void)
{
  ?XAnimLookAtPlayer_Register@@YAXXZ();
}

/*
==============
XAnimLookAtPlayer_Init
==============
*/
void XAnimLookAtPlayer_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  *(_BYTE *)nodeData = -2;
  *(_DWORD *)((char *)nodeData + 2) = 16646398;
}

/*
==============
XAnimLookAtPlayer_Calc
==============
*/
void XAnimLookAtPlayer_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  unsigned __int8 v8; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  XAnimCalcAnimInfo *v13; 
  DObjPartBits *partBits; 
  float v15; 
  double v18; 
  double v20; 
  int modelIndex; 
  XAnimLookAtPlayerParams params; 
  vec3_t outPos; 
  vec3_t solution; 
  vec3_t mulVec; 
  vec3_t angles; 
  vec3_t inPos; 
  tmat33_t<vec3_t> in1; 
  vec3_t v34; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> inAxis; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v40; 
  tmat33_t<vec3_t> v41; 

  v8 = *(_BYTE *)nodeData;
  v10 = *((_WORD *)nodeData + 1);
  v11 = *((_WORD *)nodeData + 2);
  *(_QWORD *)outPos.v = destBuffer;
  v12 = v10;
  *(_QWORD *)mulVec.v = animInfo;
  *(_QWORD *)inPos.v = animCalcInfo;
  if ( v8 == 0xFE )
  {
    DObjGetBoneIndexInternal_31(obj, scr_const.tag_eye, (unsigned __int8 *)nodeData, &modelIndex);
    v12 = *((_WORD *)nodeData + 1);
  }
  if ( v12 == 254 )
    DObjGetBoneAndModelIndexClient(obj, scr_const.j_eyeball_le, (unsigned __int16 *)nodeData + 1, &modelIndex);
  if ( *((_WORD *)nodeData + 2) == 254 )
    DObjGetBoneAndModelIndexClient(obj, scr_const.j_eyeball_ri, (unsigned __int16 *)nodeData + 2, &modelIndex);
  if ( (unsigned __int16)(v10 - 254) > 1u && (unsigned __int16)(v11 - 254) > 1u && v8 <= 0xFDu )
  {
    v13 = *(XAnimCalcAnimInfo **)inPos.v;
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, *(const bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > **)(*(_QWORD *)inPos.v + 48832i64));
    partBits = v13->partBits;
    params.pNode = (XAnimLookAtPlayer *)nodeData;
    partBits->array[7] |= 2u;
    params.animInfo = *(const XAnimInfo **)mulVec.v;
    params.destBuffer = *(XAnimCalcBuffer **)outPos.v;
    params.weightScale = weightScale;
    params.animCalcInfo = v13;
    params.obj = obj;
    XAnimLookAtPlayer_GetBoneTransform(&params, v8, &outAxis, &outPos);
    XAnimLookAtPlayer_GetBoneTransform(&params, v10, &v40, &inPos);
    XAnimLookAtPlayer_GetBoneTransform(&params, v11, &v41, &v34);
    *(_QWORD *)solution.v = *(_QWORD *)g_activeRefDef->viewOffset.v;
    v15 = g_activeRefDef->viewOffset.v[2];
    mulVec.v[0] = solution.v[0] - outPos.v[0];
    solution.v[2] = v15;
    mulVec.v[2] = v15 - outPos.v[2];
    mulVec.v[1] = solution.v[1] - outPos.v[1];
    MatrixVecMultiply(&outAxis, &mulVec, &solution);
    vectoangles(&solution, &angles);
    _XMM9 = 0i64;
    __asm { vroundss xmm2, xmm9, xmm1, 1 }
    v18 = I_fclamp((float)((float)(angles.v[0] * 0.0027777778) - *(float *)&_XMM2) * 360.0, -25.0, 25.0);
    angles.v[0] = *(float *)&v18;
    __asm { vroundss xmm3, xmm9, xmm2, 1 }
    v20 = I_fclamp((float)((float)(angles.v[1] * 0.0027777778) - *(float *)&_XMM3) * 360.0, -65.0, 65.0);
    angles.v[1] = *(float *)&v20;
    AnglesToAxis(&angles, &axis);
    _XMM3 = 0i64;
    __asm { vunpcklps xmm0, xmm3, xmm2 }
    *(double *)in1.m[0].v = *(double *)&_XMM0;
    _XMM0 = LODWORD(FLOAT_N1_0);
    __asm { vunpcklps xmm0, xmm0, xmm3 }
    in1.m[0].v[2] = 0.0;
    *(double *)in1.row1.v = *(double *)&_XMM0;
    __asm { vunpcklps xmm0, xmm3, xmm3 }
    outPos.v[2] = FLOAT_1_0;
    in1.m[1].v[2] = 0.0;
    *(double *)in1.row2.v = *(double *)&_XMM0;
    in1.m[2].v[2] = FLOAT_1_0;
    MatrixMultiply(&in1, &axis, &out);
    MatrixMultiply(&out, &outAxis, &inAxis);
    XAnimLookAtPlayer_SetBoneTransform(&params, v10, &inAxis, &inPos);
    XAnimLookAtPlayer_SetBoneTransform(&params, v11, &inAxis, &v34);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v13->partBits, &otherBitSet);
  }
}

/*
==============
XAnimLookAtPlayer_GetBoneTransform
==============
*/
void XAnimLookAtPlayer_GetBoneTransform(const XAnimLookAtPlayerParams *params, unsigned __int16 boneIndex, tmat33_t<vec3_t> *outAxis, vec3_t *outPos)
{
  __m128 v; 
  int v7; 
  float v8; 
  float v9; 
  __m128 v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  float v14; 
  vec4_t quat; 
  float4 outModelQuat; 
  float4 outModelTranslation; 

  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, &outModelQuat, &outModelTranslation);
  v = outModelTranslation.v;
  v14 = outModelTranslation.v.m128_f32[0];
  v7 = outModelTranslation.v.m128_i32[0] & 0x7F800000;
  quat = (vec4_t)outModelQuat.v;
  LODWORD(v8) = _mm_shuffle_ps(v, v, 85).m128_u32[0];
  LODWORD(v9) = _mm_shuffle_ps(v, v, 170).m128_u32[0];
  outPos->v[0] = outModelTranslation.v.m128_f32[0];
  outPos->v[1] = v8;
  outPos->v[2] = v9;
  if ( v7 == 2139095040 || (v14 = v8, (LODWORD(v8) & 0x7F800000) == 2139095040) || (v14 = v9, (LODWORD(v9) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat_player.cpp", 83, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outPos )[0] ) && !IS_NAN( ( outPos )[1] ) && !IS_NAN( ( outPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outPos )[0] ) && !IS_NAN( ( outPos )[1] ) && !IS_NAN( ( outPos )[2] )", v14) )
      __debugbreak();
  }
  *(float *)&v13 = quat.v[0];
  if ( (LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v13 = quat.v[1], (LODWORD(quat.v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v13 = quat.v[2], (LODWORD(quat.v[2]) & 0x7F800000) == 2139095040) || (*(float *)&v13 = quat.v[3], (LODWORD(quat.v[3]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat_player.cpp", 84, ASSERT_TYPE_SANITY, "( !IS_NAN( ( modelToWorldQuat )[0] ) && !IS_NAN( ( modelToWorldQuat )[1] ) && !IS_NAN( ( modelToWorldQuat )[2] ) && !IS_NAN( ( modelToWorldQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( modelToWorldQuat )[0] ) && !IS_NAN( ( modelToWorldQuat )[1] ) && !IS_NAN( ( modelToWorldQuat )[2] ) && !IS_NAN( ( modelToWorldQuat )[3] )", v13) )
      __debugbreak();
  }
  QuatToAxis(&quat, outAxis);
  v10 = (__m128)*(unsigned __int64 *)g_activeRefDef->viewOffset.v;
  v11 = g_activeRefDef->viewOffset.v[2];
  outPos->v[0] = v10.m128_f32[0] + outPos->v[0];
  v12 = _mm_shuffle_ps(v10, v10, 85).m128_f32[0] + outPos->v[1];
  quat.v[2] = v11;
  outPos->v[2] = v11 + outPos->v[2];
  outPos->v[1] = v12;
}

/*
==============
XAnimLookAtPlayer_Register
==============
*/
void XAnimLookAtPlayer_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimLookAtPlayer>::ms_typeInfo);
}

/*
==============
XAnimLookAtPlayer_SetBoneTransform
==============
*/
void XAnimLookAtPlayer_SetBoneTransform(const XAnimLookAtPlayerParams *params, unsigned __int16 boneIndex, const tmat33_t<vec3_t> *inAxis, const vec3_t *inPos)
{
  __m128 v7; 
  float v8; 
  float v9; 
  __int128 v11; 
  const float4 *fmt; 
  const float4 *v15; 
  __int128 v16; 
  vec4_t out; 

  AxisToQuat(inAxis, &out);
  if ( ((LODWORD(out.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat_player.cpp", 103, ASSERT_TYPE_SANITY, "( !IS_NAN( ( newQuat )[0] ) && !IS_NAN( ( newQuat )[1] ) && !IS_NAN( ( newQuat )[2] ) && !IS_NAN( ( newQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( newQuat )[0] ) && !IS_NAN( ( newQuat )[1] ) && !IS_NAN( ( newQuat )[2] ) && !IS_NAN( ( newQuat )[3] )") )
    __debugbreak();
  v7 = (__m128)*(unsigned __int64 *)g_activeRefDef->viewOffset.v;
  *(vec3_t *)&v16 = g_activeRefDef->viewOffset;
  v8 = inPos->v[0] - v7.m128_f32[0];
  v9 = inPos->v[1] - _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  if ( ((LODWORD(v8) & 0x7F800000) == 2139095040 || (LODWORD(v9) & 0x7F800000) == 2139095040 || (COERCE_UNSIGNED_INT(inPos->v[2] - *((float *)&v16 + 2)) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat_player.cpp", 107, ASSERT_TYPE_SANITY, "( !IS_NAN( ( camPos )[0] ) && !IS_NAN( ( camPos )[1] ) && !IS_NAN( ( camPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( camPos )[0] ) && !IS_NAN( ( camPos )[1] ) && !IS_NAN( ( camPos )[2] )") )
    __debugbreak();
  HIDWORD(v16) = 0;
  v11 = v16;
  *(float *)&v11 = v8;
  _XMM1 = v11;
  __asm
  {
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm7, 20h ; ' '
  }
  XAnimSetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, fmt, v15, params->weightScale);
}


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
  unsigned __int8 v9; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  XAnimCalcAnimInfo *v14; 
  DObjPartBits *partBits; 
  float v45; 
  float v48; 
  int modelIndex; 
  XAnimLookAtPlayerParams params; 
  vec3_t outPos; 
  vec3_t solution; 
  vec3_t mulVec; 
  vec3_t angles; 
  vec3_t inPos; 
  tmat33_t<vec3_t> in1; 
  vec3_t v59; 
  tmat33_t<vec3_t> outAxis; 
  tmat33_t<vec3_t> inAxis; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v65; 
  tmat33_t<vec3_t> v66; 

  v9 = *(_BYTE *)nodeData;
  v11 = *((_WORD *)nodeData + 1);
  v12 = *((_WORD *)nodeData + 2);
  *(_QWORD *)outPos.v = destBuffer;
  v13 = v11;
  *(_QWORD *)mulVec.v = animInfo;
  *(_QWORD *)inPos.v = animCalcInfo;
  if ( v9 == 0xFE )
  {
    DObjGetBoneIndexInternal_31(obj, scr_const.tag_eye, (unsigned __int8 *)nodeData, &modelIndex);
    v13 = *((_WORD *)nodeData + 1);
  }
  if ( v13 == 254 )
    DObjGetBoneAndModelIndexClient(obj, scr_const.j_eyeball_le, (unsigned __int16 *)nodeData + 1, &modelIndex);
  if ( *((_WORD *)nodeData + 2) == 254 )
    DObjGetBoneAndModelIndexClient(obj, scr_const.j_eyeball_ri, (unsigned __int16 *)nodeData + 2, &modelIndex);
  if ( (unsigned __int16)(v11 - 254) > 1u && (unsigned __int16)(v12 - 254) > 1u && v9 <= 0xFDu )
  {
    v14 = *(XAnimCalcAnimInfo **)inPos.v;
    __asm { vmovaps [rsp+250h+var_50], xmm9 }
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, *(const bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > **)(*(_QWORD *)inPos.v + 48832i64));
    partBits = v14->partBits;
    __asm { vmovss  xmm0, [rbp+150h+weightScale] }
    params.pNode = (XAnimLookAtPlayer *)nodeData;
    partBits->array[7] |= 2u;
    params.animInfo = *(const XAnimInfo **)mulVec.v;
    params.destBuffer = *(XAnimCalcBuffer **)outPos.v;
    __asm { vmovss  [rsp+250h+params.weightScale], xmm0 }
    params.animCalcInfo = v14;
    params.obj = obj;
    XAnimLookAtPlayer_GetBoneTransform(&params, v9, &outAxis, &outPos);
    XAnimLookAtPlayer_GetBoneTransform(&params, v11, &v65, &inPos);
    XAnimLookAtPlayer_GetBoneTransform(&params, v12, &v66, &v59);
    _RAX = g_activeRefDef;
    __asm
    {
      vmovsd  xmm0, qword ptr [rax+7Ch]
      vmovsd  qword ptr [rsp+250h+solution], xmm0
      vmovss  xmm0, dword ptr [rsp+250h+solution]
      vsubss  xmm1, xmm0, dword ptr [rsp+250h+outPos]
      vmovss  xmm2, dword ptr [rsp+250h+solution+4]
      vsubss  xmm0, xmm2, dword ptr [rsp+250h+outPos+4]
    }
    *(float *)&_RAX = g_activeRefDef->viewOffset.v[2];
    __asm { vmovss  dword ptr [rsp+250h+mulVec], xmm1 }
    LODWORD(solution.v[2]) = (_DWORD)_RAX;
    __asm
    {
      vmovss  xmm1, dword ptr [rsp+250h+solution+8]
      vsubss  xmm2, xmm1, dword ptr [rsp+250h+outPos+8]
      vmovss  dword ptr [rbp+150h+mulVec+8], xmm2
      vmovss  dword ptr [rsp+250h+mulVec+4], xmm0
    }
    MatrixVecMultiply(&outAxis, &mulVec, &solution);
    vectoangles(&solution, &angles);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+150h+angles]
      vmulss  xmm3, xmm0, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vxorps  xmm9, xmm9, xmm9
      vroundss xmm2, xmm9, xmm1, 1
      vmovss  xmm1, cs:__real@c1c80000; min
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, cs:__real@43b40000; val
      vmovss  xmm2, cs:__real@41c80000; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  dword ptr [rbp+150h+angles], xmm0
      vmovss  xmm0, dword ptr [rbp+150h+angles+4]
      vmulss  xmm4, xmm0, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vroundss xmm3, xmm9, xmm2, 1
      vmovss  xmm2, cs:__real@42820000; max
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, cs:__real@43b40000; val
      vmovss  xmm1, cs:__real@c2820000; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm { vmovss  dword ptr [rbp+150h+angles+4], xmm0 }
    AnglesToAxis(&angles, &axis);
    __asm
    {
      vmovss  xmm2, cs:__real@3f800000
      vxorps  xmm3, xmm3, xmm3
      vunpcklps xmm0, xmm3, xmm2
      vmovsd  qword ptr [rbp+150h+in1], xmm0
      vmovss  dword ptr [rsp+250h+outPos+8], xmm3
    }
    v45 = outPos.v[2];
    __asm
    {
      vmovss  xmm0, cs:__real@bf800000
      vunpcklps xmm0, xmm0, xmm3
      vmovss  dword ptr [rsp+250h+outPos+8], xmm3
    }
    in1.m[0].v[2] = v45;
    v48 = outPos.v[2];
    __asm
    {
      vmovsd  qword ptr [rbp+150h+in1+0Ch], xmm0
      vunpcklps xmm0, xmm3, xmm3
      vmovss  dword ptr [rsp+250h+outPos+8], xmm2
    }
    in1.m[1].v[2] = v48;
    __asm { vmovsd  qword ptr [rbp+150h+in1+18h], xmm0 }
    in1.m[2].v[2] = outPos.v[2];
    MatrixMultiply(&in1, &axis, &out);
    MatrixMultiply(&out, &outAxis, &inAxis);
    XAnimLookAtPlayer_SetBoneTransform(&params, v11, &inAxis, &inPos);
    XAnimLookAtPlayer_SetBoneTransform(&params, v12, &inAxis, &v59);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v14->partBits, &otherBitSet);
    __asm { vmovaps xmm9, [rsp+250h+var_50] }
  }
}

/*
==============
XAnimLookAtPlayer_GetBoneTransform
==============
*/
void XAnimLookAtPlayer_GetBoneTransform(const XAnimLookAtPlayerParams *params, unsigned __int16 boneIndex, tmat33_t<vec3_t> *outAxis, vec3_t *outPos)
{
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  vec4_t quat; 
  float4 outModelQuat; 
  float4 outModelTranslation; 

  _RBX = outPos;
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, &outModelQuat, &outModelTranslation);
  __asm
  {
    vmovups xmm1, xmmword ptr [rsp+98h+var_38.v]
    vmovups xmm0, xmmword ptr [rsp+98h+var_48.v]
    vmovss  [rsp+98h+var_68], xmm1
    vmovups xmmword ptr [rsp+98h+quat], xmm0
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vshufps xmm2, xmm1, xmm1, 0AAh ; 'ª'
    vmovss  dword ptr [rbx], xmm1
    vmovss  dword ptr [rbx+4], xmm0
    vmovss  dword ptr [rbx+8], xmm2
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm { vmovss  [rsp+98h+var_68], xmm0 }
  if ( (v22 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm { vmovss  [rsp+98h+var_68], xmm2 }
  if ( (v23 & 0x7F800000) == 2139095040 )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat_player.cpp", 83, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outPos )[0] ) && !IS_NAN( ( outPos )[1] ) && !IS_NAN( ( outPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outPos )[0] ) && !IS_NAN( ( outPos )[1] ) && !IS_NAN( ( outPos )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+quat]
    vmovss  [rsp+98h+var_68], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_16;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+quat+4]
    vmovss  [rsp+98h+var_68], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_16;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+quat+8]
    vmovss  [rsp+98h+var_68], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_16;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+quat+0Ch]
    vmovss  [rsp+98h+var_68], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat_player.cpp", 84, ASSERT_TYPE_SANITY, "( !IS_NAN( ( modelToWorldQuat )[0] ) && !IS_NAN( ( modelToWorldQuat )[1] ) && !IS_NAN( ( modelToWorldQuat )[2] ) && !IS_NAN( ( modelToWorldQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( modelToWorldQuat )[0] ) && !IS_NAN( ( modelToWorldQuat )[1] ) && !IS_NAN( ( modelToWorldQuat )[2] ) && !IS_NAN( ( modelToWorldQuat )[3] )") )
      __debugbreak();
  }
  QuatToAxis(&quat, outAxis);
  _RAX = g_activeRefDef;
  __asm { vmovsd  xmm2, qword ptr [rax+7Ch] }
  *(float *)&_RAX = g_activeRefDef->viewOffset.v[2];
  __asm
  {
    vaddss  xmm0, xmm2, dword ptr [rbx]
    vshufps xmm1, xmm2, xmm2, 55h ; 'U'
    vmovss  dword ptr [rbx], xmm0
    vaddss  xmm0, xmm1, dword ptr [rbx+4]
  }
  LODWORD(quat.v[2]) = (_DWORD)_RAX;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+98h+quat+8]
    vaddss  xmm2, xmm1, dword ptr [rbx+8]
    vmovss  dword ptr [rbx+8], xmm2
    vmovss  dword ptr [rbx+4], xmm0
  }
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
  const float4 *fmt; 
  const float4 *v38; 
  float v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  __int128 v47; 
  vec4_t out; 
  char v49; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
  }
  _RBX = params;
  _RDI = inPos;
  AxisToQuat(inAxis, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+out]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+out+4]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+out+8]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
    goto LABEL_15;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0D8h+out+0Ch]
    vmovss  [rsp+0D8h+var_98], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 )
  {
LABEL_15:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat_player.cpp", 103, ASSERT_TYPE_SANITY, "( !IS_NAN( ( newQuat )[0] ) && !IS_NAN( ( newQuat )[1] ) && !IS_NAN( ( newQuat )[2] ) && !IS_NAN( ( newQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( newQuat )[0] ) && !IS_NAN( ( newQuat )[1] ) && !IS_NAN( ( newQuat )[2] ) && !IS_NAN( ( newQuat )[3] )") )
      __debugbreak();
  }
  _RAX = g_activeRefDef;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm2, dword ptr [rdi+4]
    vmovups xmm9, xmmword ptr [rsp+0D8h+out]
    vmovsd  xmm3, qword ptr [rax+7Ch]
  }
  DWORD2(v47) = LODWORD(g_activeRefDef->viewOffset.v[2]);
  __asm
  {
    vsubss  xmm8, xmm0, xmm3
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm7, xmm0, dword ptr [rsp+0D8h+var_88+8]
    vmovss  [rsp+0D8h+var_98], xmm8
    vshufps xmm1, xmm3, xmm3, 55h ; 'U'
    vmovsd  qword ptr [rsp+0D8h+var_88], xmm3
    vsubss  xmm6, xmm2, xmm1
  }
  if ( (v44 & 0x7F800000) == 2139095040 )
    goto LABEL_16;
  __asm { vmovss  [rsp+0D8h+var_98], xmm6 }
  if ( (v45 & 0x7F800000) == 2139095040 )
    goto LABEL_16;
  __asm { vmovss  [rsp+0D8h+var_98], xmm7 }
  if ( (v46 & 0x7F800000) == 2139095040 )
  {
LABEL_16:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_lookat_player.cpp", 107, ASSERT_TYPE_SANITY, "( !IS_NAN( ( camPos )[0] ) && !IS_NAN( ( camPos )[1] ) && !IS_NAN( ( camPos )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( camPos )[0] ) && !IS_NAN( ( camPos )[1] ) && !IS_NAN( ( camPos )[2] )") )
      __debugbreak();
  }
  __asm { vmovss  xmm2, dword ptr [rbx+28h] }
  HIDWORD(v47) = 0;
  __asm
  {
    vmovups xmm1, [rsp+0D8h+var_88]
    vmovss  xmm1, xmm1, xmm8
    vinsertps xmm1, xmm1, xmm6, 10h
    vinsertps xmm1, xmm1, xmm7, 20h ; ' '
    vmovups xmm0, xmm9
    vmovss  [rsp+0D8h+var_A8], xmm2
  }
  XAnimSetLocalBoneTransform(_RBX->animCalcInfo, _RBX->obj, _RBX->destBuffer, boneIndex, fmt, v38, v39);
  _R11 = &v49;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
}


/*
==============
XAnimEvaluateProceduralBones
==============
*/

void __fastcall XAnimEvaluateProceduralBones(XAnimProcNodeCalcParams *params, const DObjPartBits *partBits)
{
  ?XAnimEvaluateProceduralBones@@YAXPEAUXAnimProcNodeCalcParams@@PEBUDObjPartBits@@@Z(params, partBits);
}

/*
==============
XAnimProcNode_Calc
==============
*/

void __fastcall XAnimProcNode_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  ?XAnimProcNode_Calc@@YAXPEAXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimInfo@@M_NPEAUXAnimCalcBuffer@@@Z(nodeData, animCalcInfo, obj, animInfo, weightScale, bNormQuat, destBuffer);
}

/*
==============
XAnimProcDebug_GetAllTargetBonesPartBits
==============
*/

void __fastcall XAnimProcDebug_GetAllTargetBonesPartBits(const DObj *obj, DObjClientPartBits *partBits)
{
  ?XAnimProcDebug_GetAllTargetBonesPartBits@@YAXPEBUDObj@@PEAUDObjClientPartBits@@@Z(obj, partBits);
}

/*
==============
XAnimProceduralBonesAddPartBits
==============
*/

void __fastcall XAnimProceduralBonesAddPartBits(const DObj *obj, DObjPartBits *partBits)
{
  ?XAnimProceduralBonesAddPartBits@@YAXPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
XAnimProdDebug_GetAllPhysicsPartBits
==============
*/

void __fastcall XAnimProdDebug_GetAllPhysicsPartBits(const DObj *obj, DObjClientPartBits *partBits)
{
  ?XAnimProdDebug_GetAllPhysicsPartBits@@YAXPEBUDObj@@PEAUDObjClientPartBits@@@Z(obj, partBits);
}

/*
==============
XAnimProc_Register
==============
*/

void XAnimProc_Register(void)
{
  ?XAnimProc_Register@@YAXXZ();
}

/*
==============
XAnimProcNode_Init
==============
*/
void XAnimProcNode_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  __int64 v3; 
  __int64 v5; 

  v3 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 951, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v3 >= anims->size )
  {
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 952, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v5, anims->size) )
      __debugbreak();
  }
  if ( (anims->entries[v3].animParent.flags & 0x2000) == 0 )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441A0CA8, 158i64);
}

/*
==============
XAnimProcNode_Calc
==============
*/
void XAnimProcNode_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  unsigned int v7; 
  _BYTE *v11; 
  unsigned int v12; 
  const DObj *v18; 
  DObjProceduralBones *v19; 
  DObjProceduralBones *v20; 
  bool v21; 
  bool v22; 
  bool Bool_Internal_DebugName; 
  bool hasPostPhysicsConstraints; 
  bool v25; 
  XAnimProcNodeCalcParams params; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 

  v7 = 0;
  _R15 = animCalcInfo;
  v11 = NULL;
  if ( nodeData )
  {
    v11 = nodeData;
    *(_BYTE *)nodeData = 1;
  }
  if ( obj->proceduralBonesHandle.m_value && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_enableProceduralBones, "xanim_enableProceduralBones") )
  {
    v12 = 0;
    params.obj = obj;
    _RSI = 0i64;
    params.animInfo = animInfo;
    params.animCalcInfo = _R15;
    params.bNormQuat = bNormQuat;
    params.destBuffer = destBuffer;
    params.weightScale = weightScale;
    do
    {
      __asm { vlddqu  xmm6, xmmword ptr [rsi+r15+0BEA0h] }
      *(_OWORD *)&otherBitSet.array[_RSI] = _XMM6;
      _RSI += 4i64;
      ++v12;
    }
    while ( v12 < 2 );
    _RBX = &otherBitSet;
    do
    {
      __asm
      {
        vlddqu  xmm0, xmmword ptr [rbx]
        vpxor   xmm6, xmm0, xmm7
      }
      *(_OWORD *)_RBX->array = _XMM6;
      _RBX = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RBX + 16);
      ++v7;
    }
    while ( v7 < 2 );
    v18 = params.obj;
    v19 = DObjLockProceduralBones(params.obj);
    v20 = v19;
    if ( v19 )
    {
      v21 = v19->numPhysicsBones && bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::testAnyBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v19->dynamicBonePartBits, &otherBitSet);
      v22 = v20->numConstraints && bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::testAnyBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v20->proceduralBonePartBits, &otherBitSet);
      if ( v21 || v22 )
      {
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_enableConstraints, "xanim_enableConstraints");
        hasPostPhysicsConstraints = v20->hasPostPhysicsConstraints;
        v25 = Bool_Internal_DebugName;
        if ( v22 && Bool_Internal_DebugName )
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "XAnimEvaluateProceduralBones");
          if ( hasPostPhysicsConstraints )
            XAnimProceduralBones_EvaluateConstraints_1_0_(params.obj, v20, &params, (const DObjPartBits *)&otherBitSet);
          else
            XAnimProceduralBones_EvaluateConstraints_0_0_(params.obj, v20, &params, (const DObjPartBits *)&otherBitSet);
          Sys_ProfEndNamedEvent();
        }
        if ( v21 && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_physicsEnable, "xanim_physicsEnable") )
          XAnimBonePhysicsUpdate(v20, &params);
        if ( v22 && hasPostPhysicsConstraints && v25 )
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "XAnimEvaluateProceduralBonesPostPhysics");
          XAnimProceduralBones_EvaluateConstraints_1_1_(v18, v20, &params, (const DObjPartBits *)&otherBitSet);
          Sys_ProfEndNamedEvent();
        }
      }
    }
    DObjUnlockProceduralBones(v18);
  }
  else if ( v11 )
  {
    *v11 = 0;
  }
}

/*
==============
XAnimProcNode_PrintDebug
==============
*/
void XAnimProcNode_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, __int64 depth, int *inoutPos, __int64 a7, __int64 a8)
{
  unsigned __int64 v8; 
  unsigned __int64 v11; 
  __int64 v12; 
  const char *v13; 

  v8 = size;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 930, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  v11 = v8;
  if ( (int)depth > 0 )
  {
    v12 = (unsigned int)depth;
    do
    {
      Com_sprintfPos_truncate(buffer, v11, inoutPos, "  ");
      --v12;
    }
    while ( v12 );
  }
  v13 = "   ^5ON\n";
  if ( !*(_BYTE *)nodeData )
    v13 = "   ^5OFF\n";
  Com_sprintfPos_truncate(buffer, v11, inoutPos, v13, depth, inoutPos, a7, a8);
}

/*
==============
XAnimProcNode_PostParse
==============
*/
char XAnimProcNode_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v2; 
  __int64 v5; 

  v2 = animIndex;
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 966, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( (unsigned int)v2 >= anims->size )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 967, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v5, anims->size) )
      __debugbreak();
  }
  if ( (anims->entries[v2].animParent.flags & 0x2000) != 0 )
    return 1;
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1441A0CA8, 159i64);
  return 0;
}

/*
==============
CalculateShortestRotationAboutAxis
==============
*/
void CalculateShortestRotationAboutAxis(const float4 *fromVector, const float4 *toVector, const float4 *axis, float4 *outQuat)
{
  __m128 v; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 

  _XMM6 = g_one.v;
  _XMM1 = _mm128_mul_ps(toVector->v, fromVector->v);
  v = g_oneHalf.v;
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM7 = 0i64;
  _mm128_sub_ps((__m128)0i64, g_one.v);
  __asm
  {
    vhaddps xmm10, xmm0, xmm0
    vcmpltps xmm0, xmm6, xmm8
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmaxps  xmm0, xmm10, xmm8
    vminps  xmm5, xmm0, xmm6
  }
  _XMM1 = _mm128_mul_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(fromVector->v, fromVector->v, 201), _mm_shuffle_ps(toVector->v, toVector->v, 210)), _mm128_mul_ps(_mm_shuffle_ps(fromVector->v, fromVector->v, 210), _mm_shuffle_ps(toVector->v, toVector->v, 201))), axis->v);
  __asm
  {
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vcmpleps xmm0, xmm7, xmm1
  }
  _XMM2 = _mm128_sub_ps((__m128)0i64, axis->v);
  __asm { vblendvps xmm3, xmm2, xmm1, xmm0 }
  v26 = _mm128_mul_ps(_XMM5, v);
  v27 = _mm128_add_ps(v26, v);
  v28 = _mm128_mul_ps(_XMM3, _mm_sqrt_ps(_mm128_sub_ps(v, v26)));
  outQuat->v = _mm_shuffle_ps(v28, _mm_shuffle_ps(v28, _mm_sqrt_ps(v27), 250), 132);
}

/*
==============
XAnimEvaluateAimConstraint
==============
*/
void XAnimEvaluateAimConstraint(const XAnimAimConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, const DObjPartBits *partBits, const XAnimConstraintTargetBone *const targetBoneInfo)
{
  float v8; 
  int boneIndex; 
  XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  XAnimCalcAnimInfo *animCalcInfo; 
  __m128 v; 
  __m128 v15; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v28; 
  __m128 v30; 
  __m128 v34; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  __m128 v40; 
  XAnimUpVectorType upVectorType; 
  __m128 v42; 
  __m128 v43; 
  __m128 v44; 
  __m128 v46; 
  __int32 v50; 
  __m128 v51; 
  __m128 v52; 
  __m128 v53; 
  __m128 v54; 
  __m128 v55; 
  __m128 v56; 
  __m128 v61; 
  __m128 v68; 
  __m128 v69; 
  __m128 v74; 
  __m128 v78; 
  float4 outModelTranslation_8; 
  float4 v82; 
  float4 v83; 
  float4 v84; 
  float4 v85; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  float4 v88; 

  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, *sourceBoneIndices, &outModelQuat, &outModelTranslation);
  v8 = constraint->aimTargetLocalOffset.v[0];
  boneIndex = targetBoneInfo->boneIndex;
  destBuffer = params->destBuffer;
  obj = params->obj;
  animCalcInfo = params->animCalcInfo;
  v82.v.m128_i32[3] = 0;
  v = v82.v;
  v.m128_f32[0] = v8;
  _XMM8 = v;
  v15 = outModelQuat.v;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rsi+4], 10h
    vinsertps xmm8, xmm8, dword ptr [rsi+8], 20h ; ' '
  }
  v18 = _mm_shuffle_ps(v15, v15, 201);
  v19 = _mm_shuffle_ps(v15, v15, 210);
  v20 = _mm_shuffle_ps(v15, v15, 255);
  v21 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 210), v18), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), v19));
  v22 = _mm128_add_ps(v21, v21);
  v23 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v22, v22, 210), v18), _mm128_mul_ps(_mm_shuffle_ps(v22, v22, 201), v19)), _mm128_add_ps(_mm128_mul_ps(v20, v22), _XMM8)), outModelTranslation.v);
  v82.v = _XMM8;
  XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, boneIndex, &v88, &v85);
  v24 = _mm128_sub_ps(v23, v85.v);
  _XMM0 = _mm128_mul_ps(v24, v24);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v28 = _mm_sqrt_ps(_XMM0);
  _XMM0.m128_i32[0] = LODWORD(constraint->localAimVector.v[0]);
  v82.v.m128_i32[3] = 0;
  v30 = v82.v;
  v30.m128_f32[0] = _XMM0.m128_f32[0];
  _XMM3 = v30;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rsi+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+14h], 20h ; ' '
  }
  _XMM0.m128_i32[0] = LODWORD(constraint->localUpVector.v[0]);
  v82.v = _XMM3;
  v82.v.m128_i32[3] = 0;
  v34 = v82.v;
  v34.m128_f32[0] = _XMM0.m128_f32[0];
  _XMM8 = v34;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rsi+1Ch], 10h
    vinsertps xmm8, xmm8, dword ptr [rsi+20h], 20h ; ' '
  }
  v37 = _mm128_div_ps(v24, v28);
  v82.v = v37;
  outModelTranslation_8.v = _XMM3;
  XAnimBonePhysics_CalculateShortestRotationQuaternion(&outModelTranslation_8, &v82, &v83);
  v38 = v83.v;
  v39 = _mm_shuffle_ps(v38, v38, 210);
  v40 = _mm_shuffle_ps(v38, v38, 201);
  upVectorType = constraint->upVectorType;
  v82.v.m128_i32[3] = 0;
  v42 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 210), v40), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), v39));
  v43 = _mm128_add_ps(v42, v42);
  v44 = _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v38, v38, 255), v43), _XMM8);
  v46 = v82.v;
  v46.m128_f32[0] = constraint->upVector.v[0];
  _XMM8 = v46;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rsi+34h], 10h
    vinsertps xmm8, xmm8, dword ptr [rsi+38h], 20h ; ' '
  }
  v82.v = _XMM8;
  _XMM11 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v43, v43, 210), v40), _mm128_mul_ps(_mm_shuffle_ps(v43, v43, 201), v39)), v44);
  if ( upVectorType )
  {
    v50 = upVectorType - 1;
    if ( v50 )
    {
      if ( v50 == 1 )
      {
        XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v84, &v83);
        _XMM8 = _mm128_sub_ps(v83.v, v85.v);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 428, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "bad up vector type") )
      {
        __debugbreak();
      }
    }
    else
    {
      XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v83, &v84);
      v51 = v83.v;
      v52 = _mm_shuffle_ps(v51, v51, 210);
      v53 = _mm_shuffle_ps(v51, v51, 201);
      v54 = _mm_shuffle_ps(v51, v51, 255);
      v55 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 210), v53), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), v52));
      v56 = _mm128_add_ps(v55, v55);
      _XMM8 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v56, v56, 210), v53), _mm128_mul_ps(_mm_shuffle_ps(v56, v56, 201), v52)), _mm128_add_ps(_mm128_mul_ps(v54, v56), _XMM8));
    }
  }
  _XMM0 = _mm128_mul_ps(v37, _XMM8);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v61 = _mm128_sub_ps(_XMM8, _mm128_mul_ps(_XMM0, v37));
  _XMM0 = _mm128_mul_ps(v61, v61);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm5, xmm1, xmm1
    vrsqrtps xmm4, xmm5
  }
  _mm128_mul_ps(v61, _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(g_one.v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM5)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4));
  __asm
  {
    vcmpneqps xmm0, xmm5, xmm0
    vblendvps xmm2, xmm11, xmm1, xmm0
  }
  outModelTranslation_8.v = _XMM2;
  v83.v = v37;
  v82.v = _XMM11;
  CalculateShortestRotationAboutAxis(&v82, &outModelTranslation_8, &v83, &v84);
  v68 = v84.v;
  v69 = _mm_shuffle_ps(v68, v68, 255);
  _XMM1 = _mm128_mul_ps(v84.v, v38);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
  }
  v74 = _mm_shuffle_ps(v38, v38, 255);
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v74, v69), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v68, v68, 201), _mm_shuffle_ps(v38, v38, 210)), _mm128_mul_ps(_mm_shuffle_ps(v68, v68, 210), _mm_shuffle_ps(v38, v38, 201))), _mm128_add_ps(_mm128_mul_ps(v84.v, v74), _mm128_mul_ps(v38, v69)));
  __asm { vblendps xmm4, xmm2, xmm0, 7 }
  *(float *)&_XMM0 = constraint->axisMask.v[0];
  v82.v.m128_i32[3] = 0;
  v78 = v82.v;
  v78.m128_f32[0] = *(float *)&_XMM0;
  _XMM3 = v78;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rsi+28h], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+2Ch], 20h ; ' '
  }
  v83.v = _XMM3;
  v84.v = _XMM4;
  XAnimSetModelBoneRotationWithAxisMask(params, targetBoneInfo, &v83, &v84);
}

/*
==============
XAnimEvaluateDistanceDrivenRotationOffsetConstraint
==============
*/
void XAnimEvaluateDistanceDrivenRotationOffsetConstraint(const XAnimDistanceDrivenOffsetConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, const DObjPartBits *partBits, const XAnimConstraintTargetBone *targetBoneInfo)
{
  __m128 v; 
  __m128 v13; 
  __m128 v17; 
  __m128 v18; 
  __m128 v22; 
  const float4 *fmt; 
  float4 *outModelTranslation; 
  float4 outFractionalDistance; 
  float4 outModelQuat; 
  float4 v30; 

  if ( !constraint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 604, ASSERT_TYPE_ASSERT, "(constraint != 0)", (const char *)&queryFormat, "constraint != NULL") )
    __debugbreak();
  if ( !sourceBoneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 605, ASSERT_TYPE_ASSERT, "(sourceBoneIndices != 0)", (const char *)&queryFormat, "sourceBoneIndices != NULL") )
    __debugbreak();
  if ( !params->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 606, ASSERT_TYPE_ASSERT, "(params->obj != 0)", (const char *)&queryFormat, "params->obj != NULL") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 607, ASSERT_TYPE_ASSERT, "(partBits != 0)", (const char *)&queryFormat, "partBits != NULL") )
    __debugbreak();
  if ( !targetBoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 608, ASSERT_TYPE_ASSERT, "(targetBoneInfo != 0)", (const char *)&queryFormat, "targetBoneInfo != NULL") )
    __debugbreak();
  XAnimEvaluateFractionalDistance(constraint, sourceBoneIndices, params, &outFractionalDistance);
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, &outModelQuat, &v30);
  _XMM0 = _mm128_mul_ps((__m128)constraint->minLocalOffset, (__m128)constraint->maxLocalOffset);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v = outModelQuat.v;
  v13 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps((__m128)(_XMM0 & *(_OWORD *)&g_negativeZero.v | _xmm), outFractionalDistance.v), (__m128)constraint->maxLocalOffset), _mm128_mul_ps(_mm128_sub_ps(g_one.v, outFractionalDistance.v), (__m128)constraint->minLocalOffset));
  _XMM1 = _mm128_mul_ps(v13, v13);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
  }
  v17 = _mm128_div_ps(v13, _mm_sqrt_ps(_XMM0));
  v18 = _mm_shuffle_ps(v, v, 255);
  _XMM1 = _mm128_mul_ps(outModelQuat.v, v17);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
  }
  v22 = _mm_shuffle_ps(v17, v17, 255);
  __asm { vhaddps xmm3, xmm2, xmm2 }
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v22, v18), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 201), _mm_shuffle_ps(v17, v17, 210)), _mm128_mul_ps(_mm_shuffle_ps(v, v, 210), _mm_shuffle_ps(v17, v17, 201))), _mm128_add_ps(_mm128_mul_ps(outModelQuat.v, v22), _mm128_mul_ps(v18, v17)));
  __asm { vblendps xmm0, xmm2, xmm0, 7 }
  XAnimSetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, fmt, outModelTranslation, params->weightScale);
}

/*
==============
XAnimEvaluateDistanceDrivenTranslationOffsetConstraint
==============
*/
void XAnimEvaluateDistanceDrivenTranslationOffsetConstraint(const XAnimDistanceDrivenOffsetConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, const DObjPartBits *partBits, const XAnimConstraintTargetBone *targetBoneInfo)
{
  float v9; 
  __m128 v; 
  float v12; 
  unsigned __int16 parentBoneIndex; 
  __m128 v17; 
  __m128 v20; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  float4 outFractionalDistance_8; 
  float4 v29; 
  float4 v30; 
  float4 v31; 
  float4 outModelTranslation; 
  float4 outModelQuat; 

  if ( !constraint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 553, ASSERT_TYPE_ASSERT, "(constraint != 0)", (const char *)&queryFormat, "constraint != NULL") )
    __debugbreak();
  if ( !sourceBoneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 554, ASSERT_TYPE_ASSERT, "(sourceBoneIndices != 0)", (const char *)&queryFormat, "sourceBoneIndices != NULL") )
    __debugbreak();
  if ( !params->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 555, ASSERT_TYPE_ASSERT, "(params->obj != 0)", (const char *)&queryFormat, "params->obj != NULL") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 556, ASSERT_TYPE_ASSERT, "(partBits != 0)", (const char *)&queryFormat, "partBits != NULL") )
    __debugbreak();
  if ( !targetBoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 557, ASSERT_TYPE_ASSERT, "(targetBoneInfo != 0)", (const char *)&queryFormat, "targetBoneInfo != NULL") )
    __debugbreak();
  XAnimEvaluateFractionalDistance(constraint, sourceBoneIndices, params, &outFractionalDistance_8);
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, &outModelQuat, &outModelTranslation);
  v9 = constraint->minLocalOffset.v[0];
  v29.v.m128_i32[3] = 0;
  v = v29.v;
  v.m128_f32[0] = v9;
  _XMM4 = v;
  v12 = constraint->maxLocalOffset.v[0];
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
  }
  v29.v = _XMM4;
  v29.v.m128_i32[3] = 0;
  parentBoneIndex = targetBoneInfo->parentBoneIndex;
  v17 = v29.v;
  v17.m128_f32[0] = v12;
  _XMM3 = v17;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdi+14h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+18h], 20h ; ' '
  }
  v20 = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM3, _XMM4), outFractionalDistance_8.v), _XMM4);
  v29.v = _XMM3;
  if ( parentBoneIndex == 255 )
  {
    _XMM0 = g_one.v;
    __asm { vblendps xmm0, xmm0, xmm8, 7 }
    v30.v = _XMM0;
  }
  else
  {
    XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, parentBoneIndex, &v30, &v31);
    _XMM0 = v30.v;
  }
  v23 = _mm_shuffle_ps(_XMM0, _XMM0, 210);
  v24 = _mm_shuffle_ps(_XMM0, _XMM0, 201);
  v25 = _mm_shuffle_ps(_XMM0, _XMM0, 255);
  v26 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v20, v20, 210), v24), _mm128_mul_ps(_mm_shuffle_ps(v20, v20, 201), v23));
  v27 = _mm128_add_ps(v26, v26);
  outFractionalDistance_8.v = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v27, v27, 210), v24), _mm128_mul_ps(_mm_shuffle_ps(v27, v27, 201), v23)), _mm128_add_ps(_mm128_mul_ps(v25, v27), v20)), outModelTranslation.v);
  v29.v = 0i64;
  v31.v = 0i64;
  XAnimSetModelBoneTranslationWithAxisMaskAndOffset(params, targetBoneInfo, &v31, &v29, &outFractionalDistance_8);
}

/*
==============
XAnimEvaluateFractionalDistance
==============
*/
void XAnimEvaluateFractionalDistance(const XAnimDistanceDrivenOffsetConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, float4 *outFractionalDistance)
{
  __int128 v9; 
  __m128 v13; 
  __m128 v; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v29; 
  __m128 v31; 
  __m128 v42; 
  __int128 v43; 
  __m128 v44; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  float4 v47; 
  float4 v48; 

  _RBX = constraint;
  if ( !constraint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 501, ASSERT_TYPE_ASSERT, "(constraint != 0)", (const char *)&queryFormat, "constraint != NULL") )
    __debugbreak();
  if ( !sourceBoneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 502, ASSERT_TYPE_ASSERT, "(sourceBoneIndices != 0)", (const char *)&queryFormat, "sourceBoneIndices != NULL") )
    __debugbreak();
  if ( !params->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 503, ASSERT_TYPE_ASSERT, "(params->obj != 0)", (const char *)&queryFormat, "params->obj != NULL") )
    __debugbreak();
  if ( !outFractionalDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 504, ASSERT_TYPE_ASSERT, "(outFractionalDistance != 0)", (const char *)&queryFormat, "outFractionalDistance != NULL") )
    __debugbreak();
  HIDWORD(v43) = 0;
  v9 = v43;
  *(float *)&v9 = _RBX->sourceBoneOffsets[0].v[0];
  _XMM8 = v9;
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rbx+24h], 10h
    vinsertps xmm8, xmm8, dword ptr [rbx+28h], 20h ; ' '
  }
  v44 = _XMM8;
  v44.m128_i32[3] = 0;
  v13 = v44;
  v13.m128_f32[0] = _RBX->sourceBoneOffsets[1].v[0];
  _XMM9 = v13;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rbx+30h], 10h
    vinsertps xmm9, xmm9, dword ptr [rbx+34h], 20h ; ' '
  }
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, *sourceBoneIndices, &outModelQuat, &outModelTranslation);
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v47, &v48);
  v = outModelQuat.v;
  v17 = _mm_shuffle_ps(v, v, 210);
  v18 = _mm_shuffle_ps(v, v, 201);
  v19 = _mm_shuffle_ps(v, v, 255);
  v20 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 210), v18), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), v17));
  v21 = _mm128_add_ps(v20, v20);
  v22 = v47.v;
  v23 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v21, v21, 210), v18), _mm128_mul_ps(_mm_shuffle_ps(v21, v21, 201), v17)), _mm128_add_ps(_mm128_mul_ps(v19, v21), _XMM8)), outModelTranslation.v);
  v24 = _mm_shuffle_ps(v22, v22, 210);
  v25 = _mm_shuffle_ps(v22, v22, 201);
  v26 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 210), v25), _mm128_mul_ps(_mm_shuffle_ps(_XMM9, _XMM9, 201), v24));
  v27 = _mm128_add_ps(v26, v26);
  __asm { vbroadcastss xmm3, dword ptr [rbx+3Ch] }
  v29 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v27, v27, 210), v25), _mm128_mul_ps(_mm_shuffle_ps(v27, v27, 201), v24)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v22, v22, 255), v27), _XMM9)), v48.v);
  __asm { vbroadcastss xmm4, dword ptr [rbx+38h] }
  v31 = _mm128_sub_ps(v23, v29);
  _XMM0 = _mm128_mul_ps(v31, v31);
  __asm
  {
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  _XMM7 = _mm128_add_ps(_mm128_mul_ps(_mm_sqrt_ps(_XMM0), _XMM4), _XMM3);
  _XMM6 = g_one.v;
  __asm
  {
    vcmpltps xmm0, xmm6, xmm10
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmaxps  xmm0, xmm7, xmm10
    vminps  xmm3, xmm0, xmm6
  }
  if ( _RBX->curveType == XANIM_CURVE_TYPE_SMOOTHSTEP )
  {
    v42 = _mm128_sub_ps(g_one.v, _XMM3.v);
    _XMM3.v = _mm128_mul_ps(_mm128_add_ps(_mm128_add_ps(v42, v42), g_one.v), _mm128_mul_ps(_XMM3.v, _XMM3.v));
  }
  *outFractionalDistance = (float4)_XMM3.v;
}

/*
==============
XAnimEvaluatePositionConstraint
==============
*/
void XAnimEvaluatePositionConstraint(const XAnimPositionConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, const DObjPartBits *partBits, const XAnimConstraintTargetBone *targetBoneInfo)
{
  float v5; 
  int v6; 
  XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  __m128 v; 
  float v14; 
  __m128 v18; 
  float v19; 
  __m128 v23; 
  float v26; 
  __m128 v28; 
  XAnimCalcAnimInfo *animCalcInfo; 
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
  float4 outModelTranslation_8; 
  float4 v46; 
  float4 v47; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  float4 v50; 
  float4 v51; 

  v5 = constraint->sourceBoneOffsets[0].v[0];
  v6 = *sourceBoneIndices;
  destBuffer = params->destBuffer;
  outModelQuat.v.m128_i32[3] = 0;
  _RDI = constraint;
  obj = params->obj;
  v = outModelQuat.v;
  v.m128_f32[0] = v5;
  _XMM8 = v;
  v14 = constraint->sourceBoneOffsets[1].v[0];
  __asm
  {
    vinsertps xmm8, xmm8, dword ptr [rcx+2Ch], 10h
    vinsertps xmm8, xmm8, dword ptr [rcx+30h], 20h ; ' '
  }
  outModelQuat.v = _XMM8;
  outModelQuat.v.m128_i32[3] = 0;
  v18 = outModelQuat.v;
  v18.m128_f32[0] = v14;
  _XMM10 = v18;
  v19 = constraint->offset.v[0];
  __asm
  {
    vinsertps xmm10, xmm10, dword ptr [rcx+38h], 10h
    vinsertps xmm10, xmm10, dword ptr [rcx+3Ch], 20h ; ' '
  }
  outModelQuat.v = _XMM10;
  outModelQuat.v.m128_i32[3] = 0;
  v23 = outModelQuat.v;
  v23.m128_f32[0] = v19;
  _XMM11 = v23;
  __asm
  {
    vinsertps xmm11, xmm11, dword ptr [rcx+20h], 10h
    vinsertps xmm11, xmm11, dword ptr [rcx+24h], 20h ; ' '
  }
  v26 = constraint->axisMask.v[0];
  outModelQuat.v = _XMM11;
  outModelQuat.v.m128_i32[3] = 0;
  v28 = outModelQuat.v;
  v28.m128_f32[0] = v26;
  _XMM9 = v28;
  __asm
  {
    vinsertps xmm9, xmm9, dword ptr [rcx+44h], 10h
    vinsertps xmm9, xmm9, dword ptr [rcx+48h], 20h ; ' '
  }
  animCalcInfo = params->animCalcInfo;
  outModelQuat.v = _XMM9;
  XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v6, &outModelQuat, &outModelTranslation);
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v50, &v51);
  v32 = outModelQuat.v;
  v33 = _mm_shuffle_ps(v32, v32, 210);
  v34 = _mm_shuffle_ps(v32, v32, 201);
  v35 = _mm_shuffle_ps(v32, v32, 255);
  v36 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 210), v34), _mm128_mul_ps(_mm_shuffle_ps(_XMM8, _XMM8, 201), v33));
  v37 = _mm128_add_ps(v36, v36);
  v38 = v50.v;
  v39 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v37, v37, 210), v34), _mm128_mul_ps(_mm_shuffle_ps(v37, v37, 201), v33)), _mm128_add_ps(_mm128_mul_ps(v35, v37), _XMM8)), outModelTranslation.v);
  v40 = _mm_shuffle_ps(v38, v38, 210);
  v41 = _mm_shuffle_ps(v38, v38, 201);
  v42 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 210), v41), _mm128_mul_ps(_mm_shuffle_ps(_XMM10, _XMM10, 201), v40));
  v43 = _mm128_add_ps(v42, v42);
  __asm { vbroadcastss xmm2, dword ptr [rdi] }
  outModelTranslation_8.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v43, v43, 210), v41), _mm128_mul_ps(_mm_shuffle_ps(v43, v43, 201), v40)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v38, v38, 255), v43), _XMM10)), v51.v), v39), _XMM2), v39);
  v46.v = _XMM11;
  v47.v = _XMM9;
  XAnimSetModelBoneTranslationWithAxisMaskAndOffset(params, targetBoneInfo, &v47, &v46, &outModelTranslation_8);
}

/*
==============
XAnimEvaluateProceduralBones
==============
*/
void XAnimEvaluateProceduralBones(XAnimProcNodeCalcParams *params, const DObjPartBits *partBits)
{
  const DObj *obj; 
  DObjProceduralBones *v5; 
  DObjProceduralBones *v6; 
  bool v7; 
  bool v8; 
  bool Bool_Internal_DebugName; 
  bool hasPostPhysicsConstraints; 
  bool v11; 

  obj = params->obj;
  v5 = DObjLockProceduralBones(obj);
  v6 = v5;
  if ( v5 )
  {
    v7 = v5->numPhysicsBones && bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::testAnyBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v5->dynamicBonePartBits, partBits);
    v8 = v6->numConstraints && bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::testAnyBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v6->proceduralBonePartBits, partBits);
    if ( v7 || v8 )
    {
      Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_enableConstraints, "xanim_enableConstraints");
      hasPostPhysicsConstraints = v6->hasPostPhysicsConstraints;
      v11 = Bool_Internal_DebugName;
      if ( v8 && Bool_Internal_DebugName )
      {
        Sys_ProfBeginNamedEvent(0xFFFFFFFF, "XAnimEvaluateProceduralBones");
        if ( hasPostPhysicsConstraints )
          XAnimProceduralBones_EvaluateConstraints_1_0_(obj, v6, params, partBits);
        else
          XAnimProceduralBones_EvaluateConstraints_0_0_(obj, v6, params, partBits);
        Sys_ProfEndNamedEvent();
      }
      if ( v7 && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_physicsEnable, "xanim_physicsEnable") )
        XAnimBonePhysicsUpdate(v6, params);
      if ( v8 && hasPostPhysicsConstraints && v11 )
      {
        Sys_ProfBeginNamedEvent(0xFFFFFFFF, "XAnimEvaluateProceduralBonesPostPhysics");
        XAnimProceduralBones_EvaluateConstraints_1_1_(obj, v6, params, partBits);
        Sys_ProfEndNamedEvent();
      }
    }
  }
  DObjUnlockProceduralBones(obj);
}

/*
==============
XAnimEvaluateRotationConstraint
==============
*/
void XAnimEvaluateRotationConstraint(const XAnimRotationConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, const DObjPartBits *partBits, const XAnimConstraintTargetBone *const targetBoneInfo)
{
  vec4_t rotationOffsetQuat; 
  const XAnimRotationConstraint *v9; 
  __m128 v13; 
  __m128 v17; 
  __m128 v18; 
  __m128 v23; 
  __m128 v; 
  float4 v30; 
  float4 v31; 
  float4 v32; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  float4 v35; 

  __asm { vbroadcastss xmm6, dword ptr [rcx+1Ch] }
  rotationOffsetQuat = constraint->rotationOffsetQuat;
  v9 = constraint;
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, *sourceBoneIndices, &outModelQuat, &outModelTranslation);
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v32, &v35);
  _XMM0 = _mm128_mul_ps(v32.v, outModelQuat.v);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v13 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(_XMM6, (__m128)(_XMM0 & *(_OWORD *)&g_negativeZero.v | _xmm)), v32.v), _mm128_mul_ps(_mm128_sub_ps(g_one.v, _XMM6), outModelQuat.v));
  _XMM1 = _mm128_mul_ps(v13, v13);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
  }
  v17 = _mm128_div_ps(v13, _mm_sqrt_ps(_XMM0));
  v18 = _mm_shuffle_ps(v17, v17, 255);
  _XMM1 = _mm128_mul_ps((__m128)rotationOffsetQuat, v17);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
  }
  v23 = _mm_shuffle_ps((__m128)rotationOffsetQuat, (__m128)rotationOffsetQuat, 255);
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v23, v18), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v17, v17, 201), _mm_shuffle_ps((__m128)rotationOffsetQuat, (__m128)rotationOffsetQuat, 210)), _mm128_mul_ps(_mm_shuffle_ps(v17, v17, 210), _mm_shuffle_ps((__m128)rotationOffsetQuat, (__m128)rotationOffsetQuat, 201))), _mm128_add_ps(_mm128_mul_ps(v23, v17), _mm128_mul_ps((__m128)rotationOffsetQuat, v18)));
  __asm { vblendps xmm4, xmm2, xmm0, 7 }
  *(float *)&_XMM0 = v9->axisMask.v[0];
  v31.v.m128_i32[3] = 0;
  v = v31.v;
  v.m128_f32[0] = *(float *)&_XMM0;
  _XMM3 = v;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdi+14h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+18h], 20h ; ' '
  }
  v31.v = _XMM4;
  v30.v = _XMM3;
  XAnimSetModelBoneRotationWithAxisMask(params, targetBoneInfo, &v30, &v31);
}

/*
==============
XAnimProcDebug_GetAllTargetBonesPartBits
==============
*/
void XAnimProcDebug_GetAllTargetBonesPartBits(const DObj *obj, DObjClientPartBits *partBits)
{
  DObjClientPartBits *v4; 
  __int64 i; 
  DObjProceduralBones *v6; 
  DObjProceduralBones *v7; 
  unsigned __int8 numModels; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int8 *v11; 
  const XModel *Model; 
  XAnimProceduralBones *proceduralBones; 
  unsigned int numConstraints; 
  XAnimConstraint *constraints; 
  __int64 v16; 
  unsigned __int8 *p_localTargetBoneIndex; 
  __int64 v18; 
  unsigned __int16 v19; 
  __int16 v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  DObjProceduralBones *v28; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 630, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 631, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  v4 = partBits;
  for ( i = 24i64; i; --i )
  {
    v4->array[0] = 0;
    v4 = (DObjClientPartBits *)((char *)v4 + 4);
  }
  if ( DObjHasProceduralBones(obj) )
  {
    v6 = DObjLockProceduralBones(obj);
    v28 = v6;
    v7 = v6;
    if ( v6 )
    {
      numModels = v6->numModels;
      if ( numModels )
      {
        v9 = 0i64;
        v10 = numModels;
        v27 = numModels;
        v26 = 0i64;
        do
        {
          v11 = (unsigned __int8 *)v7->modelInfo + v9;
          if ( v11[17] )
          {
            Model = DObjGetModel(obj, v11[16]);
            if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 659, ASSERT_TYPE_ASSERT, "(model != 0)", (const char *)&queryFormat, "model != NULL") )
              __debugbreak();
            proceduralBones = Model->proceduralBones;
            if ( !proceduralBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 662, ASSERT_TYPE_ASSERT, "(procBones != 0)", (const char *)&queryFormat, "procBones != NULL") )
              __debugbreak();
            numConstraints = proceduralBones->numConstraints;
            constraints = proceduralBones->constraints;
            v16 = (__int64)&v7->targetBoneInfo[v11[18]];
            if ( numConstraints )
            {
              p_localTargetBoneIndex = &constraints->localTargetBoneIndex;
              v18 = numConstraints;
              do
              {
                v19 = *(_WORD *)(v16 + 4i64 * *p_localTargetBoneIndex);
                if ( v19 != 255 )
                {
                  v20 = *(_WORD *)(v16 + 4i64 * *p_localTargetBoneIndex);
                  if ( (unsigned int)v19 - 254 <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 278, ASSERT_TYPE_ASSERT, "(boneIndex != 255 && boneIndex != 254)", (const char *)&queryFormat, "boneIndex != NO_BONEINDEX && boneIndex != UNDEFINED_BONEINDEX") )
                    __debugbreak();
                  v21 = v20 & 0x7FFF;
                  if ( v21 >= DObjTotalNumBones(obj) )
                  {
                    LODWORD(v23) = DObjTotalNumBones(obj);
                    LODWORD(v22) = v20 & 0x7FFF;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex & ((1 << 15) - 1) ) < (unsigned)( DObjTotalNumBones( obj ) )", "boneIndex & CLIENT_BONEINDEX_MASK doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v22, v23) )
                      __debugbreak();
                  }
                  if ( (v20 & 0x8000) != 0 && (int)v21 < DObjNumBones(obj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_client.h", 280, ASSERT_TYPE_ASSERT, "(!(boneIndex & (1 << 15)) || ((boneIndex & ((1 << 15) - 1)) >= DObjNumBones( obj )))", (const char *)&queryFormat, "!(boneIndex & CLIENT_BONEINDEX_FLAG) || ((boneIndex & CLIENT_BONEINDEX_MASK) >= DObjNumBones( obj ))") )
                    __debugbreak();
                  if ( v21 >= 0x300 )
                  {
                    LODWORD(v25) = 768;
                    LODWORD(v24) = v20 & 0x7FFF;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v24, v25) )
                      __debugbreak();
                  }
                  partBits->array[(unsigned __int64)(v20 & 0x7FFF) >> 5] |= 0x80000000 >> (v20 & 0x1F);
                }
                p_localTargetBoneIndex += 88;
                --v18;
              }
              while ( v18 );
              v7 = v28;
              v10 = v27;
            }
          }
          v9 = v26 + 32;
          --v10;
          v26 += 32i64;
          v27 = v10;
        }
        while ( v10 );
      }
    }
    DObjUnlockProceduralBones(obj);
  }
}

/*
==============
XAnimProc_Register
==============
*/
void XAnimProc_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimProcNodeData>::ms_typeInfo);
}

/*
==============
XAnimProceduralBonesAddPartBits
==============
*/
void XAnimProceduralBonesAddPartBits(const DObj *obj, DObjPartBits *partBits)
{
  DObjProceduralBones *v4; 
  char v5; 
  unsigned int numPhysicsBones; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 48, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 49, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  v4 = DObjLockProceduralBones(obj);
  if ( v4 && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_enableProceduralBones, "xanim_enableProceduralBones") )
  {
    v5 = 0;
    numPhysicsBones = v4->numPhysicsBones;
    if ( numPhysicsBones && bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::testAnyBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v4->dynamicBonePartBits, partBits) )
    {
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(partBits, &v4->physicsBoneCompletePartBits);
      v5 = 1;
    }
    if ( bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::testAnyBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v4->proceduralBonePartBits, partBits) )
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(partBits, &v4->proceduralBoneCompletePartBits);
    if ( numPhysicsBones && !v5 && bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::testAnyBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v4->dynamicBonePartBits, partBits) )
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(partBits, &v4->physicsBoneCompletePartBits);
  }
  DObjUnlockProceduralBones(obj);
}

/*
==============
XAnimProdDebug_GetAllPhysicsPartBits
==============
*/
void XAnimProdDebug_GetAllPhysicsPartBits(const DObj *obj, DObjClientPartBits *partBits)
{
  DObjClientPartBits *v4; 
  __int64 i; 
  DObjProceduralBones *v6; 
  DObjProceduralBones *v7; 
  unsigned int numPhysicsBones; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int16 boneIndex; 
  unsigned int SkelBoneIndex; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 764, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 765, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  v4 = partBits;
  for ( i = 24i64; i; --i )
  {
    v4->array[0] = 0;
    v4 = (DObjClientPartBits *)((char *)v4 + 4);
  }
  if ( (obj->proceduralBonesHandle.m_value & 0x80000000) != 0 )
  {
    v6 = DObjLockProceduralBones(obj);
    v7 = v6;
    if ( v6 )
    {
      numPhysicsBones = v6->numPhysicsBones;
      if ( numPhysicsBones > 1 )
      {
        v9 = 1i64;
        v10 = numPhysicsBones - 1;
        do
        {
          boneIndex = v7->physicsBones[v9].boneIndex;
          if ( boneIndex != 255 )
          {
            SkelBoneIndex = DObjGetSkelBoneIndex(obj, boneIndex);
            bitarray_base<bitarray<768>>::setBit(partBits, SkelBoneIndex);
          }
          ++v9;
          --v10;
        }
        while ( v10 );
      }
    }
    DObjUnlockProceduralBones(obj);
  }
}

/*
==============
XAnimSetModelBoneRotationWithAxisMask
==============
*/
void XAnimSetModelBoneRotationWithAxisMask(XAnimProcNodeCalcParams *params, const XAnimProceduralBone *targetBoneInfo, const float4 *axisMask, const float4 *modelQuat)
{
  unsigned __int16 parentBoneIndex; 
  __m128 v; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v15; 
  __m128 v16; 
  __m128 v18; 
  __m128 v19; 
  __m128 v24; 
  __m128 v26; 
  __m128 v42; 
  __m128 v43; 
  float4 *outModelQuat; 
  float4 *outModelTranslation; 
  float4 v52; 
  float4 v53; 
  float4 v54; 
  float4 v55; 

  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, &v53, &v54);
  _XMM15 = 0i64;
  __asm
  {
    vcmpltps xmm0, xmm15, xmmword ptr [rsi]
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 )
  {
    parentBoneIndex = targetBoneInfo->parentBoneIndex;
    if ( parentBoneIndex == 255 )
    {
      v = g_unit.v;
    }
    else
    {
      if ( parentBoneIndex >= params->obj->numBones )
      {
        LODWORD(outModelTranslation) = parentBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 135, ASSERT_TYPE_ASSERT, "(unsigned)( targetBoneInfo->parentBoneIndex ) < (unsigned)( params->obj->numBones )", "targetBoneInfo->parentBoneIndex doesn't index params->obj->numBones\n\t%i not in [0, %i)", outModelTranslation, params->obj->numBones) )
          __debugbreak();
      }
      XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->parentBoneIndex, &v52, &v55);
      v = v52.v;
    }
    v12 = _mm128_mul_ps(v, (__m128)_xmm);
    v13 = v53.v;
    v14 = _mm_shuffle_ps(v13, v13, 255);
    v15 = _mm_shuffle_ps(v12, v12, 255);
    v16 = _mm_shuffle_ps(v12, v12, 201);
    _XMM0 = _mm128_mul_ps(v53.v, v12);
    v18 = _mm_shuffle_ps(v12, v12, 210);
    v19 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v13, v13, 210), v16), _mm128_mul_ps(_mm_shuffle_ps(v13, v13, 201), v18));
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm3, xmm2, xmm2
    }
    _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v14, v15), _XMM3);
    v24 = modelQuat->v;
    _mm128_add_ps(v19, _mm128_add_ps(_mm128_mul_ps(v12, v14), _mm128_mul_ps(v53.v, v15)));
    __asm { vblendps xmm10, xmm2, xmm0, 7 }
    v26 = _mm_shuffle_ps(v24, v24, 255);
    _XMM0 = _mm128_mul_ps(v12, modelQuat->v);
    __asm
    {
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm3, xmm2, xmm2
    }
    _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v26, v15), _XMM3);
    _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v24, v24, 210), v16), _mm128_mul_ps(_mm_shuffle_ps(v24, v24, 201), v18)), _mm128_add_ps(_mm128_mul_ps(v12, v26), _mm128_mul_ps(v15, modelQuat->v)));
    __asm
    {
      vblendps xmm3, xmm2, xmm0, 7
      vcmpltps xmm0, xmm15, xmmword ptr [rsi]
      vblendvps xmm2, xmm3, xmm10, xmm0
    }
    _XMM1 = _mm128_mul_ps(_XMM2, _XMM2);
    __asm
    {
      vhaddps xmm0, xmm1, xmm1
      vhaddps xmm0, xmm0, xmm0
    }
    _XMM1 = _mm_sqrt_ps(_XMM0);
    __asm { vcmpeqps xmm0, xmm1, xmm15 }
    _XMM1 = _mm128_div_ps(_XMM2, _XMM1);
    __asm { vblendvps xmm7, xmm1, xmm14, xmm0 }
    v42 = _mm_shuffle_ps(_XMM7, _XMM7, 255);
    v43 = _mm_shuffle_ps(v, v, 255);
    _XMM1 = _mm128_mul_ps(v, _XMM7);
    __asm
    {
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vhaddps xmm3, xmm2, xmm2
    }
    _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v42, v43), _XMM3);
    _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 201), _mm_shuffle_ps(_XMM7, _XMM7, 210)), _mm128_mul_ps(_mm_shuffle_ps(v, v, 210), _mm_shuffle_ps(_XMM7, _XMM7, 201))), _mm128_add_ps(_mm128_mul_ps(v, v42), _mm128_mul_ps(_XMM7, v43)));
    __asm { vblendps xmm2, xmm2, xmm0, 7 }
  }
  XAnimSetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, outModelQuat, outModelTranslation, params->weightScale);
}

/*
==============
XAnimSetModelBoneTranslationWithAxisMaskAndOffset
==============
*/
void XAnimSetModelBoneTranslationWithAxisMaskAndOffset(XAnimProcNodeCalcParams *params, const XAnimProceduralBone *targetBoneInfo, const float4 *axisMask, const float4 *localOffset, const float4 *modelTrans)
{
  unsigned __int16 parentBoneIndex; 
  __m128 v14; 
  __m128 v; 
  __m128 v16; 
  __m128 v17; 
  __m128 v18; 
  __m128 v19; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  float4 *outModelQuat; 
  float4 *outModelTranslation; 
  float4 v35; 
  float4 v36; 
  float4 v37; 
  float4 v38; 

  _XMM10 = 0i64;
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, &v38, &v37);
  __asm
  {
    vcmpltps xmm0, xmm10, xmmword ptr [rbp+0]
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 )
    goto LABEL_3;
  __asm
  {
    vcmpltps xmm0, xmm10, xmmword ptr [rsi]
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 )
  {
LABEL_3:
    parentBoneIndex = targetBoneInfo->parentBoneIndex;
    if ( parentBoneIndex == 255 )
    {
      v = g_unit.v;
      v14 = 0i64;
    }
    else
    {
      XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, parentBoneIndex, &v36, &v35);
      v14 = v35.v;
      v = v36.v;
    }
    v16 = _mm128_mul_ps(v, (__m128)_xmm);
    v17 = _mm128_sub_ps(v37.v, v14);
    v18 = _mm_shuffle_ps(v16, v16, 210);
    v19 = _mm_shuffle_ps(v16, v16, 201);
    v20 = _mm_shuffle_ps(v16, v16, 255);
    v21 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v17, v17, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(v17, v17, 201), v18));
    v22 = _mm128_add_ps(v21, v21);
    _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v22, v22, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(v22, v22, 201), v18)), _mm128_add_ps(_mm128_mul_ps(v20, v22), v17));
    v23 = _mm128_sub_ps(modelTrans->v, v14);
    v24 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v23, v23, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(v23, v23, 201), v18));
    v25 = _mm128_add_ps(v24, v24);
    __asm { vcmpltps xmm0, xmm10, xmmword ptr [rbp+0] }
    _XMM1 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v25, v25, 210), v19), _mm128_mul_ps(_mm_shuffle_ps(v25, v25, 201), v18)), _mm128_add_ps(_mm128_mul_ps(v20, v25), v23)), localOffset->v);
    __asm { vblendvps xmm7, xmm1, xmm6, xmm0 }
    v29 = _mm_shuffle_ps(v, v, 210);
    v30 = _mm_shuffle_ps(v, v, 201);
    v31 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 210), v30), _mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 201), v29));
    v32 = _mm128_add_ps(v31, v31);
    _mm128_add_ps(v14, _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v32, v32, 210), v30), _mm128_mul_ps(_mm_shuffle_ps(v32, v32, 201), v29)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 255), v32), _XMM7)));
  }
  XAnimSetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, outModelQuat, outModelTranslation, params->weightScale);
}


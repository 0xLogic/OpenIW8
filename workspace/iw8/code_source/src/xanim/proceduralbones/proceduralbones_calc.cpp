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
  unsigned int v9; 
  _BYTE *v13; 
  unsigned int v15; 
  const DObj *v22; 
  DObjProceduralBones *v23; 
  DObjProceduralBones *v25; 
  bool v27; 
  bool v28; 
  bool Bool_Internal_DebugName; 
  bool hasPostPhysicsConstraints; 
  bool v31; 
  XAnimProcNodeCalcParams params; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 

  v9 = 0;
  _R15 = animCalcInfo;
  v13 = NULL;
  if ( nodeData )
  {
    v13 = nodeData;
    *(_BYTE *)nodeData = 1;
  }
  if ( obj->proceduralBonesHandle.m_value && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_enableProceduralBones, "xanim_enableProceduralBones") )
  {
    __asm { vmovss  xmm0, [rsp+0E8h+weightScale] }
    v15 = 0;
    __asm { vmovaps [rsp+0E8h+var_48], xmm6 }
    params.obj = obj;
    _RSI = 0i64;
    params.animInfo = animInfo;
    __asm { vmovaps [rsp+0E8h+var_58], xmm7 }
    params.animCalcInfo = _R15;
    params.bNormQuat = bNormQuat;
    params.destBuffer = destBuffer;
    __asm { vmovss  [rsp+0E8h+params.weightScale], xmm0 }
    do
    {
      __asm
      {
        vlddqu  xmm6, xmmword ptr [rsi+r15+0BEA0h]
        vmovdqu xmmword ptr [rsp+rsi+0E8h+otherBitSet.baseclass_0.array], xmm6
      }
      _RSI += 16i64;
      ++v15;
    }
    while ( v15 < 2 );
    _RBX = &otherBitSet;
    __asm { vmovdqu xmm7, cs:__xmm@ffffffffffffffffffffffffffffffff }
    do
    {
      __asm
      {
        vlddqu  xmm0, xmmword ptr [rbx]
        vpxor   xmm6, xmm0, xmm7
        vmovdqu xmmword ptr [rbx], xmm6
      }
      _RBX = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RBX + 16);
      ++v9;
    }
    while ( v9 < 2 );
    v22 = params.obj;
    v23 = DObjLockProceduralBones(params.obj);
    __asm { vmovaps xmm7, [rsp+0E8h+var_58] }
    v25 = v23;
    __asm { vmovaps xmm6, [rsp+0E8h+var_48] }
    if ( v23 )
    {
      v27 = v23->numPhysicsBones && bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::testAnyBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v23->dynamicBonePartBits, &otherBitSet);
      v28 = v25->numConstraints && bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::testAnyBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v25->proceduralBonePartBits, &otherBitSet);
      if ( v27 || v28 )
      {
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_enableConstraints, "xanim_enableConstraints");
        hasPostPhysicsConstraints = v25->hasPostPhysicsConstraints;
        v31 = Bool_Internal_DebugName;
        if ( v28 && Bool_Internal_DebugName )
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "XAnimEvaluateProceduralBones");
          if ( hasPostPhysicsConstraints )
            XAnimProceduralBones_EvaluateConstraints_1_0_(params.obj, v25, &params, (const DObjPartBits *)&otherBitSet);
          else
            XAnimProceduralBones_EvaluateConstraints_0_0_(params.obj, v25, &params, (const DObjPartBits *)&otherBitSet);
          Sys_ProfEndNamedEvent();
        }
        if ( v27 && Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_physicsEnable, "xanim_physicsEnable") )
          XAnimBonePhysicsUpdate(v25, &params);
        if ( v28 && hasPostPhysicsConstraints && v31 )
        {
          Sys_ProfBeginNamedEvent(0xFFFFFFFF, "XAnimEvaluateProceduralBonesPostPhysics");
          XAnimProceduralBones_EvaluateConstraints_1_1_(v22, v25, &params, (const DObjPartBits *)&otherBitSet);
          Sys_ProfEndNamedEvent();
        }
      }
    }
    DObjUnlockProceduralBones(v22);
  }
  else if ( v13 )
  {
    *v13 = 0;
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
  char v58; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovdqa xmm6, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmovups xmm1, xmmword ptr [rdx]
    vmulps  xmm1, xmm1, xmmword ptr [rcx]
    vmovdqa xmm9, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vxorps  xmm7, xmm7, xmm7
    vsubps  xmm8, xmm7, xmm6
    vhaddps xmm10, xmm0, xmm0
    vcmpltps xmm0, xmm6, xmm8
    vmovmskps eax, xmm0
  }
  _RBP = outQuat;
  _RSI = axis;
  _RBX = toVector;
  _RDI = fromVector;
  if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector4_sse.h", 2854, ASSERT_TYPE_SANITY, "( Float4AllLe( vmin, vmax ) )", (const char *)&queryFormat, "Float4AllLe( vmin, vmax )") )
    __debugbreak();
  __asm
  {
    vmovups xmm4, xmmword ptr [rbx]
    vmovups xmm2, xmmword ptr [rdi]
    vshufps xmm1, xmm2, xmm2, 0C9h ; 'É'
    vshufps xmm2, xmm2, xmm2, 0D2h ; 'Ò'
    vmaxps  xmm0, xmm10, xmm8
    vminps  xmm5, xmm0, xmm6
    vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm4, xmm3, xmm0
    vmulps  xmm1, xmm4, xmmword ptr [rsi]
    vinsertps xmm2, xmm1, xmm1, 8
    vhaddps xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vcmpleps xmm0, xmm7, xmm1
    vmovups xmm1, xmmword ptr [rsi]
    vsubps  xmm2, xmm7, xmm1
    vblendvps xmm3, xmm2, xmm1, xmm0
    vmulps  xmm2, xmm5, xmm9
    vaddps  xmm1, xmm2, xmm9
    vsubps  xmm0, xmm9, xmm2
    vsqrtps xmm0, xmm0
    vmulps  xmm2, xmm3, xmm0
    vsqrtps xmm0, xmm1
    vshufps xmm1, xmm2, xmm0, 0FAh ; 'ú'
    vshufps xmm2, xmm2, xmm1, 84h ; '„'
    vmovups xmmword ptr [rbp+0], xmm2
  }
  _R11 = &v58;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+98h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
XAnimEvaluateAimConstraint
==============
*/
void XAnimEvaluateAimConstraint(const XAnimAimConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, const DObjPartBits *partBits, const XAnimConstraintTargetBone *const targetBoneInfo)
{
  int boneIndex; 
  XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  XAnimCalcAnimInfo *animCalcInfo; 
  XAnimUpVectorType upVectorType; 
  __int32 v84; 
  float4 outModelTranslation_8; 
  float4 v158; 
  float4 v159; 
  float4 v160; 
  float4 v161; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  float4 v164; 
  char v165; 
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
  }
  _RSI = constraint;
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, *sourceBoneIndices, &outModelQuat, &outModelTranslation);
  __asm { vmovss  xmm0, dword ptr [rsi] }
  boneIndex = targetBoneInfo->boneIndex;
  destBuffer = params->destBuffer;
  obj = params->obj;
  animCalcInfo = params->animCalcInfo;
  v158.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm8, [rsp+140h+var_108+8]
    vmovss  xmm8, xmm8, xmm0
    vmovups xmm0, xmmword ptr [rbp+40h+var_C0.v]
    vinsertps xmm8, xmm8, dword ptr [rsi+4], 10h
    vinsertps xmm8, xmm8, dword ptr [rsi+8], 20h ; ' '
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm5, xmm0, xmm0, 0FFh
    vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vaddps  xmm5, xmm0, xmm8
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm3, xmm1, xmm6
    vmulps  xmm2, xmm0, xmm7
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vaddps  xmm6, xmm4, xmmword ptr [rbp+40h+var_B0.v]
    vmovups [rsp+140h+var_108+8], xmm8
  }
  XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, boneIndex, &v164, &v161);
  __asm
  {
    vsubps  xmm2, xmm6, xmmword ptr [rsp+140h+var_D8+8]
    vmulps  xmm0, xmm2, xmm2
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vsqrtps xmm1, xmm0
    vmovss  xmm0, dword ptr [rsi+0Ch]
  }
  v158.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, [rsp+140h+var_108+8]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rsi+10h], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+14h], 20h ; ' '
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovups [rsp+140h+var_108+8], xmm3
  }
  v158.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm8, [rsp+140h+var_108+8]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [rsi+1Ch], 10h
    vinsertps xmm8, xmm8, dword ptr [rsi+20h], 20h ; ' '
    vdivps  xmm10, xmm2, xmm1
    vmovups [rsp+140h+var_108+8], xmm8
    vmovdqa [rsp+140h+var_108+8], xmm10
    vmovdqa xmmword ptr [rsp+140h+outModelTranslation+8], xmm3
  }
  XAnimBonePhysics_CalculateShortestRotationQuaternion(&outModelTranslation_8, &v158, &v159);
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp+140h+var_F8.v+8]
    vshufps xmm5, xmm9, xmm9, 0FFh
    vshufps xmm7, xmm9, xmm9, 0D2h ; 'Ò'
    vshufps xmm6, xmm9, xmm9, 0C9h ; 'É'
    vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
  }
  upVectorType = _RSI->upVectorType;
  v158.v.m128_i32[3] = 0;
  __asm
  {
    vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm3, xmm0, xmm6
    vmulps  xmm2, xmm1, xmm7
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm8
    vmovups xmm8, [rsp+140h+var_108+8]
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vmulps  xmm2, xmm0, xmm7
    vmovss  xmm0, dword ptr [rsi+30h]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [rsi+34h], 10h
    vinsertps xmm8, xmm8, dword ptr [rsi+38h], 20h ; ' '
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vmovups [rsp+140h+var_108+8], xmm8
    vaddps  xmm11, xmm1, xmm5
  }
  if ( upVectorType )
  {
    v84 = upVectorType - 1;
    if ( v84 )
    {
      if ( v84 == 1 )
      {
        XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v160, &v159);
        __asm
        {
          vmovups xmm0, xmmword ptr [rsp+140h+var_F8.v+8]
          vsubps  xmm8, xmm0, xmmword ptr [rsp+140h+var_D8+8]
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 428, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "bad up vector type") )
      {
        __debugbreak();
      }
    }
    else
    {
      XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v159, &v160);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+140h+var_F8.v+8]
        vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
        vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
        vshufps xmm5, xmm0, xmm0, 0FFh
        vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm6
        vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm7
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm4, xmm0, xmm0
        vmulps  xmm0, xmm5, xmm4
        vaddps  xmm5, xmm0, xmm8
        vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm7
        vmulps  xmm3, xmm1, xmm6
        vsubps  xmm1, xmm3, xmm2
        vaddps  xmm8, xmm1, xmm5
      }
    }
  }
  __asm
  {
    vmulps  xmm0, xmm10, xmm8
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vmulps  xmm1, xmm0, xmm10
    vsubps  xmm6, xmm8, xmm1
    vmulps  xmm0, xmm6, xmm6
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm5, xmm1, xmm1
    vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vrsqrtps xmm4, xmm5
    vmulps  xmm0, xmm4, xmm4
    vmulps  xmm2, xmm0, xmm5
    vmulps  xmm0, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vsubps  xmm3, xmm1, xmm2
    vmulps  xmm2, xmm3, xmm0
    vaddps  xmm1, xmm2, xmm4
    vxorps  xmm0, xmm0, xmm0
    vmulps  xmm1, xmm6, xmm1
    vcmpneqps xmm0, xmm5, xmm0
    vblendvps xmm2, xmm11, xmm1, xmm0
    vmovdqa xmmword ptr [rsp+140h+outModelTranslation+8], xmm2
    vmovdqa xmmword ptr [rsp+140h+var_F8.v+8], xmm10
    vmovdqa [rsp+140h+var_108+8], xmm11
  }
  CalculateShortestRotationAboutAxis(&v158, &outModelTranslation_8, &v159, &v160);
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp+140h+var_E8.v+8]
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
    vshufps xmm6, xmm4, xmm4, 0FFh
    vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm3, xmm0
    vmulps  xmm1, xmm4, xmm9
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
    vshufps xmm7, xmm9, xmm9, 0FFh
    vmulps  xmm4, xmm4, xmm7
    vmulps  xmm0, xmm7, xmm6
    vsubps  xmm2, xmm0, xmm3
    vmulps  xmm1, xmm9, xmm6
    vaddps  xmm1, xmm4, xmm1
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm4, xmm2, xmm0, 7
    vmovss  xmm0, dword ptr [rsi+24h]
  }
  v158.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, [rsp+140h+var_108+8]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rsi+28h], 10h
    vinsertps xmm3, xmm3, dword ptr [rsi+2Ch], 20h ; ' '
    vmovdqa xmmword ptr [rsp+140h+var_F8.v+8], xmm3
    vmovdqa xmmword ptr [rsp+140h+var_E8.v+8], xmm4
  }
  XAnimSetModelBoneRotationWithAxisMask(params, targetBoneInfo, &v159, &v160);
  _R11 = &v165;
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
XAnimEvaluateDistanceDrivenRotationOffsetConstraint
==============
*/
void XAnimEvaluateDistanceDrivenRotationOffsetConstraint(const XAnimDistanceDrivenOffsetConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, const DObjPartBits *partBits, const XAnimConstraintTargetBone *targetBoneInfo)
{
  const float4 *fmt; 
  float4 *outModelTranslation; 
  float v59; 
  float4 outFractionalDistance; 
  float4 outModelQuat; 
  float4 v62; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RBX = params;
  _RBP = constraint;
  if ( !constraint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 604, ASSERT_TYPE_ASSERT, "(constraint != 0)", (const char *)&queryFormat, "constraint != NULL") )
    __debugbreak();
  if ( !sourceBoneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 605, ASSERT_TYPE_ASSERT, "(sourceBoneIndices != 0)", (const char *)&queryFormat, "sourceBoneIndices != NULL") )
    __debugbreak();
  if ( !_RBX->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 606, ASSERT_TYPE_ASSERT, "(params->obj != 0)", (const char *)&queryFormat, "params->obj != NULL") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 607, ASSERT_TYPE_ASSERT, "(partBits != 0)", (const char *)&queryFormat, "partBits != NULL") )
    __debugbreak();
  if ( !targetBoneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 608, ASSERT_TYPE_ASSERT, "(targetBoneInfo != 0)", (const char *)&queryFormat, "targetBoneInfo != NULL") )
    __debugbreak();
  XAnimEvaluateFractionalDistance(_RBP, sourceBoneIndices, _RBX, &outFractionalDistance);
  XAnimGetLocalBoneTransform(_RBX->animCalcInfo, _RBX->obj, _RBX->destBuffer, targetBoneInfo->boneIndex, &outModelQuat, &v62);
  __asm
  {
    vmovups xmm3, xmmword ptr [rbp+0]
    vmulps  xmm0, xmm3, xmmword ptr [rbp+10h]
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vandps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vorps   xmm4, xmm2, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vsubps  xmm1, xmm0, xmmword ptr [rsp+0D8h+outFractionalDistance.v]
    vmulps  xmm0, xmm4, xmmword ptr [rsp+0D8h+outFractionalDistance.v]
    vmulps  xmm0, xmm0, xmmword ptr [rbp+10h]
    vmovups xmm4, xmmword ptr [rsp+0D8h+outModelQuat.v]
    vmulps  xmm3, xmm1, xmm3
    vaddps  xmm2, xmm0, xmm3
    vmulps  xmm1, xmm2, xmm2
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm7, xmm2, xmm1
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
    vshufps xmm6, xmm4, xmm4, 0FFh
    vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm3, xmm0
    vmulps  xmm1, xmm4, xmm7
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vshufps xmm8, xmm7, xmm7, 0FFh
    vmulps  xmm0, xmm8, xmm6
    vmulps  xmm4, xmm4, xmm8
    vmulps  xmm1, xmm6, xmm7
    vaddps  xmm1, xmm4, xmm1
    vhaddps xmm3, xmm2, xmm2
    vsubps  xmm2, xmm0, xmm3
    vaddps  xmm0, xmm5, xmm1
    vmovss  xmm1, dword ptr [rbx+18h]
    vmovss  [rsp+0D8h+var_A8], xmm1
    vmovups xmm1, xmmword ptr [rsp+0D8h+var_78.v]
    vblendps xmm0, xmm2, xmm0, 7
  }
  XAnimSetLocalBoneTransform(_RBX->animCalcInfo, _RBX->obj, _RBX->destBuffer, targetBoneInfo->boneIndex, fmt, outModelTranslation, v59);
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
XAnimEvaluateDistanceDrivenTranslationOffsetConstraint
==============
*/
void XAnimEvaluateDistanceDrivenTranslationOffsetConstraint(const XAnimDistanceDrivenOffsetConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, const DObjPartBits *partBits, const XAnimConstraintTargetBone *targetBoneInfo)
{
  unsigned __int16 parentBoneIndex; 
  float4 outFractionalDistance_8; 
  float4 v55; 
  float4 v56; 
  float4 v57; 
  float4 outModelTranslation; 
  float4 outModelQuat; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  _RDI = constraint;
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
  __asm { vxorps  xmm8, xmm8, xmm8 }
  XAnimEvaluateFractionalDistance(_RDI, sourceBoneIndices, params, &outFractionalDistance_8);
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, &outModelQuat, &outModelTranslation);
  __asm { vmovss  xmm0, dword ptr [rdi] }
  v55.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm4, [rsp+110h+var_D8+8]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rdi+10h]
    vinsertps xmm4, xmm4, dword ptr [rdi+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdi+8], 20h ; ' '
    vmovups [rsp+110h+var_D8+8], xmm4
  }
  v55.v.m128_i32[3] = 0;
  __asm { vmovups xmm3, [rsp+110h+var_D8+8] }
  parentBoneIndex = targetBoneInfo->parentBoneIndex;
  __asm
  {
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdi+14h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+18h], 20h ; ' '
    vsubps  xmm0, xmm3, xmm4
    vmulps  xmm1, xmm0, xmmword ptr [rsp+110h+outFractionalDistance.v+8]
    vaddps  xmm9, xmm1, xmm4
    vmovups [rsp+110h+var_D8+8], xmm3
  }
  if ( parentBoneIndex == 255 )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vblendps xmm0, xmm0, xmm8, 7
      vmovups xmmword ptr [rbp+4Fh+var_C0.v], xmm0
    }
  }
  else
  {
    XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, parentBoneIndex, &v56, &v57);
    __asm { vmovups xmm0, xmmword ptr [rbp+4Fh+var_C0.v] }
  }
  __asm
  {
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
    vaddps  xmm5, xmm0, xmm9
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm2, xmm0, xmm7
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm3, xmm1, xmm5
    vaddps  xmm0, xmm3, xmmword ptr [rbp+4Fh+outModelTranslation.v]
    vmovups xmmword ptr [rsp+110h+outFractionalDistance.v+8], xmm0
    vmovdqa [rsp+110h+var_D8+8], xmm8
    vmovdqa xmmword ptr [rbp+4Fh+var_B0.v], xmm8
  }
  XAnimSetModelBoneTranslationWithAxisMaskAndOffset(params, targetBoneInfo, &v57, &v55, &outFractionalDistance_8);
  _R11 = &v60;
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
XAnimEvaluateFractionalDistance
==============
*/
void XAnimEvaluateFractionalDistance(const XAnimDistanceDrivenOffsetConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, float4 *outFractionalDistance)
{
  __int128 v89; 
  __int128 v90; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  float4 v93; 
  float4 v94; 
  char v95; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
  }
  _RDI = outFractionalDistance;
  _RBX = constraint;
  if ( !constraint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 501, ASSERT_TYPE_ASSERT, "(constraint != 0)", (const char *)&queryFormat, "constraint != NULL") )
    __debugbreak();
  if ( !sourceBoneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 502, ASSERT_TYPE_ASSERT, "(sourceBoneIndices != 0)", (const char *)&queryFormat, "sourceBoneIndices != NULL") )
    __debugbreak();
  if ( !params->obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 503, ASSERT_TYPE_ASSERT, "(params->obj != 0)", (const char *)&queryFormat, "params->obj != NULL") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 504, ASSERT_TYPE_ASSERT, "(outFractionalDistance != 0)", (const char *)&queryFormat, "outFractionalDistance != NULL") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+20h] }
  HIDWORD(v89) = 0;
  __asm
  {
    vmovups xmm8, xmmword ptr [rsp+30h]
    vmovss  xmm8, xmm8, xmm0
    vinsertps xmm8, xmm8, dword ptr [rbx+24h], 10h
    vinsertps xmm8, xmm8, dword ptr [rbx+28h], 20h ; ' '
    vmovss  xmm0, dword ptr [rbx+2Ch]
    vmovups xmmword ptr [rsp+30h], xmm8
  }
  HIDWORD(v90) = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp+30h]
    vmovss  xmm9, xmm9, xmm0
    vinsertps xmm9, xmm9, dword ptr [rbx+30h], 10h
    vinsertps xmm9, xmm9, dword ptr [rbx+34h], 20h ; ' '
    vxorps  xmm10, xmm10, xmm10
  }
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, *sourceBoneIndices, &outModelQuat, &outModelTranslation);
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v93, &v94);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+108h+outModelQuat.v]
    vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm5, xmm0, xmm0, 0FFh
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
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vmovups xmm1, xmmword ptr [rsp+108h+var_A8.v]
    vaddps  xmm8, xmm4, xmmword ptr [rsp+108h+var_B8.v]
    vshufps xmm7, xmm1, xmm1, 0D2h ; 'Ò'
    vshufps xmm5, xmm1, xmm1, 0FFh
    vshufps xmm6, xmm1, xmm1, 0C9h ; 'É'
    vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
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
    vbroadcastss xmm3, dword ptr [rbx+3Ch]
    vaddps  xmm4, xmm1, xmm5
    vaddps  xmm1, xmm4, xmmword ptr [rsp+108h+var_98.v]
    vbroadcastss xmm4, dword ptr [rbx+38h]
    vsubps  xmm2, xmm8, xmm1
    vmulps  xmm0, xmm2, xmm2
    vinsertps xmm1, xmm0, xmm0, 8
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vsqrtps xmm1, xmm0
    vmulps  xmm2, xmm1, xmm4
    vaddps  xmm7, xmm2, xmm3
    vmovdqa xmm6, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
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
    __asm
    {
      vmovups xmm1, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
      vsubps  xmm0, xmm1, xmm3
      vaddps  xmm0, xmm0, xmm0
      vaddps  xmm1, xmm0, xmm1
      vmulps  xmm2, xmm3, xmm3
      vmulps  xmm3, xmm1, xmm2
    }
  }
  __asm { vmovups xmmword ptr [rdi], xmm3 }
  _R11 = &v95;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
XAnimEvaluatePositionConstraint
==============
*/
void XAnimEvaluatePositionConstraint(const XAnimPositionConstraint *constraint, const unsigned __int16 *sourceBoneIndices, XAnimProcNodeCalcParams *params, const DObjPartBits *partBits, const XAnimConstraintTargetBone *targetBoneInfo)
{
  int v14; 
  XAnimCalcBuffer *destBuffer; 
  const DObj *obj; 
  XAnimCalcAnimInfo *animCalcInfo; 
  float4 outModelTranslation_8; 
  float4 v90; 
  float4 v91; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  float4 v94; 
  float4 v95; 
  __int64 v96; 
  char v97; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v96;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovss  xmm0, dword ptr [rcx+28h]
  }
  v14 = *sourceBoneIndices;
  destBuffer = params->destBuffer;
  outModelQuat.v.m128_i32[3] = 0;
  _RDI = constraint;
  __asm { vmovups xmm8, xmmword ptr [rsp+130h+var_D8.v+8] }
  obj = params->obj;
  __asm
  {
    vmovss  xmm8, xmm8, xmm0
    vmovss  xmm0, dword ptr [rcx+34h]
    vinsertps xmm8, xmm8, dword ptr [rcx+2Ch], 10h
    vinsertps xmm8, xmm8, dword ptr [rcx+30h], 20h ; ' '
    vmovups xmmword ptr [rsp+130h+var_D8.v+8], xmm8
  }
  outModelQuat.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm10, xmmword ptr [rsp+130h+var_D8.v+8]
    vmovss  xmm10, xmm10, xmm0
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vinsertps xmm10, xmm10, dword ptr [rcx+38h], 10h
    vinsertps xmm10, xmm10, dword ptr [rcx+3Ch], 20h ; ' '
    vmovups xmmword ptr [rsp+130h+var_D8.v+8], xmm10
  }
  outModelQuat.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm11, xmmword ptr [rsp+130h+var_D8.v+8]
    vmovss  xmm11, xmm11, xmm0
    vinsertps xmm11, xmm11, dword ptr [rcx+20h], 10h
    vinsertps xmm11, xmm11, dword ptr [rcx+24h], 20h ; ' '
    vmovss  xmm0, dword ptr [rcx+40h]
    vmovups xmmword ptr [rsp+130h+var_D8.v+8], xmm11
  }
  outModelQuat.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm9, xmmword ptr [rsp+130h+var_D8.v+8]
    vmovss  xmm9, xmm9, xmm0
    vinsertps xmm9, xmm9, dword ptr [rcx+44h], 10h
    vinsertps xmm9, xmm9, dword ptr [rcx+48h], 20h ; ' '
  }
  animCalcInfo = params->animCalcInfo;
  __asm { vmovups xmmword ptr [rsp+130h+var_D8.v+8], xmm9 }
  XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v14, &outModelQuat, &outModelTranslation);
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v94, &v95);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+130h+var_D8.v+8]
    vshufps xmm7, xmm0, xmm0, 0D2h ; 'Ò'
    vshufps xmm6, xmm0, xmm0, 0C9h ; 'É'
    vshufps xmm5, xmm0, xmm0, 0FFh
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
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vsubps  xmm1, xmm3, xmm2
    vaddps  xmm4, xmm1, xmm5
    vmovups xmm1, xmmword ptr [rbp+30h+var_B0.v]
    vaddps  xmm8, xmm4, xmmword ptr [rsp+130h+var_C8+8]
    vshufps xmm5, xmm1, xmm1, 0FFh
    vshufps xmm7, xmm1, xmm1, 0D2h ; 'Ò'
    vshufps xmm6, xmm1, xmm1, 0C9h ; 'É'
    vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
    vmulps  xmm3, xmm0, xmm6
    vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
    vmulps  xmm2, xmm1, xmm7
    vsubps  xmm0, xmm3, xmm2
    vaddps  xmm4, xmm0, xmm0
    vmulps  xmm0, xmm5, xmm4
    vaddps  xmm5, xmm0, xmm10
    vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm6
    vmulps  xmm2, xmm0, xmm7
    vsubps  xmm1, xmm3, xmm2
    vbroadcastss xmm2, dword ptr [rdi]
    vaddps  xmm4, xmm1, xmm5
    vaddps  xmm1, xmm4, xmmword ptr [rbp+30h+var_A0.v]
    vsubps  xmm3, xmm1, xmm8
    vmulps  xmm0, xmm3, xmm2
    vaddps  xmm1, xmm0, xmm8
    vmovups xmmword ptr [rsp+130h+outModelTranslation+8], xmm1
    vmovdqa [rsp+130h+var_F8+8], xmm11
    vmovdqa [rsp+130h+var_E8+8], xmm9
  }
  XAnimSetModelBoneTranslationWithAxisMaskAndOffset(params, targetBoneInfo, &v91, &v90, &outModelTranslation_8);
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
  float4 v61; 
  float4 v62; 
  float4 v63; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  float4 v66; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vbroadcastss xmm6, dword ptr [rcx+1Ch]
    vmovups xmm8, xmmword ptr [rcx]
  }
  _RDI = constraint;
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, *sourceBoneIndices, &outModelQuat, &outModelTranslation);
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, sourceBoneIndices[1], &v63, &v66);
  __asm
  {
    vmovups xmm5, xmmword ptr [rsp+0E8h+var_98.v]
    vmulps  xmm0, xmm5, xmmword ptr [rsp+0E8h+var_88.v]
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vandps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vorps   xmm3, xmm2, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vsubps  xmm1, xmm0, xmm6
    vmulps  xmm2, xmm1, xmmword ptr [rsp+0E8h+var_88.v]
    vmulps  xmm0, xmm6, xmm3
    vmulps  xmm0, xmm0, xmm5
    vaddps  xmm3, xmm0, xmm2
    vmulps  xmm1, xmm3, xmm3
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm4, xmm3, xmm1
    vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
    vshufps xmm2, xmm4, xmm4, 0D2h ; 'Ò'
    vshufps xmm6, xmm4, xmm4, 0FFh
    vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm3, xmm0
    vmulps  xmm1, xmm8, xmm4
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vhaddps xmm3, xmm2, xmm2
    vshufps xmm7, xmm8, xmm8, 0FFh
    vmulps  xmm4, xmm7, xmm4
    vmulps  xmm0, xmm7, xmm6
    vsubps  xmm2, xmm0, xmm3
    vmulps  xmm1, xmm8, xmm6
    vaddps  xmm1, xmm4, xmm1
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm4, xmm2, xmm0, 7
    vmovss  xmm0, dword ptr [rdi+10h]
  }
  v62.v.m128_i32[3] = 0;
  __asm
  {
    vmovups xmm3, [rsp+0E8h+var_A8]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdi+14h], 10h
    vinsertps xmm3, xmm3, dword ptr [rdi+18h], 20h ; ' '
    vmovups [rsp+0E8h+var_A8], xmm3
    vmovdqa [rsp+0E8h+var_A8], xmm4
    vmovdqa [rsp+0E8h+var_B8], xmm3
  }
  XAnimSetModelBoneRotationWithAxisMask(params, targetBoneInfo, &v61, &v62);
  _R11 = &v67;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  float4 *outModelQuat; 
  float4 *outModelTranslation; 
  float v107; 
  float4 v108; 
  float4 v109; 
  float4 v110; 
  float4 v111; 

  __asm { vmovaps [rsp+148h+var_B8], xmm15 }
  _RBP = modelQuat;
  _RBX = params;
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, &v109, &v110);
  __asm
  {
    vmovups xmm2, xmmword ptr [rbp+0]
    vxorps  xmm15, xmm15, xmm15
    vcmpltps xmm0, xmm15, xmmword ptr [rsi]
    vmovmskps eax, xmm0
  }
  if ( (_EAX & 0xF) != 0 )
  {
    parentBoneIndex = targetBoneInfo->parentBoneIndex;
    __asm
    {
      vmovaps [rsp+148h+var_28], xmm6
      vmovaps [rsp+148h+var_38], xmm7
      vmovaps [rsp+148h+var_48], xmm8
      vmovaps [rsp+148h+var_58], xmm9
      vmovaps [rsp+148h+var_68], xmm10
      vmovaps [rsp+148h+var_78], xmm11
      vmovaps [rsp+148h+var_88], xmm12
      vmovaps [rsp+148h+var_98], xmm13
      vmovaps [rsp+148h+var_A8], xmm14
      vmovdqa xmm14, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
    }
    if ( parentBoneIndex == 255 )
    {
      __asm { vmovdqa xmm13, xmm14 }
    }
    else
    {
      if ( parentBoneIndex >= _RBX->obj->numBones )
      {
        LODWORD(outModelTranslation) = parentBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_calc.cpp", 135, ASSERT_TYPE_ASSERT, "(unsigned)( targetBoneInfo->parentBoneIndex ) < (unsigned)( params->obj->numBones )", "targetBoneInfo->parentBoneIndex doesn't index params->obj->numBones\n\t%i not in [0, %i)", outModelTranslation, _RBX->obj->numBones) )
          __debugbreak();
      }
      XAnimGetLocalBoneTransform(_RBX->animCalcInfo, _RBX->obj, _RBX->destBuffer, targetBoneInfo->parentBoneIndex, &v108, &v111);
      __asm { vmovups xmm13, xmmword ptr [rsp+148h+var_108.v] }
    }
    __asm
    {
      vmulps  xmm12, xmm13, cs:__xmm@3f800000bf800000bf800000bf800000
      vmovups xmm6, xmmword ptr [rsp+148h+var_F8.v]
      vshufps xmm7, xmm6, xmm6, 0FFh
      vshufps xmm11, xmm12, xmm12, 0FFh
      vmulps  xmm4, xmm12, xmm7
      vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
      vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
      vshufps xmm8, xmm12, xmm12, 0C9h ; 'É'
      vmulps  xmm3, xmm0, xmm8
      vmulps  xmm0, xmm6, xmm12
      vshufps xmm9, xmm12, xmm12, 0D2h ; 'Ò'
      vmulps  xmm2, xmm1, xmm9
      vsubps  xmm5, xmm3, xmm2
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm3, xmm2, xmm2
      vmulps  xmm0, xmm7, xmm11
      vsubps  xmm2, xmm0, xmm3
      vmulps  xmm1, xmm6, xmm11
      vmovups xmm6, xmmword ptr [rbp+0]
      vaddps  xmm1, xmm4, xmm1
      vaddps  xmm0, xmm5, xmm1
      vblendps xmm10, xmm2, xmm0, 7
      vshufps xmm7, xmm6, xmm6, 0FFh
      vmulps  xmm4, xmm12, xmm7
      vshufps xmm0, xmm6, xmm6, 0D2h ; 'Ò'
      vmulps  xmm3, xmm0, xmm8
      vmulps  xmm0, xmm12, xmm6
      vmovaps xmm12, [rsp+148h+var_88]
      vshufps xmm1, xmm6, xmm6, 0C9h ; 'É'
      vmulps  xmm2, xmm1, xmm9
      vmovaps xmm9, [rsp+148h+var_58]
      vinsertps xmm1, xmm0, xmm0, 8
      vsubps  xmm5, xmm3, xmm2
      vhaddps xmm2, xmm1, xmm1
      vhaddps xmm3, xmm2, xmm2
      vmulps  xmm0, xmm7, xmm11
      vsubps  xmm2, xmm0, xmm3
      vmulps  xmm1, xmm11, xmm6
      vmovaps xmm11, [rsp+148h+var_78]
      vaddps  xmm1, xmm4, xmm1
      vaddps  xmm0, xmm5, xmm1
      vblendps xmm3, xmm2, xmm0, 7
      vcmpltps xmm0, xmm15, xmmword ptr [rsi]
      vblendvps xmm2, xmm3, xmm10, xmm0
      vmovaps xmm10, [rsp+148h+var_68]
      vmulps  xmm1, xmm2, xmm2
      vhaddps xmm0, xmm1, xmm1
      vhaddps xmm0, xmm0, xmm0
      vsqrtps xmm1, xmm0
      vcmpeqps xmm0, xmm1, xmm15
      vdivps  xmm1, xmm2, xmm1
      vblendvps xmm7, xmm1, xmm14, xmm0
      vmovaps xmm14, [rsp+148h+var_A8]
      vshufps xmm8, xmm7, xmm7, 0FFh
      vshufps xmm6, xmm13, xmm13, 0FFh
      vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
      vshufps xmm1, xmm13, xmm13, 0C9h ; 'É'
      vmulps  xmm3, xmm1, xmm0
      vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
      vshufps xmm2, xmm13, xmm13, 0D2h ; 'Ò'
      vmulps  xmm0, xmm2, xmm1
      vmulps  xmm1, xmm13, xmm7
      vsubps  xmm5, xmm3, xmm0
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vmulps  xmm0, xmm8, xmm6
      vmulps  xmm4, xmm13, xmm8
      vmovaps xmm13, [rsp+148h+var_98]
      vmovaps xmm8, [rsp+148h+var_48]
      vmulps  xmm1, xmm7, xmm6
      vmovaps xmm7, [rsp+148h+var_38]
      vmovaps xmm6, [rsp+148h+var_28]
      vhaddps xmm3, xmm2, xmm2
      vsubps  xmm2, xmm0, xmm3
      vaddps  xmm1, xmm4, xmm1
      vaddps  xmm0, xmm5, xmm1
      vblendps xmm2, xmm2, xmm0, 7
    }
  }
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+18h]
    vmovss  [rsp+148h+var_118], xmm1
    vmovups xmm1, xmmword ptr [rsp+148h+var_E8.v]
    vmovups xmm0, xmm2
  }
  XAnimSetLocalBoneTransform(_RBX->animCalcInfo, _RBX->obj, _RBX->destBuffer, targetBoneInfo->boneIndex, outModelQuat, outModelTranslation, v107);
  __asm { vmovaps xmm15, [rsp+148h+var_B8] }
}

/*
==============
XAnimSetModelBoneTranslationWithAxisMaskAndOffset
==============
*/
void XAnimSetModelBoneTranslationWithAxisMaskAndOffset(XAnimProcNodeCalcParams *params, const XAnimProceduralBone *targetBoneInfo, const float4 *axisMask, const float4 *localOffset, const float4 *modelTrans)
{
  unsigned __int16 parentBoneIndex; 
  float4 *outModelQuat; 
  float4 *outModelTranslation; 
  float v93; 
  float4 v94; 
  float4 v95; 
  float4 v96; 
  float4 v97; 
  char v105; 

  __asm { vmovaps [rsp+118h+var_68], xmm10 }
  _R14 = modelTrans;
  _RBX = params;
  __asm { vxorps  xmm10, xmm10, xmm10 }
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, targetBoneInfo->boneIndex, &v97, &v96);
  __asm
  {
    vcmpltps xmm0, xmm10, xmmword ptr [rbp+0]
    vmovups xmm1, xmmword ptr [r14]
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
    __asm
    {
      vmovaps [rsp+118h+var_28], xmm6
      vmovaps [rsp+118h+var_38], xmm7
      vmovaps [rsp+118h+var_48], xmm8
      vmovaps [rsp+118h+var_58], xmm9
      vmovaps [rsp+118h+var_78], xmm11
      vmovaps [rsp+118h+var_88], xmm12
    }
    if ( parentBoneIndex == 255 )
    {
      __asm
      {
        vmovdqa xmm11, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
        vxorps  xmm12, xmm12, xmm12
      }
    }
    else
    {
      XAnimGetLocalBoneTransform(_RBX->animCalcInfo, _RBX->obj, _RBX->destBuffer, parentBoneIndex, &v95, &v94);
      __asm
      {
        vmovups xmm12, xmmword ptr [rsp+118h+var_D8.v]
        vmovups xmm11, xmmword ptr [rsp+118h+var_C8.v]
      }
    }
    __asm
    {
      vmulps  xmm1, xmm11, cs:__xmm@3f800000bf800000bf800000bf800000
      vmovups xmm0, xmmword ptr [rsp+118h+var_B8.v]
      vsubps  xmm5, xmm0, xmm12
      vshufps xmm9, xmm1, xmm1, 0D2h ; 'Ò'
      vshufps xmm7, xmm1, xmm1, 0C9h ; 'É'
      vshufps xmm8, xmm1, xmm1, 0FFh
      vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
      vmulps  xmm3, xmm0, xmm7
      vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
      vmulps  xmm2, xmm1, xmm9
      vsubps  xmm0, xmm3, xmm2
      vaddps  xmm4, xmm0, xmm0
      vmulps  xmm0, xmm8, xmm4
      vaddps  xmm5, xmm0, xmm5
      vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
      vmulps  xmm2, xmm0, xmm9
      vmovups xmm0, xmmword ptr [r14]
      vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
      vmulps  xmm3, xmm1, xmm7
      vsubps  xmm1, xmm3, xmm2
      vaddps  xmm6, xmm1, xmm5
      vsubps  xmm5, xmm0, xmm12
      vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
      vmulps  xmm3, xmm0, xmm7
      vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
      vmulps  xmm2, xmm1, xmm9
      vsubps  xmm0, xmm3, xmm2
      vaddps  xmm4, xmm0, xmm0
      vmulps  xmm0, xmm8, xmm4
      vaddps  xmm5, xmm0, xmm5
      vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
      vmulps  xmm2, xmm0, xmm9
      vcmpltps xmm0, xmm10, xmmword ptr [rbp+0]
      vmovaps xmm9, [rsp+118h+var_58]
      vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
      vmulps  xmm3, xmm1, xmm7
      vsubps  xmm1, xmm3, xmm2
      vaddps  xmm4, xmm1, xmm5
      vaddps  xmm1, xmm4, xmmword ptr [rsi]
      vblendvps xmm7, xmm1, xmm6, xmm0
      vshufps xmm8, xmm11, xmm11, 0D2h ; 'Ò'
      vshufps xmm6, xmm11, xmm11, 0C9h ; 'É'
      vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
      vmulps  xmm3, xmm0, xmm6
      vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
      vmulps  xmm2, xmm1, xmm8
      vsubps  xmm0, xmm3, xmm2
      vaddps  xmm4, xmm0, xmm0
      vshufps xmm5, xmm11, xmm11, 0FFh
      vmovaps xmm11, [rsp+118h+var_78]
      vmulps  xmm0, xmm5, xmm4
      vaddps  xmm5, xmm0, xmm7
      vmovaps xmm7, [rsp+118h+var_38]
      vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
      vmulps  xmm3, xmm1, xmm6
      vmovaps xmm6, [rsp+118h+var_28]
      vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
      vmulps  xmm2, xmm0, xmm8
      vmovaps xmm8, [rsp+118h+var_48]
      vsubps  xmm1, xmm3, xmm2
      vaddps  xmm3, xmm1, xmm5
      vaddps  xmm1, xmm12, xmm3
      vmovaps xmm12, [rsp+118h+var_88]
    }
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rsp+118h+var_E8], xmm0
    vmovups xmm0, xmmword ptr [rsp+118h+var_A8.v]
  }
  XAnimSetLocalBoneTransform(_RBX->animCalcInfo, _RBX->obj, _RBX->destBuffer, targetBoneInfo->boneIndex, outModelQuat, outModelTranslation, v93);
  _R11 = &v105;
  __asm { vmovaps xmm10, xmmword ptr [r11-50h] }
}


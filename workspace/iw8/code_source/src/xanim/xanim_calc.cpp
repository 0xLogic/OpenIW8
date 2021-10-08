/*
==============
XAnimCalcDefaultBlendNode
==============
*/

void __fastcall XAnimCalcDefaultBlendNode(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *info, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  ?XAnimCalcDefaultBlendNode@@YAXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEIBUXAnimInfo@@M_NPEAUXAnimCalcBuffer@@W4XAnimNodeCalcMode@@@Z(animInfo, obj, info, weightScale, bNormQuat, destBuffer, calcMode);
}

/*
==============
XAnim_CalcDelta3DForTime
==============
*/

void __fastcall XAnim_CalcDelta3DForTime(const XAnimParts *anim, const float time, vec4_t *rotDelta, float4 *posDelta)
{
  ?XAnim_CalcDelta3DForTime@@YAXPEBUXAnimParts@@MAEATvec4_t@@AEAUfloat4@@@Z(anim, time, rotDelta, posDelta);
}

/*
==============
XAnimCalcNonAdditiveChildren
==============
*/

unsigned __int16 __fastcall XAnimCalcNonAdditiveChildren(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *nodeInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  return ?XAnimCalcNonAdditiveChildren@@YAGPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimInfo@@M_NPEAUXAnimCalcBuffer@@W4XAnimNodeCalcMode@@@Z(animInfo, obj, nodeInfo, weightScale, bNormQuat, destBuffer, calcMode);
}

/*
==============
XAnimSetLocalBoneTransform
==============
*/

void __fastcall XAnimSetLocalBoneTransform(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const float4 *weightScale, const float4 *hierarchyIter, float targetBasePoseQuat)
{
  ?XAnimSetLocalBoneTransform@@YQXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEAUXAnimCalcBuffer@@HUfloat4@@3M@Z(animCalcInfo, obj, buffer, boneIndex, weightScale, hierarchyIter, targetBasePoseQuat);
}

/*
==============
XAnimGetLocalBindposeTransform
==============
*/

void __fastcall XAnimGetLocalBindposeTransform(const DObj *obj, const int boneIndex, float4 *outModelQuat, float4 *outModelTranslation)
{
  ?XAnimGetLocalBindposeTransform@@YAXPEBUDObj@@HPEIAUfloat4@@1@Z(obj, boneIndex, outModelQuat, outModelTranslation);
}

/*
==============
XAnimCalcFinalizeBuffer
==============
*/

void __fastcall XAnimCalcFinalizeBuffer(const XAnimCalcAnimInfo *animInfo, const DObj *obj, float weightScale, const XAnimCalcBuffer *calcBuffer, XAnimCalcBuffer *destBuffer, bool normalizeChildren, bool bNormQuat, XAnimNodeCalcMode calcMode)
{
  ?XAnimCalcFinalizeBuffer@@YAXPEBUXAnimCalcAnimInfo@@PEBUDObj@@MPEBUXAnimCalcBuffer@@PEAU3@_N4W4XAnimNodeCalcMode@@@Z(animInfo, obj, weightScale, calcBuffer, destBuffer, normalizeChildren, bNormQuat, calcMode);
}

/*
==============
XAnimCalcAddPartBits
==============
*/

void __fastcall XAnimCalcAddPartBits(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const DObjPartBits *partBits, XAnimCalcBuffer *calcBuffer)
{
  ?XAnimCalcAddPartBits@@YAXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBUDObjPartBits@@PEAUXAnimCalcBuffer@@@Z(animCalcInfo, obj, partBits, calcBuffer);
}

/*
==============
XAnim_SetTime
==============
*/

void __fastcall XAnim_SetTime(const float time, const int frameCount, XAnimTime *animTime)
{
  ?XAnim_SetTime@@YAXMHPEAUXAnimTime@@@Z(time, frameCount, animTime);
}

/*
==============
XAnimGetLocalBoneTransform
==============
*/

void __fastcall XAnimGetLocalBoneTransform(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, float4 *outModelQuat, float4 *outModelTranslation)
{
  ?XAnimGetLocalBoneTransform@@YAXPEBUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimCalcBuffer@@HPEIAUfloat4@@3@Z(animCalcInfo, obj, buffer, boneIndex, outModelQuat, outModelTranslation);
}

/*
==============
XAnim_ShouldNormalizeChildren
==============
*/

bool __fastcall XAnim_ShouldNormalizeChildren(const XAnimInfo *info)
{
  return ?XAnim_ShouldNormalizeChildren@@YA_NPEBUXAnimInfo@@@Z(info);
}

/*
==============
XAnimCalcAdditiveChildren
==============
*/

void __fastcall XAnimCalcAdditiveChildren(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *nodeInfo, unsigned __int16 firstInfoIndex, float weightScale, XAnimCalcBuffer *destBuffer, bool multiply)
{
  ?XAnimCalcAdditiveChildren@@YAXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimInfo@@GMPEAUXAnimCalcBuffer@@_N@Z(animInfo, obj, nodeInfo, firstInfoIndex, weightScale, destBuffer, multiply);
}

/*
==============
XAnimAllocOrReuseCalcBuffer
==============
*/

XAnimCalcBuffer *__fastcall XAnimAllocOrReuseCalcBuffer(XAnimCalcAnimInfo *info, const DObj *obj, XAnimCalcBuffer *destCalcBuffer, XAnimCalcBuffer *outTempCalcBuffer)
{
  return ?XAnimAllocOrReuseCalcBuffer@@YAPEAUXAnimCalcBuffer@@PEAUXAnimCalcAnimInfo@@PEBUDObj@@PEAU1@2@Z(info, obj, destCalcBuffer, outTempCalcBuffer);
}

/*
==============
DObjCalcAnim
==============
*/

void __fastcall DObjCalcAnim(const DObj *obj, DObjPartBits *partBits, XAnimCalcAnimInfo *animInfo)
{
  ?DObjCalcAnim@@YAXPEBUDObj@@PEAUDObjPartBits@@PEAUXAnimCalcAnimInfo@@@Z(obj, partBits, animInfo);
}

/*
==============
XAnimSetParentRelativeBoneTransform
==============
*/

void __fastcall XAnimSetParentRelativeBoneTransform(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const float4 *weightScale, const float4 *hierarchyIter, float targetBasePoseTrans)
{
  ?XAnimSetParentRelativeBoneTransform@@YQXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEAUXAnimCalcBuffer@@HUfloat4@@3M@Z(animCalcInfo, obj, buffer, boneIndex, weightScale, hierarchyIter, targetBasePoseTrans);
}

/*
==============
XAnim_CalcDeltaForTime
==============
*/

void __fastcall XAnim_CalcDeltaForTime(const XAnimParts *anim, const float time, vec2_t *rotDelta, float4 *posDelta)
{
  ?XAnim_CalcDeltaForTime@@YAXPEBUXAnimParts@@MAEATvec2_t@@AEAUfloat4@@@Z(anim, time, rotDelta, posDelta);
}

/*
==============
DObjHierarchyIterator_Begin
==============
*/

int __fastcall DObjHierarchyIterator_Begin(DObjHierarchyIterator *iter, const DObj *obj, int boneIndex)
{
  return ?DObjHierarchyIterator_Begin@@YAHPEAUDObjHierarchyIterator@@PEBUDObj@@H@Z(iter, obj, boneIndex);
}

/*
==============
XAnimAccumulateBuffer
==============
*/

void __fastcall XAnimAccumulateBuffer(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, float weightScale, const XAnimCalcBuffer *srcBuffer, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  ?XAnimAccumulateBuffer@@YAXPEBUXAnimCalcAnimInfo@@PEBUDObj@@MPEBUXAnimCalcBuffer@@PEAU3@W4XAnimNodeCalcMode@@@Z(animCalcInfo, obj, weightScale, srcBuffer, destBuffer, calcMode);
}

/*
==============
XAnimAccumulateBufferWithoutNormalization
==============
*/

void __fastcall XAnimAccumulateBufferWithoutNormalization(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, float weightScale, const XAnimCalcBuffer *srcBuffer, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  ?XAnimAccumulateBufferWithoutNormalization@@YAXPEBUXAnimCalcAnimInfo@@PEBUDObj@@MPEBUXAnimCalcBuffer@@PEAU3@W4XAnimNodeCalcMode@@@Z(animCalcInfo, obj, weightScale, srcBuffer, destBuffer, calcMode);
}

/*
==============
XAnimGetParentRelativeBoneTranslationRelativeToBasePose
==============
*/

void __fastcall XAnimGetParentRelativeBoneTranslationRelativeToBasePose(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, float4 *outTranslation)
{
  ?XAnimGetParentRelativeBoneTranslationRelativeToBasePose@@YQXPEBUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimCalcBuffer@@HPEIAUfloat4@@@Z(animCalcInfo, obj, buffer, boneIndex, outTranslation);
}

/*
==============
DObjHierarchyIterator_NextParent
==============
*/

int __fastcall DObjHierarchyIterator_NextParent(DObjHierarchyIterator *iter)
{
  return ?DObjHierarchyIterator_NextParent@@YAHPEAUDObjHierarchyIterator@@@Z(iter);
}

/*
==============
XAnimGetParentRelativeBoneTransform
==============
*/

void __fastcall XAnimGetParentRelativeBoneTransform(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, float4 *outQuat, float4 *outTranslation)
{
  ?XAnimGetParentRelativeBoneTransform@@YQXPEBUXAnimCalcAnimInfo@@PEBUDObj@@PEBUXAnimCalcBuffer@@HPEIAUfloat4@@3@Z(animCalcInfo, obj, buffer, boneIndex, outQuat, outTranslation);
}

/*
==============
XAnimFreeCalcBuffer
==============
*/

void __fastcall XAnimFreeCalcBuffer(XAnimCalcAnimInfo *info, const DObj *obj, XAnimCalcBuffer *calcBuffer)
{
  ?XAnimFreeCalcBuffer@@YAXPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEAUXAnimCalcBuffer@@@Z(info, obj, calcBuffer);
}

/*
==============
XAnimAllocCalcBuffer
==============
*/

bool __fastcall XAnimAllocCalcBuffer(XAnimCalcAnimInfo *info, const DObj *obj, XAnimCalcBuffer *outCalcBuffer)
{
  return ?XAnimAllocCalcBuffer@@YA_NPEAUXAnimCalcAnimInfo@@PEBUDObj@@PEAUXAnimCalcBuffer@@@Z(info, obj, outCalcBuffer);
}

/*
==============
XAnimClearCalcBufferIfEmpty
==============
*/

void __fastcall XAnimClearCalcBufferIfEmpty(const XAnimCalcAnimInfo *animInfo, const DObj *obj, XAnimCalcBuffer *calcBuffer)
{
  ?XAnimClearCalcBufferIfEmpty@@YAXPEBUXAnimCalcAnimInfo@@PEBUDObj@@PEAUXAnimCalcBuffer@@@Z(animInfo, obj, calcBuffer);
}

/*
==============
DObjCalcAnim
==============
*/
void DObjCalcAnim(const DObj *obj, DObjPartBits *partBits, XAnimCalcAnimInfo *animInfo)
{
  const DObj *v7; 
  DObjPartBits *v9; 
  char *Value; 
  unsigned int *v11; 
  unsigned int v12; 
  _QWORD *v13; 
  char *v14; 
  __int64 v15; 
  unsigned __int64 v16; 
  ThreadContext CurrentThreadContext; 
  bool v18; 
  const dvar_t *v19; 
  DObjPartBits *p_animPartBits; 
  unsigned int v21; 
  DObjPartBits *v22; 
  unsigned int v24; 
  int v30; 
  __int64 ClientBoneOffset; 
  int v38; 
  DObjAnimMat *v39; 
  __int64 v40; 
  const XAnim_s **p_anims; 
  char v46; 
  const dvar_t *v50; 
  int v51; 
  volatile signed __int32 *v55; 
  char v56; 
  int v57; 
  const dvar_t *v58; 
  const XAnimInfo *v59; 
  __int64 v61; 
  unsigned int v62; 
  const char ***models; 
  const char **v65; 
  int v66; 
  unsigned __int64 v68; 
  unsigned int v69; 
  int v78; 
  unsigned __int64 v81; 
  unsigned int v82; 
  int v87; 
  unsigned __int16 v91; 
  int v108; 
  bool v109; 
  float *BlendShapeTargetWeights; 
  float fmt; 
  XAnimCalcBuffer *destBuffer; 
  __int64 calcMode; 
  int v135; 
  int v136; 
  int v137; 
  int v138; 
  int v139; 
  int v140; 
  int v141; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int v148; 
  unsigned int v149; 
  int v150; 
  int v151; 
  int v152; 
  int v153; 
  int v154; 
  int v155; 
  int v156; 
  int v157; 
  int v158; 
  int v159; 
  int v160; 
  int v161; 
  int v162; 
  int v163; 
  int v164; 
  int v165; 
  int v166; 
  int v167; 
  const char **v168; 
  int v169; 
  int v170; 
  int v171; 
  int v172; 
  int v173; 
  int v174; 
  int v175; 
  int v176; 
  int v177; 
  int v178; 
  int v179; 
  bool v180; 
  int v181; 
  const char ***v183; 
  DObjAnimMat *v185; 
  XAnimCalcBuffer v186; 
  DObjPartBits *v187; 
  DSkel *p_skel; 
  const DObj *v189; 
  const XAnim_s **v190; 
  XAnimCalcBuffer v191; 
  char v192; 

  v7 = obj;
  v189 = obj;
  _R12 = animInfo;
  v9 = partBits;
  Value = (char *)Sys_GetValue(0);
  v11 = (unsigned int *)(Value + 18656);
  if ( (unsigned int)(*((_DWORD *)Value + 4664) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 4664) + 1, 3) )
    __debugbreak();
  v12 = *v11 + 1;
  *v11 = v12;
  if ( v12 >= 3 )
  {
    LODWORD(calcMode) = 3;
    LODWORD(destBuffer) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", destBuffer, calcMode) )
      __debugbreak();
  }
  v13 = Value + 2088;
  v14 = Value + 40;
  if ( *v13 < (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v13 += 8i64;
  if ( *v13 >= (unsigned __int64)v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v13 = v11;
  if ( *v13 <= (unsigned __int64)v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v15 = (int)*v11;
  v16 = __rdtsc();
  v11[v15 + 2] = v16;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 414, NULL, 0);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3497, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3498, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  v18 = v7->blendShapeTargetCount && (v7->flags & 8) != 0 && !v7->skel.partBits.blendShapesCalculated;
  v180 = v18;
  p_skel = &v7->skel;
  if ( v7 == (const DObj *)-56i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3508, ASSERT_TYPE_ASSERT, "(skel)", (const char *)&queryFormat, "skel") )
    __debugbreak();
  _R12->worldTransformCache = (XAnimWorldTransformCache *)&v192;
  v19 = DCONST_DVARBOOL_xanim_enableTransformCache;
  if ( !DCONST_DVARBOOL_xanim_enableTransformCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableTransformCache") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( !v19->current.enabled )
    _R12->worldTransformCache = NULL;
  if ( (v9->array[7] & 2) != 0 && !DObjHasClientOnlyBones(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3522, ASSERT_TYPE_ASSERT, "(!partBits->testClientBit() || DObjHasClientOnlyBones( obj ))", (const char *)&queryFormat, "!partBits->testClientBit() || DObjHasClientOnlyBones( obj )") )
    __debugbreak();
  p_animPartBits = &_R12->animPartBits;
  _R12->rotTransArrayIndex = 0;
  _R12->partBits = v9;
  v187 = &_R12->animPartBits;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&_R12->animPartBits, v9);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::flipAllBits(&_R12->animPartBits);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&_R12->animPartBits, &v7->skel.partBits.anim);
  v21 = 0;
  v22 = &_R12->animPartBits;
  while ( v22->array[0] == -1 )
  {
    ++v21;
    v22 = (DObjPartBits *)((char *)v22 + 4);
    if ( v21 >= 8 )
    {
      if ( !v18 )
        goto LABEL_246;
      break;
    }
  }
  _RSI = v7->skel.mat;
  v24 = 0;
  __asm
  {
    vmovaps [rsp+2118h+var_48], xmm6
    vmovaps [rsp+2118h+var_58], xmm7
  }
  v186.rotTransArray = _RSI;
  if ( v7->numBones )
  {
    _RBX = &_RSI->quat.v[2];
    do
    {
      if ( v24 >= 0x100 )
      {
        LODWORD(calcMode) = 256;
        LODWORD(destBuffer) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v24 & 0x1F)) & v7->skel.partBits.anim.array[(unsigned __int64)v24 >> 5]) != 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-8]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v135 & 0x7F800000) == 2139095040 )
          goto LABEL_249;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-4]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v136 & 0x7F800000) == 2139095040 )
          goto LABEL_249;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v137 & 0x7F800000) == 2139095040 )
          goto LABEL_249;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v138 & 0x7F800000) == 2139095040 )
        {
LABEL_249:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3553, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat[bone].quat )[0] ) && !IS_NAN( ( mat[bone].quat )[1] ) && !IS_NAN( ( mat[bone].quat )[2] ) && !IS_NAN( ( mat[bone].quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat[bone].quat )[0] ) && !IS_NAN( ( mat[bone].quat )[1] ) && !IS_NAN( ( mat[bone].quat )[2] ) && !IS_NAN( ( mat[bone].quat )[3] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v139 & 0x7F800000) == 2139095040 )
          goto LABEL_250;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0Ch]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v140 & 0x7F800000) == 2139095040 )
          goto LABEL_250;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+10h]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v141 & 0x7F800000) == 2139095040 )
        {
LABEL_250:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3554, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat[bone].trans )[0] ) && !IS_NAN( ( mat[bone].trans )[1] ) && !IS_NAN( ( mat[bone].trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat[bone].trans )[0] ) && !IS_NAN( ( mat[bone].trans )[1] ) && !IS_NAN( ( mat[bone].trans )[2] )") )
            __debugbreak();
        }
      }
      ++v24;
      _RBX += 8;
    }
    while ( (int)v24 < v7->numBones );
    _R12 = animInfo;
    _RSI = v186.rotTransArray;
    v9 = partBits;
    p_animPartBits = &animInfo->animPartBits;
  }
  if ( (v7->skel.partBits.anim.array[7] & 2) != 0 )
  {
    v30 = 0;
    if ( v7->numClientBones )
    {
      do
      {
        _RCX = 32i64 * (v30 + v7->numBones);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v142 & 0x7F800000) == 2139095040 )
          goto LABEL_251;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+4]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v143 & 0x7F800000) == 2139095040 )
          goto LABEL_251;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+8]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v144 & 0x7F800000) == 2139095040 )
          goto LABEL_251;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+0Ch]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v145 & 0x7F800000) == 2139095040 )
        {
LABEL_251:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3562, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat[bone + obj->numBones].quat )[0] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[1] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[2] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat[bone + obj->numBones].quat )[0] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[1] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[2] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[3] )") )
            __debugbreak();
        }
        _RCX = 32i64 * (v30 + v7->numBones);
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+10h]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v146 & 0x7F800000) == 2139095040 )
          goto LABEL_252;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+14h]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v147 & 0x7F800000) == 2139095040 )
          goto LABEL_252;
        __asm
        {
          vmovss  xmm0, dword ptr [rcx+rsi+18h]
          vmovss  [rsp+2118h+var_20C8], xmm0
        }
        if ( (v148 & 0x7F800000) == 2139095040 )
        {
LABEL_252:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3563, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat[bone + obj->numBones].trans )[0] ) && !IS_NAN( ( mat[bone + obj->numBones].trans )[1] ) && !IS_NAN( ( mat[bone + obj->numBones].trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat[bone + obj->numBones].trans )[0] ) && !IS_NAN( ( mat[bone + obj->numBones].trans )[1] ) && !IS_NAN( ( mat[bone + obj->numBones].trans )[2] )") )
            __debugbreak();
        }
        ++v30;
      }
      while ( v30 < v7->numClientBones );
      _R12 = animInfo;
      p_animPartBits = v187;
    }
  }
  if ( ((unsigned __int8)_RSI & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3569, ASSERT_TYPE_ASSERT, "(!(reinterpret_cast< size_t >( mat ) & 15))", (const char *)&queryFormat, "!(reinterpret_cast< size_t >( mat ) & 15)") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v7->skel.partBits.anim, v9);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&_R12->ignorePartBits, p_animPartBits);
  ClientBoneOffset = (int)DObjGetClientBoneOffset(v7);
  v38 = DObjNumClientOnlyBones(v7);
  v39 = &v7->skel.mat[ClientBoneOffset];
  v40 = v38;
  v185 = v39;
  if ( (_R12->ignorePartBits.array[7] & 2) == 0 )
  {
    if ( (v7->skel.partBits.skel.array[7] & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3585, ASSERT_TYPE_ASSERT, "(!obj->skel.partBits.skel.testClientBit())", (const char *)&queryFormat, "!obj->skel.partBits.skel.testClientBit()") )
      __debugbreak();
    if ( !DObjHasClientFlag(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3586, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
      __debugbreak();
    if ( (int)v40 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3587, ASSERT_TYPE_ASSERT, "(numClientBones > 0)", (const char *)&queryFormat, "numClientBones > 0") )
      __debugbreak();
    memset_0(v39, 0, 32 * v40);
  }
  p_anims = (const XAnim_s **)&v7->tree->anims;
  v190 = p_anims;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm6, xmm6, xmm6
  }
  if ( p_anims && *((_WORD *)p_anims + 10) )
  {
    _R12->masterBlendShapeWeight = 0.0;
    memset_0(_R12->tmpBlendShapeWeights, 0, 4i64 * v7->blendShapeWeightCount);
    _RBX = DCONST_DVARFLT_xanim_lodOverride;
    LOWORD(_EDI) = *((_WORD *)p_anims + 17);
    if ( !DCONST_DVARFLT_xanim_lodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodOverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    if ( v46 | v109 )
    {
      _RBX = DCONST_DVARFLT_xanim_lodOverride;
      if ( !DCONST_DVARFLT_xanim_lodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodOverride") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm2, cs:__real@437f0000; max
        vmovss  xmm0, dword ptr [rbx+28h]; val
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, cs:__real@43800000
        vcvttss2si edi, xmm1
      }
    }
    if ( *((_BYTE *)p_anims + 26) != 1 || !(_WORD)_EDI )
      goto LABEL_115;
    v50 = DCONST_DVARBOOL_xanim_lodEnable;
    if ( !DCONST_DVARBOOL_xanim_lodEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodEnable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v50);
    if ( v50->current.enabled )
    {
      v51 = (__int16)_EDI / 256;
      if ( (v51 < 0 || (unsigned int)v51 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v51, "signed", v51) )
        __debugbreak();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3b800000
      }
    }
    else
    {
LABEL_115:
      __asm { vxorps  xmm1, xmm1, xmm1 }
      LOBYTE(v51) = 0;
    }
    _R12->lod = v51;
    v55 = (volatile signed __int32 *)p_anims + 3;
    __asm { vmovss  dword ptr [r12+0BECCh], xmm1 }
    if ( (((_BYTE)p_anims + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (char *)p_anims + 12) )
      __debugbreak();
    _InterlockedIncrement(v55);
    if ( *((_DWORD *)p_anims + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3625, ASSERT_TYPE_ASSERT, "(!tree->modifyRefCount)", (const char *)&queryFormat, "!tree->modifyRefCount") )
      __debugbreak();
    v56 = 0;
    v57 = _R12->ignorePartBits.array[7] | 1;
    _R12->ignorePartBits.array[7] = v57;
    if ( (v57 & 2) == 0 )
    {
      v58 = DCONST_DVARBOOL_xanim_enableClientOnlyBoneAnimation;
      if ( !DCONST_DVARBOOL_xanim_enableClientOnlyBoneAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableClientOnlyBoneAnimation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v58);
      if ( !v58->current.enabled )
      {
        _R12->ignorePartBits.array[7] |= 2u;
        v56 = 1;
      }
    }
    if ( *((_BYTE *)p_anims + 24) )
      XAnimTreeUpdateParameters(v7);
    v59 = GetAnimInfo(*((_WORD *)p_anims + 10));
    if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3651, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    v186.rotTransArray = v7->skel.mat;
    __asm { vmovaps xmm3, xmm7; weightScale }
    v186.isEmpty = 1;
    v186.refCount = 1;
    XAnimCalc(_R12, v7, v59, *(float *)&_XMM3, 0, &v186, LINEAR);
    if ( *((_DWORD *)p_anims + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3660, ASSERT_TYPE_ASSERT, "(!tree->modifyRefCount)", (const char *)&queryFormat, "!tree->modifyRefCount") )
      __debugbreak();
    if ( (((_BYTE)p_anims + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (char *)p_anims + 12) )
      __debugbreak();
    _InterlockedDecrement(v55);
    if ( v56 )
      _R12->ignorePartBits.array[7] &= ~2u;
  }
  v61 = 0i64;
  v62 = 0;
  v149 = 0;
  DObjGetClientBoneOffset(v7);
  _R14 = v7->skel.mat;
  v186.rotTransArray = _R14;
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3674, ASSERT_TYPE_ASSERT, "(mat)", (const char *)&queryFormat, "mat") )
    __debugbreak();
  models = (const char ***)v7->models;
  v183 = models;
  if ( !models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3678, ASSERT_TYPE_ASSERT, "(obj->models != 0)", (const char *)&queryFormat, "obj->models != NULL") )
    __debugbreak();
  v181 = 0;
  if ( v7->numModels )
  {
    do
    {
      v65 = *models;
      v168 = *models;
      v66 = *((unsigned __int8 *)*models + 21);
      if ( *((_BYTE *)*models + 21) )
      {
        _RBX = &_R14->trans.v[2];
        do
        {
          if ( v62 >= 0x100 )
          {
            LODWORD(calcMode) = 256;
            LODWORD(destBuffer) = v62;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
              __debugbreak();
          }
          v68 = (unsigned __int64)v62 >> 5;
          v69 = 0x80000000 >> (v62 & 0x1F);
          if ( (v69 & v187->array[v68]) != 0 )
          {
            if ( v62 >= 0x100 )
            {
              LODWORD(calcMode) = 256;
              LODWORD(destBuffer) = v62;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
                __debugbreak();
            }
            if ( (v69 & p_skel->partBits.anim.array[v68]) != 0 )
            {
              if ( (int)v62 >= v189->numBones )
              {
                LODWORD(calcMode) = v181;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3692, ASSERT_TYPE_ASSERT, "(boneIndex < obj->numBones)", "%s\n\tmodel %d: '%s'", "boneIndex < obj->numBones", calcMode, **models) )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm0, dword ptr [r14]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v150 & 0x7F800000) == 2139095040 )
                goto LABEL_253;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-14h]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v151 & 0x7F800000) == 2139095040 )
                goto LABEL_253;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-10h]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v152 & 0x7F800000) == 2139095040 )
                goto LABEL_253;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-0Ch]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v153 & 0x7F800000) == 2139095040 )
              {
LABEL_253:
                LODWORD(destBuffer) = v181;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3693, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) ) )", "model %d: '%s'", destBuffer, **models) )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-8]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v154 & 0x7F800000) == 2139095040 )
                goto LABEL_254;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-4]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v155 & 0x7F800000) == 2139095040 )
                goto LABEL_254;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v156 & 0x7F800000) == 2139095040 )
              {
LABEL_254:
                LODWORD(destBuffer) = v181;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3694, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->trans )[0] ) && !IS_NAN( ( mat->trans )[1] ) && !IS_NAN( ( mat->trans )[2] ) ) )", "model %d: '%s'", destBuffer, **models) )
                  __debugbreak();
              }
            }
            v61 = 0i64;
          }
          else
          {
            v61 = 0i64;
            _R14->quat.v[0] = 0.0;
            *(_QWORD *)(_RBX - 5) = 0i64;
            *(_QWORD *)(_RBX - 3) = 1065353216i64;
            *(_QWORD *)(_RBX - 1) = 0i64;
            _RBX[1] = 0.0;
          }
          ++_R14;
          _RBX += 8;
          ++v62;
          --v66;
        }
        while ( v66 );
        v65 = v168;
        v186.rotTransArray = _R14;
        v149 = v62;
        LOBYTE(v66) = *((_BYTE *)v168 + 21);
      }
      _R15 = v65[21];
      v78 = *((unsigned __int8 *)v65 + 20) - (unsigned __int8)v66;
      if ( v78 )
      {
        _RBP = v186.rotTransArray;
        _RBX = &v186.rotTransArray->trans.v[2];
        do
        {
          if ( v62 >= 0x100 )
          {
            LODWORD(calcMode) = 256;
            LODWORD(destBuffer) = v62;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
              __debugbreak();
          }
          v81 = (unsigned __int64)v62 >> 5;
          v82 = 0x80000000 >> (v62 & 0x1F);
          if ( (v82 & v187->array[v81]) != 0 )
          {
            if ( v62 >= 0x100 )
            {
              LODWORD(calcMode) = 256;
              LODWORD(destBuffer) = v62;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
                __debugbreak();
            }
            if ( (v82 & p_skel->partBits.anim.array[v81]) != 0 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+0]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v157 & 0x7F800000) == 2139095040 )
                goto LABEL_189;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-14h]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v158 & 0x7F800000) == 2139095040 )
                goto LABEL_189;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-10h]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v159 & 0x7F800000) == 2139095040 )
                goto LABEL_189;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-0Ch]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v160 & 0x7F800000) == 2139095040 )
              {
LABEL_189:
                v87 = v181;
                LODWORD(destBuffer) = v181;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3719, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) ) )", "model %d: '%s'", destBuffer, **v183) )
                  __debugbreak();
              }
              else
              {
                v87 = v181;
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-8]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v161 & 0x7F800000) == 2139095040 )
                goto LABEL_255;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx-4]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v162 & 0x7F800000) == 2139095040 )
                goto LABEL_255;
              __asm
              {
                vmovss  xmm0, dword ptr [rbx]
                vmovss  [rsp+2118h+var_20C8], xmm0
              }
              if ( (v163 & 0x7F800000) == 2139095040 )
              {
LABEL_255:
                LODWORD(destBuffer) = v87;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3720, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->trans )[0] ) && !IS_NAN( ( mat->trans )[1] ) && !IS_NAN( ( mat->trans )[2] ) ) )", "model %d: '%s'", destBuffer, **v183) )
                  __debugbreak();
              }
            }
            v61 = 0i64;
          }
          else
          {
            __asm
            {
              vlddqu  xmm0, xmmword ptr [r15]
              vpmovsxwd xmm1, xmm0
            }
            v61 = 0i64;
            __asm
            {
              vcvtdq2ps xmm3, xmm1
              vmulps  xmm0, xmm3, cs:__xmm@38000100380001003800010038000100
              vmovups xmmword ptr [rbp+0], xmm0
            }
            *((_QWORD *)_RBX - 1) = 0i64;
            *(_QWORD *)_RBX = 0i64;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+0]
              vmovss  [rsp+2118h+var_20C8], xmm0
            }
            if ( (v164 & 0x7F800000) == 2139095040 )
              goto LABEL_256;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-14h]
              vmovss  [rsp+2118h+var_20C8], xmm0
            }
            if ( (v165 & 0x7F800000) == 2139095040 )
              goto LABEL_256;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-10h]
              vmovss  [rsp+2118h+var_20C8], xmm0
            }
            if ( (v166 & 0x7F800000) == 2139095040 )
              goto LABEL_256;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-0Ch]
              vmovss  [rsp+2118h+var_20C8], xmm0
            }
            if ( (v167 & 0x7F800000) == 2139095040 )
            {
LABEL_256:
              LODWORD(destBuffer) = v181;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3732, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) ) )", "model %d: '%s'", destBuffer, **v183) )
                __debugbreak();
            }
          }
          ++_RBP;
          _RBX += 8;
          ++v62;
          _R15 += 8;
          --v78;
        }
        while ( v78 );
        v65 = v168;
        v186.rotTransArray = _RBP;
        v149 = v62;
      }
      v91 = *((_WORD *)v65 + 11);
      if ( (animInfo->ignorePartBits.array[7] & 2) != 0 )
      {
        if ( (p_skel->partBits.anim.array[7] & 2) != 0 && v91 )
        {
          _RBX = &v185->quat.v[2];
          do
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-8]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v169 & 0x7F800000) == 2139095040 )
              goto LABEL_257;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx-4]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v170 & 0x7F800000) == 2139095040 )
              goto LABEL_257;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v171 & 0x7F800000) == 2139095040 )
              goto LABEL_257;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+4]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v172 & 0x7F800000) == 2139095040 )
            {
LABEL_257:
              LODWORD(destBuffer) = v181;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3745, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( clientMat[i].quat )[0] ) && !IS_NAN( ( clientMat[i].quat )[1] ) && !IS_NAN( ( clientMat[i].quat )[2] ) && !IS_NAN( ( clientMat[i].quat )[3] ) ) )", "model %d: '%s'", destBuffer, **v183) )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+8]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v173 & 0x7F800000) == 2139095040 )
              goto LABEL_258;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+0Ch]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v174 & 0x7F800000) == 2139095040 )
              goto LABEL_258;
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+10h]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v175 & 0x7F800000) == 2139095040 )
            {
LABEL_258:
              LODWORD(destBuffer) = v181;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3746, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( clientMat[i].trans )[0] ) && !IS_NAN( ( clientMat[i].trans )[1] ) && !IS_NAN( ( clientMat[i].trans )[2] ) ) )", "model %d: '%s'", destBuffer, **v183) )
                __debugbreak();
            }
            ++v61;
            _RBX += 8;
          }
          while ( v61 < v91 );
          v62 = v149;
        }
        v185 += v91;
      }
      else
      {
        v108 = v91;
        v109 = v91 == 0;
        if ( v91 )
        {
          _RSI = v185;
          do
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+4]
              vmovss  xmm3, dword ptr [rsi+8]
              vmovss  xmm4, dword ptr [rsi+0Ch]
              vmovss  xmm5, dword ptr [rsi]
              vmulss  xmm1, xmm5, xmm5
              vmulss  xmm0, xmm0, xmm0
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm4, xmm3, xmm0
              vucomiss xmm4, xmm6
            }
            if ( v109 )
            {
              __asm
              {
                vlddqu  xmm0, xmmword ptr [r15]
                vpmovsxwd xmm1, xmm0
                vcvtdq2ps xmm3, xmm1
                vmulps  xmm5, xmm3, cs:__xmm@38000100380001003800010038000100
                vmovups xmmword ptr [rsi], xmm5
              }
            }
            __asm { vmovss  dword ptr [rsp+2118h+var_20C0], xmm5 }
            if ( (v176 & 0x7F800000) == 2139095040 )
              goto LABEL_259;
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+4]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v177 & 0x7F800000) == 2139095040 )
              goto LABEL_259;
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+8]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v178 & 0x7F800000) == 2139095040 )
              goto LABEL_259;
            __asm
            {
              vmovss  xmm0, dword ptr [rsi+0Ch]
              vmovss  dword ptr [rsp+2118h+var_20C0], xmm0
            }
            if ( (v179 & 0x7F800000) == 2139095040 )
            {
LABEL_259:
              LODWORD(destBuffer) = v181;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3766, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( clientMat->quat )[0] ) && !IS_NAN( ( clientMat->quat )[1] ) && !IS_NAN( ( clientMat->quat )[2] ) && !IS_NAN( ( clientMat->quat )[3] ) ) )", "model %d: '%s'", destBuffer, **v183) )
                __debugbreak();
            }
            ++_RSI;
            _R15 += 8;
            v109 = --v108 == 0;
          }
          while ( v108 );
          v62 = v149;
          v185 = _RSI;
        }
      }
      v61 = 0i64;
      v7 = v189;
      models = v183 + 1;
      _R14 = v186.rotTransArray;
      ++v181;
      ++v183;
    }
    while ( v181 < v189->numModels );
  }
  if ( !DObjHasProceduralBones(v7) || v190 && XAnimFindPublicNodeByTypeName(*v190, scr_const.proc_node, NULL) )
  {
    _RBX = animInfo;
  }
  else
  {
    _RBX = animInfo;
    v191.rotTransArray = v7->skel.mat;
    v191.isEmpty = 0;
    v191.refCount = 1;
    XAnimWorldTransformCache_Clear(animInfo->worldTransformCache);
    __asm { vmovss  dword ptr [rsp+2118h+fmt], xmm7 }
    XAnimProcNode_Calc(NULL, animInfo, v7, NULL, fmt, 0, &v191);
  }
  __asm { vmovaps xmm7, [rsp+2118h+var_58] }
  if ( v180 )
  {
    v7->skel.partBits.blendShapesCalculated = 1;
    __asm { vcomiss xmm6, dword ptr [rbx+0BEE8h] }
    BlendShapeTargetWeights = DObjGetBlendShapeTargetWeights(v7);
    memset_0(BlendShapeTargetWeights, 0, 4i64 * v7->blendShapeTargetCount);
  }
  __asm { vmovaps xmm6, [rsp+2118h+var_48] }
LABEL_246:
  Profile_EndInternal(NULL);
}

/*
==============
DObjHierarchyIterator_Begin
==============
*/
__int64 DObjHierarchyIterator_Begin(DObjHierarchyIterator *iter, const DObj *obj, int boneIndex)
{
  int NumModels; 
  const XModel **models; 
  __int64 v8; 
  int NumBones; 
  int SkelBoneIndex; 
  int v11; 
  const DObjDuplicateParts *DuplicateParts; 
  int v13; 
  int v14; 
  __int64 v15; 
  int *startIndexClient; 
  const XModel *v17; 

  NumModels = DObjGetNumModels(obj);
  models = obj->models;
  v8 = NumModels;
  NumBones = DObjGetNumBones(obj);
  if ( !DObjHasClientFlag(obj) && (boneIndex & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2318, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ) || !isClientBone)", (const char *)&queryFormat, "DObjHasClientFlag( obj ) || !isClientBone") )
    __debugbreak();
  SkelBoneIndex = DObjGetSkelBoneIndex(obj, boneIndex);
  iter->obj = obj;
  iter->modelParents = (const unsigned __int8 *)&models[v8];
  v11 = SkelBoneIndex;
  DuplicateParts = DObjGetDuplicateParts(obj);
  v13 = 0;
  iter->duplicatePartBits = &DuplicateParts->partBits;
  iter->boneIndex = boneIndex;
  v14 = 0;
  iter->duplicateParts = DuplicateParts->pairs;
  if ( v8 > 0 )
  {
    v15 = 0i64;
    startIndexClient = iter->startIndexClient;
    while ( 1 )
    {
      *(startIndexClient - 254) = v13;
      *startIndexClient = NumBones;
      v17 = models[v15];
      v13 += v17->numBones;
      NumBones += v17->numClientBones;
      if ( (boneIndex & 0x8000) != 0 )
        goto LABEL_10;
      if ( v13 > v11 )
        break;
      if ( (boneIndex & 0x8000) != 0 )
      {
LABEL_10:
        if ( NumBones > v11 )
          break;
      }
      ++v14;
      ++v15;
      ++startIndexClient;
      if ( v15 >= v8 )
        goto LABEL_14;
    }
    iter->modelIndex = v14;
  }
LABEL_14:
  if ( iter->modelIndex >= (int)v8 )
    return 255i64;
  if ( (boneIndex & 0x8000) == 0 )
    return (unsigned int)DObjHierarchyIterator_SkipDuplicates(iter);
  return (unsigned int)boneIndex;
}

/*
==============
DObjHierarchyIterator_GetBasePoseRotTrans
==============
*/
void DObjHierarchyIterator_GetBasePoseRotTrans(const DObjHierarchyIterator *iter, float4 *outQuat, float4 *outTrans)
{
  const DObj *obj; 
  __int64 modelIndex; 
  unsigned int v9; 
  const XModel *v10; 
  int SkelBoneIndex; 
  int v12; 
  int numBones; 
  int v14; 
  int numRootBones; 
  int v18; 
  __int128 v34; 

  _R14 = outQuat;
  obj = iter->obj;
  _R15 = outTrans;
  modelIndex = iter->modelIndex;
  v9 = (unsigned int)iter->boneIndex >> 15;
  v10 = obj->models[modelIndex];
  SkelBoneIndex = DObjGetSkelBoneIndex(obj, iter->boneIndex);
  if ( (v9 & 1) != 0 )
  {
    v12 = iter->startIndexClient[modelIndex];
    numBones = v10->numBones;
  }
  else
  {
    v12 = iter->startIndex[modelIndex];
    numBones = 0;
  }
  v14 = SkelBoneIndex + numBones - v12;
  if ( v14 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2506, ASSERT_TYPE_ASSERT, "(localBoneIndex >= 0)", (const char *)&queryFormat, "localBoneIndex >= 0") )
    __debugbreak();
  numRootBones = v10->numRootBones;
  if ( v14 >= numRootBones )
  {
    v18 = v14 - numRootBones;
    _RCX = 4 * v18;
    _RAX = v10->quats;
    __asm
    {
      vlddqu  xmm0, xmmword ptr [rax+rcx*2]
      vpmovsxwd xmm1, xmm0
      vcvtdq2ps xmm3, xmm1
      vmulps  xmm0, xmm3, cs:__xmm@38000100380001003800010038000100
    }
    _RCX = 3 * v18;
    _RAX = v10->trans;
    __asm
    {
      vmovups xmmword ptr [r14], xmm0
      vmovss  xmm0, dword ptr [rax+rcx*4]
      vmovss  xmm1, dword ptr [rax+rcx*4+4]
      vmovss  xmm2, dword ptr [rax+rcx*4+8]
    }
    HIDWORD(v34) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+30h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, xmm1, 10h
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
      vmovups xmmword ptr [r15], xmm3
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
      vxorps  xmm1, xmm1, xmm1
      vmovups xmmword ptr [r14], xmm0
      vmovups xmmword ptr [r15], xmm1
    }
  }
}

/*
==============
DObjHierarchyIterator_GetBasePoseTrans
==============
*/
float4 *DObjHierarchyIterator_GetBasePoseTrans(float4 *result, const DObjHierarchyIterator *iter)
{
  __int64 modelIndex; 
  const DObj *obj; 
  unsigned int boneIndex; 
  unsigned int v8; 
  const XModel *v9; 
  int SkelBoneIndex; 
  int v11; 
  int numBones; 
  int v13; 
  int numRootBones; 
  __int128 v26; 

  modelIndex = iter->modelIndex;
  _RDI = result;
  obj = iter->obj;
  boneIndex = iter->boneIndex;
  v8 = boneIndex >> 15;
  v9 = obj->models[modelIndex];
  SkelBoneIndex = DObjGetSkelBoneIndex(obj, boneIndex);
  if ( (v8 & 1) != 0 )
  {
    v11 = iter->startIndexClient[modelIndex];
    numBones = v9->numBones;
  }
  else
  {
    v11 = iter->startIndex[modelIndex];
    numBones = 0;
  }
  v13 = SkelBoneIndex + numBones - v11;
  if ( v13 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2471, ASSERT_TYPE_ASSERT, "(localBoneIndex >= 0)", (const char *)&queryFormat, "localBoneIndex >= 0") )
    __debugbreak();
  numRootBones = v9->numRootBones;
  if ( v13 >= numRootBones )
  {
    _RCX = 3 * (v13 - numRootBones);
    _RAX = v9->trans;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+rcx*4]
      vmovss  xmm1, dword ptr [rax+rcx*4+4]
      vmovss  xmm2, dword ptr [rax+rcx*4+8]
    }
    HIDWORD(v26) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rsp+30h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, xmm1, 10h
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
      vmovups xmmword ptr [rdi], xmm3
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [rdi], xmm0
    }
  }
  return _RDI;
}

/*
==============
DObjHierarchyIterator_NextParent
==============
*/
__int64 DObjHierarchyIterator_NextParent(DObjHierarchyIterator *iter)
{
  unsigned int boneIndex; 
  const DObj *obj; 
  __int64 modelIndex; 
  unsigned int v6; 
  const XModel *v7; 
  unsigned __int64 SkelBoneIndex; 
  char v9; 
  int v10; 
  int numBones; 
  int v12; 
  int v13; 
  unsigned int v14; 
  const DObjPartBits *duplicatePartBits; 
  int numRootBones; 
  __int64 v17; 

  boneIndex = iter->boneIndex;
  if ( boneIndex == 255 )
    return 255i64;
  obj = iter->obj;
  modelIndex = iter->modelIndex;
  v6 = boneIndex >> 15;
  v7 = obj->models[modelIndex];
  SkelBoneIndex = (unsigned int)DObjGetSkelBoneIndex(obj, boneIndex);
  v9 = v6 & 1;
  if ( v9 )
  {
    v10 = iter->startIndexClient[modelIndex];
    numBones = v7->numBones;
  }
  else
  {
    v10 = iter->startIndex[modelIndex];
    numBones = 0;
  }
  v12 = SkelBoneIndex + numBones - v10;
  if ( v12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2394, ASSERT_TYPE_ASSERT, "(localBoneIndex >= 0)", (const char *)&queryFormat, "localBoneIndex >= 0") )
    __debugbreak();
  if ( v9 )
  {
    v13 = v12 - v7->parentList[v12 - v7->numRootBones];
    if ( v13 < v7->numBones )
      v14 = iter->startIndex[modelIndex] + v13;
    else
      v14 = v10 + (v13 | 0x8000) - numBones;
    iter->boneIndex = v14;
  }
  else
  {
    duplicatePartBits = iter->duplicatePartBits;
    if ( (unsigned int)SkelBoneIndex >= 0x100 )
    {
      LODWORD(v17) = SkelBoneIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v17, 256) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (SkelBoneIndex & 0x1F)) & duplicatePartBits->array[SkelBoneIndex >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2424, ASSERT_TYPE_ASSERT, "(!iter->duplicatePartBits->testBit( skelBoneIndex ))", (const char *)&queryFormat, "!iter->duplicatePartBits->testBit( skelBoneIndex )") )
      __debugbreak();
    numRootBones = v7->numRootBones;
    if ( v12 >= numRootBones )
    {
      iter->boneIndex -= v7->parentList[v12 - numRootBones];
    }
    else
    {
      iter->boneIndex = iter->modelParents[iter->modelIndex];
      DObjHierarchyIterator_RecalcModelIndex(iter);
    }
    v14 = iter->boneIndex;
  }
  if ( (v14 & 0x8000) == 0 )
    return (unsigned int)DObjHierarchyIterator_SkipDuplicates(iter);
  return v14;
}

/*
==============
DObjHierarchyIterator_RecalcModelIndex
==============
*/
void DObjHierarchyIterator_RecalcModelIndex(DObjHierarchyIterator *iter)
{
  int boneIndex; 
  __int64 modelIndex; 
  __int64 v4; 

  boneIndex = iter->boneIndex;
  if ( (boneIndex & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2257, ASSERT_TYPE_ASSERT, "(!XAnimIsClientBoneIndex( boneIndex ))", (const char *)&queryFormat, "!XAnimIsClientBoneIndex( boneIndex )") )
    __debugbreak();
  if ( boneIndex != 255 )
  {
    modelIndex = iter->modelIndex;
    v4 = modelIndex;
    if ( (int)modelIndex < 0 )
      goto LABEL_14;
    do
    {
      if ( boneIndex >= iter->startIndex[v4] )
        break;
      LODWORD(modelIndex) = modelIndex - 1;
      --v4;
    }
    while ( v4 >= 0 );
    if ( (int)modelIndex < 0 )
    {
LABEL_14:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2273, ASSERT_TYPE_ASSERT, "(modelIndex >= 0)", (const char *)&queryFormat, "modelIndex >= 0") )
        __debugbreak();
    }
    iter->modelIndex = modelIndex;
  }
}

/*
==============
DObjHierarchyIterator_SkipDuplicates
==============
*/
__int64 DObjHierarchyIterator_SkipDuplicates(DObjHierarchyIterator *iter)
{
  unsigned int boneIndex; 
  const DObjPartBits *duplicatePartBits; 
  const DObjDuplicatePair *duplicateParts; 
  int child; 
  unsigned int v6; 
  const DObjDuplicatePair *v7; 
  int v8; 
  __int64 v10; 
  __int64 v11; 

  boneIndex = iter->boneIndex;
  if ( (boneIndex & 0x8000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2282, ASSERT_TYPE_ASSERT, "(!XAnimIsClientBoneIndex( boneIndex ))", (const char *)&queryFormat, "!XAnimIsClientBoneIndex( boneIndex )") )
    __debugbreak();
  duplicatePartBits = iter->duplicatePartBits;
  duplicateParts = iter->duplicateParts;
  if ( boneIndex != 255 )
  {
    do
    {
      if ( boneIndex >= 0x100 )
      {
        LODWORD(v11) = 256;
        LODWORD(v10) = boneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (boneIndex & 0x1F)) & duplicatePartBits->array[(unsigned __int64)boneIndex >> 5]) == 0 )
        break;
      child = duplicateParts->child;
      v6 = boneIndex + 1;
      v7 = duplicateParts;
      if ( child != v6 )
      {
        do
        {
          if ( !(_WORD)child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2294, ASSERT_TYPE_ASSERT, "(dupeParts->child != 0)", (const char *)&queryFormat, "dupeParts->child != 0") )
            __debugbreak();
          v8 = v7[1].child;
          ++v7;
          LOWORD(child) = v8;
        }
        while ( v8 != v6 );
      }
      boneIndex = v7->parent - 1;
    }
    while ( v7->parent != 256 );
  }
  iter->boneIndex = boneIndex;
  DObjHierarchyIterator_RecalcModelIndex(iter);
  return boneIndex;
}

/*
==============
XAnimAccumulateBuffer
==============
*/

void __fastcall XAnimAccumulateBuffer(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, double weightScale, const XAnimCalcBuffer *srcBuffer, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  int v11; 
  __int64 v12; 
  DObjAnimMat *rotTransArray; 
  unsigned int i; 
  __int64 v16; 
  unsigned int v18; 
  DObjAnimMat *v19; 
  signed __int64 v21; 
  __int64 v23; 
  signed __int64 v25; 
  __int64 v26; 
  signed __int64 v29; 
  __int64 v30; 
  __int64 v33; 
  __int64 v34; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  v11 = DObjNumBones(obj);
  v12 = (unsigned int)DObjNumClientOnlyBones(obj);
  if ( srcBuffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2097, ASSERT_TYPE_ASSERT, "(!srcBuffer->isEmpty)", (const char *)&queryFormat, "!srcBuffer->isEmpty") )
    __debugbreak();
  if ( destBuffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2098, ASSERT_TYPE_ASSERT, "(!destBuffer->isEmpty)", (const char *)&queryFormat, "!destBuffer->isEmpty") )
    __debugbreak();
  rotTransArray = destBuffer->rotTransArray;
  if ( srcBuffer == destBuffer )
  {
    for ( i = 0; (int)i < v11; ++rotTransArray )
    {
      if ( i >= 0x100 )
      {
        LODWORD(v34) = 256;
        LODWORD(v33) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v33, v34) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (i & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)i >> 5]) == 0 )
      {
        __asm { vmovaps xmm1, xmm6; weightScale }
        XAnimNormalizeRotTrans(rotTransArray, *(float *)&_XMM1);
      }
      ++i;
    }
    if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v12 > 0 )
    {
      v16 = v12;
      do
      {
        __asm { vmovaps xmm1, xmm6; weightScale }
        XAnimNormalizeRotTrans(rotTransArray++, *(float *)&_XMM1);
        --v16;
      }
      while ( v16 );
    }
  }
  else
  {
    v18 = 0;
    v19 = srcBuffer->rotTransArray;
    if ( calcMode == EASE_IN_QUAD )
    {
      if ( v11 > 0 )
      {
        do
        {
          if ( v18 >= 0x100 )
          {
            LODWORD(v34) = 256;
            LODWORD(v33) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v33, v34) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v18 & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)v18 >> 5]) == 0 )
          {
            __asm { vmovaps xmm0, xmm6; weightScale }
            XAnimOverlayRotTrans_1_(*(float *)&_XMM0, v19, rotTransArray);
          }
          ++v18;
          ++v19;
          ++rotTransArray;
        }
        while ( (int)v18 < v11 );
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v12 > 0 )
      {
        v21 = (char *)v19 - (char *)rotTransArray;
        do
        {
          __asm { vmovaps xmm0, xmm6; weightScale }
          XAnimOverlayRotTrans_1_(*(float *)&_XMM0, (DObjAnimMat *)((char *)rotTransArray + v21), rotTransArray);
          ++rotTransArray;
        }
        while ( v23 != 1 );
      }
    }
    else if ( calcMode == EASE_OUT_QUAD )
    {
      if ( v11 > 0 )
      {
        do
        {
          if ( v18 >= 0x100 )
          {
            LODWORD(v34) = 256;
            LODWORD(v33) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v33, v34) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v18 & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)v18 >> 5]) == 0 )
          {
            __asm { vmovaps xmm2, xmm6; weightScale }
            XAnimMadRotTrans_1_(v19, rotTransArray, *(float *)&_XMM2);
          }
          ++v18;
          ++v19;
          ++rotTransArray;
        }
        while ( (int)v18 < v11 );
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v12 > 0 )
      {
        v25 = (char *)v19 - (char *)rotTransArray;
        v26 = v12;
        do
        {
          __asm { vmovaps xmm2, xmm6; weightScale }
          XAnimMadRotTrans_1_((DObjAnimMat *)((char *)rotTransArray + v25), rotTransArray, *(float *)&_XMM2);
          ++rotTransArray;
          --v26;
        }
        while ( v26 );
      }
    }
    else
    {
      if ( v11 > 0 )
      {
        do
        {
          if ( v18 >= 0x100 )
          {
            LODWORD(v34) = 256;
            LODWORD(v33) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v33, v34) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v18 & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)v18 >> 5]) == 0 )
          {
            __asm { vmovaps xmm2, xmm6; weightScale }
            XAnimMadRotTrans_0_(v19, rotTransArray, *(float *)&_XMM2);
          }
          ++v18;
          ++v19;
          ++rotTransArray;
        }
        while ( (int)v18 < v11 );
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v12 > 0 )
      {
        v29 = (char *)v19 - (char *)rotTransArray;
        v30 = v12;
        do
        {
          __asm { vmovaps xmm2, xmm6; weightScale }
          XAnimMadRotTrans_0_((DObjAnimMat *)((char *)rotTransArray + v29), rotTransArray, *(float *)&_XMM2);
          ++rotTransArray;
          --v30;
        }
        while ( v30 );
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
XAnimAccumulateBufferWithoutNormalization
==============
*/

void __fastcall XAnimAccumulateBufferWithoutNormalization(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, double weightScale, const XAnimCalcBuffer *srcBuffer, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  int v12; 
  __int64 v13; 
  unsigned int v15; 
  __int64 v23; 
  DObjAnimMat *rotTransArray; 
  unsigned int i; 
  signed __int64 v29; 
  __int64 v31; 
  DObjAnimMat *totalRotTrans; 
  __int64 v35; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps xmm6, xmm2
    vshufps xmm6, xmm6, xmm6, 0
  }
  v12 = DObjNumBones(obj);
  v13 = (unsigned int)DObjNumClientOnlyBones(obj);
  if ( srcBuffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2121, ASSERT_TYPE_ASSERT, "(!srcBuffer->isEmpty)", (const char *)&queryFormat, "!srcBuffer->isEmpty") )
    __debugbreak();
  if ( destBuffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2122, ASSERT_TYPE_ASSERT, "(!destBuffer->isEmpty)", (const char *)&queryFormat, "!destBuffer->isEmpty") )
    __debugbreak();
  _RDI = destBuffer->rotTransArray;
  if ( srcBuffer == destBuffer )
  {
    __asm { vucomiss xmm6, cs:__real@3f800000 }
    if ( srcBuffer != destBuffer )
    {
      v15 = 0;
      if ( v12 > 0 )
      {
        _RSI = &_RDI->trans.v[2];
        do
        {
          if ( v15 >= 0x100 )
          {
            LODWORD(v35) = 256;
            LODWORD(totalRotTrans) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", totalRotTrans, v35) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v15 & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)v15 >> 5]) == 0 )
          {
            __asm
            {
              vmulss  xmm0, xmm6, dword ptr [rdi]
              vmovss  dword ptr [rdi], xmm0
              vmulps  xmm0, xmm6, xmmword ptr [rsi-14h]
              vmovups xmmword ptr [rsi-14h], xmm0
              vmulss  xmm0, xmm6, dword ptr [rsi-4]
              vmovss  dword ptr [rsi-4], xmm0
              vmulss  xmm1, xmm6, dword ptr [rsi]
              vmovss  dword ptr [rsi], xmm1
              vmulss  xmm0, xmm6, dword ptr [rsi+4]
              vmovss  dword ptr [rsi+4], xmm0
            }
          }
          ++v15;
          ++_RDI;
          _RSI += 8;
        }
        while ( (int)v15 < v12 );
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v13 > 0 )
      {
        _RDI = &_RDI->trans.v[2];
        v23 = v13;
        do
        {
          __asm
          {
            vmulps  xmm0, xmm6, xmmword ptr [rdi-18h]
            vmovups xmmword ptr [rdi-18h], xmm0
            vmulps  xmm0, xmm6, xmmword ptr [rdi-8]
            vmovups xmmword ptr [rdi-8], xmm0
          }
          _RDI += 8;
          --v23;
        }
        while ( v23 );
      }
    }
  }
  else
  {
    rotTransArray = srcBuffer->rotTransArray;
    if ( calcMode == EASE_IN_QUAD )
    {
      for ( i = 0; (int)i < v12; ++_RDI )
      {
        if ( i >= 0x100 )
        {
          LODWORD(v35) = 256;
          LODWORD(totalRotTrans) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", totalRotTrans, v35) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (i & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)i >> 5]) == 0 )
        {
          __asm { vmovaps xmm0, xmm6; weightScale }
          XAnimOverlayRotTrans_0_(*(float *)&_XMM0, rotTransArray, _RDI);
        }
        ++i;
        ++rotTransArray;
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v13 > 0 )
      {
        v29 = (char *)rotTransArray - (char *)_RDI;
        do
        {
          __asm { vmovaps xmm0, xmm6; weightScale }
          XAnimOverlayRotTrans_0_(*(float *)&_XMM0, (DObjAnimMat *)((char *)_RDI + v29), _RDI);
          ++_RDI;
        }
        while ( v31 != 1 );
      }
    }
    else
    {
      __asm { vmovaps xmm3, xmm6; weightScale }
      if ( calcMode == EASE_OUT_QUAD )
        XAnimMadRotTransArrayWithoutNormalization_1_(v12, v13, animCalcInfo, *(float *)&_XMM3, rotTransArray, _RDI);
      else
        XAnimMadRotTransArrayWithoutNormalization_0_(v12, v13, animCalcInfo, *(float *)&_XMM3, rotTransArray, _RDI);
    }
  }
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
XAnimAllocCalcBuffer
==============
*/
bool XAnimAllocCalcBuffer(XAnimCalcAnimInfo *info, const DObj *obj, XAnimCalcBuffer *outCalcBuffer)
{
  __int64 rotTransArrayIndex; 
  int v7; 
  bool result; 

  rotTransArrayIndex = info->rotTransArrayIndex;
  v7 = info->rotTransArrayIndex + DObjTotalNumBones(obj);
  if ( v7 <= 1524 )
  {
    outCalcBuffer->rotTransArray = &info->rotTransArray[rotTransArrayIndex];
    result = 1;
    info->rotTransArrayIndex = v7;
    outCalcBuffer->refCount = 1;
    outCalcBuffer->isEmpty = 1;
  }
  else
  {
    Com_PrintWarning(19, "max calculation buffer exceeded\n");
    DObjDisplayAnim(obj, (const char *)&queryFormat.fmt + 3);
    result = 0;
    outCalcBuffer->rotTransArray = NULL;
  }
  return result;
}

/*
==============
XAnimAllocOrReuseCalcBuffer
==============
*/
XAnimCalcBuffer *XAnimAllocOrReuseCalcBuffer(XAnimCalcAnimInfo *info, const DObj *obj, XAnimCalcBuffer *destCalcBuffer, XAnimCalcBuffer *outTempCalcBuffer)
{
  XAnimCalcBuffer *v5; 

  v5 = destCalcBuffer;
  if ( destCalcBuffer->isEmpty )
  {
    ++destCalcBuffer->refCount;
  }
  else
  {
    if ( !XAnimAllocCalcBuffer(info, obj, outTempCalcBuffer) )
      return 0i64;
    v5 = outTempCalcBuffer;
  }
  if ( !v5->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2025, ASSERT_TYPE_ASSERT, "(calcBuffer->isEmpty)", (const char *)&queryFormat, "calcBuffer->isEmpty") )
    __debugbreak();
  return v5;
}

/*
==============
XAnimApplyAdditiveRot
==============
*/

void __fastcall XAnimApplyAdditiveRot(DObjAnimMat *rotTransArray, const DObjAnimMat *additiveArray, double weightScale)
{
  __int64 v63; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm3, dword ptr [rdx+4]
    vmovss  xmm4, dword ptr [rdx+8]
    vmovss  xmm5, dword ptr [rdx+0Ch]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm3, xmm1, xmm0
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm5, xmm5
    vmovaps xmm6, xmm2
    vaddss  xmm2, xmm4, xmm0
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm2, xmm1
  }
  if ( (unsigned __int64)&v63 != _security_cookie )
  {
    __asm
    {
      vmovups xmm3, xmmword ptr [rdx]
      vmulps  xmm0, xmm3, xmm3
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vsqrtps xmm2, xmm0
      vdivps  xmm4, xmm3, xmm2
      vmovaps [rsp+58h+var_28], xmm7
      vshufps xmm3, xmm4, xmm4, 0FFh
      vandps  xmm1, xmm3, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
      vmovaps [rsp+58h+var_38], xmm8
      vmovaps [rsp+58h+var_48], xmm9
      vmovups xmm9, xmmword ptr [rcx]
      vmovaps xmm0, xmm6
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm5, xmm0, xmm2
      vorps   xmm2, xmm1, cs:__xmm@3f8000003f8000003f8000003f800000
      vsubps  xmm0, xmm3, xmm2
      vmulps  xmm1, xmm0, xmm5
      vaddps  xmm2, xmm1, xmm2
      vmulps  xmm4, xmm5, xmm4
      vshufps xmm3, xmm4, xmm2, 0FAh ; 'ú'
      vshufps xmm7, xmm4, xmm3, 84h ; '„'
      vshufps xmm8, xmm7, xmm7, 0FFh
      vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
      vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
      vmulps  xmm3, xmm1, xmm0
      vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
      vshufps xmm2, xmm9, xmm9, 0D2h ; 'Ò'
      vmulps  xmm0, xmm2, xmm1
      vmulps  xmm1, xmm9, xmm7
      vsubps  xmm5, xmm3, xmm0
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
      vshufps xmm6, xmm9, xmm9, 0FFh
      vmulps  xmm4, xmm9, xmm8
      vmovaps xmm9, [rsp+58h+var_48]
      vmulps  xmm0, xmm8, xmm6
      vmovaps xmm8, [rsp+58h+var_38]
      vmulps  xmm1, xmm6, xmm7
      vmovaps xmm7, [rsp+58h+var_28]
      vhaddps xmm3, xmm2, xmm2
      vsubps  xmm2, xmm0, xmm3
      vaddps  xmm1, xmm4, xmm1
      vaddps  xmm0, xmm5, xmm1
      vblendps xmm2, xmm2, xmm0, 7
      vmovups xmmword ptr [rcx], xmm2
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
}

/*
==============
XAnimBoneChain_CreateForWorldTransformCalc
==============
*/
__int64 XAnimBoneChain_CreateForWorldTransformCalc(XAnimBoneChain *chain, const DObj *obj, unsigned __int16 boneIndex, XAnimWorldTransformCache *transformCache)
{
  unsigned int v9; 
  int v10; 
  unsigned __int16 *boneIndices; 
  const DObj *v14; 
  __int64 v15; 
  __int64 modelIndex; 
  bool v24; 
  const dvar_t *v25; 
  bool v26; 
  int v27; 
  __int64 result; 
  __int64 v31; 
  __int64 v32; 
  float4 outTrans; 
  DObjHierarchyIterator iter; 

  v9 = 0;
  v10 = DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
  if ( v10 != 255 )
  {
    _R12 = chain->basePoseTranslationWithScale;
    __asm { vmovaps [rsp+8E8h+var_48], xmm6 }
    boneIndices = chain->boneIndices;
    __asm
    {
      vmovaps [rsp+8E8h+var_58], xmm7
      vmovss  xmm7, cs:__real@3f800000
    }
    do
    {
      if ( v9 >= 0x80 )
      {
        LODWORD(v32) = 128;
        LODWORD(v31) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2874, ASSERT_TYPE_ASSERT, "(unsigned)( hierarchyBoneIndex ) < (unsigned)( ( sizeof( *array_counter( chain->boneIndices ) ) + 0 ) )", "hierarchyBoneIndex doesn't index ARRAY_COUNT( chain->boneIndices )\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      if ( (v10 < 0 || (unsigned int)v10 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v10, "signed", v10) )
        __debugbreak();
      v14 = iter.obj;
      v15 = iter.boneIndex;
      modelIndex = iter.modelIndex;
      *boneIndices = v10;
      _R8 = v14->models[modelIndex];
      if ( (v15 & 0x8000) != 0 || ((0x80000000 >> (v15 & 0x1F)) & _R8->noScalePartBits[v15 >> 5]) == 0 )
        __asm { vmovss  xmm6, dword ptr [r8+24h] }
      else
        __asm { vmovaps xmm6, xmm7 }
      DObjHierarchyIterator_GetBasePoseRotTrans(&iter, &chain->basePoseRotation[v9], &outTrans);
      __asm
      {
        vmovups xmm1, xmmword ptr [rsp+8E8h+outTrans.v]
        vmovaps xmm0, xmm6
        vshufps xmm0, xmm0, xmm0, 0
        vshufps xmm0, xmm1, xmm0, 0FAh ; 'ú'
        vshufps xmm2, xmm1, xmm0, 84h ; '„'
        vmovups xmmword ptr [rsp+8E8h+outTrans.v], xmm2
        vmovups xmmword ptr [r12], xmm2
      }
      if ( (v10 < 0 || (unsigned int)v10 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v10, "signed", v10) )
        __debugbreak();
      if ( (v10 & 0x8000u) == 0 )
      {
        if ( transformCache )
        {
          if ( (unsigned __int16)v10 >= 0xFEu )
          {
            LODWORD(v32) = 254;
            LODWORD(v31) = (unsigned __int16)v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( DOBJ_MAX_PARTS )", "boneIndex doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", v31, v32) )
              __debugbreak();
          }
          v24 = bitarray_base<bitarray<256>>::testBit(&transformCache->partBits, (unsigned __int16)v10);
        }
        else
        {
          v25 = DCONST_DVARBOOL_xanim_enableTransformCache;
          if ( !DCONST_DVARBOOL_xanim_enableTransformCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableTransformCache") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v25);
          if ( v25->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 95, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_xanim_enableTransformCache, \"xanim_enableTransformCache\" ))", (const char *)&queryFormat, "!Dconst_GetBool( xanim_enableTransformCache )") )
            __debugbreak();
          v24 = 0;
        }
      }
      else
      {
        v24 = 0;
      }
      if ( (v10 & 0x8000) != 0 )
      {
        v26 = (obj->skel.partBits.skel.array[7] & 2) != 0;
      }
      else
      {
        if ( (unsigned int)v10 >= 0x100 )
        {
          LODWORD(v32) = 256;
          LODWORD(v31) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v31, v32) )
            __debugbreak();
        }
        v26 = ((0x80000000 >> (v10 & 0x1F)) & obj->skel.partBits.skel.array[(unsigned __int64)(unsigned int)v10 >> 5]) != 0;
      }
      if ( v26 || v24 )
        v24 = 1;
      v27 = DObjHierarchyIterator_NextParent(&iter);
      ++v9;
      ++boneIndices;
      ++_R12;
      v10 = v27;
    }
    while ( !v24 && v27 != 255 );
    __asm
    {
      vmovaps xmm6, [rsp+8E8h+var_48]
      vmovaps xmm7, [rsp+8E8h+var_58]
    }
  }
  chain->length = v9;
  result = v9;
  chain->includesRoot = v10 == 255;
  return result;
}

/*
==============
XAnimBoneChain_GetTransform
==============
*/
void XAnimBoneChain_GetTransform(const XAnimBoneChain *chain, const DObj *obj, const DObjPartBits *ignorePartBits, const XAnimCalcBuffer *buffer, int chainBoneIndex, const XAnimWorldTransformCache *transformCache, float4 *outRotation, float4 *outTranslation)
{
  unsigned int length; 
  unsigned __int64 v18; 
  __int64 SkelBoneIndex; 
  bool v25; 
  bool v26; 
  const DObjAnimMat *v27; 
  const float4 *v28; 
  __int64 v29; 
  bool v49; 
  __int64 v50; 
  __int64 v51; 
  float4 v52; 
  float4 *v53; 
  float4 outRotationQuat; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  _R13 = outRotation;
  _RDI = chain;
  v53 = outTranslation;
  length = chain->length;
  v52.v.m128_u64[0] = (unsigned __int64)outRotation;
  if ( chainBoneIndex >= length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2909, ASSERT_TYPE_ASSERT, "(unsigned)( chainBoneIndex ) < (unsigned)( chain->length )", "chainBoneIndex doesn't index chain->length\n\t%i not in [0, %i)", chainBoneIndex, length) )
    __debugbreak();
  LOWORD(v18) = _RDI->boneIndices[chainBoneIndex];
  if ( !XAnimWorldTransformCache_HasBoneTransform(transformCache, v18) )
  {
    v18 = (unsigned __int16)v18;
    _RAX = 2i64 * chainBoneIndex;
    __asm
    {
      vmovaps [rsp+0E8h+var_68], xmm8
      vmovups xmm6, xmmword ptr [rdi+rax*8]
    }
    _RAX = 2 * (chainBoneIndex + 128i64);
    __asm
    {
      vmovups xmm7, xmmword ptr [rdi+rax*8]
      vbroadcastss xmm8, dword ptr [rdi+rax*8+0Ch]
    }
    SkelBoneIndex = DObjGetSkelBoneIndex(obj, (unsigned __int16)v18);
    v25 = XAnimTestPartBit(&obj->skel.partBits.control, (unsigned __int16)v18);
    v26 = XAnimTestPartBit(&obj->skel.partBits.skel, (unsigned __int16)v18);
    if ( XAnimTestPartBit(&obj->skel.partBits.anim, (unsigned __int16)v18) )
    {
      if ( !v25 )
      {
        v29 = SkelBoneIndex;
        if ( v26 )
        {
          _RCX = &obj->skel.mat[v29];
          __asm { vmovups xmm7, xmmword ptr [rcx+10h] }
        }
        else
        {
          if ( XAnimTestPartBit(ignorePartBits, v18) )
            buffer = (const XAnimCalcBuffer *)&obj->skel.mat;
          _RCX = &buffer->rotTransArray[v29];
          __asm
          {
            vxorps  xmm4, xmm4, xmm4
            vmovups xmm3, xmmword ptr [rcx+10h]
            vshufps xmm2, xmm3, xmm3, 0FFh
            vrcpps  xmm0, xmm2
            vmulps  xmm1, xmm0, xmm3
            vcmpltps xmm0, xmm4, xmm2
            vblendvps xmm1, xmm3, xmm1, xmm0
            vmulps  xmm2, xmm1, xmm8
            vaddps  xmm7, xmm2, xmm7
          }
        }
        __asm { vmovups xmm0, xmm6 }
        XAnimGetNormalizedRotation((float4 *)_RCX, v27, v28);
        __asm { vmovups xmm6, xmm0 }
LABEL_11:
        _R13 = (float4 *)v52.v.m128_u64[0];
        __asm { vmovaps xmm8, [rsp+0E8h+var_68] }
        goto LABEL_12;
      }
    }
    else if ( !v25 )
    {
LABEL_24:
      if ( (unsigned __int8)((unsigned int)v18 >> 15) )
      {
        v49 = (obj->skel.partBits.skel.array[7] & 2) != 0;
      }
      else
      {
        if ( (unsigned int)v18 >= 0x100 )
        {
          LODWORD(v51) = 256;
          LODWORD(v50) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v50, v51) )
            __debugbreak();
        }
        v49 = ((0x80000000 >> (v18 & 0x1F)) & obj->skel.partBits.skel.array[v18 >> 5]) != 0;
      }
      if ( v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2974, ASSERT_TYPE_ASSERT, "(!XAnimTestPartBit( &obj->skel.partBits.skel, currentBoneIndex ))", (const char *)&queryFormat, "!XAnimTestPartBit( &obj->skel.partBits.skel, currentBoneIndex )") )
        __debugbreak();
      goto LABEL_11;
    }
    Com_PrintWarning(19, "XAnimGetLocalBoneTransform: bone controllers not yet supported, result may be incorrect\n");
    goto LABEL_24;
  }
  XAnimWorldTransformCache_GetBoneTransform(transformCache, v18, &outRotationQuat, &v52);
  __asm
  {
    vmovups xmm7, xmmword ptr [rsp+0E8h+var_A8.v]
    vmovups xmm6, xmmword ptr [rsp+0E8h+outRotationQuat.v]
  }
LABEL_12:
  __asm
  {
    vcmpneqps xmm0, xmm6, xmm6
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2981, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( rotation ))", (const char *)&queryFormat, "!Float4IsNaN( rotation )") )
    __debugbreak();
  __asm
  {
    vcmpneqps xmm0, xmm7, xmm7
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2982, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( translation ))", (const char *)&queryFormat, "!Float4IsNaN( translation )") )
    __debugbreak();
  _RAX = v53;
  __asm
  {
    vmovups xmmword ptr [r13+0], xmm6
    vmovups xmmword ptr [rax], xmm7
    vmovaps xmm6, [rsp+0E8h+var_48]
    vmovaps xmm7, [rsp+0E8h+var_58]
  }
}

/*
==============
XAnimCalc
==============
*/

void __fastcall XAnimCalc(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *info, double weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  XAnimTree *tree; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int8 numLods; 
  __int64 v16; 
  unsigned __int8 lod; 
  unsigned __int8 v18; 
  unsigned __int8 v19; 
  bool IsCustomCalcNode; 
  bool ShouldIgnoreClientOnlyNode; 
  bool isEmpty; 
  bool v27; 
  XAnimCalcBuffer *v32; 

  tree = obj->tree;
  __asm { vmovaps [rsp+68h+var_28], xmm6 }
  _RSI = animInfo;
  __asm { vmovaps xmm6, xmm3 }
  if ( !obj->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1886, ASSERT_TYPE_ASSERT, "(tree)", (const char *)&queryFormat, "tree") )
    __debugbreak();
  if ( !tree->anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1887, ASSERT_TYPE_ASSERT, "(tree->anims)", (const char *)&queryFormat, "tree->anims") )
    __debugbreak();
  if ( info->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1890, ASSERT_TYPE_ASSERT, "(info->tree == tree)", (const char *)&queryFormat, "info->tree == tree") )
    __debugbreak();
  if ( !info->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1891, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)info->subTreeID);
  if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1896, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !_RSI->lod )
    goto LABEL_27;
  if ( info->animToModel )
    goto LABEL_27;
  numLods = SubTreeAnims->numLods;
  if ( !numLods )
    goto LABEL_27;
  v16 = 2 * (info->animIndex + 5i64);
  lod = SubTreeAnims->entries[info->animIndex].lod;
  if ( lod == 5 )
    goto LABEL_27;
  if ( lod >= numLods )
  {
    LODWORD(v32) = lod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1906, ASSERT_TYPE_ASSERT, "(unsigned)( animEntry->lod ) < (unsigned)( anims->numLods )", "animEntry->lod doesn't index anims->numLods\n\t%i not in [0, %i)", v32, numLods) )
      __debugbreak();
  }
  v18 = _RSI->lod;
  v19 = *((_BYTE *)&SubTreeAnims->size + 8 * v16 + 1);
  if ( v18 <= v19 )
  {
    if ( v18 != v19 )
      goto LABEL_27;
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+0BECCh]
      vxorps  xmm2, xmm2, xmm2
      vcomiss xmm1, xmm2
    }
    if ( v18 <= v19 )
      goto LABEL_27;
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, xmm1
      vmulss  xmm6, xmm6, xmm1
      vucomiss xmm6, xmm2
    }
    if ( v18 != v19 )
    {
LABEL_27:
      IsCustomCalcNode = XAnimIsCustomCalcNode(SubTreeAnims, info);
      ShouldIgnoreClientOnlyNode = XAnimShouldIgnoreClientOnlyNode(tree, info);
      if ( IsCustomCalcNode )
      {
        if ( !ShouldIgnoreClientOnlyNode )
        {
          isEmpty = destBuffer->isEmpty;
          v27 = bNormQuat || isEmpty;
          if ( isEmpty )
          {
            XAnimClearRotTransArray(obj, destBuffer->rotTransArray, &_RSI->ignorePartBits);
            destBuffer->isEmpty = 0;
          }
          XAnimWorldTransformCache_Clear(_RSI->worldTransformCache);
          __asm { vmovaps xmm3, xmm6; weightScale }
          XAnimCustomNodeCalc(_RSI, obj, info, *(float *)&_XMM3, v27, destBuffer);
          goto LABEL_38;
        }
LABEL_37:
        __asm { vmovaps xmm3, xmm6; weightScale }
        XAnimCalcDefaultBlendNode(_RSI, obj, info, *(float *)&_XMM3, bNormQuat, destBuffer, calcMode);
        goto LABEL_38;
      }
      if ( ShouldIgnoreClientOnlyNode )
        goto LABEL_38;
      if ( !info->animToModel )
        goto LABEL_37;
      if ( destBuffer->isEmpty )
      {
        XAnimClearRotTransArray(obj, destBuffer->rotTransArray, &_RSI->ignorePartBits);
        destBuffer->isEmpty = 0;
      }
      __asm { vmovaps xmm1, xmm6; weightScale }
      XAnimCalcLeaf(info, *(float *)&_XMM1, destBuffer->rotTransArray, _RSI, calcMode, obj);
    }
  }
LABEL_38:
  __asm { vmovaps xmm6, [rsp+68h+var_28] }
}

/*
==============
XAnimCalcAddPartBits
==============
*/
void XAnimCalcAddPartBits(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const DObjPartBits *partBits, XAnimCalcBuffer *calcBuffer)
{
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  DObjPartBits partBitsa; 

  __asm
  {
    vmovups ymm0, ymmword ptr [r8]
    vmovups ymmword ptr [rsp+98h+partBits.baseclass_0.baseclass_0.baseclass_0.array], ymm0
  }
  if ( DObjHasProceduralBones(obj) )
    XAnimProceduralBonesAddPartBits(obj, &partBitsa);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, animCalcInfo->partBits);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::flipAllBits(&otherBitSet);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::andAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, &partBitsa);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(animCalcInfo->partBits, &otherBitSet);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::flipAllBits(&otherBitSet);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, &obj->skel.partBits.anim);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::andAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&animCalcInfo->ignorePartBits, &otherBitSet);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::andAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&animCalcInfo->animPartBits, &otherBitSet);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&obj->skel.partBits.anim, animCalcInfo->partBits);
  if ( !calcBuffer->isEmpty )
    XAnimClearRotTransArray(obj, calcBuffer->rotTransArray, (const DObjPartBits *)&otherBitSet);
}

/*
==============
XAnimCalcAdditiveChildren
==============
*/
void XAnimCalcAdditiveChildren(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *nodeInfo, unsigned __int16 firstInfoIndex, float weightScale, XAnimCalcBuffer *destBuffer, bool multiply)
{
  unsigned __int16 next; 
  XAnimTree *tree; 
  const DObj *v11; 
  XAnimCalcAnimInfo *v12; 
  __int64 v13; 
  int v16; 
  bool v17; 
  __int64 rotTransArrayIndex; 
  int v19; 
  int v21; 
  bool v22; 
  unsigned int v24; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v25; 
  XAnimCalcBuffer *v26; 
  int v27; 
  int v28; 
  DObjAnimMat *rotTransArray; 
  unsigned int v30; 
  DObjAnimMat *v31; 
  __int64 v32; 
  float *v35; 
  __int64 v43; 
  DObjAnimMat *v44; 
  DObjAnimMat *v45; 
  __int64 v54; 
  XAnimCalcBuffer *v56; 
  __int64 calcMode; 
  int v59; 
  __int64 infoa; 
  XAnimCalcBuffer calcBuffer; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v64; 
  void *retaddr; 

  _R11 = &retaddr;
  next = firstInfoIndex;
  tree = obj->tree;
  v11 = obj;
  v12 = animInfo;
  if ( !firstInfoIndex )
    return;
  LODWORD(v13) = 0;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vxorps  xmm6, xmm6, xmm6
  }
  while ( 1 )
  {
    _RBX = GetAnimInfo(next);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( (_RBX->animToModel || (_RBX->animParent.flags & 0x210) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3068, ASSERT_TYPE_ASSERT, "(IsInfoAdditive( childInfo ))", (const char *)&queryFormat, "IsInfoAdditive( childInfo )") )
      __debugbreak();
    if ( _RBX->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3071, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
      __debugbreak();
    if ( !_RBX->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3072, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
      __debugbreak();
    if ( _RBX->animToModel || (v16 = 1, (_RBX->animParent.flags & 0x200) == 0) )
      v16 = 0;
    if ( !multiply )
      break;
    v17 = v16 == 0;
    if ( v16 )
      goto LABEL_23;
LABEL_24:
    next = _RBX->next;
    if ( !next )
      goto LABEL_73;
  }
  v17 = v16 == 0;
  if ( v16 )
    goto LABEL_24;
LABEL_23:
  __asm { vucomiss xmm6, dword ptr [rbx+3Ch] }
  if ( v17 )
    goto LABEL_24;
  if ( !next )
    goto LABEL_73;
  rotTransArrayIndex = v12->rotTransArrayIndex;
  v19 = v12->rotTransArrayIndex + DObjTotalNumBones(v11);
  if ( v19 > 1524 )
  {
    Com_PrintWarning(19, "max calculation buffer exceeded\n");
    DObjDisplayAnim(v11, (const char *)&queryFormat.fmt + 3);
    goto LABEL_73;
  }
  v12->rotTransArrayIndex = v19;
  calcBuffer.refCount = 1;
  calcBuffer.isEmpty = 1;
  calcBuffer.rotTransArray = &v12->rotTransArray[rotTransArrayIndex];
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v64, &v12->animPartBits);
  while ( 2 )
  {
    _RBX = GetAnimInfo(next);
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( (_RBX->animToModel || (_RBX->animParent.flags & 0x210) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3109, ASSERT_TYPE_ASSERT, "(IsInfoAdditive( childInfo ))", (const char *)&queryFormat, "IsInfoAdditive( childInfo )") )
      __debugbreak();
    if ( _RBX->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3112, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
      __debugbreak();
    if ( !_RBX->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3113, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
      __debugbreak();
    if ( _RBX->animToModel || (v21 = 1, (_RBX->animParent.flags & 0x200) == 0) )
      v21 = 0;
    if ( multiply )
    {
      v22 = v21 == 0;
      if ( v21 )
        goto LABEL_50;
    }
    else
    {
      v22 = v21 == 0;
      if ( !v21 )
      {
LABEL_50:
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+3Ch]; weightScale
          vucomiss xmm3, xmm6
        }
        if ( !v22 )
          XAnimCalc(v12, v11, _RBX, *(double *)&_XMM3, 1, &calcBuffer, (XAnimNodeCalcMode)(2 * multiply));
      }
    }
    next = _RBX->next;
    if ( next )
      continue;
    break;
  }
  if ( !calcBuffer.isEmpty )
  {
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::flipAllBits(&v64);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::andAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v64, &v12->animPartBits);
    v24 = 0;
    v25 = &v64;
    while ( !v25->array[0] )
    {
      ++v24;
      v25 = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)v25 + 4);
      if ( v24 >= 8 )
      {
        v26 = destBuffer;
        goto LABEL_59;
      }
    }
    v26 = destBuffer;
    XAnimSetRotTransToBasePose(destBuffer->rotTransArray, v11, (const DObjPartBits *)&v64);
    XAnimWarnAboutAdditivesAffectingNonAnimatedBones(v11, nodeInfo, (const DObjPartBits *)&v64);
LABEL_59:
    v59 = DObjNumClientOnlyBones(v11);
    v27 = v59;
    v28 = DObjNumBones(v11);
    rotTransArray = v26->rotTransArray;
    v30 = 0;
    v31 = calcBuffer.rotTransArray;
    v32 = v28;
    infoa = v28;
    __asm { vmovss  xmm6, [rsp+0F8h+weightScale] }
    if ( v28 > 0 )
    {
      _RDI = &rotTransArray->trans.v[2];
      v13 = v28;
      v35 = &calcBuffer.rotTransArray->trans.v[2];
      do
      {
        if ( v30 >= 0x100 )
        {
          LODWORD(calcMode) = 256;
          LODWORD(v56) = v30;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v56, calcMode) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v30 & 0x1F)) & animInfo->ignorePartBits.array[(unsigned __int64)v30 >> 5]) == 0 )
        {
          __asm { vmovaps xmm2, xmm6; weightScale }
          XAnimApplyAdditiveRot(&rotTransArray[v30], &v31[v30], *(double *)&_XMM2);
          __asm
          {
            vmulss  xmm0, xmm6, dword ptr [rsi-8]
            vaddss  xmm1, xmm0, dword ptr [rdi-8]
            vmovss  dword ptr [rdi-8], xmm1
            vmulss  xmm0, xmm6, dword ptr [rsi-4]
            vaddss  xmm1, xmm0, dword ptr [rdi-4]
            vmovss  dword ptr [rdi-4], xmm1
            vmulss  xmm2, xmm6, dword ptr [rsi]
            vaddss  xmm0, xmm2, dword ptr [rdi]
            vmovss  dword ptr [rdi], xmm0
          }
        }
        ++v30;
        v35 += 8;
        _RDI += 8;
        --v13;
      }
      while ( v13 );
      v32 = infoa;
      v27 = v59;
    }
    if ( (animInfo->ignorePartBits.array[7] & 2) == 0 )
    {
      v43 = v32;
      v44 = &rotTransArray[v43];
      v45 = &v31[v43];
      if ( v27 > 0 )
      {
        do
        {
          __asm { vmovaps xmm2, xmm6; weightScale }
          XAnimApplyAdditiveRot(&v44[(int)v13], &v45[(int)v13], *(double *)&_XMM2);
          __asm
          {
            vmulss  xmm0, xmm6, dword ptr [r9+r8-4]
            vaddss  xmm1, xmm0, dword ptr [r8-4]
            vmovss  dword ptr [r8-4], xmm1
            vmulss  xmm0, xmm6, dword ptr [r9+r8]
            vaddss  xmm1, xmm0, dword ptr [r8]
            vmovss  dword ptr [r8], xmm1
            vmulss  xmm0, xmm6, dword ptr [r9+r8+4]
            vaddss  xmm1, xmm0, dword ptr [r8+4]
          }
          LODWORD(v13) = v13 + 1;
          __asm { vmovss  dword ptr [r8+4], xmm1 }
        }
        while ( v54 != 1 );
      }
    }
    v11 = obj;
    v12 = animInfo;
  }
  XAnimFreeCalcBuffer(v12, v11, &calcBuffer);
LABEL_73:
  __asm { vmovaps xmm6, [rsp+0F8h+var_58] }
}

/*
==============
XAnimCalcDefaultBlendNode
==============
*/

void __fastcall XAnimCalcDefaultBlendNode(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *info, double weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  float weightScalea; 
  float bNormQuata; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  v12 = XAnimCalcNonAdditiveChildren(animInfo, obj, info, *(float *)&weightScale, bNormQuat, destBuffer, calcMode);
  __asm { vmovss  [rsp+58h+weightScale], xmm6 }
  v13 = v12;
  XAnimCalcAdditiveChildren(animInfo, obj, info, v12, weightScalea, destBuffer, 1);
  __asm
  {
    vmovss  [rsp+58h+bNormQuat], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  XAnimCalcAdditiveChildren(animInfo, obj, info, v13, bNormQuata, destBuffer, 0);
}

/*
==============
XAnimCalcFinalizeBuffer
==============
*/

void __fastcall XAnimCalcFinalizeBuffer(const XAnimCalcAnimInfo *animInfo, const DObj *obj, double weightScale, const XAnimCalcBuffer *calcBuffer, XAnimCalcBuffer *destBuffer, bool normalizeChildren, bool bNormQuat, XAnimNodeCalcMode calcMode)
{
  int v13; 
  int v14; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm2
  }
  if ( calcBuffer != destBuffer && !bNormQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2143, ASSERT_TYPE_ASSERT, "((calcBuffer == destBuffer) || bNormQuat)", (const char *)&queryFormat, "(calcBuffer == destBuffer) || bNormQuat") )
    __debugbreak();
  if ( !calcBuffer->isEmpty )
  {
    if ( bNormQuat )
    {
      __asm { vmovaps xmm2, xmm6; weightScale }
      if ( normalizeChildren )
        XAnimAccumulateBuffer(animInfo, obj, *(float *)&_XMM2, calcBuffer, destBuffer, calcMode);
      else
        XAnimAccumulateBufferWithoutNormalization(animInfo, obj, *(float *)&_XMM2, calcBuffer, destBuffer, calcMode);
    }
    else
    {
      if ( calcBuffer != destBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2153, ASSERT_TYPE_ASSERT, "(calcBuffer == destBuffer)", (const char *)&queryFormat, "calcBuffer == destBuffer") )
        __debugbreak();
      v13 = DObjNumBones(obj);
      v14 = DObjNumClientOnlyBones(obj);
      XAnimScaleRotTransArray(v13, v14, animInfo, destBuffer->rotTransArray);
    }
  }
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
}

/*
==============
XAnimCalcLeaf
==============
*/

void __fastcall XAnimCalcLeaf(const XAnimInfo *info, double weightScale, DObjAnimMat *rotTransArray, XAnimCalcAnimInfo *animInfo, XAnimNodeCalcMode calcMode, const DObj *obj)
{
  const XAnimParts *parts; 
  XAnimToXModel *animToModel; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  unsigned int v21; 
  int v22; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  int v26; 
  unsigned int v27; 
  int v28; 
  unsigned int v29; 
  unsigned __int8 flags; 
  int v33; 
  char v39; 
  unsigned __int16 numframes; 
  const unsigned __int16 *v41; 
  const unsigned __int16 *boneIndex; 
  DObjPartBits *fmt; 
  DObjPartBits *animCalcInfo; 
  DObjAnimMat *rotTransArraya; 

  __asm
  {
    vmovaps [rsp+98h+var_48], xmm7
    vmovaps xmm7, xmm1
  }
  _RBP = info;
  if ( !info->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1322, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  parts = _RBP->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1326, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  if ( !_RBP->animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1328, ASSERT_TYPE_ASSERT, "(info->animToModel != nullptr)", (const char *)&queryFormat, "info->animToModel != nullptr") )
    __debugbreak();
  animToModel = _RBP->animToModel;
  if ( !animToModel || !animToModel->boneCount || parts->boneCount[9] )
  {
    v16 = animToModel->partBits.array[0] & ~animInfo->ignorePartBits.array[0];
    animInfo->animPartBits.array[0] |= v16;
    v17 = animToModel->partBits.array[1] & ~animInfo->ignorePartBits.array[1];
    animInfo->animPartBits.array[1] |= v17;
    v18 = v17 | v16;
    v19 = animToModel->partBits.array[2] & ~animInfo->ignorePartBits.array[2];
    animInfo->animPartBits.array[2] |= v19;
    v20 = v19 | v18;
    v21 = animToModel->partBits.array[3] & ~animInfo->ignorePartBits.array[3];
    animInfo->animPartBits.array[3] |= v21;
    v22 = v21 | v20;
    v23 = animToModel->partBits.array[4] & ~animInfo->ignorePartBits.array[4];
    animInfo->animPartBits.array[4] |= v23;
    v24 = v23 | v22;
    v25 = animToModel->partBits.array[5] & ~animInfo->ignorePartBits.array[5];
    animInfo->animPartBits.array[5] |= v25;
    v26 = v25 | v24;
    v27 = animToModel->partBits.array[6] & ~animInfo->ignorePartBits.array[6];
    animInfo->animPartBits.array[6] |= v27;
    v28 = v27 | v26;
    v29 = animToModel->partBits.array[7] & ~animInfo->ignorePartBits.array[7];
    animInfo->animPartBits.array[7] |= v29;
    if ( v29 | v28 || obj->blendShapeTargetCount )
    {
      __asm
      {
        vmovaps [rsp+98h+var_38], xmm6
        vmovss  xmm6, dword ptr [rbp+28h]
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
        vmovaps [rsp+98h+var_58], xmm8
      }
      flags = parts->flags;
      v33 = 0;
      __asm { vmovss  xmm8, cs:__real@3f800000 }
      if ( (flags & 1) != 0 )
      {
        __asm { vcomiss xmm6, xmm8 }
        LOBYTE(v33) = 0;
      }
      else
      {
        __asm { vcomiss xmm6, xmm8 }
        LOBYTE(v33) = (flags & 1) == 0;
      }
      if ( !v33 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+98h+rotTransArray], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1360, ASSERT_TYPE_ASSERT, "((parts->flags & ANIM_LOOP) ? (time < 1.f) : (time <= 1.f))", "%s\n\ttime: %f, loop: %d", "(parts->flags & ANIM_LOOP) ? (time < 1.f) : (time <= 1.f)", *(double *)&rotTransArraya, flags & 1) )
          __debugbreak();
      }
      __asm
      {
        vmovaps xmm3, xmm6; time
        vmovaps xmm2, xmm7; relativeWeight
      }
      XAnimCalcLeafBlendshapes(_RBP, parts, *(const float *)&_XMM2, *(const float *)&_XMM3, obj, animInfo, rotTransArray);
      __asm
      {
        vucomiss xmm6, xmm8
        vmovaps xmm8, [rsp+98h+var_58]
      }
      if ( v39 || (numframes = parts->numframes) == 0 )
      {
        if ( (parts->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1370, ASSERT_TYPE_ASSERT, "(!(parts->flags & ANIM_LOOP))", (const char *)&queryFormat, "!(parts->flags & ANIM_LOOP)") )
          __debugbreak();
        boneIndex = animToModel->boneIndex;
        fmt = &animInfo->ignorePartBits;
        __asm { vmovaps xmm2, xmm7; weightScale }
        if ( calcMode == EASE_IN_QUAD )
        {
          XAnimCalcNonLoopEnd_1_(parts, boneIndex, *(float *)&_XMM2, rotTransArray, fmt);
        }
        else if ( calcMode == EASE_OUT_QUAD )
        {
          XAnimCalcNonLoopEnd_2_(parts, boneIndex, *(float *)&_XMM2, rotTransArray, fmt);
        }
        else
        {
          XAnimCalcNonLoopEnd_0_(parts, boneIndex, *(float *)&_XMM2, rotTransArray, fmt);
        }
      }
      else
      {
        v41 = animToModel->boneIndex;
        animCalcInfo = &animInfo->ignorePartBits;
        __asm
        {
          vmovaps xmm3, xmm7; weightScale
          vmovaps xmm2, xmm6; time
        }
        if ( calcMode == EASE_IN_QUAD )
        {
          if ( numframes >= 0x100u )
            XAnimCalcParts_unsigned_short_1_(parts, v41, *(const float *)&_XMM2, *(const float *)&_XMM3, rotTransArray, animCalcInfo);
          else
            XAnimCalcParts_unsigned_char_1_(parts, v41, *(const float *)&_XMM2, *(const float *)&_XMM3, rotTransArray, animCalcInfo);
        }
        else if ( calcMode == EASE_OUT_QUAD )
        {
          if ( numframes >= 0x100u )
            XAnimCalcParts_unsigned_short_2_(parts, v41, *(const float *)&_XMM2, *(const float *)&_XMM3, rotTransArray, animCalcInfo);
          else
            XAnimCalcParts_unsigned_char_2_(parts, v41, *(const float *)&_XMM2, *(const float *)&_XMM3, rotTransArray, animCalcInfo);
        }
        else if ( numframes >= 0x100u )
        {
          XAnimCalcParts_unsigned_short_0_(parts, v41, *(const float *)&_XMM2, *(const float *)&_XMM3, rotTransArray, animCalcInfo);
        }
        else
        {
          XAnimCalcParts_unsigned_char_0_(parts, v41, *(const float *)&_XMM2, *(const float *)&_XMM3, rotTransArray, animCalcInfo);
        }
      }
      __asm { vmovaps xmm6, [rsp+98h+var_38] }
    }
  }
  __asm { vmovaps xmm7, [rsp+98h+var_48] }
}

/*
==============
XAnimCalcLeafBlendshapes
==============
*/

void __fastcall XAnimCalcLeafBlendshapes(const XAnimInfo *info, const XAnimParts *parts, double relativeWeight, double time, const DObj *obj, XAnimCalcAnimInfo *animCalcInfo)
{
  unsigned __int16 blendShapeWeightCount; 
  XAnimToXModel *animToModel; 
  unsigned __int16 *v19; 
  XAnimInfo *AnimInfo; 
  bool i; 
  unsigned __int64 v23; 
  unsigned __int16 *v24; 
  unsigned __int64 v25; 
  int v37; 
  unsigned __int16 *blendShapeWeights; 
  char v43; 
  unsigned __int16 *v48; 
  unsigned __int16 *v49; 
  signed __int64 v51; 
  char *v54; 
  __int64 v55; 
  __int64 v75; 
  void *retaddr; 

  _R11 = &retaddr;
  blendShapeWeightCount = parts->blendShapeWeightCount;
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm6
    vmovaps xmmword ptr [r11-48h], xmm8
    vmovaps xmm8, xmm3
    vmovaps xmm6, xmm2
  }
  if ( blendShapeWeightCount && !obj->skel.partBits.blendShapesCalculated && obj->blendShapeTargetCount )
  {
    animToModel = info->animToModel;
    __asm { vmovaps [rsp+88h+var_38], xmm7 }
    if ( !animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1288, ASSERT_TYPE_ASSERT, "(animToModel)", (const char *)&queryFormat, "animToModel") )
      __debugbreak();
    _RBX = animCalcInfo;
    v19 = &animToModel->boneIndex[animToModel->boneCount];
    AnimInfo = GetAnimInfo(info->parent);
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    i = ((__int64)AnimInfo->parts & 0x10) == 0;
    if ( ((__int64)AnimInfo->parts & 0x10) == 0 )
    {
      v23 = 0i64;
      __asm { vsubss  xmm1, xmm7, xmm6 }
      if ( blendShapeWeightCount >= 4ui64 )
      {
        v24 = v19 + 2;
        v25 = (((unsigned __int64)blendShapeWeightCount - 4) >> 2) + 1;
        v23 = 4 * v25;
        do
        {
          _RAX = *(v24 - 2);
          v24 += 4;
          __asm
          {
            vmulss  xmm0, xmm1, dword ptr [rbx+rax*4+0BEECh]
            vmovss  dword ptr [rbx+rax*4+0BEECh], xmm0
          }
          _RAX = *(v24 - 5);
          __asm
          {
            vmulss  xmm0, xmm1, dword ptr [rbx+rax*4+0BEECh]
            vmovss  dword ptr [rbx+rax*4+0BEECh], xmm0
          }
          _RAX = *(v24 - 4);
          __asm
          {
            vmulss  xmm0, xmm1, dword ptr [rbx+rax*4+0BEECh]
            vmovss  dword ptr [rbx+rax*4+0BEECh], xmm0
          }
          _RAX = *(v24 - 3);
          __asm
          {
            vmulss  xmm0, xmm1, dword ptr [rbx+rax*4+0BEECh]
            vmovss  dword ptr [rbx+rax*4+0BEECh], xmm0
          }
          --v25;
        }
        while ( v25 );
      }
      for ( i = v23 <= blendShapeWeightCount; (__int64)v23 < blendShapeWeightCount; i = v23 <= blendShapeWeightCount )
      {
        _RAX = v19[v23++];
        __asm
        {
          vmulss  xmm0, xmm1, dword ptr [rbx+rax*4+0BEECh]
          vmovss  dword ptr [rbx+rax*4+0BEECh], xmm0
        }
      }
    }
    __asm
    {
      vcomiss xmm8, xmm7
      vaddss  xmm0, xmm6, dword ptr [rbx+0BEE8h]
      vmovss  dword ptr [rbx+0BEE8h], xmm0
    }
    if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1242, ASSERT_TYPE_ASSERT, "(time <= 1.0f)", (const char *)&queryFormat, "time <= 1.0f") )
      __debugbreak();
    v37 = parts->blendShapeWeightCount;
    blendShapeWeights = parts->blendShapeWeights;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm8
      vcvttss2si edx, xmm2
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, edx
      vsubss  xmm8, xmm2, xmm1
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm8, xmm0
    }
    v48 = &blendShapeWeights[_EDX * v37];
    if ( v43 )
    {
      if ( (_WORD)v37 )
      {
        __asm
        {
          vmovss  xmm4, cs:__real@38800100
          vmovss  xmm5, cs:__real@40000000
        }
        v75 = parts->blendShapeWeightCount;
        do
        {
          _RCX = *v19++;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, xmm4
            vsubss  xmm2, xmm1, xmm5
            vmulss  xmm3, xmm2, xmm6
            vaddss  xmm0, xmm3, dword ptr [rbx+rcx*4+0BEECh]
            vmovss  dword ptr [rbx+rcx*4+0BEECh], xmm0
          }
          --v75;
        }
        while ( v75 );
      }
    }
    else
    {
      v49 = &blendShapeWeights[v37 * (_EDX + 1)];
      if ( (_WORD)v37 )
      {
        __asm
        {
          vmovss  xmm5, cs:__real@38800100
          vmovaps [rsp+88h+var_58], xmm9
        }
        v51 = (char *)v48 - (char *)v49;
        __asm
        {
          vsubss  xmm9, xmm7, xmm8
          vmovss  xmm7, cs:__real@40000000
        }
        v54 = (char *)((char *)v19 - (char *)v49);
        v55 = parts->blendShapeWeightCount;
        do
        {
          _EAX = *(unsigned __int16 *)((char *)v49 + v51);
          _RCX = *(unsigned __int16 *)((char *)v49++ + (_QWORD)v54);
          __asm { vmovd   xmm0, eax }
          _EAX = *(v49 - 1);
          __asm
          {
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm1, xmm0, xmm5
            vsubss  xmm2, xmm1, xmm7
            vmulss  xmm4, xmm2, xmm9
            vmovd   xmm0, eax
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm1, xmm0, xmm5
            vsubss  xmm2, xmm1, xmm7
            vmulss  xmm3, xmm2, xmm8
            vaddss  xmm0, xmm4, xmm3
            vmulss  xmm1, xmm0, xmm6
            vaddss  xmm2, xmm1, dword ptr [rbx+rcx*4+0BEECh]
            vmovss  dword ptr [rbx+rcx*4+0BEECh], xmm2
          }
          --v55;
        }
        while ( v55 );
        __asm { vmovaps xmm9, [rsp+88h+var_58] }
      }
    }
    __asm { vmovaps xmm7, [rsp+88h+var_38] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_28]
    vmovaps xmm8, [rsp+88h+var_48]
  }
}

/*
==============
XAnimCalcNonAdditiveChildren
==============
*/

__int64 __fastcall XAnimCalcNonAdditiveChildren(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *nodeInfo, double weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  unsigned __int16 children; 
  XAnimTree *tree; 
  unsigned __int16 v17; 
  bool v21; 
  bool v22; 
  unsigned int flags; 
  char v24; 
  unsigned __int16 next; 
  XAnimInfo *v28; 
  __int64 result; 
  XAnimCalcBuffer *v34; 
  __int64 rotTransArrayIndex; 
  int v36; 
  bool v39; 
  bool v40; 
  unsigned __int16 v42; 
  int v43; 
  int v44; 
  float fmt; 
  unsigned __int16 v49; 
  DObjAnimMat *v50; 
  int v51; 
  char v52; 
  unsigned __int16 v57; 

  children = nodeInfo->children;
  tree = obj->tree;
  __asm
  {
    vmovaps [rsp+0D8h+var_68], xmm8
    vmovaps [rsp+0D8h+var_78], xmm9
  }
  v49 = 0;
  _RBP = NULL;
  v57 = 0;
  v17 = 0;
  __asm { vmovaps xmm8, xmm3 }
  if ( !children )
    goto LABEL_87;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  while ( 1 )
  {
    _RBX = GetAnimInfo(children);
    if ( _RBX->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3215, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
      __debugbreak();
    v21 = !_RBX->inuse;
    if ( !_RBX->inuse )
    {
      v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3216, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse");
      v21 = !v22;
      if ( v22 )
        __debugbreak();
    }
    __asm { vucomiss xmm9, dword ptr [rbx+3Ch] }
    if ( v21 )
      goto LABEL_14;
    if ( !_RBX->animToModel && (_RBX->animParent.flags & 0x210) != 0 )
    {
      v57 = children;
      goto LABEL_19;
    }
    if ( _RBP )
      break;
    _RBP = _RBX;
LABEL_14:
    children = _RBX->next;
    if ( !children )
      goto LABEL_18;
  }
  v17 = children;
LABEL_18:
  children = 0;
LABEL_19:
  if ( !_RBP )
  {
LABEL_87:
    if ( destBuffer->isEmpty )
    {
      XAnimClearRotTransArray(obj, destBuffer->rotTransArray, &animInfo->ignorePartBits);
      destBuffer->isEmpty = 0;
    }
    goto LABEL_83;
  }
  flags = nodeInfo->animParent.flags;
  __asm
  {
    vmovaps [rsp+0D8h+var_48], xmm6
    vmovaps [rsp+0D8h+var_58], xmm7
  }
  if ( (flags & 0x20) != 0 )
  {
    v24 = 0;
    goto LABEL_35;
  }
  if ( (flags & 0x8000) != 0 )
  {
    next = nodeInfo->children;
    __asm { vmovaps xmm6, xmm9 }
    if ( next )
    {
      __asm { vmovss  xmm7, cs:__real@3f7fbe77 }
      while ( 1 )
      {
        v28 = GetAnimInfo(next);
        if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( v28->animToModel )
          break;
        if ( (v28->animParent.flags & 0x210) != 0 )
          goto LABEL_33;
        if ( (v28->animParent.flags & 0x100) == 0 )
          break;
        next = v28->next;
        if ( !next )
          goto LABEL_33;
      }
      __asm
      {
        vaddss  xmm6, xmm6, dword ptr [rbx+3Ch]
        vcomiss xmm6, xmm7
      }
      goto LABEL_34;
    }
LABEL_33:
    v24 = 0;
  }
  else
  {
LABEL_34:
    v24 = 1;
  }
LABEL_35:
  __asm
  {
    vmovaps xmm7, [rsp+0D8h+var_58]
    vmovaps xmm6, [rsp+0D8h+var_48]
  }
  if ( !v17 )
  {
    if ( !v24 )
      __asm { vmulss  xmm8, xmm8, dword ptr [rbp+3Ch] }
    __asm { vmovaps xmm3, xmm8; weightScale }
    XAnimCalc(animInfo, obj, _RBP, *(double *)&_XMM3, bNormQuat, destBuffer, calcMode);
    result = children;
    goto LABEL_84;
  }
  if ( !destBuffer->isEmpty )
  {
    rotTransArrayIndex = animInfo->rotTransArrayIndex;
    v36 = animInfo->rotTransArrayIndex + DObjTotalNumBones(obj);
    if ( v36 <= 1524 )
    {
      animInfo->rotTransArrayIndex = v36;
      v34 = (XAnimCalcBuffer *)&v50;
      v51 = 1;
      v50 = &animInfo->rotTransArray[rotTransArrayIndex];
      v52 = 1;
      goto LABEL_44;
    }
    Com_PrintWarning(19, "max calculation buffer exceeded\n");
    DObjDisplayAnim(obj, (const char *)&queryFormat.fmt + 3);
LABEL_83:
    result = 0i64;
    goto LABEL_84;
  }
  ++destBuffer->refCount;
  v34 = destBuffer;
LABEL_44:
  if ( !v34->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2025, ASSERT_TYPE_ASSERT, "(calcBuffer->isEmpty)", (const char *)&queryFormat, "calcBuffer->isEmpty") )
    __debugbreak();
  __asm { vmovss  xmm3, dword ptr [rbp+3Ch]; weightScale }
  XAnimCalc(animInfo, obj, _RBP, *(double *)&_XMM3, 1, v34, LINEAR);
  while ( 2 )
  {
    _RBX = GetAnimInfo(v17);
    if ( _RBX->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3281, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
      __debugbreak();
    v39 = !_RBX->inuse;
    if ( !_RBX->inuse )
    {
      v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3282, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse");
      v39 = !v40;
      if ( v40 )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+3Ch]; weightScale
      vucomiss xmm3, xmm9
    }
    if ( v39 )
    {
LABEL_62:
      v17 = _RBX->next;
      if ( !v17 )
      {
        v42 = v57;
        goto LABEL_64;
      }
      continue;
    }
    break;
  }
  if ( _RBX->animToModel )
    goto LABEL_61;
  if ( (_RBX->animParent.flags & 0x100) != 0 )
  {
    if ( v49 )
      v17 = v49;
    v49 = v17;
    goto LABEL_62;
  }
  if ( (_RBX->animParent.flags & 0x210) == 0 )
  {
LABEL_61:
    XAnimCalc(animInfo, obj, _RBX, *(double *)&_XMM3, 1, v34, LINEAR);
    goto LABEL_62;
  }
  v42 = v17;
LABEL_64:
  if ( v49 )
  {
    __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm8 }
    XAnimCalcOverlayChildren(animInfo, obj, nodeInfo, v49, fmt, v34);
  }
  if ( v34 != destBuffer && !bNormQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2143, ASSERT_TYPE_ASSERT, "((calcBuffer == destBuffer) || bNormQuat)", (const char *)&queryFormat, "(calcBuffer == destBuffer) || bNormQuat") )
    __debugbreak();
  if ( !v34->isEmpty )
  {
    if ( bNormQuat )
    {
      __asm { vmovaps xmm2, xmm8; weightScale }
      if ( v24 )
        XAnimAccumulateBuffer(animInfo, obj, *(float *)&_XMM2, v34, destBuffer, calcMode);
      else
        XAnimAccumulateBufferWithoutNormalization(animInfo, obj, *(float *)&_XMM2, v34, destBuffer, calcMode);
    }
    else
    {
      if ( v34 != destBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2153, ASSERT_TYPE_ASSERT, "(calcBuffer == destBuffer)", (const char *)&queryFormat, "calcBuffer == destBuffer") )
        __debugbreak();
      v43 = DObjNumBones(obj);
      v44 = DObjNumClientOnlyBones(obj);
      XAnimScaleRotTransArray(v43, v44, animInfo, destBuffer->rotTransArray);
    }
  }
  XAnimFreeCalcBuffer(animInfo, obj, v34);
  result = v42;
LABEL_84:
  __asm
  {
    vmovaps xmm8, [rsp+0D8h+var_68]
    vmovaps xmm9, [rsp+0D8h+var_78]
  }
  return result;
}

/*
==============
XAnimCalcOverlayChildren
==============
*/
void XAnimCalcOverlayChildren(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *nodeInfo, unsigned __int16 firstInfoIndex, float weightScale, XAnimCalcBuffer *destBuffer)
{
  XAnimTree *tree; 
  bool v17; 
  bool v18; 
  const char *AnimDebugName; 
  double v27; 
  void *retaddr; 

  if ( firstInfoIndex )
  {
    _RAX = &retaddr;
    tree = obj->tree;
    __asm
    {
      vmovaps xmmword ptr [rax-58h], xmm8
      vmovaps xmmword ptr [rax-68h], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps xmmword ptr [rax-38h], xmm6
      vmovaps xmmword ptr [rax-48h], xmm7
      vxorps  xmm8, xmm8, xmm8
    }
    do
    {
      _RBX = GetAnimInfo(firstInfoIndex);
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      if ( _RBX->animToModel )
        goto LABEL_25;
      if ( (_RBX->animParent.flags & 0x210) != 0 )
        break;
      if ( (_RBX->animParent.flags & 0x100) == 0 )
      {
LABEL_25:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1851, ASSERT_TYPE_ASSERT, "(IsInfoOverlay( childInfo ))", "%s\n\tOverlay nodes need to be placed after relative nodes.", "IsInfoOverlay( childInfo )") )
          __debugbreak();
      }
      if ( _RBX->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1855, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
        __debugbreak();
      v17 = !_RBX->inuse;
      if ( !_RBX->inuse )
      {
        v18 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1856, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse");
        v17 = !v18;
        if ( v18 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm7, dword ptr [rbx+3Ch]
        vucomiss xmm7, xmm8
      }
      if ( !v17 )
      {
        __asm
        {
          vcomiss xmm7, xmm8
          vcomiss xmm7, xmm9
          vcvtss2sd xmm6, xmm7, xmm7
        }
        AnimDebugName = XAnimGetAnimDebugName(obj->tree->anims, _RBX->animIndex);
        __asm { vmovsd  [rsp+0A8h+var_70], xmm6 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1866, ASSERT_TYPE_ASSERT, "((weight > 0.f) && (weight <= 1.f ))", "%s\n\tOverlay node '%s' has weight of '%f'. It must be between 0.0 and 1.0.", "(weight > 0.f) && (weight <= 1.f )", AnimDebugName, v27) )
          __debugbreak();
        __asm { vmovaps xmm3, xmm7; weightScale }
        XAnimCalc(animInfo, obj, _RBX, *(double *)&_XMM3, 1, destBuffer, EASE_IN_QUAD);
      }
      firstInfoIndex = _RBX->next;
    }
    while ( firstInfoIndex );
    __asm
    {
      vmovaps xmm7, [rsp+0A8h+var_48]
      vmovaps xmm6, [rsp+0A8h+var_38]
      vmovaps xmm8, [rsp+0A8h+var_58]
      vmovaps xmm9, [rsp+0A8h+var_68]
    }
  }
}

/*
==============
XAnimClearCalcBufferIfEmpty
==============
*/
void XAnimClearCalcBufferIfEmpty(const XAnimCalcAnimInfo *animInfo, const DObj *obj, XAnimCalcBuffer *calcBuffer)
{
  if ( calcBuffer->isEmpty )
  {
    XAnimClearRotTransArray(obj, calcBuffer->rotTransArray, &animInfo->ignorePartBits);
    calcBuffer->isEmpty = 0;
  }
}

/*
==============
XAnimClearRotTransArray
==============
*/
void XAnimClearRotTransArray(const DObj *obj, DObjAnimMat *rotTransArray, const DObjPartBits *ignorePartBits)
{
  int v6; 
  int v7; 
  unsigned int v8; 
  float *v9; 
  float *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v6 = DObjNumBones(obj);
  v7 = DObjTotalNumBones(obj);
  v8 = 0;
  if ( v6 > 0 )
  {
    v9 = &rotTransArray->trans.v[2];
    do
    {
      if ( v8 >= 0x100 )
      {
        LODWORD(v13) = 256;
        LODWORD(v12) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v8 & 0x1F)) & ignorePartBits->array[(unsigned __int64)v8 >> 5]) == 0 )
      {
        rotTransArray->quat.v[0] = 0.0;
        *(_QWORD *)(v9 - 5) = 0i64;
        *(_QWORD *)(v9 - 3) = 0i64;
        *(_QWORD *)v9 = 0i64;
        *(v9 - 1) = 0.0;
      }
      ++v8;
      ++rotTransArray;
      v9 += 8;
    }
    while ( (int)v8 < v6 );
  }
  if ( (ignorePartBits->array[7] & 2) == 0 && v6 < v7 )
  {
    v10 = &rotTransArray->trans.v[2];
    v11 = (unsigned int)(v7 - v6);
    do
    {
      *((_QWORD *)v10 - 3) = 0i64;
      *((_QWORD *)v10 - 2) = 0i64;
      *(_QWORD *)v10 = 0i64;
      *((_QWORD *)v10 - 1) = 0i64;
      v10 += 8;
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
XAnimFreeCalcBuffer
==============
*/
void XAnimFreeCalcBuffer(XAnimCalcAnimInfo *info, const DObj *obj, XAnimCalcBuffer *calcBuffer)
{
  int rotTransArrayIndex; 
  int v8; 
  int refCount; 

  if ( calcBuffer->refCount <= 0 )
  {
    refCount = calcBuffer->refCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2033, ASSERT_TYPE_ASSERT, "( calcBuffer->refCount ) > ( 0 )", "%s > %s\n\t%i, %i", "calcBuffer->refCount", "0", refCount, 0i64) )
      __debugbreak();
  }
  if ( calcBuffer->refCount-- == 1 )
  {
    rotTransArrayIndex = info->rotTransArrayIndex;
    v8 = rotTransArrayIndex - DObjTotalNumBones(obj);
    if ( v8 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2041, ASSERT_TYPE_ASSERT, "(index >= 0)", (const char *)&queryFormat, "index >= 0") )
      __debugbreak();
    if ( calcBuffer->rotTransArray != &info->rotTransArray[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2042, ASSERT_TYPE_ASSERT, "(calcBuffer->rotTransArray == info->rotTransArray + index)", "%s\n\tcalculation buffers must be freed in reverse order of allocation", "calcBuffer->rotTransArray == info->rotTransArray + index") )
      __debugbreak();
    info->rotTransArrayIndex = v8;
    calcBuffer->rotTransArray = NULL;
    calcBuffer->isEmpty = 0;
  }
}

/*
==============
XAnimGetLocalBindposeTransform
==============
*/
void XAnimGetLocalBindposeTransform(const DObj *obj, const int boneIndex, float4 *outModelQuat, float4 *outModelTranslation)
{
  unsigned int v18; 
  __int64 modelIndex; 
  unsigned int v20; 
  const XModel *v21; 
  int SkelBoneIndex; 
  int v23; 
  int numBones; 
  int v25; 
  int numRootBones; 
  int v29; 
  bool v77; 
  __int64 v91; 
  __int64 v92; 
  __int128 v95; 
  DObjHierarchyIterator iter; 

  __asm
  {
    vmovaps [rsp+958h+var_A8], xmm11
    vmovaps [rsp+958h+var_B8], xmm12
    vmovaps [rsp+958h+var_C8], xmm13
    vmovdqa xmm11, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
  }
  _R15 = outModelQuat;
  _R12 = outModelTranslation;
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vxorps  xmm13, xmm13, xmm13
  }
  v18 = DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
  if ( v18 != 255 )
  {
    __asm
    {
      vmovaps [rsp+958h+var_58], xmm6
      vmovaps [rsp+958h+var_68], xmm7
      vmovaps [rsp+958h+var_78], xmm8
      vmovaps [rsp+958h+var_88], xmm9
      vmovaps [rsp+958h+var_98], xmm10
    }
    do
    {
      modelIndex = iter.modelIndex;
      v20 = (unsigned int)iter.boneIndex >> 15;
      v21 = iter.obj->models[iter.modelIndex];
      SkelBoneIndex = DObjGetSkelBoneIndex(iter.obj, iter.boneIndex);
      if ( (v20 & 1) != 0 )
      {
        v23 = iter.startIndexClient[modelIndex];
        numBones = v21->numBones;
      }
      else
      {
        v23 = iter.startIndex[modelIndex];
        numBones = 0;
      }
      v25 = SkelBoneIndex + numBones - v23;
      if ( v25 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2506, ASSERT_TYPE_ASSERT, "(localBoneIndex >= 0)", (const char *)&queryFormat, "localBoneIndex >= 0") )
        __debugbreak();
      numRootBones = v21->numRootBones;
      if ( v25 >= numRootBones )
      {
        v29 = v25 - numRootBones;
        _RCX = 4 * v29;
        _RAX = v21->quats;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rax+rcx*2]
          vpmovsxwd xmm1, xmm0
        }
        _RCX = 3 * v29;
        _RAX = v21->trans;
        __asm
        {
          vcvtdq2ps xmm3, xmm1
          vmulps  xmm4, xmm3, cs:__xmm@38000100380001003800010038000100
          vmovss  xmm0, dword ptr [rax+rcx*4]
          vmovss  xmm1, dword ptr [rax+rcx*4+4]
          vmovss  xmm2, dword ptr [rax+rcx*4+8]
        }
        HIDWORD(v95) = 0;
        __asm
        {
          vmovups xmm10, xmmword ptr [rsp+50h]
          vmovss  xmm10, xmm10, xmm0
          vinsertps xmm10, xmm10, xmm1, 10h
          vinsertps xmm10, xmm10, xmm2, 20h ; ' '
          vmovups xmmword ptr [rsp+50h], xmm10
        }
      }
      else
      {
        __asm
        {
          vmovdqa xmm4, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit
          vmovups xmm10, xmm12
        }
      }
      __asm
      {
        vshufps xmm7, xmm4, xmm4, 0C9h ; 'É'
        vshufps xmm9, xmm4, xmm4, 0D2h ; 'Ò'
        vshufps xmm8, xmm4, xmm4, 0FFh
        vshufps xmm0, xmm11, xmm11, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vmulps  xmm0, xmm4, xmm11
        vshufps xmm1, xmm11, xmm11, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm5, xmm3, xmm2
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm3, xmm2, xmm2
        vshufps xmm6, xmm11, xmm11, 0FFh
        vmulps  xmm1, xmm8, xmm11
        vmulps  xmm4, xmm4, xmm6
        vaddps  xmm1, xmm4, xmm1
        vmulps  xmm0, xmm6, xmm8
        vsubps  xmm2, xmm0, xmm3
        vaddps  xmm0, xmm5, xmm1
        vblendps xmm11, xmm2, xmm0, 7
        vshufps xmm0, xmm13, xmm13, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm13, xmm13, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm9
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm4, xmm0, xmm0
        vmulps  xmm0, xmm8, xmm4
        vaddps  xmm5, xmm0, xmm13
        vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm9
        vsubps  xmm1, xmm3, xmm2
        vaddps  xmm3, xmm1, xmm5
        vaddps  xmm13, xmm3, xmm10
      }
      if ( (v18 & 0x8000) != 0 )
      {
        v77 = (obj->skel.partBits.skel.array[7] & 2) != 0;
      }
      else
      {
        if ( v18 >= 0x100 )
        {
          LODWORD(v92) = 256;
          LODWORD(v91) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v91, v92) )
            __debugbreak();
        }
        v77 = ((0x80000000 >> (v18 & 0x1F)) & obj->skel.partBits.skel.array[(unsigned __int64)v18 >> 5]) != 0;
      }
      if ( v77 )
        break;
      v18 = DObjHierarchyIterator_NextParent(&iter);
    }
    while ( v18 != 255 );
    _R15 = outModelQuat;
    _R12 = outModelTranslation;
    __asm
    {
      vmovaps xmm10, [rsp+958h+var_98]
      vmovaps xmm9, [rsp+958h+var_88]
      vmovaps xmm8, [rsp+958h+var_78]
      vmovaps xmm7, [rsp+958h+var_68]
      vmovaps xmm6, [rsp+958h+var_58]
    }
  }
  __asm
  {
    vmulps  xmm0, xmm11, xmm11
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
    vsqrtps xmm1, xmm0
    vdivps  xmm2, xmm11, xmm1
    vmovups xmmword ptr [r15], xmm2
    vmovups xmmword ptr [r12], xmm13
    vmovaps xmm11, [rsp+958h+var_A8]
    vmovaps xmm12, [rsp+958h+var_B8]
    vmovaps xmm13, [rsp+958h+var_C8]
  }
}

/*
==============
XAnimGetLocalBoneTransform
==============
*/
void XAnimGetLocalBoneTransform(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, float4 *outModelQuat, float4 *outModelTranslation)
{
  bool v12; 
  XAnimWorldTransformCache *worldTransformCache; 
  unsigned __int16 v19; 
  bool HasBoneTransform; 
  unsigned __int16 v21; 
  int v22; 
  int v23; 
  DObjPartBits *p_ignorePartBits; 
  unsigned __int16 v25; 
  bool v26; 
  int v29; 
  unsigned __int16 *v30; 
  unsigned int v31; 
  bool v33; 
  XAnimWorldTransformCache *transformCache; 
  float4 *outRotation; 
  float4 v87; 
  float4 v88; 
  float4 *v89; 
  float4 *v90; 
  float4 v91; 
  float4 v92; 
  XAnimBoneChain chain; 

  v12 = !buffer->isEmpty;
  _R15 = outModelQuat;
  worldTransformCache = animCalcInfo->worldTransformCache;
  v89 = outModelQuat;
  v90 = outModelTranslation;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2996, ASSERT_TYPE_ASSERT, "(!buffer->isEmpty)", (const char *)&queryFormat, "!buffer->isEmpty") )
    __debugbreak();
  v19 = truncate_cast<unsigned short,int>(boneIndex);
  HasBoneTransform = XAnimWorldTransformCache_HasBoneTransform(worldTransformCache, v19);
  v21 = truncate_cast<unsigned short,int>(boneIndex);
  if ( HasBoneTransform )
  {
    XAnimWorldTransformCache_GetBoneTransform(worldTransformCache, v21, outModelQuat, outModelTranslation);
  }
  else
  {
    __asm
    {
      vmovaps [rsp+1258h+var_88], xmm9
      vmovaps [rsp+1258h+var_A8], xmm11
    }
    v22 = XAnimBoneChain_CreateForWorldTransformCalc(&chain, obj, v21, worldTransformCache);
    if ( v22 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3008, ASSERT_TYPE_ASSERT, "(numChainBones > 0)", (const char *)&queryFormat, "numChainBones > 0") )
      __debugbreak();
    v23 = v22 - 1;
    p_ignorePartBits = &animCalcInfo->ignorePartBits;
    XAnimBoneChain_GetTransform(&chain, obj, &animCalcInfo->ignorePartBits, buffer, v23, worldTransformCache, &v88, &v87);
    v25 = chain.boneIndices[v23];
    v26 = XAnimWorldTransformCache_HasBoneTransform(worldTransformCache, v25);
    __asm
    {
      vmovups xmm11, xmmword ptr [rsp+1258h+var_1218.v]
      vmovups xmm9, xmmword ptr [rsp+1258h+var_1208.v]
    }
    if ( !v26 )
    {
      __asm
      {
        vmovdqa xmmword ptr [rsp+1258h+var_1208.v], xmm11
        vmovdqa xmmword ptr [rsp+1258h+var_1218.v], xmm9
      }
      XAnimWorldTransformCache_SetBoneTransform(worldTransformCache, v25, &v87, &v88);
    }
    v29 = v23 - 1;
    if ( v29 >= 0 )
    {
      __asm
      {
        vmovaps [rsp+1258h+var_58], xmm6
        vmovaps [rsp+1258h+var_68], xmm7
        vmovaps [rsp+1258h+var_78], xmm8
        vmovaps [rsp+1258h+var_98], xmm10
      }
      v30 = &chain.boneIndices[v29];
      do
      {
        v31 = *v30;
        __asm { vmovdqa xmm10, xmm9 }
        XAnimBoneChain_GetTransform(&chain, obj, p_ignorePartBits, buffer, v29, worldTransformCache, &v87, &v88);
        if ( (unsigned __int8)(v31 >> 15) )
        {
          v33 = (obj->skel.partBits.worldCtrl.array[7] & 2) != 0;
        }
        else
        {
          if ( v31 >= 0x100 )
          {
            LODWORD(outRotation) = 256;
            LODWORD(transformCache) = v31;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", transformCache, outRotation) )
              __debugbreak();
          }
          v33 = ((0x80000000 >> (v31 & 0x1F)) & obj->skel.partBits.worldCtrl.array[(unsigned __int64)v31 >> 5]) != 0;
        }
        if ( v33 )
        {
          __asm { vmovdqa xmm9, xmmword ptr [rsp+1258h+var_1218.v] }
        }
        else
        {
          __asm
          {
            vmovups xmm7, xmmword ptr [rsp+1258h+var_1218.v]
            vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
            vshufps xmm0, xmm10, xmm10, 0D2h ; 'Ò'
            vmulps  xmm3, xmm1, xmm0
            vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
            vshufps xmm2, xmm7, xmm7, 0D2h ; 'Ò'
            vmulps  xmm0, xmm2, xmm1
            vsubps  xmm5, xmm0, xmm3
            vmulps  xmm1, xmm7, xmm10
            vinsertps xmm0, xmm1, xmm1, 8
            vhaddps xmm2, xmm0, xmm0
            vshufps xmm8, xmm7, xmm7, 0FFh
            vshufps xmm6, xmm10, xmm10, 0FFh
            vmulps  xmm0, xmm8, xmm6
            vmulps  xmm4, xmm8, xmm10
            vmulps  xmm1, xmm7, xmm6
            vhaddps xmm3, xmm2, xmm2
            vsubps  xmm2, xmm0, xmm3
            vaddps  xmm1, xmm4, xmm1
            vaddps  xmm0, xmm5, xmm1
            vblendps xmm9, xmm2, xmm0, 7
          }
        }
        __asm
        {
          vmovups xmm5, xmmword ptr [rsp+1258h+var_1208.v]
          vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
          vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
          vshufps xmm8, xmm10, xmm10, 0D2h ; 'Ò'
          vmulps  xmm2, xmm1, xmm8
          vshufps xmm7, xmm10, xmm10, 0C9h ; 'É'
          vmulps  xmm3, xmm0, xmm7
          vsubps  xmm0, xmm3, xmm2
          vaddps  xmm4, xmm0, xmm0
          vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
          vmulps  xmm3, xmm1, xmm7
          vshufps xmm6, xmm10, xmm10, 0FFh
          vmulps  xmm0, xmm6, xmm4
          vaddps  xmm5, xmm0, xmm5
          vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
          vmulps  xmm2, xmm0, xmm8
          vsubps  xmm1, xmm3, xmm2
          vaddps  xmm3, xmm1, xmm5
          vaddps  xmm11, xmm3, xmm11
          vmovdqa [rsp+1258h+var_11E8], xmm11
          vmovdqa [rsp+1258h+var_11D8], xmm9
        }
        XAnimWorldTransformCache_SetBoneTransform(worldTransformCache, v31, &v92, &v91);
        --v30;
        --v29;
      }
      while ( v29 >= 0 );
      _R15 = v89;
      __asm
      {
        vmovaps xmm10, [rsp+1258h+var_98]
        vmovaps xmm8, [rsp+1258h+var_78]
        vmovaps xmm7, [rsp+1258h+var_68]
        vmovaps xmm6, [rsp+1258h+var_58]
      }
    }
    _RAX = v90;
    __asm
    {
      vmulps  xmm0, xmm9, xmm9
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vsqrtps xmm1, xmm0
      vdivps  xmm2, xmm9, xmm1
      vinsertps xmm1, xmm11, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0'
      vmovaps xmm11, [rsp+1258h+var_A8]
      vmovaps xmm9, [rsp+1258h+var_88]
      vmovups xmmword ptr [rax], xmm1
      vmovups xmmword ptr [r15], xmm2
    }
  }
}

/*
==============
XAnimGetNamesOfAnimsAffectingBonesInternal
==============
*/
void XAnimGetNamesOfAnimsAffectingBonesInternal(const DObj *dobj, const XAnimInfo *info, const DObjPartBits *boneFlags, bool *isFirstAnim, char *outBuffer, const int bufferSize, int *outBufferPos)
{
  unsigned __int16 i; 
  const XAnimInfo *v12; 
  int v13; 
  unsigned __int8 *v14; 
  unsigned int v15; 
  __int64 v17; 
  int *v18; 
  DObj *dobja; 
  bool *isFirstAnima; 

  isFirstAnima = isFirstAnim;
  dobja = (DObj *)dobj;
  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  if ( info->animToModel )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcomiss xmm0, dword ptr [rdx+3Ch]
    }
  }
  else
  {
    for ( i = info->children; i; dobj = dobja )
    {
      if ( (i & 0x8000u) != 0 )
      {
        v13 = i & 0x7FFF;
        if ( 32 * v13 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v18) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v17) = 32 * (i & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v17, v18) )
            __debugbreak();
          dobj = dobja;
          isFirstAnim = isFirstAnima;
        }
        v12 = (const XAnimInfo *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[32 * v13];
      }
      else
      {
        if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v18) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v17) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
          dobj = dobja;
          isFirstAnim = isFirstAnima;
        }
        v12 = &g_xanimMemoryGlobals.infoPool[i];
        v13 = i & 0x7FFF;
      }
      XAnimGetNamesOfAnimsAffectingBonesInternal(dobj, v12, boneFlags, isFirstAnim, outBuffer, bufferSize, outBufferPos);
      if ( (i & 0x8000u) != 0 )
      {
        v15 = 32 * v13;
        if ( v15 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v18) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v17) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v17, v18) )
            __debugbreak();
        }
        v14 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v15];
      }
      else
      {
        if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v18) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v17) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v14 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
      }
      i = *((_WORD *)v14 + 5);
      isFirstAnim = isFirstAnima;
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
XAnimGetNormalizedRotation
==============
*/
float4 *XAnimGetNormalizedRotation(float4 *result, const DObjAnimMat *srcMat, const float4 *a3)
{
  float4 *v7; 
  __int64 v28; 

  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps [rsp+48h+var_28], xmm7
    vmovaps [rsp+48h+var_38], xmm8
  }
  v7 = (float4 *)((unsigned __int64)&v28 ^ _security_cookie);
  __asm
  {
    vmovups xmm6, xmmword ptr [rcx]
    vmovups xmm8, xmm0
    vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vmulps  xmm1, xmm6, xmm6
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm5, xmm2, xmm2
    vrsqrtps xmm4, xmm5
    vmulps  xmm1, xmm4, xmm4
    vmulps  xmm2, xmm1, xmm5
    vmulps  xmm1, xmm4, xmmword ptr cs:?g_oneHalf@@3Ufloat4@@B.v; float4 const g_oneHalf
    vsubps  xmm3, xmm0, xmm2
    vmulps  xmm2, xmm3, xmm1
    vaddps  xmm4, xmm2, xmm4
    vxorps  xmm7, xmm7, xmm7
    vmulps  xmm1, xmm6, xmm4
    vcmpltps xmm0, xmm7, xmm5
    vblendvps xmm0, xmm8, xmm1, xmm0
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
    vmovaps xmm8, [rsp+48h+var_38]
  }
  return v7;
}

/*
==============
XAnimGetParentRelativeBoneTransform
==============
*/
void XAnimGetParentRelativeBoneTransform(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, float4 *outQuat, float4 *outTranslation)
{
  bool v20; 
  int v22; 
  float4 outModelQuat; 
  float4 outTrans; 
  DObjHierarchyIterator iter; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-98h], xmm11 }
  _RBP = outTranslation;
  _R14 = outQuat;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-0A8h], xmm12
  }
  DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
  v20 = XAnimTestPartBit(&obj->skel.partBits.skel, boneIndex);
  _RDI = &obj->skel.mat[DObjGetSkelBoneIndex(obj, boneIndex)];
  if ( v20 )
  {
    v22 = DObjHierarchyIterator_NextParent(&iter);
    __asm
    {
      vmovups xmm2, xmmword ptr [rdi]
      vmulps  xmm0, xmm2, xmm2
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    outTrans.v.m128_i32[3] = 0;
    __asm
    {
      vmovups xmm11, xmmword ptr [rsp+40h]
      vsqrtps xmm1, xmm0
      vmovss  xmm0, dword ptr [rdi+10h]
      vmovss  xmm11, xmm11, xmm0
      vinsertps xmm11, xmm11, dword ptr [rdi+14h], 10h
      vinsertps xmm11, xmm11, dword ptr [rdi+18h], 20h ; ' '
      vmovups xmmword ptr [rsp+40h], xmm11
      vdivps  xmm12, xmm2, xmm1
    }
    if ( v22 != 255 )
    {
      __asm
      {
        vmovaps [rsp+928h+var_78], xmm9
        vmovaps [rsp+928h+var_88], xmm10
      }
      XAnimGetLocalBoneTransform(animCalcInfo, obj, buffer, v22, &outModelQuat, &outTrans);
      __asm
      {
        vsubps  xmm5, xmm11, xmmword ptr [rsp+928h+outTrans.v]
        vmovups xmm0, xmmword ptr [rsp+928h+var_8F8.v]
        vmulps  xmm9, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
        vshufps xmm10, xmm9, xmm9, 0FFh
        vshufps xmm8, xmm9, xmm9, 0D2h ; 'Ò'
        vshufps xmm7, xmm9, xmm9, 0C9h ; 'É'
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm8
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm4, xmm0, xmm0
        vmulps  xmm0, xmm10, xmm4
        vaddps  xmm5, xmm0, xmm5
        vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm8
        vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vaddps  xmm11, xmm1, xmm5
        vshufps xmm0, xmm12, xmm12, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vmulps  xmm0, xmm12, xmm9
        vshufps xmm1, xmm12, xmm12, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm8
        vinsertps xmm1, xmm0, xmm0, 8
        vsubps  xmm5, xmm3, xmm2
        vhaddps xmm2, xmm1, xmm1
        vshufps xmm6, xmm12, xmm12, 0FFh
        vmulps  xmm1, xmm12, xmm10
        vmulps  xmm0, xmm6, xmm10
        vmovaps xmm10, [rsp+928h+var_88]
        vmulps  xmm4, xmm9, xmm6
        vmovaps xmm9, [rsp+928h+var_78]
        vhaddps xmm3, xmm2, xmm2
        vsubps  xmm2, xmm0, xmm3
        vaddps  xmm1, xmm4, xmm1
        vaddps  xmm0, xmm5, xmm1
        vblendps xmm12, xmm2, xmm0, 7
      }
    }
  }
  else
  {
    DObjHierarchyIterator_GetBasePoseRotTrans(&iter, &outModelQuat, &outTrans);
    __asm
    {
      vmovups xmm3, xmmword ptr [rdi+10h]
      vmovups xmm6, xmmword ptr [rdi]
      vshufps xmm2, xmm3, xmm3, 0FFh
      vrcpps  xmm0, xmm2
      vmulps  xmm1, xmm0, xmm3
      vxorps  xmm7, xmm7, xmm7
    }
    _R8 = iter.obj->models[iter.modelIndex];
    __asm
    {
      vcmpltps xmm0, xmm7, xmm2
      vblendvps xmm8, xmm3, xmm1, xmm0
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
      vmulps  xmm2, xmm6, xmm1
      vmovups xmm1, xmmword ptr [rsp+928h+var_8F8.v]
      vcmpltps xmm0, xmm7, xmm5
      vblendvps xmm12, xmm1, xmm2, xmm0
    }
    if ( (iter.boneIndex & 0x8000) != 0 || ((0x80000000 >> (iter.boneIndex & 0x1F)) & _R8->noScalePartBits[(__int64)iter.boneIndex >> 5]) == 0 )
      __asm { vmovss  xmm1, dword ptr [r8+24h] }
    else
      __asm { vmovss  xmm1, cs:__real@3f800000 }
    __asm
    {
      vaddps  xmm2, xmm8, xmmword ptr [rsp+928h+outTrans.v]
      vshufps xmm1, xmm1, xmm1, 0
      vmulps  xmm11, xmm2, xmm1
    }
  }
  __asm
  {
    vmovaps xmm8, [rsp+928h+var_68]
    vmovaps xmm7, [rsp+928h+var_58]
    vmovaps xmm6, [rsp+928h+var_48]
  }
  if ( outQuat )
    __asm { vmovups xmmword ptr [r14], xmm12 }
  __asm { vmovaps xmm12, [rsp+928h+var_A8] }
  if ( outTranslation )
    __asm { vmovups xmmword ptr [rbp+0], xmm11 }
  __asm { vmovaps xmm11, [rsp+928h+var_98] }
}

/*
==============
XAnimGetParentRelativeBoneTranslationRelativeToBasePose
==============
*/
void XAnimGetParentRelativeBoneTranslationRelativeToBasePose(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, float4 *outTranslation)
{
  unsigned __int64 v13; 
  bool v16; 
  bool v18; 
  int SkelBoneIndex; 
  int v23; 
  bool v52; 
  unsigned int v53; 
  float4 *outModelTranslation; 
  float4 v74; 
  float4 outModelQuat; 
  float4 result; 
  __int128 v77; 
  DObjHierarchyIterator iter; 

  _R14 = outTranslation;
  v13 = (unsigned int)boneIndex;
  v16 = XAnimTestPartBit(&obj->skel.partBits.skel, boneIndex);
  if ( XAnimTestPartBit(&animCalcInfo->animPartBits, v13) )
  {
    if ( buffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2737, ASSERT_TYPE_ASSERT, "(!buffer->isEmpty)", (const char *)&queryFormat, "!buffer->isEmpty") )
      __debugbreak();
    DObjHierarchyIterator_Begin(&iter, obj, v13);
    if ( (v13 & 0x8000) != 0 )
    {
      v18 = (animCalcInfo->animPartBits.array[7] & 2) != 0;
    }
    else
    {
      if ( (unsigned int)v13 >= 0x100 )
      {
        LODWORD(outModelTranslation) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outModelTranslation, 256) )
          __debugbreak();
      }
      v18 = ((0x80000000 >> (v13 & 0x1F)) & animCalcInfo->animPartBits.array[v13 >> 5]) != 0;
    }
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2741, ASSERT_TYPE_ASSERT, "(XAnimTestPartBit( &animCalcInfo->animPartBits, boneIndex ))", (const char *)&queryFormat, "XAnimTestPartBit( &animCalcInfo->animPartBits, boneIndex )") )
      __debugbreak();
    SkelBoneIndex = DObjGetSkelBoneIndex(obj, v13);
    _RDI = obj->skel.mat;
    _RBX = 32i64 * SkelBoneIndex;
    if ( v16 )
    {
      __asm
      {
        vmovaps [rsp+948h+var_58], xmm6
        vmovaps [rsp+948h+var_68], xmm7
        vmovaps [rsp+948h+var_78], xmm8
        vmovaps [rsp+948h+var_88], xmm9
        vmovaps [rsp+948h+var_98], xmm10
      }
      v23 = DObjHierarchyIterator_NextParent(&iter);
      __asm { vmovss  xmm0, dword ptr [rbx+rdi+10h] }
      HIDWORD(v77) = 0;
      __asm
      {
        vmovups xmm6, xmmword ptr [rsp+70h]
        vmovss  xmm6, xmm6, xmm0
        vinsertps xmm6, xmm6, dword ptr [rbx+rdi+14h], 10h
        vinsertps xmm6, xmm6, dword ptr [rbx+rdi+18h], 20h ; ' '
        vmovups xmmword ptr [rsp+70h], xmm6
      }
      if ( v23 != 255 )
      {
        XAnimGetLocalBoneTransform(animCalcInfo, obj, buffer, v23, &outModelQuat, &v74);
        __asm
        {
          vsubps  xmm8, xmm6, xmmword ptr [rsp+948h+var_908.v]
          vmovups xmm0, xmmword ptr [rsp+948h+outModelQuat.v]
          vmulps  xmm1, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
          vshufps xmm6, xmm1, xmm1, 0C9h ; 'É'
          vshufps xmm5, xmm1, xmm1, 0FFh
          vshufps xmm7, xmm1, xmm1, 0D2h ; 'Ò'
          vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
          vmulps  xmm2, xmm1, xmm7
          vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò'
          vmulps  xmm3, xmm0, xmm6
          vsubps  xmm0, xmm3, xmm2
          vaddps  xmm4, xmm0, xmm0
          vmulps  xmm0, xmm5, xmm4
          vaddps  xmm5, xmm0, xmm8
          vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
          vmulps  xmm3, xmm1, xmm6
          vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
          vmulps  xmm2, xmm0, xmm7
          vsubps  xmm1, xmm3, xmm2
          vaddps  xmm6, xmm1, xmm5
        }
      }
      _RAX = DObjHierarchyIterator_GetBasePoseTrans(&result, &iter);
      __asm
      {
        vmovss  xmm9, cs:__real@3f800000
        vmovups xmm10, xmmword ptr [rax]
      }
      _R8 = iter.obj->models[iter.modelIndex];
      v52 = (iter.boneIndex & 0x8000) == 0;
      if ( (iter.boneIndex & 0x8000) != 0 || (v53 = 0x80000000 >> (iter.boneIndex & 0x1F), v52 = (v53 & _R8->noScalePartBits[(__int64)iter.boneIndex >> 5]) == 0) )
      {
        __asm
        {
          vmovss  xmm8, dword ptr [r8+24h]
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm8, xmm0
          vmovaps xmm7, xmm8
        }
        if ( v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2778, ASSERT_TYPE_ASSERT, "(boneScale != 0.0f)", (const char *)&queryFormat, "boneScale != 0.0f") )
          __debugbreak();
      }
      else
      {
        __asm { vmovaps xmm7, xmm9 }
      }
      __asm
      {
        vmovaps xmm8, [rsp+948h+var_78]
        vdivss  xmm0, xmm9, xmm7
        vmovaps xmm9, [rsp+948h+var_88]
        vmovaps xmm7, [rsp+948h+var_68]
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm0, xmm0, xmm6
        vmovaps xmm6, [rsp+948h+var_58]
        vsubps  xmm1, xmm0, xmm10
        vmovaps xmm10, [rsp+948h+var_98]
      }
    }
    else
    {
      __asm
      {
        vmovups xmm3, xmmword ptr [rbx+rdi+10h]
        vshufps xmm2, xmm3, xmm3, 0FFh
        vrcpps  xmm0, xmm2
        vmulps  xmm1, xmm0, xmm3
        vxorps  xmm4, xmm4, xmm4
        vcmpltps xmm0, xmm4, xmm2
        vblendvps xmm1, xmm3, xmm1, xmm0
      }
    }
    if ( outTranslation )
      __asm { vmovups xmmword ptr [r14], xmm1 }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [r14], xmm0
    }
  }
}

/*
==============
XAnimNormalizeRotTrans
==============
*/

void __fastcall XAnimNormalizeRotTrans(DObjAnimMat *rotTrans, double weightScale)
{
  char v22; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  xmm3, dword ptr [rcx+4]
    vmovss  xmm4, dword ptr [rcx+8]
    vmovss  xmm5, dword ptr [rcx+0Ch]
    vmulss  xmm2, xmm0, xmm0
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm0
    vmovaps [rsp+48h+var_18], xmm6
  }
  _RBX = rotTrans;
  __asm
  {
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm0, xmm5, xmm5
    vmovaps [rsp+48h+var_28], xmm7
    vaddss  xmm0, xmm4, xmm0; val
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm0, xmm7
    vmovaps xmm6, xmm1
  }
  *(double *)&_XMM0 = I_rsqrt(*(float *)&_XMM0);
  __asm
  {
    vmulss  xmm2, xmm0, xmm6
    vshufps xmm2, xmm2, xmm2, 0
    vmulps  xmm1, xmm2, xmmword ptr [rbx]
    vmovups xmmword ptr [rbx], xmm1
    vmovss  xmm0, dword ptr [rbx+1Ch]
    vucomiss xmm0, xmm7
  }
  if ( !v22 )
  {
    __asm
    {
      vdivss  xmm2, xmm6, xmm0
      vmulss  xmm0, xmm2, dword ptr [rbx+10h]
      vmovss  dword ptr [rbx+10h], xmm0
      vmulss  xmm1, xmm2, dword ptr [rbx+14h]
      vmovss  dword ptr [rbx+14h], xmm1
      vmulss  xmm0, xmm2, dword ptr [rbx+18h]
      vmovss  dword ptr [rbx+18h], xmm0
      vmovss  dword ptr [rbx+1Ch], xmm6
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+48h+var_18]
    vmovaps xmm7, [rsp+48h+var_28]
  }
}

/*
==============
XAnimScaleRotTransArray
==============
*/
void XAnimScaleRotTransArray(int numBones, int numClientBones, const XAnimCalcAnimInfo *info, DObjAnimMat *rotTransArray)
{
  unsigned int v9; 
  __int64 v12; 
  unsigned __int64 v15; 
  unsigned int v16; 
  bool v24; 
  __int64 v26; 
  __int64 v36; 
  __int64 v37; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  _RSI = rotTransArray;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovss  xmm7, cs:__real@3f800000
  }
  v9 = 0;
  v12 = (unsigned int)numClientBones;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( numBones > 0 )
  {
    _RDI = &rotTransArray->trans.v[2];
    do
    {
      if ( v9 >= 0x100 )
      {
        LODWORD(v37) = 256;
        LODWORD(v36) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v36, v37) )
          __debugbreak();
      }
      v15 = (unsigned __int64)v9 >> 5;
      v16 = 0x80000000 >> (v9 & 0x1F);
      if ( (v16 & info->ignorePartBits.array[v15]) == 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+4]
          vucomiss xmm0, xmm6
        }
        if ( (v16 & info->ignorePartBits.array[v15]) != 0 )
        {
          __asm
          {
            vdivss  xmm2, xmm7, xmm0
            vshufps xmm2, xmm2, xmm2, 0
            vmulss  xmm0, xmm2, dword ptr [rsi]
            vmovss  dword ptr [rsi], xmm0
            vmulps  xmm1, xmm2, xmmword ptr [rdi-14h]
            vmovups xmmword ptr [rdi-14h], xmm1
            vmulss  xmm0, xmm2, dword ptr [rdi-4]
            vmovss  dword ptr [rdi-4], xmm0
            vmulss  xmm1, xmm2, dword ptr [rdi]
            vmovss  dword ptr [rdi], xmm1
          }
          _RDI[1] = 1.0;
        }
      }
      ++v9;
      ++_RSI;
      _RDI += 8;
    }
    while ( (int)v9 < numBones );
  }
  if ( (info->ignorePartBits.array[7] & 2) == 0 )
  {
    v24 = (_DWORD)v12 == 0;
    if ( (int)v12 > 0 )
    {
      _RAX = &_RSI->trans.v[2];
      v26 = v12;
      do
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+4]
          vucomiss xmm0, xmm6
        }
        if ( !v24 )
        {
          __asm
          {
            vdivss  xmm2, xmm7, xmm0
            vshufps xmm2, xmm2, xmm2, 0
            vmulps  xmm0, xmm2, xmmword ptr [rax-18h]
            vmovups xmmword ptr [rax-18h], xmm0
            vmulss  xmm1, xmm2, dword ptr [rax-8]
            vmovss  dword ptr [rax-8], xmm1
            vmulss  xmm0, xmm2, dword ptr [rax-4]
            vmovss  dword ptr [rax-4], xmm0
            vmulss  xmm1, xmm2, dword ptr [rax]
            vmovss  dword ptr [rax], xmm1
          }
          _RAX[1] = 1.0;
        }
        _RAX += 8;
        v24 = --v26 == 0;
      }
      while ( v26 );
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+78h+var_28]
    vmovaps xmm7, [rsp+78h+var_38]
  }
}

/*
==============
XAnimSetLocalBoneTransform
==============
*/
void XAnimSetLocalBoneTransform(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const float4 *weightScale, const float4 *hierarchyIter, float targetBasePoseQuat)
{
  int v28; 
  unsigned int v36; 
  bool v37; 
  __int64 SkelBoneIndex; 
  float4 *outModelQuat; 
  float4 *outModelTranslation; 
  int v128; 
  float v129; 
  float4 result; 
  float4 outQuat; 
  float4 outTrans; 
  DObjHierarchyIterator iter; 

  __asm
  {
    vmovaps [rsp+968h+var_38], xmm6
    vmovaps [rsp+968h+var_B8], xmm14
    vmovups xmm6, xmm1
    vmovups xmm14, xmm0
  }
  if ( !XAnimTestPartBit(&animCalcInfo->ignorePartBits, boneIndex) )
  {
    __asm
    {
      vmovaps [rsp+968h+var_88], xmm11
      vmovaps [rsp+968h+var_98], xmm12
      vmovaps [rsp+968h+var_A8], xmm13
      vmovaps [rsp+968h+var_C8], xmm15
      vmovss  xmm12, [rsp+968h+arg_30]
      vmovss  xmm11, cs:__real@3f800000
      vcomiss xmm12, xmm11
    }
    v28 = DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
    if ( v37 )
    {
      DObjHierarchyIterator_GetBasePoseRotTrans(&iter, &outQuat, &outTrans);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+968h+outQuat.v]
        vmovups xmm15, xmmword ptr [rsp+968h+outTrans.v]
      }
    }
    else
    {
      _RAX = DObjHierarchyIterator_GetBasePoseTrans(&result, &iter);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovups xmm15, xmmword ptr [rax]
      }
    }
    __asm { vmovups xmmword ptr [rsp+968h+outTrans.v], xmm0 }
    _R8 = iter.obj->models[iter.modelIndex];
    if ( (iter.boneIndex & 0x8000) != 0 || ((0x80000000 >> (iter.boneIndex & 0x1F)) & _R8->noScalePartBits[(__int64)iter.boneIndex >> 5]) == 0 )
      __asm { vmovss  xmm13, dword ptr [r8+24h] }
    else
      __asm { vmovaps xmm13, xmm11 }
    v36 = DObjHierarchyIterator_NextParent(&iter);
    v37 = v36 < 0xFF;
    if ( v36 != 255 )
    {
      __asm
      {
        vmovaps [rsp+968h+var_48], xmm7
        vmovaps [rsp+968h+var_58], xmm8
        vmovaps [rsp+968h+var_68], xmm9
        vmovaps [rsp+968h+var_78], xmm10
      }
      XAnimGetLocalBoneTransform(animCalcInfo, obj, buffer, v36, &result, &outQuat);
      __asm
      {
        vsubps  xmm5, xmm6, xmmword ptr [rsp+968h+outQuat.v]
        vmovups xmm0, xmmword ptr [rsp+968h+result.v]
        vmulps  xmm9, xmm0, cs:__xmm@3f800000bf800000bf800000bf800000
        vshufps xmm8, xmm9, xmm9, 0D2h ; 'Ò'
        vshufps xmm7, xmm9, xmm9, 0C9h ; 'É'
        vshufps xmm10, xmm9, xmm9, 0FFh
        vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm8
        vsubps  xmm0, xmm3, xmm2
        vaddps  xmm4, xmm0, xmm0
        vmulps  xmm0, xmm10, xmm4
        vaddps  xmm5, xmm0, xmm5
        vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
        vmulps  xmm2, xmm0, xmm8
        vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
        vmulps  xmm3, xmm1, xmm7
        vsubps  xmm1, xmm3, xmm2
        vaddps  xmm4, xmm1, xmm5
        vshufps xmm6, xmm14, xmm14, 0FFh
        vshufps xmm0, xmm14, xmm14, 0D2h ; 'Ò'
        vmulps  xmm3, xmm0, xmm7
        vmovaps xmm7, [rsp+968h+var_48]
        vmulps  xmm0, xmm9, xmm14
        vshufps xmm1, xmm14, xmm14, 0C9h ; 'É'
        vmulps  xmm2, xmm1, xmm8
        vmovaps xmm8, [rsp+968h+var_58]
        vinsertps xmm1, xmm0, xmm0, 8
        vsubps  xmm5, xmm3, xmm2
        vhaddps xmm2, xmm1, xmm1
        vmulps  xmm0, xmm6, xmm10
        vmulps  xmm1, xmm10, xmm14
        vmovaps xmm10, [rsp+968h+var_78]
        vmovups xmmword ptr [rsp+968h+result.v], xmm4
        vmulps  xmm4, xmm9, xmm6
        vmovups xmm6, xmmword ptr [rsp+968h+result.v]
        vmovaps xmm9, [rsp+968h+var_68]
        vhaddps xmm3, xmm2, xmm2
        vsubps  xmm2, xmm0, xmm3
        vaddps  xmm1, xmm4, xmm1
        vaddps  xmm0, xmm5, xmm1
        vblendps xmm14, xmm2, xmm0, 7
      }
    }
    __asm
    {
      vdivss  xmm0, xmm11, xmm13
      vmovaps xmm13, [rsp+968h+var_A8]
      vsubps  xmm1, xmm6, xmm15
      vmovaps xmm15, [rsp+968h+var_C8]
      vshufps xmm0, xmm0, xmm0, 0
      vcomiss xmm12, xmm11
      vmovaps xmm11, [rsp+968h+var_88]
      vmulps  xmm6, xmm1, xmm0
    }
    if ( v37 )
    {
      SkelBoneIndex = DObjGetSkelBoneIndex(obj, v28);
      if ( (unsigned int)SkelBoneIndex >= DObjTotalNumBones(obj) )
      {
        v128 = DObjTotalNumBones(obj);
        LODWORD(outModelTranslation) = SkelBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2608, ASSERT_TYPE_ASSERT, "(unsigned)( skelBoneIndex ) < (unsigned)( DObjTotalNumBones( obj ) )", "skelBoneIndex doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", outModelTranslation, v128) )
          __debugbreak();
      }
      _RAX = &buffer->rotTransArray[SkelBoneIndex];
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vmovups xmm2, xmmword ptr [rax]
        vmulps  xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm0, xmm1, xmm1
        vmovups xmm1, xmmword ptr [rsp+968h+outTrans.v]
        vcmpltps xmm0, xmm3, xmm0
        vblendvps xmm5, xmm1, xmm2, xmm0
        vxorps  xmm1, xmm1, xmm1
        vucomiss xmm1, dword ptr [rax+1Ch]
      }
      if ( _RAX )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+10h]
          vmovss  xmm1, dword ptr [rax+14h]
          vmovss  xmm2, dword ptr [rax+18h]
        }
        outTrans.v.m128_i32[3] = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+968h+outTrans.v]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, xmm1, 10h
          vinsertps xmm3, xmm3, xmm2, 20h ; ' '
        }
      }
      __asm
      {
        vsubps  xmm0, xmm6, xmm3
        vmovaps xmm4, xmm12
        vshufps xmm4, xmm4, xmm4, 0
        vmulps  xmm1, xmm0, xmm4
        vaddps  xmm6, xmm1, xmm3
        vmulps  xmm0, xmm5, xmm14
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm0, xmm1, xmm1
        vandps  xmm2, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
        vorps   xmm3, xmm2, cs:__xmm@3f8000003f8000003f8000003f800000
        vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vsubps  xmm1, xmm0, xmm4
        vmulps  xmm0, xmm4, xmm3
        vmulps  xmm0, xmm0, xmm14
        vmulps  xmm2, xmm5, xmm1
        vaddps  xmm3, xmm0, xmm2
        vmulps  xmm2, xmm3, xmm3
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
        vsqrtps xmm2, xmm0
        vdivps  xmm14, xmm3, xmm2
      }
    }
    __asm
    {
      vmovups xmm1, xmm6
      vmovups xmm0, xmm14
      vmovss  [rsp+968h+var_938], xmm12
    }
    XAnimSetRotTrans(animCalcInfo, obj, buffer, v28, outModelQuat, outModelTranslation, v129);
    __asm { vmovaps xmm12, [rsp+968h+var_98] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+968h+var_38]
    vmovaps xmm14, [rsp+968h+var_B8]
  }
}

/*
==============
XAnimSetParentRelativeBoneTransform
==============
*/
void XAnimSetParentRelativeBoneTransform(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const float4 *weightScale, const float4 *hierarchyIter, float targetBasePoseTrans)
{
  int v18; 
  const float4 *v31; 
  const float4 *v32; 
  float v33; 
  float4 result; 
  DObjHierarchyIterator iter; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovups xmm6, xmm1
    vmovups xmm7, xmm0
  }
  if ( !XAnimTestPartBit(&animCalcInfo->ignorePartBits, boneIndex) )
  {
    v18 = DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
    DObjHierarchyIterator_GetBasePoseTrans(&result, &iter);
    __asm { vmovss  xmm2, cs:__real@3f800000 }
    _R9 = iter.obj->models[iter.modelIndex];
    if ( (iter.boneIndex & 0x8000) != 0 || ((0x80000000 >> (iter.boneIndex & 0x1F)) & _R9->noScalePartBits[(__int64)iter.boneIndex >> 5]) == 0 )
      __asm { vmovss  xmm0, dword ptr [r9+24h] }
    else
      __asm { vmovaps xmm0, xmm2 }
    __asm
    {
      vsubps  xmm1, xmm6, xmmword ptr [rsp+8C8h+result.v]
      vdivss  xmm0, xmm2, xmm0
      vshufps xmm0, xmm0, xmm0, 0
      vmulps  xmm1, xmm1, xmm0
      vmovss  xmm0, [rsp+8C8h+arg_30]
      vmovss  [rsp+8C8h+var_898], xmm0
      vmovups xmm0, xmm7
    }
    XAnimSetRotTrans(animCalcInfo, obj, buffer, v18, v31, v32, v33);
  }
  __asm
  {
    vmovaps xmm6, [rsp+8C8h+var_38]
    vmovaps xmm7, [rsp+8C8h+var_48]
  }
}

/*
==============
XAnimSetRotTrans
==============
*/
void XAnimSetRotTrans(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const float4 *weightScale, const float4 *a6, float a7)
{
  unsigned __int64 v11; 
  bool v17; 
  __int64 SkelBoneIndex; 
  unsigned __int16 v25; 
  __int64 v28; 
  __int64 v29; 

  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_58], xmm7
  }
  v11 = (unsigned int)boneIndex;
  __asm
  {
    vmovups xmm6, xmm1
    vmovups xmm7, xmm0
  }
  v17 = (boneIndex & 0x8000) != 0;
  if ( (boneIndex & 0x8000) == 0 )
  {
    if ( (unsigned int)boneIndex >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", boneIndex, 256) )
      __debugbreak();
    if ( ((0x80000000 >> (v11 & 0x1F)) & obj->skel.partBits.skel.array[v11 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2177, ASSERT_TYPE_ASSERT, "(XAnimIsClientBoneIndex( boneIndex ) || !XAnimTestPartBit( &obj->skel.partBits.skel, boneIndex ))", (const char *)&queryFormat, "XAnimIsClientBoneIndex( boneIndex ) || !XAnimTestPartBit( &obj->skel.partBits.skel, boneIndex )") )
      __debugbreak();
  }
  SkelBoneIndex = DObjGetSkelBoneIndex(obj, v11);
  if ( (unsigned int)SkelBoneIndex >= DObjTotalNumBones(obj) )
  {
    LODWORD(v29) = DObjTotalNumBones(obj);
    LODWORD(v28) = SkelBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2180, ASSERT_TYPE_ASSERT, "(unsigned)( skelBoneIndex ) < (unsigned)( DObjTotalNumBones( obj ) )", "skelBoneIndex doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v28, v29) )
      __debugbreak();
  }
  __asm
  {
    vbroadcastss xmm2, [rsp+0B8h+arg_30]
    vmulps  xmm0, xmm2, xmm7
    vmulps  xmm1, xmm2, xmm6
  }
  _RAX = &buffer->rotTransArray[SkelBoneIndex];
  __asm
  {
    vmovups xmmword ptr [rax], xmm0
    vshufps xmm0, xmm1, xmm2, 0FAh ; 'ú'
    vshufps xmm1, xmm1, xmm0, 84h ; '„'
    vmovups xmmword ptr [rax+10h], xmm1
  }
  if ( v17 )
  {
    animCalcInfo->animPartBits.array[7] |= 2u;
  }
  else
  {
    if ( (unsigned int)v11 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, 256) )
      __debugbreak();
    animCalcInfo->animPartBits.array[v11 >> 5] |= 0x80000000 >> (v11 & 0x1F);
  }
  v25 = truncate_cast<unsigned short,int>(v11);
  XAnimWorldTransformCache_InvalidateBoneTransform(animCalcInfo->worldTransformCache, v25);
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
  }
}

/*
==============
XAnimSetRotTransToBasePose
==============
*/
void XAnimSetRotTransToBasePose(DObjAnimMat *rotTransArray, const DObj *dobj, const DObjPartBits *basePoseBoneFlags)
{
  unsigned __int8 numModels; 
  DObjAnimMat *v8; 
  const DObj *v11; 
  unsigned int v12; 
  __int64 v14; 
  const XModel *v15; 
  int numRootBones; 
  __int64 v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v21; 
  int v24; 
  unsigned int v25; 
  __int64 v26; 
  unsigned int v34; 
  __int64 v39; 
  __int64 v47; 
  __int64 v48; 
  char v49; 
  unsigned int ClientBoneOffset; 
  unsigned int numClientBones; 
  __int64 v53; 
  __int64 v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  numModels = dobj->numModels;
  v8 = rotTransArray;
  __asm { vmovdqa xmm8, xmmword ptr cs:?g_unit@@3Ufloat4@@B.v; float4 const g_unit }
  v11 = dobj;
  v12 = 0;
  if ( !DObjHasClientOnlyBones(dobj) || (v49 = 1, (basePoseBoneFlags->array[7] & 2) == 0) )
    v49 = 0;
  ClientBoneOffset = DObjGetClientBoneOffset(v11);
  v54 = numModels;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( numModels )
  {
    v14 = 0i64;
    __asm { vmovaps [rsp+0E8h+var_58], xmm7 }
    v53 = 0i64;
    do
    {
      v15 = v11->models[v14];
      numRootBones = v15->numRootBones;
      v17 = v15->numRootBones;
      v18 = v15->numBones - numRootBones;
      numClientBones = v15->numClientBones;
      if ( v15->numRootBones )
      {
        v19 = v12;
        _RDI = (__int64)&v8[v12].trans.z;
        do
        {
          if ( v19 >= 0x100 )
          {
            LODWORD(v48) = 256;
            LODWORD(v47) = v19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v47, v48) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v19 & 0x1F)) & basePoseBoneFlags->array[(unsigned __int64)v19 >> 5]) != 0 )
          {
            __asm
            {
              vmovups xmmword ptr [rdi-18h], xmm8
              vmovss  dword ptr [rdi-8], xmm6
              vextractps dword ptr [rdi-4], xmm6, 1
              vextractps dword ptr [rdi], xmm6, 2
            }
          }
          ++v19;
          _RDI += 32i64;
          --v17;
        }
        while ( v17 );
      }
      v21 = numRootBones + v12;
      _R14 = v15->quats;
      if ( v18 > 0 )
      {
        _R8 = rotTransArray;
        v24 = 0;
        v25 = v21;
        v26 = (unsigned int)v18;
        _RDI = &rotTransArray[v21].trans.v[2];
        do
        {
          if ( v25 >= 0x100 )
          {
            LODWORD(v48) = 256;
            LODWORD(v47) = v25;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v47, v48) )
              __debugbreak();
            _R8 = rotTransArray;
          }
          if ( ((0x80000000 >> (v25 & 0x1F)) & basePoseBoneFlags->array[(unsigned __int64)v25 >> 5]) != 0 )
          {
            _RAX = v24;
            _RCX = 32i64 * (int)v25;
            __asm
            {
              vlddqu  xmm0, xmmword ptr [r14+rax*2]
              vpmovsxwd xmm1, xmm0
              vcvtdq2ps xmm3, xmm1
              vmulps  xmm0, xmm3, cs:__xmm@38000100380001003800010038000100
              vmovups xmmword ptr [rcx+r8], xmm0
              vmovss  dword ptr [rdi-8], xmm6
              vextractps dword ptr [rdi-4], xmm6, 1
              vextractps dword ptr [rdi], xmm6, 2
            }
          }
          ++v25;
          v24 += 4;
          _RDI += 8;
          --v26;
        }
        while ( v26 );
      }
      v8 = rotTransArray;
      if ( v49 )
      {
        v34 = numClientBones;
        if ( v18 < (int)(numClientBones + v18) )
        {
          __asm { vmovups xmm4, cs:__xmm@38000100380001003800010038000100 }
          _RDX = &rotTransArray[ClientBoneOffset];
          _R8 = &_R14[4 * v18];
          _RCX = &_RDX->trans.v[2];
          v39 = numClientBones;
          do
          {
            _RCX += 8;
            ++_RDX;
            __asm { vlddqu  xmm0, xmmword ptr [r8] }
            _R8 += 4;
            __asm
            {
              vpmovsxwd xmm1, xmm0
              vcvtdq2ps xmm2, xmm1
              vmulps  xmm3, xmm2, xmm4
              vmovups xmmword ptr [rdx-20h], xmm3
              vmovss  dword ptr [rcx-28h], xmm6
              vextractps dword ptr [rcx-24h], xmm6, 1
              vextractps dword ptr [rcx-20h], xmm6, 2
            }
            --v39;
          }
          while ( v39 );
        }
      }
      else
      {
        v34 = numClientBones;
      }
      v12 = v18 + v21;
      ClientBoneOffset += v34;
      v14 = v53 + 1;
      v11 = dobj;
      v53 = v14;
    }
    while ( v14 < v54 );
    __asm { vmovaps xmm7, [rsp+0E8h+var_58] }
  }
  __asm
  {
    vmovaps xmm6, [rsp+0E8h+var_48]
    vmovaps xmm8, [rsp+0E8h+var_68]
  }
}

/*
==============
XAnimWarnAboutAdditivesAffectingNonAnimatedBones
==============
*/
void XAnimWarnAboutAdditivesAffectingNonAnimatedBones(const DObj *dobj, const XAnimInfo *info, const DObjPartBits *boneFlags)
{
  const dvar_t *v3; 
  const DObj *v6; 
  int v7; 
  const DObjPartBits *i; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  const XModel *v12; 
  int numBones; 
  __int64 v14; 
  unsigned int v15; 
  const char *v16; 
  const char *v17; 
  __int64 bufferSize; 
  int *outBufferPos; 
  bool isFirstAnim; 
  int destPos; 
  int v22; 
  const DObj *v23; 
  char dest[512]; 

  v3 = DCONST_DVARBOOL_xanim_nonAnimatedBonesWarning;
  v23 = dobj;
  destPos = 0;
  v6 = dobj;
  if ( !DCONST_DVARBOOL_xanim_nonAnimatedBonesWarning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_nonAnimatedBonesWarning") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v7 = 0;
    for ( i = boneFlags; !i->array[0]; i = (const DObjPartBits *)((char *)i + 4) )
    {
      if ( (unsigned int)++v7 >= 8 )
        return;
    }
    Com_sprintfPos_truncate(dest, 0x200ui64, &destPos, "Additive anims '");
    isFirstAnim = 1;
    XAnimGetNamesOfAnimsAffectingBonesInternal(v6, info, boneFlags, &isFirstAnim, dest, 512, &destPos);
    Com_sprintfPos_truncate(dest, 0x200ui64, &destPos, "' playing on non-animated bones '");
    v9 = 0i64;
    isFirstAnim = 1;
    v10 = 0;
    v22 = 0;
    if ( v6->numModels )
    {
      do
      {
        v11 = 0i64;
        v12 = v6->models[v9];
        numBones = v12->numBones;
        v14 = v12->numBones;
        if ( v12->numBones )
        {
          v15 = v10;
          do
          {
            if ( v15 >= 0x100 )
            {
              LODWORD(outBufferPos) = 256;
              LODWORD(bufferSize) = v15;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", bufferSize, outBufferPos) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v15 & 0x1F)) & boneFlags->array[(unsigned __int64)v15 >> 5]) != 0 )
            {
              v16 = SL_ConvertToString(v12->boneNames[v11]);
              v17 = ", ";
              if ( isFirstAnim )
                v17 = (char *)&queryFormat.fmt + 3;
              Com_sprintfPos_truncate(dest, 0x200ui64, &destPos, "%s%s", v17, v16);
              isFirstAnim = 0;
            }
            ++v15;
            ++v11;
          }
          while ( v11 < v14 );
          LODWORD(v9) = v22;
          numBones = v14;
        }
        v6 = v23;
        v9 = (unsigned int)(v9 + 1);
        v10 += numBones;
        v22 = v9;
      }
      while ( (unsigned int)v9 < v23->numModels );
    }
    Com_sprintfPos_truncate(dest, 0x200ui64, &destPos, "'");
    Com_PrintWarning(19, "%s\n", dest);
  }
}

/*
==============
XAnimWeightedAccumTransLerpedNonLoopEnd
==============
*/

void __fastcall XAnimWeightedAccumTransLerpedNonLoopEnd(DObjAnimMat *totalRotTrans, int *dataInt, float4 *lerp, double weightScale)
{
  __int128 v23; 
  __int128 v24; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm1, dword ptr [rdx+10h]
    vmovaps xmm5, xmm3
  }
  HIDWORD(v23) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vinsertps xmm4, xmm4, dword ptr [rdx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+8], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm4
  }
  HIDWORD(v24) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, dword ptr [rdx+14h], 20h ; ' '
    vmulps  xmm0, xmm3, xmmword ptr [r8]
    vaddps  xmm2, xmm0, xmm4
    vmovaps xmm1, xmm5
    vshufps xmm1, xmm1, xmm1, 0
    vmulps  xmm0, xmm2, xmm1
    vaddps  xmm2, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rcx+10h], xmm2
    vaddss  xmm0, xmm5, dword ptr [rcx+1Ch]
    vmovss  dword ptr [rcx+1Ch], xmm0
  }
}

/*
==============
XAnimWeightedMultiplyNearestRot
==============
*/

void __fastcall XAnimWeightedMultiplyNearestRot(const float4 *frameVec, double weightScale, DObjAnimMat *totalRotTrans)
{
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm8
    vmovaps [rsp+58h+var_48], xmm9
    vmovups xmm4, cs:__xmm@3f800000000000000000000000000000
    vmovaps xmm5, xmm1
    vmovups xmm1, xmmword ptr [r8]
    vxorps  xmm0, xmm0, xmm0
    vcmpeqps xmm0, xmm1, xmm0
    vblendvps xmm9, xmm1, xmm4, xmm0
    vmulps  xmm1, xmm4, xmmword ptr [rcx]
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
    vandps  xmm3, xmm0, xmmword ptr cs:?g_negativeZero@@3Ufloat4@@B.v; float4 const g_negativeZero
    vorps   xmm2, xmm3, cs:__xmm@3f8000003f8000003f8000003f800000
    vmovups xmm0, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
    vshufps xmm5, xmm5, xmm5, 0
    vsubps  xmm1, xmm0, xmm5
    vmulps  xmm3, xmm4, xmm1
    vmulps  xmm2, xmm5, xmm2
    vmulps  xmm0, xmm2, xmmword ptr [rcx]
    vaddps  xmm4, xmm0, xmm3
    vmulps  xmm1, xmm4, xmm4
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
    vsqrtps xmm1, xmm0
    vdivps  xmm7, xmm4, xmm1
    vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
    vshufps xmm0, xmm9, xmm9, 0D2h ; 'Ò'
    vmulps  xmm3, xmm1, xmm0
    vshufps xmm1, xmm9, xmm9, 0C9h ; 'É'
    vshufps xmm2, xmm7, xmm7, 0D2h ; 'Ò'
    vmulps  xmm0, xmm2, xmm1
    vsubps  xmm5, xmm0, xmm3
    vmulps  xmm1, xmm7, xmm9
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
    vshufps xmm8, xmm7, xmm7, 0FFh
    vshufps xmm6, xmm9, xmm9, 0FFh
    vhaddps xmm3, xmm2, xmm2
    vmulps  xmm0, xmm8, xmm6
    vsubps  xmm2, xmm0, xmm3
    vmulps  xmm4, xmm8, xmm9
    vmulps  xmm1, xmm6, xmm7
    vaddps  xmm1, xmm4, xmm1
    vaddps  xmm0, xmm5, xmm1
    vblendps xmm2, xmm2, xmm0, 7
    vmovups xmmword ptr [r8], xmm2
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm8, [rsp+58h+var_38]
    vmovaps xmm9, [rsp+58h+var_48]
  }
}

/*
==============
XAnimWeightedOverlayTransWithLerp
==============
*/

void __fastcall XAnimWeightedOverlayTransWithLerp(DObjAnimMat *totalRotTrans, int *dataInt, float4 *lerp, double weightScale)
{
  __int128 v24; 
  __int128 v25; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  xmm2, dword ptr [rdx+14h]
    vmovaps xmm5, xmm3
  }
  HIDWORD(v24) = 0;
  __asm
  {
    vmovups xmm4, xmmword ptr [rsp]
    vmovss  xmm4, xmm4, xmm0
    vmovss  xmm0, dword ptr [rdx+0Ch]
    vinsertps xmm4, xmm4, dword ptr [rdx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+8], 20h ; ' '
    vmovups xmmword ptr [rsp], xmm4
  }
  HIDWORD(v25) = 0;
  __asm
  {
    vmovups xmm3, xmmword ptr [rsp]
    vmovss  xmm3, xmm3, xmm0
    vinsertps xmm3, xmm3, dword ptr [rdx+10h], 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    vmulps  xmm0, xmm3, xmmword ptr [r8]
    vaddps  xmm1, xmm0, xmm4
    vinsertps xmm1, xmm1, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0'
    vsubps  xmm3, xmm1, xmmword ptr [rcx+10h]
    vmovaps xmm2, xmm5
    vshufps xmm2, xmm2, xmm2, 0
    vmulps  xmm0, xmm3, xmm2
    vaddps  xmm1, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
  }
}

/*
==============
XAnimWorldTransformCache_Clear
==============
*/
void XAnimWorldTransformCache_Clear(XAnimWorldTransformCache *cache)
{
  const dvar_t *v2; 
  unsigned int v3; 

  if ( cache )
  {
    v3 = 0;
    _RDI = &cache->partBits;
    __asm
    {
      vmovaps [rsp+58h+var_18], xmm6
      vpxor   xmm6, xmm6, xmm6
    }
    do
    {
      __asm { vmovdqu xmmword ptr [rdi], xmm6 }
      _RDI = (DObjPartBits *)((char *)_RDI + 16);
      ++v3;
    }
    while ( v3 < 2 );
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
  }
  else
  {
    v2 = DCONST_DVARBOOL_xanim_enableTransformCache;
    if ( !DCONST_DVARBOOL_xanim_enableTransformCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableTransformCache") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 50, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_xanim_enableTransformCache, \"xanim_enableTransformCache\" ))", (const char *)&queryFormat, "!Dconst_GetBool( xanim_enableTransformCache )") )
      __debugbreak();
  }
}

/*
==============
XAnimWorldTransformCache_GetBoneTransform
==============
*/
void XAnimWorldTransformCache_GetBoneTransform(const XAnimWorldTransformCache *cache, unsigned __int16 boneIndex, float4 *outRotationQuat, float4 *outTranslation)
{
  __int64 v15; 

  _RDI = outTranslation;
  _RBP = outRotationQuat;
  _RSI = cache;
  if ( !cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 108, ASSERT_TYPE_ASSERT, "(cache != nullptr)", (const char *)&queryFormat, "cache != nullptr") )
    __debugbreak();
  if ( (boneIndex & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 109, ASSERT_TYPE_ASSERT, "(!XAnimIsClientBoneIndex( boneIndex ))", (const char *)&queryFormat, "!XAnimIsClientBoneIndex( boneIndex )") )
    __debugbreak();
  if ( boneIndex >= 0xFEu )
  {
    LODWORD(v15) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 110, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ( sizeof( *array_counter( cache->boneTransforms ) ) + 0 ) )", "boneIndex doesn't index ARRAY_COUNT( cache->boneTransforms )\n\t%i not in [0, %i)", v15, 254) )
      __debugbreak();
  }
  _RAX = 32i64 * boneIndex;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax+rsi+10h]
    vmovups xmmword ptr [rdi], xmm0
    vmovups xmm1, xmmword ptr [rax+rsi]
    vcmpneqps xmm0, xmm1, xmm1
    vmovmskps eax, xmm0
    vmovups xmmword ptr [rbp+0], xmm1
  }
  if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 116, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( outRotationQuat ))", (const char *)&queryFormat, "!Float4IsNaN( outRotationQuat )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 117, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( outTranslation ))", (const char *)&queryFormat, "!Float4IsNaN( outTranslation )") )
      __debugbreak();
  }
}

/*
==============
XAnimWorldTransformCache_HasBoneTransform
==============
*/
bool XAnimWorldTransformCache_HasBoneTransform(const XAnimWorldTransformCache *cache, unsigned __int16 boneIndex)
{
  const dvar_t *v4; 

  if ( (boneIndex & 0x8000u) != 0 )
    return 0;
  if ( !cache )
  {
    v4 = DCONST_DVARBOOL_xanim_enableTransformCache;
    if ( !DCONST_DVARBOOL_xanim_enableTransformCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableTransformCache") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 95, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_xanim_enableTransformCache, \"xanim_enableTransformCache\" ))", (const char *)&queryFormat, "!Dconst_GetBool( xanim_enableTransformCache )") )
      __debugbreak();
    return 0;
  }
  if ( boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( DOBJ_MAX_PARTS )", "boneIndex doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", boneIndex, 254) )
    __debugbreak();
  return bitarray_base<bitarray<256>>::testBit(&cache->partBits, boneIndex);
}

/*
==============
XAnimWorldTransformCache_InvalidateBoneTransform
==============
*/
void XAnimWorldTransformCache_InvalidateBoneTransform(XAnimWorldTransformCache *cache, unsigned __int16 boneIndex)
{
  const dvar_t *v4; 
  char v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  unsigned int *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( (boneIndex & 0x8000u) != 0 )
    return;
  if ( !cache )
  {
    v4 = DCONST_DVARBOOL_xanim_enableTransformCache;
    if ( !DCONST_DVARBOOL_xanim_enableTransformCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableTransformCache") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 69, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_xanim_enableTransformCache, \"xanim_enableTransformCache\" ))", (const char *)&queryFormat, "!Dconst_GetBool( xanim_enableTransformCache )") )
      __debugbreak();
    return;
  }
  if ( boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( DOBJ_MAX_PARTS )", "boneIndex doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", boneIndex, 254) )
    __debugbreak();
  v5 = boneIndex;
  if ( bitarray_base<bitarray<256>>::testBit(&cache->partBits, boneIndex) )
  {
    v6 = boneIndex >> 5;
    v7 = v5 & 0x1F;
    if ( !v7 )
    {
      if ( (unsigned int)v6 >= 8 )
        return;
      v8 = (unsigned int)(8 - v6);
      goto LABEL_21;
    }
    if ( (unsigned int)v6 >= 8 )
    {
      LODWORD(v11) = 8;
      LODWORD(v10) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_public_db.h", 175, ASSERT_TYPE_ASSERT, "(unsigned)( indexHigh ) < (unsigned)( ( sizeof( *array_counter( super::array ) ) + 0 ) )", "indexHigh doesn't index ARRAY_COUNT( super::array )\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    cache->partBits.array[v6] &= -(1 << (32 - v7));
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 < 8 )
    {
      v8 = (unsigned int)(8 - v6);
LABEL_21:
      v9 = &cache->partBits.array[v6];
      while ( v8 )
      {
        *v9++ = 0;
        --v8;
      }
    }
  }
}

/*
==============
XAnimWorldTransformCache_SetBoneTransform
==============
*/
void XAnimWorldTransformCache_SetBoneTransform(XAnimWorldTransformCache *cache, unsigned __int16 boneIndex, float4 *rotationQuat, float4 *translation)
{
  const dvar_t *v14; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  _R14 = translation;
  _R15 = rotationQuat;
  _RDI = cache;
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 123, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( rotationQuat ))", (const char *)&queryFormat, "!Float4IsNaN( rotationQuat )") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 124, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( translation ))", (const char *)&queryFormat, "!Float4IsNaN( translation )") )
    __debugbreak();
  if ( (boneIndex & 0x8000u) == 0 )
  {
    if ( _RDI )
    {
      if ( boneIndex >= 0xFEu )
      {
        LODWORD(v19) = boneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ( sizeof( *array_counter( cache->boneTransforms ) ) + 0 ) )", "boneIndex doesn't index ARRAY_COUNT( cache->boneTransforms )\n\t%i not in [0, %i)", v19, 254) )
          __debugbreak();
        LODWORD(v21) = 254;
        LODWORD(v20) = boneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( DOBJ_MAX_PARTS )", "boneIndex doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( bitarray_base<bitarray<256>>::testBit(&_RDI->partBits, boneIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 140, ASSERT_TYPE_ASSERT, "(!XAnimWorldTransformCache_HasBoneTransform( cache, boneIndex ))", (const char *)&queryFormat, "!XAnimWorldTransformCache_HasBoneTransform( cache, boneIndex )") )
        __debugbreak();
      __asm
      {
        vmovups xmm1, xmmword ptr [r14]
        vmovups xmm0, xmmword ptr [r15]
        vinsertps xmm2, xmm1, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0'
      }
      _RAX = 32i64 * boneIndex;
      __asm
      {
        vmovups xmmword ptr [rax+rdi], xmm0
        vmovups xmmword ptr [rax+rdi+10h], xmm2
      }
      bitarray_base<bitarray<256>>::setBit(&_RDI->partBits, boneIndex);
    }
    else
    {
      v14 = DCONST_DVARBOOL_xanim_enableTransformCache;
      if ( !DCONST_DVARBOOL_xanim_enableTransformCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableTransformCache") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 134, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_xanim_enableTransformCache, \"xanim_enableTransformCache\" ))", (const char *)&queryFormat, "!Dconst_GetBool( xanim_enableTransformCache )") )
        __debugbreak();
    }
  }
}

/*
==============
XAnim_CalcDelta3DForTime
==============
*/

void __fastcall XAnim_CalcDelta3DForTime(const XAnimParts *anim, double time, vec4_t *rotDelta, float4 *posDelta)
{
  bool v14; 
  XAnimDeltaPart *deltaPart; 
  unsigned int numframes; 
  XAnimDeltaPartQuat *quat; 
  unsigned __int16 v18; 
  unsigned __int16 size; 
  double v55; 
  double v56; 
  double v57; 
  int v58; 
  float v59; 
  XAnimTime animTime; 
  XAnimTime v61; 
  float keyFrameLerpFrac; 
  int keyFrameIndex; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+98h+var_28], xmm6
  }
  _RBX = rotDelta;
  __asm
  {
    vmovaps xmm6, xmm1
    vcomiss xmm1, cs:__real@3f800000
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vmovsd  [rsp+98h+var_60], xmm0
    vxorpd  xmm1, xmm1, xmm1
    vmovsd  [rsp+98h+var_68], xmm1
    vcvtss2sd xmm2, xmm6, xmm6
    vmovsd  [rsp+98h+var_70], xmm2
  }
  v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 4095, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v55, v56, v57);
  if ( v14 )
    __debugbreak();
  __asm { vucomiss xmm6, cs:__real@3f800000 }
  deltaPart = anim->deltaPart;
  numframes = anim->numframes;
  if ( v14 && anim->numframes )
  {
    quat = deltaPart->quat;
    if ( numframes >= 0x100 )
    {
      if ( quat )
      {
        size = quat->size;
        __asm { vxorps  xmm0, xmm0, xmm0 }
        if ( quat->size )
        {
          __asm
          {
            vcvtsi2ss xmm0, xmm0, ebp
            vmulss  xmm1, xmm0, xmm6
            vcvttss2si eax, xmm1
          }
          v61.frameIndex = _EAX;
          __asm
          {
            vmovss  [rsp+98h+var_40.time], xmm6
            vmovss  [rsp+98h+var_40.frameFrac], xmm1
          }
          XAnim_GetTimeIndex_unsigned_short_(&v61, quat->u.frames.indices._2, size, &v58, &v59);
          __asm { vmovss  xmm2, [rsp+98h+var_54]; frac }
          Short4LerpAsVec4(quat->u.frames.frames[v58], quat->u.frames.frames[v58 + 1], *(const float *)&_XMM2, _RBX);
        }
        else
        {
          __asm
          {
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [rbx], xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vmovss  dword ptr [rbx+4], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [rbx+8], xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vmovss  dword ptr [rbx+0Ch], xmm1
          }
        }
      }
      else
      {
        _RBX->v[3] = 32767.0;
        *(_QWORD *)_RBX->v = 0i64;
        _RBX->v[2] = 0.0;
      }
      __asm { vmovaps xmm1, xmm6; time }
      XAnim_CalcPosDeltaDuring_unsigned_short_(deltaPart, *(const float *)&_XMM1, numframes, posDelta);
    }
    else
    {
      if ( quat )
      {
        v18 = quat->size;
        __asm { vxorps  xmm0, xmm0, xmm0 }
        if ( quat->size )
        {
          __asm
          {
            vcvtsi2ss xmm0, xmm0, ebp
            vmulss  xmm1, xmm0, xmm6
            vcvttss2si eax, xmm1
          }
          animTime.frameIndex = _EAX;
          __asm
          {
            vmovss  [rsp+98h+animTime.time], xmm6
            vmovss  [rsp+98h+animTime.frameFrac], xmm1
          }
          XAnim_GetTimeIndex_unsigned_char_(&animTime, quat->u.frames.indices._1, v18, &keyFrameIndex, &keyFrameLerpFrac);
          __asm { vmovss  xmm2, [rsp+98h+keyFrameLerpFrac]; frac }
          Short4LerpAsVec4(quat->u.frames.frames[keyFrameIndex], quat->u.frames.frames[keyFrameIndex + 1], *(const float *)&_XMM2, _RBX);
        }
        else
        {
          __asm
          {
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [rbx], xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vmovss  dword ptr [rbx+4], xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [rbx+8], xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vmovss  dword ptr [rbx+0Ch], xmm1
          }
        }
      }
      else
      {
        _RBX->v[3] = 32767.0;
        *(_QWORD *)_RBX->v = 0i64;
        _RBX->v[2] = 0.0;
      }
      __asm { vmovaps xmm1, xmm6; time }
      XAnim_CalcPosDeltaDuring_unsigned_char_(deltaPart, *(const float *)&_XMM1, numframes, posDelta);
    }
  }
  else
  {
    if ( deltaPart->quat )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rbx], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmovss  dword ptr [rbx+4], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rbx+8], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
      }
    }
    else
    {
      __asm { vmovss  xmm1, cs:__real@46fffe00 }
      *(_QWORD *)_RBX->v = 0i64;
      _RBX->v[2] = 0.0;
    }
    __asm { vmovss  dword ptr [rbx+0Ch], xmm1 }
    XAnim_CalcPosDeltaEntire(deltaPart, posDelta);
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
}

/*
==============
XAnim_CalcDeltaForTime
==============
*/

void __fastcall XAnim_CalcDeltaForTime(const XAnimParts *anim, double time, vec2_t *rotDelta, float4 *posDelta)
{
  bool v14; 
  XAnimDeltaPart *deltaPart; 
  unsigned int numframes; 
  XAnimDeltaPartQuat2 *quat2; 
  unsigned __int16 v18; 
  unsigned __int16 size; 
  double v63; 
  double v64; 
  double v65; 
  int v66; 
  float v67; 
  XAnimTime animTime; 
  XAnimTime v69; 
  float keyFrameLerpFrac; 
  int keyFrameIndex; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm1, xmm0
    vmovaps [rsp+98h+var_28], xmm6
  }
  _RBX = rotDelta;
  __asm
  {
    vmovaps xmm6, xmm1
    vcomiss xmm1, cs:__real@3f800000
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vmovsd  [rsp+98h+var_60], xmm0
    vxorpd  xmm1, xmm1, xmm1
    vmovsd  [rsp+98h+var_68], xmm1
    vcvtss2sd xmm2, xmm6, xmm6
    vmovsd  [rsp+98h+var_70], xmm2
  }
  v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 4062, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v63, v64, v65);
  if ( v14 )
    __debugbreak();
  __asm { vucomiss xmm6, cs:__real@3f800000 }
  deltaPart = anim->deltaPart;
  numframes = anim->numframes;
  if ( v14 && anim->numframes )
  {
    quat2 = deltaPart->quat2;
    if ( numframes >= 0x100 )
    {
      if ( quat2 )
      {
        size = quat2->size;
        __asm { vxorps  xmm0, xmm0, xmm0 }
        if ( quat2->size )
        {
          __asm
          {
            vcvtsi2ss xmm0, xmm0, ebp
            vmulss  xmm1, xmm0, xmm6
            vcvttss2si eax, xmm1
          }
          v69.frameIndex = _EAX;
          __asm
          {
            vmovss  [rsp+98h+var_40.time], xmm6
            vmovss  [rsp+98h+var_40.frameFrac], xmm1
          }
          XAnim_GetTimeIndex_unsigned_short_(&v69, quat2->u.frames.indices._2, size, &v66, &v67);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, [rsp+98h+var_54]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vaddss  xmm1, xmm1, xmm0
            vmovss  dword ptr [rbx], xmm1
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm2, xmm0, [rsp+98h+var_54]
            vcvtsi2ss xmm1, xmm1, ecx
            vaddss  xmm1, xmm2, xmm1
          }
        }
        else
        {
          __asm
          {
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [rbx], xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
          }
        }
      }
      else
      {
        __asm { vmovss  xmm1, cs:__real@46fffe00 }
        _RBX->v[0] = 0.0;
      }
      __asm
      {
        vmovss  dword ptr [rbx+4], xmm1
        vmovaps xmm1, xmm6; time
      }
      XAnim_CalcPosDeltaDuring_unsigned_short_(deltaPart, *(const float *)&_XMM1, numframes, posDelta);
    }
    else
    {
      if ( quat2 )
      {
        v18 = quat2->size;
        __asm { vxorps  xmm0, xmm0, xmm0 }
        if ( quat2->size )
        {
          __asm
          {
            vcvtsi2ss xmm0, xmm0, ebp
            vmulss  xmm1, xmm0, xmm6
            vcvttss2si eax, xmm1
          }
          animTime.frameIndex = _EAX;
          __asm
          {
            vmovss  [rsp+98h+animTime.time], xmm6
            vmovss  [rsp+98h+animTime.frameFrac], xmm1
          }
          XAnim_GetTimeIndex_unsigned_char_(&animTime, quat2->u.frames.indices._1, v18, &keyFrameIndex, &keyFrameLerpFrac);
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm1, xmm0, [rsp+98h+keyFrameLerpFrac]
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, ecx
            vaddss  xmm1, xmm1, xmm0
            vmovss  dword ptr [rbx], xmm1
            vxorps  xmm1, xmm1, xmm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm2, xmm0, [rsp+98h+keyFrameLerpFrac]
            vcvtsi2ss xmm1, xmm1, ecx
            vaddss  xmm1, xmm2, xmm1
          }
        }
        else
        {
          __asm
          {
            vcvtsi2ss xmm0, xmm0, eax
            vmovss  dword ptr [rbx], xmm0
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
          }
        }
      }
      else
      {
        __asm { vmovss  xmm1, cs:__real@46fffe00 }
        _RBX->v[0] = 0.0;
      }
      __asm
      {
        vmovss  dword ptr [rbx+4], xmm1
        vmovaps xmm1, xmm6; time
      }
      XAnim_CalcPosDeltaDuring_unsigned_char_(deltaPart, *(const float *)&_XMM1, numframes, posDelta);
    }
  }
  else
  {
    if ( deltaPart->quat2 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmovss  dword ptr [rbx], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
      }
    }
    else
    {
      __asm { vmovss  xmm1, cs:__real@46fffe00 }
      _RBX->v[0] = 0.0;
    }
    __asm { vmovss  dword ptr [rbx+4], xmm1 }
    XAnim_CalcPosDeltaEntire(deltaPart, posDelta);
  }
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
}

/*
==============
XAnim_CalcPosDeltaEntire
==============
*/
void XAnim_CalcPosDeltaEntire(const XAnimDeltaPart *animDelta, float4 *posDelta)
{
  unsigned __int16 size; 
  __int128 v33; 
  __int128 v34; 

  _R8 = animDelta->trans;
  if ( animDelta->trans )
  {
    size = _R8->size;
    if ( _R8->size )
    {
      _R9 = _R8->u.frames.frames;
      _RCX = size;
      if ( _R8->smallTrans )
      {
        _RAX = &(*_R9._1)[2 * size];
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rcx+rax]
          vpmovzxbd xmm1, xmm0
        }
      }
      else
      {
        _RAX = 3i64 * size;
        __asm
        {
          vlddqu  xmm1, xmmword ptr [r9+rax*2]
          vpxor   xmm0, xmm0, xmm0
          vpunpcklwd xmm1, xmm1, xmm0
        }
      }
      __asm { vmovss  xmm0, dword ptr [r8+8] }
      HIDWORD(v33) = 0;
      __asm
      {
        vmovups xmm4, xmmword ptr [rsp]
        vmovss  xmm4, xmm4, xmm0
        vmovss  xmm0, dword ptr [r8+14h]
        vinsertps xmm4, xmm4, dword ptr [r8+0Ch], 10h
        vinsertps xmm4, xmm4, dword ptr [r8+10h], 20h ; ' '
        vmovups xmmword ptr [rsp], xmm4
        vcvtdq2ps xmm2, xmm1
      }
      HIDWORD(v34) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r8+18h], 10h
        vinsertps xmm3, xmm3, dword ptr [r8+1Ch], 20h ; ' '
        vinsertps xmm5, xmm2, xmm2, 8
        vmulps  xmm0, xmm5, xmm3
        vaddps  xmm1, xmm0, xmm4
        vmovups xmmword ptr [rdx], xmm1
      }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [r8+8] }
      HIDWORD(v33) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [r8+0Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [r8+10h], 20h ; ' '
        vmovups xmmword ptr [rdx], xmm3
      }
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups xmmword ptr [rdx], xmm0
    }
  }
}

/*
==============
XAnim_CalculateBlendShapeTargetWeights
==============
*/
void XAnim_CalculateBlendShapeTargetWeights(const DObj *dobj, const float *weights)
{
  const DObj *v9; 
  int v11; 
  __int64 v12; 
  __int16 *v18; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  unsigned __int16 *v23; 
  int v24; 
  unsigned __int16 v33; 
  unsigned __int16 v34; 
  bool v35; 
  bool v36; 
  unsigned __int16 *v42; 
  unsigned __int16 v43; 
  int v67; 
  __int64 v68; 

  _R12 = weights;
  v9 = dobj;
  _R14 = DObjGetBlendShapeTargetWeights(dobj);
  memset_0(_R14, 0, 4i64 * v9->blendShapeTargetCount);
  v11 = 0;
  v67 = 0;
  if ( v9->numModels )
  {
    v12 = 0i64;
    __asm
    {
      vmovaps [rsp+0C8h+var_48], xmm6
      vmovaps [rsp+0C8h+var_58], xmm7
      vmovaps [rsp+0C8h+var_68], xmm8
      vmovss  xmm8, cs:__real@3f800000
      vmovaps [rsp+0C8h+var_78], xmm9
      vmovss  xmm9, cs:__real@3f400000
      vmovaps [rsp+0C8h+var_88], xmm10
      vmovss  xmm10, cs:__real@bf800000
      vmovaps [rsp+0C8h+var_98], xmm11
      vxorps  xmm11, xmm11, xmm11
    }
    v68 = 0i64;
    do
    {
      _RDX = *(__int64 *)((char *)v9->models + v12);
      v18 = *(__int16 **)(_RDX + 656);
      if ( v18 )
      {
        _RBX = (unsigned __int16 *)*((_QWORD *)v18 + 2);
        v20 = *v18;
        v21 = v18[1];
        __asm { vmovaps xmm7, xmm8 }
        v23 = &_RBX[4 * (unsigned __int16)v18[2]];
        if ( *v18 )
        {
          v24 = 1;
          if ( *(unsigned __int8 *)(_RDX + 10) - 1 < 1 )
            v24 = *(unsigned __int8 *)(_RDX + 10) - 1;
          _RAX = (__int64)v24 << 6;
          __asm
          {
            vmovss  xmm0, dword ptr [rax+rdx+0F0h]
            vmulss  xmm2, xmm0, xmm9
            vsubss  xmm1, xmm0, xmm2
            vdivss  xmm0, xmm10, xmm1
            vmulss  xmm2, xmm0, xmm2
            vmaxss  xmm1, xmm2, xmm11
            vminss  xmm0, xmm1, xmm8
            vsubss  xmm7, xmm8, xmm0
          }
        }
        if ( _RBX < v23 )
        {
          v33 = *_RBX;
LABEL_10:
          v34 = v33;
          v35 = v33 <= v21;
          if ( v33 >= v21 )
          {
            v36 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3390, ASSERT_TYPE_ASSERT, "(weightIndex < modelWeightCount)", (const char *)&queryFormat, "weightIndex < modelWeightCount");
            v35 = !v36;
            if ( v36 )
              __debugbreak();
          }
          _RAX = v34;
          __asm
          {
            vmovss  xmm6, dword ptr [r12+rax*4]
            vcomiss xmm6, dword ptr [rbx+4]
          }
          if ( v35 )
          {
            if ( _RBX[1] >= v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3394, ASSERT_TYPE_ASSERT, "(map->targetIndex < blendShapeTargetCount)", (const char *)&queryFormat, "map->targetIndex < blendShapeTargetCount") )
              __debugbreak();
            __asm { vdivss  xmm0, xmm6, dword ptr [rbx+4] }
            _RAX = _RBX[1];
            __asm
            {
              vmulss  xmm1, xmm0, xmm7
              vmovss  dword ptr [r14+rax*4], xmm1
            }
            goto LABEL_30;
          }
          do
          {
            v42 = _RBX;
            _RBX += 4;
            if ( _RBX >= v23 )
              goto LABEL_29;
            v43 = *_RBX;
            if ( *_RBX != v34 )
              goto LABEL_29;
            __asm { vcomiss xmm6, dword ptr [rbx+4] }
          }
          while ( v43 > v34 );
          if ( v43 != v34 )
          {
LABEL_29:
            _RAX = v42[1];
            _RBX = v42;
            __asm { vmovss  dword ptr [r14+rax*4], xmm7 }
            goto LABEL_30;
          }
          if ( _RBX[1] >= v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3403, ASSERT_TYPE_ASSERT, "(map->targetIndex < blendShapeTargetCount)", (const char *)&queryFormat, "map->targetIndex < blendShapeTargetCount") )
            __debugbreak();
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vsubss  xmm1, xmm0, dword ptr [rbx-4]
            vsubss  xmm2, xmm6, dword ptr [rbx-4]
          }
          _RAX = _RBX[1];
          __asm
          {
            vdivss  xmm2, xmm2, xmm1
            vmulss  xmm3, xmm2, xmm7
            vmovss  dword ptr [r14+rax*4], xmm3
          }
          if ( *(_RBX - 3) >= v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3405, ASSERT_TYPE_ASSERT, "(( map - 1 )->targetIndex < blendShapeTargetCount)", (const char *)&queryFormat, "( map - 1 )->targetIndex < blendShapeTargetCount") )
            __debugbreak();
          __asm { vsubss  xmm0, xmm8, dword ptr [r14+rax*4] }
          _RAX = *(_RBX - 3);
          __asm
          {
            vmulss  xmm1, xmm0, xmm7
            vmovss  dword ptr [r14+rax*4], xmm1
          }
LABEL_30:
          while ( 1 )
          {
            _RBX += 4;
            if ( _RBX >= v23 )
              break;
            v33 = *_RBX;
            if ( *_RBX != v34 )
              goto LABEL_10;
          }
          v11 = v67;
          v9 = dobj;
          v12 = v68;
        }
        _R14 += v20;
        _R12 += v21;
      }
      ++v11;
      v12 += 8i64;
      v67 = v11;
      v68 = v12;
    }
    while ( v11 < v9->numModels );
    __asm
    {
      vmovaps xmm11, [rsp+0C8h+var_98]
      vmovaps xmm10, [rsp+0C8h+var_88]
      vmovaps xmm9, [rsp+0C8h+var_78]
      vmovaps xmm8, [rsp+0C8h+var_68]
      vmovaps xmm7, [rsp+0C8h+var_58]
      vmovaps xmm6, [rsp+0C8h+var_48]
    }
  }
}

/*
==============
XAnim_SetTime
==============
*/

void __fastcall XAnim_SetTime(double time, const int frameCount, XAnimTime *animTime)
{
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, edx
    vmovss  dword ptr [r8], xmm0
    vmulss  xmm0, xmm1, xmm0
    vcvttss2si eax, xmm0
  }
  animTime->frameIndex = _EAX;
  __asm { vmovss  dword ptr [r8+4], xmm0 }
}

/*
==============
XAnim_ShouldNormalizeChildren
==============
*/
bool XAnim_ShouldNormalizeChildren(const XAnimInfo *info)
{
  unsigned int flags; 
  unsigned __int16 children; 
  XAnimInfo *AnimInfo; 
  bool result; 

  flags = info->animParent.flags;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
  }
  if ( (flags & 0x20) == 0 )
  {
    if ( (flags & 0x8000) == 0 )
    {
LABEL_15:
      result = 1;
      goto LABEL_14;
    }
    children = info->children;
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( children )
    {
      __asm { vmovss  xmm7, cs:__real@3f7fbe77 }
      while ( 1 )
      {
        AnimInfo = GetAnimInfo(children);
        if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( AnimInfo->animToModel )
          break;
        if ( (AnimInfo->animParent.flags & 0x210) != 0 )
          goto LABEL_13;
        if ( (AnimInfo->animParent.flags & 0x100) == 0 )
          break;
        children = AnimInfo->next;
        if ( !children )
          goto LABEL_13;
      }
      __asm
      {
        vaddss  xmm6, xmm6, dword ptr [rbx+3Ch]
        vcomiss xmm6, xmm7
      }
      goto LABEL_15;
    }
  }
LABEL_13:
  result = 0;
LABEL_14:
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
  return result;
}


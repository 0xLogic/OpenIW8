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
  const DObj *v3; 
  XAnimCalcAnimInfo *v4; 
  DObjPartBits *v5; 
  char *Value; 
  unsigned int *v7; 
  unsigned int v8; 
  _QWORD *v9; 
  char *v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  ThreadContext CurrentThreadContext; 
  bool v14; 
  const dvar_t *v15; 
  DObjPartBits *p_animPartBits; 
  unsigned int v17; 
  DObjPartBits *v18; 
  DObjAnimMat *mat; 
  unsigned int v20; 
  _DWORD *v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 ClientBoneOffset; 
  int v26; 
  DObjAnimMat *v27; 
  __int64 v28; 
  const XAnim_s **p_anims; 
  const dvar_t *v30; 
  int v31; 
  const dvar_t *v32; 
  double v33; 
  const dvar_t *v34; 
  int v35; 
  float v36; 
  volatile signed __int32 *v37; 
  char v38; 
  int v39; 
  const dvar_t *v40; 
  const XAnimInfo *v41; 
  __int64 v42; 
  unsigned int v43; 
  DObjAnimMat *v44; 
  const char ***models; 
  const char **v46; 
  int v47; 
  _DWORD *v48; 
  unsigned __int64 v49; 
  unsigned int v50; 
  int v52; 
  DObjAnimMat *rotTransArray; 
  float *v54; 
  unsigned __int64 v55; 
  unsigned int v56; 
  int v57; 
  unsigned __int16 v58; 
  _DWORD *v59; 
  int v62; 
  DObjAnimMat *v63; 
  __m128 v64; 
  XAnimCalcAnimInfo *v67; 
  float *BlendShapeTargetWeights; 
  XAnimCalcBuffer *destBuffer; 
  __int64 calcMode; 
  unsigned int v71; 
  const char **v72; 
  bool v73; 
  int v74; 
  const char ***v76; 
  DObjAnimMat *v78; 
  XAnimCalcBuffer v79; 
  DObjPartBits *v80; 
  DSkel *p_skel; 
  const DObj *v82; 
  const XAnim_s **v83; 
  XAnimCalcBuffer v84; 
  char v85; 

  v3 = obj;
  v82 = obj;
  v4 = animInfo;
  v5 = partBits;
  Value = (char *)Sys_GetValue(0);
  v7 = (unsigned int *)(Value + 18656);
  if ( (unsigned int)(*((_DWORD *)Value + 4664) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 4664) + 1, 3) )
    __debugbreak();
  v8 = *v7 + 1;
  *v7 = v8;
  if ( v8 >= 3 )
  {
    LODWORD(calcMode) = 3;
    LODWORD(destBuffer) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", destBuffer, calcMode) )
      __debugbreak();
  }
  v9 = Value + 2088;
  v10 = Value + 40;
  if ( *v9 < (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v9 += 8i64;
  if ( *v9 >= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v9 = v7;
  if ( *v9 <= (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v11 = (int)*v7;
  v12 = __rdtsc();
  v7[v11 + 2] = v12;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 414, NULL, 0);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3497, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3498, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  v14 = v3->blendShapeTargetCount && (v3->flags & 8) != 0 && !v3->skel.partBits.blendShapesCalculated;
  v73 = v14;
  p_skel = &v3->skel;
  if ( v3 == (const DObj *)-56i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3508, ASSERT_TYPE_ASSERT, "(skel)", (const char *)&queryFormat, "skel") )
    __debugbreak();
  v4->worldTransformCache = (XAnimWorldTransformCache *)&v85;
  v15 = DCONST_DVARBOOL_xanim_enableTransformCache;
  if ( !DCONST_DVARBOOL_xanim_enableTransformCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableTransformCache") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled )
    v4->worldTransformCache = NULL;
  if ( (v5->array[7] & 2) != 0 && !DObjHasClientOnlyBones(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3522, ASSERT_TYPE_ASSERT, "(!partBits->testClientBit() || DObjHasClientOnlyBones( obj ))", (const char *)&queryFormat, "!partBits->testClientBit() || DObjHasClientOnlyBones( obj )") )
    __debugbreak();
  p_animPartBits = &v4->animPartBits;
  v4->rotTransArrayIndex = 0;
  v4->partBits = v5;
  v80 = &v4->animPartBits;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v4->animPartBits, v5);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::flipAllBits(&v4->animPartBits);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v4->animPartBits, &v3->skel.partBits.anim);
  v17 = 0;
  v18 = &v4->animPartBits;
  while ( v18->array[0] == -1 )
  {
    ++v17;
    v18 = (DObjPartBits *)((char *)v18 + 4);
    if ( v17 >= 8 )
    {
      if ( !v14 )
        goto LABEL_247;
      break;
    }
  }
  mat = v3->skel.mat;
  v20 = 0;
  v79.rotTransArray = mat;
  if ( v3->numBones )
  {
    v21 = (_DWORD *)&mat->quat.v[2];
    do
    {
      if ( v20 >= 0x100 )
      {
        LODWORD(calcMode) = 256;
        LODWORD(destBuffer) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v20 & 0x1F)) & v3->skel.partBits.anim.array[(unsigned __int64)v20 >> 5]) != 0 )
      {
        if ( ((*(v21 - 2) & 0x7F800000) == 2139095040 || (*(v21 - 1) & 0x7F800000) == 2139095040 || (*v21 & 0x7F800000) == 2139095040 || (v21[1] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3553, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat[bone].quat )[0] ) && !IS_NAN( ( mat[bone].quat )[1] ) && !IS_NAN( ( mat[bone].quat )[2] ) && !IS_NAN( ( mat[bone].quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat[bone].quat )[0] ) && !IS_NAN( ( mat[bone].quat )[1] ) && !IS_NAN( ( mat[bone].quat )[2] ) && !IS_NAN( ( mat[bone].quat )[3] )") )
          __debugbreak();
        if ( ((v21[2] & 0x7F800000) == 2139095040 || (v21[3] & 0x7F800000) == 2139095040 || (v21[4] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3554, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat[bone].trans )[0] ) && !IS_NAN( ( mat[bone].trans )[1] ) && !IS_NAN( ( mat[bone].trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat[bone].trans )[0] ) && !IS_NAN( ( mat[bone].trans )[1] ) && !IS_NAN( ( mat[bone].trans )[2] )") )
          __debugbreak();
      }
      ++v20;
      v21 += 8;
    }
    while ( (int)v20 < v3->numBones );
    v4 = animInfo;
    mat = v79.rotTransArray;
    v5 = partBits;
    p_animPartBits = &animInfo->animPartBits;
  }
  if ( (v3->skel.partBits.anim.array[7] & 2) != 0 )
  {
    v22 = 0;
    if ( v3->numClientBones )
    {
      do
      {
        v23 = v22 + v3->numBones;
        if ( ((LODWORD(mat[v23].quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v23].quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v23].quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v23].quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3562, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat[bone + obj->numBones].quat )[0] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[1] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[2] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat[bone + obj->numBones].quat )[0] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[1] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[2] ) && !IS_NAN( ( mat[bone + obj->numBones].quat )[3] )") )
          __debugbreak();
        v24 = v22 + v3->numBones;
        if ( ((LODWORD(mat[v24].trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v24].trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v24].trans.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3563, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat[bone + obj->numBones].trans )[0] ) && !IS_NAN( ( mat[bone + obj->numBones].trans )[1] ) && !IS_NAN( ( mat[bone + obj->numBones].trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat[bone + obj->numBones].trans )[0] ) && !IS_NAN( ( mat[bone + obj->numBones].trans )[1] ) && !IS_NAN( ( mat[bone + obj->numBones].trans )[2] )") )
          __debugbreak();
        ++v22;
      }
      while ( v22 < v3->numClientBones );
      v4 = animInfo;
      p_animPartBits = v80;
    }
  }
  if ( ((unsigned __int8)mat & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3569, ASSERT_TYPE_ASSERT, "(!(reinterpret_cast< size_t >( mat ) & 15))", (const char *)&queryFormat, "!(reinterpret_cast< size_t >( mat ) & 15)") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v3->skel.partBits.anim, v5);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v4->ignorePartBits, p_animPartBits);
  ClientBoneOffset = (int)DObjGetClientBoneOffset(v3);
  v26 = DObjNumClientOnlyBones(v3);
  v27 = &v3->skel.mat[ClientBoneOffset];
  v28 = v26;
  v78 = v27;
  if ( (v4->ignorePartBits.array[7] & 2) == 0 )
  {
    if ( (v3->skel.partBits.skel.array[7] & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3585, ASSERT_TYPE_ASSERT, "(!obj->skel.partBits.skel.testClientBit())", (const char *)&queryFormat, "!obj->skel.partBits.skel.testClientBit()") )
      __debugbreak();
    if ( !DObjHasClientFlag(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3586, ASSERT_TYPE_ASSERT, "(DObjHasClientFlag( obj ))", (const char *)&queryFormat, "DObjHasClientFlag( obj )") )
      __debugbreak();
    if ( (int)v28 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3587, ASSERT_TYPE_ASSERT, "(numClientBones > 0)", (const char *)&queryFormat, "numClientBones > 0") )
      __debugbreak();
    memset_0(v27, 0, 32 * v28);
  }
  p_anims = (const XAnim_s **)&v3->tree->anims;
  v83 = p_anims;
  if ( p_anims && *((_WORD *)p_anims + 10) )
  {
    v4->masterBlendShapeWeight = 0.0;
    memset_0(v4->tmpBlendShapeWeights, 0, 4i64 * v3->blendShapeWeightCount);
    v30 = DCONST_DVARFLT_xanim_lodOverride;
    LOWORD(v31) = *((_WORD *)p_anims + 17);
    if ( !DCONST_DVARFLT_xanim_lodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodOverride") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.value >= 0.0 )
    {
      v32 = DCONST_DVARFLT_xanim_lodOverride;
      if ( !DCONST_DVARFLT_xanim_lodOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodOverride") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v32);
      v33 = I_fclamp(v32->current.value, 0.0, 255.0);
      v31 = (int)(float)(*(float *)&v33 * 256.0);
    }
    if ( *((_BYTE *)p_anims + 26) != 1 || !(_WORD)v31 )
      goto LABEL_115;
    v34 = DCONST_DVARBOOL_xanim_lodEnable;
    if ( !DCONST_DVARBOOL_xanim_lodEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_lodEnable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    if ( v34->current.enabled )
    {
      v35 = (__int16)v31 / 256;
      if ( (v35 < 0 || (unsigned int)v35 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v35, "signed", v35) )
        __debugbreak();
      v36 = (float)(unsigned __int8)v31 * 0.00390625;
    }
    else
    {
LABEL_115:
      v36 = 0.0;
      LOBYTE(v35) = 0;
    }
    v4->lod = v35;
    v37 = (volatile signed __int32 *)p_anims + 3;
    v4->lodFraction = v36;
    if ( (((_BYTE)p_anims + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (char *)p_anims + 12) )
      __debugbreak();
    _InterlockedIncrement(v37);
    if ( *((_DWORD *)p_anims + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3625, ASSERT_TYPE_ASSERT, "(!tree->modifyRefCount)", (const char *)&queryFormat, "!tree->modifyRefCount") )
      __debugbreak();
    v38 = 0;
    v39 = v4->ignorePartBits.array[7] | 1;
    v4->ignorePartBits.array[7] = v39;
    if ( (v39 & 2) == 0 )
    {
      v40 = DCONST_DVARBOOL_xanim_enableClientOnlyBoneAnimation;
      if ( !DCONST_DVARBOOL_xanim_enableClientOnlyBoneAnimation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableClientOnlyBoneAnimation") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      if ( !v40->current.enabled )
      {
        v4->ignorePartBits.array[7] |= 2u;
        v38 = 1;
      }
    }
    if ( *((_BYTE *)p_anims + 24) )
      XAnimTreeUpdateParameters(v3);
    v41 = GetAnimInfo(*((_WORD *)p_anims + 10));
    if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3651, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    v79.rotTransArray = v3->skel.mat;
    v79.isEmpty = 1;
    v79.refCount = 1;
    XAnimCalc(v4, v3, v41, 1.0, 0, &v79, LINEAR);
    if ( *((_DWORD *)p_anims + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3660, ASSERT_TYPE_ASSERT, "(!tree->modifyRefCount)", (const char *)&queryFormat, "!tree->modifyRefCount") )
      __debugbreak();
    if ( (((_BYTE)p_anims + 12) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (char *)p_anims + 12) )
      __debugbreak();
    _InterlockedDecrement(v37);
    if ( v38 )
      v4->ignorePartBits.array[7] &= ~2u;
  }
  v42 = 0i64;
  v43 = 0;
  v71 = 0;
  DObjGetClientBoneOffset(v3);
  v44 = v3->skel.mat;
  v79.rotTransArray = v44;
  if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3674, ASSERT_TYPE_ASSERT, "(mat)", (const char *)&queryFormat, "mat") )
    __debugbreak();
  models = (const char ***)v3->models;
  v76 = models;
  if ( !models && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3678, ASSERT_TYPE_ASSERT, "(obj->models != 0)", (const char *)&queryFormat, "obj->models != NULL") )
    __debugbreak();
  v74 = 0;
  if ( v3->numModels )
  {
    do
    {
      v46 = *models;
      v72 = *models;
      v47 = *((unsigned __int8 *)*models + 21);
      if ( *((_BYTE *)*models + 21) )
      {
        v48 = (_DWORD *)&v44->trans.v[2];
        do
        {
          if ( v43 >= 0x100 )
          {
            LODWORD(calcMode) = 256;
            LODWORD(destBuffer) = v43;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
              __debugbreak();
          }
          v49 = (unsigned __int64)v43 >> 5;
          v50 = 0x80000000 >> (v43 & 0x1F);
          if ( (v50 & v80->array[v49]) != 0 )
          {
            if ( v43 >= 0x100 )
            {
              LODWORD(calcMode) = 256;
              LODWORD(destBuffer) = v43;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
                __debugbreak();
            }
            if ( (v50 & p_skel->partBits.anim.array[v49]) != 0 )
            {
              if ( (int)v43 >= v82->numBones )
              {
                LODWORD(calcMode) = v74;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3692, ASSERT_TYPE_ASSERT, "(boneIndex < obj->numBones)", "%s\n\tmodel %d: '%s'", "boneIndex < obj->numBones", calcMode, **models) )
                  __debugbreak();
              }
              if ( (LODWORD(v44->quat.v[0]) & 0x7F800000) == 2139095040 || (*(v48 - 5) & 0x7F800000) == 2139095040 || (*(v48 - 4) & 0x7F800000) == 2139095040 || (*(v48 - 3) & 0x7F800000) == 2139095040 )
              {
                LODWORD(destBuffer) = v74;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3693, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) ) )", "model %d: '%s'", destBuffer, **models) )
                  __debugbreak();
              }
              if ( (*(v48 - 2) & 0x7F800000) == 2139095040 || (*(v48 - 1) & 0x7F800000) == 2139095040 || (*v48 & 0x7F800000) == 2139095040 )
              {
                LODWORD(destBuffer) = v74;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3694, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->trans )[0] ) && !IS_NAN( ( mat->trans )[1] ) && !IS_NAN( ( mat->trans )[2] ) ) )", "model %d: '%s'", destBuffer, **models) )
                  __debugbreak();
              }
            }
            v42 = 0i64;
          }
          else
          {
            v42 = 0i64;
            v44->quat.v[0] = 0.0;
            *(_QWORD *)(v48 - 5) = 0i64;
            *(_QWORD *)(v48 - 3) = 1065353216i64;
            *(_QWORD *)(v48 - 1) = 0i64;
            v48[1] = 0;
          }
          ++v44;
          v48 += 8;
          ++v43;
          --v47;
        }
        while ( v47 );
        v46 = v72;
        v79.rotTransArray = v44;
        v71 = v43;
        LOBYTE(v47) = *((_BYTE *)v72 + 21);
      }
      _R15 = v46[21];
      v52 = *((unsigned __int8 *)v46 + 20) - (unsigned __int8)v47;
      if ( v52 )
      {
        rotTransArray = v79.rotTransArray;
        v54 = &v79.rotTransArray->trans.v[2];
        do
        {
          if ( v43 >= 0x100 )
          {
            LODWORD(calcMode) = 256;
            LODWORD(destBuffer) = v43;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
              __debugbreak();
          }
          v55 = (unsigned __int64)v43 >> 5;
          v56 = 0x80000000 >> (v43 & 0x1F);
          if ( (v56 & v80->array[v55]) != 0 )
          {
            if ( v43 >= 0x100 )
            {
              LODWORD(calcMode) = 256;
              LODWORD(destBuffer) = v43;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", destBuffer, calcMode) )
                __debugbreak();
            }
            if ( (v56 & p_skel->partBits.anim.array[v55]) != 0 )
            {
              if ( (LODWORD(rotTransArray->quat.v[0]) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v54 - 5) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v54 - 4) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v54 - 3) & 0x7F800000) == 2139095040 )
              {
                v57 = v74;
                LODWORD(destBuffer) = v74;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3719, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) ) )", "model %d: '%s'", destBuffer, **v76) )
                  __debugbreak();
              }
              else
              {
                v57 = v74;
              }
              if ( (*(_DWORD *)(v54 - 2) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v54 - 1) & 0x7F800000) == 2139095040 || (*(_DWORD *)v54 & 0x7F800000) == 2139095040 )
              {
                LODWORD(destBuffer) = v57;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3720, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->trans )[0] ) && !IS_NAN( ( mat->trans )[1] ) && !IS_NAN( ( mat->trans )[2] ) ) )", "model %d: '%s'", destBuffer, **v76) )
                  __debugbreak();
              }
            }
            v42 = 0i64;
          }
          else
          {
            __asm
            {
              vlddqu  xmm0, xmmword ptr [r15]
              vpmovsxwd xmm1, xmm0
            }
            v42 = 0i64;
            rotTransArray->quat = (vec4_t)_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
            *((_QWORD *)v54 - 1) = 0i64;
            *(_QWORD *)v54 = 0i64;
            if ( (LODWORD(rotTransArray->quat.v[0]) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v54 - 5) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v54 - 4) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v54 - 3) & 0x7F800000) == 2139095040 )
            {
              LODWORD(destBuffer) = v74;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3732, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) ) )", "model %d: '%s'", destBuffer, **v76) )
                __debugbreak();
            }
          }
          ++rotTransArray;
          v54 += 8;
          ++v43;
          _R15 += 8;
          --v52;
        }
        while ( v52 );
        v46 = v72;
        v79.rotTransArray = rotTransArray;
        v71 = v43;
      }
      v58 = *((_WORD *)v46 + 11);
      if ( (animInfo->ignorePartBits.array[7] & 2) != 0 )
      {
        if ( (p_skel->partBits.anim.array[7] & 2) != 0 && v58 )
        {
          v59 = (_DWORD *)&v78->quat.v[2];
          do
          {
            if ( (*(v59 - 2) & 0x7F800000) == 2139095040 || (*(v59 - 1) & 0x7F800000) == 2139095040 || (*v59 & 0x7F800000) == 2139095040 || (v59[1] & 0x7F800000) == 2139095040 )
            {
              LODWORD(destBuffer) = v74;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3745, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( clientMat[i].quat )[0] ) && !IS_NAN( ( clientMat[i].quat )[1] ) && !IS_NAN( ( clientMat[i].quat )[2] ) && !IS_NAN( ( clientMat[i].quat )[3] ) ) )", "model %d: '%s'", destBuffer, **v76) )
                __debugbreak();
            }
            if ( (v59[2] & 0x7F800000) == 2139095040 || (v59[3] & 0x7F800000) == 2139095040 || (v59[4] & 0x7F800000) == 2139095040 )
            {
              LODWORD(destBuffer) = v74;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3746, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( clientMat[i].trans )[0] ) && !IS_NAN( ( clientMat[i].trans )[1] ) && !IS_NAN( ( clientMat[i].trans )[2] ) ) )", "model %d: '%s'", destBuffer, **v76) )
                __debugbreak();
            }
            ++v42;
            v59 += 8;
          }
          while ( v42 < v58 );
          v43 = v71;
        }
        v78 += v58;
      }
      else
      {
        v62 = v58;
        if ( v58 )
        {
          v63 = v78;
          do
          {
            v64.m128_i32[0] = LODWORD(v63->quat.v[0]);
            if ( (float)((float)((float)((float)(v64.m128_f32[0] * v64.m128_f32[0]) + (float)(v63->quat.v[1] * v63->quat.v[1])) + (float)(v63->quat.v[2] * v63->quat.v[2])) + (float)(v63->quat.v[3] * v63->quat.v[3])) == 0.0 )
            {
              __asm
              {
                vlddqu  xmm0, xmmword ptr [r15]
                vpmovsxwd xmm1, xmm0
              }
              v64 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
              v63->quat = (vec4_t)v64;
            }
            if ( (v64.m128_i32[0] & 0x7F800000) == 2139095040 || (LODWORD(v63->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v63->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v63->quat.v[3]) & 0x7F800000) == 2139095040 )
            {
              LODWORD(destBuffer) = v74;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3766, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( clientMat->quat )[0] ) && !IS_NAN( ( clientMat->quat )[1] ) && !IS_NAN( ( clientMat->quat )[2] ) && !IS_NAN( ( clientMat->quat )[3] ) ) )", "model %d: '%s'", destBuffer, **v76) )
                __debugbreak();
            }
            ++v63;
            _R15 += 8;
            --v62;
          }
          while ( v62 );
          v43 = v71;
          v78 = v63;
        }
      }
      v42 = 0i64;
      v3 = v82;
      models = v76 + 1;
      v44 = v79.rotTransArray;
      ++v74;
      ++v76;
    }
    while ( v74 < v82->numModels );
  }
  if ( !DObjHasProceduralBones(v3) || v83 && XAnimFindPublicNodeByTypeName(*v83, scr_const.proc_node, NULL) )
  {
    v67 = animInfo;
  }
  else
  {
    v67 = animInfo;
    v84.rotTransArray = v3->skel.mat;
    v84.isEmpty = 0;
    v84.refCount = 1;
    XAnimWorldTransformCache_Clear(animInfo->worldTransformCache);
    XAnimProcNode_Calc(NULL, animInfo, v3, NULL, 1.0, 0, &v84);
  }
  if ( v73 )
  {
    v3->skel.partBits.blendShapesCalculated = 1;
    if ( v67->masterBlendShapeWeight <= 0.0 )
    {
      BlendShapeTargetWeights = DObjGetBlendShapeTargetWeights(v3);
      memset_0(BlendShapeTargetWeights, 0, 4i64 * v3->blendShapeTargetCount);
    }
    else
    {
      XAnim_CalculateBlendShapeTargetWeights(v3, v67->tmpBlendShapeWeights);
    }
  }
LABEL_247:
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
  unsigned int v8; 
  const XModel *v9; 
  int SkelBoneIndex; 
  int v11; 
  int numBones; 
  int v13; 
  int numRootBones; 
  int v15; 
  float *trans; 
  __int128 v22; 
  __int128 v25; 

  obj = iter->obj;
  modelIndex = iter->modelIndex;
  v8 = (unsigned int)iter->boneIndex >> 15;
  v9 = obj->models[modelIndex];
  SkelBoneIndex = DObjGetSkelBoneIndex(obj, iter->boneIndex);
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
  if ( v13 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2506, ASSERT_TYPE_ASSERT, "(localBoneIndex >= 0)", (const char *)&queryFormat, "localBoneIndex >= 0") )
    __debugbreak();
  numRootBones = v9->numRootBones;
  if ( v13 >= numRootBones )
  {
    v15 = v13 - numRootBones;
    _RCX = 4 * v15;
    _RAX = v9->quats;
    __asm
    {
      vlddqu  xmm0, xmmword ptr [rax+rcx*2]
      vpmovsxwd xmm1, xmm0
    }
    trans = v9->trans;
    outQuat->v = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
    HIDWORD(v25) = 0;
    v22 = v25;
    *(float *)&v22 = trans[3 * v15];
    _XMM3 = v22;
    __asm
    {
      vinsertps xmm3, xmm3, xmm1, 10h
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    }
    *outTrans = (float4)_XMM3.v;
  }
  else
  {
    *outQuat = (float4)g_unit.v;
    *outTrans = 0i64;
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
  unsigned int v7; 
  const XModel *v8; 
  int SkelBoneIndex; 
  int v10; 
  int numBones; 
  int v12; 
  int numRootBones; 
  __int128 v15; 
  __int128 v19; 

  modelIndex = iter->modelIndex;
  obj = iter->obj;
  boneIndex = iter->boneIndex;
  v7 = boneIndex >> 15;
  v8 = obj->models[modelIndex];
  SkelBoneIndex = DObjGetSkelBoneIndex(obj, boneIndex);
  if ( (v7 & 1) != 0 )
  {
    v10 = iter->startIndexClient[modelIndex];
    numBones = v8->numBones;
  }
  else
  {
    v10 = iter->startIndex[modelIndex];
    numBones = 0;
  }
  v12 = SkelBoneIndex + numBones - v10;
  if ( v12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2471, ASSERT_TYPE_ASSERT, "(localBoneIndex >= 0)", (const char *)&queryFormat, "localBoneIndex >= 0") )
    __debugbreak();
  numRootBones = v8->numRootBones;
  if ( v12 >= numRootBones )
  {
    HIDWORD(v19) = 0;
    v15 = v19;
    *(float *)&v15 = v8->trans[3 * (v12 - numRootBones)];
    _XMM3 = v15;
    __asm
    {
      vinsertps xmm3, xmm3, xmm1, 10h
      vinsertps xmm3, xmm3, xmm2, 20h ; ' '
    }
    *result = (float4)_XMM3.v;
  }
  else
  {
    *result = 0i64;
  }
  return result;
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
void XAnimAccumulateBuffer(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, float weightScale, const XAnimCalcBuffer *srcBuffer, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  int v9; 
  __int64 v10; 
  DObjAnimMat *rotTransArray; 
  unsigned int i; 
  __int64 v13; 
  unsigned int v14; 
  DObjAnimMat *v15; 
  signed __int64 v16; 
  __int64 v17; 
  signed __int64 v18; 
  __int64 v19; 
  signed __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  v9 = DObjNumBones(obj);
  v10 = (unsigned int)DObjNumClientOnlyBones(obj);
  if ( srcBuffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2097, ASSERT_TYPE_ASSERT, "(!srcBuffer->isEmpty)", (const char *)&queryFormat, "!srcBuffer->isEmpty") )
    __debugbreak();
  if ( destBuffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2098, ASSERT_TYPE_ASSERT, "(!destBuffer->isEmpty)", (const char *)&queryFormat, "!destBuffer->isEmpty") )
    __debugbreak();
  rotTransArray = destBuffer->rotTransArray;
  if ( srcBuffer == destBuffer )
  {
    for ( i = 0; (int)i < v9; ++rotTransArray )
    {
      if ( i >= 0x100 )
      {
        LODWORD(v23) = 256;
        LODWORD(v22) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (i & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)i >> 5]) == 0 )
        XAnimNormalizeRotTrans(rotTransArray, weightScale);
      ++i;
    }
    if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v10 > 0 )
    {
      v13 = v10;
      do
      {
        XAnimNormalizeRotTrans(rotTransArray++, weightScale);
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
    v14 = 0;
    v15 = srcBuffer->rotTransArray;
    if ( calcMode == EASE_IN_QUAD )
    {
      if ( v9 > 0 )
      {
        do
        {
          if ( v14 >= 0x100 )
          {
            LODWORD(v23) = 256;
            LODWORD(v22) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v14 & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)v14 >> 5]) == 0 )
            XAnimOverlayRotTrans_1_(weightScale, v15, rotTransArray);
          ++v14;
          ++v15;
          ++rotTransArray;
        }
        while ( (int)v14 < v9 );
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v10 > 0 )
      {
        v16 = (char *)v15 - (char *)rotTransArray;
        do
        {
          XAnimOverlayRotTrans_1_(weightScale, (DObjAnimMat *)((char *)rotTransArray + v16), rotTransArray);
          ++rotTransArray;
        }
        while ( v17 != 1 );
      }
    }
    else if ( calcMode == EASE_OUT_QUAD )
    {
      if ( v9 > 0 )
      {
        do
        {
          if ( v14 >= 0x100 )
          {
            LODWORD(v23) = 256;
            LODWORD(v22) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v14 & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)v14 >> 5]) == 0 )
            XAnimMadRotTrans_1_(v15, rotTransArray, weightScale);
          ++v14;
          ++v15;
          ++rotTransArray;
        }
        while ( (int)v14 < v9 );
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v10 > 0 )
      {
        v18 = (char *)v15 - (char *)rotTransArray;
        v19 = v10;
        do
        {
          XAnimMadRotTrans_1_((DObjAnimMat *)((char *)rotTransArray + v18), rotTransArray, weightScale);
          ++rotTransArray;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      if ( v9 > 0 )
      {
        do
        {
          if ( v14 >= 0x100 )
          {
            LODWORD(v23) = 256;
            LODWORD(v22) = v14;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v14 & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)v14 >> 5]) == 0 )
            XAnimMadRotTrans_0_(v15, rotTransArray, weightScale);
          ++v14;
          ++v15;
          ++rotTransArray;
        }
        while ( (int)v14 < v9 );
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v10 > 0 )
      {
        v20 = (char *)v15 - (char *)rotTransArray;
        v21 = v10;
        do
        {
          XAnimMadRotTrans_0_((DObjAnimMat *)((char *)rotTransArray + v20), rotTransArray, weightScale);
          ++rotTransArray;
          --v21;
        }
        while ( v21 );
      }
    }
  }
}

/*
==============
XAnimAccumulateBufferWithoutNormalization
==============
*/

void __fastcall XAnimAccumulateBufferWithoutNormalization(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, double weightScale, const XAnimCalcBuffer *srcBuffer, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  __m128 v8; 
  int v10; 
  __int64 v11; 
  DObjAnimMat *rotTransArray; 
  unsigned int v13; 
  float *v14; 
  float *v15; 
  __int64 v16; 
  DObjAnimMat *v17; 
  unsigned int i; 
  signed __int64 v19; 
  __int64 v20; 
  DObjAnimMat *totalRotTrans; 
  __int64 v22; 

  v8 = _mm_shuffle_ps(*(__m128 *)&weightScale, *(__m128 *)&weightScale, 0);
  v10 = DObjNumBones(obj);
  v11 = (unsigned int)DObjNumClientOnlyBones(obj);
  if ( srcBuffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2121, ASSERT_TYPE_ASSERT, "(!srcBuffer->isEmpty)", (const char *)&queryFormat, "!srcBuffer->isEmpty") )
    __debugbreak();
  if ( destBuffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2122, ASSERT_TYPE_ASSERT, "(!destBuffer->isEmpty)", (const char *)&queryFormat, "!destBuffer->isEmpty") )
    __debugbreak();
  rotTransArray = destBuffer->rotTransArray;
  if ( srcBuffer == destBuffer )
  {
    if ( v8.m128_f32[0] != 1.0 )
    {
      v13 = 0;
      if ( v10 > 0 )
      {
        v14 = &rotTransArray->trans.v[2];
        do
        {
          if ( v13 >= 0x100 )
          {
            LODWORD(v22) = 256;
            LODWORD(totalRotTrans) = v13;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", totalRotTrans, v22) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v13 & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)v13 >> 5]) == 0 )
          {
            rotTransArray->quat.v[0] = v8.m128_f32[0] * rotTransArray->quat.v[0];
            *(__m128 *)(v14 - 5) = _mm128_mul_ps(v8, *(__m128 *)(v14 - 5));
            *(v14 - 1) = v8.m128_f32[0] * *(v14 - 1);
            *v14 = v8.m128_f32[0] * *v14;
            v14[1] = v8.m128_f32[0] * v14[1];
          }
          ++v13;
          ++rotTransArray;
          v14 += 8;
        }
        while ( (int)v13 < v10 );
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v11 > 0 )
      {
        v15 = &rotTransArray->trans.v[2];
        v16 = v11;
        do
        {
          *(__m128 *)(v15 - 6) = _mm128_mul_ps(v8, *(__m128 *)(v15 - 6));
          *(__m128 *)(v15 - 2) = _mm128_mul_ps(v8, *(__m128 *)(v15 - 2));
          v15 += 8;
          --v16;
        }
        while ( v16 );
      }
    }
  }
  else
  {
    v17 = srcBuffer->rotTransArray;
    if ( calcMode == EASE_IN_QUAD )
    {
      for ( i = 0; (int)i < v10; ++rotTransArray )
      {
        if ( i >= 0x100 )
        {
          LODWORD(v22) = 256;
          LODWORD(totalRotTrans) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", totalRotTrans, v22) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (i & 0x1F)) & animCalcInfo->ignorePartBits.array[(unsigned __int64)i >> 5]) == 0 )
          XAnimOverlayRotTrans_0_(v8.m128_f32[0], v17, rotTransArray);
        ++i;
        ++v17;
      }
      if ( (animCalcInfo->ignorePartBits.array[7] & 2) == 0 && (int)v11 > 0 )
      {
        v19 = (char *)v17 - (char *)rotTransArray;
        do
        {
          XAnimOverlayRotTrans_0_(v8.m128_f32[0], (DObjAnimMat *)((char *)rotTransArray + v19), rotTransArray);
          ++rotTransArray;
        }
        while ( v20 != 1 );
      }
    }
    else if ( calcMode == EASE_OUT_QUAD )
    {
      XAnimMadRotTransArrayWithoutNormalization_1_(v10, v11, animCalcInfo, v8.m128_f32[0], v17, rotTransArray);
    }
    else
    {
      XAnimMadRotTransArrayWithoutNormalization_0_(v10, v11, animCalcInfo, v8.m128_f32[0], v17, rotTransArray);
    }
  }
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
  __m128 v3; 
  __m128 v7; 
  __m128 v8; 
  __m128 v9; 
  vec4_t quat; 
  __m128 v11; 
  __m128 v12; 
  __m128 v13; 
  __m128 v14; 
  __m128 v18; 

  v3 = *(__m128 *)&weightScale;
  if ( (float)((float)((float)((float)(additiveArray->quat.v[0] * additiveArray->quat.v[0]) + (float)(additiveArray->quat.v[1] * additiveArray->quat.v[1])) + (float)(additiveArray->quat.v[2] * additiveArray->quat.v[2])) + (float)(additiveArray->quat.v[3] * additiveArray->quat.v[3])) != 0.0 )
  {
    _XMM0 = _mm128_mul_ps((__m128)additiveArray->quat, (__m128)additiveArray->quat);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    v7 = _mm_sqrt_ps(_XMM0);
    v8 = _mm128_div_ps((__m128)additiveArray->quat, v7);
    v9 = _mm_shuffle_ps(v8, v8, 255);
    quat = rotTransArray->quat;
    v11 = _mm128_mul_ps(_mm_shuffle_ps(v3, v3, 0), v7);
    v12 = _mm128_mul_ps(v11, v8);
    v13 = _mm_shuffle_ps(v12, _mm_shuffle_ps(v12, _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v9, (__m128)(*(_OWORD *)&v9 & *(_OWORD *)&g_negativeZero.v | _xmm)), v11), (__m128)(*(_OWORD *)&v9 & *(_OWORD *)&g_negativeZero.v | _xmm)), 250), 132);
    v14 = _mm_shuffle_ps(v13, v13, 255);
    _XMM1 = _mm128_mul_ps((__m128)rotTransArray->quat, v13);
    __asm
    {
      vinsertps xmm0, xmm1, xmm1, 8
      vhaddps xmm2, xmm0, xmm0
    }
    v18 = _mm_shuffle_ps((__m128)quat, (__m128)quat, 255);
    __asm { vhaddps xmm3, xmm2, xmm2 }
    _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v14, v18), _XMM3);
    _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps((__m128)quat, (__m128)quat, 201), _mm_shuffle_ps(v13, v13, 210)), _mm128_mul_ps(_mm_shuffle_ps((__m128)quat, (__m128)quat, 210), _mm_shuffle_ps(v13, v13, 201))), _mm128_add_ps(_mm128_mul_ps((__m128)rotTransArray->quat, v14), _mm128_mul_ps(v18, v13)));
    __asm { vblendps xmm2, xmm2, xmm0, 7 }
    rotTransArray->quat = _XMM2;
  }
}

/*
==============
XAnimBoneChain_CreateForWorldTransformCalc
==============
*/
__int64 XAnimBoneChain_CreateForWorldTransformCalc(XAnimBoneChain *chain, const DObj *obj, unsigned __int16 boneIndex, XAnimWorldTransformCache *transformCache)
{
  unsigned int v7; 
  int v8; 
  float4 *basePoseTranslationWithScale; 
  unsigned __int16 *boneIndices; 
  const DObj *v11; 
  __int64 v12; 
  __int64 modelIndex; 
  const XModel *v14; 
  __m128 scale_low; 
  bool v16; 
  const dvar_t *v17; 
  bool v18; 
  int v19; 
  __int64 result; 
  __int64 v21; 
  __int64 v22; 
  float4 outTrans; 
  DObjHierarchyIterator iter; 

  v7 = 0;
  v8 = DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
  if ( v8 != 255 )
  {
    basePoseTranslationWithScale = chain->basePoseTranslationWithScale;
    boneIndices = chain->boneIndices;
    do
    {
      if ( v7 >= 0x80 )
      {
        LODWORD(v22) = 128;
        LODWORD(v21) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2874, ASSERT_TYPE_ASSERT, "(unsigned)( hierarchyBoneIndex ) < (unsigned)( ( sizeof( *array_counter( chain->boneIndices ) ) + 0 ) )", "hierarchyBoneIndex doesn't index ARRAY_COUNT( chain->boneIndices )\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( (v8 < 0 || (unsigned int)v8 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v8, "signed", v8) )
        __debugbreak();
      v11 = iter.obj;
      v12 = iter.boneIndex;
      modelIndex = iter.modelIndex;
      *boneIndices = v8;
      v14 = v11->models[modelIndex];
      if ( (v12 & 0x8000) != 0 || ((0x80000000 >> (v12 & 0x1F)) & v14->noScalePartBits[v12 >> 5]) == 0 )
        scale_low = (__m128)LODWORD(v14->scale);
      else
        scale_low = (__m128)LODWORD(FLOAT_1_0);
      DObjHierarchyIterator_GetBasePoseRotTrans(&iter, &chain->basePoseRotation[v7], &outTrans);
      outTrans.v = _mm_shuffle_ps(outTrans.v, _mm_shuffle_ps(outTrans.v, _mm_shuffle_ps(scale_low, scale_low, 0), 250), 132);
      *basePoseTranslationWithScale = (float4)outTrans.v;
      if ( (v8 < 0 || (unsigned int)v8 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v8, "signed", v8) )
        __debugbreak();
      if ( (v8 & 0x8000u) == 0 )
      {
        if ( transformCache )
        {
          if ( (unsigned __int16)v8 >= 0xFEu )
          {
            LODWORD(v22) = 254;
            LODWORD(v21) = (unsigned __int16)v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( DOBJ_MAX_PARTS )", "boneIndex doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", v21, v22) )
              __debugbreak();
          }
          v16 = bitarray_base<bitarray<256>>::testBit(&transformCache->partBits, (unsigned __int16)v8);
        }
        else
        {
          v17 = DCONST_DVARBOOL_xanim_enableTransformCache;
          if ( !DCONST_DVARBOOL_xanim_enableTransformCache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_enableTransformCache") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v17);
          if ( v17->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 95, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DCONST_DVARBOOL_xanim_enableTransformCache, \"xanim_enableTransformCache\" ))", (const char *)&queryFormat, "!Dconst_GetBool( xanim_enableTransformCache )") )
            __debugbreak();
          v16 = 0;
        }
      }
      else
      {
        v16 = 0;
      }
      if ( (v8 & 0x8000) != 0 )
      {
        v18 = (obj->skel.partBits.skel.array[7] & 2) != 0;
      }
      else
      {
        if ( (unsigned int)v8 >= 0x100 )
        {
          LODWORD(v22) = 256;
          LODWORD(v21) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v21, v22) )
            __debugbreak();
        }
        v18 = ((0x80000000 >> (v8 & 0x1F)) & obj->skel.partBits.skel.array[(unsigned __int64)(unsigned int)v8 >> 5]) != 0;
      }
      if ( v18 || v16 )
        v16 = 1;
      v19 = DObjHierarchyIterator_NextParent(&iter);
      ++v7;
      ++boneIndices;
      ++basePoseTranslationWithScale;
      v8 = v19;
    }
    while ( !v16 && v19 != 255 );
  }
  chain->length = v7;
  result = v7;
  chain->includesRoot = v8 == 255;
  return result;
}

/*
==============
XAnimBoneChain_GetTransform
==============
*/
void XAnimBoneChain_GetTransform(const XAnimBoneChain *chain, const DObj *obj, const DObjPartBits *ignorePartBits, const XAnimCalcBuffer *buffer, int chainBoneIndex, const XAnimWorldTransformCache *transformCache, float4 *outRotation, float4 *outTranslation)
{
  __int128 v8; 
  float4 *v9; 
  unsigned int length; 
  unsigned __int64 v15; 
  __int64 SkelBoneIndex; 
  bool v21; 
  bool v22; 
  const DObjAnimMat *v23; 
  const float4 *v24; 
  __int64 v25; 
  DObjAnimMat *v26; 
  float4 *v31; 
  bool v38; 
  __int64 v39; 
  __int64 v40; 
  float4 v41; 
  float4 *v42; 
  float4 outRotationQuat; 
  __int128 v44; 

  v9 = outRotation;
  _RDI = chain;
  v42 = outTranslation;
  length = chain->length;
  v41.v.m128_u64[0] = (unsigned __int64)outRotation;
  if ( chainBoneIndex >= length && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2909, ASSERT_TYPE_ASSERT, "(unsigned)( chainBoneIndex ) < (unsigned)( chain->length )", "chainBoneIndex doesn't index chain->length\n\t%i not in [0, %i)", chainBoneIndex, length) )
    __debugbreak();
  LOWORD(v15) = _RDI->boneIndices[chainBoneIndex];
  if ( !XAnimWorldTransformCache_HasBoneTransform(transformCache, v15) )
  {
    v15 = (unsigned __int16)v15;
    v44 = v8;
    _XMM6 = _RDI->basePoseRotation[chainBoneIndex].v;
    _RAX = 2 * (chainBoneIndex + 128i64);
    _XMM7 = _RDI->basePoseTranslationWithScale[chainBoneIndex].v;
    __asm { vbroadcastss xmm8, dword ptr [rdi+rax*8+0Ch] }
    SkelBoneIndex = DObjGetSkelBoneIndex(obj, (unsigned __int16)v15);
    v21 = XAnimTestPartBit(&obj->skel.partBits.control, (unsigned __int16)v15);
    v22 = XAnimTestPartBit(&obj->skel.partBits.skel, (unsigned __int16)v15);
    if ( XAnimTestPartBit(&obj->skel.partBits.anim, (unsigned __int16)v15) )
    {
      if ( !v21 )
      {
        v25 = SkelBoneIndex;
        if ( v22 )
        {
          v26 = &obj->skel.mat[v25];
          _XMM7 = *(__m128 *)v26->trans.v;
        }
        else
        {
          if ( XAnimTestPartBit(ignorePartBits, v15) )
            buffer = (const XAnimCalcBuffer *)&obj->skel.mat;
          v26 = &buffer->rotTransArray[v25];
          _XMM4 = 0i64;
          _XMM3 = *(__m128 *)v26->trans.v;
          _XMM2 = _mm_shuffle_ps(_XMM3, _XMM3, 255);
          __asm { vrcpps  xmm0, xmm2 }
          _mm128_mul_ps(_XMM0, _XMM3);
          __asm
          {
            vcmpltps xmm0, xmm4, xmm2
            vblendvps xmm1, xmm3, xmm1, xmm0
          }
          _XMM7 = _mm128_add_ps(_mm128_mul_ps(_XMM1, _XMM8), _XMM7);
        }
        XAnimGetNormalizedRotation((float4 *)v26, v23, v24);
LABEL_11:
        v9 = (float4 *)v41.v.m128_u64[0];
        goto LABEL_12;
      }
    }
    else if ( !v21 )
    {
LABEL_24:
      if ( (unsigned __int8)((unsigned int)v15 >> 15) )
      {
        v38 = (obj->skel.partBits.skel.array[7] & 2) != 0;
      }
      else
      {
        if ( (unsigned int)v15 >= 0x100 )
        {
          LODWORD(v40) = 256;
          LODWORD(v39) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v39, v40) )
            __debugbreak();
        }
        v38 = ((0x80000000 >> (v15 & 0x1F)) & obj->skel.partBits.skel.array[v15 >> 5]) != 0;
      }
      if ( v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2974, ASSERT_TYPE_ASSERT, "(!XAnimTestPartBit( &obj->skel.partBits.skel, currentBoneIndex ))", (const char *)&queryFormat, "!XAnimTestPartBit( &obj->skel.partBits.skel, currentBoneIndex )") )
        __debugbreak();
      goto LABEL_11;
    }
    Com_PrintWarning(19, "XAnimGetLocalBoneTransform: bone controllers not yet supported, result may be incorrect\n");
    goto LABEL_24;
  }
  XAnimWorldTransformCache_GetBoneTransform(transformCache, v15, &outRotationQuat, &v41);
  _XMM7 = v41.v;
  _XMM6 = outRotationQuat.v;
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
  v31 = v42;
  *v9 = (float4)_XMM6;
  *v31 = (float4)_XMM7;
}

/*
==============
XAnimCalc
==============
*/
void XAnimCalc(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *info, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  XAnimTree *tree; 
  float v11; 
  const XAnim_s *SubTreeAnims; 
  unsigned __int8 numLods; 
  __int64 v14; 
  unsigned __int8 lod; 
  unsigned __int8 v16; 
  unsigned __int8 v17; 
  float lodFraction; 
  bool IsCustomCalcNode; 
  bool ShouldIgnoreClientOnlyNode; 
  bool isEmpty; 
  bool v22; 
  XAnimCalcBuffer *v23; 

  tree = obj->tree;
  v11 = weightScale;
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
  if ( !animInfo->lod )
    goto LABEL_27;
  if ( info->animToModel )
    goto LABEL_27;
  numLods = SubTreeAnims->numLods;
  if ( !numLods )
    goto LABEL_27;
  v14 = 2 * (info->animIndex + 5i64);
  lod = SubTreeAnims->entries[info->animIndex].lod;
  if ( lod == 5 )
    goto LABEL_27;
  if ( lod >= numLods )
  {
    LODWORD(v23) = lod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1906, ASSERT_TYPE_ASSERT, "(unsigned)( animEntry->lod ) < (unsigned)( anims->numLods )", "animEntry->lod doesn't index anims->numLods\n\t%i not in [0, %i)", v23, numLods) )
      __debugbreak();
  }
  v16 = animInfo->lod;
  v17 = *((_BYTE *)&SubTreeAnims->size + 8 * v14 + 1);
  if ( v16 <= v17 )
  {
    if ( v16 != v17 || (lodFraction = animInfo->lodFraction, lodFraction <= 0.0) || (v11 = weightScale * (float)(1.0 - lodFraction), v11 != 0.0) )
    {
LABEL_27:
      IsCustomCalcNode = XAnimIsCustomCalcNode(SubTreeAnims, info);
      ShouldIgnoreClientOnlyNode = XAnimShouldIgnoreClientOnlyNode(tree, info);
      if ( IsCustomCalcNode )
      {
        if ( !ShouldIgnoreClientOnlyNode )
        {
          isEmpty = destBuffer->isEmpty;
          v22 = bNormQuat || isEmpty;
          if ( isEmpty )
          {
            XAnimClearRotTransArray(obj, destBuffer->rotTransArray, &animInfo->ignorePartBits);
            destBuffer->isEmpty = 0;
          }
          XAnimWorldTransformCache_Clear(animInfo->worldTransformCache);
          XAnimCustomNodeCalc(animInfo, obj, info, v11, v22, destBuffer);
          return;
        }
LABEL_37:
        XAnimCalcDefaultBlendNode(animInfo, obj, info, v11, bNormQuat, destBuffer, calcMode);
        return;
      }
      if ( ShouldIgnoreClientOnlyNode )
        return;
      if ( !info->animToModel )
        goto LABEL_37;
      if ( destBuffer->isEmpty )
      {
        XAnimClearRotTransArray(obj, destBuffer->rotTransArray, &animInfo->ignorePartBits);
        destBuffer->isEmpty = 0;
      }
      XAnimCalcLeaf(info, v11, destBuffer->rotTransArray, animInfo, calcMode, obj);
    }
  }
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

  partBitsa = *partBits;
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
  const DObj *v9; 
  XAnimCalcAnimInfo *v10; 
  __int64 v11; 
  XAnimInfo *v12; 
  int v13; 
  __int64 rotTransArrayIndex; 
  int v15; 
  XAnimInfo *v16; 
  int v17; 
  float weight; 
  unsigned int v19; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v20; 
  XAnimCalcBuffer *v21; 
  int v22; 
  int v23; 
  DObjAnimMat *rotTransArray; 
  unsigned int v25; 
  DObjAnimMat *v26; 
  __int64 v27; 
  float *v28; 
  float *v29; 
  __int64 v30; 
  DObjAnimMat *v31; 
  DObjAnimMat *v32; 
  float *v33; 
  __int64 v34; 
  __int64 v35; 
  XAnimCalcBuffer *v36; 
  __int64 calcMode; 
  int v39; 
  __int64 infoa; 
  XAnimCalcBuffer calcBuffer; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > v44; 

  next = firstInfoIndex;
  tree = obj->tree;
  v9 = obj;
  v10 = animInfo;
  if ( !firstInfoIndex )
    return;
  LODWORD(v11) = 0;
  while ( 1 )
  {
    v12 = GetAnimInfo(next);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( (v12->animToModel || (v12->animParent.flags & 0x210) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3068, ASSERT_TYPE_ASSERT, "(IsInfoAdditive( childInfo ))", (const char *)&queryFormat, "IsInfoAdditive( childInfo )") )
      __debugbreak();
    if ( v12->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3071, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
      __debugbreak();
    if ( !v12->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3072, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
      __debugbreak();
    if ( v12->animToModel || (v13 = 1, (v12->animParent.flags & 0x200) == 0) )
      v13 = 0;
    if ( !multiply )
      break;
    if ( v13 )
      goto LABEL_23;
LABEL_24:
    next = v12->next;
    if ( !next )
      return;
  }
  if ( v13 )
    goto LABEL_24;
LABEL_23:
  if ( v12->state.weight == 0.0 )
    goto LABEL_24;
  if ( !next )
    return;
  rotTransArrayIndex = v10->rotTransArrayIndex;
  v15 = v10->rotTransArrayIndex + DObjTotalNumBones(v9);
  if ( v15 > 1524 )
  {
    Com_PrintWarning(19, "max calculation buffer exceeded\n");
    DObjDisplayAnim(v9, (const char *)&queryFormat.fmt + 3);
    return;
  }
  v10->rotTransArrayIndex = v15;
  calcBuffer.refCount = 1;
  calcBuffer.isEmpty = 1;
  calcBuffer.rotTransArray = &v10->rotTransArray[rotTransArrayIndex];
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v44, &v10->animPartBits);
  while ( 2 )
  {
    v16 = GetAnimInfo(next);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    if ( (v16->animToModel || (v16->animParent.flags & 0x210) == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3109, ASSERT_TYPE_ASSERT, "(IsInfoAdditive( childInfo ))", (const char *)&queryFormat, "IsInfoAdditive( childInfo )") )
      __debugbreak();
    if ( v16->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3112, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
      __debugbreak();
    if ( !v16->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3113, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
      __debugbreak();
    if ( v16->animToModel || (v17 = 1, (v16->animParent.flags & 0x200) == 0) )
      v17 = 0;
    if ( multiply )
    {
      if ( v17 )
        goto LABEL_50;
    }
    else if ( !v17 )
    {
LABEL_50:
      weight = v16->state.weight;
      if ( weight != 0.0 )
        XAnimCalc(v10, v9, v16, weight, 1, &calcBuffer, (XAnimNodeCalcMode)(2 * multiply));
    }
    next = v16->next;
    if ( next )
      continue;
    break;
  }
  if ( !calcBuffer.isEmpty )
  {
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::flipAllBits(&v44);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::andAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v44, &v10->animPartBits);
    v19 = 0;
    v20 = &v44;
    while ( !v20->array[0] )
    {
      ++v19;
      v20 = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)v20 + 4);
      if ( v19 >= 8 )
      {
        v21 = destBuffer;
        goto LABEL_59;
      }
    }
    v21 = destBuffer;
    XAnimSetRotTransToBasePose(destBuffer->rotTransArray, v9, (const DObjPartBits *)&v44);
    XAnimWarnAboutAdditivesAffectingNonAnimatedBones(v9, nodeInfo, (const DObjPartBits *)&v44);
LABEL_59:
    v39 = DObjNumClientOnlyBones(v9);
    v22 = v39;
    v23 = DObjNumBones(v9);
    rotTransArray = v21->rotTransArray;
    v25 = 0;
    v26 = calcBuffer.rotTransArray;
    v27 = v23;
    infoa = v23;
    if ( v23 > 0 )
    {
      v28 = &rotTransArray->trans.v[2];
      v11 = v23;
      v29 = &calcBuffer.rotTransArray->trans.v[2];
      do
      {
        if ( v25 >= 0x100 )
        {
          LODWORD(calcMode) = 256;
          LODWORD(v36) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v36, calcMode) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v25 & 0x1F)) & animInfo->ignorePartBits.array[(unsigned __int64)v25 >> 5]) == 0 )
        {
          XAnimApplyAdditiveRot(&rotTransArray[v25], &v26[v25], COERCE_DOUBLE((unsigned __int64)LODWORD(weightScale)));
          *(v28 - 2) = (float)(weightScale * *(v29 - 2)) + *(v28 - 2);
          *(v28 - 1) = (float)(weightScale * *(v29 - 1)) + *(v28 - 1);
          *v28 = (float)(weightScale * *v29) + *v28;
        }
        ++v25;
        v29 += 8;
        v28 += 8;
        --v11;
      }
      while ( v11 );
      v27 = infoa;
      v22 = v39;
    }
    if ( (animInfo->ignorePartBits.array[7] & 2) == 0 )
    {
      v30 = v27;
      v31 = &rotTransArray[v30];
      v32 = &v26[v30];
      if ( v22 > 0 )
      {
        do
        {
          XAnimApplyAdditiveRot(&v31[(int)v11], &v32[(int)v11], COERCE_DOUBLE((unsigned __int64)LODWORD(weightScale)));
          *(v33 - 1) = (float)(weightScale * *(float *)((char *)v33 + v34 - 4)) + *(v33 - 1);
          *v33 = (float)(weightScale * *(float *)((char *)v33 + v34)) + *v33;
          LODWORD(v11) = v11 + 1;
          v33[1] = (float)(weightScale * *(float *)((char *)v33 + v34 + 4)) + v33[1];
        }
        while ( v35 != 1 );
      }
    }
    v9 = obj;
    v10 = animInfo;
  }
  XAnimFreeCalcBuffer(v10, v9, &calcBuffer);
}

/*
==============
XAnimCalcDefaultBlendNode
==============
*/
void XAnimCalcDefaultBlendNode(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *info, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  unsigned __int16 v10; 

  v10 = XAnimCalcNonAdditiveChildren(animInfo, obj, info, weightScale, bNormQuat, destBuffer, calcMode);
  XAnimCalcAdditiveChildren(animInfo, obj, info, v10, weightScale, destBuffer, 1);
  XAnimCalcAdditiveChildren(animInfo, obj, info, v10, weightScale, destBuffer, 0);
}

/*
==============
XAnimCalcFinalizeBuffer
==============
*/
void XAnimCalcFinalizeBuffer(const XAnimCalcAnimInfo *animInfo, const DObj *obj, float weightScale, const XAnimCalcBuffer *calcBuffer, XAnimCalcBuffer *destBuffer, bool normalizeChildren, bool bNormQuat, XAnimNodeCalcMode calcMode)
{
  int v11; 
  int v12; 

  if ( calcBuffer != destBuffer && !bNormQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2143, ASSERT_TYPE_ASSERT, "((calcBuffer == destBuffer) || bNormQuat)", (const char *)&queryFormat, "(calcBuffer == destBuffer) || bNormQuat") )
    __debugbreak();
  if ( !calcBuffer->isEmpty )
  {
    if ( bNormQuat )
    {
      if ( normalizeChildren )
        XAnimAccumulateBuffer(animInfo, obj, weightScale, calcBuffer, destBuffer, calcMode);
      else
        XAnimAccumulateBufferWithoutNormalization(animInfo, obj, weightScale, calcBuffer, destBuffer, calcMode);
    }
    else
    {
      if ( calcBuffer != destBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2153, ASSERT_TYPE_ASSERT, "(calcBuffer == destBuffer)", (const char *)&queryFormat, "calcBuffer == destBuffer") )
        __debugbreak();
      v11 = DObjNumBones(obj);
      v12 = DObjNumClientOnlyBones(obj);
      XAnimScaleRotTransArray(v11, v12, animInfo, destBuffer->rotTransArray);
    }
  }
}

/*
==============
XAnimCalcLeaf
==============
*/
void XAnimCalcLeaf(const XAnimInfo *info, float weightScale, DObjAnimMat *rotTransArray, XAnimCalcAnimInfo *animInfo, XAnimNodeCalcMode calcMode, const DObj *obj)
{
  XAnimParts *parts; 
  XAnimToXModel *animToModel; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  unsigned int v22; 
  int v23; 
  unsigned int v24; 
  float currentAnimTime; 
  unsigned __int8 flags; 
  int v27; 
  unsigned __int16 numframes; 
  const unsigned __int16 *v29; 
  const unsigned __int16 *boneIndex; 
  DObjPartBits *fmt; 
  DObjPartBits *animCalcInfo; 

  if ( !info->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1322, ASSERT_TYPE_ASSERT, "(info->inuse)", (const char *)&queryFormat, "info->inuse") )
    __debugbreak();
  parts = info->parts;
  if ( !parts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1326, ASSERT_TYPE_ASSERT, "(parts)", (const char *)&queryFormat, "parts") )
    __debugbreak();
  if ( !info->animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1328, ASSERT_TYPE_ASSERT, "(info->animToModel != nullptr)", (const char *)&queryFormat, "info->animToModel != nullptr") )
    __debugbreak();
  animToModel = info->animToModel;
  if ( !animToModel || !animToModel->boneCount || parts->boneCount[9] )
  {
    v11 = animToModel->partBits.array[0] & ~animInfo->ignorePartBits.array[0];
    animInfo->animPartBits.array[0] |= v11;
    v12 = animToModel->partBits.array[1] & ~animInfo->ignorePartBits.array[1];
    animInfo->animPartBits.array[1] |= v12;
    v13 = v12 | v11;
    v14 = animToModel->partBits.array[2] & ~animInfo->ignorePartBits.array[2];
    animInfo->animPartBits.array[2] |= v14;
    v15 = v14 | v13;
    v16 = animToModel->partBits.array[3] & ~animInfo->ignorePartBits.array[3];
    animInfo->animPartBits.array[3] |= v16;
    v17 = v16 | v15;
    v18 = animToModel->partBits.array[4] & ~animInfo->ignorePartBits.array[4];
    animInfo->animPartBits.array[4] |= v18;
    v19 = v18 | v17;
    v20 = animToModel->partBits.array[5] & ~animInfo->ignorePartBits.array[5];
    animInfo->animPartBits.array[5] |= v20;
    v21 = v20 | v19;
    v22 = animToModel->partBits.array[6] & ~animInfo->ignorePartBits.array[6];
    animInfo->animPartBits.array[6] |= v22;
    v23 = v22 | v21;
    v24 = animToModel->partBits.array[7] & ~animInfo->ignorePartBits.array[7];
    animInfo->animPartBits.array[7] |= v24;
    if ( v24 | v23 || obj->blendShapeTargetCount )
    {
      currentAnimTime = info->state.currentAnimTime;
      if ( currentAnimTime < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1358, ASSERT_TYPE_ASSERT, "( ( !(time < 0.f) ) )", "( time ) = %g", currentAnimTime) )
        __debugbreak();
      flags = parts->flags;
      v27 = 0;
      if ( (flags & 1) != 0 )
        LOBYTE(v27) = currentAnimTime < 1.0;
      else
        LOBYTE(v27) = currentAnimTime <= 1.0;
      if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1360, ASSERT_TYPE_ASSERT, "((parts->flags & ANIM_LOOP) ? (time < 1.f) : (time <= 1.f))", "%s\n\ttime: %f, loop: %d", "(parts->flags & ANIM_LOOP) ? (time < 1.f) : (time <= 1.f)", currentAnimTime, flags & 1) )
        __debugbreak();
      XAnimCalcLeafBlendshapes(info, parts, weightScale, currentAnimTime, obj, animInfo, rotTransArray);
      if ( currentAnimTime == 1.0 || (numframes = parts->numframes) == 0 )
      {
        if ( (parts->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1370, ASSERT_TYPE_ASSERT, "(!(parts->flags & ANIM_LOOP))", (const char *)&queryFormat, "!(parts->flags & ANIM_LOOP)") )
          __debugbreak();
        boneIndex = animToModel->boneIndex;
        fmt = &animInfo->ignorePartBits;
        if ( calcMode == EASE_IN_QUAD )
        {
          XAnimCalcNonLoopEnd_1_(parts, boneIndex, weightScale, rotTransArray, fmt);
        }
        else if ( calcMode == EASE_OUT_QUAD )
        {
          XAnimCalcNonLoopEnd_2_(parts, boneIndex, weightScale, rotTransArray, fmt);
        }
        else
        {
          XAnimCalcNonLoopEnd_0_(parts, boneIndex, weightScale, rotTransArray, fmt);
        }
      }
      else
      {
        v29 = animToModel->boneIndex;
        animCalcInfo = &animInfo->ignorePartBits;
        if ( calcMode == EASE_IN_QUAD )
        {
          if ( numframes >= 0x100u )
            XAnimCalcParts_unsigned_short_1_(parts, v29, currentAnimTime, weightScale, rotTransArray, animCalcInfo);
          else
            XAnimCalcParts_unsigned_char_1_(parts, v29, currentAnimTime, weightScale, rotTransArray, animCalcInfo);
        }
        else if ( calcMode == EASE_OUT_QUAD )
        {
          if ( numframes >= 0x100u )
            XAnimCalcParts_unsigned_short_2_(parts, v29, currentAnimTime, weightScale, rotTransArray, animCalcInfo);
          else
            XAnimCalcParts_unsigned_char_2_(parts, v29, currentAnimTime, weightScale, rotTransArray, animCalcInfo);
        }
        else if ( numframes >= 0x100u )
        {
          XAnimCalcParts_unsigned_short_0_(parts, v29, currentAnimTime, weightScale, rotTransArray, animCalcInfo);
        }
        else
        {
          XAnimCalcParts_unsigned_char_0_(parts, v29, currentAnimTime, weightScale, rotTransArray, animCalcInfo);
        }
      }
    }
  }
}

/*
==============
XAnimCalcLeafBlendshapes
==============
*/
void XAnimCalcLeafBlendshapes(const XAnimInfo *info, const XAnimParts *parts, const float relativeWeight, const float time, const DObj *obj, XAnimCalcAnimInfo *animCalcInfo)
{
  unsigned __int16 blendShapeWeightCount; 
  XAnimToXModel *animToModel; 
  unsigned __int16 *v11; 
  __int64 v12; 
  float v13; 
  unsigned __int16 *v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  int v18; 
  unsigned __int16 *blendShapeWeights; 
  float v20; 
  float v21; 
  unsigned __int16 *v22; 
  unsigned __int16 *v23; 
  signed __int64 v24; 
  char *v25; 
  __int64 v26; 
  unsigned int v27; 
  __int64 v28; 
  signed __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  int v32; 

  blendShapeWeightCount = parts->blendShapeWeightCount;
  if ( blendShapeWeightCount && !obj->skel.partBits.blendShapesCalculated && obj->blendShapeTargetCount )
  {
    animToModel = info->animToModel;
    if ( !animToModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1288, ASSERT_TYPE_ASSERT, "(animToModel)", (const char *)&queryFormat, "animToModel") )
      __debugbreak();
    v11 = &animToModel->boneIndex[animToModel->boneCount];
    if ( ((__int64)GetAnimInfo(info->parent)->parts & 0x10) == 0 )
    {
      v12 = 0i64;
      v13 = 1.0 - relativeWeight;
      if ( blendShapeWeightCount >= 4ui64 )
      {
        v14 = v11 + 2;
        v15 = (((unsigned __int64)blendShapeWeightCount - 4) >> 2) + 1;
        v12 = 4 * v15;
        do
        {
          v16 = *(v14 - 2);
          v14 += 4;
          animCalcInfo->tmpBlendShapeWeights[v16] = v13 * animCalcInfo->tmpBlendShapeWeights[v16];
          animCalcInfo->tmpBlendShapeWeights[*(v14 - 5)] = v13 * animCalcInfo->tmpBlendShapeWeights[*(v14 - 5)];
          animCalcInfo->tmpBlendShapeWeights[*(v14 - 4)] = v13 * animCalcInfo->tmpBlendShapeWeights[*(v14 - 4)];
          animCalcInfo->tmpBlendShapeWeights[*(v14 - 3)] = v13 * animCalcInfo->tmpBlendShapeWeights[*(v14 - 3)];
          --v15;
        }
        while ( v15 );
      }
      for ( ; v12 < blendShapeWeightCount; animCalcInfo->tmpBlendShapeWeights[v17] = v13 * animCalcInfo->tmpBlendShapeWeights[v17] )
        v17 = v11[v12++];
    }
    animCalcInfo->masterBlendShapeWeight = relativeWeight + animCalcInfo->masterBlendShapeWeight;
    if ( time > 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1242, ASSERT_TYPE_ASSERT, "(time <= 1.0f)", (const char *)&queryFormat, "time <= 1.0f") )
      __debugbreak();
    v18 = parts->blendShapeWeightCount;
    blendShapeWeights = parts->blendShapeWeights;
    v20 = (float)parts->numframes * time;
    v21 = v20 - (float)(int)v20;
    v22 = &blendShapeWeights[(int)v20 * v18];
    if ( v21 == 0.0 )
    {
      if ( (_WORD)v18 )
      {
        v29 = (char *)v22 - (char *)v11;
        v30 = parts->blendShapeWeightCount;
        do
        {
          v31 = *v11;
          v32 = *(unsigned __int16 *)((char *)v11++ + v29);
          animCalcInfo->tmpBlendShapeWeights[v31] = (float)((float)((float)((float)v32 * 0.000061037019) - 2.0) * relativeWeight) + animCalcInfo->tmpBlendShapeWeights[v31];
          --v30;
        }
        while ( v30 );
      }
    }
    else
    {
      v23 = &blendShapeWeights[v18 * ((int)v20 + 1)];
      if ( (_WORD)v18 )
      {
        v24 = (char *)v22 - (char *)v23;
        v25 = (char *)((char *)v11 - (char *)v23);
        v26 = parts->blendShapeWeightCount;
        do
        {
          v27 = *(unsigned __int16 *)((char *)v23 + v24);
          v28 = *(unsigned __int16 *)((char *)v23++ + (_QWORD)v25);
          animCalcInfo->tmpBlendShapeWeights[v28] = (float)((float)((float)((float)((float)(_mm_cvtepi32_ps((__m128i)v27).m128_f32[0] * 0.000061037019) - 2.0) * (float)(1.0 - v21)) + (float)((float)((float)(_mm_cvtepi32_ps((__m128i)*(v23 - 1)).m128_f32[0] * 0.000061037019) - 2.0) * v21)) * relativeWeight) + animCalcInfo->tmpBlendShapeWeights[v28];
          --v26;
        }
        while ( v26 );
      }
    }
  }
}

/*
==============
XAnimCalcNonAdditiveChildren
==============
*/
__int64 XAnimCalcNonAdditiveChildren(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *nodeInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer, XAnimNodeCalcMode calcMode)
{
  __int128 v7; 
  __int128 v8; 
  unsigned __int16 children; 
  XAnimTree *tree; 
  const XAnimInfo *v14; 
  unsigned __int16 v15; 
  float v16; 
  XAnimInfo *v17; 
  unsigned int flags; 
  char v19; 
  unsigned __int16 next; 
  __int128 i; 
  XAnimInfo *v22; 
  __int128 v23; 
  XAnimCalcBuffer *v25; 
  __int64 rotTransArrayIndex; 
  int v27; 
  XAnimInfo *v28; 
  float weight; 
  unsigned __int16 v30; 
  int v31; 
  int v32; 
  unsigned __int16 v33; 
  XAnimTree *v34; 
  DObjAnimMat *v35; 
  int v36; 
  char v37; 
  __int128 v38; 
  __int128 v39; 
  unsigned __int16 v40; 

  children = nodeInfo->children;
  tree = obj->tree;
  v33 = 0;
  v14 = NULL;
  v40 = 0;
  v15 = 0;
  v34 = obj->tree;
  v16 = weightScale;
  if ( !children )
    goto LABEL_84;
  while ( 1 )
  {
    v17 = GetAnimInfo(children);
    if ( v17->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3215, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
      __debugbreak();
    if ( !v17->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3216, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
      __debugbreak();
    if ( v17->state.weight == 0.0 )
      goto LABEL_13;
    if ( !v17->animToModel && (v17->animParent.flags & 0x210) != 0 )
    {
      v40 = children;
      goto LABEL_18;
    }
    if ( v14 )
      break;
    v14 = v17;
LABEL_13:
    children = v17->next;
    if ( !children )
      goto LABEL_17;
  }
  v15 = children;
LABEL_17:
  children = 0;
LABEL_18:
  if ( !v14 )
  {
LABEL_84:
    if ( destBuffer->isEmpty )
    {
      XAnimClearRotTransArray(obj, destBuffer->rotTransArray, &animInfo->ignorePartBits);
      destBuffer->isEmpty = 0;
    }
    return 0i64;
  }
  flags = nodeInfo->animParent.flags;
  v39 = v7;
  v38 = v8;
  if ( (flags & 0x20) != 0 )
  {
    v19 = 0;
    goto LABEL_33;
  }
  if ( (flags & 0x8000) != 0 )
  {
    next = nodeInfo->children;
    for ( i = 0i64; next; next = v22->next )
    {
      v22 = GetAnimInfo(next);
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      if ( v22->animToModel )
        goto LABEL_85;
      if ( (v22->animParent.flags & 0x210) != 0 )
        break;
      if ( (v22->animParent.flags & 0x100) == 0 )
      {
LABEL_85:
        v23 = i;
        *(float *)&v23 = *(float *)&i + v22->state.weight;
        i = v23;
        if ( *(float *)&v23 >= 0.99900001 )
          goto LABEL_32;
      }
    }
    v19 = 0;
  }
  else
  {
LABEL_32:
    v19 = 1;
  }
LABEL_33:
  if ( !v15 )
  {
    if ( !v19 )
      v16 = weightScale * v14->state.weight;
    XAnimCalc(animInfo, obj, v14, v16, bNormQuat, destBuffer, calcMode);
    return children;
  }
  if ( !destBuffer->isEmpty )
  {
    rotTransArrayIndex = animInfo->rotTransArrayIndex;
    v27 = animInfo->rotTransArrayIndex + DObjTotalNumBones(obj);
    if ( v27 <= 1524 )
    {
      animInfo->rotTransArrayIndex = v27;
      v25 = (XAnimCalcBuffer *)&v35;
      v36 = 1;
      v35 = &animInfo->rotTransArray[rotTransArrayIndex];
      v37 = 1;
      goto LABEL_42;
    }
    Com_PrintWarning(19, "max calculation buffer exceeded\n");
    DObjDisplayAnim(obj, (const char *)&queryFormat.fmt + 3);
    return 0i64;
  }
  ++destBuffer->refCount;
  v25 = destBuffer;
LABEL_42:
  if ( !v25->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2025, ASSERT_TYPE_ASSERT, "(calcBuffer->isEmpty)", (const char *)&queryFormat, "calcBuffer->isEmpty") )
    __debugbreak();
  XAnimCalc(animInfo, obj, v14, v14->state.weight, 1, v25, LINEAR);
  while ( 2 )
  {
    v28 = GetAnimInfo(v15);
    if ( v28->tree != v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3281, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
      __debugbreak();
    if ( !v28->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3282, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
      __debugbreak();
    weight = v28->state.weight;
    if ( weight == 0.0 )
    {
LABEL_60:
      v15 = v28->next;
      if ( !v15 )
      {
        v30 = v40;
        goto LABEL_62;
      }
      continue;
    }
    break;
  }
  if ( v28->animToModel )
    goto LABEL_59;
  if ( (v28->animParent.flags & 0x100) != 0 )
  {
    if ( v33 )
      v15 = v33;
    v33 = v15;
    goto LABEL_60;
  }
  if ( (v28->animParent.flags & 0x210) == 0 )
  {
LABEL_59:
    XAnimCalc(animInfo, obj, v28, weight, 1, v25, LINEAR);
    goto LABEL_60;
  }
  v30 = v15;
LABEL_62:
  if ( v33 )
    XAnimCalcOverlayChildren(animInfo, obj, nodeInfo, v33, v16, v25);
  if ( v25 != destBuffer && !bNormQuat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2143, ASSERT_TYPE_ASSERT, "((calcBuffer == destBuffer) || bNormQuat)", (const char *)&queryFormat, "(calcBuffer == destBuffer) || bNormQuat") )
    __debugbreak();
  if ( !v25->isEmpty )
  {
    if ( bNormQuat )
    {
      if ( v19 )
        XAnimAccumulateBuffer(animInfo, obj, v16, v25, destBuffer, calcMode);
      else
        XAnimAccumulateBufferWithoutNormalization(animInfo, obj, v16, v25, destBuffer, calcMode);
    }
    else
    {
      if ( v25 != destBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2153, ASSERT_TYPE_ASSERT, "(calcBuffer == destBuffer)", (const char *)&queryFormat, "calcBuffer == destBuffer") )
        __debugbreak();
      v31 = DObjNumBones(obj);
      v32 = DObjNumClientOnlyBones(obj);
      XAnimScaleRotTransArray(v31, v32, animInfo, destBuffer->rotTransArray);
    }
  }
  XAnimFreeCalcBuffer(animInfo, obj, v25);
  return v30;
}

/*
==============
XAnimCalcOverlayChildren
==============
*/
void XAnimCalcOverlayChildren(XAnimCalcAnimInfo *animInfo, const DObj *obj, const XAnimInfo *nodeInfo, unsigned __int16 firstInfoIndex, float weightScale, XAnimCalcBuffer *destBuffer)
{
  XAnimTree *tree; 
  XAnimInfo *v9; 
  float weight; 
  const char *AnimDebugName; 

  if ( firstInfoIndex )
  {
    tree = obj->tree;
    do
    {
      v9 = GetAnimInfo(firstInfoIndex);
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
        __debugbreak();
      if ( v9->animToModel )
        goto LABEL_26;
      if ( (v9->animParent.flags & 0x210) != 0 )
        return;
      if ( (v9->animParent.flags & 0x100) == 0 )
      {
LABEL_26:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1851, ASSERT_TYPE_ASSERT, "(IsInfoOverlay( childInfo ))", "%s\n\tOverlay nodes need to be placed after relative nodes.", "IsInfoOverlay( childInfo )") )
          __debugbreak();
      }
      if ( v9->tree != tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1855, ASSERT_TYPE_ASSERT, "(childInfo->tree == tree)", (const char *)&queryFormat, "childInfo->tree == tree") )
        __debugbreak();
      if ( !v9->inuse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1856, ASSERT_TYPE_ASSERT, "(childInfo->inuse)", (const char *)&queryFormat, "childInfo->inuse") )
        __debugbreak();
      weight = v9->state.weight;
      if ( weight != 0.0 )
      {
        if ( weight <= 0.0 || weight > 1.0 )
        {
          AnimDebugName = XAnimGetAnimDebugName(obj->tree->anims, v9->animIndex);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 1866, ASSERT_TYPE_ASSERT, "((weight > 0.f) && (weight <= 1.f ))", "%s\n\tOverlay node '%s' has weight of '%f'. It must be between 0.0 and 1.0.", "(weight > 0.f) && (weight <= 1.f )", AnimDebugName, weight) )
            __debugbreak();
        }
        XAnimCalc(animInfo, obj, v9, weight, 1, destBuffer, EASE_IN_QUAD);
      }
      firstInfoIndex = v9->next;
    }
    while ( firstInfoIndex );
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
  float4 *v5; 
  float4 *v7; 
  __m128 v8; 
  unsigned int v9; 
  __int64 modelIndex; 
  unsigned int v11; 
  const XModel *v12; 
  int SkelBoneIndex; 
  int v14; 
  int numBones; 
  int v16; 
  int numRootBones; 
  __m128 v; 
  int v20; 
  __m128 v26; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v35; 
  __m128 v37; 
  __m128 v38; 
  bool v39; 
  __int64 v43; 
  __int64 v44; 
  __m128 v47; 
  DObjHierarchyIterator iter; 

  _XMM11 = g_unit.v;
  v5 = outModelQuat;
  v7 = outModelTranslation;
  v8 = 0i64;
  v9 = DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
  if ( v9 != 255 )
  {
    do
    {
      modelIndex = iter.modelIndex;
      v11 = (unsigned int)iter.boneIndex >> 15;
      v12 = iter.obj->models[iter.modelIndex];
      SkelBoneIndex = DObjGetSkelBoneIndex(iter.obj, iter.boneIndex);
      if ( (v11 & 1) != 0 )
      {
        v14 = iter.startIndexClient[modelIndex];
        numBones = v12->numBones;
      }
      else
      {
        v14 = iter.startIndex[modelIndex];
        numBones = 0;
      }
      v16 = SkelBoneIndex + numBones - v14;
      if ( v16 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2506, ASSERT_TYPE_ASSERT, "(localBoneIndex >= 0)", (const char *)&queryFormat, "localBoneIndex >= 0") )
        __debugbreak();
      numRootBones = v12->numRootBones;
      if ( v16 >= numRootBones )
      {
        v20 = v16 - numRootBones;
        _RCX = 4 * v20;
        _RAX = v12->quats;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rax+rcx*2]
          vpmovsxwd xmm1, xmm0
        }
        v = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
        v47.m128_i32[3] = 0;
        v26 = v47;
        v26.m128_f32[0] = v12->trans[3 * v20];
        _XMM10 = v26;
        __asm
        {
          vinsertps xmm10, xmm10, xmm1, 10h
          vinsertps xmm10, xmm10, xmm2, 20h ; ' '
        }
        v47 = _XMM10;
      }
      else
      {
        v = g_unit.v;
        _XMM10 = 0i64;
      }
      v28 = _mm_shuffle_ps(v, v, 201);
      v29 = _mm_shuffle_ps(v, v, 210);
      v30 = _mm_shuffle_ps(v, v, 255);
      _XMM0 = _mm128_mul_ps(v, _XMM11);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
        vhaddps xmm3, xmm2, xmm2
      }
      v35 = _mm_shuffle_ps(_XMM11, _XMM11, 255);
      _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v35, v30), _XMM3);
      _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(_XMM11, _XMM11, 201), v29)), _mm128_add_ps(_mm128_mul_ps(v, v35), _mm128_mul_ps(v30, _XMM11)));
      __asm { vblendps xmm11, xmm2, xmm0, 7 }
      v37 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v8, v8, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(v8, v8, 201), v29));
      v38 = _mm128_add_ps(v37, v37);
      v8 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v38, v38, 210), v28), _mm128_mul_ps(_mm_shuffle_ps(v38, v38, 201), v29)), _mm128_add_ps(_mm128_mul_ps(v30, v38), v8)), _XMM10);
      if ( (v9 & 0x8000) != 0 )
      {
        v39 = (obj->skel.partBits.skel.array[7] & 2) != 0;
      }
      else
      {
        if ( v9 >= 0x100 )
        {
          LODWORD(v44) = 256;
          LODWORD(v43) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v43, v44) )
            __debugbreak();
        }
        v39 = ((0x80000000 >> (v9 & 0x1F)) & obj->skel.partBits.skel.array[(unsigned __int64)v9 >> 5]) != 0;
      }
      if ( v39 )
        break;
      v9 = DObjHierarchyIterator_NextParent(&iter);
    }
    while ( v9 != 255 );
    v5 = outModelQuat;
    v7 = outModelTranslation;
  }
  _XMM0 = _mm128_mul_ps(_XMM11, _XMM11);
  __asm
  {
    vhaddps xmm1, xmm0, xmm0
    vhaddps xmm0, xmm1, xmm1
  }
  v5->v = _mm128_div_ps(_XMM11, _mm_sqrt_ps(_XMM0));
  *v7 = (float4)v8;
}

/*
==============
XAnimGetLocalBoneTransform
==============
*/
void XAnimGetLocalBoneTransform(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, float4 *outModelQuat, float4 *outModelTranslation)
{
  bool v6; 
  float4 *v8; 
  XAnimWorldTransformCache *worldTransformCache; 
  unsigned __int16 v13; 
  bool HasBoneTransform; 
  unsigned __int16 v15; 
  int v16; 
  int v17; 
  DObjPartBits *p_ignorePartBits; 
  unsigned __int16 v19; 
  bool v20; 
  int v23; 
  unsigned __int16 *v24; 
  unsigned int v25; 
  __m128 v26; 
  bool v27; 
  __m128 v; 
  __m128 v32; 
  __m128 v33; 
  __m128 v36; 
  __m128 v37; 
  __m128 v38; 
  __m128 v39; 
  XAnimWorldTransformCache *transformCache; 
  float4 *outRotation; 
  float4 v46; 
  float4 v47; 
  float4 *v48; 
  float4 *v49; 
  float4 v50; 
  float4 v51; 
  XAnimBoneChain chain; 

  v6 = !buffer->isEmpty;
  v8 = outModelQuat;
  worldTransformCache = animCalcInfo->worldTransformCache;
  v48 = outModelQuat;
  v49 = outModelTranslation;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2996, ASSERT_TYPE_ASSERT, "(!buffer->isEmpty)", (const char *)&queryFormat, "!buffer->isEmpty") )
    __debugbreak();
  v13 = truncate_cast<unsigned short,int>(boneIndex);
  HasBoneTransform = XAnimWorldTransformCache_HasBoneTransform(worldTransformCache, v13);
  v15 = truncate_cast<unsigned short,int>(boneIndex);
  if ( HasBoneTransform )
  {
    XAnimWorldTransformCache_GetBoneTransform(worldTransformCache, v15, outModelQuat, outModelTranslation);
  }
  else
  {
    v16 = XAnimBoneChain_CreateForWorldTransformCalc(&chain, obj, v15, worldTransformCache);
    if ( v16 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3008, ASSERT_TYPE_ASSERT, "(numChainBones > 0)", (const char *)&queryFormat, "numChainBones > 0") )
      __debugbreak();
    v17 = v16 - 1;
    p_ignorePartBits = &animCalcInfo->ignorePartBits;
    XAnimBoneChain_GetTransform(&chain, obj, &animCalcInfo->ignorePartBits, buffer, v17, worldTransformCache, &v47, &v46);
    v19 = chain.boneIndices[v17];
    v20 = XAnimWorldTransformCache_HasBoneTransform(worldTransformCache, v19);
    _XMM11 = v46.v;
    _XMM9 = v47.v;
    if ( !v20 )
    {
      v47.v = v46.v;
      v46.v = _XMM9;
      XAnimWorldTransformCache_SetBoneTransform(worldTransformCache, v19, &v46, &v47);
    }
    v23 = v17 - 1;
    if ( v23 >= 0 )
    {
      v24 = &chain.boneIndices[v23];
      do
      {
        v25 = *v24;
        v26 = _XMM9;
        XAnimBoneChain_GetTransform(&chain, obj, p_ignorePartBits, buffer, v23, worldTransformCache, &v46, &v47);
        if ( (unsigned __int8)(v25 >> 15) )
        {
          v27 = (obj->skel.partBits.worldCtrl.array[7] & 2) != 0;
        }
        else
        {
          if ( v25 >= 0x100 )
          {
            LODWORD(outRotation) = 256;
            LODWORD(transformCache) = v25;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", transformCache, outRotation) )
              __debugbreak();
          }
          v27 = ((0x80000000 >> (v25 & 0x1F)) & obj->skel.partBits.worldCtrl.array[(unsigned __int64)v25 >> 5]) != 0;
        }
        if ( v27 )
        {
          _XMM9 = v46.v;
        }
        else
        {
          v = v46.v;
          _XMM1 = _mm128_mul_ps(v46.v, _XMM9);
          __asm
          {
            vinsertps xmm0, xmm1, xmm1, 8
            vhaddps xmm2, xmm0, xmm0
          }
          v32 = _mm_shuffle_ps(v, v, 255);
          v33 = _mm_shuffle_ps(_XMM9, _XMM9, 255);
          __asm { vhaddps xmm3, xmm2, xmm2 }
          _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v32, v33), _XMM3);
          _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v, v, 210), _mm_shuffle_ps(_XMM9, _XMM9, 201)), _mm128_mul_ps(_mm_shuffle_ps(v, v, 201), _mm_shuffle_ps(_XMM9, _XMM9, 210))), _mm128_add_ps(_mm128_mul_ps(v32, _XMM9), _mm128_mul_ps(v46.v, v33)));
          __asm { vblendps xmm9, xmm2, xmm0, 7 }
        }
        v36 = _mm_shuffle_ps(v26, v26, 210);
        v37 = _mm_shuffle_ps(v26, v26, 201);
        v38 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v47.v, v47.v, 210), v37), _mm128_mul_ps(_mm_shuffle_ps(v47.v, v47.v, 201), v36));
        v39 = _mm128_add_ps(v38, v38);
        _XMM11 = _mm128_add_ps(_mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v39, v39, 210), v37), _mm128_mul_ps(_mm_shuffle_ps(v39, v39, 201), v36)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v26, v26, 255), v39), v47.v)), _XMM11);
        v50.v = _XMM11;
        v51.v = _XMM9;
        XAnimWorldTransformCache_SetBoneTransform(worldTransformCache, v25, &v51, &v50);
        --v24;
        --v23;
      }
      while ( v23 >= 0 );
      v8 = v48;
    }
    _XMM0 = _mm128_mul_ps(_XMM9, _XMM9);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
      vinsertps xmm1, xmm11, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0'
    }
    *v49 = (float4)_XMM1.v;
    v8->v = _mm128_div_ps(_XMM9, _mm_sqrt_ps(_XMM0));
  }
}

/*
==============
XAnimGetNamesOfAnimsAffectingBonesInternal
==============
*/
void XAnimGetNamesOfAnimsAffectingBonesInternal(const DObj *dobj, const XAnimInfo *info, const DObjPartBits *boneFlags, bool *isFirstAnim, char *outBuffer, const int bufferSize, int *outBufferPos)
{
  unsigned int v9; 
  const char *AnimDebugName; 
  const char *v17; 
  unsigned __int16 i; 
  const XAnimInfo *v19; 
  int v20; 
  unsigned __int8 *v21; 
  unsigned int v22; 
  __int64 v23; 
  int *v24; 
  DObj *dobja; 
  bool *isFirstAnima; 

  isFirstAnima = isFirstAnim;
  dobja = (DObj *)dobj;
  _RBP = info->animToModel;
  _R14 = boneFlags;
  if ( _RBP )
  {
    if ( info->state.weight > 0.0 )
    {
      v9 = 0;
      while ( 1 )
      {
        _RDI = 2i64 * v9;
        __asm
        {
          vlddqu  xmm6, xmmword ptr [r14+rdi*8]
          vlddqu  xmm0, xmmword ptr [rbp+rdi*8+0]
          vpand   xmm1, xmm0, xmm6
          vptest  xmm1, xmm1
        }
        if ( !_ZF )
          break;
        if ( ++v9 >= 2 )
          return;
      }
      AnimDebugName = XAnimGetAnimDebugName(dobj->tree->anims, info->animIndex);
      v17 = ", ";
      if ( *isFirstAnima )
        v17 = (char *)&queryFormat.fmt + 3;
      Com_sprintfPos_truncate(outBuffer, bufferSize, outBufferPos, "%s%s", v17, AnimDebugName);
      *isFirstAnima = 0;
    }
  }
  else
  {
    for ( i = info->children; i; dobj = dobja )
    {
      if ( (i & 0x8000u) != 0 )
      {
        v20 = i & 0x7FFF;
        if ( 32 * v20 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v23) = 32 * (i & 0x7FFF);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v23, v24) )
            __debugbreak();
          dobj = dobja;
          isFirstAnim = isFirstAnima;
        }
        v19 = (const XAnimInfo *)&g_xanimMemoryGlobals.bucketAllocatorBasePointer[32 * v20];
      }
      else
      {
        if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v23) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
          dobj = dobja;
          isFirstAnim = isFirstAnima;
        }
        v19 = &g_xanimMemoryGlobals.infoPool[i];
        v20 = i & 0x7FFF;
      }
      XAnimGetNamesOfAnimsAffectingBonesInternal(dobj, v19, _R14, isFirstAnim, outBuffer, bufferSize, outBufferPos);
      if ( (i & 0x8000u) != 0 )
      {
        v22 = 32 * v20;
        if ( v22 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
          LODWORD(v23) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", v23, v24) )
            __debugbreak();
        }
        v21 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v22];
      }
      else
      {
        if ( (unsigned int)i >= g_xanimMemoryGlobals.infoPoolSize )
        {
          LODWORD(v24) = g_xanimMemoryGlobals.infoPoolSize;
          LODWORD(v23) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", v23, v24) )
            __debugbreak();
        }
        v21 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[i];
      }
      i = *((_WORD *)v21 + 5);
      isFirstAnim = isFirstAnima;
    }
  }
}

/*
==============
XAnimGetNormalizedRotation
==============
*/
float4 *XAnimGetNormalizedRotation(float4 *result, const DObjAnimMat *srcMat, const float4 *a3)
{
  __int128 v3; 
  __int128 v4; 
  float4 *v5; 
  __int64 v14; 
  __int128 v15; 

  v15 = v4;
  v5 = (float4 *)((unsigned __int64)&v14 ^ _security_cookie);
  _XMM8 = v3;
  _XMM1 = _mm128_mul_ps(result->v, result->v);
  __asm
  {
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm5, xmm2, xmm2
    vrsqrtps xmm4, xmm5
  }
  _XMM7 = 0i64;
  _mm128_mul_ps(result->v, _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(g_one.v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM5)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4));
  __asm
  {
    vcmpltps xmm0, xmm7, xmm5
    vblendvps xmm0, xmm8, xmm1, xmm0
  }
  return v5;
}

/*
==============
XAnimGetParentRelativeBoneTransform
==============
*/
void XAnimGetParentRelativeBoneTransform(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, float4 *outQuat, float4 *outTranslation)
{
  bool v10; 
  __m128 *v11; 
  int v12; 
  __m128 v13; 
  __m128 v; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v32; 
  const XModel *v39; 
  __m128 scale_low; 
  float4 outModelQuat; 
  float4 outTrans; 
  DObjHierarchyIterator iter; 

  DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
  v10 = XAnimTestPartBit(&obj->skel.partBits.skel, boneIndex);
  v11 = (__m128 *)&obj->skel.mat[DObjGetSkelBoneIndex(obj, boneIndex)];
  if ( v10 )
  {
    v12 = DObjHierarchyIterator_NextParent(&iter);
    v13 = *v11;
    _XMM0 = _mm128_mul_ps(v13, v13);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm0, xmm1, xmm1
    }
    outTrans.v.m128_i32[3] = 0;
    v = outTrans.v;
    v.m128_f32[0] = v11[1].m128_f32[0];
    _XMM11 = v;
    __asm
    {
      vinsertps xmm11, xmm11, dword ptr [rdi+14h], 10h
      vinsertps xmm11, xmm11, dword ptr [rdi+18h], 20h ; ' '
    }
    outTrans.v = _XMM11;
    _XMM12.v = _mm128_div_ps(v13, _mm_sqrt_ps(_XMM0));
    if ( v12 != 255 )
    {
      XAnimGetLocalBoneTransform(animCalcInfo, obj, buffer, v12, &outModelQuat, &outTrans);
      v22 = _mm128_sub_ps(_XMM11, outTrans.v);
      v23 = _mm128_mul_ps(outModelQuat.v, (__m128)_xmm);
      v24 = _mm_shuffle_ps(v23, v23, 255);
      v25 = _mm_shuffle_ps(v23, v23, 210);
      v26 = _mm_shuffle_ps(v23, v23, 201);
      v27 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v22, v22, 210), v26), _mm128_mul_ps(_mm_shuffle_ps(v22, v22, 201), v25));
      v28 = _mm128_add_ps(v27, v27);
      _XMM11 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v28, v28, 210), v26), _mm128_mul_ps(_mm_shuffle_ps(v28, v28, 201), v25)), _mm128_add_ps(_mm128_mul_ps(v24, v28), v22));
      _XMM0 = _mm128_mul_ps(_XMM12.v, v23);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
      }
      v32 = _mm_shuffle_ps(_XMM12.v, _XMM12.v, 255);
      __asm { vhaddps xmm3, xmm2, xmm2 }
      _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v32, v24), _XMM3);
      _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM12.v, _XMM12.v, 210), v26), _mm128_mul_ps(_mm_shuffle_ps(_XMM12.v, _XMM12.v, 201), v25)), _mm128_add_ps(_mm128_mul_ps(v23, v32), _mm128_mul_ps(_XMM12.v, v24)));
      __asm { vblendps xmm12, xmm2, xmm0, 7 }
    }
  }
  else
  {
    DObjHierarchyIterator_GetBasePoseRotTrans(&iter, &outModelQuat, &outTrans);
    _XMM3 = v11[1];
    _XMM2 = _mm_shuffle_ps(_XMM3, _XMM3, 255);
    __asm { vrcpps  xmm0, xmm2 }
    _mm128_mul_ps(_XMM0, _XMM3);
    _XMM7 = 0i64;
    v39 = iter.obj->models[iter.modelIndex];
    __asm
    {
      vcmpltps xmm0, xmm7, xmm2
      vblendvps xmm8, xmm3, xmm1, xmm0
    }
    _XMM0 = _mm128_mul_ps(*v11, *v11);
    __asm
    {
      vhaddps xmm1, xmm0, xmm0
      vhaddps xmm5, xmm1, xmm1
      vrsqrtps xmm4, xmm5
    }
    _mm128_mul_ps(*v11, _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(g_one.v, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM4), _XMM5)), _mm128_mul_ps(_XMM4, g_oneHalf.v)), _XMM4));
    _XMM1 = outModelQuat.v;
    __asm
    {
      vcmpltps xmm0, xmm7, xmm5
      vblendvps xmm12, xmm1, xmm2, xmm0
    }
    if ( (iter.boneIndex & 0x8000) != 0 || ((0x80000000 >> (iter.boneIndex & 0x1F)) & v39->noScalePartBits[(__int64)iter.boneIndex >> 5]) == 0 )
      scale_low = (__m128)LODWORD(v39->scale);
    else
      scale_low = (__m128)LODWORD(FLOAT_1_0);
    _XMM11 = _mm128_mul_ps(_mm128_add_ps(_XMM8, outTrans.v), _mm_shuffle_ps(scale_low, scale_low, 0));
  }
  if ( outQuat )
    *outQuat = (float4)_XMM12.v;
  if ( outTranslation )
    *outTranslation = (float4)_XMM11;
}

/*
==============
XAnimGetParentRelativeBoneTranslationRelativeToBasePose
==============
*/
void XAnimGetParentRelativeBoneTranslationRelativeToBasePose(const XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimCalcBuffer *buffer, int boneIndex, float4 *outTranslation)
{
  unsigned __int64 v6; 
  bool v9; 
  bool v10; 
  int SkelBoneIndex; 
  DObjAnimMat *mat; 
  __int64 v13; 
  int v14; 
  float v15; 
  __m128 v17; 
  __m128 v20; 
  __m128 v21; 
  __m128 v22; 
  __m128 v23; 
  __m128 v24; 
  __m128 v25; 
  __m128 v; 
  const XModel *v27; 
  float scale; 
  __m128 v29; 
  float4 *outModelTranslation; 
  float4 v37; 
  float4 outModelQuat; 
  float4 result; 
  __m128 v40; 
  DObjHierarchyIterator iter; 

  v6 = (unsigned int)boneIndex;
  v9 = XAnimTestPartBit(&obj->skel.partBits.skel, boneIndex);
  if ( XAnimTestPartBit(&animCalcInfo->animPartBits, v6) )
  {
    if ( buffer->isEmpty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2737, ASSERT_TYPE_ASSERT, "(!buffer->isEmpty)", (const char *)&queryFormat, "!buffer->isEmpty") )
      __debugbreak();
    DObjHierarchyIterator_Begin(&iter, obj, v6);
    if ( (v6 & 0x8000) != 0 )
    {
      v10 = (animCalcInfo->animPartBits.array[7] & 2) != 0;
    }
    else
    {
      if ( (unsigned int)v6 >= 0x100 )
      {
        LODWORD(outModelTranslation) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", outModelTranslation, 256) )
          __debugbreak();
      }
      v10 = ((0x80000000 >> (v6 & 0x1F)) & animCalcInfo->animPartBits.array[v6 >> 5]) != 0;
    }
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2741, ASSERT_TYPE_ASSERT, "(XAnimTestPartBit( &animCalcInfo->animPartBits, boneIndex ))", (const char *)&queryFormat, "XAnimTestPartBit( &animCalcInfo->animPartBits, boneIndex )") )
      __debugbreak();
    SkelBoneIndex = DObjGetSkelBoneIndex(obj, v6);
    mat = obj->skel.mat;
    v13 = SkelBoneIndex;
    if ( v9 )
    {
      v14 = DObjHierarchyIterator_NextParent(&iter);
      v15 = mat[v13].trans.v[0];
      v40.m128_i32[3] = 0;
      v17 = v40;
      v17.m128_f32[0] = v15;
      _XMM6 = v17;
      __asm
      {
        vinsertps xmm6, xmm6, dword ptr [rbx+rdi+14h], 10h
        vinsertps xmm6, xmm6, dword ptr [rbx+rdi+18h], 20h ; ' '
      }
      v40 = _XMM6;
      if ( v14 != 255 )
      {
        XAnimGetLocalBoneTransform(animCalcInfo, obj, buffer, v14, &outModelQuat, &v37);
        v20 = _mm128_sub_ps(_XMM6, v37.v);
        v21 = _mm128_mul_ps(outModelQuat.v, (__m128)_xmm);
        v22 = _mm_shuffle_ps(v21, v21, 201);
        v23 = _mm_shuffle_ps(v21, v21, 210);
        v24 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v20, v20, 210), v22), _mm128_mul_ps(_mm_shuffle_ps(v20, v20, 201), v23));
        v25 = _mm128_add_ps(v24, v24);
        _XMM6 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v25, v25, 210), v22), _mm128_mul_ps(_mm_shuffle_ps(v25, v25, 201), v23)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v21, v21, 255), v25), v20));
      }
      v = DObjHierarchyIterator_GetBasePoseTrans(&result, &iter)->v;
      v27 = iter.obj->models[iter.modelIndex];
      if ( (iter.boneIndex & 0x8000) != 0 || ((0x80000000 >> (iter.boneIndex & 0x1F)) & v27->noScalePartBits[(__int64)iter.boneIndex >> 5]) == 0 )
      {
        scale = v27->scale;
        if ( scale == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2778, ASSERT_TYPE_ASSERT, "(boneScale != 0.0f)", (const char *)&queryFormat, "boneScale != 0.0f") )
          __debugbreak();
      }
      else
      {
        scale = FLOAT_1_0;
      }
      v29 = (__m128)LODWORD(FLOAT_1_0);
      v29.m128_f32[0] = 1.0 / scale;
      _XMM1.v = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v29, v29, 0), _XMM6), v);
    }
    else
    {
      _XMM3 = *(__m128 *)mat[v13].trans.v;
      _XMM2 = _mm_shuffle_ps(_XMM3, _XMM3, 255);
      __asm { vrcpps  xmm0, xmm2 }
      _mm128_mul_ps(_XMM0, _XMM3);
      _XMM4 = 0i64;
      __asm
      {
        vcmpltps xmm0, xmm4, xmm2
        vblendvps xmm1, xmm3, xmm1, xmm0
      }
    }
    if ( outTranslation )
      *outTranslation = (float4)_XMM1.v;
  }
  else
  {
    *outTranslation = 0i64;
  }
}

/*
==============
XAnimNormalizeRotTrans
==============
*/
void XAnimNormalizeRotTrans(DObjAnimMat *rotTrans, float weightScale)
{
  __m128 v3; 
  float v4; 
  __m128 v5; 
  float transWeight; 

  v4 = (float)((float)((float)(rotTrans->quat.v[0] * rotTrans->quat.v[0]) + (float)(rotTrans->quat.v[1] * rotTrans->quat.v[1])) + (float)(rotTrans->quat.v[2] * rotTrans->quat.v[2])) + (float)(rotTrans->quat.v[3] * rotTrans->quat.v[3]);
  v3.m128_u64[1] = 0i64;
  if ( v4 != 0.0 )
  {
    *(double *)v3.m128_u64 = I_rsqrt(v4);
    v5 = v3;
    v5.m128_f32[0] = v3.m128_f32[0] * weightScale;
    rotTrans->quat = (vec4_t)_mm128_mul_ps(_mm_shuffle_ps(v5, v5, 0), (__m128)rotTrans->quat);
  }
  transWeight = rotTrans->transWeight;
  if ( transWeight != 0.0 )
  {
    rotTrans->trans.v[0] = (float)(weightScale / transWeight) * rotTrans->trans.v[0];
    rotTrans->trans.v[1] = (float)(weightScale / transWeight) * rotTrans->trans.v[1];
    rotTrans->trans.v[2] = (float)(weightScale / transWeight) * rotTrans->trans.v[2];
    rotTrans->transWeight = weightScale;
  }
}

/*
==============
XAnimScaleRotTransArray
==============
*/
void XAnimScaleRotTransArray(int numBones, int numClientBones, const XAnimCalcAnimInfo *info, DObjAnimMat *rotTransArray)
{
  DObjAnimMat *v4; 
  unsigned int v5; 
  __int64 v8; 
  float *v9; 
  float v10; 
  __m128 v11; 
  __m128 v12; 
  float *v13; 
  __int64 v14; 
  float v15; 
  __m128 v16; 
  __m128 v17; 
  __int64 v18; 
  __int64 v19; 

  v4 = rotTransArray;
  v5 = 0;
  v8 = (unsigned int)numClientBones;
  if ( numBones > 0 )
  {
    v9 = &rotTransArray->trans.v[2];
    do
    {
      if ( v5 >= 0x100 )
      {
        LODWORD(v19) = 256;
        LODWORD(v18) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v18, v19) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v5 & 0x1F)) & info->ignorePartBits.array[(unsigned __int64)v5 >> 5]) == 0 )
      {
        v10 = v9[1];
        if ( v10 != 0.0 )
        {
          v11 = (__m128)LODWORD(FLOAT_1_0);
          v11.m128_f32[0] = 1.0 / v10;
          v12 = _mm_shuffle_ps(v11, v11, 0);
          v4->quat.v[0] = v12.m128_f32[0] * v4->quat.v[0];
          *(__m128 *)(v9 - 5) = _mm128_mul_ps(v12, *(__m128 *)(v9 - 5));
          *(v9 - 1) = v12.m128_f32[0] * *(v9 - 1);
          *v9 = v12.m128_f32[0] * *v9;
          v9[1] = 1.0;
        }
      }
      ++v5;
      ++v4;
      v9 += 8;
    }
    while ( (int)v5 < numBones );
  }
  if ( (info->ignorePartBits.array[7] & 2) == 0 && (int)v8 > 0 )
  {
    v13 = &v4->trans.v[2];
    v14 = v8;
    do
    {
      v15 = v13[1];
      if ( v15 != 0.0 )
      {
        v16 = (__m128)LODWORD(FLOAT_1_0);
        v16.m128_f32[0] = 1.0 / v15;
        v17 = _mm_shuffle_ps(v16, v16, 0);
        *(__m128 *)(v13 - 6) = _mm128_mul_ps(v17, *(__m128 *)(v13 - 6));
        *(v13 - 2) = v17.m128_f32[0] * *(v13 - 2);
        *(v13 - 1) = v17.m128_f32[0] * *(v13 - 1);
        *v13 = v17.m128_f32[0] * *v13;
        v13[1] = 1.0;
      }
      v13 += 8;
      --v14;
    }
    while ( v14 );
  }
}

/*
==============
XAnimSetLocalBoneTransform
==============
*/
void XAnimSetLocalBoneTransform(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const float4 *weightScale, const float4 *hierarchyIter, float targetBasePoseQuat)
{
  __m128 v7; 
  __m128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __m128 v20; 
  int v22; 
  __m128 v23; 
  __m128 v; 
  const XModel *v25; 
  float scale; 
  int v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v30; 
  __m128 v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v39; 
  __m128 v40; 
  __m128 v43; 
  __m128 v44; 
  __int64 SkelBoneIndex; 
  __m128 *v46; 
  float v54; 
  __m128 v56; 
  __m128 v58; 
  __m128 v62; 
  float4 *outModelQuat; 
  float4 *outModelTranslation; 
  int v68; 
  float4 result; 
  float4 outQuat; 
  float4 outTrans; 
  DObjHierarchyIterator iter; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 
  __int128 v77; 
  __int128 v78; 
  __int128 v79; 

  v20 = v8;
  _XMM14 = v7;
  if ( !XAnimTestPartBit(&animCalcInfo->ignorePartBits, boneIndex) )
  {
    v75 = v13;
    v74 = v14;
    v73 = v15;
    v22 = DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
    if ( targetBasePoseQuat >= 1.0 )
    {
      v23 = 0i64;
      v = DObjHierarchyIterator_GetBasePoseTrans(&result, &iter)->v;
    }
    else
    {
      DObjHierarchyIterator_GetBasePoseRotTrans(&iter, &outQuat, &outTrans);
      v23 = outQuat.v;
      v = outTrans.v;
    }
    outTrans.v = v23;
    v25 = iter.obj->models[iter.modelIndex];
    if ( (iter.boneIndex & 0x8000) != 0 || ((0x80000000 >> (iter.boneIndex & 0x1F)) & v25->noScalePartBits[(__int64)iter.boneIndex >> 5]) == 0 )
      scale = v25->scale;
    else
      scale = FLOAT_1_0;
    v27 = DObjHierarchyIterator_NextParent(&iter);
    if ( v27 != 255 )
    {
      v79 = v9;
      v78 = v10;
      v77 = v11;
      v76 = v12;
      XAnimGetLocalBoneTransform(animCalcInfo, obj, buffer, v27, &result, &outQuat);
      v28 = _mm128_sub_ps(v8, outQuat.v);
      v29 = _mm128_mul_ps(result.v, (__m128)_xmm);
      v30 = _mm_shuffle_ps(v29, v29, 210);
      v31 = _mm_shuffle_ps(v29, v29, 201);
      v32 = _mm_shuffle_ps(v29, v29, 255);
      v33 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v28, v28, 210), v31), _mm128_mul_ps(_mm_shuffle_ps(v28, v28, 201), v30));
      v34 = _mm128_add_ps(v33, v33);
      v35 = _mm_shuffle_ps(_XMM14, _XMM14, 255);
      _XMM0 = _mm128_mul_ps(v29, _XMM14);
      __asm
      {
        vinsertps xmm1, xmm0, xmm0, 8
        vhaddps xmm2, xmm1, xmm1
      }
      v39 = _mm128_mul_ps(v35, v32);
      result.v = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v34, v34, 210), v31), _mm128_mul_ps(_mm_shuffle_ps(v34, v34, 201), v30)), _mm128_add_ps(_mm128_mul_ps(v32, v34), v28));
      v40 = _mm128_mul_ps(v29, v35);
      v20 = result.v;
      __asm { vhaddps xmm3, xmm2, xmm2 }
      _XMM2 = _mm128_sub_ps(v39, _XMM3);
      _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM14, _XMM14, 210), v31), _mm128_mul_ps(_mm_shuffle_ps(_XMM14, _XMM14, 201), v30)), _mm128_add_ps(v40, _mm128_mul_ps(v32, _XMM14)));
      __asm { vblendps xmm14, xmm2, xmm0, 7 }
    }
    v43 = (__m128)LODWORD(FLOAT_1_0);
    v43.m128_f32[0] = 1.0 / scale;
    v44 = _mm128_mul_ps(_mm128_sub_ps(v20, v), _mm_shuffle_ps(v43, v43, 0));
    if ( targetBasePoseQuat < 1.0 )
    {
      SkelBoneIndex = DObjGetSkelBoneIndex(obj, v22);
      if ( (unsigned int)SkelBoneIndex >= DObjTotalNumBones(obj) )
      {
        v68 = DObjTotalNumBones(obj);
        LODWORD(outModelTranslation) = SkelBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2608, ASSERT_TYPE_ASSERT, "(unsigned)( skelBoneIndex ) < (unsigned)( DObjTotalNumBones( obj ) )", "skelBoneIndex doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", outModelTranslation, v68) )
          __debugbreak();
      }
      v46 = (__m128 *)&buffer->rotTransArray[SkelBoneIndex];
      _XMM3 = 0i64;
      _XMM0 = _mm128_mul_ps(*v46, *v46);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm0, xmm1, xmm1
      }
      _XMM1 = outTrans.v;
      __asm
      {
        vcmpltps xmm0, xmm3, xmm0
        vblendvps xmm5, xmm1, xmm2, xmm0
      }
      if ( v46[1].m128_f32[3] != 0.0 )
      {
        v54 = v46[1].m128_f32[0];
        outTrans.v.m128_i32[3] = 0;
        v56 = outTrans.v;
        v56.m128_f32[0] = v54;
        _XMM3 = v56;
        __asm
        {
          vinsertps xmm3, xmm3, xmm1, 10h
          vinsertps xmm3, xmm3, xmm2, 20h ; ' '
        }
      }
      v58 = _mm_shuffle_ps((__m128)LODWORD(targetBasePoseQuat), (__m128)LODWORD(targetBasePoseQuat), 0);
      _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(v44, _XMM3), v58), _XMM3);
      _XMM0 = _mm128_mul_ps(_XMM5, _XMM14);
      __asm
      {
        vhaddps xmm1, xmm0, xmm0
        vhaddps xmm0, xmm1, xmm1
      }
      v62 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v58, (__m128)(_XMM0 & *(_OWORD *)&g_negativeZero.v | _xmm)), _XMM14), _mm128_mul_ps(_XMM5, _mm128_sub_ps(g_one.v, v58)));
      _XMM2 = _mm128_mul_ps(v62, v62);
      __asm
      {
        vhaddps xmm0, xmm2, xmm2
        vhaddps xmm0, xmm0, xmm0
      }
      _mm128_div_ps(v62, _mm_sqrt_ps(_XMM0));
    }
    XAnimSetRotTrans(animCalcInfo, obj, buffer, v22, outModelQuat, outModelTranslation, targetBasePoseQuat);
  }
}

/*
==============
XAnimSetParentRelativeBoneTransform
==============
*/
void XAnimSetParentRelativeBoneTransform(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const float4 *weightScale, const float4 *hierarchyIter, float targetBasePoseTrans)
{
  __m128 v7; 
  int v12; 
  const XModel *v13; 
  float scale; 
  __m128 v15; 
  const float4 *v16; 
  const float4 *v17; 
  float4 result; 
  DObjHierarchyIterator iter; 

  if ( !XAnimTestPartBit(&animCalcInfo->ignorePartBits, boneIndex) )
  {
    v12 = DObjHierarchyIterator_Begin(&iter, obj, boneIndex);
    DObjHierarchyIterator_GetBasePoseTrans(&result, &iter);
    v13 = iter.obj->models[iter.modelIndex];
    if ( (iter.boneIndex & 0x8000) != 0 || ((0x80000000 >> (iter.boneIndex & 0x1F)) & v13->noScalePartBits[(__int64)iter.boneIndex >> 5]) == 0 )
      scale = v13->scale;
    else
      scale = FLOAT_1_0;
    v15 = (__m128)LODWORD(FLOAT_1_0);
    v15.m128_f32[0] = 1.0 / scale;
    _mm128_mul_ps(_mm128_sub_ps(v7, result.v), _mm_shuffle_ps(v15, v15, 0));
    XAnimSetRotTrans(animCalcInfo, obj, buffer, v12, v16, v17, targetBasePoseTrans);
  }
}

/*
==============
XAnimSetRotTrans
==============
*/
void XAnimSetRotTrans(XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, XAnimCalcBuffer *buffer, int boneIndex, const float4 *weightScale, const float4 *a6, float a7)
{
  __m128 v7; 
  __m128 v8; 
  unsigned __int64 v9; 
  bool v13; 
  __int64 SkelBoneIndex; 
  __m128 v16; 
  __m128 *v17; 
  unsigned __int16 v18; 
  __int64 v19; 
  __int64 v20; 

  v9 = (unsigned int)boneIndex;
  v13 = (boneIndex & 0x8000) != 0;
  if ( (boneIndex & 0x8000) == 0 )
  {
    if ( (unsigned int)boneIndex >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", boneIndex, 256) )
      __debugbreak();
    if ( ((0x80000000 >> (v9 & 0x1F)) & obj->skel.partBits.skel.array[v9 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2177, ASSERT_TYPE_ASSERT, "(XAnimIsClientBoneIndex( boneIndex ) || !XAnimTestPartBit( &obj->skel.partBits.skel, boneIndex ))", (const char *)&queryFormat, "XAnimIsClientBoneIndex( boneIndex ) || !XAnimTestPartBit( &obj->skel.partBits.skel, boneIndex )") )
      __debugbreak();
  }
  SkelBoneIndex = DObjGetSkelBoneIndex(obj, v9);
  if ( (unsigned int)SkelBoneIndex >= DObjTotalNumBones(obj) )
  {
    LODWORD(v20) = DObjTotalNumBones(obj);
    LODWORD(v19) = SkelBoneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 2180, ASSERT_TYPE_ASSERT, "(unsigned)( skelBoneIndex ) < (unsigned)( DObjTotalNumBones( obj ) )", "skelBoneIndex doesn't index DObjTotalNumBones( obj )\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  __asm { vbroadcastss xmm2, [rsp+0B8h+arg_30] }
  v16 = _mm128_mul_ps(_XMM2, v8);
  v17 = (__m128 *)&buffer->rotTransArray[SkelBoneIndex];
  *v17 = _mm128_mul_ps(_XMM2, v7);
  v17[1] = _mm_shuffle_ps(v16, _mm_shuffle_ps(v16, _XMM2, 250), 132);
  if ( v13 )
  {
    animCalcInfo->animPartBits.array[7] |= 2u;
  }
  else
  {
    if ( (unsigned int)v9 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v9, 256) )
      __debugbreak();
    animCalcInfo->animPartBits.array[v9 >> 5] |= 0x80000000 >> (v9 & 0x1F);
  }
  v18 = truncate_cast<unsigned short,int>(v9);
  XAnimWorldTransformCache_InvalidateBoneTransform(animCalcInfo->worldTransformCache, v18);
}

/*
==============
XAnimSetRotTransToBasePose
==============
*/
void XAnimSetRotTransToBasePose(DObjAnimMat *rotTransArray, const DObj *dobj, const DObjPartBits *basePoseBoneFlags)
{
  unsigned __int8 numModels; 
  DObjAnimMat *v4; 
  __m128 v; 
  const DObj *v7; 
  unsigned int v8; 
  __int64 v10; 
  const XModel *v11; 
  int numRootBones; 
  __int64 v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v17; 
  DObjAnimMat *v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  unsigned int v27; 
  DObjAnimMat *v28; 
  __int64 v31; 
  __int64 v34; 
  __int64 v35; 
  char v36; 
  unsigned int ClientBoneOffset; 
  unsigned int numClientBones; 
  __int64 v40; 
  __int64 v41; 

  numModels = dobj->numModels;
  v4 = rotTransArray;
  v = g_unit.v;
  v7 = dobj;
  v8 = 0;
  if ( !DObjHasClientOnlyBones(dobj) || (v36 = 1, (basePoseBoneFlags->array[7] & 2) == 0) )
    v36 = 0;
  ClientBoneOffset = DObjGetClientBoneOffset(v7);
  v41 = numModels;
  _XMM6 = 0i64;
  if ( numModels )
  {
    v10 = 0i64;
    v40 = 0i64;
    do
    {
      v11 = v7->models[v10];
      numRootBones = v11->numRootBones;
      v13 = v11->numRootBones;
      v14 = v11->numBones - numRootBones;
      numClientBones = v11->numClientBones;
      if ( v11->numRootBones )
      {
        v15 = v8;
        _RDI = (__int64)&v4[v8].trans.z;
        do
        {
          if ( v15 >= 0x100 )
          {
            LODWORD(v35) = 256;
            LODWORD(v34) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v34, v35) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v15 & 0x1F)) & basePoseBoneFlags->array[(unsigned __int64)v15 >> 5]) != 0 )
          {
            *(__m128 *)(_RDI - 24) = v;
            *(float *)(_RDI - 8) = 0;
            __asm
            {
              vextractps dword ptr [rdi-4], xmm6, 1
              vextractps dword ptr [rdi], xmm6, 2
            }
          }
          ++v15;
          _RDI += 32i64;
          --v13;
        }
        while ( v13 );
      }
      v17 = numRootBones + v8;
      _R14 = v11->quats;
      if ( v14 > 0 )
      {
        v19 = rotTransArray;
        v20 = 0;
        v21 = v17;
        v22 = (unsigned int)v14;
        _RDI = &rotTransArray[v17].trans.v[2];
        do
        {
          if ( v21 >= 0x100 )
          {
            LODWORD(v35) = 256;
            LODWORD(v34) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v34, v35) )
              __debugbreak();
            v19 = rotTransArray;
          }
          if ( ((0x80000000 >> (v21 & 0x1F)) & basePoseBoneFlags->array[(unsigned __int64)v21 >> 5]) != 0 )
          {
            _RAX = v20;
            __asm
            {
              vlddqu  xmm0, xmmword ptr [r14+rax*2]
              vpmovsxwd xmm1, xmm0
            }
            v19[v21].quat = (vec4_t)_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
            *(_RDI - 2) = 0;
            __asm
            {
              vextractps dword ptr [rdi-4], xmm6, 1
              vextractps dword ptr [rdi], xmm6, 2
            }
          }
          ++v21;
          v20 += 4;
          _RDI += 8;
          --v22;
        }
        while ( v22 );
      }
      v4 = rotTransArray;
      if ( v36 )
      {
        v27 = numClientBones;
        if ( v14 < (int)(numClientBones + v14) )
        {
          v28 = &rotTransArray[ClientBoneOffset];
          _R8 = &_R14[4 * v14];
          _RCX = &v28->trans.v[2];
          v31 = numClientBones;
          do
          {
            _RCX += 8;
            ++v28;
            __asm { vlddqu  xmm0, xmmword ptr [r8] }
            _R8 += 4;
            __asm { vpmovsxwd xmm1, xmm0 }
            v28[-1].quat = (vec4_t)_mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
            *(_RCX - 10) = 0;
            __asm
            {
              vextractps dword ptr [rcx-24h], xmm6, 1
              vextractps dword ptr [rcx-20h], xmm6, 2
            }
            --v31;
          }
          while ( v31 );
        }
      }
      else
      {
        v27 = numClientBones;
      }
      v8 = v14 + v17;
      ClientBoneOffset += v27;
      v10 = v40 + 1;
      v7 = dobj;
      v40 = v10;
    }
    while ( v10 < v41 );
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
  __m128 v4; 
  __int128 v6; 
  __m128 v10; 
  __int128 v13; 
  __m128 v14; 

  v4 = *(__m128 *)&weightScale;
  HIDWORD(v13) = 0;
  v6 = v13;
  *(float *)&v6 = *(float *)dataInt;
  _XMM4 = v6;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rdx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+8], 20h ; ' '
  }
  v14 = _XMM4;
  v14.m128_i32[3] = 0;
  v10 = v14;
  v10.m128_f32[0] = *((float *)dataInt + 3);
  _XMM3 = v10;
  __asm
  {
    vinsertps xmm3, xmm3, xmm1, 10h
    vinsertps xmm3, xmm3, dword ptr [rdx+14h], 20h ; ' '
  }
  *(__m128 *)totalRotTrans->trans.v = _mm128_add_ps(_mm128_mul_ps(_mm128_add_ps(_mm128_mul_ps(_XMM3, lerp->v), _XMM4), _mm_shuffle_ps(v4, v4, 0)), *(__m128 *)totalRotTrans->trans.v);
  totalRotTrans->transWeight = v4.m128_f32[0] + totalRotTrans->transWeight;
}

/*
==============
XAnimWeightedMultiplyNearestRot
==============
*/

void __fastcall XAnimWeightedMultiplyNearestRot(const float4 *frameVec, double weightScale, DObjAnimMat *totalRotTrans)
{
  __m128 v3; 
  __m128 v10; 
  __m128 v11; 
  __m128 v15; 
  __m128 v19; 
  __m128 v20; 

  v3 = *(__m128 *)&weightScale;
  _XMM1 = totalRotTrans->quat;
  __asm
  {
    vcmpeqps xmm0, xmm1, xmm0
    vblendvps xmm9, xmm1, xmm4, xmm0
  }
  _XMM1 = _mm128_mul_ps((__m128)_xmm, frameVec->v);
  __asm
  {
    vhaddps xmm2, xmm1, xmm1
    vhaddps xmm0, xmm2, xmm2
  }
  v10 = _mm_shuffle_ps(v3, v3, 0);
  v11 = _mm128_add_ps(_mm128_mul_ps(_mm128_mul_ps(v10, (__m128)(_XMM0 & *(_OWORD *)&g_negativeZero.v | _xmm)), frameVec->v), _mm128_mul_ps((__m128)_xmm, _mm128_sub_ps(g_one.v, v10)));
  _XMM1 = _mm128_mul_ps(v11, v11);
  __asm
  {
    vhaddps xmm0, xmm1, xmm1
    vhaddps xmm0, xmm0, xmm0
  }
  v15 = _mm128_div_ps(v11, _mm_sqrt_ps(_XMM0));
  _XMM1 = _mm128_mul_ps(v15, _XMM9);
  __asm
  {
    vinsertps xmm0, xmm1, xmm1, 8
    vhaddps xmm2, xmm0, xmm0
  }
  v19 = _mm_shuffle_ps(v15, v15, 255);
  v20 = _mm_shuffle_ps(_XMM9, _XMM9, 255);
  __asm { vhaddps xmm3, xmm2, xmm2 }
  _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v19, v20), _XMM3);
  _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v15, v15, 210), _mm_shuffle_ps(_XMM9, _XMM9, 201)), _mm128_mul_ps(_mm_shuffle_ps(v15, v15, 201), _mm_shuffle_ps(_XMM9, _XMM9, 210))), _mm128_add_ps(_mm128_mul_ps(v19, _XMM9), _mm128_mul_ps(v20, v15)));
  __asm { vblendps xmm2, xmm2, xmm0, 7 }
  totalRotTrans->quat = _XMM2;
}

/*
==============
XAnimWeightedOverlayTransWithLerp
==============
*/

void __fastcall XAnimWeightedOverlayTransWithLerp(DObjAnimMat *totalRotTrans, int *dataInt, float4 *lerp, double weightScale)
{
  __m128 v4; 
  __int128 v6; 
  __m128 v10; 
  __int128 v15; 
  __m128 v16; 

  v4 = *(__m128 *)&weightScale;
  HIDWORD(v15) = 0;
  v6 = v15;
  *(float *)&v6 = *(float *)dataInt;
  _XMM4 = v6;
  __asm
  {
    vinsertps xmm4, xmm4, dword ptr [rdx+4], 10h
    vinsertps xmm4, xmm4, dword ptr [rdx+8], 20h ; ' '
  }
  v16 = _XMM4;
  v16.m128_i32[3] = 0;
  v10 = v16;
  v10.m128_f32[0] = *((float *)dataInt + 3);
  _XMM3 = v10;
  __asm
  {
    vinsertps xmm3, xmm3, dword ptr [rdx+10h], 10h
    vinsertps xmm3, xmm3, xmm2, 20h ; ' '
  }
  _XMM1 = _mm128_add_ps(_mm128_mul_ps(_XMM3, lerp->v), _XMM4);
  __asm { vinsertps xmm1, xmm1, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0' }
  *(__m128 *)totalRotTrans->trans.v = _mm128_add_ps(_mm128_mul_ps(_mm128_sub_ps(_XMM1, *(__m128 *)totalRotTrans->trans.v), _mm_shuffle_ps(v4, v4, 0)), *(__m128 *)totalRotTrans->trans.v);
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
  DObjPartBits *p_partBits; 

  if ( cache )
  {
    v3 = 0;
    p_partBits = &cache->partBits;
    __asm { vpxor   xmm6, xmm6, xmm6 }
    do
    {
      *(_OWORD *)p_partBits->array = _XMM6;
      p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
      ++v3;
    }
    while ( v3 < 2 );
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
  __int64 v14; 

  if ( !cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 108, ASSERT_TYPE_ASSERT, "(cache != nullptr)", (const char *)&queryFormat, "cache != nullptr") )
    __debugbreak();
  if ( (boneIndex & 0x8000u) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 109, ASSERT_TYPE_ASSERT, "(!XAnimIsClientBoneIndex( boneIndex ))", (const char *)&queryFormat, "!XAnimIsClientBoneIndex( boneIndex )") )
    __debugbreak();
  if ( boneIndex >= 0xFEu )
  {
    LODWORD(v14) = boneIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 110, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ( sizeof( *array_counter( cache->boneTransforms ) ) + 0 ) )", "boneIndex doesn't index ARRAY_COUNT( cache->boneTransforms )\n\t%i not in [0, %i)", v14, 254) )
      __debugbreak();
  }
  _RAX = boneIndex;
  *outTranslation = *(float4 *)cache->boneTransforms[_RAX].trans.v;
  _XMM1 = cache->boneTransforms[_RAX].quat;
  __asm
  {
    vcmpneqps xmm0, xmm1, xmm1
    vmovmskps eax, xmm0
  }
  *outRotationQuat = (float4)_XMM1;
  if ( (_DWORD)(_RAX * 32) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 116, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( outRotationQuat ))", (const char *)&queryFormat, "!Float4IsNaN( outRotationQuat )") )
    __debugbreak();
  _XMM0 = outTranslation->v;
  __asm
  {
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
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 

  _XMM0 = rotationQuat->v;
  __asm
  {
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 123, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( rotationQuat ))", (const char *)&queryFormat, "!Float4IsNaN( rotationQuat )") )
    __debugbreak();
  _XMM0 = translation->v;
  __asm
  {
    vcmpneqps xmm0, xmm0, xmm0
    vmovmskps eax, xmm0
  }
  if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 124, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( translation ))", (const char *)&queryFormat, "!Float4IsNaN( translation )") )
    __debugbreak();
  if ( (boneIndex & 0x8000u) == 0 )
  {
    if ( cache )
    {
      if ( boneIndex >= 0xFEu )
      {
        LODWORD(v18) = boneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( ( sizeof( *array_counter( cache->boneTransforms ) ) + 0 ) )", "boneIndex doesn't index ARRAY_COUNT( cache->boneTransforms )\n\t%i not in [0, %i)", v18, 254) )
          __debugbreak();
        LODWORD(v20) = 254;
        LODWORD(v19) = boneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 100, ASSERT_TYPE_ASSERT, "(unsigned)( boneIndex ) < (unsigned)( DOBJ_MAX_PARTS )", "boneIndex doesn't index DOBJ_MAX_PARTS\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      if ( bitarray_base<bitarray<256>>::testBit(&cache->partBits, boneIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 140, ASSERT_TYPE_ASSERT, "(!XAnimWorldTransformCache_HasBoneTransform( cache, boneIndex ))", (const char *)&queryFormat, "!XAnimWorldTransformCache_HasBoneTransform( cache, boneIndex )") )
        __debugbreak();
      _XMM1 = translation->v;
      __asm { vinsertps xmm2, xmm1, dword ptr cs:__xmm@3f8000003f8000003f8000003f800000+0Ch, 30h ; '0' }
      v17 = boneIndex;
      cache->boneTransforms[v17].quat = (vec4_t)rotationQuat->v;
      *(_OWORD *)cache->boneTransforms[v17].trans.v = _XMM2;
      bitarray_base<bitarray<256>>::setBit(&cache->partBits, boneIndex);
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
  float v7; 
  XAnimDeltaPart *deltaPart; 
  int numframes; 
  XAnimDeltaPartQuat *v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  XAnimDeltaPartQuat *quat; 
  unsigned __int16 size; 
  XAnimDeltaPartQuatData *p_u; 
  float v17; 
  int v18; 
  float v19; 
  XAnimTime animTime; 
  XAnimTime v21; 
  float keyFrameLerpFrac; 
  int keyFrameIndex; 

  v7 = *(float *)&time;
  if ( *(float *)&time < 0.0 || *(float *)&time > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 4095, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v7, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  deltaPart = anim->deltaPart;
  numframes = anim->numframes;
  if ( v7 == 1.0 || !anim->numframes )
  {
    quat = deltaPart->quat;
    if ( quat )
    {
      size = quat->size;
      p_u = &quat->u;
      if ( size )
        p_u = (XAnimDeltaPartQuatData *)p_u->frames.frames[size];
      rotDelta->v[0] = (float)p_u->frame0[0];
      rotDelta->v[1] = (float)p_u->frame0[1];
      rotDelta->v[2] = (float)p_u->frame0[2];
      v17 = (float)p_u->frame0[3];
    }
    else
    {
      v17 = FLOAT_32767_0;
      *(_QWORD *)rotDelta->v = 0i64;
      rotDelta->v[2] = 0.0;
    }
    rotDelta->v[3] = v17;
    XAnim_CalcPosDeltaEntire(deltaPart, posDelta);
  }
  else
  {
    v11 = deltaPart->quat;
    if ( (unsigned int)numframes >= 0x100 )
    {
      if ( v11 )
      {
        v13 = v11->size;
        if ( v11->size )
        {
          v21.frameIndex = (int)(float)((float)numframes * v7);
          v21.time = v7;
          v21.frameFrac = (float)numframes * v7;
          XAnim_GetTimeIndex_unsigned_short_(&v21, v11->u.frames.indices._2, v13, &v18, &v19);
          Short4LerpAsVec4(v11->u.frames.frames[v18], v11->u.frames.frames[v18 + 1], v19, rotDelta);
        }
        else
        {
          rotDelta->v[0] = (float)v11->u.frame0[0];
          rotDelta->v[1] = (float)v11->u.frame0[1];
          rotDelta->v[2] = (float)v11->u.frame0[2];
          rotDelta->v[3] = (float)v11->u.frame0[3];
        }
      }
      else
      {
        rotDelta->v[3] = 32767.0;
        *(_QWORD *)rotDelta->v = 0i64;
        rotDelta->v[2] = 0.0;
      }
      XAnim_CalcPosDeltaDuring_unsigned_short_(deltaPart, v7, numframes, posDelta);
    }
    else
    {
      if ( v11 )
      {
        v12 = v11->size;
        if ( v11->size )
        {
          animTime.frameIndex = (int)(float)((float)numframes * v7);
          animTime.time = v7;
          animTime.frameFrac = (float)numframes * v7;
          XAnim_GetTimeIndex_unsigned_char_(&animTime, v11->u.frames.indices._1, v12, &keyFrameIndex, &keyFrameLerpFrac);
          Short4LerpAsVec4(v11->u.frames.frames[keyFrameIndex], v11->u.frames.frames[keyFrameIndex + 1], keyFrameLerpFrac, rotDelta);
        }
        else
        {
          rotDelta->v[0] = (float)v11->u.frame0[0];
          rotDelta->v[1] = (float)v11->u.frame0[1];
          rotDelta->v[2] = (float)v11->u.frame0[2];
          rotDelta->v[3] = (float)v11->u.frame0[3];
        }
      }
      else
      {
        rotDelta->v[3] = 32767.0;
        *(_QWORD *)rotDelta->v = 0i64;
        rotDelta->v[2] = 0.0;
      }
      XAnim_CalcPosDeltaDuring_unsigned_char_(deltaPart, v7, numframes, posDelta);
    }
  }
}

/*
==============
XAnim_CalcDeltaForTime
==============
*/

void __fastcall XAnim_CalcDeltaForTime(const XAnimParts *anim, double time, vec2_t *rotDelta, float4 *posDelta)
{
  float v7; 
  XAnimDeltaPart *deltaPart; 
  int numframes; 
  XAnimDeltaPartQuat2 *v11; 
  unsigned __int16 v12; 
  float v13; 
  __int16 (*v14)[2]; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  unsigned __int16 v19; 
  float v20; 
  __int16 (*frames)[2]; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  int v25; 
  XAnimDeltaPartQuat2 *quat2; 
  unsigned __int16 size; 
  XAnimDeltaPartQuatData2 *p_u; 
  float v29; 
  int v30; 
  float v31; 
  XAnimTime animTime; 
  XAnimTime v33; 
  float keyFrameLerpFrac; 
  int keyFrameIndex; 

  v7 = *(float *)&time;
  if ( *(float *)&time < 0.0 || *(float *)&time > 1.0 )
  {
    __asm { vxorpd  xmm1, xmm1, xmm1 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 4062, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( time ) && ( time ) <= ( 1.0f )", "time not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v7, *(double *)&_XMM1, DOUBLE_1_0) )
      __debugbreak();
  }
  deltaPart = anim->deltaPart;
  numframes = anim->numframes;
  if ( v7 == 1.0 || !anim->numframes )
  {
    quat2 = deltaPart->quat2;
    if ( quat2 )
    {
      size = quat2->size;
      p_u = &quat2->u;
      if ( size )
        p_u = (XAnimDeltaPartQuatData2 *)p_u->frames.frames[size];
      rotDelta->v[0] = (float)p_u->frame0[0];
      v29 = (float)p_u->frame0[1];
    }
    else
    {
      v29 = FLOAT_32767_0;
      rotDelta->v[0] = 0.0;
    }
    rotDelta->v[1] = v29;
    XAnim_CalcPosDeltaEntire(deltaPart, posDelta);
  }
  else
  {
    v11 = deltaPart->quat2;
    if ( (unsigned int)numframes >= 0x100 )
    {
      if ( v11 )
      {
        v19 = v11->size;
        if ( v11->size )
        {
          v33.frameIndex = (int)(float)((float)numframes * v7);
          v33.time = v7;
          v33.frameFrac = (float)numframes * v7;
          XAnim_GetTimeIndex_unsigned_short_(&v33, v11->u.frames.indices._2, v19, &v30, &v31);
          frames = v11->u.frames.frames;
          v22 = v30;
          v23 = frames[v30][0];
          v24 = v30 + 1;
          rotDelta->v[0] = (float)((float)(frames[v24][0] - v23) * v31) + (float)v23;
          v25 = frames[v22][1];
          v20 = (float)((float)(frames[v24][1] - v25) * v31) + (float)v25;
        }
        else
        {
          rotDelta->v[0] = (float)v11->u.frame0[0];
          v20 = (float)v11->u.frame0[1];
        }
      }
      else
      {
        v20 = FLOAT_32767_0;
        rotDelta->v[0] = 0.0;
      }
      rotDelta->v[1] = v20;
      XAnim_CalcPosDeltaDuring_unsigned_short_(deltaPart, v7, numframes, posDelta);
    }
    else
    {
      if ( v11 )
      {
        v12 = v11->size;
        if ( v11->size )
        {
          animTime.frameIndex = (int)(float)((float)numframes * v7);
          animTime.time = v7;
          animTime.frameFrac = (float)numframes * v7;
          XAnim_GetTimeIndex_unsigned_char_(&animTime, v11->u.frames.indices._1, v12, &keyFrameIndex, &keyFrameLerpFrac);
          v14 = v11->u.frames.frames;
          v15 = keyFrameIndex;
          v16 = v14[keyFrameIndex][0];
          v17 = keyFrameIndex + 1;
          rotDelta->v[0] = (float)((float)(v14[v17][0] - v16) * keyFrameLerpFrac) + (float)v16;
          v18 = v14[v15][1];
          v13 = (float)((float)(v14[v17][1] - v18) * keyFrameLerpFrac) + (float)v18;
        }
        else
        {
          rotDelta->v[0] = (float)v11->u.frame0[0];
          v13 = (float)v11->u.frame0[1];
        }
      }
      else
      {
        v13 = FLOAT_32767_0;
        rotDelta->v[0] = 0.0;
      }
      rotDelta->v[1] = v13;
      XAnim_CalcPosDeltaDuring_unsigned_char_(deltaPart, v7, numframes, posDelta);
    }
  }
}

/*
==============
XAnim_CalcPosDeltaEntire
==============
*/
void XAnim_CalcPosDeltaEntire(const XAnimDeltaPart *animDelta, float4 *posDelta)
{
  XAnimPartTrans *trans; 
  unsigned __int16 size; 
  __int128 v6; 
  __int128 v18; 
  __m128 v23; 
  __int128 v27; 
  __m128 v28; 

  trans = animDelta->trans;
  if ( animDelta->trans )
  {
    size = trans->size;
    if ( trans->size )
    {
      _R9 = trans->u.frames.frames;
      _RCX = size;
      if ( trans->smallTrans )
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
      HIDWORD(v27) = 0;
      v18 = v27;
      *(float *)&v18 = trans->u.frames.mins.v[0];
      _XMM4 = v18;
      __asm
      {
        vinsertps xmm4, xmm4, dword ptr [r8+0Ch], 10h
        vinsertps xmm4, xmm4, dword ptr [r8+10h], 20h ; ' '
      }
      v28 = _XMM4;
      _XMM2 = _mm_cvtepi32_ps(_XMM1);
      v28.m128_i32[3] = 0;
      v23 = v28;
      v23.m128_f32[0] = trans->u.frames.size.v[0];
      _XMM3 = v23;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r8+18h], 10h
        vinsertps xmm3, xmm3, dword ptr [r8+1Ch], 20h ; ' '
        vinsertps xmm5, xmm2, xmm2, 8
      }
      posDelta->v = _mm128_add_ps(_mm128_mul_ps(_XMM5, _XMM3), _XMM4);
    }
    else
    {
      HIDWORD(v27) = 0;
      v6 = v27;
      *(float *)&v6 = trans->u.frames.mins.v[0];
      _XMM3 = v6;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [r8+0Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [r8+10h], 20h ; ' '
      }
      *posDelta = (float4)_XMM3.v;
    }
  }
  else
  {
    *posDelta = 0i64;
  }
}

/*
==============
XAnim_CalculateBlendShapeTargetWeights
==============
*/
void XAnim_CalculateBlendShapeTargetWeights(const DObj *dobj, const float *weights)
{
  const DObj *v3; 
  float *BlendShapeTargetWeights; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  __int16 *v8; 
  unsigned __int16 *v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  float v12; 
  unsigned __int64 v13; 
  int v14; 
  float v15; 
  __int128 v16; 
  unsigned __int16 v20; 
  unsigned __int16 v21; 
  float v22; 
  unsigned __int16 *v23; 
  int v25; 
  __int64 v26; 

  v3 = dobj;
  BlendShapeTargetWeights = DObjGetBlendShapeTargetWeights(dobj);
  memset_0(BlendShapeTargetWeights, 0, 4i64 * v3->blendShapeTargetCount);
  v5 = 0;
  v25 = 0;
  if ( v3->numModels )
  {
    v6 = 0i64;
    v26 = 0i64;
    do
    {
      v7 = *(__int64 *)((char *)v3->models + v6);
      v8 = *(__int16 **)(v7 + 656);
      if ( v8 )
      {
        v9 = (unsigned __int16 *)*((_QWORD *)v8 + 2);
        v10 = *v8;
        v11 = v8[1];
        v12 = FLOAT_1_0;
        v13 = (unsigned __int64)&v9[4 * (unsigned __int16)v8[2]];
        if ( *v8 )
        {
          v14 = 1;
          if ( *(unsigned __int8 *)(v7 + 10) - 1 < 1 )
            v14 = *(unsigned __int8 *)(v7 + 10) - 1;
          v15 = *(float *)(((__int64)v14 << 6) + v7 + 240);
          v16 = LODWORD(FLOAT_N1_0);
          *(float *)&v16 = (float)(-1.0 / (float)(v15 - (float)(v15 * 0.75))) * (float)(v15 * 0.75);
          _XMM2 = v16;
          __asm
          {
            vmaxss  xmm1, xmm2, xmm11
            vminss  xmm0, xmm1, xmm8
          }
          v12 = 1.0 - *(float *)&_XMM0;
        }
        if ( (unsigned __int64)v9 < v13 )
        {
          v20 = *v9;
LABEL_10:
          v21 = v20;
          if ( v20 >= v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3390, ASSERT_TYPE_ASSERT, "(weightIndex < modelWeightCount)", (const char *)&queryFormat, "weightIndex < modelWeightCount") )
            __debugbreak();
          v22 = weights[v21];
          if ( v22 <= *((float *)v9 + 1) )
          {
            if ( v9[1] >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3394, ASSERT_TYPE_ASSERT, "(map->targetIndex < blendShapeTargetCount)", (const char *)&queryFormat, "map->targetIndex < blendShapeTargetCount") )
              __debugbreak();
            BlendShapeTargetWeights[v9[1]] = (float)(v22 / *((float *)v9 + 1)) * v12;
            goto LABEL_30;
          }
          do
          {
            v23 = v9;
            v9 += 4;
            if ( (unsigned __int64)v9 >= v13 || *v9 != v21 )
              goto LABEL_29;
          }
          while ( v22 > *((float *)v9 + 1) );
          if ( *v9 != v21 )
          {
LABEL_29:
            v9 = v23;
            BlendShapeTargetWeights[v23[1]] = v12;
            goto LABEL_30;
          }
          if ( v9[1] >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3403, ASSERT_TYPE_ASSERT, "(map->targetIndex < blendShapeTargetCount)", (const char *)&queryFormat, "map->targetIndex < blendShapeTargetCount") )
            __debugbreak();
          BlendShapeTargetWeights[v9[1]] = (float)((float)(v22 - *((float *)v9 - 1)) / (float)(*((float *)v9 + 1) - *((float *)v9 - 1))) * v12;
          if ( *(v9 - 3) >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_calc.cpp", 3405, ASSERT_TYPE_ASSERT, "(( map - 1 )->targetIndex < blendShapeTargetCount)", (const char *)&queryFormat, "( map - 1 )->targetIndex < blendShapeTargetCount") )
            __debugbreak();
          BlendShapeTargetWeights[*(v9 - 3)] = (float)(1.0 - BlendShapeTargetWeights[v9[1]]) * v12;
LABEL_30:
          while ( 1 )
          {
            v9 += 4;
            if ( (unsigned __int64)v9 >= v13 )
              break;
            v20 = *v9;
            if ( *v9 != v21 )
              goto LABEL_10;
          }
          v5 = v25;
          v3 = dobj;
          v6 = v26;
        }
        BlendShapeTargetWeights += v10;
        weights += v11;
      }
      ++v5;
      v6 += 8i64;
      v25 = v5;
      v26 = v6;
    }
    while ( v5 < v3->numModels );
  }
}

/*
==============
XAnim_SetTime
==============
*/
void XAnim_SetTime(const float time, const int frameCount, XAnimTime *animTime)
{
  float v3; 

  animTime->time = time;
  v3 = (float)frameCount * time;
  animTime->frameIndex = (int)v3;
  animTime->frameFrac = v3;
}

/*
==============
XAnim_ShouldNormalizeChildren
==============
*/
char XAnim_ShouldNormalizeChildren(const XAnimInfo *info)
{
  unsigned int flags; 
  unsigned __int16 children; 
  __int128 v3; 
  XAnimInfo *AnimInfo; 
  __int128 v5; 

  flags = info->animParent.flags;
  if ( (flags & 0x20) != 0 )
    return 0;
  if ( (flags & 0x8000) != 0 )
  {
    children = info->children;
    v3 = 0i64;
    if ( children )
    {
      while ( 1 )
      {
        AnimInfo = GetAnimInfo(children);
        if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 581, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
          __debugbreak();
        if ( AnimInfo->animToModel )
          goto LABEL_16;
        if ( (AnimInfo->animParent.flags & 0x210) != 0 )
          return 0;
        if ( (AnimInfo->animParent.flags & 0x100) == 0 )
        {
LABEL_16:
          v5 = v3;
          *(float *)&v5 = *(float *)&v3 + AnimInfo->state.weight;
          v3 = v5;
          if ( *(float *)&v5 >= 0.99900001 )
            return 1;
        }
        children = AnimInfo->next;
        if ( !children )
          return 0;
      }
    }
    return 0;
  }
  return 1;
}


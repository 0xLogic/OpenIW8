/*
==============
XAnimNode_IKLadderWM_GetBestRungTarget
==============
*/

bool __fastcall XAnimNode_IKLadderWM_GetBestRungTarget(const vec3_t *bonePos, const vec4_t *boneQuat, vec3_t *outBoneTargetPos, int ikType, float goalWeight, XAnimNode_IKLadderWM *node)
{
  return ?XAnimNode_IKLadderWM_GetBestRungTarget@@YA_NAEBTvec3_t@@Tvec4_t@@AEAT1@HMPEAUXAnimNode_IKLadderWM@@@Z(bonePos, boneQuat, outBoneTargetPos, ikType, goalWeight, node);
}

/*
==============
XAnimNode_IKLadder_GetAimTarget
==============
*/

void __fastcall XAnimNode_IKLadder_GetAimTarget(const XAnimNode_IKLadderWM *node, vec3_t *outAimTarget)
{
  ?XAnimNode_IKLadder_GetAimTarget@@YAXPEBUXAnimNode_IKLadderWM@@AEATvec3_t@@@Z(node, outAimTarget);
}

/*
==============
XAnimNode_IKLadder_GetBestAimTarget
==============
*/

void __fastcall XAnimNode_IKLadder_GetBestAimTarget(const vec3_t *bonePos, XAnimNode_IKLadderWM *node, vec3_t *outBoneTargetPos)
{
  ?XAnimNode_IKLadder_GetBestAimTarget@@YAXAEBTvec3_t@@PEAUXAnimNode_IKLadderWM@@AEAT1@@Z(bonePos, node, outBoneTargetPos);
}

/*
==============
XAnimNode_IKLadder_GetLocalAimRungIndex
==============
*/

double __fastcall XAnimNode_IKLadder_GetLocalAimRungIndex(float animationTime)
{
  double result; 

  *(float *)&result = ?XAnimNode_IKLadder_GetLocalAimRungIndex@@YAMM@Z(animationTime);
  return result;
}

/*
==============
XAnimNode_IKLadderWM_Register
==============
*/

void XAnimNode_IKLadderWM_Register(void)
{
  ?XAnimNode_IKLadderWM_Register@@YAXXZ();
}

/*
==============
XAnimNode_IKLadderWM_Init
==============
*/
void XAnimNode_IKLadderWM_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  *(_QWORD *)((char *)nodeData + 12) = 0i64;
  *(_QWORD *)((char *)nodeData + 20) = 0i64;
  *(_QWORD *)((char *)nodeData + 28) = 0i64;
  *(_QWORD *)((char *)nodeData + 36) = 0i64;
  *((_DWORD *)nodeData + 11) = 0;
  *((_DWORD *)nodeData + 12) = 1094713344;
  *((_DWORD *)nodeData + 13) = 1094713344;
  *((_BYTE *)nodeData + 63) = 0;
  *((_DWORD *)nodeData + 30) = -1082130432;
  *((_DWORD *)nodeData + 31) = -1082130432;
  *((_DWORD *)nodeData + 32) = -1082130432;
  *((_DWORD *)nodeData + 33) = -1082130432;
}

/*
==============
XAnimNode_IKLadderWM_Destroy
==============
*/
void XAnimNode_IKLadderWM_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimNode_IKLadderWM_Update
==============
*/
void XAnimNode_IKLadderWM_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  refdef_t *v7; 

  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 72, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 73, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 74, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 75, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v7 = g_activeRefDef;
  if ( g_activeRefDef )
  {
    *((_DWORD *)nodeData + 19) = LODWORD(g_activeRefDef->viewOffset.v[0]);
    *((_DWORD *)nodeData + 20) = LODWORD(v7->viewOffset.v[1]);
    *((_DWORD *)nodeData + 21) = LODWORD(v7->viewOffset.v[2]);
  }
}

/*
==============
XAnimNode_IKLadderWM_Calc
==============
*/
void XAnimNode_IKLadderWM_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  XAnimIKCalcInfo *ikCalcInfo; 
  unsigned int v11; 
  XAnimIKDObjData *dObjData; 
  unsigned int v13; 
  _DWORD *v14; 
  __int64 i; 
  __int64 v16; 
  unsigned int v19; 
  unsigned __int64 v20; 
  __int64 v24; 
  signed __int64 v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  int v28; 
  bool v29; 
  __m128 v; 
  __m128 v32; 
  __m128 v33; 
  float v34; 
  float v35; 
  __int128 v37; 
  float v38; 
  float v43; 
  double GoalWeight; 
  double Weight; 
  float v46; 
  __int128 v48; 
  const float4 *fmt; 
  XAnimCalcBuffer *v57; 
  const float4 *v58; 
  __int64 calcMode; 
  vec3_t v62; 
  vec3_t v63; 
  __int128 v64; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  tmat33_t<vec3_t> axis; 
  vec4_t quat; 
  __int64 v70[4]; 

  *(_QWORD *)v62.v = nodeData;
  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 308, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  AnglesToAxis((const vec3_t *)nodeData + 3, &axis);
  AnglesToQuat((const vec3_t *)nodeData + 3, &quat);
  ikCalcInfo = animCalcInfo->ikCalcInfo;
  if ( ikCalcInfo->dObjData && ikCalcInfo->ikData && (float)((float)((float)(*((float *)nodeData + 6) * *((float *)nodeData + 6)) + (float)(*((float *)nodeData + 7) * *((float *)nodeData + 7))) + (float)(*((float *)nodeData + 8) * *((float *)nodeData + 8))) > 0.0 && (float)((float)((float)(*((float *)nodeData + 19) * *((float *)nodeData + 19)) + (float)(*((float *)nodeData + 20) * *((float *)nodeData + 20))) + (float)(*((float *)nodeData + 21) * *((float *)nodeData + 21))) > 0.0 )
  {
    XAnimNode_IKLadder_GetAimTarget((const XAnimNode_IKLadderWM *)nodeData, (vec3_t *)((char *)nodeData + 64));
    v11 = 0;
    dObjData = animCalcInfo->ikCalcInfo->dObjData;
    v70[0] = (__int64)dObjData->boneInfo;
    v70[1] = (__int64)&dObjData->boneInfo[1];
    v70[2] = (__int64)&dObjData->boneInfo[2];
    v70[3] = (__int64)&dObjData->boneInfo[3];
    v13 = 0;
    v14 = (char *)nodeData + 88;
    while ( !*v14 )
    {
      ++v13;
      ++v14;
      if ( v13 >= 8 )
      {
        for ( i = 0i64; i < 4; ++i )
        {
          v16 = v70[i];
          bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 88, *(_DWORD *)(v16 + 16));
          bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 88, *(_DWORD *)(v16 + 12));
        }
        DObjCompleteHierarchyBits(obj, (DObjPartBits *)((char *)nodeData + 88));
        break;
      }
    }
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, animCalcInfo->partBits);
    _RDI = animCalcInfo->partBits;
    _R14 = (char *)((_BYTE *)nodeData + 88 - (_BYTE *)_RDI);
    v19 = 0;
    v20 = 2i64;
    do
    {
      __asm
      {
        vlddqu  xmm6, xmmword ptr [r14+rdi]
        vlddqu  xmm0, xmmword ptr [rdi]
        vpor    xmm6, xmm0, xmm6
      }
      *(_OWORD *)_RDI->array = _XMM6;
      _RDI = (DObjPartBits *)((char *)_RDI + 16);
      ++v19;
    }
    while ( v19 < 2 );
    XAnimCalcDefaultBlendNode(animCalcInfo, obj, animInfo, weightScale, bNormQuat, destBuffer, LINEAR);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(animCalcInfo->partBits, &otherBitSet);
    v24 = *(_QWORD *)v62.v;
    if ( *(_BYTE *)(*(_QWORD *)v62.v + 60i64) )
    {
      if ( *(_BYTE *)(*(_QWORD *)v62.v + 61i64) || *(_BYTE *)(*(_QWORD *)v62.v + 62i64) )
        v20 = 1i64;
    }
    else
    {
      v11 = 2;
      v20 = 4i64;
    }
    v25 = v11;
    if ( v11 < v20 )
    {
      do
      {
        v26 = v70[v25];
        v27 = *(unsigned int *)(v26 + 16);
        v28 = *(_DWORD *)(v26 + 16);
        if ( !*(_BYTE *)(v24 + 60) )
          v28 = *(_DWORD *)(v26 + 12);
        if ( (unsigned int)v27 >= 0x100 )
        {
          LODWORD(calcMode) = 256;
          LODWORD(v57) = *(_DWORD *)(v26 + 16);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v57, calcMode) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v27 & 0x1F)) & animCalcInfo->ignorePartBits.array[v27 >> 5]) == 0 && (unsigned int)(v27 - 254) > 1 )
        {
          XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v28, &outModelQuat, &outModelTranslation);
          v29 = *(_BYTE *)(v24 + 61) == 0;
          v = outModelTranslation.v;
          v32 = outModelTranslation.v;
          v32.m128_f32[0] = outModelTranslation.v.m128_f32[0] + *(float *)(v24 + 76);
          _XMM9 = v32;
          v33 = outModelQuat.v;
          v34 = _mm_shuffle_ps(v, v, 85).m128_f32[0] + *(float *)(v24 + 80);
          v35 = _mm_shuffle_ps(v, v, 170).m128_f32[0] + *(float *)(v24 + 84);
          __asm { vunpcklps xmm0, xmm9, xmm10 }
          v63.v[2] = v35;
          *(double *)v63.v = *(double *)&_XMM0;
          *(double *)v62.v = *(double *)&_XMM0;
          v62.v[2] = v35;
          if ( v29 )
          {
            GoalWeight = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animInfo->animIndex);
            *(__m128 *)otherBitSet.array = v33;
            XAnimNode_IKLadderWM_GetBestRungTarget(&v63, (const vec4_t *)&otherBitSet, &v62, v11, *(float *)&GoalWeight, (XAnimNode_IKLadderWM *)v24);
            v43 = v62.v[0];
          }
          else
          {
            v37 = *(unsigned int *)(v24 + 48);
            v38 = (float)((float)((float)(v34 - *(float *)(v24 + 16)) * axis.m[1].v[1]) + (float)((float)(_XMM9.m128_f32[0] - *(float *)(v24 + 12)) * axis.m[1].v[0])) + (float)((float)(v35 - *(float *)(v24 + 20)) * axis.m[1].v[2]);
            if ( COERCE_FLOAT(LODWORD(v38) & _xmm) > (float)(*(float *)&v37 * 0.5) )
            {
              _XMM0 = 0i64;
              __asm { vcmpless xmm0, xmm0, xmm4 }
              _XMM1 = v37 ^ (unsigned int)_xmm;
              __asm { vblendvps xmm0, xmm1, xmm5, xmm0 }
              v38 = *(float *)&_XMM0 * 0.5;
            }
            v43 = (float)(axis.m[1].v[0] * v38) + *(float *)(v24 + 64);
          }
          Weight = XAnimGetWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animInfo->animIndex);
          if ( *(float *)&Weight < 1.0 )
            v43 = (float)((float)(1.0 - *(float *)&Weight) * _XMM9.m128_f32[0]) + (float)(v43 * *(float *)&Weight);
          v46 = v43 - *(float *)(v24 + 76);
          HIDWORD(v64) = 0;
          v48 = v64;
          *(float *)&v48 = v46;
          _XMM6 = v48;
          _XMM0 = outModelQuat.v;
          __asm
          {
            vinsertps xmm6, xmm6, xmm1, 10h
            vcmpneqps xmm1, xmm0, xmm0
            vmovmskps eax, xmm1
            vinsertps xmm6, xmm6, xmm2, 20h ; ' '
          }
          v64 = _XMM6;
          if ( _EAX )
          {
            v58 = (const float4 *)"!Float4IsNaN( localAnimQuat )";
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 465, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( localAnimQuat ))", (const char *)&queryFormat) )
              __debugbreak();
          }
          __asm
          {
            vcmpneqps xmm0, xmm6, xmm6
            vmovmskps eax, xmm0
          }
          if ( _EAX )
          {
            v58 = (const float4 *)"!Float4IsNaN( modelPos )";
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 466, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( modelPos ))", (const char *)&queryFormat) )
              __debugbreak();
          }
          XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, v27, fmt, v58, 1.0);
        }
        ++v11;
        ++v25;
      }
      while ( v25 < (__int64)v20 );
    }
  }
}

/*
==============
XAnimNode_IKLadderWM_Read
==============
*/
void XAnimNode_IKLadderWM_Read(void *nodeData, MemoryFile *memFile)
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

  Float = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 3) = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 4) = *(float *)&v5;
  v6 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 5) = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 6) = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 7) = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 8) = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 9) = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 10) = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 11) = *(float *)&v12;
  v13 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 12) = *(float *)&v13;
  v14 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 13) = *(float *)&v14;
  v15 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 19) = *(float *)&v15;
  v16 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 20) = *(float *)&v16;
  v17 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 21) = *(float *)&v17;
}

/*
==============
XAnimNode_IKLadderWM_Write
==============
*/
void XAnimNode_IKLadderWM_Write(void *nodeData, MemoryFile *memFile)
{
  MemFile_ArchiveVec3(memFile, (vec3_t *)nodeData + 1);
  MemFile_ArchiveVec3(memFile, (vec3_t *)nodeData + 2);
  MemFile_ArchiveVec3(memFile, (vec3_t *)nodeData + 3);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 12);
  MemFile_ArchiveFloat(memFile, (float *)nodeData + 13);
  MemFile_ArchiveVec3(memFile, (vec3_t *)((char *)nodeData + 76));
}

/*
==============
XAnimNode_IKLadderWM_PostParse
==============
*/
char XAnimNode_IKLadderWM_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  return 1;
}

/*
==============
XAnimNode_IKLadderWM_GetBestRungTarget
==============
*/
bool XAnimNode_IKLadderWM_GetBestRungTarget(const vec3_t *bonePos, const vec4_t *boneQuat, vec3_t *outBoneTargetPos, int ikType, float goalWeight, XAnimNode_IKLadderWM *node)
{
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int64 v15; 
  double ScrubOffset; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  const dvar_t *v23; 
  const char *v24; 
  float v26; 
  float v27; 
  __int128 m_ladderRungDist_low; 
  float v29; 
  float v34; 
  const dvar_t *v35; 
  __int64 v36; 
  float value; 
  __int128 v39; 
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
  __int128 m_ladderWidth_low; 
  float v52; 
  const dvar_t *v56; 
  const char *v57; 
  float v58; 
  float v59; 
  float v60; 
  bool result; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  tmat33_t<vec3_t> axis; 
  vec3_t out; 
  vec3_t in; 
  __int128 v71; 
  __int128 v72; 
  __int128 v73; 
  __int128 v74; 
  __int128 v75; 
  __int128 v76; 
  __int128 v77; 

  v77 = v6;
  v76 = v7;
  v75 = v8;
  v74 = v9;
  v73 = v10;
  v72 = v11;
  v71 = v12;
  v15 = ikType;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 201, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  AnglesToAxis(&node->m_ladderAngles, &axis);
  ScrubOffset = BG_Ladder_GetScrubOffset(&node->m_ladderBottom, &node->m_ladderTop, node->m_ladderHandDist);
  v17 = (float)(COERCE_FLOAT(LODWORD(ScrubOffset) ^ _xmm) * axis.m[2].v[0]) + node->m_ladderBottom.v[0];
  v18 = (float)(COERCE_FLOAT(LODWORD(ScrubOffset) ^ _xmm) * axis.m[2].v[1]) + node->m_ladderBottom.v[1];
  v19 = (float)(COERCE_FLOAT(LODWORD(ScrubOffset) ^ _xmm) * axis.m[2].v[2]) + node->m_ladderBottom.v[2];
  v20 = node->m_ladderTop.v[0] - v17;
  v21 = LODWORD(node->m_ladderTop.v[1]);
  *(float *)&v21 = node->m_ladderTop.v[1] - v18;
  v22 = node->m_ladderTop.v[2] - v19;
  if ( (int)v15 >= 2 )
  {
    v23 = DCONST_DVARFLT_xanim_ladder_ankle_query_offset;
    if ( DCONST_DVARFLT_xanim_ladder_ankle_query_offset )
      goto LABEL_11;
    v24 = "xanim_ladder_ankle_query_offset";
  }
  else
  {
    v23 = DCONST_DVARFLT_xanim_ladder_wrist_query_offset;
    if ( DCONST_DVARFLT_xanim_ladder_wrist_query_offset )
      goto LABEL_11;
    v24 = "xanim_ladder_wrist_query_offset";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v24) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(v23);
  _XMM7 = 0i64;
  LODWORD(in.v[0]) = v23->current.integer;
  in.v[1] = 0.0;
  in.v[2] = 0.0;
  QuatTransform(boneQuat, &in, &out);
  v26 = out.v[0] + bonePos->v[0];
  v27 = out.v[1] + bonePos->v[1];
  m_ladderRungDist_low = LODWORD(node->m_ladderRungDist);
  v65 = (float)(out.v[2] + bonePos->v[2]) - v19;
  out.v[2] = out.v[2] + bonePos->v[2];
  v29 = v26 - v17;
  out.v[1] = v27;
  out.v[0] = v26;
  *(float *)&v21 = fsqrt((float)((float)(*(float *)&v21 * *(float *)&v21) + (float)(v20 * v20)) + (float)(v22 * v22));
  _XMM5 = v21;
  v66 = v27 - v18;
  __asm { vminss  xmm0, xmm5, xmm2; X }
  _XMM6 = 0i64;
  __asm { vroundss xmm6, xmm6, xmm3, 1 }
  v34 = fmodf_0(*(float *)&_XMM0, *(float *)&m_ladderRungDist_low);
  v35 = DCONST_DVARFLT_xanim_ladder_ik_dist_ratio;
  if ( !DCONST_DVARFLT_xanim_ladder_ik_dist_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_ik_dist_ratio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v35);
  if ( goalWeight > 0.0 || (v36 = v15, node->m_prevRungTarget[v15] < 0.0) || (_DWORD)v15 )
  {
    value = v35->current.value;
    v36 = v15;
    if ( v34 < (float)((float)(1.0 - value) * *(float *)&m_ladderRungDist_low) )
    {
      if ( node->m_prevRungTarget[v15] >= 0.0 )
      {
        if ( v34 > (float)(value * *(float *)&m_ladderRungDist_low) )
          *(float *)&_XMM6 = node->m_prevRungTarget[v15];
      }
      else
      {
        v39 = m_ladderRungDist_low;
        *(float *)&v39 = *(float *)&m_ladderRungDist_low * 0.5;
        _XMM0 = v39;
        __asm
        {
          vcmpless xmm0, xmm0, xmm10
          vblendvps xmm6, xmm6, xmm1, xmm0
        }
      }
    }
    else
    {
      *(float *)&_XMM6 = *(float *)&_XMM6 + 1.0;
    }
  }
  else
  {
    *(float *)&_XMM6 = node->m_prevRungTarget[v15];
  }
  v41 = *(float *)&_XMM6 * *(float *)&m_ladderRungDist_low;
  v42 = (float)(*(float *)&_XMM6 * *(float *)&m_ladderRungDist_low) * axis.m[2].v[0];
  node->m_prevRungTarget[v36] = *(float *)&_XMM6;
  v43 = v42 + v17;
  v44 = axis.m[1].v[1];
  v45 = (float)(v41 * axis.m[2].v[1]) + v18;
  v46 = axis.m[1].v[0];
  v47 = (float)(v41 * axis.m[2].v[2]) + v19;
  v48 = axis.m[1].v[2];
  v49 = (float)(axis.m[1].v[1] * v66) + (float)(axis.m[1].v[0] * v29);
  v50 = axis.m[1].v[2] * v65;
  outBoneTargetPos->v[0] = v43;
  outBoneTargetPos->v[1] = v45;
  outBoneTargetPos->v[2] = v47;
  m_ladderWidth_low = LODWORD(node->m_ladderWidth);
  v52 = v49 + v50;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v49 + v50) & _xmm) > (float)(*(float *)&m_ladderWidth_low * 0.5) )
  {
    _XMM1 = m_ladderWidth_low ^ _xmm;
    __asm
    {
      vcmpless xmm0, xmm7, xmm4
      vblendvps xmm0, xmm1, xmm5, xmm0
    }
    v52 = *(float *)&_XMM0 * 0.5;
  }
  outBoneTargetPos->v[0] = (float)(v46 * v52) + v43;
  outBoneTargetPos->v[2] = (float)(v48 * v52) + v47;
  outBoneTargetPos->v[1] = (float)(v44 * v52) + v45;
  if ( (int)v15 > 1 )
  {
    v56 = DCONST_DVARVEC3_xanim_ladder_rung_ankle_ik_offset;
    if ( DCONST_DVARVEC3_xanim_ladder_rung_ankle_ik_offset )
      goto LABEL_33;
    v57 = "xanim_ladder_rung_ankle_ik_offset";
  }
  else
  {
    v56 = DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset;
    if ( DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset )
      goto LABEL_33;
    v57 = "xanim_ladder_rung_wrist_ik_offset";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v57) )
    __debugbreak();
LABEL_33:
  Dvar_CheckFrontendServerThread(v56);
  v58 = v56->current.value;
  v59 = v56->current.vector.v[1];
  v60 = v56->current.vector.v[2];
  result = 1;
  v62 = v59 * axis.m[1].v[2];
  v63 = (float)((float)(v58 * axis.m[0].v[1]) + outBoneTargetPos->v[1]) + (float)(v59 * axis.m[1].v[1]);
  outBoneTargetPos->v[0] = (float)((float)((float)(v58 * axis.m[0].v[0]) + outBoneTargetPos->v[0]) + (float)(v59 * axis.m[1].v[0])) + (float)(v60 * axis.m[2].v[0]);
  v64 = (float)(v58 * axis.m[0].v[2]) + outBoneTargetPos->v[2];
  outBoneTargetPos->v[1] = v63 + (float)(v60 * axis.m[2].v[1]);
  outBoneTargetPos->v[2] = (float)(v64 + v62) + (float)(v60 * axis.m[2].v[2]);
  return result;
}

/*
==============
XAnimNode_IKLadderWM_Register
==============
*/
void XAnimNode_IKLadderWM_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimNode_IKLadderWM>::ms_typeInfo);
}

/*
==============
XAnimNode_IKLadder_GetAimTarget
==============
*/
void XAnimNode_IKLadder_GetAimTarget(const XAnimNode_IKLadderWM *node, vec3_t *outAimTarget)
{
  float v2; 
  float v5; 
  float v6; 
  __int128 v9; 
  const dvar_t *v10; 
  __int128 v11; 
  float v12; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  float v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  float value; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  tmat33_t<vec3_t> axis; 

  v2 = node->m_ladderTop.v[0] - node->m_ladderBottom.v[0];
  v5 = node->m_ladderTop.v[2] - node->m_ladderBottom.v[2];
  v6 = node->m_ladderTop.v[1] - node->m_ladderBottom.v[1];
  AnglesToAxis(&node->m_ladderAngles, &axis);
  BG_Ladder_GetScrubOffset(&node->m_ladderBottom, &node->m_ladderTop, node->m_ladderHandDist);
  fsqrt((float)((float)(v2 * v2) + (float)(v6 * v6)) + (float)(v5 * v5));
  v9 = LODWORD(FLOAT_0_5);
  _XMM8 = 0i64;
  __asm { vroundss xmm8, xmm8, xmm2, 1 }
  *(double *)&v9 = BG_Ladder_GetTargetAnimationTime(&node->m_ladderAnchor, &node->m_ladderBottom, &node->m_ladderTop, node->m_ladderHandDist);
  v10 = DCONST_DVARFLT_xanim_ladder_aim_rung_one_time;
  v11 = LODWORD(FLOAT_2_0);
  v12 = (float)(2.0 * node->m_ladderHandDist) / node->m_ladderRungDist;
  _XMM6 = v9;
  if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_one_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_one_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( *(float *)&v9 > v10->current.value )
  {
    v15 = DCONST_DVARFLT_xanim_ladder_aim_rung_two_time;
    if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_two_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_two_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( *(float *)&v9 > v15->current.value )
    {
      v16 = DCONST_DVARFLT_xanim_ladder_aim_rung_three_time;
      if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_three_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_three_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( *(float *)&v9 > v16->current.value )
      {
        v17 = DCONST_DVARFLT_xanim_ladder_aim_rung_four_time;
        if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_four_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_four_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        __asm { vcmpless xmm1, xmm6, dword ptr [rbx+28h] }
        _XMM0 = LODWORD(FLOAT_3_0);
        __asm { vblendvps xmm2, xmm0, xmm7, xmm1 }
      }
      else
      {
        *(float *)&_XMM2 = FLOAT_1_0;
      }
    }
    else
    {
      LODWORD(_XMM2) = 0;
    }
  }
  else
  {
    *(float *)&_XMM2 = FLOAT_N1_0;
  }
  *(float *)&v11 = (float)(v12 * *(float *)&_XMM8) + *(float *)&_XMM2;
  _XMM2 = v11;
  __asm { vminss  xmm2, xmm2, xmm1 }
  v22 = *(float *)&_XMM2 * node->m_ladderRungDist;
  v23 = v22 * axis.m[2].v[1];
  outAimTarget->v[0] = (float)(v22 * axis.m[2].v[0]) + node->m_ladderBottom.v[0];
  v24 = v22 * axis.m[2].v[2];
  outAimTarget->v[1] = v23 + node->m_ladderBottom.v[1];
  outAimTarget->v[2] = v24 + node->m_ladderBottom.v[2];
  v25 = DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset;
  if ( !DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_rung_wrist_ik_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  value = v25->current.value;
  v27 = v25->current.vector.v[1];
  v28 = v25->current.vector.v[2];
  v29 = (float)(value * axis.m[0].v[1]) + outAimTarget->v[1];
  v30 = value * axis.m[0].v[2];
  v31 = v28 * axis.m[2].v[1];
  outAimTarget->v[0] = (float)((float)((float)(value * axis.m[0].v[0]) + outAimTarget->v[0]) + (float)(v27 * axis.m[1].v[0])) + (float)(v28 * axis.m[2].v[0]);
  v32 = v29 + (float)(v27 * axis.m[1].v[1]);
  v33 = v30 + outAimTarget->v[2];
  v34 = v32 + v31;
  v35 = v28 * axis.m[2].v[2];
  outAimTarget->v[1] = v34;
  outAimTarget->v[2] = (float)(v33 + (float)(v27 * axis.m[1].v[2])) + v35;
}

/*
==============
XAnimNode_IKLadder_GetBestAimTarget
==============
*/
void XAnimNode_IKLadder_GetBestAimTarget(const vec3_t *bonePos, XAnimNode_IKLadderWM *node, vec3_t *outBoneTargetPos)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int128 m_ladderWidth_low; 
  tmat33_t<vec3_t> axis; 

  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 90, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  AnglesToAxis(&node->m_ladderAngles, &axis);
  v6 = node->m_ladderBottom.v[2];
  v7 = bonePos->v[2];
  v8 = node->m_aimIKTarget.v[0];
  v9 = axis.m[1].v[0];
  v10 = axis.m[1].v[1];
  v11 = axis.m[1].v[2];
  v12 = (float)((float)(bonePos->v[0] - node->m_ladderBottom.v[0]) * axis.m[1].v[0]) + (float)((float)(bonePos->v[1] - node->m_ladderBottom.v[1]) * axis.m[1].v[1]);
  outBoneTargetPos->v[0] = v8;
  v13 = node->m_aimIKTarget.v[1];
  outBoneTargetPos->v[1] = v13;
  v14 = node->m_aimIKTarget.v[2];
  v15 = v12 + (float)((float)(v7 - v6) * v11);
  outBoneTargetPos->v[2] = v14;
  m_ladderWidth_low = LODWORD(node->m_ladderWidth);
  if ( COERCE_FLOAT(LODWORD(v15) & _xmm) > (float)(*(float *)&m_ladderWidth_low * 0.5) )
  {
    _XMM2 = m_ladderWidth_low ^ _xmm;
    _XMM0 = 0i64;
    __asm
    {
      vcmpless xmm1, xmm0, xmm4
      vblendvps xmm1, xmm2, xmm5, xmm1
    }
    v15 = *(float *)&_XMM1 * 0.5;
  }
  outBoneTargetPos->v[0] = (float)(v9 * v15) + v8;
  outBoneTargetPos->v[2] = (float)(v11 * v15) + v14;
  outBoneTargetPos->v[1] = (float)(v10 * v15) + v13;
}

/*
==============
XAnimNode_IKLadder_GetLocalAimRungIndex
==============
*/

float __fastcall XAnimNode_IKLadder_GetLocalAimRungIndex(double animationTime)
{
  const dvar_t *v1; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  v1 = DCONST_DVARFLT_xanim_ladder_aim_rung_one_time;
  _XMM6 = *(_OWORD *)&animationTime;
  if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_one_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_one_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( *(float *)&animationTime <= v1->current.value )
    return FLOAT_N1_0;
  v4 = DCONST_DVARFLT_xanim_ladder_aim_rung_two_time;
  if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_two_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_two_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( *(float *)&animationTime > v4->current.value )
  {
    v5 = DCONST_DVARFLT_xanim_ladder_aim_rung_three_time;
    if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_three_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_three_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( *(float *)&animationTime > v5->current.value )
    {
      v6 = DCONST_DVARFLT_xanim_ladder_aim_rung_four_time;
      if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_four_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_four_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      __asm { vcmpless xmm2, xmm6, dword ptr [rbx+28h] }
      _XMM0 = LODWORD(FLOAT_3_0);
      __asm { vblendvps xmm0, xmm0, xmm1, xmm2 }
    }
    else
    {
      *(float *)&_XMM0 = FLOAT_1_0;
    }
  }
  else
  {
    LODWORD(_XMM0) = 0;
  }
  return *(float *)&_XMM0;
}


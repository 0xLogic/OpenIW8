/*
==============
LocalQuatMultiplyReverseEquals
==============
*/

void __fastcall LocalQuatMultiplyReverseEquals(const vec4_t *in, vec4_t *inout)
{
  ?LocalQuatMultiplyReverseEquals@@YAXAEBTvec4_t@@AEAT1@@Z(in, inout);
}

/*
==============
DObjCalcSkelNoAnim
==============
*/

void __fastcall DObjCalcSkelNoAnim(const DObj *obj, DObjPartBits *partBits)
{
  ?DObjCalcSkelNoAnim@@YAXPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
DObjCalcBaseSkel
==============
*/

void __fastcall DObjCalcBaseSkel(const DObj *obj, DObjAnimMat *mat, DObjPartBits *partBits)
{
  ?DObjCalcBaseSkel@@YAXPEBUDObj@@PEAUDObjAnimMat@@PEIAUDObjPartBits@@@Z(obj, mat, partBits);
}

/*
==============
DObjCalcSkel
==============
*/

void __fastcall DObjCalcSkel(const DObj *obj, DObjPartBits *partBits)
{
  ?DObjCalcSkel@@YAXPEBUDObj@@PEAUDObjPartBits@@@Z(obj, partBits);
}

/*
==============
CalcSkelClientBones
==============
*/
const DObjDuplicatePair *CalcSkelClientBones(const XModel *model, DSkel *skel, int modelFirstBoneIndex, int modelFirstClientBoneIndex, const DObjPartBitsAligned *calcPartBits, const DObjDuplicatePair *duplicatePair)
{
  int numClientBones; 
  int clientToModelOffset; 
  int v12; 
  DObjAnimMat *mat; 
  int v14; 
  bool v16; 
  signed __int16 child; 
  int v18; 
  unsigned __int16 parent; 
  __m256i v20; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 143, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numClientBones = model->numClientBones;
  clientToModelOffset = modelFirstClientBoneIndex - model->numBones - modelFirstBoneIndex;
  if ( clientToModelOffset < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 551, ASSERT_TYPE_ASSERT, "(clientToModelOffset >= 0)", (const char *)&queryFormat, "clientToModelOffset >= 0") )
    __debugbreak();
  if ( clientToModelOffset > modelFirstClientBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 552, ASSERT_TYPE_ASSERT, "(clientToModelOffset <= modelFirstClientBoneIndex)", (const char *)&queryFormat, "clientToModelOffset <= modelFirstClientBoneIndex") )
    __debugbreak();
  v12 = numClientBones + modelFirstClientBoneIndex;
  mat = skel->mat;
  v14 = modelFirstClientBoneIndex;
  v16 = (calcPartBits->array[7] & 2) != 0;
  if ( modelFirstClientBoneIndex < v12 )
  {
    do
    {
      child = duplicatePair->child;
      if ( !duplicatePair->child )
        break;
      if ( child >= 0 )
        break;
      v18 = (child - 1) & 0x7FFF;
      if ( v18 >= v12 )
        break;
      if ( v18 > v14 && v16 )
        CalcSkelClientBonesNoDuplicates(v14, v18, mat, model, modelFirstClientBoneIndex, clientToModelOffset);
      parent = duplicatePair->parent;
      ++duplicatePair;
      v20 = (__m256i)mat[(parent - 1) & 0x7FFF];
      v14 = v18 + 1;
      mat[v18] = (DObjAnimMat)v20;
    }
    while ( v18 + 1 < v12 );
  }
  if ( v16 )
    CalcSkelClientBonesNoDuplicates(v14, v12, mat, model, modelFirstClientBoneIndex, clientToModelOffset);
  return duplicatePair;
}

/*
==============
CalcSkelClientBonesNoDuplicates
==============
*/
void CalcSkelClientBonesNoDuplicates(int startBoneIndex, int endBoneIndex, DObjAnimMat *mats, const XModel *model, int firstModelClientBoneIndex, int clientToModelOffset)
{
  unsigned __int8 *parentList; 
  int numBones; 
  __int64 v10; 
  __int64 numRootBones; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned __int8 *v16; 
  vec3_t *p_trans; 
  float *v18; 
  __m128 v19; 
  signed int v20; 
  __m128 v21; 
  int v22; 
  __m128 v23; 
  __m128 v25; 
  __m128 v26; 
  __m128 v27; 
  __m128 v28; 
  __m128 v29; 
  __m128 v44; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  __m128 v52; 
  __int64 v53; 
  __int64 v54; 
  int v55; 
  unsigned __int8 *v56; 
  __m128 v57; 

  _RBP = model;
  if ( endBoneIndex > startBoneIndex )
  {
    parentList = _RBP->parentList;
    numBones = _RBP->numBones;
    v10 = startBoneIndex;
    numRootBones = _RBP->numRootBones;
    __asm { vbroadcastss xmm13, dword ptr [rbp+24h] }
    v13 = endBoneIndex;
    if ( startBoneIndex < (__int64)endBoneIndex )
    {
      v14 = _RBP->numBones - numRootBones - firstModelClientBoneIndex;
      v15 = numBones + startBoneIndex - numRootBones - firstModelClientBoneIndex;
      v16 = &parentList[v14];
      p_trans = &mats[startBoneIndex].trans;
      v56 = &parentList[v14];
      v18 = &_RBP->trans[3 * startBoneIndex + 2 + 3 * v14];
      v55 = numRootBones - numBones;
      do
      {
        if ( v15 >= _RBP->numClientBones + _RBP->numBones - (unsigned int)numRootBones )
        {
          LODWORD(v54) = _RBP->numClientBones + _RBP->numBones - numRootBones;
          LODWORD(v53) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 462, ASSERT_TYPE_ASSERT, "(unsigned)( localParentListIndex ) < (unsigned)( XModelTotalNumBones( model ) - numRootBones )", "localParentListIndex doesn't index XModelTotalNumBones( model ) - numRootBones\n\t%i not in [0, %i)", v53, v54) )
            __debugbreak();
        }
        v19 = *(__m128 *)&p_trans[-2].z;
        v20 = v16[v10];
        v21 = *(__m128 *)p_trans->v;
        v22 = v20 + clientToModelOffset;
        v23 = _mm_shuffle_ps(v19, v19, 210);
        if ( v20 <= (int)(v15 + v55) )
          v22 = v16[v10];
        _RAX = 32i64 * v22;
        v25 = _mm_shuffle_ps(v19, v19, 255);
        v26 = *(__m128 *)((char *)&p_trans[-2].z - _RAX);
        v27 = *(__m128 *)&p_trans->v[_RAX / 0xFFFFFFFFFFFFFFFCui64];
        v28 = _mm_shuffle_ps(v26, v26, 255);
        v29 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v26, v26, 201), v23), _mm128_mul_ps(_mm_shuffle_ps(v26, v26, 210), _mm_shuffle_ps(v19, v19, 201)));
        _XMM1 = _mm128_mul_ps(v26, v19);
        __asm
        {
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vhaddps xmm3, xmm2, xmm2
        }
        _XMM2 = _mm128_sub_ps(_mm128_mul_ps(v25, v28), _XMM3);
        _mm128_add_ps(v29, _mm128_add_ps(_mm128_mul_ps(v26, v25), _mm128_mul_ps(v19, v28)));
        __asm
        {
          vblendps xmm6, xmm2, xmm0, 7
          vcmpneqps xmm1, xmm6, xmm6
          vmovmskps eax, xmm1
        }
        if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 489, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( worldChildQuat ))", (const char *)&queryFormat, "!Float4IsNaN( worldChildQuat )") )
          __debugbreak();
        _XMM0 = _mm128_mul_ps(_XMM6, _XMM6);
        __asm
        {
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
        }
        _XMM9 = _mm128_div_ps(_XMM6, _mm_sqrt_ps(_XMM0));
        __asm
        {
          vcmpneqps xmm0, xmm9, xmm9
          vmovmskps eax, xmm0
        }
        if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 492, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( worldChildQuat ))", (const char *)&queryFormat, "!Float4IsNaN( worldChildQuat )") )
          __debugbreak();
        if ( ((*(_DWORD *)(v18 - 2) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v18 - 1) & 0x7F800000) == 2139095040 || (*(_DWORD *)v18 & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 495, ASSERT_TYPE_SANITY, "( !IS_NAN( ( trans )[0] ) && !IS_NAN( ( trans )[1] ) && !IS_NAN( ( trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( trans )[0] ) && !IS_NAN( ( trans )[1] ) && !IS_NAN( ( trans )[2] )") )
          __debugbreak();
        v57.m128_i32[3] = 0;
        v44 = v57;
        v44.m128_f32[0] = *(v18 - 2);
        _XMM3 = v44;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rsi-4], 10h
          vinsertps xmm3, xmm3, dword ptr [rsi], 20h ; ' '
        }
        v57 = _XMM3;
        v47 = _mm128_add_ps(_mm128_mul_ps(_XMM13, v21), _XMM3);
        v48 = _mm_shuffle_ps(v26, v26, 210);
        v49 = _mm_shuffle_ps(v26, v26, 201);
        v50 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v47, v47, 210), v49), _mm128_mul_ps(_mm_shuffle_ps(v47, v47, 201), v48));
        v51 = _mm128_add_ps(v50, v50);
        v52 = _mm128_add_ps(v27, _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v51, v51, 210), v49), _mm128_mul_ps(_mm_shuffle_ps(v51, v51, 201), v48)), _mm128_add_ps(_mm128_mul_ps(_mm_shuffle_ps(v26, v26, 255), v51), v47)));
        *(__m128 *)&p_trans[-2].z = _XMM9;
        *(__m128 *)p_trans->v = _mm_shuffle_ps(v52, _mm_shuffle_ps(v52, (__m128)_xmm, 250), 132);
        if ( ((LODWORD(p_trans[-2].v[2]) & 0x7F800000) == 2139095040 || (LODWORD(p_trans[-1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(p_trans[-1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(p_trans[-1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 514, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] )") )
          __debugbreak();
        if ( ((LODWORD(p_trans->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(p_trans->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(p_trans->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 515, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )") )
          __debugbreak();
        if ( 2.0 != p_trans[1].v[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 538, ASSERT_TYPE_ASSERT, "(childMat->transWeight == 2.0f)", (const char *)&queryFormat, "childMat->transWeight == 2.0f") )
          __debugbreak();
        v16 = v56;
        ++v15;
        ++v10;
        v18 += 3;
        p_trans = (vec3_t *)((char *)p_trans + 32);
      }
      while ( v10 < v13 );
    }
  }
}

/*
==============
CalcSkelDuplicateBones
==============
*/
const DObjDuplicatePair *CalcSkelDuplicateBones(const XModel *model, DSkel *skel, int minBoneIndex, const bool isCompositeModel, const vec3_t *const modelAttachOffset, const vec4_t *const modelAttachQuat, const DObjDuplicatePair *pos, DObjPartBitsAligned *calcPartBits)
{
  const DObjDuplicatePair *v8; 
  unsigned int v10; 
  DObjAnimMat *mat; 
  int v12; 
  __int64 parent; 
  int i; 
  __int64 v15; 
  DObjAnimMat *v16; 
  int j; 
  __int64 v21; 
  float v23; 
  vec3_t out; 
  vec4_t in; 

  v8 = pos;
  v10 = minBoneIndex + model->numBones;
  mat = skel->mat;
  v12 = pos->child - 1;
  if ( v12 < v10 )
  {
    parent = pos->parent;
    if ( (int)parent > v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 126, ASSERT_TYPE_ASSERT, "(parentIndex < boneIndex)", (const char *)&queryFormat, "parentIndex < boneIndex") )
      __debugbreak();
    if ( isCompositeModel && ((0x80000000 >> (v12 & 0x1F)) & calcPartBits->array[v12 >> 5]) != 0 )
    {
      in = *modelAttachQuat;
      v23 = in.v[0];
      if ( (LODWORD(in.v[0]) & 0x7F800000) == 2139095040 || (v23 = in.v[1], (LODWORD(in.v[1]) & 0x7F800000) == 2139095040) || (v23 = in.v[2], (LODWORD(in.v[2]) & 0x7F800000) == 2139095040) || (v23 = in.v[3], (LODWORD(in.v[3]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 134, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentRotationQuat )[0] ) && !IS_NAN( ( parentRotationQuat )[1] ) && !IS_NAN( ( parentRotationQuat )[2] ) && !IS_NAN( ( parentRotationQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentRotationQuat )[0] ) && !IS_NAN( ( parentRotationQuat )[1] ) && !IS_NAN( ( parentRotationQuat )[2] ) && !IS_NAN( ( parentRotationQuat )[3] )", v23) )
          __debugbreak();
      }
      MatrixTransformVectorQuatTrans(modelAttachOffset, &mat[parent - 1], &out);
      for ( i = pos->child - 1; i < v10; i = v8->child - 1 )
      {
        v15 = v8->parent;
        if ( (int)v15 > i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 145, ASSERT_TYPE_ASSERT, "(parentIndex < boneIndex)", (const char *)&queryFormat, "parentIndex < boneIndex") )
          __debugbreak();
        ++v8;
        v16 = &mat[i];
        *v16 = mat[v15 - 1];
        if ( ((0x80000000 >> (i & 0x1F)) & calcPartBits->array[i >> 5]) != 0 )
        {
          v16->trans.v[0] = out.v[0] + v16->trans.v[0];
          v16->trans.v[1] = out.v[1] + v16->trans.v[1];
          v16->trans.v[2] = out.v[2] + v16->trans.v[2];
          LocalQuatMultiplyReverseEquals(&in, &v16->quat);
          _XMM0 = _mm128_mul_ps((__m128)v16->quat, (__m128)v16->quat);
          __asm
          {
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
          }
          v16->quat = (vec4_t)_mm128_div_ps((__m128)v16->quat, _mm_sqrt_ps(_XMM0));
          v16->transWeight = 2.0;
        }
      }
    }
    else
    {
      for ( j = pos->child - 1; j < v10; j = v8->child - 1 )
      {
        v21 = v8->parent;
        if ( (int)v21 > j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 167, ASSERT_TYPE_ASSERT, "(parentIndex < boneIndex)", (const char *)&queryFormat, "parentIndex < boneIndex") )
          __debugbreak();
        ++v8;
        mat[j] = mat[v21 - 1];
      }
    }
  }
  return v8;
}

/*
==============
CalcSkelNonRootBones
==============
*/
void CalcSkelNonRootBones(const XModel *model, DSkel *skel, int minBoneIndex, DObjPartBitsAligned *calcPartBits, const DObjPartBitsAligned *controlPartBits, const DObjPartBitsAligned *worldControlPartBits)
{
  DSkel *v6; 
  const XModel *v7; 
  DObjAnimMat *mat; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned int *v15; 
  unsigned int v16; 
  int v17; 
  signed int v18; 
  int v19; 
  unsigned int v20; 
  unsigned int v21; 
  int numBones; 
  int numRootBones; 
  __m128 *v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  __m128 *v28; 
  unsigned int v29; 
  unsigned __int64 v30; 
  unsigned int v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  float v39; 
  float v40; 
  __int64 v43; 
  float *trans; 
  float v46; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  float v61; 
  float v62; 
  float v63; 
  float v64; 
  float v65; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  __int64 v89; 
  __int64 v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  int v96; 
  int v97; 
  unsigned int *v99; 
  int v101; 
  int v102; 
  float *v104; 
  __int64 v105; 
  signed __int64 v106; 
  const DObjPartBitsAligned *controlPartBitsa; 
  const DObjPartBitsAligned *worldControlPartBitsa; 

  v6 = skel;
  v7 = model;
  mat = skel->mat;
  v9 = minBoneIndex + model->numBones - model->numRootBones;
  v10 = minBoneIndex >> 5;
  v96 = v10;
  v11 = v9 - 1;
  v12 = v9 - 32 * v10;
  v13 = v11 >> 5;
  v97 = v12;
  v104 = (float *)mat;
  if ( v10 <= v13 )
  {
    worldControlPartBitsa = (const DObjPartBitsAligned *)((char *)worldControlPartBits - (char *)calcPartBits);
    controlPartBitsa = (const DObjPartBitsAligned *)((char *)controlPartBits - (char *)calcPartBits);
    v14 = v13 - v10 + 1;
    v15 = &calcPartBits->array[v10];
    v106 = (char *)v7 - (char *)calcPartBits;
    v99 = v15;
    v105 = v14;
    while ( 1 )
    {
      v16 = *v15;
      v17 = 32;
      if ( v12 < 32 )
        v17 = v12;
      v18 = __lzcnt(v16);
      v101 = v17;
      if ( v18 < v17 )
        break;
LABEL_77:
      ++v10;
      ++v15;
      v12 -= 32;
      v96 = v10;
      --v14;
      v99 = v15;
      v105 = v14;
      v97 = v12;
      if ( !v14 )
        return;
    }
    v19 = 32 * v10;
    v102 = 32 * v10;
    while ( 1 )
    {
      v20 = v19 + v18;
      if ( (unsigned int)v18 >= 0x20 )
      {
        LODWORD(v90) = 32;
        LODWORD(v89) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v89, v90) )
          __debugbreak();
      }
      v21 = 0x80000000 >> v18;
      if ( ((0x80000000 >> v18) & v16) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 381, ASSERT_TYPE_ASSERT, "(bits & boneBit)", (const char *)&queryFormat, "bits & boneBit") )
        __debugbreak();
      numBones = v7->numBones;
      v16 &= ~v21;
      numRootBones = v7->numRootBones;
      v24 = (__m128 *)&mat[v20];
      *v15 = v16;
      v25 = v20 - minBoneIndex;
      v26 = numBones - numRootBones;
      if ( v20 - minBoneIndex >= v26 )
      {
        LODWORD(v90) = v26;
        LODWORD(v89) = v20 - minBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( boneOffset ) < (unsigned)( model->numBones - model->numRootBones )", "boneOffset doesn't index model->numBones - model->numRootBones\n\t%i not in [0, %i)", v89, v90) )
          __debugbreak();
      }
      v27 = v7->parentList[v25];
      v28 = &v24[-2 * v27];
      if ( v20 >= 0x100 )
      {
        LODWORD(v90) = 256;
        LODWORD(v89) = v20;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v89, v90) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v20 & 0x1F)) & v6->partBits.anim.array[(unsigned __int64)v20 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 394, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( boneIndex ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( boneIndex )") )
        __debugbreak();
      v29 = v20 - v27;
      if ( v29 >= 0x100 )
      {
        LODWORD(v90) = 256;
        LODWORD(v89) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v89, v90) )
          __debugbreak();
      }
      v30 = (unsigned __int64)v29 >> 5;
      v31 = 0x80000000 >> (v29 & 0x1F);
      if ( (v31 & skel->partBits.skel.array[v30]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 395, ASSERT_TYPE_ASSERT, "(skel->partBits.skel.testBit( boneIndex - parentOffset ))", (const char *)&queryFormat, "skel->partBits.skel.testBit( boneIndex - parentOffset )") )
        __debugbreak();
      if ( v29 >= 0x100 )
      {
        LODWORD(v90) = 256;
        LODWORD(v89) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v89, v90) )
          __debugbreak();
      }
      if ( (v31 & skel->partBits.anim.array[v30]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 396, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( boneIndex - parentOffset ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( boneIndex - parentOffset )") )
        __debugbreak();
      if ( (v21 & *(unsigned int *)((_BYTE *)worldControlPartBitsa->array + (_QWORD)v99)) == 0 )
      {
        if ( (v21 & *(unsigned int *)((_BYTE *)controlPartBitsa->array + (_QWORD)v99)) != 0 )
        {
          v6 = skel;
          if ( (skel->partBits.skel.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 406, ASSERT_TYPE_ASSERT, "(skel->partBits.skel.testBit( 0 ))", (const char *)&queryFormat, "skel->partBits.skel.testBit( 0 )") )
            __debugbreak();
          if ( (skel->partBits.anim.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 407, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( 0 ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( 0 )") )
            __debugbreak();
          v46 = v28->m128_f32[3];
          v47 = v28->m128_f32[1];
          v48 = v28->m128_f32[2];
          v49 = v104[3];
          v50 = v104[1];
          v51 = v104[2];
          v52 = (float)((float)((float)(v28->m128_f32[0] * v49) - (float)(v46 * *v104)) - (float)(v48 * v50)) + (float)(v47 * v51);
          v53 = (float)((float)((float)(v48 * *v104) + (float)(v47 * v49)) - (float)(v46 * v50)) - (float)(v28->m128_f32[0] * v51);
          v54 = (float)((float)((float)(v48 * v49) - (float)(v47 * *v104)) + (float)(v28->m128_f32[0] * v50)) - (float)(v46 * v51);
          v55 = v47 * v50;
          v56 = v24->m128_f32[2];
          v57 = v24->m128_f32[3];
          v58 = v48 * v51;
          v59 = v24->m128_f32[1];
          v60 = (float)((float)((float)(v28->m128_f32[0] * *v104) + (float)(v46 * v49)) + v55) + v58;
          v94 = (float)((float)((float)(v24->m128_f32[0] * v60) + (float)(v57 * v52)) + (float)(v59 * v54)) - (float)(v56 * v53);
          v91 = (float)((float)((float)(v57 * v53) - (float)(v24->m128_f32[0] * v54)) + (float)(v59 * v60)) + (float)(v56 * v52);
          v61 = v24->m128_f32[0] * v52;
          v62 = (float)((float)((float)(v57 * v54) + (float)(v24->m128_f32[0] * v53)) - (float)(v59 * v52)) + (float)(v56 * v60);
          v24->m128_f32[2] = v62;
          v24->m128_f32[1] = v91;
          v24->m128_f32[0] = v94;
          v63 = (float)((float)((float)(v57 * v60) - v61) - (float)(v59 * v53)) - (float)(v56 * v54);
          v24->m128_f32[3] = v63;
          v64 = v104[3];
          v65 = v104[1];
          v66 = v104[2];
          v67 = (float)((float)((float)(v63 * *v104) + (float)(v64 * v94)) + (float)(v62 * v65)) - (float)(v66 * v91);
          v68 = (float)((float)((float)(v62 * v64) + (float)(*v104 * v91)) - (float)(v65 * v94)) + (float)(v66 * v63);
          v69 = (float)((float)(v64 * v63) - (float)(*v104 * v94)) - (float)(v65 * v91);
          v24->m128_f32[1] = (float)((float)((float)(v64 * v91) - (float)(v62 * *v104)) + (float)(v65 * v63)) + (float)(v66 * v94);
          v24->m128_f32[3] = v69 - (float)(v62 * v66);
          v24->m128_f32[0] = v67;
          v24->m128_f32[2] = v68;
          goto LABEL_38;
        }
        v32 = v28->m128_f32[3];
        v33 = v28->m128_f32[1];
        v34 = v28->m128_f32[2];
        v35 = v24->m128_f32[3];
        v36 = v24->m128_f32[2];
        v37 = v24->m128_f32[1];
        v38 = (float)((float)((float)(v32 * v24->m128_f32[0]) + (float)(v28->m128_f32[0] * v35)) + (float)(v33 * v36)) - (float)(v34 * v37);
        v39 = (float)((float)((float)(v28->m128_f32[0] * v37) + (float)(v32 * v36)) - (float)(v33 * v24->m128_f32[0])) + (float)(v34 * v35);
        v40 = (float)((float)(v32 * v35) - (float)(v28->m128_f32[0] * v24->m128_f32[0])) - (float)(v33 * v37);
        v24->m128_f32[1] = (float)((float)((float)(v32 * v37) - (float)(v28->m128_f32[0] * v36)) + (float)(v33 * v35)) + (float)(v34 * v24->m128_f32[0]);
        v24->m128_f32[3] = v40 - (float)(v34 * v36);
        v24->m128_f32[0] = v38;
        v24->m128_f32[2] = v39;
      }
      v6 = skel;
LABEL_38:
      if ( ((v24->m128_i32[0] & 0x7F800000) == 2139095040 || (v24->m128_i32[1] & 0x7F800000) == 2139095040 || (v24->m128_i32[2] & 0x7F800000) == 2139095040 || (v24->m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 415, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] )") )
        __debugbreak();
      if ( ((v24[1].m128_i32[0] & 0x7F800000) == 2139095040 || (v24[1].m128_i32[1] & 0x7F800000) == 2139095040 || (v24[1].m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 416, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )") )
        __debugbreak();
      _XMM0 = _mm128_mul_ps(*v24, *v24);
      __asm { vhaddps xmm1, xmm0, xmm0 }
      v43 = (int)(3 * v25);
      __asm { vhaddps xmm0, xmm1, xmm1 }
      *v24 = _mm128_div_ps(*v24, _mm_sqrt_ps(_XMM0));
      v24[1].m128_i32[3] = 0x40000000;
      trans = model->trans;
      if ( ((LODWORD(trans[v43]) & 0x7F800000) == 2139095040 || (LODWORD(trans[v43 + 1]) & 0x7F800000) == 2139095040 || (LODWORD(trans[v43 + 2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 421, ASSERT_TYPE_SANITY, "( !IS_NAN( ( trans )[0] ) && !IS_NAN( ( trans )[1] ) && !IS_NAN( ( trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( trans )[0] ) && !IS_NAN( ( trans )[1] ) && !IS_NAN( ( trans )[2] )") )
        __debugbreak();
      _XMM0 = v21 & *(unsigned int *)((char *)v99 + v106 + 88);
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM0 = LODWORD(FLOAT_1_0);
      __asm { vblendvps xmm3, xmm0, xmm6, xmm2 }
      v95 = (float)(*(float *)&_XMM3 * v24[1].m128_f32[0]) + trans[v43];
      v93 = (float)(*(float *)&_XMM3 * v24[1].m128_f32[1]) + trans[v43 + 1];
      v92 = (float)(*(float *)&_XMM3 * v24[1].m128_f32[2]) + trans[v43 + 2];
      if ( ((v28->m128_i32[0] & 0x7F800000) == 2139095040 || (v28->m128_i32[1] & 0x7F800000) == 2139095040 || (v28->m128_i32[2] & 0x7F800000) == 2139095040 || (v28->m128_i32[3] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
        __debugbreak();
      if ( (v28[1].m128_i32[3] & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
        __debugbreak();
      v74 = v28->m128_f32[2];
      v75 = v28[1].m128_f32[3];
      v76 = v75 * v28->m128_f32[0];
      v77 = v76 * v28->m128_f32[0];
      v78 = v28->m128_f32[1];
      v79 = v75 * v78;
      v80 = v75 * v74;
      v81 = v28->m128_f32[3];
      v82 = v81 * v76;
      v83 = v78 * v76;
      v84 = v74 * v76;
      v85 = v74 * v80;
      v86 = v74 * v79;
      v87 = (float)((float)((float)((float)(1.0 - (float)((float)(v74 * v80) + (float)(v78 * v79))) * v95) + (float)((float)(v83 - (float)(v81 * v80)) * v93)) + (float)((float)((float)(v81 * v79) + v84) * v92)) + v28[1].m128_f32[0];
      v24[1].m128_f32[0] = v87;
      v24[1].m128_f32[1] = (float)((float)((float)((float)((float)(v81 * v80) + v83) * v95) + (float)((float)(1.0 - (float)(v85 + v77)) * v93)) + (float)(v92 * (float)(v86 - v82))) + v28[1].m128_f32[1];
      v88 = (float)((float)((float)(v95 * (float)(v84 - (float)(v81 * v79))) + (float)((float)(v86 + v82) * v93)) + (float)(v92 * (float)(1.0 - (float)((float)(v78 * v79) + v77)))) + v28[1].m128_f32[2];
      v24[1].m128_f32[2] = v88;
      if ( ((LODWORD(v87) & 0x7F800000) == 2139095040 || (v24[1].m128_i32[1] & 0x7F800000) == 2139095040 || (LODWORD(v88) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 427, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )") )
        __debugbreak();
      v15 = v99;
      v7 = model;
      v19 = v102;
      mat = (DObjAnimMat *)v104;
      v18 = __lzcnt(v16);
      if ( v18 >= v101 )
      {
        v12 = v97;
        v10 = v96;
        v14 = v105;
        goto LABEL_77;
      }
    }
  }
}

/*
==============
CalcSkelRootBonesNoParentOrDuplicate
==============
*/
void CalcSkelRootBonesNoParentOrDuplicate(const XModel *model, DSkel *skel, int minBoneIndex, DObjPartBitsAligned *calcPartBits)
{
  DObjAnimMat *mat; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  unsigned int *v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  unsigned int v15; 
  int v16; 
  signed int v17; 
  int v18; 
  __int64 v19; 
  __m128 quat; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  unsigned int *v27; 
  __int64 v28; 

  mat = skel->mat;
  v6 = minBoneIndex + model->numRootBones;
  v7 = minBoneIndex >> 5;
  v8 = v6 - 1;
  v9 = v6 - 32 * (minBoneIndex >> 5);
  v10 = v8 >> 5;
  v26 = v9;
  if ( v7 <= v10 )
  {
    v11 = &calcPartBits->array[v7];
    v12 = v10 - v7;
    v13 = 32 * v7;
    v14 = v12 + 1;
    v27 = v11;
    v28 = v14;
    do
    {
      v15 = *v11;
      v16 = 32;
      if ( v9 < 32 )
        v16 = v9;
      v17 = __lzcnt(v15);
      if ( v17 < v16 )
      {
        do
        {
          v18 = v13 + v17;
          if ( (unsigned int)v17 >= 0x20 )
          {
            LODWORD(v25) = 32;
            LODWORD(v24) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          if ( ((0x80000000 >> v17) & v15) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 211, ASSERT_TYPE_ASSERT, "(bits & boneBit)", (const char *)&queryFormat, "bits & boneBit") )
            __debugbreak();
          v15 &= ~(0x80000000 >> v17);
          v19 = v18;
          *v27 = v15;
          quat = (__m128)mat[v19].quat;
          _XMM0 = _mm128_mul_ps(quat, quat);
          __asm
          {
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
          }
          mat[v19].quat = (vec4_t)_mm128_div_ps(quat, _mm_sqrt_ps(_XMM0));
          mat[v19].transWeight = 2.0;
          if ( (LODWORD(mat[v19].quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v19].quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v19].quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v19].quat.v[3]) & 0x7F800000) == 2139095040 )
          {
            LODWORD(v25) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 217, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat[boneIndex].quat )[0] ) && !IS_NAN( ( mat[boneIndex].quat )[1] ) && !IS_NAN( ( mat[boneIndex].quat )[2] ) && !IS_NAN( ( mat[boneIndex].quat )[3] ) ) )", "model: '%s' boneIndex: %d", model->name, v25) )
              __debugbreak();
          }
          if ( (LODWORD(mat[v19].trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v19].trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v19].trans.v[2]) & 0x7F800000) == 2139095040 )
          {
            LODWORD(v25) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 218, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat[boneIndex].trans )[0] ) && !IS_NAN( ( mat[boneIndex].trans )[1] ) && !IS_NAN( ( mat[boneIndex].trans )[2] ) ) )", "model: '%s' boneIndex: %d", model->name, v25) )
              __debugbreak();
          }
          v17 = __lzcnt(v15);
        }
        while ( v17 < v16 );
        v9 = v26;
        v11 = v27;
        v14 = v28;
      }
      ++v11;
      v9 -= 32;
      v13 += 32;
      v27 = v11;
      --v14;
      v26 = v9;
      v28 = v14;
    }
    while ( v14 );
  }
}

/*
==============
CalcSkelRootBonesWithParent
==============
*/
void CalcSkelRootBonesWithParent(const XModel *model, DSkel *skel, unsigned int minBoneIndex, unsigned int modelParent, const bool isCompositeModel, const vec3_t *const modelAttachOffset, const vec4_t *const modelAttachQuat, DObjPartBitsAligned *calcPartBits, const DObjPartBitsAligned *controlPartBits, const DObjPartBitsAligned *worldControlPartBits)
{
  unsigned __int64 v10; 
  DObjPartBitsAligned *v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  DObjAnimMat *v19; 
  char v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  unsigned int v26; 
  DObjAnimMat *v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
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
  float v49; 
  float v50; 
  float v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  float v58; 
  float v59; 
  float v67; 
  float transWeight; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  __m128 v78; 
  __m128 v80; 
  float v86; 
  __int64 v87; 
  __int64 v88; 
  float v89; 
  float v90; 
  float v91; 
  int v92; 
  float v93; 
  float v94; 
  unsigned int v95; 
  int v96; 
  unsigned int v97; 
  int v98; 
  unsigned int v99; 
  unsigned __int64 v100; 
  DObjAnimMat *mat; 
  vec4_t v103; 
  vec3_t v104; 
  vec3_t in; 

  v10 = modelParent;
  v12 = calcPartBits;
  v13 = modelParent;
  v14 = minBoneIndex + model->numRootBones;
  v15 = minBoneIndex >> 5;
  v16 = v14 - 1;
  v17 = v14 - 32 * v15;
  v18 = v16 >> 5;
  v19 = &skel->mat[modelParent];
  mat = skel->mat;
  v92 = v15;
  v99 = v18;
  v96 = v17;
  v104 = *modelAttachOffset;
  v103 = *modelAttachQuat;
  if ( (unsigned int)v15 <= v18 )
  {
    v20 = modelParent & 0x1F;
    do
    {
      v21 = v12->array[v15];
      v22 = 32;
      if ( v17 < 32 )
        v22 = v17;
      v23 = __lzcnt(v21);
      v97 = v22;
      if ( v23 < v22 )
      {
        v100 = v13 >> 5;
        v24 = 32 * v15;
        v95 = 0x80000000 >> v20;
        v98 = 32 * v15;
        do
        {
          v25 = v24 + v23;
          if ( v23 >= 0x20 )
          {
            LODWORD(v88) = 32;
            LODWORD(v87) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v87, v88) )
              __debugbreak();
          }
          v26 = 0x80000000 >> v23;
          if ( ((0x80000000 >> v23) & v21) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 274, ASSERT_TYPE_ASSERT, "(bits & boneBit)", (const char *)&queryFormat, "bits & boneBit") )
            __debugbreak();
          v21 &= ~v26;
          calcPartBits->array[v92] = v21;
          if ( (unsigned int)v10 >= v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 278, ASSERT_TYPE_ASSERT, "(modelParent < boneIndex)", (const char *)&queryFormat, "modelParent < boneIndex") )
            __debugbreak();
          if ( v25 >= 0x100 )
          {
            LODWORD(v88) = 256;
            LODWORD(v87) = v25;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v87, v88) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v25 & 0x1F)) & skel->partBits.anim.array[(unsigned __int64)v25 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 279, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( boneIndex ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( boneIndex )") )
            __debugbreak();
          if ( (unsigned int)v10 >= 0x100 )
          {
            LODWORD(v88) = 256;
            LODWORD(v87) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v87, v88) )
              __debugbreak();
          }
          if ( (v95 & skel->partBits.skel.array[v100]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 280, ASSERT_TYPE_ASSERT, "(skel->partBits.skel.testBit( modelParent ))", (const char *)&queryFormat, "skel->partBits.skel.testBit( modelParent )") )
            __debugbreak();
          if ( (unsigned int)v10 >= 0x100 )
          {
            LODWORD(v88) = 256;
            LODWORD(v87) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v87, v88) )
              __debugbreak();
          }
          if ( (v95 & skel->partBits.anim.array[v100]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 281, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( modelParent ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( modelParent )") )
            __debugbreak();
          v27 = &skel->mat[v25];
          if ( (v26 & worldControlPartBits->array[v92]) == 0 )
          {
            if ( (v26 & controlPartBits->array[v92]) != 0 )
            {
              if ( (skel->partBits.skel.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 293, ASSERT_TYPE_ASSERT, "(skel->partBits.skel.testBit( 0 ))", (const char *)&queryFormat, "skel->partBits.skel.testBit( 0 )") )
                __debugbreak();
              if ( (skel->partBits.anim.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 294, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( 0 ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( 0 )") )
                __debugbreak();
              v40 = v19->quat.v[3];
              v41 = v19->quat.v[1];
              v42 = v19->quat.v[2];
              v43 = mat->quat.v[3];
              v44 = mat->quat.v[1];
              v45 = mat->quat.v[2];
              v46 = (float)((float)((float)(v19->quat.v[0] * v43) - (float)(v40 * mat->quat.v[0])) - (float)(v42 * v44)) + (float)(v41 * v45);
              v47 = (float)((float)((float)(v42 * mat->quat.v[0]) + (float)(v41 * v43)) - (float)(v40 * v44)) - (float)(v19->quat.v[0] * v45);
              v48 = v27->quat.v[1];
              v49 = (float)((float)((float)(v42 * v43) - (float)(v41 * mat->quat.v[0])) + (float)(v19->quat.v[0] * v44)) - (float)(v40 * v45);
              v50 = v41 * v44;
              v51 = v27->quat.v[2];
              v52 = v27->quat.v[3];
              v53 = (float)((float)((float)(v19->quat.v[0] * mat->quat.v[0]) + (float)(v40 * v43)) + v50) + (float)(v42 * v45);
              v93 = (float)((float)((float)(v27->quat.v[0] * v53) + (float)(v52 * v46)) + (float)(v48 * v49)) - (float)(v51 * v47);
              v89 = (float)((float)((float)(v52 * v47) - (float)(v27->quat.v[0] * v49)) + (float)(v48 * v53)) + (float)(v51 * v46);
              v54 = v27->quat.v[0] * v46;
              v55 = (float)((float)((float)(v52 * v49) + (float)(v27->quat.v[0] * v47)) - (float)(v48 * v46)) + (float)(v51 * v53);
              v27->quat.v[2] = v55;
              v27->quat.v[1] = v89;
              v27->quat.v[0] = v93;
              v56 = (float)((float)((float)(v52 * v53) - v54) - (float)(v48 * v47)) - (float)(v51 * v49);
              v27->quat.v[3] = v56;
              v57 = mat->quat.v[3];
              v58 = mat->quat.v[1];
              v59 = mat->quat.v[2];
              v34 = (float)((float)((float)(v56 * mat->quat.v[0]) + (float)(v57 * v93)) + (float)(v58 * v55)) - (float)(v59 * v89);
              v35 = (float)((float)((float)(v57 * v89) - (float)(mat->quat.v[0] * v55)) + (float)(v56 * v58)) + (float)(v59 * v93);
              v36 = (float)(v56 * v57) - (float)(mat->quat.v[0] * v93);
              v37 = (float)((float)((float)(mat->quat.v[0] * v89) + (float)(v57 * v55)) - (float)(v58 * v93)) + (float)(v56 * v59);
              v38 = v59 * v55;
              v39 = v58 * v89;
            }
            else
            {
              v28 = v27->quat.v[3];
              v29 = v19->quat.v[3];
              v30 = v19->quat.v[1];
              v31 = v27->quat.v[2];
              v32 = v19->quat.v[2];
              v33 = v27->quat.v[1];
              v34 = (float)((float)((float)(v29 * v27->quat.v[0]) + (float)(v19->quat.v[0] * v28)) + (float)(v30 * v31)) - (float)(v32 * v33);
              v35 = (float)((float)((float)(v29 * v33) - (float)(v19->quat.v[0] * v31)) + (float)(v30 * v28)) + (float)(v32 * v27->quat.v[0]);
              v36 = (float)(v29 * v28) - (float)(v19->quat.v[0] * v27->quat.v[0]);
              v37 = (float)((float)((float)(v19->quat.v[0] * v33) + (float)(v29 * v31)) - (float)(v30 * v27->quat.v[0])) + (float)(v32 * v28);
              v38 = v32 * v31;
              v39 = v30 * v33;
            }
            v27->quat.v[1] = v35;
            v27->quat.v[2] = v37;
            v27->quat.v[0] = v34;
            v27->quat.v[3] = (float)(v36 - v39) - v38;
          }
          if ( ((LODWORD(v27->quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v27->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v27->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v27->quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 302, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] )") )
            __debugbreak();
          if ( ((LODWORD(v27->trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v27->trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v27->trans.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 303, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )") )
            __debugbreak();
          _XMM13 = LODWORD(FLOAT_1_0);
          _XMM0 = _mm128_mul_ps((__m128)v27->quat, (__m128)v27->quat);
          __asm
          {
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
          }
          v27->quat = (vec4_t)_mm128_div_ps((__m128)v27->quat, _mm_sqrt_ps(_XMM0));
          v27->transWeight = 2.0;
          _XMM0 = v26 & model->noScalePartBits[v92];
          __asm
          {
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm13, xmm6, xmm2
          }
          if ( isCompositeModel )
          {
            if ( ((LODWORD(v103.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v103.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v103.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v103.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 310, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentRotationQuat )[0] ) && !IS_NAN( ( parentRotationQuat )[1] ) && !IS_NAN( ( parentRotationQuat )[2] ) && !IS_NAN( ( parentRotationQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentRotationQuat )[0] ) && !IS_NAN( ( parentRotationQuat )[1] ) && !IS_NAN( ( parentRotationQuat )[2] ) && !IS_NAN( ( parentRotationQuat )[3] )") )
              __debugbreak();
            v91 = (float)(v104.v[0] + v27->trans.v[0]) * *(float *)&_XMM0;
            v90 = (float)(v104.v[2] + v27->trans.v[2]) * *(float *)&_XMM0;
            v94 = (float)(v104.v[1] + v27->trans.v[1]) * *(float *)&_XMM0;
            if ( ((LODWORD(v19->quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v19->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v19->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v19->quat.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
              __debugbreak();
            if ( (LODWORD(v19->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
              __debugbreak();
            v67 = v19->quat.v[2];
            transWeight = v19->transWeight;
            v69 = transWeight * v19->quat.v[0];
            v70 = v69 * v19->quat.v[0];
            v71 = v19->quat.v[1];
            v72 = v71 * transWeight;
            v73 = v67 * transWeight;
            v74 = v19->quat.v[3];
            v27->trans.v[0] = (float)((float)((float)((float)((float)(v71 * v69) - (float)(v73 * v74)) * v94) + (float)((float)(1.0 - (float)((float)(v73 * v67) + (float)(v72 * v71))) * v91)) + (float)((float)((float)(v74 * v72) + (float)(v67 * v69)) * v90)) + v19->trans.v[0];
            v27->trans.v[1] = (float)((float)((float)((float)(1.0 - (float)((float)(v73 * v67) + v70)) * v94) + (float)((float)((float)(v73 * v74) + (float)(v71 * v69)) * v91)) + (float)((float)((float)(v72 * v67) - (float)(v74 * v69)) * v90)) + v19->trans.v[1];
            v27->trans.v[2] = (float)((float)((float)((float)((float)(v72 * v67) + (float)(v74 * v69)) * v94) + (float)(v91 * (float)((float)(v67 * v69) - (float)(v74 * v72)))) + (float)((float)(1.0 - (float)((float)(v72 * v71) + v70)) * v90)) + v19->trans.v[2];
            v75 = v27->quat.v[3];
            v76 = v27->quat.v[1];
            v77 = v27->quat.v[2];
            v78 = (__m128)LODWORD(v75);
            v78.m128_f32[0] = (float)((float)((float)(v75 * v103.v[3]) - (float)(v27->quat.v[0] * v103.v[0])) - (float)(v76 * v103.v[1])) - (float)(v77 * v103.v[2]);
            v80 = _mm_shuffle_ps(v78, v78, 0);
            v80.m128_f32[0] = (float)((float)((float)(v27->quat.v[0] * v103.v[3]) + (float)(v75 * v103.v[0])) + (float)(v76 * v103.v[2])) - (float)(v77 * v103.v[1]);
            _XMM3 = v80;
            __asm
            {
              vinsertps xmm3, xmm3, xmm6, 10h
              vinsertps xmm3, xmm3, xmm5, 20h ; ' '
            }
            _XMM0 = _mm128_mul_ps(_XMM3, _XMM3);
            __asm
            {
              vhaddps xmm1, xmm0, xmm0
              vhaddps xmm0, xmm1, xmm1
            }
            v27->quat = (vec4_t)_mm128_div_ps(_XMM3, _mm_sqrt_ps(_XMM0));
            v27->transWeight = 2.0;
          }
          else
          {
            v86 = *(float *)&_XMM0 * v27->trans.v[1];
            in.v[0] = *(float *)&_XMM0 * v27->trans.v[0];
            in.v[2] = *(float *)&_XMM0 * v27->trans.v[2];
            in.v[1] = v86;
            LocalMatrixTransformVectorQuatTrans(&in, v19, &v27->trans);
          }
          if ( ((LODWORD(v27->trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v27->trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v27->trans.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 328, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )") )
            __debugbreak();
          v24 = v98;
          v23 = __lzcnt(v21);
        }
        while ( v23 < v97 );
        LODWORD(v15) = v92;
        v17 = v96;
        v13 = v10;
        v12 = calcPartBits;
        v18 = v99;
        v20 = v10 & 0x1F;
      }
      v15 = (unsigned int)(v15 + 1);
      v17 -= 32;
      v92 = v15;
      v96 = v17;
    }
    while ( (unsigned int)v15 <= v18 );
  }
}

/*
==============
DObjCalcAnimUseStack
==============
*/
void DObjCalcAnimUseStack(const DObj *obj, DObjPartBits *partBits, XAnimIKCalcInfo *ikCalcInfo)
{
  XAnimCalcAnimInfo animInfo; 

  animInfo.ikCalcInfo = ikCalcInfo;
  DObjCalcAnim(obj, partBits, &animInfo);
}

/*
==============
DObjCalcBaseAnim
==============
*/
void DObjCalcBaseAnim(const DObj *obj, DObjAnimMat *mat, DObjPartBits *partBits)
{
  const DObj *v5; 
  int v6; 
  int v7; 
  DObjAnimMat *v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  float *v13; 
  __int16 *v14; 
  int v15; 
  float *v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  int v22; 
  __int64 v23; 

  v5 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 1014, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 1015, ASSERT_TYPE_ASSERT, "(mat)", (const char *)&queryFormat, "mat") )
    __debugbreak();
  v6 = DObjNumBones(v5);
  v7 = 0;
  v8 = &mat[v6];
  v22 = 0;
  v9 = 0;
  if ( v5->numModels )
  {
    v10 = 0i64;
    v23 = 0i64;
    do
    {
      v11 = *(__int64 *)((char *)v5->models + v10);
      v12 = *(unsigned __int8 *)(v11 + 21);
      if ( *(_BYTE *)(v11 + 21) )
      {
        v13 = &mat->trans.v[2];
        v9 += v12;
        do
        {
          mat->quat.v[0] = 0.0;
          ++mat;
          *(_QWORD *)(v13 - 5) = 0i64;
          *(_QWORD *)(v13 - 3) = 1065353216i64;
          *(_QWORD *)(v13 - 1) = 0i64;
          v13 += 8;
          --v12;
        }
        while ( v12 );
        LOBYTE(v12) = *(_BYTE *)(v11 + 21);
      }
      v14 = *(__int16 **)(v11 + 168);
      v15 = *(unsigned __int8 *)(v11 + 20) - (unsigned __int8)v12;
      if ( v15 )
      {
        v16 = &mat->trans.v[2];
        do
        {
          if ( v9 >= 0x100 )
          {
            LODWORD(v20) = 256;
            LODWORD(v19) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v19, v20) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v9 & 0x1F)) & partBits->array[(unsigned __int64)v9 >> 5]) != 0 )
          {
            mat->quat.v[0] = (float)*v14 * 0.000030518509;
            *(v16 - 5) = (float)v14[1] * 0.000030518509;
            *(v16 - 4) = (float)v14[2] * 0.000030518509;
            *(v16 - 3) = (float)v14[3] * 0.000030518509;
            *((_QWORD *)v16 - 1) = 0i64;
            *v16 = 0.0;
          }
          ++mat;
          v16 += 8;
          ++v9;
          v14 += 4;
          --v15;
        }
        while ( v15 );
        v7 = v22;
        v5 = obj;
        v10 = v23;
      }
      if ( (partBits->array[7] & 2) != 0 )
      {
        v17 = *(unsigned __int16 *)(v11 + 22);
        if ( *(_WORD *)(v11 + 22) )
        {
          do
          {
            if ( v14 )
            {
              v8->quat.v[0] = (float)*v14 * 0.000030518509;
              v8->quat.v[1] = (float)v14[1] * 0.000030518509;
              v8->quat.v[2] = (float)v14[2] * 0.000030518509;
              v18 = v14[3];
              v14 += 4;
              v8->quat.v[3] = (float)v18 * 0.000030518509;
            }
            else
            {
              *(_QWORD *)v8->quat.v = 0i64;
              v8->quat.v[2] = 0.0;
              v8->quat.v[3] = 1.0;
              v8->transWeight = 2.0;
            }
            *(_QWORD *)v8->trans.v = 0i64;
            v8->trans.v[2] = 0.0;
            ++v8;
            --v17;
          }
          while ( v17 );
        }
      }
      ++v7;
      v10 += 8i64;
      v22 = v7;
      v23 = v10;
    }
    while ( v7 < v5->numModels );
  }
}

/*
==============
DObjCalcBaseSkel
==============
*/
void DObjCalcBaseSkel(const DObj *obj, DObjAnimMat *mat, DObjPartBits *partBits)
{
  DObjPartBits *v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  const DObjDuplicateParts *DuplicateParts; 
  unsigned int v13; 
  int v14; 
  const DObj *v15; 
  __int64 numModels; 
  int v17; 
  const XModel **models; 
  const DObjDuplicatePair *pos; 
  int v20; 
  unsigned int v21; 
  int v22; 
  __int64 v23; 
  const XModel *v24; 
  bool v25; 
  const vec4_t *modelAttachQuat; 
  bool HasClientOnlyBones; 
  int v28; 
  unsigned int partBitsc; 
  unsigned int partBitsb; 
  DObjAnimMat *matb; 
  vec3_t *offsets; 
  vec4_t *quats; 
  vec3_t *modelAttachOffset; 
  __int64 v38; 
  const XModel **v39; 
  DSkel skel; 
  DObjPartBitsAligned calcPartBits; 
  DObjPartBitsAligned worldControlPartBits; 
  DObjPartBitsAligned controlPartBits; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 1119, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 1120, ASSERT_TYPE_ASSERT, "(mat)", (const char *)&queryFormat, "mat") )
    __debugbreak();
  skel.timeStamp = 0;
  v5 = partBits;
  memset(&skel.partBits.control, 0, 64);
  v6 = partBits->array[2];
  v7 = partBits->array[3];
  v8 = partBits->array[4];
  v9 = partBits->array[5];
  v10 = partBits->array[6];
  skel.partBits.skel.array[0] = partBits->array[0];
  skel.partBits.anim.array[0] = skel.partBits.skel.array[0];
  v11 = partBits->array[7];
  memset(&controlPartBits, 0, sizeof(controlPartBits));
  memset(&worldControlPartBits, 0, sizeof(worldControlPartBits));
  skel.mat = mat;
  skel.partBits.skel.array[1] = partBits->array[1];
  skel.partBits.anim.array[1] = skel.partBits.skel.array[1];
  skel.partBits.skel.array[2] = v6;
  skel.partBits.anim.array[2] = v6;
  skel.partBits.skel.array[3] = v7;
  skel.partBits.anim.array[3] = v7;
  skel.partBits.skel.array[4] = v8;
  skel.partBits.anim.array[4] = v8;
  skel.partBits.skel.array[5] = v9;
  skel.partBits.anim.array[5] = v9;
  skel.partBits.skel.array[6] = v10;
  skel.partBits.anim.array[6] = v10;
  partBitsc = v11;
  skel.partBits.skel.array[7] = v11;
  skel.partBits.anim.array[7] = v11;
  DObjCalcBaseAnim(obj, mat, v5);
  DuplicateParts = DObjGetDuplicateParts(obj);
  v13 = DuplicateParts->partBits.array[1];
  calcPartBits.array[0] = ~(DuplicateParts->partBits.array[0] | ~skel.partBits.skel.array[0]);
  v14 = ~v6 | DuplicateParts->partBits.array[2];
  calcPartBits.array[1] = ~(~skel.partBits.skel.array[1] | v13);
  calcPartBits.array[2] = ~v14;
  calcPartBits.array[3] = ~(~v7 | DuplicateParts->partBits.array[3]);
  calcPartBits.array[4] = ~(~v8 | DuplicateParts->partBits.array[4]);
  v15 = obj;
  calcPartBits.array[5] = ~(~v9 | DuplicateParts->partBits.array[5]);
  numModels = obj->numModels;
  calcPartBits.array[6] = ~(~v10 | DuplicateParts->partBits.array[6]);
  calcPartBits.array[7] = ~(~partBitsc | DuplicateParts->partBits.array[7]);
  v17 = DObjNumBones(obj);
  models = obj->models;
  pos = DuplicateParts->pairs;
  v20 = v17;
  v39 = models;
  v38 = numModels;
  matb = (DObjAnimMat *)&models[numModels];
  offsets = obj->offsets;
  quats = obj->quats;
  v21 = 0;
  HasClientOnlyBones = DObjHasClientOnlyBones(obj);
  v22 = 0;
  v28 = 0;
  if ( numModels )
  {
    v23 = 0i64;
    do
    {
      v24 = models[v23];
      v25 = (v15->flags & 0x20) != 0;
      partBitsb = *((unsigned __int8 *)matb->quat.v + v23);
      modelAttachQuat = &quats[v22];
      modelAttachOffset = &offsets[v22];
      pos = CalcSkelDuplicateBones(v24, &skel, v21, v25, modelAttachOffset, modelAttachQuat, pos, &calcPartBits);
      if ( partBitsb == 255 )
        CalcSkelRootBonesNoParentOrDuplicate(v24, &skel, v21, &calcPartBits);
      else
        CalcSkelRootBonesWithParent(v24, &skel, v21, partBitsb, v25, modelAttachOffset, modelAttachQuat, &calcPartBits, &controlPartBits, &worldControlPartBits);
      CalcSkelNonRootBones(v24, &skel, v21 + v24->numRootBones, &calcPartBits, &controlPartBits, &worldControlPartBits);
      if ( HasClientOnlyBones )
        pos = CalcSkelClientBones(v24, &skel, v21, v20, &calcPartBits, pos);
      ++v23;
      v21 += v24->numBones;
      v22 = v28 + 1;
      v15 = obj;
      v20 += v24->numClientBones;
      models = v39;
      ++v28;
    }
    while ( v23 < v38 );
  }
}

/*
==============
DObjCalcSkel
==============
*/
void DObjCalcSkel(const DObj *obj, DObjPartBits *partBits)
{
  DSkel *p_skel; 
  bool v5; 
  bool v6; 
  int v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v12; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > *v13; 
  const DObjDuplicateParts *DuplicateParts; 
  __int64 numModels; 
  unsigned int v21; 
  const DObjDuplicatePair *pairs; 
  bool v23; 
  __int64 v24; 
  const XModel *v25; 
  const vec4_t *v26; 
  bool v27; 
  int v28; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  DObjAnimMat *mat; 
  const char *BoneName; 
  DObjAnimMat *v35; 
  const char *v36; 
  int v37; 
  __int64 v38; 
  DObjAnimMat *v39; 
  const char *v40; 
  DObjAnimMat *v41; 
  const char *v42; 
  DObjPartBitsAligned *controlPartBits; 
  DObjPartBitsAligned *worldCtrlPartBits; 
  DObjPartBitsAligned *calcPartBits; 
  unsigned int modelParent; 
  bool HasClientOnlyBones; 
  bool v48; 
  int modelFirstClientBoneIndex; 
  DObjDuplicatePair *pos; 
  __int64 v51; 
  __int64 v52; 
  XAnimIKCalcInfo ikCalcInfo; 
  const XModel **models; 
  const XModel **v55; 
  vec3_t *offsets; 
  vec4_t *quats; 
  vec3_t *modelAttachOffset; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > v59; 
  XAnimIKData ikData; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > v61; 
  DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > > v62; 
  DObjPartBitsAligned worldControlPartBits; 
  XAnimIKDObjData outDObjData; 

  ikCalcInfo.ikData = NULL;
  ikCalcInfo.dObjData = NULL;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 689, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 690, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  p_skel = &obj->skel;
  if ( obj == (const DObj *)-56i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 693, ASSERT_TYPE_ASSERT, "(skel)", (const char *)&queryFormat, "skel") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 624, ASSERT_TYPE_ASSERT, "(obj != nullptr)", (const char *)&queryFormat, "obj != nullptr") )
    __debugbreak();
  if ( DObjHasClientFlag(obj) && !obj->skel.partBits.animCalculated && obj->tree )
    obj->tree->lodState.calcLod = obj->tree->lodState.lod;
  HasClientOnlyBones = DObjHasClientOnlyBones(obj);
  if ( !HasClientOnlyBones )
    partBits->array[7] &= ~2u;
  if ( XAnimIKIsPreCacheEnabled() )
    v5 = XAnimIKGetDObjDataCache(obj, &ikData, &outDObjData);
  else
    v5 = XAnimIKExtractDObjData(obj, &outDObjData);
  ikData.calculatedWeights = 0;
  v6 = v5;
  Sys_ProfBeginNamedEvent(0xFF8000FF, "XAnimIKPreCalc");
  if ( v6 )
  {
    XAnimIKPreCalc(obj, &ikData, &outDObjData, partBits);
    ikCalcInfo.dObjData = &outDObjData;
    ikCalcInfo.ikData = &ikData;
  }
  Sys_ProfEndNamedEvent();
  v7 = 0;
  if ( DObjHasProceduralBones(obj) && !XAnimPublicNodeOfTypeWillBeLodCulled(obj->tree, (const scr_string_t)scr_const.proc_node) )
  {
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v61, partBits);
    XAnimProceduralBonesAddPartBits(obj, partBits);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v59, partBits);
    v8 = 0;
    v9 = 0i64;
    do
    {
      _XMM0 = *(_OWORD *)&v61.array[v9];
      __asm { vpandn  xmm6, xmm0, xmm6 }
      *(_OWORD *)&v59.array[v9] = _XMM6;
      v9 += 4i64;
      ++v8;
    }
    while ( v8 < 2 );
    p_skel = &obj->skel;
    if ( v6 )
    {
      v12 = 0;
      v13 = &v59;
      while ( 1 )
      {
        _RAX = 2i64 * v12;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rbp+rax*8+200h+outDObjData.combinedPartBits.baseclass_0.baseclass_0.baseclass_0.array]
          vpand   xmm1, xmm0, xmm6
          vptest  xmm1, xmm1
        }
        if ( !_ZF )
          break;
        ++v12;
        v13 = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > *)((char *)v13 + 16);
        if ( v12 >= 2 )
          goto LABEL_34;
      }
      Sys_ProfBeginNamedEvent(0xFFF000FF, "XAnimIKPreCalc2");
      XAnimIKPreCalc(obj, &ikData, &outDObjData, partBits);
      Sys_ProfEndNamedEvent();
      XAnimProceduralBonesAddPartBits(obj, partBits);
    }
  }
LABEL_34:
  if ( !DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>>::bitComplement<bitarray_traits_simd128<bitarray_memory_traits_simd128u>,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v62, partBits, &p_skel->partBits.skel) )
  {
    Profile_Begin(((partBits->array[7] >> 1) & 1) + 415);
    DObjCalcAnimUseStack(obj, partBits, &ikCalcInfo);
    obj->skel.partBits.animCalculated = 1;
    DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>>::bitComplement<bitarray_traits_simd128<bitarray_memory_traits_simd128u>,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v62, partBits, &p_skel->partBits.skel);
    DuplicateParts = DObjGetDuplicateParts(obj);
    GetControlAndDuplicatePartBits(obj, partBits, (const DObjPartBitsAligned *)&v62, &DuplicateParts->partBits, (DObjPartBitsAligned *)&v59, (DObjPartBitsAligned *)&v61, &worldControlPartBits);
    numModels = obj->numModels;
    v21 = 0;
    modelFirstClientBoneIndex = DObjNumBones(obj);
    pairs = DuplicateParts->pairs;
    models = obj->models;
    pos = (DObjDuplicatePair *)pairs;
    v23 = HasClientOnlyBones;
    v55 = &models[numModels];
    offsets = obj->offsets;
    quats = obj->quats;
    v51 = numModels;
    if ( (v59.array[7] & 2) != 0 && !HasClientOnlyBones )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 791, ASSERT_TYPE_ASSERT, "(!calcPartBits.testClientBit() || hasClientBones)", (const char *)&queryFormat, "!calcPartBits.testClientBit() || hasClientBones") )
        __debugbreak();
      v23 = HasClientOnlyBones;
    }
    if ( (v62.array[7] & 2) == 0 && !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 792, ASSERT_TYPE_ASSERT, "(ignorePartBits.testClientBit() || hasClientBones)", (const char *)&queryFormat, "ignorePartBits.testClientBit() || hasClientBones") )
      __debugbreak();
    if ( numModels )
    {
      v24 = 0i64;
      do
      {
        v25 = models[v24];
        modelParent = *((unsigned __int8 *)v55 + v24);
        v26 = &quats[v7];
        v27 = (obj->flags & 0x20) != 0;
        modelAttachOffset = &offsets[v7];
        v48 = v27;
        pos = (DObjDuplicatePair *)CalcSkelDuplicateBones(v25, p_skel, v21, v27, modelAttachOffset, v26, pos, (DObjPartBitsAligned *)&v59);
        if ( modelParent == 255 )
          CalcSkelRootBonesNoParentOrDuplicate(v25, p_skel, v21, (DObjPartBitsAligned *)&v59);
        else
          CalcSkelRootBonesWithParent(v25, p_skel, v21, modelParent, v48, modelAttachOffset, v26, (DObjPartBitsAligned *)&v59, (const DObjPartBitsAligned *)&v61, &worldControlPartBits);
        CalcSkelNonRootBones(v25, p_skel, v21 + v25->numRootBones, (DObjPartBitsAligned *)&v59, (const DObjPartBitsAligned *)&v61, &worldControlPartBits);
        if ( HasClientOnlyBones )
        {
          pairs = CalcSkelClientBones(v25, p_skel, v21, modelFirstClientBoneIndex, (const DObjPartBitsAligned *)&v59, pos);
          pos = (DObjDuplicatePair *)pairs;
        }
        else
        {
          pairs = pos;
        }
        ++v7;
        v21 += v25->numBones;
        ++v24;
        modelFirstClientBoneIndex += v25->numClientBones;
      }
      while ( v24 < v51 );
      v7 = 0;
    }
    if ( pairs->child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 815, ASSERT_TYPE_ASSERT, "(!pos->child)", (const char *)&queryFormat, "!pos->child") )
      __debugbreak();
    v28 = DObjNumBones(obj);
    v29 = v28;
    v30 = v28;
    v52 = v28;
    if ( v28 > 0 )
    {
      v31 = v28;
      v32 = 0i64;
      do
      {
        if ( (unsigned int)v7 >= 0x100 )
        {
          LODWORD(worldCtrlPartBits) = 256;
          LODWORD(controlPartBits) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", controlPartBits, worldCtrlPartBits) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v7 & 0x1F)) & p_skel->partBits.anim.array[(unsigned __int64)(unsigned int)v7 >> 5]) != 0 )
        {
          mat = p_skel->mat;
          if ( (LODWORD(mat[v32].quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v32].quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v32].quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(mat[v32].quat.v[3]) & 0x7F800000) == 2139095040 )
          {
            BoneName = DObjGetBoneName(obj, v7);
            LODWORD(calcPartBits) = v7;
            LODWORD(controlPartBits) = obj->entnum - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 823, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( skel->mat[boneId].quat )[0] ) && !IS_NAN( ( skel->mat[boneId].quat )[1] ) && !IS_NAN( ( skel->mat[boneId].quat )[2] ) && !IS_NAN( ( skel->mat[boneId].quat )[3] ) ) )", "entity:%d boneName:%s boneIndex:%d", controlPartBits, BoneName, calcPartBits) )
              __debugbreak();
          }
          v35 = p_skel->mat;
          if ( (LODWORD(v35[v32].trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v35[v32].trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v35[v32].trans.v[2]) & 0x7F800000) == 2139095040 )
          {
            v36 = DObjGetBoneName(obj, v7);
            LODWORD(calcPartBits) = v7;
            LODWORD(controlPartBits) = obj->entnum - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 824, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( skel->mat[boneId].trans )[0] ) && !IS_NAN( ( skel->mat[boneId].trans )[1] ) && !IS_NAN( ( skel->mat[boneId].trans )[2] ) ) )", "entity:%d boneName:%s boneIndex:%d", controlPartBits, v36, calcPartBits) )
              __debugbreak();
          }
        }
        ++v7;
        ++v32;
        --v31;
      }
      while ( v31 );
      v30 = v52;
      v29 = v52;
    }
    if ( (p_skel->partBits.anim.array[7] & 2) != 0 )
    {
      v37 = DObjNumClientOnlyBones(obj) + v29;
      if ( v29 < v37 )
      {
        v38 = v30;
        do
        {
          v39 = p_skel->mat;
          if ( (LODWORD(v39[v38].quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v39[v38].quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v39[v38].quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v39[v38].quat.v[3]) & 0x7F800000) == 2139095040 )
          {
            v40 = DObjGetBoneName(obj, v29);
            LODWORD(calcPartBits) = v29;
            LODWORD(controlPartBits) = obj->entnum - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 833, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( skel->mat[boneId].quat )[0] ) && !IS_NAN( ( skel->mat[boneId].quat )[1] ) && !IS_NAN( ( skel->mat[boneId].quat )[2] ) && !IS_NAN( ( skel->mat[boneId].quat )[3] ) ) )", "entity:%d boneName:%s skelBoneIndex:%d", controlPartBits, v40, calcPartBits) )
              __debugbreak();
          }
          v41 = p_skel->mat;
          if ( (LODWORD(v41[v38].trans.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v41[v38].trans.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v41[v38].trans.v[2]) & 0x7F800000) == 2139095040 )
          {
            v42 = DObjGetBoneName(obj, v29);
            LODWORD(calcPartBits) = v29;
            LODWORD(controlPartBits) = obj->entnum - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 834, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( skel->mat[boneId].trans )[0] ) && !IS_NAN( ( skel->mat[boneId].trans )[1] ) && !IS_NAN( ( skel->mat[boneId].trans )[2] ) ) )", "entity:%d boneName:%s skelBoneIndex:%d", controlPartBits, v42, calcPartBits) )
              __debugbreak();
          }
          if ( 2.0 != p_skel->mat[v38].transWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 835, ASSERT_TYPE_ASSERT, "(skel->mat[boneId].transWeight == 2.0f)", (const char *)&queryFormat, "skel->mat[boneId].transWeight == 2.0f") )
            __debugbreak();
          ++v29;
          ++v38;
        }
        while ( v29 < v37 );
      }
    }
    Profile_EndInternal(NULL);
  }
}

/*
==============
DObjCalcSkelNoAnim
==============
*/
void DObjCalcSkelNoAnim(const DObj *obj, DObjPartBits *partBits)
{
  __int128 v2; 
  __int128 v3; 
  const DObj *v4; 
  DObjPartBits *v5; 
  unsigned int v6; 
  unsigned int v8; 
  unsigned int v11; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *p_calcPartBits; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int ClientBoneOffset; 
  const XModel **models; 
  __m128 *mat; 
  __m128 *v21; 
  const XModel *v22; 
  int numRootBones; 
  int *v24; 
  int v26; 
  unsigned __int64 *v27; 
  int numClientBones; 
  unsigned __int64 *v31; 
  const DObjDuplicateParts *DuplicateParts; 
  __int64 numModels; 
  unsigned int v36; 
  const XModel **v37; 
  int v38; 
  vec3_t *offsets; 
  const DObjDuplicatePair *pairs; 
  vec4_t *quats; 
  int v42; 
  const XModel **v43; 
  __int64 v44; 
  const XModel *v45; 
  bool v46; 
  const vec4_t *v47; 
  DSkel *p_skel; 
  bool fmt; 
  DObjPartBitsAligned *controlPartBits; 
  DObjPartBitsAligned *worldCtrlPartBits; 
  DObjPartBitsAligned *worldCtrlPartBitsa; 
  bool HasClientOnlyBones; 
  signed int modelParent; 
  unsigned int modelParenta; 
  const XModel **v56; 
  const XModel **v57; 
  const XModel *v59; 
  const XModel **v60; 
  __m128 *v61; 
  __int64 v62; 
  vec3_t *modelAttachOffseta; 
  vec3_t *v65; 
  vec4_t *v66; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > calcPartBits; 
  DObjPartBitsAligned worldControlPartBits; 
  DObjPartBitsAligned v69; 
  DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > > v70; 
  __int128 v71; 
  __int128 v72; 

  v4 = obj;
  v5 = partBits;
  Profile_Begin(415);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 879, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 880, ASSERT_TYPE_ASSERT, "(partBits)", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  if ( v4 == (const DObj *)-56i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 883, ASSERT_TYPE_ASSERT, "(skel)", (const char *)&queryFormat, "skel") )
    __debugbreak();
  HasClientOnlyBones = DObjHasClientOnlyBones(v4);
  if ( !DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>>::bitComplement<bitarray_traits_simd128<bitarray_memory_traits_simd128u>,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v70, v5, &v4->skel.partBits.skel) )
  {
    v6 = 0;
    _RDI = &calcPartBits;
    v8 = 0;
    v72 = v2;
    _RBP = (char *)v5 - (char *)&calcPartBits;
    v71 = v3;
    do
    {
      __asm { vlddqu  xmm6, xmmword ptr [rdi+rbp] }
      *(_OWORD *)_RDI->array = _XMM6;
      _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
      ++v8;
    }
    while ( v8 < 2 );
    v11 = 0;
    _RDI = &calcPartBits;
    do
    {
      __asm
      {
        vlddqu  xmm0, xmmword ptr [rdi]
        vpxor   xmm6, xmm0, xmm7
      }
      *(_OWORD *)_RDI->array = _XMM6;
      _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
      ++v11;
    }
    while ( v11 < 2 );
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&calcPartBits, &v4->skel.partBits.anim);
    p_calcPartBits = &calcPartBits;
    v16 = 0;
    while ( p_calcPartBits->array[0] == -1 )
    {
      ++v16;
      p_calcPartBits = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)p_calcPartBits + 4);
      if ( v16 >= 8 )
        goto LABEL_49;
    }
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v4->skel.partBits.anim, v5);
    v17 = 0;
    ClientBoneOffset = DObjGetClientBoneOffset(v4);
    models = v4->models;
    mat = (__m128 *)v4->skel.mat;
    v21 = &mat[2 * ClientBoneOffset];
    v56 = models;
    v61 = v21;
    if ( !models )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 912, ASSERT_TYPE_ASSERT, "(obj->models != 0)", (const char *)&queryFormat, "obj->models != NULL") )
        __debugbreak();
      models = NULL;
    }
    modelParent = 0;
    if ( v4->numModels )
    {
      do
      {
        v22 = *models;
        v59 = *models;
        numRootBones = (*models)->numRootBones;
        if ( (*models)->numRootBones )
        {
          v24 = &mat[1].m128_i32[2];
          do
          {
            if ( v17 >= 0x100 )
            {
              LODWORD(worldCtrlPartBits) = 256;
              LODWORD(controlPartBits) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", controlPartBits, worldCtrlPartBits) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v17 & 0x1F)) & calcPartBits.array[(unsigned __int64)v17 >> 5]) == 0 )
            {
              mat->m128_i32[0] = 0;
              *(_QWORD *)(v24 - 5) = 0i64;
              *(_QWORD *)(v24 - 3) = 1065353216i64;
              *(_QWORD *)(v24 - 1) = 0i64;
              v24[1] = 0;
            }
            mat += 2;
            v24 += 8;
            ++v17;
            --numRootBones;
          }
          while ( numRootBones );
          v22 = v59;
          LOBYTE(numRootBones) = v59->numRootBones;
        }
        _RBP = v22->quats;
        v26 = v22->numBones - (unsigned __int8)numRootBones;
        if ( v26 )
        {
          v27 = &mat[1].m128_u64[1];
          do
          {
            if ( v17 >= 0x100 )
            {
              LODWORD(worldCtrlPartBits) = 256;
              LODWORD(controlPartBits) = v17;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", controlPartBits, worldCtrlPartBits) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v17 & 0x1F)) & calcPartBits.array[(unsigned __int64)v17 >> 5]) == 0 )
            {
              __asm
              {
                vlddqu  xmm0, xmmword ptr [rbp+0]
                vpmovsxwd xmm1, xmm0
              }
              *mat = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
              *(v27 - 1) = 0i64;
              *v27 = 0i64;
            }
            mat += 2;
            v27 += 4;
            ++v17;
            _RBP += 4;
            --v26;
          }
          while ( v26 );
          v21 = v61;
        }
        if ( (calcPartBits.array[7] & 2) == 0 )
        {
          numClientBones = v59->numClientBones;
          if ( v59->numClientBones )
          {
            v31 = &v21[1].m128_u64[1];
            do
            {
              __asm
              {
                vlddqu  xmm0, xmmword ptr [rbp+0]
                vpmovsxwd xmm1, xmm0
              }
              *v21 = _mm128_mul_ps(_mm_cvtepi32_ps(_XMM1), (__m128)_xmm);
              v21 += 2;
              *(v31 - 1) = 0i64;
              *v31 = 0i64;
              v31 += 4;
              _RBP += 4;
              --numClientBones;
            }
            while ( numClientBones );
            v61 = v21;
          }
        }
        v4 = obj;
        models = v56 + 1;
        ++modelParent;
        ++v56;
      }
      while ( modelParent < obj->numModels );
      v5 = partBits;
    }
LABEL_49:
    DuplicateParts = DObjGetDuplicateParts(v4);
    GetControlAndDuplicatePartBits(v4, v5, (const DObjPartBitsAligned *)&v70, &DuplicateParts->partBits, (DObjPartBitsAligned *)&calcPartBits, &v69, &worldControlPartBits);
    numModels = v4->numModels;
    v36 = DObjGetClientBoneOffset(v4);
    v37 = v4->models;
    v38 = v36;
    offsets = v4->offsets;
    pairs = DuplicateParts->pairs;
    quats = v4->quats;
    v42 = 0;
    v60 = v37;
    v62 = numModels;
    v43 = &v37[numModels];
    v57 = v43;
    v65 = offsets;
    v66 = quats;
    if ( (_BYTE)numModels )
    {
      v44 = 0i64;
      do
      {
        v45 = v37[v44];
        modelParenta = *((unsigned __int8 *)v43 + v44);
        v46 = (v4->flags & 0x20) != 0;
        v47 = &quats[v42];
        modelAttachOffseta = &offsets[v42];
        pairs = CalcSkelDuplicateBones(v45, &obj->skel, v6, v46, modelAttachOffseta, v47, pairs, (DObjPartBitsAligned *)&calcPartBits);
        if ( modelParenta == 255 )
        {
          v4 = obj;
          p_skel = &obj->skel;
          CalcSkelRootBonesNoParentOrDuplicate(v45, &obj->skel, v6, (DObjPartBitsAligned *)&calcPartBits);
        }
        else
        {
          worldCtrlPartBitsa = (DObjPartBitsAligned *)v47;
          fmt = v46;
          v4 = obj;
          p_skel = &obj->skel;
          CalcSkelRootBonesWithParent(v45, &obj->skel, v6, modelParenta, fmt, modelAttachOffseta, (const vec4_t *const)worldCtrlPartBitsa, (DObjPartBitsAligned *)&calcPartBits, &v69, &worldControlPartBits);
        }
        CalcSkelNonRootBones(v45, p_skel, v6 + v45->numRootBones, (DObjPartBitsAligned *)&calcPartBits, &v69, &worldControlPartBits);
        if ( HasClientOnlyBones )
          pairs = CalcSkelClientBones(v45, p_skel, v6, v38, (const DObjPartBitsAligned *)&calcPartBits, pairs);
        ++v42;
        v37 = v60;
        v6 += v45->numBones;
        ++v44;
        v43 = v57;
        v38 += v45->numClientBones;
        offsets = v65;
        quats = v66;
      }
      while ( v44 < v62 );
    }
    if ( pairs->child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 999, ASSERT_TYPE_ASSERT, "(!pos->child)", (const char *)&queryFormat, "!pos->child") )
      __debugbreak();
  }
  Profile_EndInternal(NULL);
}

/*
==============
GetControlAndDuplicatePartBits
==============
*/
void GetControlAndDuplicatePartBits(const DObj *obj, const DObjPartBits *partBits, const DObjPartBitsAligned *ignorePartBits, const DObjPartBits *savedDuplicatePartBits, DObjPartBitsAligned *calcPartBits, DObjPartBitsAligned *controlPartBits, DObjPartBitsAligned *worldCtrlPartBits)
{
  DSkel *p_skel; 
  DObjPartBitsAligned *v12; 
  signed __int64 v13; 
  unsigned int v14; 
  DObjPartBitsAligned *v15; 
  unsigned int v16; 
  DObjPartBitsAligned *v17; 
  unsigned int i; 
  DObjPartBitsAligned *v24; 
  __int64 v25; 
  int v26; 
  unsigned int v27; 
  __int64 v28; 
  __int64 v29; 

  p_skel = &obj->skel;
  if ( obj == (const DObj *)-56i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 71, ASSERT_TYPE_ASSERT, "(skel)", (const char *)&queryFormat, "skel") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&p_skel->partBits.skel, partBits);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(controlPartBits, &p_skel->partBits.control);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(worldCtrlPartBits, &p_skel->partBits.worldCtrl);
  v12 = calcPartBits;
  v13 = (char *)ignorePartBits - (char *)calcPartBits;
  v14 = 0;
  v15 = calcPartBits;
  do
  {
    *(_OWORD *)v15->array = *(_OWORD *)((char *)v15->array + v13);
    v15 = (DObjPartBitsAligned *)((char *)v15 + 16);
    ++v14;
  }
  while ( v14 < 2 );
  v16 = 0;
  v17 = calcPartBits;
  _RSI = savedDuplicatePartBits;
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rsi]
      vpor    xmm6, xmm6, xmmword ptr [rdi]
    }
    *(_OWORD *)v17->array = _XMM6;
    v17 = (DObjPartBitsAligned *)((char *)v17 + 16);
    ++v16;
    _RSI = (const DObjPartBits *)((char *)_RSI + 16);
  }
  while ( v16 < 2 );
  _XMM7 = _xmm_ffffffffffffffffffffffffffffffff;
  for ( i = 0; i < 2; ++i )
  {
    __asm { vpxor   xmm6, xmm7, xmmword ptr [rbp+0] }
    *(_OWORD *)v12->array = _XMM6;
    v12 = (DObjPartBitsAligned *)((char *)v12 + 16);
  }
  v24 = controlPartBits;
  v25 = 8i64;
  do
  {
    if ( (*(unsigned int *)((_BYTE *)v24->array + (char *)savedDuplicatePartBits - (char *)controlPartBits) & v24->array[0]) != 0 )
    {
      DObjDumpInfo(obj);
      v26 = 0;
      if ( obj->numBones )
      {
        do
        {
          v27 = 0x80000000 >> (v26 & 0x1F);
          v28 = (__int64)v26 >> 5;
          if ( (v27 & controlPartBits->array[v28]) != 0 && (v27 & savedDuplicatePartBits->array[v28]) != 0 )
            break;
          ++v26;
        }
        while ( v26 < obj->numBones );
      }
      LODWORD(v29) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 95, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "control/meld conflict on bone %d - see the console log for details", v29) )
        __debugbreak();
    }
    v24 = (DObjPartBitsAligned *)((char *)v24 + 4);
    --v25;
  }
  while ( v25 );
}

/*
==============
LocalQuatMultiplyReverseEquals
==============
*/
void LocalQuatMultiplyReverseEquals(const vec4_t *in, vec4_t *inout)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 

  v2 = in->v[1];
  v3 = inout->v[2];
  v4 = inout->v[1];
  v5 = in->v[3];
  v6 = inout->v[3];
  v7 = in->v[2];
  v8 = (float)((float)((float)(v2 * v6) - (float)(v7 * inout->v[0])) + (float)(v4 * v5)) + (float)(v3 * in->v[0]);
  v9 = (float)((float)((float)(v2 * inout->v[0]) + (float)(v7 * v6)) - (float)(v4 * in->v[0])) + (float)(v3 * v5);
  v10 = (float)((float)((float)(v5 * v6) - (float)(inout->v[0] * in->v[0])) - (float)(v2 * v4)) - (float)(v3 * v7);
  inout->v[0] = (float)((float)((float)(inout->v[0] * v5) + (float)(in->v[0] * v6)) + (float)(v4 * v7)) - (float)(v3 * v2);
  inout->v[1] = v8;
  inout->v[3] = v10;
  inout->v[2] = v9;
}


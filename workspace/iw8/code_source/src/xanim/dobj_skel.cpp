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
  int v14; 
  bool v16; 
  signed __int16 child; 
  int v18; 
  unsigned __int16 parent; 

  if ( !model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 143, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  numClientBones = model->numClientBones;
  clientToModelOffset = modelFirstClientBoneIndex - model->numBones - modelFirstBoneIndex;
  if ( clientToModelOffset < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 551, ASSERT_TYPE_ASSERT, "(clientToModelOffset >= 0)", (const char *)&queryFormat, "clientToModelOffset >= 0") )
    __debugbreak();
  if ( clientToModelOffset > modelFirstClientBoneIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 552, ASSERT_TYPE_ASSERT, "(clientToModelOffset <= modelFirstClientBoneIndex)", (const char *)&queryFormat, "clientToModelOffset <= modelFirstClientBoneIndex") )
    __debugbreak();
  v12 = numClientBones + modelFirstClientBoneIndex;
  _R12 = skel->mat;
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
        CalcSkelClientBonesNoDuplicates(v14, v18, _R12, model, modelFirstClientBoneIndex, clientToModelOffset);
      parent = duplicatePair->parent;
      ++duplicatePair;
      _RAX = 32i64 * (unsigned int)v18;
      _RCX = 32i64 * ((parent - 1) & 0x7FFF);
      __asm { vmovups ymm0, ymmword ptr [rcx+r12] }
      v14 = v18 + 1;
      __asm { vmovups ymmword ptr [rax+r12], ymm0 }
    }
    while ( v18 + 1 < v12 );
  }
  if ( v16 )
    CalcSkelClientBonesNoDuplicates(v14, v12, _R12, model, modelFirstClientBoneIndex, clientToModelOffset);
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
  unsigned int numBones; 
  __int64 v21; 
  __int64 numRootBones; 
  __int64 v24; 
  __int64 v26; 
  unsigned int v27; 
  unsigned __int8 *v28; 
  signed int v33; 
  int v35; 
  bool v105; 
  bool v106; 
  __int64 v117; 
  __int64 v118; 
  int v119; 
  int v120; 
  int v121; 
  int v122; 
  int v123; 
  int v124; 
  int v125; 
  int v126; 
  int v127; 
  int v128; 
  int v129; 
  unsigned __int8 *v130; 
  __int128 v131; 
  void *retaddr; 

  _R11 = &retaddr;
  _RBP = model;
  if ( endBoneIndex > startBoneIndex )
  {
    parentList = _RBP->parentList;
    numBones = _RBP->numBones;
    v21 = startBoneIndex;
    numRootBones = _RBP->numRootBones;
    __asm
    {
      vmovaps xmmword ptr [r11-0B8h], xmm13
      vbroadcastss xmm13, dword ptr [rbp+24h]
    }
    v24 = endBoneIndex;
    __asm
    {
      vmovaps [rsp+148h+var_D8], xmm15
      vmovups xmm15, cs:__xmm@40000000400000004000000040000000
    }
    if ( startBoneIndex < (__int64)endBoneIndex )
    {
      __asm
      {
        vmovaps [rsp+148h+var_48], xmm6
        vmovaps [rsp+148h+var_58], xmm7
      }
      v26 = numBones - numRootBones - firstModelClientBoneIndex;
      __asm { vmovaps [rsp+148h+var_68], xmm8 }
      v27 = numBones + startBoneIndex - numRootBones - firstModelClientBoneIndex;
      __asm
      {
        vmovaps [rsp+148h+var_78], xmm9
        vmovaps [rsp+148h+var_88], xmm10
      }
      v28 = &parentList[v26];
      __asm { vmovaps [rsp+148h+var_98], xmm11 }
      _RBX = &mats[startBoneIndex].trans;
      __asm
      {
        vmovaps [rsp+148h+var_A8], xmm12
        vmovaps [rsp+148h+var_C8], xmm14
        vmovss  xmm14, cs:__real@40000000
      }
      v130 = &parentList[v26];
      _RSI = (__int64)&_RBP->trans[3 * startBoneIndex + 2 + 3 * v26];
      v129 = numRootBones - numBones;
      do
      {
        if ( v27 >= _RBP->numClientBones + _RBP->numBones - (unsigned int)numRootBones )
        {
          LODWORD(v118) = _RBP->numClientBones + _RBP->numBones - numRootBones;
          LODWORD(v117) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 462, ASSERT_TYPE_ASSERT, "(unsigned)( localParentListIndex ) < (unsigned)( XModelTotalNumBones( model ) - numRootBones )", "localParentListIndex doesn't index XModelTotalNumBones( model ) - numRootBones\n\t%i not in [0, %i)", v117, v118) )
            __debugbreak();
        }
        __asm { vmovups xmm8, xmmword ptr [rbx-10h] }
        v33 = v28[v21];
        __asm { vmovups xmm12, xmmword ptr [rbx] }
        v35 = v33 + clientToModelOffset;
        __asm { vshufps xmm0, xmm8, xmm8, 0D2h ; 'Ò' }
        if ( v33 <= (int)(v27 + v129) )
          v35 = v28[v21];
        _RCX = (__int64)(&_RBX[-2].z - 8 * v35);
        __asm
        {
          vshufps xmm7, xmm8, xmm8, 0FFh
          vmovups xmm10, xmmword ptr [rcx]
          vmovups xmm11, xmmword ptr [rcx+10h]
          vshufps xmm6, xmm10, xmm10, 0FFh
          vshufps xmm1, xmm10, xmm10, 0C9h ; 'É'
          vmulps  xmm3, xmm1, xmm0
          vshufps xmm1, xmm8, xmm8, 0C9h ; 'É'
          vshufps xmm2, xmm10, xmm10, 0D2h ; 'Ò'
          vmulps  xmm0, xmm2, xmm1
          vsubps  xmm5, xmm3, xmm0
          vmulps  xmm1, xmm10, xmm8
          vinsertps xmm0, xmm1, xmm1, 8
          vhaddps xmm2, xmm0, xmm0
          vmulps  xmm0, xmm7, xmm6
          vmulps  xmm1, xmm8, xmm6
          vmulps  xmm4, xmm10, xmm7
          vaddps  xmm1, xmm4, xmm1
          vhaddps xmm3, xmm2, xmm2
          vsubps  xmm2, xmm0, xmm3
          vaddps  xmm0, xmm5, xmm1
          vblendps xmm6, xmm2, xmm0, 7
          vcmpneqps xmm1, xmm6, xmm6
          vmovmskps eax, xmm1
        }
        if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 489, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( worldChildQuat ))", (const char *)&queryFormat, "!Float4IsNaN( worldChildQuat )") )
          __debugbreak();
        __asm
        {
          vmulps  xmm0, xmm6, xmm6
          vhaddps xmm1, xmm0, xmm0
          vhaddps xmm0, xmm1, xmm1
          vsqrtps xmm1, xmm0
          vdivps  xmm9, xmm6, xmm1
          vcmpneqps xmm0, xmm9, xmm9
          vmovmskps eax, xmm0
        }
        if ( _EAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 492, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( worldChildQuat ))", (const char *)&queryFormat, "!Float4IsNaN( worldChildQuat )") )
          __debugbreak();
        __asm
        {
          vmovss  xmm0, dword ptr [rsi-8]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v119 & 0x7F800000) == 2139095040 )
          goto LABEL_39;
        __asm
        {
          vmovss  xmm0, dword ptr [rsi-4]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v120 & 0x7F800000) == 2139095040 )
          goto LABEL_39;
        __asm
        {
          vmovss  xmm0, dword ptr [rsi]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v121 & 0x7F800000) == 2139095040 )
        {
LABEL_39:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 495, ASSERT_TYPE_SANITY, "( !IS_NAN( ( trans )[0] ) && !IS_NAN( ( trans )[1] ) && !IS_NAN( ( trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( trans )[0] ) && !IS_NAN( ( trans )[1] ) && !IS_NAN( ( trans )[2] )") )
            __debugbreak();
        }
        __asm { vmovss  xmm0, dword ptr [rsi-8] }
        HIDWORD(v131) = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+50h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rsi-4], 10h
          vinsertps xmm3, xmm3, dword ptr [rsi], 20h ; ' '
          vmovups xmmword ptr [rsp+50h], xmm3
          vmulps  xmm0, xmm13, xmm12
          vaddps  xmm7, xmm0, xmm3
          vshufps xmm0, xmm7, xmm7, 0D2h ; 'Ò'
          vshufps xmm1, xmm7, xmm7, 0C9h ; 'É'
          vshufps xmm8, xmm10, xmm10, 0D2h ; 'Ò'
          vmulps  xmm2, xmm1, xmm8
          vshufps xmm6, xmm10, xmm10, 0C9h ; 'É'
          vmulps  xmm3, xmm0, xmm6
          vsubps  xmm0, xmm3, xmm2
          vaddps  xmm4, xmm0, xmm0
          vshufps xmm5, xmm10, xmm10, 0FFh
          vmulps  xmm0, xmm5, xmm4
          vaddps  xmm5, xmm0, xmm7
          vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
          vmulps  xmm2, xmm0, xmm8
          vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
          vmulps  xmm3, xmm1, xmm6
          vsubps  xmm1, xmm3, xmm2
          vaddps  xmm3, xmm1, xmm5
          vaddps  xmm2, xmm11, xmm3
          vshufps xmm0, xmm2, xmm15, 0FAh ; 'ú'
          vshufps xmm1, xmm2, xmm0, 84h ; '„'
          vmovups xmmword ptr [rbx-10h], xmm9
          vmovups xmmword ptr [rbx], xmm1
          vmovss  xmm0, dword ptr [rbx-10h]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v122 & 0x7F800000) == 2139095040 )
          goto LABEL_40;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-0Ch]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v123 & 0x7F800000) == 2139095040 )
          goto LABEL_40;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-8]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v124 & 0x7F800000) == 2139095040 )
          goto LABEL_40;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx-4]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v125 & 0x7F800000) == 2139095040 )
        {
LABEL_40:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 514, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v126 & 0x7F800000) == 2139095040 )
          goto LABEL_41;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vmovss  [rsp+148h+var_108], xmm0
        }
        if ( (v127 & 0x7F800000) == 2139095040 )
          goto LABEL_41;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+8]
          vmovss  [rsp+148h+var_108], xmm0
        }
        v105 = (v128 & 0x7F800000) == 2139095040;
        if ( (v128 & 0x7F800000) == 2139095040 )
        {
LABEL_41:
          v106 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 515, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )");
          v105 = !v106;
          if ( v106 )
            __debugbreak();
        }
        __asm { vucomiss xmm14, dword ptr [rbx+0Ch] }
        if ( !v105 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 538, ASSERT_TYPE_ASSERT, "(childMat->transWeight == 2.0f)", (const char *)&queryFormat, "childMat->transWeight == 2.0f") )
          __debugbreak();
        v28 = v130;
        ++v27;
        ++v21;
        _RSI += 12i64;
        _RBX = (vec3_t *)((char *)_RBX + 32);
      }
      while ( v21 < v24 );
      __asm
      {
        vmovaps xmm14, [rsp+148h+var_C8]
        vmovaps xmm12, [rsp+148h+var_A8]
        vmovaps xmm11, [rsp+148h+var_98]
        vmovaps xmm10, [rsp+148h+var_88]
        vmovaps xmm9, [rsp+148h+var_78]
        vmovaps xmm8, [rsp+148h+var_68]
        vmovaps xmm7, [rsp+148h+var_58]
        vmovaps xmm6, [rsp+148h+var_48]
      }
    }
    __asm
    {
      vmovaps xmm13, [rsp+148h+var_B8]
      vmovaps xmm15, [rsp+148h+var_D8]
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
  int v12; 
  __int64 parent; 
  int i; 
  __int64 v20; 
  int j; 
  __int64 v37; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  vec3_t out; 
  vec4_t in; 

  v8 = pos;
  v10 = minBoneIndex + model->numBones;
  _R12 = skel->mat;
  v12 = pos->child - 1;
  if ( v12 < v10 )
  {
    parent = pos->parent;
    if ( (int)parent > v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 126, ASSERT_TYPE_ASSERT, "(parentIndex < boneIndex)", (const char *)&queryFormat, "parentIndex < boneIndex") )
      __debugbreak();
    if ( isCompositeModel && ((0x80000000 >> (v12 & 0x1F)) & calcPartBits->array[v12 >> 5]) != 0 )
    {
      _RAX = modelAttachQuat;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovss  [rsp+88h+var_58], xmm0
        vmovups xmmword ptr [rsp+88h+in], xmm0
      }
      if ( (v42 & 0x7F800000) == 2139095040 )
        goto LABEL_29;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+88h+in+4]
        vmovss  [rsp+88h+var_58], xmm0
      }
      if ( (v43 & 0x7F800000) == 2139095040 )
        goto LABEL_29;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+88h+in+8]
        vmovss  [rsp+88h+var_58], xmm0
      }
      if ( (v44 & 0x7F800000) == 2139095040 )
        goto LABEL_29;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+88h+in+0Ch]
        vmovss  [rsp+88h+var_58], xmm0
      }
      if ( (v45 & 0x7F800000) == 2139095040 )
      {
LABEL_29:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 134, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentRotationQuat )[0] ) && !IS_NAN( ( parentRotationQuat )[1] ) && !IS_NAN( ( parentRotationQuat )[2] ) && !IS_NAN( ( parentRotationQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentRotationQuat )[0] ) && !IS_NAN( ( parentRotationQuat )[1] ) && !IS_NAN( ( parentRotationQuat )[2] ) && !IS_NAN( ( parentRotationQuat )[3] )") )
          __debugbreak();
      }
      MatrixTransformVectorQuatTrans(modelAttachOffset, &_R12[parent - 1], &out);
      for ( i = pos->child - 1; i < v10; i = v8->child - 1 )
      {
        v20 = v8->parent;
        if ( (int)v20 > i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 145, ASSERT_TYPE_ASSERT, "(parentIndex < boneIndex)", (const char *)&queryFormat, "parentIndex < boneIndex") )
          __debugbreak();
        _RAX = 32 * v20;
        ++v8;
        _RSI = &_R12[i];
        __asm
        {
          vmovups ymm0, ymmword ptr [rax+r12-20h]
          vmovups ymmword ptr [rsi], ymm0
        }
        if ( ((0x80000000 >> (i & 0x1F)) & calcPartBits->array[i >> 5]) != 0 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+88h+out]
            vaddss  xmm1, xmm0, dword ptr [rsi+10h]
            vmovss  dword ptr [rsi+10h], xmm1
            vmovss  xmm2, dword ptr [rsp+88h+out+4]
            vaddss  xmm0, xmm2, dword ptr [rsi+14h]
            vmovss  dword ptr [rsi+14h], xmm0
            vmovss  xmm1, dword ptr [rsp+88h+out+8]
            vaddss  xmm2, xmm1, dword ptr [rsi+18h]
            vmovss  dword ptr [rsi+18h], xmm2
          }
          LocalQuatMultiplyReverseEquals(&in, &_RSI->quat);
          __asm
          {
            vmovups xmm2, xmmword ptr [rsi]
            vmulps  xmm0, xmm2, xmm2
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
            vsqrtps xmm1, xmm0
            vdivps  xmm2, xmm2, xmm1
            vmovups xmmword ptr [rsi], xmm2
          }
          _RSI->transWeight = 2.0;
        }
      }
    }
    else
    {
      for ( j = pos->child - 1; j < v10; j = v8->child - 1 )
      {
        v37 = v8->parent;
        if ( (int)v37 > j && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 167, ASSERT_TYPE_ASSERT, "(parentIndex < boneIndex)", (const char *)&queryFormat, "parentIndex < boneIndex") )
          __debugbreak();
        _RAX = 32i64 * j;
        ++v8;
        _RCX = 32 * v37;
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+r12-20h]
          vmovups ymmword ptr [rax+r12], ymm0
        }
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
  DSkel *v17; 
  DObjAnimMat *mat; 
  int v20; 
  int v22; 
  int v23; 
  int v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned int *v27; 
  unsigned int v28; 
  int v29; 
  signed int v30; 
  int v31; 
  unsigned int v32; 
  unsigned int v33; 
  int numBones; 
  int numRootBones; 
  unsigned int v37; 
  unsigned int v38; 
  int v39; 
  unsigned int v41; 
  unsigned __int64 v42; 
  unsigned int v43; 
  __int64 v284; 
  __int64 v285; 
  int v286; 
  int v287; 
  int v288; 
  int v289; 
  int v290; 
  int v291; 
  int v292; 
  int v293; 
  int v294; 
  int v295; 
  int v297; 
  int v298; 
  int v299; 
  int v300; 
  int v301; 
  int v303; 
  int v304; 
  int v305; 
  int v311; 
  int v312; 
  unsigned int *v314; 
  int v316; 
  int v317; 
  DObjAnimMat *v319; 
  __int64 v320; 
  signed __int64 v321; 
  void *retaddr; 
  const DObjPartBitsAligned *controlPartBitsa; 
  const DObjPartBitsAligned *worldControlPartBitsa; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-58h], xmm6 }
  v17 = skel;
  _RBP = model;
  mat = skel->mat;
  v20 = minBoneIndex + model->numBones - model->numRootBones;
  __asm { vmovss  xmm6, dword ptr [rbp+24h] }
  v22 = minBoneIndex >> 5;
  v311 = v22;
  v23 = v20 - 1;
  v24 = v20 - 32 * v22;
  v25 = v23 >> 5;
  v312 = v24;
  v319 = mat;
  __asm { vmovss  [rsp+1B8h+var_170], xmm6 }
  if ( v22 <= v25 )
  {
    worldControlPartBitsa = (const DObjPartBitsAligned *)((char *)worldControlPartBits - (char *)calcPartBits);
    controlPartBitsa = (const DObjPartBitsAligned *)((char *)controlPartBits - (char *)calcPartBits);
    v26 = v25 - v22 + 1;
    v27 = &calcPartBits->array[v22];
    __asm
    {
      vmovaps xmmword ptr [r11-68h], xmm7
      vmovaps xmmword ptr [r11-78h], xmm8
      vmovaps xmmword ptr [r11-88h], xmm9
      vmovaps xmmword ptr [r11-98h], xmm10
      vmovaps xmmword ptr [r11-0A8h], xmm11
      vmovaps xmmword ptr [r11-0B8h], xmm12
      vmovaps xmmword ptr [r11-0C8h], xmm13
      vmovaps xmmword ptr [r11-0D8h], xmm14
      vmovaps xmmword ptr [r11-0E8h], xmm15
    }
    v321 = (char *)_RBP - (char *)calcPartBits;
    v314 = v27;
    v320 = v26;
    while ( 1 )
    {
      v28 = *v27;
      v29 = 32;
      if ( v24 < 32 )
        v29 = v24;
      v30 = __lzcnt(v28);
      v316 = v29;
      if ( v30 < v29 )
        break;
LABEL_77:
      ++v22;
      ++v27;
      v24 -= 32;
      v311 = v22;
      --v26;
      v314 = v27;
      v320 = v26;
      v312 = v24;
      if ( !v26 )
      {
        __asm
        {
          vmovaps xmm15, [rsp+1B8h+var_E8]
          vmovaps xmm14, [rsp+1B8h+var_D8]
          vmovaps xmm13, [rsp+1B8h+var_C8]
          vmovaps xmm12, [rsp+1B8h+var_B8]
          vmovaps xmm11, [rsp+1B8h+var_A8]
          vmovaps xmm10, [rsp+1B8h+var_98]
          vmovaps xmm9, [rsp+1B8h+var_88]
          vmovaps xmm8, [rsp+1B8h+var_78]
          vmovaps xmm7, [rsp+1B8h+var_68]
        }
        goto LABEL_79;
      }
    }
    v31 = 32 * v22;
    v317 = 32 * v22;
    while ( 1 )
    {
      v32 = v31 + v30;
      if ( (unsigned int)v30 >= 0x20 )
      {
        LODWORD(v285) = 32;
        LODWORD(v284) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v284, v285) )
          __debugbreak();
      }
      v33 = 0x80000000 >> v30;
      if ( ((0x80000000 >> v30) & v28) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 381, ASSERT_TYPE_ASSERT, "(bits & boneBit)", (const char *)&queryFormat, "bits & boneBit") )
        __debugbreak();
      numBones = _RBP->numBones;
      v28 &= ~v33;
      numRootBones = _RBP->numRootBones;
      _RBX = &mat[v32];
      *v27 = v28;
      v37 = v32 - minBoneIndex;
      v38 = numBones - numRootBones;
      if ( v32 - minBoneIndex >= v38 )
      {
        LODWORD(v285) = v38;
        LODWORD(v284) = v32 - minBoneIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( boneOffset ) < (unsigned)( model->numBones - model->numRootBones )", "boneOffset doesn't index model->numBones - model->numRootBones\n\t%i not in [0, %i)", v284, v285) )
          __debugbreak();
      }
      v39 = _RBP->parentList[v37];
      _RSI = &_RBX[-v39];
      if ( v32 >= 0x100 )
      {
        LODWORD(v285) = 256;
        LODWORD(v284) = v32;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v284, v285) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v32 & 0x1F)) & v17->partBits.anim.array[(unsigned __int64)v32 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 394, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( boneIndex ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( boneIndex )") )
        __debugbreak();
      v41 = v32 - v39;
      if ( v41 >= 0x100 )
      {
        LODWORD(v285) = 256;
        LODWORD(v284) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v284, v285) )
          __debugbreak();
      }
      v42 = (unsigned __int64)v41 >> 5;
      v43 = 0x80000000 >> (v41 & 0x1F);
      if ( (v43 & skel->partBits.skel.array[v42]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 395, ASSERT_TYPE_ASSERT, "(skel->partBits.skel.testBit( boneIndex - parentOffset ))", (const char *)&queryFormat, "skel->partBits.skel.testBit( boneIndex - parentOffset )") )
        __debugbreak();
      if ( v41 >= 0x100 )
      {
        LODWORD(v285) = 256;
        LODWORD(v284) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v284, v285) )
          __debugbreak();
      }
      if ( (v43 & skel->partBits.anim.array[v42]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 396, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( boneIndex - parentOffset ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( boneIndex - parentOffset )") )
        __debugbreak();
      if ( (v33 & *(unsigned int *)((_BYTE *)worldControlPartBitsa->array + (_QWORD)v314)) == 0 )
      {
        if ( (v33 & *(unsigned int *)((_BYTE *)controlPartBitsa->array + (_QWORD)v314)) != 0 )
        {
          v17 = skel;
          if ( (skel->partBits.skel.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 406, ASSERT_TYPE_ASSERT, "(skel->partBits.skel.testBit( 0 ))", (const char *)&queryFormat, "skel->partBits.skel.testBit( 0 )") )
            __debugbreak();
          if ( (skel->partBits.anim.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 407, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( 0 ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( 0 )") )
            __debugbreak();
          __asm
          {
            vmovss  xmm9, dword ptr [rsi]
            vmovss  xmm10, dword ptr [rsi+0Ch]
            vmovss  xmm5, dword ptr [rsi+4]
            vmovss  xmm11, dword ptr [rsi+8]
          }
          _RAX = v319;
          __asm
          {
            vmovss  xmm12, dword ptr [rax+0Ch]
            vmovss  xmm6, dword ptr [rax]
            vmovss  xmm8, dword ptr [rax+4]
            vmovss  xmm7, dword ptr [rax+8]
            vmulss  xmm1, xmm9, xmm12
            vmulss  xmm0, xmm10, xmm6
            vsubss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm11, xmm8
            vsubss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm5, xmm7
            vaddss  xmm14, xmm3, xmm0
            vmulss  xmm0, xmm10, xmm8
            vmulss  xmm1, xmm5, xmm12
            vmulss  xmm2, xmm11, xmm6
            vaddss  xmm3, xmm2, xmm1
            vsubss  xmm4, xmm3, xmm0
            vmulss  xmm1, xmm9, xmm7
            vsubss  xmm15, xmm4, xmm1
            vmulss  xmm1, xmm9, xmm8
            vmulss  xmm0, xmm5, xmm6
            vmulss  xmm2, xmm11, xmm12
            vsubss  xmm3, xmm2, xmm0
            vaddss  xmm4, xmm3, xmm1
            vmulss  xmm2, xmm9, xmm6
            vmovss  xmm6, dword ptr [rbx]
            vmulss  xmm0, xmm10, xmm7
            vsubss  xmm13, xmm4, xmm0
            vmulss  xmm0, xmm5, xmm8
            vmovss  xmm8, dword ptr [rbx+8]
            vmovss  xmm5, dword ptr [rbx+0Ch]
            vmulss  xmm1, xmm10, xmm12
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm4, xmm3, xmm0
            vmulss  xmm1, xmm11, xmm7
            vmovss  xmm7, dword ptr [rbx+4]
            vaddss  xmm9, xmm4, xmm1
            vmulss  xmm1, xmm6, xmm9
            vmulss  xmm0, xmm5, xmm14
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm0, xmm8, xmm15
            vmulss  xmm1, xmm7, xmm13
            vaddss  xmm3, xmm2, xmm1
            vsubss  xmm4, xmm3, xmm0
            vmovss  [rsp+1B8h+var_168], xmm4
            vmulss  xmm2, xmm5, xmm15
            vmulss  xmm1, xmm6, xmm13
            vsubss  xmm3, xmm2, xmm1
            vmulss  xmm1, xmm8, xmm14
            vmulss  xmm0, xmm7, xmm9
            vaddss  xmm4, xmm3, xmm0
            vaddss  xmm2, xmm4, xmm1
            vmovss  [rsp+1B8h+var_178], xmm2
            vmulss  xmm2, xmm5, xmm13
            vmulss  xmm0, xmm6, xmm15
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm0, xmm8, xmm9
            vmulss  xmm1, xmm7, xmm14
            vsubss  xmm4, xmm3, xmm1
            vmovss  [rsp+1B8h+var_16C], xmm14
            vmulss  xmm1, xmm6, [rsp+1B8h+var_16C]
            vaddss  xmm14, xmm4, xmm0
            vmovss  dword ptr [rbx+8], xmm14
            vmulss  xmm2, xmm5, xmm9
            vsubss  xmm3, xmm2, xmm1
            vmulss  xmm1, xmm8, xmm13
            vmovss  xmm13, [rsp+1B8h+var_178]
            vmovss  dword ptr [rbx+4], xmm13
            vmulss  xmm0, xmm7, xmm15
            vmovss  xmm15, [rsp+1B8h+var_168]
            vmovss  dword ptr [rbx], xmm15
            vsubss  xmm4, xmm3, xmm0
            vsubss  xmm12, xmm4, xmm1
            vmovss  dword ptr [rbx+0Ch], xmm12
            vmovss  xmm8, dword ptr [rax+0Ch]
            vmovss  xmm9, dword ptr [rax]
            vmovss  xmm10, dword ptr [rax+4]
            vmovss  xmm11, dword ptr [rax+8]
            vmulss  xmm1, xmm12, xmm9
            vmulss  xmm0, xmm8, xmm15
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm14, xmm10
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm11, xmm13
            vsubss  xmm7, xmm3, xmm0
            vmulss  xmm2, xmm8, xmm13
            vmulss  xmm1, xmm14, xmm9
            vsubss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm10, xmm12
            vaddss  xmm4, xmm3, xmm0
            vmulss  xmm1, xmm11, xmm15
            vaddss  xmm6, xmm4, xmm1
            vmulss  xmm0, xmm9, xmm13
            vmulss  xmm2, xmm14, xmm8
            vaddss  xmm3, xmm2, xmm0
            vmulss  xmm1, xmm10, xmm15
            vsubss  xmm4, xmm3, xmm1
            vmulss  xmm0, xmm11, xmm12
            vaddss  xmm5, xmm4, xmm0
            vmulss  xmm1, xmm9, xmm15
            vmulss  xmm2, xmm8, xmm12
            vsubss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm10, xmm13
            vsubss  xmm4, xmm3, xmm0
            vmulss  xmm1, xmm14, xmm11
            vsubss  xmm2, xmm4, xmm1
            vmovss  dword ptr [rbx+4], xmm6
            vmovss  xmm6, [rsp+1B8h+var_170]
            vmovss  dword ptr [rbx+0Ch], xmm2
            vmovss  dword ptr [rbx], xmm7
            vmovss  dword ptr [rbx+8], xmm5
          }
          goto LABEL_38;
        }
        __asm
        {
          vmovss  xmm15, dword ptr [rsi]
          vmovss  xmm10, dword ptr [rsi+0Ch]
          vmovss  xmm12, dword ptr [rsi+4]
          vmovss  xmm9, dword ptr [rsi+8]
          vmovss  xmm14, dword ptr [rbx+0Ch]
          vmovss  xmm11, dword ptr [rbx]
          vmovss  xmm13, dword ptr [rbx+8]
          vmovss  xmm8, dword ptr [rbx+4]
          vmulss  xmm1, xmm10, xmm11
          vmulss  xmm0, xmm15, xmm14
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm12, xmm13
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm9, xmm8
          vsubss  xmm7, xmm3, xmm0
          vmulss  xmm2, xmm10, xmm8
          vmulss  xmm1, xmm15, xmm13
          vsubss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm12, xmm14
          vaddss  xmm4, xmm3, xmm0
          vmulss  xmm1, xmm9, xmm11
          vaddss  xmm6, xmm4, xmm1
          vmulss  xmm0, xmm10, xmm13
          vmulss  xmm2, xmm15, xmm8
          vaddss  xmm3, xmm2, xmm0
          vmulss  xmm1, xmm12, xmm11
          vsubss  xmm4, xmm3, xmm1
          vmulss  xmm0, xmm9, xmm14
          vaddss  xmm5, xmm4, xmm0
          vmulss  xmm1, xmm15, xmm11
          vmulss  xmm2, xmm10, xmm14
          vsubss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm12, xmm8
          vsubss  xmm4, xmm3, xmm0
          vmulss  xmm1, xmm9, xmm13
          vsubss  xmm2, xmm4, xmm1
          vmovss  dword ptr [rbx+4], xmm6
          vmovss  xmm6, [rsp+1B8h+var_170]
          vmovss  dword ptr [rbx+0Ch], xmm2
          vmovss  dword ptr [rbx], xmm7
          vmovss  dword ptr [rbx+8], xmm5
        }
      }
      v17 = skel;
LABEL_38:
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v286 & 0x7F800000) == 2139095040 )
        goto LABEL_82;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v287 & 0x7F800000) == 2139095040 )
        goto LABEL_82;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v288 & 0x7F800000) == 2139095040 )
        goto LABEL_82;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v289 & 0x7F800000) == 2139095040 )
      {
LABEL_82:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 415, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+10h]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v290 & 0x7F800000) == 2139095040 )
        goto LABEL_83;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+14h]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v291 & 0x7F800000) == 2139095040 )
        goto LABEL_83;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v292 & 0x7F800000) == 2139095040 )
      {
LABEL_83:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 416, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )") )
          __debugbreak();
      }
      __asm
      {
        vmovups xmm2, xmmword ptr [rbx]
        vmulps  xmm0, xmm2, xmm2
        vhaddps xmm1, xmm0, xmm0
      }
      _RDI = (int)(3 * v37);
      __asm
      {
        vhaddps xmm0, xmm1, xmm1
        vsqrtps xmm1, xmm0
        vdivps  xmm2, xmm2, xmm1
        vmovups xmmword ptr [rbx], xmm2
      }
      _RBX->transWeight = 2.0;
      _RBP = model->trans;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+rdi*4+0]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v293 & 0x7F800000) == 2139095040 )
        goto LABEL_84;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+rdi*4+4]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v294 & 0x7F800000) == 2139095040 )
        goto LABEL_84;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+rdi*4+8]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v295 & 0x7F800000) == 2139095040 )
      {
LABEL_84:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 421, ASSERT_TYPE_SANITY, "( !IS_NAN( ( trans )[0] ) && !IS_NAN( ( trans )[1] ) && !IS_NAN( ( trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( trans )[0] ) && !IS_NAN( ( trans )[1] ) && !IS_NAN( ( trans )[2] )") )
          __debugbreak();
      }
      _ECX = 0;
      _EAX = v33 & *(unsigned int *)((char *)v314 + v321 + 88);
      __asm
      {
        vmovd   xmm0, eax
        vmovd   xmm1, ecx
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm0, cs:__real@3f800000
        vblendvps xmm3, xmm0, xmm6, xmm2
        vmulss  xmm0, xmm3, dword ptr [rbx+10h]
        vaddss  xmm1, xmm0, dword ptr [rbp+rdi*4+0]
        vmovss  [rsp+1B8h+var_168], xmm1
        vmulss  xmm1, xmm3, dword ptr [rbx+14h]
        vaddss  xmm0, xmm1, dword ptr [rbp+rdi*4+4]
        vmovss  [rsp+1B8h+var_16C], xmm0
        vmulss  xmm0, xmm3, dword ptr [rbx+18h]
        vaddss  xmm1, xmm0, dword ptr [rbp+rdi*4+8]
        vmovss  xmm0, dword ptr [rsi]
        vmovss  [rsp+1B8h+var_178], xmm0
        vmovss  [rsp+1B8h+var_174], xmm3
        vmovss  [rsp+1B8h+var_174], xmm1
      }
      if ( (v297 & 0x7F800000) == 2139095040 )
        goto LABEL_85;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+4]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v298 & 0x7F800000) == 2139095040 )
        goto LABEL_85;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+8]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v299 & 0x7F800000) == 2139095040 )
        goto LABEL_85;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v300 & 0x7F800000) == 2139095040 )
      {
LABEL_85:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+1Ch]
        vmovss  [rsp+1B8h+var_178], xmm0
      }
      if ( (v301 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm5, dword ptr [rsi+8]
        vmovss  xmm0, dword ptr [rsi+1Ch]
        vmulss  xmm2, xmm0, dword ptr [rsi]
        vmulss  xmm15, xmm2, dword ptr [rsi]
        vmovss  xmm3, dword ptr [rsi+4]
        vmulss  xmm4, xmm0, xmm3
        vmulss  xmm6, xmm0, xmm5
        vmovss  xmm0, dword ptr [rsi+0Ch]
        vmulss  xmm11, xmm0, xmm2
        vmulss  xmm7, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm10, xmm5, xmm2
        vmulss  xmm2, xmm5, xmm6
        vmovss  xmm6, cs:__real@3f800000
        vaddss  xmm14, xmm1, xmm7
        vmulss  xmm12, xmm3, xmm4
        vmulss  xmm3, xmm0, xmm4
        vaddss  xmm0, xmm2, xmm12
        vsubss  xmm9, xmm6, xmm0
        vsubss  xmm0, xmm10, xmm3
        vmovss  [rsp+1B8h+var_110], xmm0
        vaddss  xmm0, xmm2, xmm15
        vmulss  xmm8, xmm5, xmm4
        vsubss  xmm5, xmm7, xmm1
        vsubss  xmm7, xmm6, xmm0
        vaddss  xmm3, xmm3, xmm10
        vmovss  xmm10, [rsp+1B8h+var_174]
        vaddss  xmm13, xmm8, xmm11
        vsubss  xmm4, xmm8, xmm11
        vmovss  xmm8, [rsp+1B8h+var_168]
        vmulss  xmm1, xmm9, xmm8
        vmovss  xmm9, [rsp+1B8h+var_16C]
        vaddss  xmm0, xmm12, xmm15
        vsubss  xmm6, xmm6, xmm0
        vmulss  xmm0, xmm5, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm10
        vmulss  xmm3, xmm8, [rsp+1B8h+var_110]
        vaddss  xmm2, xmm2, xmm1
        vaddss  xmm5, xmm2, dword ptr [rsi+10h]
        vmulss  xmm1, xmm14, xmm8
        vmulss  xmm0, xmm7, xmm9
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm10, xmm4
        vaddss  xmm2, xmm2, xmm1
        vmovss  dword ptr [rbx+10h], xmm5
        vaddss  xmm0, xmm2, dword ptr [rsi+14h]
        vmulss  xmm1, xmm13, xmm9
        vmovss  dword ptr [rbx+14h], xmm0
        vaddss  xmm2, xmm3, xmm1
        vmovss  [rsp+1B8h+var_174], xmm5
        vmulss  xmm0, xmm10, xmm6
        vaddss  xmm2, xmm2, xmm0
        vaddss  xmm1, xmm2, dword ptr [rsi+18h]
        vmovss  dword ptr [rbx+18h], xmm1
      }
      if ( (v303 & 0x7F800000) == 2139095040 )
        goto LABEL_86;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+14h]
        vmovss  [rsp+1B8h+var_174], xmm0
      }
      if ( (v304 & 0x7F800000) == 2139095040 )
        goto LABEL_86;
      __asm { vmovss  [rsp+1B8h+var_174], xmm1 }
      if ( (v305 & 0x7F800000) == 2139095040 )
      {
LABEL_86:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 427, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )") )
          __debugbreak();
      }
      __asm { vmovss  xmm6, [rsp+1B8h+var_170] }
      v27 = v314;
      _RBP = model;
      v31 = v317;
      mat = v319;
      v30 = __lzcnt(v28);
      if ( v30 >= v316 )
      {
        v24 = v312;
        v22 = v311;
        v26 = v320;
        goto LABEL_77;
      }
    }
  }
LABEL_79:
  __asm { vmovaps xmm6, [rsp+1B8h+var_58] }
}

/*
==============
CalcSkelRootBonesNoParentOrDuplicate
==============
*/
void CalcSkelRootBonesNoParentOrDuplicate(const XModel *model, DSkel *skel, int minBoneIndex, DObjPartBitsAligned *calcPartBits)
{
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
  __int64 v33; 
  __int64 v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  unsigned int *v43; 
  __int64 v44; 

  _RDI = skel->mat;
  v6 = minBoneIndex + model->numRootBones;
  v7 = minBoneIndex >> 5;
  v8 = v6 - 1;
  v9 = v6 - 32 * (minBoneIndex >> 5);
  v10 = v8 >> 5;
  v42 = v9;
  if ( v7 <= v10 )
  {
    v11 = &calcPartBits->array[v7];
    v12 = v10 - v7;
    v13 = 32 * v7;
    v14 = v12 + 1;
    v43 = v11;
    v44 = v14;
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
            LODWORD(v34) = 32;
            LODWORD(v33) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v33, v34) )
              __debugbreak();
          }
          if ( ((0x80000000 >> v17) & v15) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 211, ASSERT_TYPE_ASSERT, "(bits & boneBit)", (const char *)&queryFormat, "bits & boneBit") )
            __debugbreak();
          v15 &= ~(0x80000000 >> v17);
          _RBX = v18;
          *v43 = v15;
          __asm
          {
            vmovups xmm2, xmmword ptr [rbx+rdi]
            vmulps  xmm0, xmm2, xmm2
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
            vsqrtps xmm1, xmm0
            vdivps  xmm2, xmm2, xmm1
            vmovups xmmword ptr [rbx+rdi], xmm2
          }
          _RDI[_RBX].transWeight = 2.0;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rdi]
            vmovss  [rsp+0A8h+var_68], xmm0
          }
          if ( (v35 & 0x7F800000) == 2139095040 )
            goto LABEL_28;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rdi+4]
            vmovss  [rsp+0A8h+var_68], xmm0
          }
          if ( (v36 & 0x7F800000) == 2139095040 )
            goto LABEL_28;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rdi+8]
            vmovss  [rsp+0A8h+var_68], xmm0
          }
          if ( (v37 & 0x7F800000) == 2139095040 )
            goto LABEL_28;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rdi+0Ch]
            vmovss  [rsp+0A8h+var_68], xmm0
          }
          if ( (v38 & 0x7F800000) == 2139095040 )
          {
LABEL_28:
            LODWORD(v34) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 217, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat[boneIndex].quat )[0] ) && !IS_NAN( ( mat[boneIndex].quat )[1] ) && !IS_NAN( ( mat[boneIndex].quat )[2] ) && !IS_NAN( ( mat[boneIndex].quat )[3] ) ) )", "model: '%s' boneIndex: %d", model->name, v34) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rdi+10h]
            vmovss  [rsp+0A8h+var_68], xmm0
          }
          if ( (v39 & 0x7F800000) == 2139095040 )
            goto LABEL_21;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rdi+14h]
            vmovss  [rsp+0A8h+var_68], xmm0
          }
          if ( (v40 & 0x7F800000) == 2139095040 )
            goto LABEL_21;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+rdi+18h]
            vmovss  [rsp+0A8h+var_68], xmm0
          }
          if ( (v41 & 0x7F800000) == 2139095040 )
          {
LABEL_21:
            LODWORD(v34) = v18;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 218, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( mat[boneIndex].trans )[0] ) && !IS_NAN( ( mat[boneIndex].trans )[1] ) && !IS_NAN( ( mat[boneIndex].trans )[2] ) ) )", "model: '%s' boneIndex: %d", model->name, v34) )
              __debugbreak();
          }
          v17 = __lzcnt(v15);
        }
        while ( v17 < v16 );
        v9 = v42;
        v11 = v43;
        v14 = v44;
      }
      ++v11;
      v9 -= 32;
      v13 += 32;
      v43 = v11;
      --v14;
      v42 = v9;
      v44 = v14;
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
  unsigned __int64 v20; 
  DObjPartBitsAligned *v22; 
  unsigned __int64 v24; 
  unsigned int v25; 
  __int64 v27; 
  unsigned int v28; 
  int v29; 
  unsigned int v30; 
  char v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  int v40; 
  unsigned int v41; 
  unsigned int v42; 
  __int64 v330; 
  __int64 v331; 
  int v333; 
  int v334; 
  int v335; 
  int v336; 
  int v337; 
  int v338; 
  int v339; 
  int v340; 
  int v341; 
  int v342; 
  int v343; 
  int v344; 
  int v345; 
  int v346; 
  int v347; 
  int v348; 
  int v351; 
  int v352; 
  int v353; 
  int v357; 
  unsigned int v361; 
  int v362; 
  unsigned int v363; 
  int v364; 
  unsigned int v365; 
  unsigned __int64 v366; 
  DObjAnimMat *mat; 
  float v371; 
  vec3_t in; 

  __asm { vmovaps [rsp+1C0h+var_40], xmm6 }
  v20 = modelParent;
  v22 = calcPartBits;
  _R9 = model;
  v24 = (unsigned int)v20;
  v25 = minBoneIndex + model->numRootBones;
  __asm { vmovss  xmm6, dword ptr [r9+24h] }
  v27 = minBoneIndex >> 5;
  v28 = v25 - 1;
  v29 = v25 - 32 * v27;
  v30 = v28 >> 5;
  _R14 = &skel->mat[(unsigned int)v20];
  mat = skel->mat;
  _RAX = modelAttachOffset;
  v357 = v27;
  v365 = v30;
  v362 = v29;
  __asm { vmovsd  xmm0, qword ptr [rax] }
  v371 = modelAttachOffset->v[2];
  _RAX = modelAttachQuat;
  __asm
  {
    vmovsd  [rbp+0C0h+var_120], xmm0
    vmovss  [rsp+1C0h+var_170], xmm6
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rbp+0C0h+var_130], xmm0
  }
  if ( (unsigned int)v27 <= v30 )
  {
    v36 = v20 & 0x1F;
    __asm
    {
      vmovaps [rsp+1C0h+var_50], xmm7
      vmovaps [rsp+1C0h+var_60], xmm8
      vmovaps [rsp+1C0h+var_70], xmm9
      vmovaps [rsp+1C0h+var_80], xmm10
      vmovaps [rsp+1C0h+var_90], xmm11
      vmovaps [rsp+1C0h+var_A0], xmm12
      vmovaps [rsp+1C0h+var_B0], xmm13
      vmovaps [rsp+1C0h+var_C0], xmm14
      vmovaps [rsp+1C0h+var_D0], xmm15
    }
    do
    {
      v37 = v22->array[v27];
      v38 = 32;
      if ( v29 < 32 )
        v38 = v29;
      v39 = __lzcnt(v37);
      v363 = v38;
      if ( v39 < v38 )
      {
        v366 = v24 >> 5;
        v40 = 32 * v27;
        v361 = 0x80000000 >> v36;
        v364 = 32 * v27;
        do
        {
          v41 = v40 + v39;
          if ( v39 >= 0x20 )
          {
            LODWORD(v331) = 32;
            LODWORD(v330) = v39;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v330, v331) )
              __debugbreak();
          }
          v42 = 0x80000000 >> v39;
          if ( ((0x80000000 >> v39) & v37) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 274, ASSERT_TYPE_ASSERT, "(bits & boneBit)", (const char *)&queryFormat, "bits & boneBit") )
            __debugbreak();
          v37 &= ~v42;
          calcPartBits->array[v357] = v37;
          if ( (unsigned int)v20 >= v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 278, ASSERT_TYPE_ASSERT, "(modelParent < boneIndex)", (const char *)&queryFormat, "modelParent < boneIndex") )
            __debugbreak();
          if ( v41 >= 0x100 )
          {
            LODWORD(v331) = 256;
            LODWORD(v330) = v41;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v330, v331) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v41 & 0x1F)) & skel->partBits.anim.array[(unsigned __int64)v41 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 279, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( boneIndex ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( boneIndex )") )
            __debugbreak();
          if ( (unsigned int)v20 >= 0x100 )
          {
            LODWORD(v331) = 256;
            LODWORD(v330) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v330, v331) )
              __debugbreak();
          }
          if ( (v361 & skel->partBits.skel.array[v366]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 280, ASSERT_TYPE_ASSERT, "(skel->partBits.skel.testBit( modelParent ))", (const char *)&queryFormat, "skel->partBits.skel.testBit( modelParent )") )
            __debugbreak();
          if ( (unsigned int)v20 >= 0x100 )
          {
            LODWORD(v331) = 256;
            LODWORD(v330) = v20;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v330, v331) )
              __debugbreak();
          }
          if ( (v361 & skel->partBits.anim.array[v366]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 281, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( modelParent ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( modelParent )") )
            __debugbreak();
          _RBX = &skel->mat[v41];
          if ( (v42 & worldControlPartBits->array[v357]) == 0 )
          {
            if ( (v42 & controlPartBits->array[v357]) != 0 )
            {
              if ( (skel->partBits.skel.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 293, ASSERT_TYPE_ASSERT, "(skel->partBits.skel.testBit( 0 ))", (const char *)&queryFormat, "skel->partBits.skel.testBit( 0 )") )
                __debugbreak();
              if ( (skel->partBits.anim.array[0] & 0x80000000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 294, ASSERT_TYPE_ASSERT, "(skel->partBits.anim.testBit( 0 ))", (const char *)&queryFormat, "skel->partBits.anim.testBit( 0 )") )
                __debugbreak();
              __asm
              {
                vmovss  xmm9, dword ptr [r14]
                vmovss  xmm10, dword ptr [r14+0Ch]
                vmovss  xmm5, dword ptr [r14+4]
                vmovss  xmm11, dword ptr [r14+8]
              }
              _RAX = mat;
              __asm
              {
                vmovss  xmm12, dword ptr [rax+0Ch]
                vmovss  xmm7, dword ptr [rax]
                vmovss  xmm8, dword ptr [rax+4]
                vmovss  xmm6, dword ptr [rax+8]
                vmulss  xmm1, xmm9, xmm12
                vmulss  xmm0, xmm10, xmm7
                vsubss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm11, xmm8
                vsubss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm5, xmm6
                vaddss  xmm14, xmm3, xmm0
                vmulss  xmm0, xmm10, xmm8
                vmulss  xmm1, xmm5, xmm12
                vmulss  xmm2, xmm11, xmm7
                vaddss  xmm3, xmm2, xmm1
                vsubss  xmm4, xmm3, xmm0
                vmulss  xmm1, xmm9, xmm6
                vsubss  xmm15, xmm4, xmm1
                vmulss  xmm1, xmm9, xmm8
                vmulss  xmm0, xmm5, xmm7
                vmulss  xmm2, xmm11, xmm12
                vsubss  xmm3, xmm2, xmm0
                vaddss  xmm4, xmm3, xmm1
                vmulss  xmm2, xmm9, xmm7
                vmovss  xmm7, dword ptr [rbx+4]
                vmulss  xmm0, xmm10, xmm6
                vsubss  xmm13, xmm4, xmm0
                vmulss  xmm0, xmm5, xmm8
                vmovss  xmm8, dword ptr [rbx+8]
                vmovss  xmm5, dword ptr [rbx+0Ch]
                vmulss  xmm1, xmm10, xmm12
                vaddss  xmm3, xmm2, xmm1
                vaddss  xmm4, xmm3, xmm0
                vmulss  xmm1, xmm11, xmm6
                vmovss  xmm6, dword ptr [rbx]
                vaddss  xmm9, xmm4, xmm1
                vmulss  xmm1, xmm6, xmm9
                vmulss  xmm0, xmm5, xmm14
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm0, xmm8, xmm15
                vmulss  xmm1, xmm7, xmm13
                vaddss  xmm3, xmm2, xmm1
                vsubss  xmm4, xmm3, xmm0
                vmovss  [rsp+1C0h+var_16C], xmm4
                vmulss  xmm2, xmm5, xmm15
                vmulss  xmm1, xmm6, xmm13
                vsubss  xmm3, xmm2, xmm1
                vmulss  xmm1, xmm8, xmm14
                vmulss  xmm0, xmm7, xmm9
                vaddss  xmm4, xmm3, xmm0
                vaddss  xmm2, xmm4, xmm1
                vmovss  [rsp+1C0h+var_180], xmm2
                vmulss  xmm2, xmm5, xmm13
                vmulss  xmm0, xmm6, xmm15
                vaddss  xmm3, xmm2, xmm0
                vmulss  xmm0, xmm8, xmm9
                vmulss  xmm1, xmm7, xmm14
                vsubss  xmm4, xmm3, xmm1
                vmovss  [rsp+1C0h+var_178], xmm14
                vmulss  xmm1, xmm6, [rsp+1C0h+var_178]
                vaddss  xmm14, xmm4, xmm0
                vmovss  dword ptr [rbx+8], xmm14
                vmulss  xmm2, xmm5, xmm9
                vsubss  xmm3, xmm2, xmm1
                vmulss  xmm1, xmm8, xmm13
                vmovss  xmm13, [rsp+1C0h+var_180]
                vmovss  dword ptr [rbx+4], xmm13
                vmulss  xmm0, xmm7, xmm15
                vmovss  xmm15, [rsp+1C0h+var_16C]
                vmovss  dword ptr [rbx], xmm15
                vsubss  xmm4, xmm3, xmm0
                vsubss  xmm12, xmm4, xmm1
                vmovss  dword ptr [rbx+0Ch], xmm12
                vmovss  xmm8, dword ptr [rax+0Ch]
                vmovss  xmm9, dword ptr [rax]
                vmovss  xmm10, dword ptr [rax+4]
                vmovss  xmm11, dword ptr [rax+8]
                vmulss  xmm1, xmm12, xmm9
                vmulss  xmm0, xmm8, xmm15
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm10, xmm14
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm11, xmm13
                vsubss  xmm7, xmm3, xmm0
                vmulss  xmm2, xmm8, xmm13
                vmulss  xmm1, xmm9, xmm14
                vsubss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm12, xmm10
                vaddss  xmm4, xmm3, xmm0
                vmulss  xmm1, xmm11, xmm15
                vaddss  xmm6, xmm4, xmm1
                vmulss  xmm0, xmm8, xmm14
                vmulss  xmm2, xmm9, xmm13
                vaddss  xmm3, xmm2, xmm0
                vmulss  xmm1, xmm10, xmm15
                vsubss  xmm4, xmm3, xmm1
                vmulss  xmm1, xmm9, xmm15
                vmulss  xmm0, xmm12, xmm11
                vmulss  xmm2, xmm12, xmm8
                vsubss  xmm3, xmm2, xmm1
                vaddss  xmm5, xmm4, xmm0
                vmulss  xmm1, xmm11, xmm14
                vmulss  xmm0, xmm10, xmm13
              }
            }
            else
            {
              __asm
              {
                vmovss  xmm14, dword ptr [rbx+0Ch]
                vmovss  xmm15, dword ptr [r14]
                vmovss  xmm10, dword ptr [r14+0Ch]
                vmovss  xmm11, dword ptr [rbx]
                vmovss  xmm12, dword ptr [r14+4]
                vmovss  xmm13, dword ptr [rbx+8]
                vmovss  xmm9, dword ptr [r14+8]
                vmovss  xmm8, dword ptr [rbx+4]
                vmulss  xmm1, xmm10, xmm11
                vmulss  xmm0, xmm15, xmm14
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm12, xmm13
                vaddss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm9, xmm8
                vsubss  xmm7, xmm3, xmm0
                vmulss  xmm2, xmm10, xmm8
                vmulss  xmm1, xmm15, xmm13
                vsubss  xmm3, xmm2, xmm1
                vmulss  xmm0, xmm12, xmm14
                vaddss  xmm4, xmm3, xmm0
                vmulss  xmm1, xmm9, xmm11
                vaddss  xmm6, xmm4, xmm1
                vmulss  xmm0, xmm10, xmm13
                vmulss  xmm2, xmm15, xmm8
                vaddss  xmm3, xmm2, xmm0
                vmulss  xmm1, xmm12, xmm11
                vsubss  xmm4, xmm3, xmm1
                vmulss  xmm1, xmm15, xmm11
                vmulss  xmm0, xmm9, xmm14
                vmulss  xmm2, xmm10, xmm14
                vsubss  xmm3, xmm2, xmm1
                vaddss  xmm5, xmm4, xmm0
                vmulss  xmm1, xmm9, xmm13
                vmulss  xmm0, xmm12, xmm8
              }
            }
            __asm
            {
              vmovss  dword ptr [rbx+4], xmm6
              vmovss  xmm6, [rsp+1C0h+var_170]
              vmovss  dword ptr [rbx+8], xmm5
              vsubss  xmm4, xmm3, xmm0
              vsubss  xmm2, xmm4, xmm1
              vmovss  dword ptr [rbx], xmm7
              vmovss  dword ptr [rbx+0Ch], xmm2
            }
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx]
            vmovss  [rsp+1C0h+var_180], xmm0
          }
          if ( (v333 & 0x7F800000) == 2139095040 )
            goto LABEL_86;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+4]
            vmovss  [rsp+1C0h+var_180], xmm0
          }
          if ( (v334 & 0x7F800000) == 2139095040 )
            goto LABEL_86;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+8]
            vmovss  [rsp+1C0h+var_180], xmm0
          }
          if ( (v335 & 0x7F800000) == 2139095040 )
            goto LABEL_86;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+0Ch]
            vmovss  [rsp+1C0h+var_180], xmm0
          }
          if ( (v336 & 0x7F800000) == 2139095040 )
          {
LABEL_86:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 302, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->quat )[0] ) && !IS_NAN( ( childMat->quat )[1] ) && !IS_NAN( ( childMat->quat )[2] ) && !IS_NAN( ( childMat->quat )[3] )") )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+10h]
            vmovss  [rsp+1C0h+var_180], xmm0
          }
          if ( (v337 & 0x7F800000) == 2139095040 )
            goto LABEL_87;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+14h]
            vmovss  [rsp+1C0h+var_180], xmm0
          }
          if ( (v338 & 0x7F800000) == 2139095040 )
            goto LABEL_87;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+18h]
            vmovss  [rsp+1C0h+var_180], xmm0
          }
          if ( (v339 & 0x7F800000) == 2139095040 )
          {
LABEL_87:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 303, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )") )
              __debugbreak();
          }
          __asm
          {
            vmovups xmm2, xmmword ptr [rbx]
            vmovss  xmm13, cs:__real@3f800000
            vmulps  xmm0, xmm2, xmm2
            vhaddps xmm1, xmm0, xmm0
            vhaddps xmm0, xmm1, xmm1
            vsqrtps xmm1, xmm0
            vdivps  xmm2, xmm2, xmm1
            vmovups xmmword ptr [rbx], xmm2
          }
          _RBX->transWeight = 2.0;
          _ECX = 0;
          _EAX = v42 & model->noScalePartBits[v357];
          __asm
          {
            vmovd   xmm0, eax
            vmovd   xmm1, ecx
            vpcmpeqd xmm2, xmm0, xmm1
            vblendvps xmm0, xmm13, xmm6, xmm2
            vmovss  [rsp+1C0h+var_178], xmm0
          }
          if ( isCompositeModel )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+0C0h+var_130]
              vmovss  [rsp+1C0h+var_180], xmm0
            }
            if ( (v340 & 0x7F800000) == 2139095040 )
              goto LABEL_88;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+0C0h+var_130+4]
              vmovss  [rsp+1C0h+var_180], xmm0
            }
            if ( (v341 & 0x7F800000) == 2139095040 )
              goto LABEL_88;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+0C0h+var_130+8]
              vmovss  [rsp+1C0h+var_180], xmm0
            }
            if ( (v342 & 0x7F800000) == 2139095040 )
              goto LABEL_88;
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+0C0h+var_130+0Ch]
              vmovss  [rsp+1C0h+var_180], xmm0
            }
            if ( (v343 & 0x7F800000) == 2139095040 )
            {
LABEL_88:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 310, ASSERT_TYPE_SANITY, "( !IS_NAN( ( parentRotationQuat )[0] ) && !IS_NAN( ( parentRotationQuat )[1] ) && !IS_NAN( ( parentRotationQuat )[2] ) && !IS_NAN( ( parentRotationQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( parentRotationQuat )[0] ) && !IS_NAN( ( parentRotationQuat )[1] ) && !IS_NAN( ( parentRotationQuat )[2] ) && !IS_NAN( ( parentRotationQuat )[3] )") )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm2, [rsp+1C0h+var_178]
              vmovss  xmm0, dword ptr [rbp+0C0h+var_120]
              vaddss  xmm0, xmm0, dword ptr [rbx+10h]
              vmulss  xmm1, xmm0, xmm2
              vmovss  xmm0, dword ptr [rbp+0C0h+var_120+4]
              vaddss  xmm0, xmm0, dword ptr [rbx+14h]
              vmulss  xmm3, xmm0, xmm2
              vmovss  xmm0, [rbp+0C0h+var_118]
              vmovss  [rsp+1C0h+var_178], xmm1
              vaddss  xmm1, xmm0, dword ptr [rbx+18h]
              vmulss  xmm0, xmm1, xmm2
              vmovss  [rsp+1C0h+var_17C], xmm0
              vmovss  xmm0, dword ptr [r14]
              vmovss  [rsp+1C0h+var_180], xmm0
              vmovss  [rsp+1C0h+var_16C], xmm3
            }
            if ( (v344 & 0x7F800000) == 2139095040 )
              goto LABEL_89;
            __asm
            {
              vmovss  xmm0, dword ptr [r14+4]
              vmovss  [rsp+1C0h+var_180], xmm0
            }
            if ( (v345 & 0x7F800000) == 2139095040 )
              goto LABEL_89;
            __asm
            {
              vmovss  xmm0, dword ptr [r14+8]
              vmovss  [rsp+1C0h+var_180], xmm0
            }
            if ( (v346 & 0x7F800000) == 2139095040 )
              goto LABEL_89;
            __asm
            {
              vmovss  xmm0, dword ptr [r14+0Ch]
              vmovss  [rsp+1C0h+var_180], xmm0
            }
            if ( (v347 & 0x7F800000) == 2139095040 )
            {
LABEL_89:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [r14+1Ch]
              vmovss  [rsp+1C0h+var_180], xmm0
            }
            if ( (v348 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
              __debugbreak();
            __asm
            {
              vmovss  xmm5, dword ptr [r14+8]
              vmovss  xmm0, dword ptr [r14+1Ch]
              vmulss  xmm2, xmm0, dword ptr [r14]
              vmulss  xmm15, xmm2, dword ptr [r14]
              vmovss  xmm3, dword ptr [r14+4]
              vmulss  xmm4, xmm3, xmm0
              vmulss  xmm7, xmm3, xmm2
              vmulss  xmm6, xmm5, xmm0
              vmovss  xmm0, dword ptr [r14+0Ch]
              vmulss  xmm11, xmm0, xmm2
              vmulss  xmm1, xmm6, xmm0
              vmulss  xmm10, xmm5, xmm2
              vmulss  xmm12, xmm4, xmm3
              vmulss  xmm3, xmm0, xmm4
              vaddss  xmm14, xmm1, xmm7
              vmulss  xmm9, xmm4, xmm5
              vsubss  xmm4, xmm7, xmm1
              vmovss  xmm1, cs:__real@3f800000
              vmulss  xmm2, xmm6, xmm5
              vaddss  xmm0, xmm2, xmm12
              vsubss  xmm8, xmm13, xmm0
              vsubss  xmm0, xmm10, xmm3
              vmovss  [rsp+1C0h+var_180], xmm0
              vaddss  xmm0, xmm2, xmm15
              vsubss  xmm6, xmm13, xmm0
              vaddss  xmm3, xmm3, xmm10
              vaddss  xmm13, xmm9, xmm11
              vaddss  xmm0, xmm12, xmm15
              vmovss  xmm15, dword ptr [rbp+0C0h+var_130]
              vmovss  xmm12, dword ptr [rbp+0C0h+var_130+0Ch]
              vsubss  xmm7, xmm1, xmm0
              vsubss  xmm5, xmm9, xmm11
              vmovss  xmm9, [rsp+1C0h+var_16C]
              vmulss  xmm1, xmm4, xmm9
              vmovss  xmm4, [rsp+1C0h+var_178]
              vmulss  xmm0, xmm8, xmm4
              vmovss  xmm8, [rsp+1C0h+var_17C]
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm8
              vaddss  xmm2, xmm2, xmm1
              vaddss  xmm0, xmm2, dword ptr [r14+10h]
              vmovss  dword ptr [rbx+10h], xmm0
              vmulss  xmm1, xmm14, xmm4
              vmovss  xmm14, dword ptr [rbp+0C0h+var_130+4]
              vmulss  xmm3, xmm6, xmm9
              vaddss  xmm2, xmm3, xmm1
              vmulss  xmm3, xmm13, xmm9
              vmovss  xmm13, dword ptr [rbp+0C0h+var_130+8]
              vmulss  xmm0, xmm5, xmm8
              vaddss  xmm2, xmm2, xmm0
              vaddss  xmm1, xmm2, dword ptr [r14+14h]
              vmulss  xmm0, xmm4, [rsp+1C0h+var_180]
              vmovss  dword ptr [rbx+14h], xmm1
              vaddss  xmm2, xmm3, xmm0
              vmulss  xmm1, xmm7, xmm8
              vaddss  xmm2, xmm2, xmm1
              vaddss  xmm0, xmm2, dword ptr [r14+18h]
              vmovss  dword ptr [rbx+18h], xmm0
              vmovss  xmm8, dword ptr [rbx+0Ch]
              vmovss  xmm9, dword ptr [rbx]
              vmovss  xmm10, dword ptr [rbx+4]
              vmovss  xmm11, dword ptr [rbx+8]
              vmulss  xmm1, xmm9, xmm12
              vmulss  xmm0, xmm8, xmm15
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm10, xmm13
              vaddss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm11, xmm14
              vsubss  xmm7, xmm3, xmm0
              vmulss  xmm2, xmm8, xmm14
              vmulss  xmm1, xmm9, xmm13
              vsubss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm10, xmm12
              vaddss  xmm4, xmm3, xmm0
              vmulss  xmm1, xmm11, xmm15
              vaddss  xmm6, xmm4, xmm1
              vmulss  xmm0, xmm8, xmm13
              vmulss  xmm2, xmm9, xmm14
              vaddss  xmm3, xmm2, xmm0
              vmulss  xmm1, xmm10, xmm15
              vsubss  xmm4, xmm3, xmm1
              vmulss  xmm0, xmm11, xmm12
              vaddss  xmm5, xmm4, xmm0
              vmulss  xmm2, xmm8, xmm12
              vmulss  xmm1, xmm9, xmm15
              vsubss  xmm3, xmm2, xmm1
              vmulss  xmm0, xmm10, xmm14
              vsubss  xmm4, xmm3, xmm0
              vmulss  xmm1, xmm11, xmm13
              vsubss  xmm2, xmm4, xmm1
              vshufps xmm3, xmm2, xmm2, 0
              vmovss  xmm3, xmm3, xmm7
              vinsertps xmm3, xmm3, xmm6, 10h
              vmovss  xmm6, [rsp+1C0h+var_170]
              vinsertps xmm3, xmm3, xmm5, 20h ; ' '
              vmulps  xmm0, xmm3, xmm3
              vhaddps xmm1, xmm0, xmm0
              vhaddps xmm0, xmm1, xmm1
              vsqrtps xmm1, xmm0
              vdivps  xmm2, xmm3, xmm1
              vmovups xmmword ptr [rbx], xmm2
            }
            _RBX->transWeight = 2.0;
          }
          else
          {
            __asm
            {
              vmovss  xmm2, [rsp+1C0h+var_178]
              vmulss  xmm0, xmm2, dword ptr [rbx+10h]
              vmulss  xmm1, xmm2, dword ptr [rbx+14h]
              vmovss  dword ptr [rbp+0C0h+in], xmm0
              vmulss  xmm0, xmm2, dword ptr [rbx+18h]
              vmovss  dword ptr [rbp+0C0h+in+8], xmm0
              vmovss  dword ptr [rbp+0C0h+in+4], xmm1
            }
            LocalMatrixTransformVectorQuatTrans(&in, _R14, &_RBX->trans);
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+10h]
            vmovss  [rsp+1C0h+var_17C], xmm0
          }
          if ( (v351 & 0x7F800000) == 2139095040 )
            goto LABEL_90;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+14h]
            vmovss  [rsp+1C0h+var_17C], xmm0
          }
          if ( (v352 & 0x7F800000) == 2139095040 )
            goto LABEL_90;
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+18h]
            vmovss  [rsp+1C0h+var_17C], xmm0
          }
          if ( (v353 & 0x7F800000) == 2139095040 )
          {
LABEL_90:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 328, ASSERT_TYPE_SANITY, "( !IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( childMat->trans )[0] ) && !IS_NAN( ( childMat->trans )[1] ) && !IS_NAN( ( childMat->trans )[2] )") )
              __debugbreak();
          }
          v40 = v364;
          v39 = __lzcnt(v37);
        }
        while ( v39 < v363 );
        LODWORD(v27) = v357;
        v29 = v362;
        v24 = v20;
        v22 = calcPartBits;
        v30 = v365;
        v36 = v20 & 0x1F;
      }
      v27 = (unsigned int)(v27 + 1);
      v29 -= 32;
      v357 = v27;
      v362 = v29;
    }
    while ( (unsigned int)v27 <= v30 );
    __asm
    {
      vmovaps xmm15, [rsp+1C0h+var_D0]
      vmovaps xmm14, [rsp+1C0h+var_C0]
      vmovaps xmm13, [rsp+1C0h+var_B0]
      vmovaps xmm12, [rsp+1C0h+var_A0]
      vmovaps xmm11, [rsp+1C0h+var_90]
      vmovaps xmm10, [rsp+1C0h+var_80]
      vmovaps xmm9, [rsp+1C0h+var_70]
      vmovaps xmm8, [rsp+1C0h+var_60]
      vmovaps xmm7, [rsp+1C0h+var_50]
    }
  }
  __asm { vmovaps xmm6, [rsp+1C0h+var_40] }
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
  const DObj *v7; 
  int v8; 
  int v9; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v14; 
  int v15; 
  float *v16; 
  __int64 v17; 
  int v18; 
  int v31; 
  __int64 v44; 
  __int64 v45; 
  int v48; 
  __int64 v49; 

  _RSI = mat;
  v7 = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 1014, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 1015, ASSERT_TYPE_ASSERT, "(mat)", (const char *)&queryFormat, "mat") )
    __debugbreak();
  v8 = DObjNumBones(v7);
  v9 = 0;
  _RBX = &_RSI[v8];
  v48 = 0;
  v11 = 0;
  if ( v7->numModels )
  {
    v12 = 0i64;
    __asm
    {
      vmovaps [rsp+98h+var_48], xmm6
      vmovss  xmm6, cs:__real@38000100
    }
    v49 = 0i64;
    do
    {
      v14 = *(__int64 *)((char *)v7->models + v12);
      v15 = *(unsigned __int8 *)(v14 + 21);
      if ( *(_BYTE *)(v14 + 21) )
      {
        v16 = &_RSI->trans.v[2];
        v11 += v15;
        do
        {
          _RSI->quat.v[0] = 0.0;
          ++_RSI;
          *(_QWORD *)(v16 - 5) = 0i64;
          *(_QWORD *)(v16 - 3) = 1065353216i64;
          *(_QWORD *)(v16 - 1) = 0i64;
          v16 += 8;
          --v15;
        }
        while ( v15 );
        LOBYTE(v15) = *(_BYTE *)(v14 + 21);
      }
      v17 = *(_QWORD *)(v14 + 168);
      v18 = *(unsigned __int8 *)(v14 + 20) - (unsigned __int8)v15;
      if ( v18 )
      {
        _R14 = (_DWORD *)&_RSI->trans.v[2];
        do
        {
          if ( v11 >= 0x100 )
          {
            LODWORD(v45) = 256;
            LODWORD(v44) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v44, v45) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v11 & 0x1F)) & partBits->array[(unsigned __int64)v11 >> 5]) != 0 )
          {
            __asm
            {
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm6
              vmovss  dword ptr [rsi], xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm6
              vmovss  dword ptr [r14-14h], xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm6
              vmovss  dword ptr [r14-10h], xmm1
              vxorps  xmm0, xmm0, xmm0
              vcvtsi2ss xmm0, xmm0, eax
              vmulss  xmm1, xmm0, xmm6
              vmovss  dword ptr [r14-0Ch], xmm1
            }
            *((_QWORD *)_R14 - 1) = 0i64;
            *_R14 = 0;
          }
          ++_RSI;
          _R14 += 8;
          ++v11;
          v17 += 8i64;
          --v18;
        }
        while ( v18 );
        v9 = v48;
        v7 = obj;
        v12 = v49;
      }
      if ( (partBits->array[7] & 2) != 0 )
      {
        v31 = *(unsigned __int16 *)(v14 + 22);
        if ( *(_WORD *)(v14 + 22) )
        {
          do
          {
            if ( v17 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm6
                vmovss  dword ptr [rbx], xmm1
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm6
                vmovss  dword ptr [rbx+4], xmm1
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm6
                vmovss  dword ptr [rbx+8], xmm1
              }
              v17 += 8i64;
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmulss  xmm1, xmm0, xmm6
                vmovss  dword ptr [rbx+0Ch], xmm1
              }
            }
            else
            {
              *(_QWORD *)_RBX->quat.v = 0i64;
              _RBX->quat.v[2] = 0.0;
              _RBX->quat.v[3] = 1.0;
              _RBX->transWeight = 2.0;
            }
            *(_QWORD *)_RBX->trans.v = 0i64;
            _RBX->trans.v[2] = 0.0;
            ++_RBX;
            --v31;
          }
          while ( v31 );
        }
      }
      ++v9;
      v12 += 8i64;
      v48 = v9;
      v49 = v12;
    }
    while ( v9 < v7->numModels );
    __asm { vmovaps xmm6, [rsp+98h+var_48] }
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
  bool v6; 
  bool v7; 
  int v8; 
  unsigned int v9; 
  unsigned int v14; 
  const DObjDuplicateParts *DuplicateParts; 
  __int64 numModels; 
  unsigned int v23; 
  const DObjDuplicatePair *pairs; 
  bool v25; 
  __int64 v26; 
  const XModel *v27; 
  const vec4_t *v28; 
  bool v29; 
  int v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  const char *BoneName; 
  const char *v45; 
  int v46; 
  const char *v54; 
  const char *v60; 
  bool v61; 
  DObjPartBitsAligned *controlPartBits; 
  DObjPartBitsAligned *worldCtrlPartBits; 
  DObjPartBitsAligned *calcPartBits; 
  unsigned int modelParent; 
  unsigned int modelParenta; 
  unsigned int modelParentb; 
  unsigned int modelParentc; 
  unsigned int modelParentd; 
  unsigned int modelParente; 
  unsigned int modelParentf; 
  unsigned int modelParentg; 
  unsigned int modelParenth; 
  unsigned int modelParenti; 
  unsigned int modelParentj; 
  unsigned int modelParentk; 
  unsigned int modelParentl; 
  unsigned int modelParentm; 
  unsigned int modelParentn; 
  bool HasClientOnlyBones; 
  bool v83; 
  int modelFirstClientBoneIndex; 
  DObjDuplicatePair *pos; 
  __int64 v86; 
  __int64 v87; 
  XAnimIKCalcInfo ikCalcInfo; 
  const XModel **models; 
  const XModel **v90; 
  vec3_t *offsets; 
  vec4_t *quats; 
  vec3_t *modelAttachOffset; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > v94; 
  XAnimIKData ikData; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > v96; 
  DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > > v97; 
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
    v6 = XAnimIKGetDObjDataCache(obj, &ikData, &outDObjData);
  else
    v6 = XAnimIKExtractDObjData(obj, &outDObjData);
  ikData.calculatedWeights = 0;
  v7 = v6;
  Sys_ProfBeginNamedEvent(0xFF8000FF, "XAnimIKPreCalc");
  if ( v7 )
  {
    XAnimIKPreCalc(obj, &ikData, &outDObjData, partBits);
    ikCalcInfo.dObjData = &outDObjData;
    ikCalcInfo.ikData = &ikData;
  }
  __asm { vmovaps [rsp+300h+var_40], xmm6 }
  Sys_ProfEndNamedEvent();
  v8 = 0;
  if ( DObjHasProceduralBones(obj) && !XAnimPublicNodeOfTypeWillBeLodCulled(obj->tree, (const scr_string_t)scr_const.proc_node) )
  {
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v96, partBits);
    XAnimProceduralBonesAddPartBits(obj, partBits);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v94, partBits);
    v9 = 0;
    _RDI = 0i64;
    do
    {
      __asm
      {
        vmovdqu xmm6, xmmword ptr [rbp+rdi+200h+var_250.baseclass_0.array]
        vmovdqu xmm0, xmmword ptr [rbp+rdi+200h+var_210.baseclass_0.array]
        vpandn  xmm6, xmm0, xmm6
        vmovdqu xmmword ptr [rbp+rdi+200h+var_250.baseclass_0.array], xmm6
      }
      _RDI += 16i64;
      ++v9;
    }
    while ( v9 < 2 );
    p_skel = &obj->skel;
    if ( v7 )
    {
      v14 = 0;
      _RDI = &v94;
      while ( 1 )
      {
        __asm { vmovdqu xmm6, xmmword ptr [rdi] }
        _RAX = 2i64 * v14;
        __asm
        {
          vlddqu  xmm0, xmmword ptr [rbp+rax*8+200h+outDObjData.combinedPartBits.baseclass_0.baseclass_0.baseclass_0.array]
          vpand   xmm1, xmm0, xmm6
          vptest  xmm1, xmm1
        }
        if ( !_ZF )
          break;
        ++v14;
        _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > *)((char *)_RDI + 16);
        if ( v14 >= 2 )
          goto LABEL_34;
      }
      Sys_ProfBeginNamedEvent(0xFFF000FF, "XAnimIKPreCalc2");
      XAnimIKPreCalc(obj, &ikData, &outDObjData, partBits);
      Sys_ProfEndNamedEvent();
      XAnimProceduralBonesAddPartBits(obj, partBits);
    }
  }
LABEL_34:
  if ( !DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>>::bitComplement<bitarray_traits_simd128<bitarray_memory_traits_simd128u>,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v97, partBits, &p_skel->partBits.skel) )
  {
    Profile_Begin(((partBits->array[7] >> 1) & 1) + 415);
    DObjCalcAnimUseStack(obj, partBits, &ikCalcInfo);
    obj->skel.partBits.animCalculated = 1;
    DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>>::bitComplement<bitarray_traits_simd128<bitarray_memory_traits_simd128u>,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v97, partBits, &p_skel->partBits.skel);
    DuplicateParts = DObjGetDuplicateParts(obj);
    GetControlAndDuplicatePartBits(obj, partBits, (const DObjPartBitsAligned *)&v97, &DuplicateParts->partBits, (DObjPartBitsAligned *)&v94, (DObjPartBitsAligned *)&v96, &worldControlPartBits);
    numModels = obj->numModels;
    v23 = 0;
    modelFirstClientBoneIndex = DObjNumBones(obj);
    pairs = DuplicateParts->pairs;
    models = obj->models;
    pos = (DObjDuplicatePair *)pairs;
    v25 = HasClientOnlyBones;
    v90 = &models[numModels];
    offsets = obj->offsets;
    quats = obj->quats;
    v86 = numModels;
    if ( (v94.array[7] & 2) != 0 && !HasClientOnlyBones )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 791, ASSERT_TYPE_ASSERT, "(!calcPartBits.testClientBit() || hasClientBones)", (const char *)&queryFormat, "!calcPartBits.testClientBit() || hasClientBones") )
        __debugbreak();
      v25 = HasClientOnlyBones;
    }
    if ( (v97.array[7] & 2) == 0 && !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 792, ASSERT_TYPE_ASSERT, "(ignorePartBits.testClientBit() || hasClientBones)", (const char *)&queryFormat, "ignorePartBits.testClientBit() || hasClientBones") )
      __debugbreak();
    if ( numModels )
    {
      v26 = 0i64;
      do
      {
        v27 = models[v26];
        modelParent = *((unsigned __int8 *)v90 + v26);
        v28 = &quats[v8];
        v29 = (obj->flags & 0x20) != 0;
        modelAttachOffset = &offsets[v8];
        v83 = v29;
        pos = (DObjDuplicatePair *)CalcSkelDuplicateBones(v27, p_skel, v23, v29, modelAttachOffset, v28, pos, (DObjPartBitsAligned *)&v94);
        if ( modelParent == 255 )
          CalcSkelRootBonesNoParentOrDuplicate(v27, p_skel, v23, (DObjPartBitsAligned *)&v94);
        else
          CalcSkelRootBonesWithParent(v27, p_skel, v23, modelParent, v83, modelAttachOffset, v28, (DObjPartBitsAligned *)&v94, (const DObjPartBitsAligned *)&v96, &worldControlPartBits);
        CalcSkelNonRootBones(v27, p_skel, v23 + v27->numRootBones, (DObjPartBitsAligned *)&v94, (const DObjPartBitsAligned *)&v96, &worldControlPartBits);
        if ( HasClientOnlyBones )
        {
          pairs = CalcSkelClientBones(v27, p_skel, v23, modelFirstClientBoneIndex, (const DObjPartBitsAligned *)&v94, pos);
          pos = (DObjDuplicatePair *)pairs;
        }
        else
        {
          pairs = pos;
        }
        ++v8;
        v23 += v27->numBones;
        ++v26;
        modelFirstClientBoneIndex += v27->numClientBones;
      }
      while ( v26 < v86 );
      v8 = 0;
    }
    if ( pairs->child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 815, ASSERT_TYPE_ASSERT, "(!pos->child)", (const char *)&queryFormat, "!pos->child") )
      __debugbreak();
    v30 = DObjNumBones(obj);
    v31 = v30;
    v32 = v30;
    v87 = v30;
    if ( v30 > 0 )
    {
      v33 = v30;
      _RDI = 0i64;
      do
      {
        if ( (unsigned int)v8 >= 0x100 )
        {
          LODWORD(worldCtrlPartBits) = 256;
          LODWORD(controlPartBits) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", controlPartBits, worldCtrlPartBits) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v8 & 0x1F)) & p_skel->partBits.anim.array[(unsigned __int64)(unsigned int)v8 >> 5]) != 0 )
        {
          _RCX = p_skel->mat;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rdi]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParenta & 0x7F800000) == 2139095040 )
            goto LABEL_98;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rdi+4]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParentb & 0x7F800000) == 2139095040 )
            goto LABEL_98;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rdi+8]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParentc & 0x7F800000) == 2139095040 )
            goto LABEL_98;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rdi+0Ch]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParentd & 0x7F800000) == 2139095040 )
          {
LABEL_98:
            BoneName = DObjGetBoneName(obj, v8);
            LODWORD(calcPartBits) = v8;
            LODWORD(controlPartBits) = obj->entnum - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 823, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( skel->mat[boneId].quat )[0] ) && !IS_NAN( ( skel->mat[boneId].quat )[1] ) && !IS_NAN( ( skel->mat[boneId].quat )[2] ) && !IS_NAN( ( skel->mat[boneId].quat )[3] ) ) )", "entity:%d boneName:%s boneIndex:%d", controlPartBits, BoneName, calcPartBits) )
              __debugbreak();
          }
          _RCX = p_skel->mat;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rdi+10h]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParente & 0x7F800000) == 2139095040 )
            goto LABEL_99;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rdi+14h]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParentf & 0x7F800000) == 2139095040 )
            goto LABEL_99;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rdi+18h]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParentg & 0x7F800000) == 2139095040 )
          {
LABEL_99:
            v45 = DObjGetBoneName(obj, v8);
            LODWORD(calcPartBits) = v8;
            LODWORD(controlPartBits) = obj->entnum - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 824, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( skel->mat[boneId].trans )[0] ) && !IS_NAN( ( skel->mat[boneId].trans )[1] ) && !IS_NAN( ( skel->mat[boneId].trans )[2] ) ) )", "entity:%d boneName:%s boneIndex:%d", controlPartBits, v45, calcPartBits) )
              __debugbreak();
          }
        }
        ++v8;
        _RDI += 32i64;
        --v33;
      }
      while ( v33 );
      v32 = v87;
      v31 = v87;
    }
    if ( (p_skel->partBits.anim.array[7] & 2) != 0 )
    {
      v46 = DObjNumClientOnlyBones(obj) + v31;
      if ( v31 < v46 )
      {
        __asm { vmovss  xmm6, cs:__real@40000000 }
        _RBX = 32 * v32;
        do
        {
          _RCX = p_skel->mat;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rbx]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParenth & 0x7F800000) == 2139095040 )
            goto LABEL_100;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rbx+4]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParenti & 0x7F800000) == 2139095040 )
            goto LABEL_100;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rbx+8]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParentj & 0x7F800000) == 2139095040 )
            goto LABEL_100;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rbx+0Ch]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParentk & 0x7F800000) == 2139095040 )
          {
LABEL_100:
            v54 = DObjGetBoneName(obj, v31);
            LODWORD(calcPartBits) = v31;
            LODWORD(controlPartBits) = obj->entnum - 1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 833, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( skel->mat[boneId].quat )[0] ) && !IS_NAN( ( skel->mat[boneId].quat )[1] ) && !IS_NAN( ( skel->mat[boneId].quat )[2] ) && !IS_NAN( ( skel->mat[boneId].quat )[3] ) ) )", "entity:%d boneName:%s skelBoneIndex:%d", controlPartBits, v54, calcPartBits) )
              __debugbreak();
          }
          _RCX = p_skel->mat;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rbx+10h]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParentl & 0x7F800000) == 2139095040 )
            goto LABEL_101;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rbx+14h]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          if ( (modelParentm & 0x7F800000) == 2139095040 )
            goto LABEL_101;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rbx+18h]
            vmovss  [rsp+300h+modelParent], xmm0
          }
          _ZF = (modelParentn & 0x7F800000) == 2139095040;
          if ( (modelParentn & 0x7F800000) == 2139095040 )
          {
LABEL_101:
            v60 = DObjGetBoneName(obj, v31);
            LODWORD(calcPartBits) = v31;
            LODWORD(controlPartBits) = obj->entnum - 1;
            v61 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 834, ASSERT_TYPE_ASSERT, "( ( !IS_NAN( ( skel->mat[boneId].trans )[0] ) && !IS_NAN( ( skel->mat[boneId].trans )[1] ) && !IS_NAN( ( skel->mat[boneId].trans )[2] ) ) )", "entity:%d boneName:%s skelBoneIndex:%d", controlPartBits, v60, calcPartBits);
            _ZF = !v61;
            if ( v61 )
              __debugbreak();
          }
          _RAX = p_skel->mat;
          __asm { vucomiss xmm6, dword ptr [rax+rbx+1Ch] }
          if ( !_ZF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 835, ASSERT_TYPE_ASSERT, "(skel->mat[boneId].transWeight == 2.0f)", (const char *)&queryFormat, "skel->mat[boneId].transWeight == 2.0f") )
            __debugbreak();
          ++v31;
          _RBX += 32i64;
        }
        while ( v31 < v46 );
      }
    }
    Profile_EndInternal(NULL);
  }
  __asm { vmovaps xmm6, [rsp+300h+var_40] }
}

/*
==============
DObjCalcSkelNoAnim
==============
*/
void DObjCalcSkelNoAnim(const DObj *obj, DObjPartBits *partBits)
{
  const DObj *v4; 
  DObjPartBits *v5; 
  unsigned int v6; 
  unsigned int v8; 
  unsigned int v12; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *p_calcPartBits; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int ClientBoneOffset; 
  const XModel **models; 
  const XModel *v25; 
  int numRootBones; 
  _DWORD *v27; 
  int v29; 
  _QWORD *v30; 
  int numClientBones; 
  _QWORD *v37; 
  const DObjDuplicateParts *DuplicateParts; 
  __int64 numModels; 
  unsigned int v44; 
  const XModel **v45; 
  int v46; 
  vec3_t *offsets; 
  const DObjDuplicatePair *pairs; 
  vec4_t *quats; 
  int v50; 
  const XModel **v51; 
  __int64 v52; 
  const XModel *v53; 
  bool v54; 
  const vec4_t *v55; 
  DSkel *p_skel; 
  bool fmt; 
  DObjPartBitsAligned *controlPartBits; 
  DObjPartBitsAligned *worldCtrlPartBits; 
  DObjPartBitsAligned *worldCtrlPartBitsa; 
  bool HasClientOnlyBones; 
  signed int modelParent; 
  unsigned int modelParenta; 
  const XModel **v64; 
  const XModel **v65; 
  const XModel *v67; 
  const XModel **v68; 
  _DWORD *v69; 
  __int64 v70; 
  vec3_t *modelAttachOffseta; 
  vec3_t *v73; 
  vec4_t *v74; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > calcPartBits; 
  DObjPartBitsAligned worldControlPartBits; 
  DObjPartBitsAligned v77; 
  DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a> > > v78; 

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
  if ( !DObjPartBitsT<bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>>::bitComplement<bitarray_traits_simd128<bitarray_memory_traits_simd128u>,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v78, v5, &v4->skel.partBits.skel) )
  {
    v6 = 0;
    _RDI = &calcPartBits;
    v8 = 0;
    __asm { vmovaps [rsp+178h+var_48], xmm6 }
    _RBP = (char *)v5 - (char *)&calcPartBits;
    __asm { vmovaps [rsp+178h+var_58], xmm7 }
    do
    {
      __asm
      {
        vlddqu  xmm6, xmmword ptr [rdi+rbp]
        vmovdqu xmmword ptr [rdi], xmm6
      }
      _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
      ++v8;
    }
    while ( v8 < 2 );
    __asm { vmovdqu xmm7, cs:__xmm@ffffffffffffffffffffffffffffffff }
    v12 = 0;
    _RDI = &calcPartBits;
    do
    {
      __asm
      {
        vlddqu  xmm0, xmmword ptr [rdi]
        vpxor   xmm6, xmm0, xmm7
        vmovdqu xmmword ptr [rdi], xmm6
      }
      _RDI = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)_RDI + 16);
      ++v12;
    }
    while ( v12 < 2 );
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&calcPartBits, &v4->skel.partBits.anim);
    __asm { vmovaps xmm7, [rsp+178h+var_58] }
    p_calcPartBits = &calcPartBits;
    __asm { vmovaps xmm6, [rsp+178h+var_48] }
    v19 = 0;
    while ( p_calcPartBits->array[0] == -1 )
    {
      ++v19;
      p_calcPartBits = (bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)p_calcPartBits + 4);
      if ( v19 >= 8 )
        goto LABEL_49;
    }
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&v4->skel.partBits.anim, v5);
    v20 = 0;
    ClientBoneOffset = DObjGetClientBoneOffset(v4);
    models = v4->models;
    _R14 = (_DWORD *)v4->skel.mat->quat.v;
    _R13 = &_R14[8 * ClientBoneOffset];
    v64 = models;
    v69 = _R13;
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
        v25 = *models;
        v67 = *models;
        numRootBones = (*models)->numRootBones;
        if ( (*models)->numRootBones )
        {
          v27 = _R14 + 6;
          do
          {
            if ( v20 >= 0x100 )
            {
              LODWORD(worldCtrlPartBits) = 256;
              LODWORD(controlPartBits) = v20;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", controlPartBits, worldCtrlPartBits) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v20 & 0x1F)) & calcPartBits.array[(unsigned __int64)v20 >> 5]) == 0 )
            {
              *_R14 = 0;
              *(_QWORD *)(v27 - 5) = 0i64;
              *(_QWORD *)(v27 - 3) = 1065353216i64;
              *(_QWORD *)(v27 - 1) = 0i64;
              v27[1] = 0;
            }
            _R14 += 8;
            v27 += 8;
            ++v20;
            --numRootBones;
          }
          while ( numRootBones );
          v25 = v67;
          LOBYTE(numRootBones) = v67->numRootBones;
        }
        _RBP = v25->quats;
        v29 = v25->numBones - (unsigned __int8)numRootBones;
        if ( v29 )
        {
          v30 = _R14 + 6;
          do
          {
            if ( v20 >= 0x100 )
            {
              LODWORD(worldCtrlPartBits) = 256;
              LODWORD(controlPartBits) = v20;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", controlPartBits, worldCtrlPartBits) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v20 & 0x1F)) & calcPartBits.array[(unsigned __int64)v20 >> 5]) == 0 )
            {
              __asm
              {
                vlddqu  xmm0, xmmword ptr [rbp+0]
                vpmovsxwd xmm1, xmm0
                vcvtdq2ps xmm3, xmm1
                vmulps  xmm0, xmm3, cs:__xmm@38000100380001003800010038000100
                vmovups xmmword ptr [r14], xmm0
              }
              *(v30 - 1) = 0i64;
              *v30 = 0i64;
            }
            _R14 += 8;
            v30 += 4;
            ++v20;
            _RBP += 4;
            --v29;
          }
          while ( v29 );
          _R13 = v69;
        }
        if ( (calcPartBits.array[7] & 2) == 0 )
        {
          numClientBones = v67->numClientBones;
          if ( v67->numClientBones )
          {
            __asm { vmovups xmm4, cs:__xmm@38000100380001003800010038000100 }
            v37 = _R13 + 6;
            do
            {
              __asm
              {
                vlddqu  xmm0, xmmword ptr [rbp+0]
                vpmovsxwd xmm1, xmm0
                vcvtdq2ps xmm2, xmm1
                vmulps  xmm3, xmm2, xmm4
                vmovups xmmword ptr [r13+0], xmm3
              }
              _R13 += 8;
              *(v37 - 1) = 0i64;
              *v37 = 0i64;
              v37 += 4;
              _RBP += 4;
              --numClientBones;
            }
            while ( numClientBones );
            v69 = _R13;
          }
        }
        v4 = obj;
        models = v64 + 1;
        ++modelParent;
        ++v64;
      }
      while ( modelParent < obj->numModels );
      v5 = partBits;
    }
LABEL_49:
    DuplicateParts = DObjGetDuplicateParts(v4);
    GetControlAndDuplicatePartBits(v4, v5, (const DObjPartBitsAligned *)&v78, &DuplicateParts->partBits, (DObjPartBitsAligned *)&calcPartBits, &v77, &worldControlPartBits);
    numModels = v4->numModels;
    v44 = DObjGetClientBoneOffset(v4);
    v45 = v4->models;
    v46 = v44;
    offsets = v4->offsets;
    pairs = DuplicateParts->pairs;
    quats = v4->quats;
    v50 = 0;
    v68 = v45;
    v70 = numModels;
    v51 = &v45[numModels];
    v65 = v51;
    v73 = offsets;
    v74 = quats;
    if ( (_BYTE)numModels )
    {
      v52 = 0i64;
      do
      {
        v53 = v45[v52];
        modelParenta = *((unsigned __int8 *)v51 + v52);
        v54 = (v4->flags & 0x20) != 0;
        v55 = &quats[v50];
        modelAttachOffseta = &offsets[v50];
        pairs = CalcSkelDuplicateBones(v53, &obj->skel, v6, v54, modelAttachOffseta, v55, pairs, (DObjPartBitsAligned *)&calcPartBits);
        if ( modelParenta == 255 )
        {
          v4 = obj;
          p_skel = &obj->skel;
          CalcSkelRootBonesNoParentOrDuplicate(v53, &obj->skel, v6, (DObjPartBitsAligned *)&calcPartBits);
        }
        else
        {
          worldCtrlPartBitsa = (DObjPartBitsAligned *)v55;
          fmt = v54;
          v4 = obj;
          p_skel = &obj->skel;
          CalcSkelRootBonesWithParent(v53, &obj->skel, v6, modelParenta, fmt, modelAttachOffseta, (const vec4_t *const)worldCtrlPartBitsa, (DObjPartBitsAligned *)&calcPartBits, &v77, &worldControlPartBits);
        }
        CalcSkelNonRootBones(v53, p_skel, v6 + v53->numRootBones, (DObjPartBitsAligned *)&calcPartBits, &v77, &worldControlPartBits);
        if ( HasClientOnlyBones )
          pairs = CalcSkelClientBones(v53, p_skel, v6, v46, (const DObjPartBitsAligned *)&calcPartBits, pairs);
        ++v50;
        v45 = v68;
        v6 += v53->numBones;
        ++v52;
        v51 = v65;
        v46 += v53->numClientBones;
        offsets = v73;
        quats = v74;
      }
      while ( v52 < v70 );
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
  unsigned int v16; 
  unsigned int v19; 
  unsigned int i; 
  DObjPartBitsAligned *v27; 
  __int64 v28; 
  int v29; 
  unsigned int v30; 
  __int64 v31; 
  __int64 v34; 

  p_skel = &obj->skel;
  __asm
  {
    vmovaps [rsp+88h+var_38], xmm6
    vmovaps [rsp+88h+var_48], xmm7
  }
  if ( obj == (const DObj *)-56i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 71, ASSERT_TYPE_ASSERT, "(skel)", (const char *)&queryFormat, "skel") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::orAllBits<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&p_skel->partBits.skel, partBits);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(controlPartBits, &p_skel->partBits.control);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128a>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(worldCtrlPartBits, &p_skel->partBits.worldCtrl);
  _RBP = calcPartBits;
  _RSI = (char *)ignorePartBits - (char *)calcPartBits;
  v16 = 0;
  _RDI = calcPartBits;
  do
  {
    __asm
    {
      vmovdqu xmm6, xmmword ptr [rsi+rdi]
      vmovdqu xmmword ptr [rdi], xmm6
    }
    _RDI = (DObjPartBitsAligned *)((char *)_RDI + 16);
    ++v16;
  }
  while ( v16 < 2 );
  v19 = 0;
  _RDI = calcPartBits;
  _RSI = savedDuplicatePartBits;
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rsi]
      vpor    xmm6, xmm6, xmmword ptr [rdi]
      vmovdqu xmmword ptr [rdi], xmm6
    }
    _RDI = (DObjPartBitsAligned *)((char *)_RDI + 16);
    ++v19;
    _RSI = (const DObjPartBits *)((char *)_RSI + 16);
  }
  while ( v19 < 2 );
  __asm { vmovdqu xmm7, cs:__xmm@ffffffffffffffffffffffffffffffff }
  for ( i = 0; i < 2; ++i )
  {
    __asm
    {
      vpxor   xmm6, xmm7, xmmword ptr [rbp+0]
      vmovdqu xmmword ptr [rbp+0], xmm6
    }
    _RBP = (DObjPartBitsAligned *)((char *)_RBP + 16);
  }
  v27 = controlPartBits;
  v28 = 8i64;
  do
  {
    if ( (*(unsigned int *)((_BYTE *)v27->array + (char *)savedDuplicatePartBits - (char *)controlPartBits) & v27->array[0]) != 0 )
    {
      DObjDumpInfo(obj);
      v29 = 0;
      if ( obj->numBones )
      {
        do
        {
          v30 = 0x80000000 >> (v29 & 0x1F);
          v31 = (__int64)v29 >> 5;
          if ( (v30 & controlPartBits->array[v31]) != 0 && (v30 & savedDuplicatePartBits->array[v31]) != 0 )
            break;
          ++v29;
        }
        while ( v29 < obj->numBones );
      }
      LODWORD(v34) = v29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\dobj_skel.cpp", 95, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "control/meld conflict on bone %d - see the console log for details", v34) )
        __debugbreak();
    }
    v27 = (DObjPartBitsAligned *)((char *)v27 + 4);
    --v28;
  }
  while ( v28 );
  __asm
  {
    vmovaps xmm6, [rsp+88h+var_38]
    vmovaps xmm7, [rsp+88h+var_48]
  }
}

/*
==============
LocalQuatMultiplyReverseEquals
==============
*/
void LocalQuatMultiplyReverseEquals(const vec4_t *in, vec4_t *inout)
{
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rcx+4]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rdx+8]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rdx+4]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rcx+0Ch]
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, dword ptr [rdx]
    vmovaps [rsp+0A8h+var_88], xmm13
    vmovss  xmm13, dword ptr [rdx+0Ch]
    vmovaps [rsp+0A8h+var_98], xmm14
    vmovss  xmm14, dword ptr [rcx]
    vmovaps [rsp+0A8h+var_A8], xmm15
    vmovss  xmm15, dword ptr [rcx+8]
    vmulss  xmm0, xmm14, xmm13
    vmulss  xmm1, xmm12, xmm11
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm10, xmm15
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm9, xmm8
    vsubss  xmm7, xmm3, xmm0
    vmulss  xmm2, xmm8, xmm13
    vmulss  xmm1, xmm15, xmm12
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm10, xmm11
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm9, xmm14
    vaddss  xmm6, xmm4, xmm1
    vmulss  xmm0, xmm15, xmm13
    vmulss  xmm2, xmm8, xmm12
    vaddss  xmm3, xmm2, xmm0
    vmulss  xmm1, xmm10, xmm14
    vsubss  xmm4, xmm3, xmm1
    vmulss  xmm0, xmm9, xmm11
    vmulss  xmm1, xmm12, xmm14
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm14, [rsp+0A8h+var_98]
    vmulss  xmm2, xmm11, xmm13
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm13, [rsp+0A8h+var_88]
    vaddss  xmm5, xmm4, xmm0
    vsubss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm8, xmm10
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmulss  xmm1, xmm9, xmm15
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm15, [rsp+0A8h+var_A8]
    vsubss  xmm4, xmm3, xmm0
    vsubss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdx], xmm7
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovss  dword ptr [rdx+4], xmm6
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovss  dword ptr [rdx+0Ch], xmm2
    vmovss  dword ptr [rdx+8], xmm5
  }
}


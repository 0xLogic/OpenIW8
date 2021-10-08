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
  refdef_t *v12; 
  unsigned int v14; 
  unsigned int v15; 

  _RBX = (char *)nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 79, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 80, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 81, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  v12 = g_activeRefDef;
  if ( g_activeRefDef )
  {
    *((_DWORD *)_RBX + 14) = LODWORD(g_activeRefDef->viewOffset.v[0]);
    *((_DWORD *)_RBX + 15) = LODWORD(v12->viewOffset.v[1]);
    *((_DWORD *)_RBX + 16) = LODWORD(v12->viewOffset.v[2]);
    AxisToAngles(&g_activeRefDef->view.axis, (vec3_t *)(_RBX + 68));
    _RAX = g_activeRefDef;
    __asm { vmovss  xmm0, dword ptr [rax+10h]; X }
    *(float *)&_XMM0 = atanf_0(*(float *)&_XMM0);
    __asm
    {
      vmulss  xmm1, xmm0, cs:__real@42e52ee0
      vmovss  dword ptr [rbx+90h], xmm1
    }
    *((_DWORD *)_RBX + 42) += g_activeRefDef->frameTime;
  }
  v14 = *((_DWORD *)_RBX + 38);
  v15 = *((_DWORD *)_RBX + 20);
  __asm
  {
    vmovss  xmm5, cs:__real@3f800000
    vxorps  xmm4, xmm4, xmm4
  }
  if ( v14 != v15 )
  {
    __asm
    {
      vmovss  xmm1, dword ptr [rbx+54h]
      vcomiss xmm1, xmm4
    }
    if ( v14 > v15 && v14 )
    {
      if ( v15 == 1 || v15 == 4 )
      {
        __asm
        {
          vsubss  xmm0, xmm5, dword ptr [rbx+0A0h]
          vdivss  xmm2, xmm0, xmm1
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+0A0h]
          vdivss  xmm1, xmm0, xmm1
          vxorps  xmm2, xmm1, cs:__xmm@80000000800000008000000080000000
        }
      }
    }
    else
    {
      if ( v15 == 1 || v15 == 4 )
        __asm { vmovaps xmm0, xmm5 }
      else
        __asm { vxorps  xmm0, xmm0, xmm0 }
      __asm
      {
        vmovss  dword ptr [rbx+0A0h], xmm0
        vxorps  xmm2, xmm2, xmm2
      }
    }
    __asm { vmovss  dword ptr [rbx+0A4h], xmm2 }
    *((_DWORD *)_RBX + 37) = v14;
    *((_DWORD *)_RBX + 38) = v15;
    *((_DWORD *)_RBX + 24) = *((_DWORD *)_RBX + 42);
    if ( v15 == 4 )
      *((_QWORD *)_RBX + 17) = 0i64;
  }
  __asm
  {
    vmovss  xmm0, [rsp+38h+dtime]
    vmulss  xmm3, xmm0, dword ptr [rbx+0A4h]
    vaddss  xmm0, xmm3, dword ptr [rbx+0A0h]; val
    vmovaps xmm2, xmm5; max
    vxorps  xmm1, xmm1, xmm1; min
    vmovss  dword ptr [rbx+0A0h], xmm0
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rbx+0A0h], xmm0 }
}

/*
==============
XAnimNode_IKLadder_Calc
==============
*/
void XAnimNode_IKLadder_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  XAnimIKCalcInfo *ikCalcInfo; 
  bool v22; 
  int v23; 
  __int64 v24; 
  unsigned int v25; 
  XAnimIKDObjData *dObjData; 
  _DWORD *v27; 
  unsigned __int8 targetBoneIndex; 
  unsigned int i; 
  XAnimTree *tree; 
  unsigned __int16 children; 
  const XAnimInfo *v55; 
  int v56; 
  int v110; 
  unsigned __int8 v134; 
  char v174; 
  char v175; 
  unsigned __int8 *v217; 
  unsigned __int8 v218; 
  const float4 *fmt; 
  const float4 *fmta; 
  const float4 *fmtb; 
  XAnimCalcBuffer *v309; 
  const float4 *v310; 
  XAnimCalcBuffer *v311; 
  float v312; 
  float v313; 
  float v314; 
  char v315; 
  int modelIndex[2]; 
  XAnimInfo *info; 
  __int128 v322; 
  vec3_t angles; 
  vec3_t outAnimWeights; 
  __int128 v325; 
  float4 v326; 
  tmat33_t<vec3_t> mat; 
  tmat33_t<vec3_t> axis; 
  float4 outModelQuat; 
  float4 v330; 
  float4 v331; 
  float4 outModelTranslation; 
  vec4_t quat; 
  float4 v334; 
  vec4_t out; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  void *retaddr; 

  _R11 = &retaddr;
  ikCalcInfo = animCalcInfo->ikCalcInfo;
  info = (XAnimInfo *)animInfo;
  *(_QWORD *)outAnimWeights.v = nodeData;
  if ( ikCalcInfo->dObjData && ikCalcInfo->ikData )
  {
    v22 = *((_DWORD *)nodeData + 22) < 2;
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
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
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 346, ASSERT_TYPE_ASSERT, "(node->m_ladderHand < XANIM_IK_NUM_HAND_TYPES)", (const char *)&queryFormat, "node->m_ladderHand < XANIM_IK_NUM_HAND_TYPES") )
      __debugbreak();
    v23 = *((_DWORD *)nodeData + 22);
    v24 = v23 != 1;
    *(_QWORD *)&v325 = v23 != 1;
    v25 = 0;
    dObjData = animCalcInfo->ikCalcInfo->dObjData;
    v27 = (char *)nodeData + 100;
    while ( !*v27 )
    {
      ++v25;
      ++v27;
      if ( v25 >= 8 )
      {
        bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 100, dObjData->boneInfo[v24].targetBoneIndex);
        bitarray_base<bitarray<256>>::setBit((bitarray_base<bitarray<256> > *)nodeData + 100, dObjData->boneInfo[v24].thirdBoneIndex);
        DObjCompleteHierarchyBits(obj, (DObjPartBits *)((char *)nodeData + 100));
        break;
      }
    }
    if ( *((_BYTE *)nodeData + 92) && v23 != 1 && *((_BYTE *)nodeData + 157) == 0xFE )
      DObjGetBoneIndexInternal_30(obj, scr_const.tag_weapon, (unsigned __int8 *)nodeData + 157, modelIndex);
    targetBoneIndex = dObjData->boneInfo[v24].targetBoneIndex;
    if ( bitarray_base<bitarray<256>>::testBit(&animCalcInfo->ignorePartBits, targetBoneIndex) || (v315 = 0, targetBoneIndex > 0xFDu) )
      v315 = 1;
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
        vmovdqu xmmword ptr [rsi], xmm6
      }
      _RSI = (DObjPartBits *)((char *)_RSI + 16);
    }
    __asm
    {
      vmovss  xmm10, [rbp+190h+weightScale]
      vmovaps xmm3, xmm10; weightScale
    }
    XAnimCalcDefaultBlendNode(animCalcInfo, obj, info, *(float *)&_XMM3, bNormQuat, destBuffer, LINEAR);
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(animCalcInfo->partBits, &otherBitSet);
    _RBX = *(_QWORD *)outAnimWeights.v;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm4, xmm4, xmm4
      vmovss  dword ptr [rsp+290h+var_250+4], xmm4
      vmovss  dword ptr [rsp+290h+buffer], xmm0
      vmovups xmmword ptr [rbp+190h+outModelTranslation.v], xmm0
      vmovups xmmword ptr [rbp+190h+outModelQuat.v], xmm0
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm14, xmm14, xmm14
      vxorps  xmm12, xmm12, xmm12
      vxorps  xmm13, xmm13, xmm13
      vxorps  xmm15, xmm15, xmm15
    }
    if ( !v315 )
    {
      __asm
      {
        vmovss  dword ptr [rbp+190h+angles], xmm8
        vmovss  dword ptr [rbp+190h+angles+4], xmm8
        vmovss  dword ptr [rbp+190h+angles+8], xmm8
      }
      XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, targetBoneIndex, &outModelQuat, &outModelTranslation);
      __asm { vmovups xmm0, xmmword ptr [rbp+190h+outModelTranslation.v] }
      tree = obj->tree;
      *(_QWORD *)modelIndex = 0i64;
      *(_QWORD *)outAnimWeights.v = 0i64;
      __asm
      {
        vmovups xmm3, xmmword ptr [rbp+190h+outModelQuat.v]
        vaddss  xmm14, xmm0, dword ptr [rbx+38h]
        vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
        vaddss  xmm9, xmm2, dword ptr [rbx+40h]
        vshufps xmm1, xmm0, xmm0, 55h ; 'U'
        vaddss  xmm15, xmm1, dword ptr [rbx+3Ch]
        vmovss  dword ptr [rsp+290h+buffer], xmm9
        vmovups xmmword ptr [rbp+190h+var_1E0.v], xmm3
      }
      if ( tree && (children = tree->children) != 0 )
      {
        v55 = GetAnimInfo(children);
        BG_CalcFingerPoseWeights(v55, (float *)modelIndex, outAnimWeights.v);
        v56 = v325;
        _RAX = (unsigned int)v325;
        __asm { vmovss  xmm7, [rsp+rax*4+290h+modelIndex] }
      }
      else
      {
        v56 = v325;
        __asm { vxorps  xmm7, xmm7, xmm7 }
      }
      AnglesToAxis((const vec3_t *)(_RBX + 36), &axis);
      __asm
      {
        vsubss  xmm0, xmm14, dword ptr [rbx+0Ch]
        vmovss  xmm11, dword ptr [rbp+190h+axis+0Ch]
        vsubss  xmm1, xmm15, dword ptr [rbx+10h]
        vmovss  xmm12, dword ptr [rbp+190h+axis+10h]
        vmovss  xmm13, dword ptr [rbp+190h+axis+14h]
        vmulss  xmm2, xmm0, xmm11
        vmulss  xmm0, xmm1, xmm12
        vmovss  xmm1, dword ptr [rbx+4]
        vaddss  xmm3, xmm2, xmm0
        vsubss  xmm2, xmm9, dword ptr [rbx+14h]
        vmulss  xmm0, xmm2, xmm13
        vsubss  xmm2, xmm1, dword ptr [rbx+10h]
        vaddss  xmm9, xmm3, xmm0
        vmovss  xmm0, dword ptr [rbx]
        vsubss  xmm1, xmm0, dword ptr [rbx+0Ch]
        vmovss  xmm0, dword ptr [rbx+8]
        vmulss  xmm3, xmm2, xmm12
        vmulss  xmm2, xmm1, xmm11
        vsubss  xmm1, xmm0, dword ptr [rbx+14h]
        vaddss  xmm4, xmm3, xmm2
        vmulss  xmm2, xmm1, xmm13
        vaddss  xmm3, xmm4, xmm2
      }
      if ( *(_DWORD *)(_RBX + 88) == 1 )
      {
        __asm
        {
          vsubss  xmm0, xmm9, cs:__real@c0f3fe5d
          vmovss  xmm1, cs:__real@bf000000
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm9, cs:__real@40f3fe5d
          vmovss  xmm1, cs:__real@3f000000
        }
      }
      __asm
      {
        vmulss  xmm4, xmm1, dword ptr [rbx+30h]
        vsubss  xmm2, xmm0, xmm3
        vmovss  xmm3, cs:__real@3f800000
      }
      if ( *(_BYTE *)(_RBX + 92) )
      {
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+0A0h]
          vaddss  xmm0, xmm4, xmm2
          vmulss  xmm2, xmm0, xmm1
          vsubss  xmm1, xmm3, xmm1
          vmulss  xmm0, xmm1, xmm9
          vaddss  xmm4, xmm2, xmm0
        }
      }
      else
      {
        __asm
        {
          vsubss  xmm0, xmm3, xmm7
          vmulss  xmm1, xmm0, xmm2
          vaddss  xmm4, xmm1, xmm4
        }
      }
      __asm
      {
        vsubss  xmm1, xmm4, xmm9
        vmulss  xmm0, xmm11, xmm1
        vaddss  xmm14, xmm0, xmm14
        vmulss  xmm0, xmm12, xmm1
        vaddss  xmm12, xmm0, xmm15
        vmulss  xmm0, xmm13, xmm1
        vaddss  xmm13, xmm0, dword ptr [rsp+290h+buffer]
        vmovups xmm0, xmmword ptr [rbp+190h+var_1E0.v]
        vmovdqa xmmword ptr [rbp+190h+var_1E0.v], xmm0
        vmovss  [rbp+190h+outAnimWeights], xmm14
        vmovss  [rbp+190h+outAnimWeights+4], xmm12
        vmovss  [rbp+190h+var_1F8], xmm13
      }
      XAnimNode_IKLadder_GetBestRungTarget(&outAnimWeights, (const vec4_t *)&v326, &angles, v56, (XAnimNode_IKLadder *)_RBX);
      __asm
      {
        vmovss  xmm9, dword ptr [rbp+190h+angles+8]
        vmovss  xmm11, dword ptr [rbp+190h+angles+4]
        vmovaps xmm2, xmm14
        vmovaps xmm3, xmm12
        vmovaps xmm4, xmm12
        vmovaps xmm5, xmm13
        vmovaps xmm6, xmm13
      }
      if ( *(_DWORD *)(_RBX + 148) == 4 && *(_DWORD *)(_RBX + 152) == 1 && (v110 = *(_DWORD *)(_RBX + 168) - *(_DWORD *)(_RBX + 96), v110 <= LADDER_SLIDE_TO_CLIMB_IK_END) )
      {
        __asm { vmovss  xmm5, dword ptr [rbp+190h+angles] }
        if ( v110 < LADDER_SLIDE_TO_CLIMB_IK_BEGIN )
        {
          __asm
          {
            vmovaps xmm15, xmm14
            vmovaps xmm4, xmm12
            vmovaps xmm0, xmm13
          }
        }
        else
        {
          _EAX = v110 - LADDER_SLIDE_TO_CLIMB_IK_BEGIN;
          _ECX = LADDER_SLIDE_TO_CLIMB_IK_END - LADDER_SLIDE_TO_CLIMB_IK_BEGIN;
          __asm
          {
            vmovd   xmm0, ecx
            vcvtdq2ps xmm0, xmm0
            vmovd   xmm1, eax
            vcvtdq2ps xmm1, xmm1
            vdivss  xmm3, xmm1, xmm0
            vsubss  xmm1, xmm5, xmm14
            vmulss  xmm2, xmm1, xmm3
            vsubss  xmm0, xmm11, xmm12
            vmulss  xmm1, xmm0, xmm3
            vaddss  xmm15, xmm2, xmm14
            vsubss  xmm2, xmm9, xmm13
            vmulss  xmm0, xmm2, xmm3
            vaddss  xmm0, xmm0, xmm13
            vaddss  xmm4, xmm1, xmm12
          }
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+190h+angles]
          vsubss  xmm0, xmm0, xmm2
          vmulss  xmm1, xmm0, xmm7
          vaddss  xmm15, xmm1, xmm2
          vsubss  xmm2, xmm11, xmm3
          vmulss  xmm0, xmm2, xmm7
          vsubss  xmm1, xmm9, xmm5
          vmovss  xmm5, dword ptr [rbp+190h+angles]
          vmulss  xmm2, xmm1, xmm7
          vaddss  xmm4, xmm0, xmm4
          vaddss  xmm0, xmm2, xmm6
        }
      }
      *(_DWORD *)(_RBX + 208) = 0;
      __asm
      {
        vmovss  dword ptr [rbx+0ACh], xmm14
        vmovss  dword ptr [rbx+0B0h], xmm12
        vmovss  dword ptr [rbx+0B4h], xmm13
        vmovss  dword ptr [rbx+0C4h], xmm5
        vmovss  dword ptr [rbx+0C8h], xmm11
        vmovss  dword ptr [rbx+0CCh], xmm9
        vmovss  dword ptr [rbx+0B8h], xmm15
        vmovss  dword ptr [rbx+0BCh], xmm4
        vmovss  dword ptr [rbx+0C0h], xmm0
        vmovss  dword ptr [rsp+290h+var_250+4], xmm4
        vmovss  dword ptr [rsp+290h+buffer], xmm0
      }
    }
    v134 = *(_BYTE *)(_RBX + 156);
    if ( v134 == 0xFE )
    {
      DObjGetBoneIndexInternal_30(obj, scr_const.j_spineupper, (unsigned __int8 *)(_RBX + 156), modelIndex);
      v134 = *(_BYTE *)(_RBX + 156);
    }
    __asm { vmovaps xmm9, cs:__xmm@80000000800000008000000080000000 }
    if ( v134 != 0xFF )
    {
      XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v134, &v326, &v334);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+190h+var_1E0.v]
        vmovups xmmword ptr [rbp+190h+quat], xmm0
      }
      QuatToAxis(&quat, &axis);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+190h+axis]
        vmovss  xmm1, dword ptr [rbp+190h+axis+4]
        vmovss  dword ptr [rsp+290h+var_228+8], xmm0
        vmovss  xmm0, dword ptr [rbp+190h+axis+8]
        vmovss  dword ptr [rsp+290h+var_228+10h], xmm0
        vmovss  xmm0, dword ptr [rbp+190h+axis+0Ch]
      }
      HIDWORD(v325) = 0;
      __asm
      {
        vmovups xmm3, [rbp+190h+var_1F0]
        vmovss  xmm3, xmm3, xmm0
        vmovss  xmm0, dword ptr [rbp+190h+axis+18h]
        vinsertps xmm3, xmm3, dword ptr [rbp+190h+axis+10h], 190h+outModelQuat
        vinsertps xmm3, xmm3, dword ptr [rbp+190h+axis+14h], 190h+var_170
        vmovss  dword ptr [rsp+290h+var_228+0Ch], xmm1
      }
      HIDWORD(v322) = 0;
      __asm
      {
        vmovups xmm7, xmmword ptr [rsp+290h+var_228+8]
        vmovss  xmm7, xmm7, xmm0
        vinsertps xmm7, xmm7, dword ptr [rbp+190h+axis+1Ch], 190h+outModelQuat
        vinsertps xmm7, xmm7, dword ptr [rbp+190h+axis+20h], 190h+var_170
        vmovups xmmword ptr [rsp+290h+var_228+8], xmm7
        vmovups [rbp+190h+var_1F0], xmm3
      }
      QuatToAngles(&quat, &outAnimWeights);
      __asm { vmovss  xmm0, dword ptr [rbx+38h] }
      HIDWORD(v322) = 0;
      __asm
      {
        vmovups xmm3, xmmword ptr [rsp+290h+var_228+8]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rbx+3Ch], 10h
        vinsertps xmm3, xmm3, dword ptr [rbx+40h], 20h ; ' '
        vmovss  xmm0, dword ptr [rbx+28h]
        vaddps  xmm1, xmm3, xmmword ptr [rbp+190h+var_130.v]
        vaddss  xmm0, xmm0, cs:__real@43340000; angle
        vmovups xmmword ptr [rsp+290h+info+8], xmm1
        vmovups xmmword ptr [rsp+290h+var_228+8], xmm3
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vmovaps xmm1, xmm0; angle2
        vmovss  xmm0, dword ptr [rbx+48h]; angle1
      }
      *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
      __asm
      {
        vmovss  xmm2, cs:RIGHT_DIFF_END; max
        vmovss  xmm1, cs:RIGHT_DIFF_BEGIN; min
        vmovaps xmm11, xmm0
        vmovss  xmm0, dword ptr [rbx+0A0h]
        vmovss  [rsp+290h+modelIndex], xmm0
        vmovaps xmm0, xmm11; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm1, cs:RIGHT_DIFF_END
        vsubss  xmm2, xmm1, cs:RIGHT_DIFF_BEGIN
        vsubss  xmm3, xmm0, cs:RIGHT_DIFF_BEGIN
        vmovss  xmm1, cs:LEFT_DIFF_END; min
        vdivss  xmm3, xmm3, xmm2
        vmulss  xmm6, xmm3, cs:RIGHT_PUSH_DIST
        vmovss  xmm2, cs:LEFT_DIFF_BEGIN; max
        vmovaps xmm0, xmm11; val
        vshufps xmm6, xmm6, xmm6, 0
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm2, xmm0, cs:LEFT_DIFF_BEGIN
        vmovss  xmm0, cs:LEFT_DIFF_END
        vsubss  xmm1, xmm0, cs:LEFT_DIFF_BEGIN
        vdivss  xmm2, xmm2, xmm1
        vmulss  xmm3, xmm2, cs:LEFT_PUSH_DIST
        vxorps  xmm0, xmm3, xmm9
        vshufps xmm0, xmm0, xmm0, 0
        vmulps  xmm2, xmm0, xmm7
        vmulps  xmm0, xmm7, xmm6
        vmovups xmm7, xmmword ptr [rsp+290h+info+8]
        vaddps  xmm1, xmm0, xmm7
        vandps  xmm0, xmm11, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vaddps  xmm6, xmm2, xmm1
        vmovss  xmm1, cs:FORWARD_DIFF_BEGIN; min
        vcomiss xmm0, xmm1
      }
      if ( !(v174 | v175) )
      {
        __asm { vcomiss xmm11, xmm8 }
        if ( v174 | v175 )
        {
          __asm
          {
            vmovss  xmm0, cs:FORWARD_DIFF_END
            vxorps  xmm2, xmm1, xmm9; max
            vxorps  xmm1, xmm0, xmm9; min
            vmovaps xmm0, xmm11; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  xmm1, cs:FORWARD_DIFF_BEGIN
            vaddss  xmm2, xmm0, xmm1
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm2, cs:FORWARD_DIFF_END; max
            vmovaps xmm0, xmm11; val
          }
          *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
          __asm
          {
            vmovss  xmm1, cs:FORWARD_DIFF_BEGIN
            vsubss  xmm2, xmm0, xmm1
          }
        }
        __asm
        {
          vmovss  xmm0, cs:FORWARD_DIFF_END
          vsubss  xmm1, xmm0, xmm1
          vdivss  xmm2, xmm2, xmm1
          vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
          vmulss  xmm0, xmm2, cs:FORWARD_PUSH_DIST
          vxorps  xmm1, xmm0, xmm9
          vshufps xmm1, xmm1, xmm1, 0
          vmulps  xmm1, xmm1, [rbp+190h+var_1F0]
          vaddps  xmm6, xmm1, xmm6
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+24h]
        vmovss  xmm1, dword ptr [rbx+28h]
        vmovss  xmm2, dword ptr [rbx+2Ch]
        vmovss  dword ptr [rbp+190h+angles], xmm0
        vaddss  xmm0, xmm1, cs:__real@43340000; angle
        vmovss  dword ptr [rbp+190h+angles+4], xmm0
        vmovss  dword ptr [rbp+190h+angles+8], xmm2
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm { vmovss  dword ptr [rbp+190h+angles+4], xmm0 }
      AnglesToQuat(&angles, (vec4_t *)&otherBitSet);
      __asm
      {
        vbroadcastss xmm0, [rsp+290h+modelIndex]
        vsubps  xmm1, xmm6, xmm7
        vmulps  xmm0, xmm1, xmm0
        vaddps  xmm1, xmm0, xmm7
        vsubps  xmm1, xmm1, xmmword ptr [rsp+290h+var_228+8]
        vmovups xmm0, xmmword ptr [rbp+190h+var_1E0.v]
        vmovss  dword ptr [rsp+30h], xmm10
      }
      XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, *(unsigned __int8 *)(_RBX + 156), fmt, (const float4 *)v309, v312);
    }
    v217 = (unsigned __int8 *)(_RBX + 133);
    if ( *(_BYTE *)(_RBX + 132) == 0xFE || *v217 == 0xFE )
    {
      DObjGetBoneIndexInternal_30(obj, scr_const.j_clavicle_le, (unsigned __int8 *)(_RBX + 132), modelIndex);
      DObjGetBoneIndexInternal_30(obj, scr_const.j_clavicle_ri, (unsigned __int8 *)(_RBX + 133), modelIndex);
    }
    if ( *(_DWORD *)(_RBX + 88) == 1 )
    {
      XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, *v217, &v331, &v330);
      v218 = *v217;
    }
    else
    {
      XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, *(unsigned __int8 *)(_RBX + 132), &v331, &v330);
      v218 = *(_BYTE *)(_RBX + 132);
    }
    __asm { vmovss  xmm0, dword ptr [rbx+38h] }
    HIDWORD(v322) = 0;
    __asm
    {
      vmovups xmm11, xmmword ptr [rsp+290h+var_228+8]
      vmovss  xmm11, xmm11, xmm0
      vinsertps xmm11, xmm11, dword ptr [rbx+3Ch], 10h
      vinsertps xmm11, xmm11, dword ptr [rbx+40h], 20h ; ' '
      vaddps  xmm0, xmm11, xmmword ptr [rbp+190h+var_170.v]
      vmovups xmmword ptr [rbp+190h+var_170.v], xmm0
      vmovups xmmword ptr [rsp+290h+var_228+8], xmm11
    }
    AnglesToAxis((const vec3_t *)(_RBX + 68), &mat);
    __asm
    {
      vmovss  xmm2, dword ptr [rbp+190h+mat+10h]
      vxorps  xmm1, xmm9, xmmword ptr [rbp+190h+mat]
      vxorps  xmm0, xmm2, xmm9
      vmovups xmmword ptr [rbp+190h+mat], xmm1
      vmovss  xmm1, dword ptr [rbp+190h+mat+14h]
      vxorps  xmm2, xmm1, xmm9
      vmovss  dword ptr [rbp+190h+mat+14h], xmm2
      vmovss  dword ptr [rbp+190h+mat+10h], xmm0
    }
    AxisToQuat(&mat, &out);
    __asm
    {
      vmovups xmm10, xmmword ptr [rbp+190h+out]
      vshufps xmm6, xmm10, xmm10, 0C9h ; 'É'
      vshufps xmm9, xmm10, xmm10, 0FFh
      vshufps xmm7, xmm10, xmm10, 0D2h ; 'Ò'
      vxorps  xmm5, xmm5, xmm5
      vinsertps xmm5, xmm5, cs:offset, 0
      vshufps xmm0, xmm5, xmm5, 0D2h ; 'Ò'
      vmulps  xmm3, xmm0, xmm6
      vshufps xmm1, xmm5, xmm5, 0C9h ; 'É'
      vmulps  xmm2, xmm1, xmm7
      vsubps  xmm0, xmm3, xmm2
      vaddps  xmm4, xmm0, xmm0
      vmulps  xmm0, xmm9, xmm4
      vaddps  xmm5, xmm0, xmm5
      vshufps xmm0, xmm4, xmm4, 0C9h ; 'É'
      vmulps  xmm2, xmm0, xmm7
      vshufps xmm1, xmm4, xmm4, 0D2h ; 'Ò'
      vmovups xmm4, xmmword ptr [rbp+190h+var_160.v]
      vmulps  xmm3, xmm1, xmm6
      vsubps  xmm1, xmm3, xmm2
      vaddps  xmm3, xmm1, xmm5
      vaddps  xmm8, xmm3, xmmword ptr [rbp+190h+var_170.v]
      vshufps xmm0, xmm4, xmm4, 0D2h ; 'Ò'
      vmulps  xmm3, xmm0, xmm6
      vmulps  xmm0, xmm10, xmm4
      vshufps xmm1, xmm4, xmm4, 0C9h ; 'É'
      vmulps  xmm2, xmm1, xmm7
      vsubps  xmm6, xmm2, xmm3
      vinsertps xmm1, xmm0, xmm0, 8
      vhaddps xmm2, xmm1, xmm1
      vshufps xmm5, xmm4, xmm4, 0FFh
      vmulps  xmm0, xmm9, xmm5
      vmulps  xmm1, xmm10, xmm5
      vmovaps xmm10, [rsp+290h+var_98+8]
      vmulps  xmm4, xmm9, xmm4
      vmovaps xmm9, [rsp+290h+var_88+8]
      vhaddps xmm3, xmm2, xmm2
      vsubps  xmm2, xmm0, xmm3
      vaddps  xmm1, xmm4, xmm1
      vaddps  xmm0, xmm6, xmm1
      vblendps xmm3, xmm2, xmm0, 7
      vsubps  xmm6, xmm8, xmm11
      vmovaps xmm11, [rsp+290h+var_A8+8]
      vmovaps xmm8, [rsp+290h+var_78+8]
      vcmpneqps xmm0, xmm3, xmm3
      vmovmskps eax, xmm0
      vmovups xmmword ptr [rbp+190h+var_160.v], xmm3
    }
    if ( _EAX )
    {
      v310 = (const float4 *)"!Float4IsNaN( clavicleQuat )";
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
      v310 = (const float4 *)"!Float4IsNaN( adjustedClaviclePos )";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 602, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( adjustedClaviclePos ))", (const char *)&queryFormat) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm7, [rbp+190h+weightScale]
      vmovups xmm0, xmmword ptr [rbp+190h+var_160.v]
      vmovups xmm1, xmm6
      vmovss  dword ptr [rsp+30h], xmm7
    }
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, v218, fmta, v310, v313);
    *(double *)&_XMM0 = XAnimGetWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, info->animIndex);
    if ( !v315 )
    {
      __asm
      {
        vmovss  xmm1, cs:__real@3f800000
        vcomiss xmm0, xmm1
        vmovss  xmm3, dword ptr [rsp+290h+var_250+4]
        vmovss  xmm5, dword ptr [rsp+290h+buffer]
        vsubss  xmm0, xmm15, dword ptr [rbx+38h]
        vsubss  xmm1, xmm3, dword ptr [rbx+3Ch]
        vsubss  xmm2, xmm5, dword ptr [rbx+40h]
      }
      HIDWORD(v322) = 0;
      __asm
      {
        vmovups xmm6, xmmword ptr [rsp+290h+var_228+8]
        vmovss  xmm6, xmm6, xmm0
        vmovups xmm0, xmmword ptr [rbp+190h+outModelQuat.v]
        vinsertps xmm6, xmm6, xmm1, 10h
        vinsertps xmm6, xmm6, xmm2, 20h ; ' '
        vmovss  dword ptr [rsp+30h], xmm7
      }
      if ( *(_DWORD *)(_RBX + 80) )
        __asm { vmovups xmm1, xmm6 }
      else
        __asm { vmovups xmm1, xmmword ptr [rbp+190h+outModelTranslation.v] }
      XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, targetBoneIndex, fmtb, (const float4 *)v311, v314);
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+190h+outModelQuat.v]
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
    __asm
    {
      vmovaps xmm14, [rsp+290h+var_D8+8]
      vmovaps xmm13, [rsp+290h+var_C8+8]
      vmovaps xmm12, [rsp+290h+var_B8+8]
      vmovaps xmm7, [rsp+290h+var_68+8]
      vmovaps xmm6, xmmword ptr [rsp+290h+var_58+8]
      vmovaps xmm15, [rsp+290h+var_E8+8]
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
  int p; 

  _RDI = nodeData;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+0Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+10h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+14h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+18h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+1Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+20h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+24h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+28h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+2Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+30h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+34h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+38h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+3Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+40h], xmm0 }
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[20] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+54h], xmm0 }
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[22] = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 92) = p;
  *((_WORD *)_RDI + 66) = -258;
  *((_BYTE *)_RDI + 156) = -2;
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
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  double v44; 
  double v45; 
  double v46; 
  double v47; 
  double v48; 
  double v49; 
  double v50; 
  double v51; 
  double deptha; 

  v6 = size;
  _R14 = nodeData;
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
  v10 = _R14[20];
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
  __asm
  {
    vmovss  xmm0, dword ptr [r14+2Ch]
    vmovss  xmm1, dword ptr [r14+28h]
    vmovss  xmm2, dword ptr [r14+24h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_18], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+48h+var_20], xmm1
    vmovsd  [rsp+48h+fmt], xmm2
  }
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^1angles: %0.2f  %0.2f  %0.2f", *(double *)&fmt, v44, v48);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+0B4h]
    vmovss  xmm1, dword ptr [r14+0B0h]
    vmovss  xmm2, dword ptr [r14+0ACh]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_18], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+48h+var_20], xmm1
    vmovsd  [rsp+48h+fmt], xmm2
  }
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^hand: x= %0.2f  %0.2f  %0.2f", *(double *)&fmta, v45, v49);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+0CCh]
    vmovss  xmm1, dword ptr [r14+0C8h]
    vmovss  xmm2, dword ptr [r14+0C4h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_18], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+48h+var_20], xmm1
    vmovsd  [rsp+48h+fmt], xmm2
  }
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^3target: x= %0.2f  %0.2f  %0.2f", *(double *)&fmtb, v46, v50);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+0C0h]
    vmovss  xmm1, dword ptr [r14+0BCh]
    vmovss  xmm2, dword ptr [r14+0B8h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+var_18], xmm0
    vcvtss2sd xmm1, xmm1, xmm1
    vcvtss2sd xmm2, xmm2, xmm2
    vmovsd  [rsp+48h+var_20], xmm1
    vmovsd  [rsp+48h+fmt], xmm2
  }
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^4result: x= %0.2f  %0.2f  %0.2f", *(double *)&fmtc, v47, v51);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+0D0h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+fmt], xmm0
  }
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^5IK: %0.2f", *(double *)&fmtd);
  __asm
  {
    vmovss  xmm0, dword ptr [r14+0A0h]
    vcvtss2sd xmm0, xmm0, xmm0
    vmovsd  [rsp+48h+depth], xmm0
  }
  Com_sprintfPos_truncate(buffer, v6, inoutPos, ", ^6hide: %0.2f^5]\n", deptha);
}

/*
==============
XAnimNode_IKLadder_BlendRungTarget
==============
*/

void __fastcall XAnimNode_IKLadder_BlendRungTarget(XAnimNode_IKLadder *node, const vec3_t *handPos, const vec3_t *rungTargetPos, double rungIKWeight, vec3_t *outBoneTargetPos)
{
  int v11; 

  _RDI = outBoneTargetPos;
  _RBP = rungTargetPos;
  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  _RSI = handPos;
  __asm { vmovaps xmm6, xmm3 }
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 308, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *(_DWORD *)node->m_prevLadderState != 4 || *(_DWORD *)node->m_currLadderState != 1 || (v11 = node->m_frameTime - node->m_prevStateTime, v11 > LADDER_SLIDE_TO_CLIMB_IK_END) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+0]
      vsubss  xmm1, xmm0, dword ptr [rsi]
      vmulss  xmm2, xmm1, xmm6
    }
    goto LABEL_11;
  }
  if ( v11 >= LADDER_SLIDE_TO_CLIMB_IK_BEGIN )
  {
    _EAX = v11 - LADDER_SLIDE_TO_CLIMB_IK_BEGIN;
    _ECX = LADDER_SLIDE_TO_CLIMB_IK_END - LADDER_SLIDE_TO_CLIMB_IK_BEGIN;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vdivss  xmm6, xmm1, xmm0
      vmovss  xmm1, dword ptr [rbp+0]
      vsubss  xmm0, xmm1, dword ptr [rsi]
      vmulss  xmm2, xmm0, xmm6
    }
LABEL_11:
    __asm
    {
      vaddss  xmm3, xmm2, dword ptr [rsi]
      vmovss  dword ptr [rdi], xmm3
      vmovss  xmm0, dword ptr [rbp+4]
      vsubss  xmm1, xmm0, dword ptr [rsi+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsi+4]
      vmovss  dword ptr [rdi+4], xmm3
      vmovss  xmm0, dword ptr [rbp+8]
      vsubss  xmm1, xmm0, dword ptr [rsi+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rsi+8]
    }
    goto LABEL_12;
  }
  *(_QWORD *)outBoneTargetPos->v = *(_QWORD *)_RSI->v;
  __asm { vmovss  xmm3, dword ptr [rsi+8] }
LABEL_12:
  __asm
  {
    vmovss  dword ptr [rdi+8], xmm3
    vmovaps xmm6, [rsp+48h+var_18]
  }
}

/*
==============
XAnimNode_IKLadder_GetBestRungTarget
==============
*/
void XAnimNode_IKLadder_GetBestRungTarget(const vec3_t *bonePos, const vec4_t *boneQuat, vec3_t *outBoneTargetPos, int ikType, XAnimNode_IKLadder *node)
{
  char v56; 
  vec3_t out; 
  tmat33_t<vec3_t> axis; 
  vec3_t in; 

  _RBX = node;
  _RDI = outBoneTargetPos;
  _R14 = ikType;
  _RSI = bonePos;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 196, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( node->m_hasWeapon && (_DWORD)_R14 == 1 )
  {
    _RDI->v[0] = _RSI->v[0];
    _RDI->v[1] = _RSI->v[1];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rdi+8], xmm0
    }
  }
  else
  {
    __asm
    {
      vmovaps [rsp+150h+var_40], xmm6
      vmovaps [rsp+150h+var_50], xmm7
      vmovaps [rsp+150h+var_60], xmm8
      vmovaps [rsp+150h+var_70], xmm9
      vmovaps [rsp+150h+var_80], xmm10
      vmovaps [rsp+150h+var_90], xmm11
      vmovaps [rsp+150h+var_A0], xmm12
      vmovaps [rsp+150h+var_B0], xmm13
    }
    AnglesToAxis(&node->m_ladderAngles, &axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+18h]
      vsubss  xmm6, xmm0, dword ptr [rbx+0Ch]
    }
    _R15 = DCONST_DVARFLT_xanim_ladder_wrist_query_offset;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+20h]
      vmovss  xmm1, dword ptr [rbx+1Ch]
      vsubss  xmm10, xmm0, dword ptr [rbx+14h]
      vsubss  xmm8, xmm1, dword ptr [rbx+10h]
    }
    if ( !DCONST_DVARFLT_xanim_ladder_wrist_query_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_wrist_query_offset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_R15);
    __asm
    {
      vmovss  xmm0, dword ptr [r15+28h]
      vxorps  xmm9, xmm9, xmm9
      vmovss  dword ptr [rbp+50h+in], xmm0
      vmovss  dword ptr [rbp+50h+in+4], xmm9
      vmovss  dword ptr [rbp+50h+in+8], xmm9
    }
    QuatTransform(boneQuat, &in, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+150h+out]
      vaddss  xmm3, xmm0, dword ptr [rsi]
      vsubss  xmm11, xmm3, dword ptr [rbx+0Ch]
      vmovss  xmm0, dword ptr [rsp+150h+out+4]
      vaddss  xmm2, xmm0, dword ptr [rsi+4]
      vsubss  xmm12, xmm2, dword ptr [rbx+10h]
      vmovss  xmm0, dword ptr [rsp+150h+out+8]
      vaddss  xmm1, xmm0, dword ptr [rsi+8]
      vsubss  xmm13, xmm1, dword ptr [rbx+14h]
      vmovss  xmm7, dword ptr [rbx+34h]
      vmovss  dword ptr [rsp+150h+out+8], xmm1
      vmovss  dword ptr [rsp+150h+out+4], xmm2
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm11, dword ptr [rsp+150h+axis+18h]
      vmulss  xmm1, xmm10, xmm10
      vaddss  xmm2, xmm2, xmm1
      vmulss  xmm1, xmm13, dword ptr [rsp+150h+axis+20h]
      vsqrtss xmm4, xmm2, xmm2
      vmovss  dword ptr [rsp+150h+out], xmm3
      vmulss  xmm3, xmm12, dword ptr [rsp+150h+axis+1Ch]
      vaddss  xmm2, xmm3, xmm0
      vaddss  xmm2, xmm2, xmm1
      vminss  xmm0, xmm4, xmm2; X
      vdivss  xmm3, xmm0, xmm7
      vxorps  xmm6, xmm6, xmm6
      vmovaps xmm1, xmm7; Y
      vroundss xmm6, xmm6, xmm3, 1
    }
    *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    _RSI = DCONST_DVARFLT_xanim_ladder_ik_dist_ratio;
    __asm { vmovaps xmm8, xmm0 }
    if ( !DCONST_DVARFLT_xanim_ladder_ik_dist_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_ik_dist_ratio") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm
    {
      vmovss  xmm4, dword ptr [rsi+28h]
      vmovss  xmm2, cs:__real@3f800000
      vsubss  xmm0, xmm2, xmm4
      vmulss  xmm1, xmm0, xmm7
      vcomiss xmm8, xmm1
    }
    if ( v56 )
    {
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+r14*4+88h]
        vcomiss xmm3, xmm9
      }
      if ( v56 )
      {
        __asm
        {
          vmulss  xmm0, xmm7, cs:__real@3f000000
          vcmpless xmm0, xmm0, xmm8
          vaddss  xmm1, xmm6, xmm2
          vblendvps xmm2, xmm6, xmm1, xmm0
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm4, xmm7
          vcmpltss xmm1, xmm0, xmm8
          vblendvps xmm2, xmm6, xmm3, xmm1
        }
      }
    }
    else
    {
      __asm { vaddss  xmm2, xmm6, xmm2 }
    }
    __asm
    {
      vmovss  dword ptr [rbx+r14*4+88h], xmm2
      vmulss  xmm10, xmm2, xmm7
      vmulss  xmm0, xmm10, dword ptr [rsp+150h+axis+18h]
      vaddss  xmm7, xmm0, dword ptr [rbx+0Ch]
      vmulss  xmm1, xmm10, dword ptr [rsp+150h+axis+1Ch]
      vmulss  xmm0, xmm12, dword ptr [rsp+150h+axis+10h]
      vmovaps xmm12, [rsp+150h+var_A0]
      vmovss  dword ptr [rdi], xmm7
      vaddss  xmm8, xmm1, dword ptr [rbx+10h]
      vmulss  xmm1, xmm11, dword ptr [rsp+150h+axis+0Ch]
      vmovaps xmm11, [rsp+150h+var_90]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm13, dword ptr [rsp+150h+axis+14h]
      vmovaps xmm13, [rsp+150h+var_B0]
      vaddss  xmm5, xmm2, xmm1
      vmulss  xmm0, xmm5, dword ptr [rsp+150h+axis+0Ch]
      vmulss  xmm1, xmm5, dword ptr [rsp+150h+axis+10h]
      vaddss  xmm2, xmm0, xmm7
      vaddss  xmm0, xmm1, xmm8
      vmovss  dword ptr [rdi+4], xmm8
      vmovss  xmm9, dword ptr [rbx+14h]
      vmovaps xmm8, [rsp+150h+var_60]
      vmovss  dword ptr [rdi], xmm2
      vmulss  xmm2, xmm10, dword ptr [rsp+150h+axis+20h]
      vmovaps xmm10, [rsp+150h+var_80]
      vmovss  dword ptr [rdi+4], xmm0
      vmulss  xmm0, xmm5, dword ptr [rsp+150h+axis+14h]
      vaddss  xmm1, xmm2, xmm9
      vmovaps xmm9, [rsp+150h+var_70]
      vaddss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rdi+8], xmm1
    }
    _RBX = DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset;
    if ( !DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_rung_wrist_ik_offset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm7, dword ptr [rbx+30h]
      vmovss  xmm4, dword ptr [rbx+28h]
      vmovss  xmm5, dword ptr [rbx+2Ch]
      vmulss  xmm0, xmm4, dword ptr [rsp+150h+axis+8]
      vaddss  xmm2, xmm0, dword ptr [rdi+8]
      vmulss  xmm1, xmm5, dword ptr [rsp+150h+axis+14h]
      vmulss  xmm0, xmm4, dword ptr [rsp+150h+axis]
      vaddss  xmm6, xmm2, xmm1
      vaddss  xmm2, xmm0, dword ptr [rdi]
      vmulss  xmm0, xmm7, dword ptr [rsp+150h+axis+18h]
      vmulss  xmm1, xmm5, dword ptr [rsp+150h+axis+0Ch]
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm1, xmm4, dword ptr [rsp+150h+axis+4]
      vaddss  xmm2, xmm3, xmm0
      vaddss  xmm3, xmm1, dword ptr [rdi+4]
      vmulss  xmm1, xmm7, dword ptr [rsp+150h+axis+1Ch]
      vmulss  xmm0, xmm5, dword ptr [rsp+150h+axis+10h]
      vmovss  dword ptr [rdi], xmm2
      vaddss  xmm2, xmm3, xmm0
      vmulss  xmm0, xmm7, dword ptr [rsp+150h+axis+20h]
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rdi+4], xmm2
      vmovss  dword ptr [rdi+8], xmm1
      vmovaps xmm7, [rsp+150h+var_50]
      vmovaps xmm6, [rsp+150h+var_40]
    }
  }
}

/*
==============
XAnimNode_IKLadder_GetClampedHandPosition
==============
*/

void __fastcall XAnimNode_IKLadder_GetClampedHandPosition(const DObj *obj, XAnimNode_IKLadder *node, double rungIKWeight, const vec3_t *bonePos, vec3_t *outBoneTargetPos)
{
  tmat33_t<vec3_t> axis; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm7
    vmovaps xmmword ptr [rax-28h], xmm8
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm11
    vmovaps xmmword ptr [rax-68h], xmm12
  }
  _RDI = outBoneTargetPos;
  _RSI = bonePos;
  _RBX = node;
  __asm { vmovaps xmm8, xmm2 }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 140, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder.cpp", 141, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  AnglesToAxis(&_RBX->m_ladderAngles, &axis);
  __asm
  {
    vmovss  xmm9, dword ptr [rsp+0C8h+axis+0Ch]
    vmovss  xmm10, dword ptr [rsp+0C8h+axis+10h]
    vmovss  xmm11, dword ptr [rsp+0C8h+axis+14h]
    vmovss  xmm12, dword ptr [rsi]
    vsubss  xmm0, xmm12, dword ptr [rbx+0Ch]
    vmovss  xmm5, dword ptr [rbx+30h]
    vmulss  xmm2, xmm0, xmm9
    vmovss  xmm0, dword ptr [rsi+4]
    vsubss  xmm1, xmm0, dword ptr [rbx+10h]
    vmovss  xmm0, dword ptr [rsi+8]
    vmulss  xmm1, xmm1, xmm10
    vaddss  xmm3, xmm2, xmm1
    vsubss  xmm2, xmm0, dword ptr [rbx+14h]
    vmovss  xmm0, dword ptr [rbx+4]
    vmulss  xmm1, xmm2, xmm11
    vsubss  xmm2, xmm0, dword ptr [rbx+10h]
    vaddss  xmm7, xmm3, xmm1
    vmovss  xmm1, dword ptr [rbx]
    vsubss  xmm0, xmm1, dword ptr [rbx+0Ch]
    vmovss  xmm1, dword ptr [rbx+8]
    vmulss  xmm3, xmm2, xmm10
    vmulss  xmm2, xmm0, xmm9
    vsubss  xmm0, xmm1, dword ptr [rbx+14h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm0, xmm11
    vaddss  xmm3, xmm4, xmm2
  }
  if ( _RBX->m_ladderHand == 1 )
  {
    __asm
    {
      vsubss  xmm0, xmm7, cs:__real@c0f3fe5d
      vmovss  xmm1, cs:__real@bf000000
    }
  }
  else
  {
    __asm
    {
      vsubss  xmm0, xmm7, cs:__real@40f3fe5d
      vmovss  xmm1, cs:__real@3f000000
    }
  }
  __asm
  {
    vsubss  xmm3, xmm0, xmm3
    vmulss  xmm4, xmm5, xmm1
  }
  if ( _RBX->m_hasWeapon )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+0A0h]
      vmovss  xmm1, cs:__real@3f800000
      vaddss  xmm0, xmm3, xmm4
      vmulss  xmm3, xmm0, xmm2
      vsubss  xmm2, xmm1, xmm2
      vmulss  xmm0, xmm2, xmm7
      vaddss  xmm4, xmm3, xmm0
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm0, cs:__real@3f800000
      vsubss  xmm1, xmm0, xmm8
      vmulss  xmm2, xmm1, xmm3
      vaddss  xmm4, xmm2, xmm4
    }
  }
  __asm
  {
    vsubss  xmm3, xmm4, xmm7
    vmulss  xmm0, xmm9, xmm3
    vaddss  xmm1, xmm0, xmm12
    vmovss  dword ptr [rdi], xmm1
    vmulss  xmm2, xmm10, xmm3
    vaddss  xmm0, xmm2, dword ptr [rsi+4]
    vmulss  xmm1, xmm11, xmm3
    vmovss  dword ptr [rdi+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rdi+8], xmm2
  }
  _R11 = &v72;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-10h]
    vmovaps xmm8, xmmword ptr [r11-20h]
    vmovaps xmm9, xmmword ptr [r11-30h]
    vmovaps xmm10, xmmword ptr [r11-40h]
    vmovaps xmm11, xmmword ptr [r11-50h]
    vmovaps xmm12, xmmword ptr [r11-60h]
  }
}

/*
==============
XAnimNode_IKLadder_GetRungIKWeight
==============
*/
float XAnimNode_IKLadder_GetRungIKWeight(const DObj *obj, int ikType)
{
  unsigned __int16 children; 
  const XAnimInfo *AnimInfo; 
  __int64 outWeights; 
  __int64 outAnimWeights; 

  _RBX = ikType;
  outWeights = 0i64;
  outAnimWeights = 0i64;
  if ( obj->tree && (children = obj->tree->children) != 0 )
  {
    AnimInfo = GetAnimInfo(children);
    BG_CalcFingerPoseWeights(AnimInfo, (float *)&outWeights, (float *)&outAnimWeights);
    __asm { vmovss  xmm0, dword ptr [rsp+rbx*4+28h+outWeights] }
  }
  else
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  return *(float *)&_XMM0;
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


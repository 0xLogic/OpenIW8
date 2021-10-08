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
  unsigned int v39; 
  XAnimIKDObjData *dObjData; 
  unsigned int v41; 
  DObjPartBits *p_m_partBits; 
  __int64 i; 
  __int64 v44; 
  unsigned int v47; 
  unsigned __int64 v48; 
  signed __int64 v54; 
  __int64 v59; 
  unsigned __int64 v60; 
  int v61; 
  bool v62; 
  char v95; 
  const float4 *fmt; 
  float fmta; 
  XAnimCalcBuffer *v129; 
  const float4 *v130; 
  __int64 calcMode; 
  float calcModea; 
  vec3_t v135; 
  vec3_t v136; 
  __int128 v137; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  tmat33_t<vec3_t> axis; 
  vec4_t quat; 
  __int64 v143[4]; 

  _RSI = (const XAnimNode_IKLadderWM *)nodeData;
  *(_QWORD *)v135.v = nodeData;
  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 308, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  AnglesToAxis(&_RSI->m_ladderAngles, &axis);
  AnglesToQuat(&_RSI->m_ladderAngles, &quat);
  ikCalcInfo = animCalcInfo->ikCalcInfo;
  if ( ikCalcInfo->dObjData )
  {
    if ( ikCalcInfo->ikData )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+18h]
        vmovss  xmm2, dword ptr [rsi+1Ch]
        vmovss  xmm3, dword ptr [rsi+20h]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vxorps  xmm4, xmm4, xmm4
        vcomiss xmm3, xmm4
      }
      if ( ikCalcInfo->ikData )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+4Ch]
          vmovss  xmm2, dword ptr [rsi+50h]
          vmovss  xmm3, dword ptr [rsi+54h]
          vmulss  xmm1, xmm0, xmm0
          vmulss  xmm0, xmm2, xmm2
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vcomiss xmm3, xmm4
        }
        if ( ikCalcInfo->ikData )
        {
          __asm { vmovaps [rsp+210h+var_50], xmm6 }
          XAnimNode_IKLadder_GetAimTarget(_RSI, &_RSI->m_aimIKTarget);
          v39 = 0;
          dObjData = animCalcInfo->ikCalcInfo->dObjData;
          v143[0] = (__int64)dObjData->boneInfo;
          v143[1] = (__int64)&dObjData->boneInfo[1];
          v143[2] = (__int64)&dObjData->boneInfo[2];
          v143[3] = (__int64)&dObjData->boneInfo[3];
          v41 = 0;
          p_m_partBits = &_RSI->m_partBits;
          while ( !p_m_partBits->array[0] )
          {
            ++v41;
            p_m_partBits = (DObjPartBits *)((char *)p_m_partBits + 4);
            if ( v41 >= 8 )
            {
              for ( i = 0i64; i < 4; ++i )
              {
                v44 = v143[i];
                bitarray_base<bitarray<256>>::setBit(&_RSI->m_partBits, *(_DWORD *)(v44 + 16));
                bitarray_base<bitarray<256>>::setBit(&_RSI->m_partBits, *(_DWORD *)(v44 + 12));
              }
              DObjCompleteHierarchyBits(obj, &_RSI->m_partBits);
              break;
            }
          }
          bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, animCalcInfo->partBits);
          _RDI = animCalcInfo->partBits;
          _R14 = (char *)&_RSI->m_partBits - (char *)_RDI;
          v47 = 0;
          v48 = 2i64;
          do
          {
            __asm
            {
              vlddqu  xmm6, xmmword ptr [r14+rdi]
              vlddqu  xmm0, xmmword ptr [rdi]
              vpor    xmm6, xmm0, xmm6
              vmovdqu xmmword ptr [rdi], xmm6
            }
            _RDI = (DObjPartBits *)((char *)_RDI + 16);
            ++v47;
          }
          while ( v47 < 2 );
          __asm { vmovss  xmm3, [rbp+110h+weightScale]; weightScale }
          XAnimCalcDefaultBlendNode(animCalcInfo, obj, animInfo, *(float *)&_XMM3, bNormQuat, destBuffer, LINEAR);
          bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(animCalcInfo->partBits, &otherBitSet);
          _RSI = *(XAnimNode_IKLadderWM **)v135.v;
          if ( *(_BYTE *)(*(_QWORD *)v135.v + 60i64) )
          {
            if ( *(_BYTE *)(*(_QWORD *)v135.v + 61i64) || *(_BYTE *)(*(_QWORD *)v135.v + 62i64) )
              v48 = 1i64;
          }
          else
          {
            v39 = 2;
            v48 = 4i64;
          }
          v54 = v39;
          if ( v39 < v48 )
          {
            __asm
            {
              vmovaps [rsp+210h+var_B0], xmm12
              vmovss  xmm12, cs:__real@3f800000
              vmovaps [rsp+210h+var_C0], xmm13
              vmovss  xmm13, cs:__real@3f000000
              vmovaps [rsp+210h+var_D0], xmm14
              vmovss  xmm14, dword ptr cs:__xmm@80000000800000008000000080000000
              vmovaps [rsp+210h+var_E0], xmm15
              vmovss  xmm15, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
              vmovaps [rsp+210h+var_60], xmm7
              vmovaps [rsp+210h+var_70], xmm8
              vmovaps [rsp+210h+var_80], xmm9
              vmovaps [rsp+210h+var_90], xmm10
              vmovaps [rsp+210h+var_A0], xmm11
            }
            do
            {
              v59 = v143[v54];
              v60 = *(unsigned int *)(v59 + 16);
              v61 = *(_DWORD *)(v59 + 16);
              if ( !_RSI->m_isTorso )
                v61 = *(_DWORD *)(v59 + 12);
              if ( (unsigned int)v60 >= 0x100 )
              {
                LODWORD(calcMode) = 256;
                LODWORD(v129) = *(_DWORD *)(v59 + 16);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v129, calcMode) )
                  __debugbreak();
              }
              if ( ((0x80000000 >> (v60 & 0x1F)) & animCalcInfo->ignorePartBits.array[v60 >> 5]) == 0 && (unsigned int)(v60 - 254) > 1 )
              {
                XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v61, &outModelQuat, &outModelTranslation);
                v62 = !_RSI->m_isAiming;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rbp+110h+outModelTranslation.v]
                  vaddss  xmm9, xmm0, dword ptr [rsi+4Ch]
                  vmovups xmm6, xmmword ptr [rbp+110h+outModelQuat.v]
                  vshufps xmm1, xmm0, xmm0, 55h ; 'U'
                  vaddss  xmm10, xmm1, dword ptr [rsi+50h]
                  vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
                  vaddss  xmm11, xmm2, dword ptr [rsi+54h]
                  vunpcklps xmm0, xmm9, xmm10
                  vmovss  [rsp+210h+var_1A0], xmm11
                  vmovsd  [rsp+210h+var_1A8], xmm0
                  vmovsd  [rsp+210h+var_1B8], xmm0
                }
                v135.v[2] = v136.v[2];
                if ( v62 )
                {
                  *(double *)&_XMM0 = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animInfo->animIndex);
                  __asm
                  {
                    vmovss  dword ptr [rsp+210h+fmt], xmm0
                    vmovdqa xmmword ptr [rbp+110h+otherBitSet.baseclass_0.array], xmm6
                  }
                  XAnimNode_IKLadderWM_GetBestRungTarget(&v136, (const vec4_t *)&otherBitSet, &v135, v39, fmta, _RSI);
                  __asm
                  {
                    vmovss  xmm8, [rsp+210h+var_1B0]
                    vmovss  xmm7, dword ptr [rsp+210h+var_1B8+4]
                    vmovss  xmm6, dword ptr [rsp+210h+var_1B8]
                  }
                }
                else
                {
                  __asm
                  {
                    vsubss  xmm0, xmm10, dword ptr [rsi+10h]
                    vsubss  xmm1, xmm9, dword ptr [rsi+0Ch]
                    vmovss  xmm7, dword ptr [rbp+110h+axis+10h]
                    vmovss  xmm6, dword ptr [rbp+110h+axis+0Ch]
                    vmovss  xmm8, dword ptr [rbp+110h+axis+14h]
                    vmovss  xmm5, dword ptr [rsi+30h]
                    vmulss  xmm2, xmm0, xmm7
                    vmulss  xmm0, xmm1, xmm6
                    vaddss  xmm3, xmm2, xmm0
                    vsubss  xmm2, xmm11, dword ptr [rsi+14h]
                    vmulss  xmm0, xmm2, xmm8
                    vaddss  xmm4, xmm3, xmm0
                    vandps  xmm1, xmm4, xmm15
                    vmulss  xmm0, xmm5, xmm13
                    vcomiss xmm1, xmm0
                    vxorps  xmm0, xmm0, xmm0
                    vcmpless xmm0, xmm0, xmm4
                    vxorps  xmm1, xmm5, xmm14
                    vblendvps xmm0, xmm1, xmm5, xmm0
                    vmulss  xmm4, xmm0, xmm13
                    vmulss  xmm0, xmm6, xmm4
                    vaddss  xmm6, xmm0, dword ptr [rsi+40h]
                    vmulss  xmm0, xmm8, xmm4
                    vaddss  xmm8, xmm0, dword ptr [rsi+48h]
                    vmulss  xmm1, xmm7, xmm4
                    vaddss  xmm7, xmm1, dword ptr [rsi+44h]
                  }
                }
                *(double *)&_XMM0 = XAnimGetWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animInfo->animIndex);
                __asm { vcomiss xmm0, xmm12 }
                if ( v95 )
                {
                  __asm
                  {
                    vsubss  xmm4, xmm12, xmm0
                    vmulss  xmm1, xmm6, xmm0
                    vmulss  xmm2, xmm4, xmm9
                    vaddss  xmm6, xmm2, xmm1
                    vmulss  xmm2, xmm7, xmm0
                    vmulss  xmm0, xmm8, xmm0
                    vmulss  xmm3, xmm4, xmm10
                    vmulss  xmm1, xmm4, xmm11
                    vaddss  xmm8, xmm1, xmm0
                    vaddss  xmm7, xmm3, xmm2
                  }
                }
                __asm
                {
                  vsubss  xmm0, xmm6, dword ptr [rsi+4Ch]
                  vsubss  xmm1, xmm7, dword ptr [rsi+50h]
                  vsubss  xmm2, xmm8, dword ptr [rsi+54h]
                }
                HIDWORD(v137) = 0;
                __asm
                {
                  vmovups xmm6, xmmword ptr [rbp-80h]
                  vmovss  xmm6, xmm6, xmm0
                  vmovups xmm0, xmmword ptr [rbp+110h+outModelQuat.v]
                  vinsertps xmm6, xmm6, xmm1, 10h
                  vcmpneqps xmm1, xmm0, xmm0
                  vmovmskps eax, xmm1
                  vinsertps xmm6, xmm6, xmm2, 20h ; ' '
                  vmovups xmmword ptr [rbp-80h], xmm6
                }
                if ( _EAX )
                {
                  v130 = (const float4 *)"!Float4IsNaN( localAnimQuat )";
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
                  v130 = (const float4 *)"!Float4IsNaN( modelPos )";
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 466, ASSERT_TYPE_ASSERT, "(!Float4IsNaN( modelPos ))", (const char *)&queryFormat) )
                    __debugbreak();
                }
                __asm
                {
                  vmovups xmm0, xmmword ptr [rbp+110h+outModelQuat.v]
                  vmovups xmm1, xmm6
                  vmovss  dword ptr [rsp+210h+calcMode], xmm12
                }
                XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, v60, fmt, v130, calcModea);
              }
              ++v39;
              ++v54;
            }
            while ( v54 < (__int64)v48 );
            __asm
            {
              vmovaps xmm15, [rsp+210h+var_E0]
              vmovaps xmm14, [rsp+210h+var_D0]
              vmovaps xmm13, [rsp+210h+var_C0]
              vmovaps xmm12, [rsp+210h+var_B0]
              vmovaps xmm11, [rsp+210h+var_A0]
              vmovaps xmm10, [rsp+210h+var_90]
              vmovaps xmm9, [rsp+210h+var_80]
              vmovaps xmm8, [rsp+210h+var_70]
              vmovaps xmm7, [rsp+210h+var_60]
            }
          }
          __asm { vmovaps xmm6, [rsp+210h+var_50] }
        }
      }
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
  _RDI = nodeData;
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
  __asm { vmovss  dword ptr [rdi+4Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+50h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+54h], xmm0 }
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
  const char *v35; 
  char v67; 
  bool v68; 
  const char *v118; 
  bool result; 
  tmat33_t<vec3_t> axis; 
  vec3_t out; 
  vec3_t in; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
  }
  _RSI = outBoneTargetPos;
  _R14 = node;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-88h], xmm10
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm15
  }
  _R12 = ikType;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 201, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  AnglesToAxis(&node->m_ladderAngles, &axis);
  __asm { vmovss  xmm2, dword ptr [r14+38h]; handDistance }
  *(double *)&_XMM0 = BG_Ladder_GetScrubOffset(&node->m_ladderBottom, &node->m_ladderTop, *(float *)&_XMM2);
  __asm
  {
    vxorps  xmm2, xmm0, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm1, xmm2, dword ptr [rsp+160h+axis+18h]
    vaddss  xmm11, xmm1, dword ptr [r14+0Ch]
    vmulss  xmm1, xmm2, dword ptr [rsp+160h+axis+1Ch]
    vaddss  xmm12, xmm1, dword ptr [r14+10h]
    vmulss  xmm1, xmm2, dword ptr [rsp+160h+axis+20h]
    vmovss  xmm0, dword ptr [r14+18h]
    vaddss  xmm13, xmm1, dword ptr [r14+14h]
    vmovss  xmm1, dword ptr [r14+1Ch]
    vsubss  xmm6, xmm0, xmm11
    vmovss  xmm0, dword ptr [r14+20h]
    vsubss  xmm9, xmm1, xmm12
    vsubss  xmm10, xmm0, xmm13
  }
  if ( (int)_R12 >= 2 )
  {
    _RBX = DCONST_DVARFLT_xanim_ladder_ankle_query_offset;
    if ( DCONST_DVARFLT_xanim_ladder_ankle_query_offset )
      goto LABEL_11;
    v35 = "xanim_ladder_ankle_query_offset";
  }
  else
  {
    _RBX = DCONST_DVARFLT_xanim_ladder_wrist_query_offset;
    if ( DCONST_DVARFLT_xanim_ladder_wrist_query_offset )
      goto LABEL_11;
    v35 = "xanim_ladder_wrist_query_offset";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v35) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vxorps  xmm7, xmm7, xmm7
    vmovss  dword ptr [rbp+60h+in], xmm0
    vmovss  dword ptr [rbp+60h+in+4], xmm7
    vmovss  dword ptr [rbp+60h+in+8], xmm7
  }
  QuatTransform(boneQuat, &in, &out);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+160h+out]
    vaddss  xmm3, xmm0, dword ptr [r13+0]
    vmovss  xmm0, dword ptr [rsp+160h+out+4]
    vaddss  xmm2, xmm0, dword ptr [r13+4]
    vmovss  xmm0, dword ptr [rbp+60h+out+8]
    vaddss  xmm1, xmm0, dword ptr [r13+8]
    vmovss  xmm8, dword ptr [r14+34h]
    vsubss  xmm0, xmm1, xmm13
    vmovss  dword ptr [rsp+160h+var_120], xmm0
    vmovss  dword ptr [rbp+60h+out+8], xmm1
    vsubss  xmm15, xmm3, xmm11
    vmovss  dword ptr [rsp+160h+out+4], xmm2
    vmulss  xmm0, xmm6, xmm6
    vmovss  dword ptr [rsp+160h+out], xmm3
    vsubss  xmm3, xmm2, xmm12
    vmulss  xmm1, xmm9, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmovss  xmm0, dword ptr [rsp+160h+axis+20h]
    vmulss  xmm1, xmm10, xmm10
    vaddss  xmm2, xmm2, xmm1
    vmulss  xmm1, xmm0, dword ptr [rsp+160h+var_120]
    vsqrtss xmm5, xmm2, xmm2
    vmulss  xmm2, xmm15, dword ptr [rsp+160h+axis+18h]
    vmovss  dword ptr [rsp+160h+var_120+4], xmm3
    vmulss  xmm3, xmm3, dword ptr [rsp+160h+axis+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vminss  xmm0, xmm5, xmm2; X
    vdivss  xmm3, xmm0, xmm8
    vxorps  xmm6, xmm6, xmm6
    vmovaps xmm1, xmm8; Y
    vroundss xmm6, xmm6, xmm3, 1
  }
  *(float *)&_XMM0 = fmodf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  _RBX = DCONST_DVARFLT_xanim_ladder_ik_dist_ratio;
  __asm { vmovaps xmm10, xmm0 }
  if ( !DCONST_DVARFLT_xanim_ladder_ik_dist_ratio && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_ik_dist_ratio") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, [rbp+60h+arg_20]
    vcomiss xmm0, xmm7
    vmovss  xmm9, cs:__real@3f000000
  }
  if ( !(v67 | v68) )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+r12*4+78h]
    vcomiss xmm0, xmm7
  }
  _RAX = _R12;
  if ( v67 || (v67 = 0, v68 = (_DWORD)_R12 == 0, (_DWORD)_R12) )
  {
LABEL_18:
    __asm
    {
      vmovss  xmm3, dword ptr [rbx+28h]
      vmovss  xmm2, cs:__real@3f800000
      vsubss  xmm0, xmm2, xmm3
      vmulss  xmm1, xmm0, xmm8
      vcomiss xmm10, xmm1
    }
    _RAX = _R12;
    if ( v67 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [r14+r12*4+78h]
        vcomiss xmm1, xmm7
      }
      if ( v67 )
      {
        __asm
        {
          vmulss  xmm0, xmm8, xmm9
          vcmpless xmm0, xmm0, xmm10
          vaddss  xmm1, xmm6, xmm2
          vblendvps xmm6, xmm6, xmm1, xmm0
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm3, xmm8
          vcomiss xmm10, xmm0
        }
        if ( !(v67 | v68) )
          __asm { vmovaps xmm6, xmm1 }
      }
    }
    else
    {
      __asm { vaddss  xmm6, xmm6, xmm2 }
    }
  }
  else
  {
    __asm { vmovaps xmm6, xmm0 }
  }
  __asm
  {
    vmulss  xmm2, xmm6, xmm8
    vmulss  xmm1, xmm2, dword ptr [rsp+160h+axis+18h]
    vmovss  dword ptr [r14+rax*4+78h], xmm6
    vaddss  xmm6, xmm1, xmm11
    vmulss  xmm1, xmm2, dword ptr [rsp+160h+axis+1Ch]
    vmovss  xmm11, dword ptr [rsp+160h+axis+10h]
    vaddss  xmm8, xmm1, xmm12
    vmulss  xmm1, xmm2, dword ptr [rsp+160h+axis+20h]
    vmovss  xmm12, dword ptr [rsp+160h+axis+0Ch]
    vaddss  xmm10, xmm1, xmm13
    vmulss  xmm1, xmm11, dword ptr [rsp+160h+var_120+4]
    vmovss  xmm13, dword ptr [rsp+160h+axis+14h]
    vmulss  xmm0, xmm12, xmm15
    vmovaps xmm15, [rsp+160h+var_C8+8]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, dword ptr [rsp+160h+var_120]
    vmovss  dword ptr [rsi], xmm6
    vmovss  dword ptr [rsi+4], xmm8
    vmovss  dword ptr [rsi+8], xmm10
    vmovss  xmm5, dword ptr [r14+30h]
    vaddss  xmm4, xmm2, xmm1
    vandps  xmm3, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmulss  xmm0, xmm5, xmm9
    vcomiss xmm3, xmm0
  }
  if ( !(v67 | v68) )
  {
    __asm
    {
      vxorps  xmm1, xmm5, cs:__xmm@80000000800000008000000080000000
      vcmpless xmm0, xmm7, xmm4
      vblendvps xmm0, xmm1, xmm5, xmm0
      vmulss  xmm4, xmm0, xmm9
    }
  }
  __asm
  {
    vmovaps xmm9, [rsp+160h+var_78+8]
    vmulss  xmm0, xmm12, xmm4
    vmovaps xmm12, [rsp+160h+var_A8+8]
    vaddss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm11, xmm4
    vmovaps xmm11, [rsp+160h+var_98+8]
    vaddss  xmm0, xmm2, xmm8
    vmovaps xmm8, [rsp+160h+var_68+8]
    vmovss  dword ptr [rsi], xmm1
    vmulss  xmm1, xmm13, xmm4
    vmovaps xmm13, [rsp+160h+var_B8+8]
    vaddss  xmm2, xmm1, xmm10
    vmovaps xmm10, [rsp+160h+var_88+8]
    vmovss  dword ptr [rsi+8], xmm2
    vmovss  dword ptr [rsi+4], xmm0
  }
  if ( (int)_R12 > 1 )
  {
    _RBX = DCONST_DVARVEC3_xanim_ladder_rung_ankle_ik_offset;
    if ( DCONST_DVARVEC3_xanim_ladder_rung_ankle_ik_offset )
      goto LABEL_33;
    v118 = "xanim_ladder_rung_ankle_ik_offset";
  }
  else
  {
    _RBX = DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset;
    if ( DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset )
      goto LABEL_33;
    v118 = "xanim_ladder_rung_wrist_ik_offset";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v118) )
    __debugbreak();
LABEL_33:
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+28h]
    vmovss  xmm6, dword ptr [rbx+2Ch]
    vmovss  xmm7, dword ptr [rbx+30h]
    vmulss  xmm1, xmm5, dword ptr [rsp+160h+axis]
    vaddss  xmm3, xmm1, dword ptr [rsi]
    vmulss  xmm0, xmm6, dword ptr [rsp+160h+axis+0Ch]
    vmulss  xmm2, xmm7, dword ptr [rsp+160h+axis+18h]
    vmulss  xmm1, xmm6, dword ptr [rsp+160h+axis+10h]
  }
  result = 1;
  __asm
  {
    vaddss  xmm4, xmm3, xmm0
    vaddss  xmm0, xmm4, xmm2
    vmulss  xmm2, xmm5, dword ptr [rsp+160h+axis+4]
    vaddss  xmm3, xmm2, dword ptr [rsi+4]
    vmulss  xmm2, xmm6, dword ptr [rsp+160h+axis+14h]
    vaddss  xmm4, xmm3, xmm1
    vmovss  dword ptr [rsi], xmm0
    vmulss  xmm0, xmm7, dword ptr [rsp+160h+axis+1Ch]
    vaddss  xmm1, xmm4, xmm0
    vmulss  xmm0, xmm5, dword ptr [rsp+160h+axis+8]
    vaddss  xmm3, xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rsi+4], xmm1
    vmulss  xmm1, xmm7, dword ptr [rsp+160h+axis+20h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rsi+8], xmm2
    vmovaps xmm6, [rsp+160h+var_48+8]
    vmovaps xmm7, [rsp+160h+var_58+8]
  }
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
  char v56; 
  char v57; 
  const dvar_t *v63; 
  tmat33_t<vec3_t> axis; 
  char v112; 
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
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm0, dword ptr [rcx+18h]
    vmovss  xmm10, dword ptr [rcx+0Ch]
    vmovss  xmm11, dword ptr [rcx+10h]
    vmovss  xmm14, dword ptr [rcx+14h]
    vmovss  xmm1, dword ptr [rcx+1Ch]
    vmovss  xmm12, dword ptr [rcx]
    vmovss  xmm13, dword ptr [rcx+4]
    vmovss  xmm15, dword ptr [rcx+8]
    vsubss  xmm9, xmm0, xmm10
    vmovss  xmm0, dword ptr [rcx+20h]
  }
  _RDI = outAimTarget;
  _RBP = node;
  __asm
  {
    vsubss  xmm8, xmm0, xmm14
    vsubss  xmm7, xmm1, xmm11
  }
  AnglesToAxis(&node->m_ladderAngles, &axis);
  __asm
  {
    vmulss  xmm1, xmm9, xmm9
    vmulss  xmm0, xmm7, xmm7
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, xmm8
    vaddss  xmm6, xmm2, xmm1
    vmovss  xmm2, dword ptr [rbp+38h]; handDistance
  }
  *(double *)&_XMM0 = BG_Ladder_GetScrubOffset(&_RBP->m_ladderBottom, &_RBP->m_ladderTop, *(float *)&_XMM2);
  __asm
  {
    vsubss  xmm1, xmm12, xmm10
    vmulss  xmm4, xmm1, xmm9
    vsubss  xmm2, xmm13, xmm11
    vmulss  xmm3, xmm2, xmm7
    vaddss  xmm5, xmm4, xmm3
    vsubss  xmm1, xmm15, xmm14
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm3, xmm5, xmm2
    vdivss  xmm4, xmm3, xmm6
    vmovss  xmm3, dword ptr [rbp+38h]; handDistance
    vsqrtss xmm9, xmm6, xmm6
    vmulss  xmm1, xmm4, xmm9
    vaddss  xmm2, xmm0, xmm1
    vmovss  xmm0, cs:__real@3f000000
    vdivss  xmm1, xmm0, xmm3
    vmulss  xmm2, xmm1, xmm2
    vxorps  xmm8, xmm8, xmm8
    vroundss xmm8, xmm8, xmm2, 1
  }
  *(double *)&_XMM0 = BG_Ladder_GetTargetAnimationTime(&_RBP->m_ladderAnchor, &_RBP->m_ladderBottom, &_RBP->m_ladderTop, *(float *)&_XMM3);
  __asm { vmovss  xmm7, cs:__real@40000000 }
  _RBX = DCONST_DVARFLT_xanim_ladder_aim_rung_one_time;
  __asm
  {
    vmulss  xmm1, xmm7, dword ptr [rbp+38h]
    vdivss  xmm10, xmm1, dword ptr [rbp+34h]
    vmovaps xmm6, xmm0
  }
  if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_one_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_one_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v56 | v57 )
  {
    __asm { vmovss  xmm2, cs:__real@bf800000 }
  }
  else
  {
    _RBX = DCONST_DVARFLT_xanim_ladder_aim_rung_two_time;
    if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_two_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_two_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    if ( v56 | v57 )
    {
      __asm { vxorps  xmm2, xmm2, xmm2 }
    }
    else
    {
      _RBX = DCONST_DVARFLT_xanim_ladder_aim_rung_three_time;
      if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_three_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_three_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( v56 | v57 )
      {
        __asm { vmovss  xmm2, cs:__real@3f800000 }
      }
      else
      {
        v63 = DCONST_DVARFLT_xanim_ladder_aim_rung_four_time;
        if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_four_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_four_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v63);
        __asm
        {
          vcmpless xmm1, xmm6, dword ptr [rbx+28h]
          vmovss  xmm0, cs:__real@40400000
          vblendvps xmm2, xmm0, xmm7, xmm1
        }
      }
    }
  }
  __asm
  {
    vdivss  xmm1, xmm9, dword ptr [rbp+34h]
    vmulss  xmm0, xmm10, xmm8
    vaddss  xmm2, xmm0, xmm2
    vminss  xmm2, xmm2, xmm1
    vmulss  xmm4, xmm2, dword ptr [rbp+34h]
    vmulss  xmm1, xmm4, dword ptr [rsp+148h+axis+18h]
    vaddss  xmm2, xmm1, dword ptr [rbp+0Ch]
    vmulss  xmm1, xmm4, dword ptr [rsp+148h+axis+1Ch]
    vmovss  dword ptr [rdi], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbp+10h]
    vmulss  xmm1, xmm4, dword ptr [rsp+148h+axis+20h]
    vmovss  dword ptr [rdi+4], xmm2
    vaddss  xmm2, xmm1, dword ptr [rbp+14h]
    vmovss  dword ptr [rdi+8], xmm2
  }
  _RBX = DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset;
  if ( !DCONST_DVARVEC3_xanim_ladder_rung_wrist_ik_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_rung_wrist_ik_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm5, dword ptr [rbx+28h]
    vmovss  xmm6, dword ptr [rbx+2Ch]
    vmovss  xmm7, dword ptr [rbx+30h]
    vmulss  xmm0, xmm5, dword ptr [rsp+148h+axis]
    vaddss  xmm3, xmm0, dword ptr [rdi]
    vmulss  xmm2, xmm6, dword ptr [rsp+148h+axis+0Ch]
    vmulss  xmm1, xmm7, dword ptr [rsp+148h+axis+18h]
    vmulss  xmm0, xmm5, dword ptr [rsp+148h+axis+4]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [rdi+4]
    vmulss  xmm0, xmm5, dword ptr [rsp+148h+axis+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm7, dword ptr [rsp+148h+axis+1Ch]
    vmovss  dword ptr [rdi], xmm2
    vmulss  xmm2, xmm6, dword ptr [rsp+148h+axis+10h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm3, xmm0, dword ptr [rdi+8]
    vaddss  xmm2, xmm4, xmm1
    vmulss  xmm1, xmm7, dword ptr [rsp+148h+axis+20h]
    vmovss  dword ptr [rdi+4], xmm2
    vmulss  xmm2, xmm6, dword ptr [rsp+148h+axis+14h]
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
  }
  _R11 = &v112;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
XAnimNode_IKLadder_GetBestAimTarget
==============
*/
void XAnimNode_IKLadder_GetBestAimTarget(const vec3_t *bonePos, XAnimNode_IKLadderWM *node, vec3_t *outBoneTargetPos)
{
  char v37; 
  char v38; 
  tmat33_t<vec3_t> axis; 
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
    vmovaps xmmword ptr [rax-68h], xmm11
  }
  _RBX = outBoneTargetPos;
  _RDI = node;
  _RSI = bonePos;
  if ( !node && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_ladder_wm.cpp", 90, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  AnglesToAxis(&_RDI->m_ladderAngles, &axis);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+0Ch]
    vmovss  xmm0, dword ptr [rsi]
    vmovss  xmm3, dword ptr [rdi+10h]
    vmovss  xmm5, dword ptr [rdi+14h]
    vmovss  xmm4, dword ptr [rsi+8]
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  xmm6, dword ptr [rdi+40h]
    vmovss  xmm9, dword ptr [rsp+0C8h+axis+0Ch]
    vmovss  xmm10, dword ptr [rsp+0C8h+axis+10h]
    vmovss  xmm11, dword ptr [rsp+0C8h+axis+14h]
    vsubss  xmm0, xmm0, xmm2
    vmulss  xmm2, xmm0, xmm9
    vsubss  xmm1, xmm1, xmm3
    vmulss  xmm0, xmm1, xmm10
    vaddss  xmm3, xmm2, xmm0
    vmovss  dword ptr [rbx], xmm6
    vmovss  xmm7, dword ptr [rdi+44h]
    vsubss  xmm2, xmm4, xmm5
    vmovss  dword ptr [rbx+4], xmm7
    vmovss  xmm8, dword ptr [rdi+48h]
    vmulss  xmm0, xmm2, xmm11
    vaddss  xmm4, xmm3, xmm0
    vmovss  xmm3, cs:__real@3f000000
    vandps  xmm1, xmm4, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovss  dword ptr [rbx+8], xmm8
    vmovss  xmm5, dword ptr [rdi+30h]
    vmulss  xmm0, xmm5, xmm3
    vcomiss xmm1, xmm0
  }
  if ( !(v37 | v38) )
  {
    __asm
    {
      vxorps  xmm2, xmm5, cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm0, xmm0
      vcmpless xmm1, xmm0, xmm4
      vblendvps xmm1, xmm2, xmm5, xmm1
      vmulss  xmm4, xmm1, xmm3
    }
  }
  __asm
  {
    vmulss  xmm0, xmm9, xmm4
    vaddss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm10, xmm4
    vaddss  xmm0, xmm2, xmm7
    vmovss  dword ptr [rbx], xmm1
    vmulss  xmm1, xmm11, xmm4
    vaddss  xmm2, xmm1, xmm8
    vmovss  dword ptr [rbx+8], xmm2
    vmovss  dword ptr [rbx+4], xmm0
  }
  _R11 = &v58;
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
XAnimNode_IKLadder_GetLocalAimRungIndex
==============
*/

float __fastcall XAnimNode_IKLadder_GetLocalAimRungIndex(double animationTime)
{
  char v4; 
  char v5; 
  const dvar_t *v9; 

  _RBX = DCONST_DVARFLT_xanim_ladder_aim_rung_one_time;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_one_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_one_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vcomiss xmm6, dword ptr [rbx+28h] }
  if ( v4 | v5 )
  {
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  }
  else
  {
    _RBX = DCONST_DVARFLT_xanim_ladder_aim_rung_two_time;
    if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_two_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_two_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vcomiss xmm6, dword ptr [rbx+28h] }
    if ( v4 | v5 )
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
    }
    else
    {
      _RBX = DCONST_DVARFLT_xanim_ladder_aim_rung_three_time;
      if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_three_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_three_time") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm { vcomiss xmm6, dword ptr [rbx+28h] }
      if ( v4 | v5 )
      {
        __asm { vmovss  xmm0, cs:__real@3f800000 }
      }
      else
      {
        v9 = DCONST_DVARFLT_xanim_ladder_aim_rung_four_time;
        if ( !DCONST_DVARFLT_xanim_ladder_aim_rung_four_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ladder_aim_rung_four_time") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        __asm
        {
          vcmpless xmm2, xmm6, dword ptr [rbx+28h]
          vmovss  xmm1, cs:__real@40000000
          vmovss  xmm0, cs:__real@40400000
          vblendvps xmm0, xmm0, xmm1, xmm2
        }
      }
    }
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return *(float *)&_XMM0;
}


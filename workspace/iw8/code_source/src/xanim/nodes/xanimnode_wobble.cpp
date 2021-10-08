/*
==============
XAnimWobbleParams::IsValid
==============
*/

bool __fastcall XAnimWobbleParams::IsValid(XAnimWobbleParams *this)
{
  return ?IsValid@XAnimWobbleParams@@QEBA_NXZ(this);
}

/*
==============
XAnimWobble_Debug_text
==============
*/

void __fastcall XAnimWobble_Debug_text(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  ?XAnimWobble_Debug_text@@YAXPEAXPEBUXAnimInfo@@PEADHHPEAH@Z(nodeData, animInfo, buffer, size, depth, inoutPos);
}

/*
==============
XAnimWobble_InitializeBoneIndices
==============
*/

void __fastcall XAnimWobble_InitializeBoneIndices(XAnimWobble *pNode, const DObj *obj)
{
  ?XAnimWobble_InitializeBoneIndices@@YAXPEAUXAnimWobble@@PEBUDObj@@@Z(pNode, obj);
}

/*
==============
XAnimWobble_Register
==============
*/

void XAnimWobble_Register(void)
{
  ?XAnimWobble_Register@@YAXXZ();
}

/*
==============
XAnimWobble_Init
==============
*/
void XAnimWobble_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  *(_QWORD *)nodeData = 0i64;
  *((_QWORD *)nodeData + 1) = 0i64;
  *((_DWORD *)nodeData + 4) = 0;
  *((_DWORD *)nodeData + 5) = -16843010;
  *((_BYTE *)nodeData + 56) = 0;
}

/*
==============
XAnimWobble_Destroy
==============
*/
void XAnimWobble_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimWobble_Update
==============
*/
void XAnimWobble_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex)
{
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 139, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 140, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 141, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !*((_BYTE *)nodeData + 56) )
    *((_BYTE *)nodeData + 56) = 1;
}

/*
==============
XAnimWobble_Calc
==============
*/
void XAnimWobble_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  const dvar_t *v16; 
  XAnimCalcAnimInfo *v17; 
  unsigned int v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned __int8 *boneIndices; 
  const float4 *fmt; 
  const float4 *outT; 
  float v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  XAnimWobbleParams params; 
  XAnimCalcBuffer *v63; 
  const DObj *v64; 
  vec4_t out; 
  vec3_t v66; 
  __int128 v67; 
  DObjPartBits savedPartBits; 
  tmat33_t<vec3_t> outRot; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm8
    vmovss  xmm8, [rbp+80h+weightScale]
    vcomiss xmm8, cs:__real@3a83126f
  }
  v64 = obj;
  v63 = destBuffer;
  _RDI = (XAnimWobble *)nodeData;
  v16 = DCONST_DVARBOOL_xanim_disableWobbleNodes;
  if ( !DCONST_DVARBOOL_xanim_disableWobbleNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableWobbleNodes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( !v16->current.enabled )
  {
    params.bNormQuat = bNormQuat;
    v17 = animCalcInfo;
    __asm { vmovss  [rsp+180h+params.weightScale], xmm8 }
    params.pNode = _RDI;
    params.animCalcInfo = animCalcInfo;
    params.obj = obj;
    params.animInfo = animInfo;
    params.destBuffer = destBuffer;
    XAnimWobble_PreCalc(&params, &savedPartBits);
    v18 = 0;
    __asm { vmovaps [rsp+180h+var_50], xmm6 }
    v19 = 0;
    __asm { vmovaps [rsp+180h+var_60], xmm7 }
    v20 = 0i64;
    _R12 = &s_staticBoneInfo[0].weight[1];
    do
    {
      if ( ((0x80000000 >> (_RDI->boneIndices[v20] & 0x1F)) & v17->ignorePartBits.array[(unsigned __int64)_RDI->boneIndices[v20] >> 5]) == 0 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [r12-4]
          vmulss  xmm1, xmm0, dword ptr [rdi]
          vmulss  xmm3, xmm1, cs:s_weights
          vmovss  xmm2, dword ptr [rdi+4]
          vmulss  xmm0, xmm2, dword ptr [r12]
          vmulss  xmm1, xmm0, cs:s_weights+4
          vmovss  xmm2, dword ptr [r12+4]
          vmulss  xmm0, xmm2, dword ptr [rdi+8]
          vmovss  xmm2, dword ptr [rdi+0Ch]; angleDir
          vaddss  xmm4, xmm3, xmm1
          vmulss  xmm1, xmm0, cs:s_weights+8
          vaddss  xmm3, xmm4, xmm1
          vmulss  xmm1, xmm3, dword ptr [r10+rcx*4]; v
        }
        XAnimWobble_CalcBone(&params, *(float *)&_XMM1, *(float *)&_XMM2, v19, &outRot, &v66);
        AxisToQuat(&outRot, &out);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+80h+out]
          vmovss  [rsp+180h+var_140], xmm0
        }
        if ( (v58 & 0x7F800000) == 2139095040 )
          goto LABEL_35;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+80h+out+4]
          vmovss  [rsp+180h+var_140], xmm0
        }
        if ( (v59 & 0x7F800000) == 2139095040 )
          goto LABEL_35;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+80h+out+8]
          vmovss  [rsp+180h+var_140], xmm0
        }
        if ( (v60 & 0x7F800000) == 2139095040 )
          goto LABEL_35;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+80h+out+0Ch]
          vmovss  [rsp+180h+var_140], xmm0
        }
        if ( (v61 & 0x7F800000) == 2139095040 )
        {
LABEL_35:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 384, ASSERT_TYPE_SANITY, "( !IS_NAN( ( newQuat )[0] ) && !IS_NAN( ( newQuat )[1] ) && !IS_NAN( ( newQuat )[2] ) && !IS_NAN( ( newQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( newQuat )[0] ) && !IS_NAN( ( newQuat )[1] ) && !IS_NAN( ( newQuat )[2] ) && !IS_NAN( ( newQuat )[3] )") )
            __debugbreak();
        }
        __asm
        {
          vmovups xmm7, xmmword ptr [rbp+80h+out]
          vcmpneqps xmm0, xmm7, xmm7
          vmovmskps eax, xmm0
        }
        if ( _EAX )
        {
          outT = (const float4 *)"!Float4IsNaN( _newQuat )";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 386, ASSERT_TYPE_SANITY, "( !Float4IsNaN( _newQuat ) )", (const char *)&queryFormat) )
            __debugbreak();
        }
        __asm { vmovss  xmm0, dword ptr [rbp+80h+var_E8] }
        HIDWORD(v67) = 0;
        __asm
        {
          vmovups xmm6, xmmword ptr [rbp-50h]
          vmovss  xmm6, xmm6, xmm0
          vinsertps xmm6, xmm6, dword ptr [rbp+80h+var_E8+4], 80h+var_70
          vinsertps xmm6, xmm6, dword ptr [rbp+80h+var_E8+8], 80h+var_60
          vcmpneqps xmm0, xmm6, xmm6
          vmovmskps eax, xmm0
          vmovups xmmword ptr [rbp-50h], xmm6
        }
        if ( _EAX )
        {
          outT = (const float4 *)"!Float4IsNaN( _newTrans )";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 388, ASSERT_TYPE_SANITY, "( !Float4IsNaN( _newTrans ) )", (const char *)&queryFormat) )
            __debugbreak();
        }
        _RDI = params.pNode;
        __asm
        {
          vmovups xmm1, xmm6
          vmovups xmm0, xmm7
          vmovss  [rsp+180h+var_150], xmm8
        }
        XAnimSetLocalBoneTransform(animCalcInfo, v64, v63, params.pNode->boneIndices[v20], fmt, outT, v57);
        v17 = params.animCalcInfo;
      }
      ++v19;
      ++v20;
      _R12 += 6;
    }
    while ( v19 < 4 );
    __asm
    {
      vmovaps xmm7, [rsp+180h+var_60]
      vmovaps xmm6, [rsp+180h+var_50]
    }
    if ( (!_RDI || !v17 || !params.obj || !params.destBuffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 229, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
      __debugbreak();
    boneIndices = _RDI->boneIndices;
    while ( *boneIndices == 0xFE )
    {
      ++v18;
      ++boneIndices;
      if ( v18 >= 4 )
        goto LABEL_32;
    }
    bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v17->partBits, &savedPartBits);
  }
LABEL_32:
  __asm { vmovaps xmm8, [rsp+180h+var_70] }
}

/*
==============
XAnimWobble_Read
==============
*/
void XAnimWobble_Read(void *nodeData, MemoryFile *memFile)
{
  char p; 

  _RDI = (char *)nodeData;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RDI[56] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+8], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+0Ch], xmm0 }
  MemFile_ReadData(memFile, 0x20ui64, _RDI + 24);
  *((_DWORD *)_RDI + 5) = -16843010;
}

/*
==============
XAnimWobble_Write
==============
*/
void XAnimWobble_Write(void *nodeData, MemoryFile *memFile)
{
  char p; 

  p = *((_BYTE *)nodeData + 56);
  _RBX = (char *)nodeData;
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, _RBX);
  __asm { vmovss  xmm1, dword ptr [rbx+0Ch]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  MemFile_WriteData(memFile, 0x20ui64, _RBX + 24);
}

/*
==============
XAnimWobble_PostParse
==============
*/
char XAnimWobble_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  return 1;
}

/*
==============
XAnimWobble_PrintDebug
==============
*/
void XAnimWobble_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 452, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 453, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( size <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 454, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 455, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 456, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 439, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
}

/*
==============
XAnimWobbleParams::IsValid
==============
*/
bool XAnimWobbleParams::IsValid(XAnimWobbleParams *this)
{
  return this->pNode && this->animCalcInfo && this->obj && this->destBuffer;
}

/*
==============
XAnimWobble_CalcBone
==============
*/

void __fastcall XAnimWobble_CalcBone(const XAnimWobbleParams *params, double v, double angleDir, unsigned int boneNdx, tmat33_t<vec3_t> *outRot, vec3_t *outT)
{
  __int64 v12; 
  unsigned __int8 v21; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int v73; 
  int v74; 
  int v75; 
  int v76; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  int v82; 
  int v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  float c; 
  float s; 
  float4 s_8; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> in1; 
  float4 outModelTranslation; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 
  char v99; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _RDI = outRot;
  _R14 = outT;
  __asm { vmovaps xmm0, xmm2; degrees }
  v12 = boneNdx;
  __asm { vmovaps xmm6, xmm1 }
  SinCosDeg(*(float *)&_XMM0, &s, &c);
  __asm
  {
    vmulss  xmm1, xmm6, [rsp+140h+c]
    vmulss  xmm0, xmm1, dword ptr [rax+rcx*8]
    vmulss  xmm1, xmm6, [rsp+140h+s]
    vmulss  xmm1, xmm1, dword ptr [rax+rcx*8+4]
    vxorps  xmm7, xmm0, cs:__xmm@80000000800000008000000080000000
    vxorps  xmm6, xmm1, cs:__xmm@80000000800000008000000080000000
    vmovss  [rsp+140h+var_110], xmm7
  }
  if ( (v56 & 0x7F800000) == 2139095040 )
    goto LABEL_64;
  __asm { vmovss  [rsp+140h+var_110], xmm6 }
  if ( (v57 & 0x7F800000) == 2139095040 )
  {
LABEL_64:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 325, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localOscillAngles )[0] ) && !IS_NAN( ( localOscillAngles )[1] ) && !IS_NAN( ( localOscillAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localOscillAngles )[0] ) && !IS_NAN( ( localOscillAngles )[1] ) && !IS_NAN( ( localOscillAngles )[2] )") )
      __debugbreak();
  }
  v21 = params->pNode->boneIndices[v12];
  if ( !XAnimWobbleParams::IsValid((XAnimWobbleParams *)params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 155, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  if ( v21 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 156, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v21, &s_8, &outModelTranslation);
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp+40h+var_90.v]
    vmovups xmm0, xmmword ptr [rsp+140h+s+8]
    vmovss  [rsp+140h+var_CC], xmm1
    vextractps [rsp+140h+var_C8], xmm1, 1
    vextractps [rsp+140h+var_C4], xmm1, 2
    vmovups xmmword ptr [rbp+40h+quat], xmm0
  }
  QuatToAxis(&quat, &axis);
  MatrixCopy33(&axis, &dst);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+dst]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 )
    goto LABEL_65;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+dst+4]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
    goto LABEL_65;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+dst+8]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v60 & 0x7F800000) == 2139095040 )
  {
LABEL_65:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 331, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneLocalT[0] )[0] ) && !IS_NAN( ( boneLocalT[0] )[1] ) && !IS_NAN( ( boneLocalT[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneLocalT[0] )[0] ) && !IS_NAN( ( boneLocalT[0] )[1] ) && !IS_NAN( ( boneLocalT[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+dst+0Ch]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v61 & 0x7F800000) == 2139095040 )
    goto LABEL_66;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+dst+10h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v62 & 0x7F800000) == 2139095040 )
    goto LABEL_66;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+dst+14h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v63 & 0x7F800000) == 2139095040 )
  {
LABEL_66:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 332, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneLocalT[1] )[0] ) && !IS_NAN( ( boneLocalT[1] )[1] ) && !IS_NAN( ( boneLocalT[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneLocalT[1] )[0] ) && !IS_NAN( ( boneLocalT[1] )[1] ) && !IS_NAN( ( boneLocalT[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+dst+18h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v64 & 0x7F800000) == 2139095040 )
    goto LABEL_67;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+dst+1Ch]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v65 & 0x7F800000) == 2139095040 )
    goto LABEL_67;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+140h+dst+20h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v66 & 0x7F800000) == 2139095040 )
  {
LABEL_67:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 333, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneLocalT[2] )[0] ) && !IS_NAN( ( boneLocalT[2] )[1] ) && !IS_NAN( ( boneLocalT[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneLocalT[2] )[0] ) && !IS_NAN( ( boneLocalT[2] )[1] ) && !IS_NAN( ( boneLocalT[2] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+140h+var_F8], xmm0
    vmovss  [rsp+140h+s+8], xmm6
    vmovss  [rsp+140h+s+0Ch], xmm7
  }
  AnglesToAxis((const vec3_t *)&s_8, &in1);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+40h+in1]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v67 & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+40h+in1+4]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v68 & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+40h+in1+8]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v69 & 0x7F800000) == 2139095040 )
  {
LABEL_68:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 336, ASSERT_TYPE_SANITY, "( !IS_NAN( ( additiveRotation[0] )[0] ) && !IS_NAN( ( additiveRotation[0] )[1] ) && !IS_NAN( ( additiveRotation[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( additiveRotation[0] )[0] ) && !IS_NAN( ( additiveRotation[0] )[1] ) && !IS_NAN( ( additiveRotation[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+40h+in1+0Ch]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v70 & 0x7F800000) == 2139095040 )
    goto LABEL_69;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+40h+in1+10h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v71 & 0x7F800000) == 2139095040 )
    goto LABEL_69;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+40h+in1+14h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v72 & 0x7F800000) == 2139095040 )
  {
LABEL_69:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 337, ASSERT_TYPE_SANITY, "( !IS_NAN( ( additiveRotation[1] )[0] ) && !IS_NAN( ( additiveRotation[1] )[1] ) && !IS_NAN( ( additiveRotation[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( additiveRotation[1] )[0] ) && !IS_NAN( ( additiveRotation[1] )[1] ) && !IS_NAN( ( additiveRotation[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+40h+in1+18h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v73 & 0x7F800000) == 2139095040 )
    goto LABEL_70;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+40h+in1+1Ch]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v74 & 0x7F800000) == 2139095040 )
    goto LABEL_70;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+40h+in1+20h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v75 & 0x7F800000) == 2139095040 )
  {
LABEL_70:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 338, ASSERT_TYPE_SANITY, "( !IS_NAN( ( additiveRotation[2] )[0] ) && !IS_NAN( ( additiveRotation[2] )[1] ) && !IS_NAN( ( additiveRotation[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( additiveRotation[2] )[0] ) && !IS_NAN( ( additiveRotation[2] )[1] ) && !IS_NAN( ( additiveRotation[2] )[2] )") )
      __debugbreak();
  }
  MatrixMultiply(&in1, &dst, outRot);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v76 & 0x7F800000) == 2139095040 )
    goto LABEL_71;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v77 & 0x7F800000) == 2139095040 )
    goto LABEL_71;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v78 & 0x7F800000) == 2139095040 )
  {
LABEL_71:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 341, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRot[0] )[0] ) && !IS_NAN( ( outRot[0] )[1] ) && !IS_NAN( ( outRot[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRot[0] )[0] ) && !IS_NAN( ( outRot[0] )[1] ) && !IS_NAN( ( outRot[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v79 & 0x7F800000) == 2139095040 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v80 & 0x7F800000) == 2139095040 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v81 & 0x7F800000) == 2139095040 )
  {
LABEL_72:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 342, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRot[1] )[0] ) && !IS_NAN( ( outRot[1] )[1] ) && !IS_NAN( ( outRot[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRot[1] )[0] ) && !IS_NAN( ( outRot[1] )[1] ) && !IS_NAN( ( outRot[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v82 & 0x7F800000) == 2139095040 )
    goto LABEL_73;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v83 & 0x7F800000) == 2139095040 )
    goto LABEL_73;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  [rsp+140h+var_110], xmm0
  }
  if ( (v84 & 0x7F800000) == 2139095040 )
  {
LABEL_73:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 343, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRot[2] )[0] ) && !IS_NAN( ( outRot[2] )[1] ) && !IS_NAN( ( outRot[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRot[2] )[0] ) && !IS_NAN( ( outRot[2] )[1] ) && !IS_NAN( ( outRot[2] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, [rsp+140h+var_CC]
    vmovss  xmm2, [rsp+140h+var_C8]
    vmovss  xmm1, [rsp+140h+var_C4]
    vmovss  [rsp+140h+var_110], xmm0
    vmovss  dword ptr [r14], xmm0
    vmovss  dword ptr [r14+4], xmm2
    vmovss  dword ptr [r14+8], xmm1
  }
  if ( (v85 & 0x7F800000) == 2139095040 )
    goto LABEL_74;
  __asm { vmovss  [rsp+140h+var_110], xmm2 }
  if ( (v86 & 0x7F800000) == 2139095040 )
    goto LABEL_74;
  __asm { vmovss  [rsp+140h+var_110], xmm1 }
  if ( (v87 & 0x7F800000) == 2139095040 )
  {
LABEL_74:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 346, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outT )[0] ) && !IS_NAN( ( outT )[1] ) && !IS_NAN( ( outT )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outT )[0] ) && !IS_NAN( ( outT )[1] ) && !IS_NAN( ( outT )[2] )") )
      __debugbreak();
  }
  _R11 = &v99;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
XAnimWobble_Debug_text
==============
*/
void XAnimWobble_Debug_text(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size)
{
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 439, ASSERT_TYPE_ASSERT, "(pNode)", (const char *)&queryFormat, "pNode") )
    __debugbreak();
}

/*
==============
XAnimWobble_InitializeBoneIndices
==============
*/
void XAnimWobble_InitializeBoneIndices(XAnimWobble *pNode, const DObj *obj)
{
  unsigned __int8 *boneIndices; 
  XAnimWobbleBoneInfo *v5; 
  __int64 v6; 
  int modelIndex; 

  boneIndices = pNode->boneIndices;
  v5 = s_staticBoneInfo;
  v6 = 0i64;
  do
  {
    if ( *boneIndices == 0xFE && !DObjGetBoneIndexInternal_35(obj, *v5->boneName, &pNode->boneIndices[v6], &modelIndex) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14419F670, 716i64, (unsigned int)v6);
    v6 = (unsigned int)(v6 + 1);
    ++boneIndices;
    ++v5;
  }
  while ( (unsigned int)v6 < 4 );
}

/*
==============
XAnimWobble_PreCalc
==============
*/
void XAnimWobble_PreCalc(XAnimWobbleParams *params, DObjPartBits *savedPartBits)
{
  XAnimWobble *pNode; 
  XAnimWobbleBoneInfo *v5; 
  DObj *v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned __int8 *boneIndices; 
  unsigned __int8 *v10; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int8 *v14; 
  unsigned __int8 v15; 
  unsigned int v16; 
  unsigned __int64 v17; 
  DObjPartBits *p_partBits; 
  unsigned int v19; 
  DObjPartBits *v20; 
  unsigned __int64 v21; 
  unsigned int v22; 
  DObj *v23; 
  int modelIndex; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v33; 
  DObj *obj; 

  v33 = savedPartBits;
  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  _R12 = params;
  if ( !XAnimWobbleParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 188, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  pNode = _R12->pNode;
  v5 = s_staticBoneInfo;
  v6 = (DObj *)_R12->obj;
  v7 = 0;
  obj = v6;
  v8 = 0;
  boneIndices = pNode->boneIndices;
  v10 = pNode->boneIndices;
  do
  {
    if ( *v10 == 0xFE && !DObjGetBoneIndexInternal_35(v6, *v5->boneName, &pNode->boneIndices[v8], &modelIndex) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14419F670, 716i64, v8);
    ++v8;
    ++v10;
    ++v5;
  }
  while ( v8 < 4 );
  v11 = v33;
  v12 = 4i64;
  v13 = 4i64;
  v14 = pNode->boneIndices;
  do
  {
    v15 = *v14;
    if ( *v14 != 0xFE )
    {
      v16 = 0x80000000 >> (v15 & 0x1F);
      v17 = (unsigned __int64)v15 >> 5;
      if ( (v16 & _R12->animCalcInfo->ignorePartBits.array[v17]) == 0 )
        pNode->partBits.array[v17] |= v16;
    }
    ++v14;
    --v13;
  }
  while ( v13 );
  p_partBits = &pNode->partBits;
  v19 = 0;
  v20 = &pNode->partBits;
  do
  {
    if ( v20->array[0] )
    {
      v23 = obj;
      goto LABEL_22;
    }
    ++v19;
    v20 = (DObjPartBits *)((char *)v20 + 4);
  }
  while ( v19 < 8 );
  do
  {
    v21 = (unsigned __int64)*boneIndices >> 5;
    v22 = 0x80000000 >> (*boneIndices & 0x1F);
    if ( (v22 & _R12->animCalcInfo->ignorePartBits.array[v21]) == 0 )
      p_partBits->array[v21] |= v22;
    ++boneIndices;
    --v12;
  }
  while ( v12 );
  v23 = obj;
  DObjCompleteHierarchyBits(obj, &pNode->partBits);
LABEL_22:
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v11, _R12->animCalcInfo->partBits);
  _RDI = _R12->animCalcInfo->partBits;
  _RSI = (char *)p_partBits - (char *)_RDI;
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rsi+rdi]
      vlddqu  xmm0, xmmword ptr [rdi]
      vpor    xmm6, xmm0, xmm6
      vmovdqu xmmword ptr [rdi], xmm6
    }
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v7;
  }
  while ( v7 < 2 );
  __asm { vmovss  xmm3, dword ptr [r12+20h]; weightScale }
  XAnimCalcDefaultBlendNode(_R12->animCalcInfo, v23, _R12->animInfo, *(float *)&_XMM3, _R12->bNormQuat, _R12->destBuffer, LINEAR);
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
XAnimWobble_Register
==============
*/
void XAnimWobble_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimWobble>::ms_typeInfo);
}


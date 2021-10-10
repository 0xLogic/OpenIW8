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
  __int128 v7; 
  __int128 v8; 
  const dvar_t *v13; 
  XAnimCalcAnimInfo *v14; 
  int v15; 
  unsigned int v16; 
  __int64 v17; 
  float *v18; 
  int v19; 
  __int128 v24; 
  _BYTE *i; 
  const float4 *fmt; 
  const float4 *outT; 
  XAnimWobbleParams params; 
  XAnimCalcBuffer *v33; 
  const DObj *v34; 
  vec4_t out; 
  vec3_t v36; 
  __int128 v37; 
  DObjPartBits savedPartBits; 
  tmat33_t<vec3_t> outRot; 
  __int128 v40; 
  __int128 v41; 

  v34 = obj;
  v33 = destBuffer;
  if ( weightScale >= 0.001 )
  {
    v13 = DCONST_DVARBOOL_xanim_disableWobbleNodes;
    if ( !DCONST_DVARBOOL_xanim_disableWobbleNodes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_disableWobbleNodes") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( !v13->current.enabled )
    {
      params.bNormQuat = bNormQuat;
      v14 = animCalcInfo;
      params.weightScale = weightScale;
      params.pNode = (XAnimWobble *)nodeData;
      params.animCalcInfo = animCalcInfo;
      params.obj = obj;
      params.animInfo = animInfo;
      params.destBuffer = destBuffer;
      XAnimWobble_PreCalc(&params, &savedPartBits);
      v15 = 0;
      v41 = v7;
      v16 = 0;
      v40 = v8;
      v17 = 0i64;
      v18 = &s_staticBoneInfo[0].weight[1];
      do
      {
        if ( ((0x80000000 >> (*((_BYTE *)nodeData + v17 + 20) & 0x1F)) & v14->ignorePartBits.array[(unsigned __int64)*((unsigned __int8 *)nodeData + v17 + 20) >> 5]) == 0 )
        {
          v19 = *((_DWORD *)nodeData + 4);
          if ( v19 > 3 )
            v19 = 3;
          if ( v19 < 0 )
            v19 = 0;
          XAnimWobble_CalcBone(&params, (float)((float)((float)((float)(*(v18 - 1) * *(float *)nodeData) * s_weights[0]) + (float)((float)(*((float *)nodeData + 1) * *v18) * s_weights[1])) + (float)((float)(v18[1] * *((float *)nodeData + 2)) * s_weights[2])) * s_intensities[v17][v19], *((float *)nodeData + 3), v16, &outRot, &v36);
          AxisToQuat(&outRot, &out);
          if ( ((LODWORD(out.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(out.v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 384, ASSERT_TYPE_SANITY, "( !IS_NAN( ( newQuat )[0] ) && !IS_NAN( ( newQuat )[1] ) && !IS_NAN( ( newQuat )[2] ) && !IS_NAN( ( newQuat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( newQuat )[0] ) && !IS_NAN( ( newQuat )[1] ) && !IS_NAN( ( newQuat )[2] ) && !IS_NAN( ( newQuat )[3] )") )
            __debugbreak();
          _XMM7 = out;
          __asm
          {
            vcmpneqps xmm0, xmm7, xmm7
            vmovmskps eax, xmm0
          }
          if ( _EAX )
          {
            outT = (const float4 *)"!Float4IsNaN( _newQuat )";
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 386, ASSERT_TYPE_SANITY, "( !Float4IsNaN( _newQuat ) )", (const char *)&queryFormat) )
              __debugbreak();
          }
          HIDWORD(v37) = 0;
          v24 = v37;
          *(float *)&v24 = v36.v[0];
          _XMM6 = v24;
          __asm
          {
            vinsertps xmm6, xmm6, dword ptr [rbp+80h+var_E8+4], 80h+var_70
            vinsertps xmm6, xmm6, dword ptr [rbp+80h+var_E8+8], 80h+var_60
            vcmpneqps xmm0, xmm6, xmm6
            vmovmskps eax, xmm0
          }
          v37 = _XMM6;
          if ( _EAX )
          {
            outT = (const float4 *)"!Float4IsNaN( _newTrans )";
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 388, ASSERT_TYPE_SANITY, "( !Float4IsNaN( _newTrans ) )", (const char *)&queryFormat) )
              __debugbreak();
          }
          nodeData = params.pNode;
          XAnimSetLocalBoneTransform(animCalcInfo, v34, v33, params.pNode->boneIndices[v17], fmt, outT, weightScale);
          v14 = params.animCalcInfo;
        }
        ++v16;
        ++v17;
        v18 += 6;
      }
      while ( v16 < 4 );
      if ( (!nodeData || !v14 || !params.obj || !params.destBuffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 229, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
        __debugbreak();
      for ( i = (char *)nodeData + 20; *i == 0xFE; ++i )
      {
        if ( (unsigned int)++v15 >= 4 )
          return;
      }
      bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v14->partBits, &savedPartBits);
    }
  }
}

/*
==============
XAnimWobble_Read
==============
*/
void XAnimWobble_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  double v6; 
  double v7; 
  char p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 56) = p;
  Float = MemFile_ReadFloat(memFile);
  *(float *)nodeData = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 1) = *(float *)&v5;
  v6 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 2) = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 3) = *(float *)&v7;
  MemFile_ReadData(memFile, 0x20ui64, (char *)nodeData + 24);
  *((_DWORD *)nodeData + 5) = -16843010;
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
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, nodeData);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 3));
  MemFile_WriteData(memFile, 0x20ui64, (char *)nodeData + 24);
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
void XAnimWobble_CalcBone(const XAnimWobbleParams *params, float v, float angleDir, unsigned int boneNdx, tmat33_t<vec3_t> *outRot, vec3_t *outT)
{
  __int64 v6; 
  int wobbleIntensity; 
  __int64 v9; 
  float v10; 
  float v11; 
  unsigned __int8 v12; 
  float v14; 
  float v15; 
  int v16; 
  __int64 v17; 
  float s; 
  float4 s_8; 
  tmat33_t<vec3_t> dst; 
  float v21; 
  float v22; 
  float v23; 
  tmat33_t<vec3_t> in1; 
  float4 outModelTranslation; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  v6 = boneNdx;
  SinCosDeg(angleDir, &s, (float *)&v17 + 1);
  wobbleIntensity = params->pNode->wobbleIntensity;
  if ( wobbleIntensity > 3 )
    wobbleIntensity = 3;
  if ( wobbleIntensity < 0 )
    wobbleIntensity = 0;
  v9 = v6 + 4i64 * wobbleIntensity;
  v10 = (float)(v * *((float *)&v17 + 1)) * s_weightIntensityAngles[0][v9].v[0];
  v11 = (float)(v * s) * s_weightIntensityAngles[0][v9].v[1];
  LODWORD(v17) = LODWORD(v10) ^ _xmm;
  if ( ((LODWORD(v10) ^ (unsigned int)_xmm) & 0x7F800000) == 2139095040 || (LODWORD(v17) = LODWORD(v11) ^ _xmm, ((LODWORD(v11) ^ (unsigned int)_xmm) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 325, ASSERT_TYPE_SANITY, "( !IS_NAN( ( localOscillAngles )[0] ) && !IS_NAN( ( localOscillAngles )[1] ) && !IS_NAN( ( localOscillAngles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( localOscillAngles )[0] ) && !IS_NAN( ( localOscillAngles )[1] ) && !IS_NAN( ( localOscillAngles )[2] )", v17) )
      __debugbreak();
  }
  v12 = params->pNode->boneIndices[v6];
  if ( !XAnimWobbleParams::IsValid((XAnimWobbleParams *)params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 155, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  if ( v12 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 156, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v12, &s_8, &outModelTranslation);
  _XMM1 = outModelTranslation.v;
  v21 = outModelTranslation.v.m128_f32[0];
  __asm
  {
    vextractps [rsp+140h+var_C8], xmm1, 1
    vextractps [rsp+140h+var_C4], xmm1, 2
  }
  quat = (vec4_t)s_8.v;
  QuatToAxis(&quat, &axis);
  MatrixCopy33(&axis, &dst);
  *(float *)&v17 = dst.m[0].v[0];
  if ( (LODWORD(dst.m[0].v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v17 = dst.m[0].v[1], (LODWORD(dst.m[0].v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v17 = dst.m[0].v[2], (LODWORD(dst.m[0].v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 331, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneLocalT[0] )[0] ) && !IS_NAN( ( boneLocalT[0] )[1] ) && !IS_NAN( ( boneLocalT[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneLocalT[0] )[0] ) && !IS_NAN( ( boneLocalT[0] )[1] ) && !IS_NAN( ( boneLocalT[0] )[2] )", v17) )
      __debugbreak();
  }
  *(float *)&v17 = dst.m[1].v[0];
  if ( (LODWORD(dst.m[1].v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v17 = dst.m[1].v[1], (LODWORD(dst.m[1].v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v17 = dst.m[1].v[2], (LODWORD(dst.m[1].v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 332, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneLocalT[1] )[0] ) && !IS_NAN( ( boneLocalT[1] )[1] ) && !IS_NAN( ( boneLocalT[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneLocalT[1] )[0] ) && !IS_NAN( ( boneLocalT[1] )[1] ) && !IS_NAN( ( boneLocalT[1] )[2] )", v17) )
      __debugbreak();
  }
  *(float *)&v17 = dst.m[2].v[0];
  if ( (LODWORD(dst.m[2].v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v17 = dst.m[2].v[1], (LODWORD(dst.m[2].v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v17 = dst.m[2].v[2], (LODWORD(dst.m[2].v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 333, ASSERT_TYPE_SANITY, "( !IS_NAN( ( boneLocalT[2] )[0] ) && !IS_NAN( ( boneLocalT[2] )[1] ) && !IS_NAN( ( boneLocalT[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( boneLocalT[2] )[0] ) && !IS_NAN( ( boneLocalT[2] )[1] ) && !IS_NAN( ( boneLocalT[2] )[2] )", v17) )
      __debugbreak();
  }
  s_8.v.m128_f32[2] = 0.0;
  s_8.v.m128_i32[0] = LODWORD(v11) ^ _xmm;
  s_8.v.m128_i32[1] = LODWORD(v10) ^ _xmm;
  AnglesToAxis((const vec3_t *)&s_8, &in1);
  *(float *)&v17 = in1.m[0].v[0];
  if ( (LODWORD(in1.m[0].v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v17 = in1.m[0].v[1], (LODWORD(in1.m[0].v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v17 = in1.m[0].v[2], (LODWORD(in1.m[0].v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 336, ASSERT_TYPE_SANITY, "( !IS_NAN( ( additiveRotation[0] )[0] ) && !IS_NAN( ( additiveRotation[0] )[1] ) && !IS_NAN( ( additiveRotation[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( additiveRotation[0] )[0] ) && !IS_NAN( ( additiveRotation[0] )[1] ) && !IS_NAN( ( additiveRotation[0] )[2] )", v17) )
      __debugbreak();
  }
  *(float *)&v17 = in1.m[1].v[0];
  if ( (LODWORD(in1.m[1].v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v17 = in1.m[1].v[1], (LODWORD(in1.m[1].v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v17 = in1.m[1].v[2], (LODWORD(in1.m[1].v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 337, ASSERT_TYPE_SANITY, "( !IS_NAN( ( additiveRotation[1] )[0] ) && !IS_NAN( ( additiveRotation[1] )[1] ) && !IS_NAN( ( additiveRotation[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( additiveRotation[1] )[0] ) && !IS_NAN( ( additiveRotation[1] )[1] ) && !IS_NAN( ( additiveRotation[1] )[2] )", v17) )
      __debugbreak();
  }
  *(float *)&v17 = in1.m[2].v[0];
  if ( (LODWORD(in1.m[2].v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v17 = in1.m[2].v[1], (LODWORD(in1.m[2].v[1]) & 0x7F800000) == 2139095040) || (*(float *)&v17 = in1.m[2].v[2], (LODWORD(in1.m[2].v[2]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 338, ASSERT_TYPE_SANITY, "( !IS_NAN( ( additiveRotation[2] )[0] ) && !IS_NAN( ( additiveRotation[2] )[1] ) && !IS_NAN( ( additiveRotation[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( additiveRotation[2] )[0] ) && !IS_NAN( ( additiveRotation[2] )[1] ) && !IS_NAN( ( additiveRotation[2] )[2] )", v17) )
      __debugbreak();
  }
  MatrixMultiply(&in1, &dst, outRot);
  if ( ((LODWORD(outRot->m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outRot->m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outRot->m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 341, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRot[0] )[0] ) && !IS_NAN( ( outRot[0] )[1] ) && !IS_NAN( ( outRot[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRot[0] )[0] ) && !IS_NAN( ( outRot[0] )[1] ) && !IS_NAN( ( outRot[0] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(outRot->m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outRot->m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outRot->m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 342, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRot[1] )[0] ) && !IS_NAN( ( outRot[1] )[1] ) && !IS_NAN( ( outRot[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRot[1] )[0] ) && !IS_NAN( ( outRot[1] )[1] ) && !IS_NAN( ( outRot[1] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(outRot->m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outRot->m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outRot->m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 343, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outRot[2] )[0] ) && !IS_NAN( ( outRot[2] )[1] ) && !IS_NAN( ( outRot[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outRot[2] )[0] ) && !IS_NAN( ( outRot[2] )[1] ) && !IS_NAN( ( outRot[2] )[2] )") )
    __debugbreak();
  v14 = v22;
  v15 = v23;
  *(float *)&v17 = v21;
  v16 = LODWORD(v21) & 0x7F800000;
  outT->v[0] = v21;
  outT->v[1] = v14;
  outT->v[2] = v15;
  if ( v16 == 2139095040 || (*(float *)&v17 = v14, (LODWORD(v14) & 0x7F800000) == 2139095040) || (*(float *)&v17 = v15, (LODWORD(v15) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 346, ASSERT_TYPE_SANITY, "( !IS_NAN( ( outT )[0] ) && !IS_NAN( ( outT )[1] ) && !IS_NAN( ( outT )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( outT )[0] ) && !IS_NAN( ( outT )[1] ) && !IS_NAN( ( outT )[2] )", v17) )
      __debugbreak();
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
  XAnimWobbleBoneInfo *v4; 
  DObj *v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned __int8 *boneIndices; 
  unsigned __int8 *v9; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int8 *v13; 
  unsigned __int8 v14; 
  unsigned int v15; 
  unsigned __int64 v16; 
  DObjPartBits *p_partBits; 
  unsigned int v18; 
  DObjPartBits *v19; 
  unsigned __int64 v20; 
  unsigned int v21; 
  DObj *v22; 
  int modelIndex; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v29; 
  DObj *obj; 

  v29 = savedPartBits;
  if ( !XAnimWobbleParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_wobble.cpp", 188, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  pNode = params->pNode;
  v4 = s_staticBoneInfo;
  v5 = (DObj *)params->obj;
  v6 = 0;
  obj = v5;
  v7 = 0;
  boneIndices = pNode->boneIndices;
  v9 = pNode->boneIndices;
  do
  {
    if ( *v9 == 0xFE && !DObjGetBoneIndexInternal_35(v5, *v4->boneName, &pNode->boneIndices[v7], &modelIndex) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14419F670, 716i64, v7);
    ++v7;
    ++v9;
    ++v4;
  }
  while ( v7 < 4 );
  v10 = v29;
  v11 = 4i64;
  v12 = 4i64;
  v13 = pNode->boneIndices;
  do
  {
    v14 = *v13;
    if ( *v13 != 0xFE )
    {
      v15 = 0x80000000 >> (v14 & 0x1F);
      v16 = (unsigned __int64)v14 >> 5;
      if ( (v15 & params->animCalcInfo->ignorePartBits.array[v16]) == 0 )
        pNode->partBits.array[v16] |= v15;
    }
    ++v13;
    --v12;
  }
  while ( v12 );
  p_partBits = &pNode->partBits;
  v18 = 0;
  v19 = &pNode->partBits;
  do
  {
    if ( v19->array[0] )
    {
      v22 = obj;
      goto LABEL_22;
    }
    ++v18;
    v19 = (DObjPartBits *)((char *)v19 + 4);
  }
  while ( v18 < 8 );
  do
  {
    v20 = (unsigned __int64)*boneIndices >> 5;
    v21 = 0x80000000 >> (*boneIndices & 0x1F);
    if ( (v21 & params->animCalcInfo->ignorePartBits.array[v20]) == 0 )
      p_partBits->array[v20] |= v21;
    ++boneIndices;
    --v11;
  }
  while ( v11 );
  v22 = obj;
  DObjCompleteHierarchyBits(obj, &pNode->partBits);
LABEL_22:
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v10, params->animCalcInfo->partBits);
  _RDI = params->animCalcInfo->partBits;
  _RSI = (char *)p_partBits - (char *)_RDI;
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rsi+rdi]
      vlddqu  xmm0, xmmword ptr [rdi]
      vpor    xmm6, xmm0, xmm6
    }
    *(_OWORD *)_RDI->array = _XMM6;
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v6;
  }
  while ( v6 < 2 );
  XAnimCalcDefaultBlendNode(params->animCalcInfo, v22, params->animInfo, params->weightScale, params->bNormQuat, params->destBuffer, LINEAR);
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


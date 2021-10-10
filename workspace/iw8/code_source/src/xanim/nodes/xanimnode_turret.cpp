/*
==============
XAnimTurret_CreateNode
==============
*/

void __fastcall XAnimTurret_CreateNode(XAnim_s *anims, unsigned int animIndex)
{
  ?XAnimTurret_CreateNode@@YAXPEAUXAnim_s@@I@Z(anims, animIndex);
}

/*
==============
XAnimTurret_Register
==============
*/

void XAnimTurret_Register(void)
{
  ?XAnimTurret_Register@@YAXXZ();
}

/*
==============
XAnimTurret_GetFootTagName
==============
*/

scr_string_t __fastcall XAnimTurret_GetFootTagName(unsigned int legNdx)
{
  return ?XAnimTurret_GetFootTagName@@YA?AW4scr_string_t@@I@Z(legNdx);
}

/*
==============
XAnimTurret_FirstTimeInitWithDObj
==============
*/

void __fastcall XAnimTurret_FirstTimeInitWithDObj(XAnimTurret *pNode, const DObj *obj)
{
  ?XAnimTurret_FirstTimeInitWithDObj@@YAXPEAUXAnimTurret@@PEBUDObj@@@Z(pNode, obj);
}

/*
==============
XAnimTurret_GetKneeTagName
==============
*/

scr_string_t __fastcall XAnimTurret_GetKneeTagName(unsigned int legNdx)
{
  return ?XAnimTurret_GetKneeTagName@@YA?AW4scr_string_t@@I@Z(legNdx);
}

/*
==============
XAnimTurret_GetPelvisTagName
==============
*/

scr_string_t __fastcall XAnimTurret_GetPelvisTagName(unsigned int legNdx)
{
  return ?XAnimTurret_GetPelvisTagName@@YA?AW4scr_string_t@@I@Z(legNdx);
}

/*
==============
XAnimTurretParams::IsValid
==============
*/

bool __fastcall XAnimTurretParams::IsValid(XAnimTurretParams *this)
{
  return ?IsValid@XAnimTurretParams@@QEBA_NXZ(this);
}

/*
==============
XAnimTurret_GetBaseTagName
==============
*/

scr_string_t __fastcall XAnimTurret_GetBaseTagName()
{
  return ?XAnimTurret_GetBaseTagName@@YA?AW4scr_string_t@@XZ();
}

/*
==============
XAnimTurret_Init
==============
*/
void XAnimTurret_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  *((_WORD *)nodeData + 526) = 0;
  *((_QWORD *)nodeData + 79) = 0i64;
  *((_QWORD *)nodeData + 80) = 0i64;
  *((_QWORD *)nodeData + 81) = 0i64;
  *((_QWORD *)nodeData + 82) = 0i64;
  *((_QWORD *)nodeData + 83) = 0i64;
  *((_QWORD *)nodeData + 84) = 0i64;
  *(_BYTE *)nodeData = -2;
  *((_BYTE *)nodeData + 52) = -2;
  *((_BYTE *)nodeData + 104) = -2;
  *((_BYTE *)nodeData + 156) = -2;
  *((_BYTE *)nodeData + 208) = -2;
  *((_BYTE *)nodeData + 260) = -2;
  *((_BYTE *)nodeData + 312) = -2;
  *((_BYTE *)nodeData + 364) = -2;
  *((_BYTE *)nodeData + 416) = -2;
  *((_BYTE *)nodeData + 468) = -2;
  *((_BYTE *)nodeData + 520) = -2;
  *((_BYTE *)nodeData + 572) = -2;
  *((_DWORD *)nodeData + 247) = 0;
  memset_0((char *)nodeData + 700, 0, 0x90ui64);
}

/*
==============
XAnimTurret_Destroy
==============
*/
void XAnimTurret_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimTurret_Update
==============
*/
void XAnimTurret_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime)
{
  scr_string_t **v8; 
  unsigned __int8 *v9; 
  __int64 v10; 
  char v11; 
  int v12; 
  const dvar_t *v13; 
  float value; 
  float v15; 
  float v16; 
  float *v17; 
  float v18; 
  unsigned int v19; 
  float v20; 
  int v21; 
  vec3_t *v22; 
  float v23; 
  float v24; 
  refdef_t *v25; 
  int modelIndex[4]; 

  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 349, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 350, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 351, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( *((_BYTE *)nodeData + 1052) )
  {
    v11 = *((_BYTE *)nodeData + 1053);
  }
  else
  {
    v8 = (scr_string_t **)s_tagNames;
    v9 = (unsigned __int8 *)nodeData;
    *((_BYTE *)nodeData + 1052) = 1;
    v10 = 12i64;
    do
    {
      if ( *v9 == 0xFE )
      {
        DObjGetBoneIndexInternal_34(obj, **v8, v9, modelIndex);
        if ( *v9 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 318, ASSERT_TYPE_ASSERT, "(binfo.boneIndex < 254)", "%s\n\tXAnimTurret: tag isn't found", "binfo.boneIndex < UNDEFINED_BONEINDEX") )
          __debugbreak();
      }
      v9 += 52;
      ++v8;
      --v10;
    }
    while ( v10 );
    v11 = 0;
    *((_BYTE *)nodeData + 1053) = 0;
  }
  v12 = *((_DWORD *)nodeData + 156);
  if ( v12 != *((_DWORD *)nodeData + 174) )
  {
    *((_DWORD *)nodeData + 174) = v12;
LABEL_22:
    *((_BYTE *)nodeData + 1053) = 1;
    goto LABEL_23;
  }
  if ( !v11 )
    goto LABEL_22;
LABEL_23:
  v13 = DCONST_DVARFLT_turret_deploy_cover_speed;
  if ( !DCONST_DVARFLT_turret_deploy_cover_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turret_deploy_cover_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  value = v13->current.value;
  v15 = *((float *)nodeData + 251);
  v16 = *(float *)&dword_147F8EA04;
  v17 = (float *)((char *)nodeData + 708);
  v18 = *((float *)nodeData + 250) - v15;
  *((float *)nodeData + 249) = (float)((float)((float)(*((float *)nodeData + 248) - *((float *)nodeData + 249)) * dtime) * value) + *((float *)nodeData + 249);
  *((float *)nodeData + 251) = (float)((float)(v18 * dtime) * value) + v15;
  v19 = 0;
  v20 = value * dtime;
  do
  {
    v21 = *((_DWORD *)nodeData + 247);
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        if ( v16 <= *((float *)nodeData + 249) )
          v22 = &s_foldedPoseAngles[v19];
        else
          v22 = &s_foldedMaxPoseAngles[v19];
      }
      else
      {
        v22 = &vec3_origin;
      }
    }
    else
    {
      v22 = (vec3_t *)((char *)nodeData + 12 * v19 + 844);
    }
    v23 = v22->v[1];
    v24 = v22->v[2];
    *(v17 - 2) = (float)((float)(v22->v[0] - *(v17 - 2)) * v20) + *(v17 - 2);
    *(v17 - 1) = (float)((float)(v23 - *(v17 - 1)) * v20) + *(v17 - 1);
    *v17 = (float)((float)(v24 - *v17) * v20) + *v17;
    v17 += 3;
    ++v19;
  }
  while ( v19 < 0xC );
  *((_QWORD *)nodeData + 126) = 0i64;
  *((_DWORD *)nodeData + 254) = 0;
  v25 = g_activeRefDef;
  if ( g_activeRefDef )
  {
    *((_DWORD *)nodeData + 252) = LODWORD(g_activeRefDef->viewOffset.v[0]);
    *((_DWORD *)nodeData + 253) = LODWORD(v25->viewOffset.v[1]);
    *((_DWORD *)nodeData + 254) = LODWORD(v25->viewOffset.v[2]);
  }
}

/*
==============
XAnimTurret_Calc
==============
*/
void XAnimTurret_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  unsigned __int8 *v11; 
  const vec3_t *v12; 
  unsigned __int8 v13; 
  int v15; 
  __int128 v17; 
  XAnimCalcBuffer *v20; 
  float *v21; 
  XAnimTurret *pNode; 
  __int64 v23; 
  const DObj *v24; 
  XAnimCalcAnimInfo *v25; 
  unsigned __int8 v26; 
  vec4_t v27; 
  vec4_t v28; 
  float v29; 
  float v30; 
  const float4 *fmt; 
  float4 *outModelTranslation; 
  __int64 v33; 
  XAnimTurretParams params; 
  __int128 v35; 
  float4 v36; 
  vec4_t quat; 
  vec4_t v38; 
  tmat33_t<vec3_t> dst; 
  float v40; 
  int v41; 
  int v42; 
  tmat33_t<vec3_t> out; 
  float v44; 
  int v45; 
  int v46; 
  float4 outModelQuat; 
  tmat33_t<vec3_t> axis; 
  DObjPartBits savedPartBits; 
  tmat33_t<vec3_t> in1; 

  if ( !animCalcInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 687, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 688, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  params.bNormQuat = bNormQuat;
  params.weightScale = weightScale;
  params.pNode = (XAnimTurret *)nodeData;
  params.animCalcInfo = animCalcInfo;
  params.obj = obj;
  params.animInfo = animInfo;
  params.destBuffer = destBuffer;
  XAnimTurret_PreCalc(&params, &savedPartBits);
  v33 = 9i64;
  v11 = (unsigned __int8 *)nodeData + 156;
  v12 = (const vec3_t *)((char *)nodeData + 736);
  do
  {
    v13 = *v11;
    if ( (!nodeData || !animCalcInfo || !obj || !destBuffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 420, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
      __debugbreak();
    if ( v13 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 421, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
      __debugbreak();
    XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v13, &outModelQuat, &v36);
    _XMM1 = v36.v;
    v40 = v36.v.m128_f32[0];
    __asm
    {
      vextractps [rbp+110h+var_128], xmm1, 1
      vextractps [rbp+110h+var_124], xmm1, 2
    }
    quat = (vec4_t)outModelQuat.v;
    QuatToAxis(&quat, &axis);
    MatrixCopy33(&axis, &dst);
    v44 = v40;
    v46 = v42;
    v45 = v41;
    AnglesToAxis(v12, &in1);
    MatrixMultiply(&in1, &dst, &out);
    v15 = *v11;
    HIDWORD(v35) = 0;
    v17 = v35;
    *(float *)&v17 = v44;
    _XMM6 = v17;
    __asm
    {
      vinsertps xmm6, xmm6, [rbp+110h+var_F8], 110h+out+20h
      vinsertps xmm6, xmm6, [rbp+110h+var_F4], 110h+outModelQuat
    }
    v35 = _XMM6;
    AxisToQuat(&out, &v38);
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, v15, fmt, outModelTranslation, weightScale);
    ++v12;
    v11 += 52;
    --v33;
  }
  while ( v33 );
  XAnimTurret_ComputePivotHeight(&params);
  if ( *((_BYTE *)nodeData + 1053) == 1 )
  {
    XAnimTurret_InitPose(&params);
    *((_BYTE *)nodeData + 1053) = 2;
  }
  v20 = params.destBuffer;
  v21 = (float *)((char *)nodeData + 48);
  pNode = params.pNode;
  v23 = 12i64;
  v24 = params.obj;
  v25 = params.animCalcInfo;
  do
  {
    v26 = *((_BYTE *)v21 - 48);
    if ( (!pNode || !v25 || !v24 || !v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 420, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
      __debugbreak();
    if ( v26 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 421, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
      __debugbreak();
    XAnimGetLocalBoneTransform(v25, v24, v20, v26, (float4 *)&v38, (float4 *)&quat);
    v27 = quat;
    v28 = v38;
    *(v21 - 2) = quat.v[0];
    v36.v = (__m128)v28;
    v29 = _mm_shuffle_ps((__m128)v27, (__m128)v27, 85).m128_f32[0];
    *(v21 - 1) = v29;
    v30 = _mm_shuffle_ps((__m128)v27, (__m128)v27, 170).m128_f32[0];
    *v21 = v30;
    *(v21 - 2) = v27.v[0] + pNode->entityViewOffset.v[0];
    *(v21 - 1) = v29 + pNode->entityViewOffset.v[1];
    *v21 = v30 + pNode->entityViewOffset.v[2];
    QuatToAxis((const vec4_t *)&v36, &axis);
    MatrixCopy33(&axis, (tmat33_t<vec3_t> *)(v21 - 11));
    v21 += 13;
    --v23;
  }
  while ( v23 );
  if ( (!pNode || !v25 || !v24 || !v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 477, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v25->partBits, &savedPartBits);
}

/*
==============
XAnimTurret_Read
==============
*/
void XAnimTurret_Read(void *nodeData, MemoryFile *memFile)
{
  double Float; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  double v10; 
  int p; 

  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 156) = p;
  MemFile_ReadData(memFile, 0x270ui64, nodeData);
  MemFile_ReadData(memFile, 0x90ui64, (char *)nodeData + 700);
  MemFile_ReadData(memFile, 0x90ui64, (char *)nodeData + 844);
  MemFile_ReadData(memFile, 4ui64, &p);
  *((_DWORD *)nodeData + 247) = p;
  Float = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 248) = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 249) = *(float *)&v5;
  v6 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 250) = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 251) = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 252) = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 253) = *(float *)&v9;
  v10 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 254) = *(float *)&v10;
  MemFile_ReadData(memFile, 0x20ui64, (char *)nodeData + 1020);
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 1052) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 1053) = p;
}

/*
==============
XAnimTurret_Write
==============
*/
void XAnimTurret_Write(void *nodeData, MemoryFile *memFile)
{
  int p; 

  p = *((_DWORD *)nodeData + 156);
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0x270ui64, nodeData);
  MemFile_WriteData(memFile, 0x90ui64, (char *)nodeData + 700);
  MemFile_WriteData(memFile, 0x90ui64, (char *)nodeData + 844);
  p = *((_DWORD *)nodeData + 247);
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteFloat(memFile, *((float *)nodeData + 248));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 249));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 250));
  MemFile_WriteFloat(memFile, *((float *)nodeData + 251));
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 1008);
  MemFile_WriteData(memFile, 0x20ui64, (char *)nodeData + 1020);
  LOBYTE(p) = *((_BYTE *)nodeData + 1052);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 1053);
  MemFile_WriteData(memFile, 1ui64, &p);
}

/*
==============
XAnimTurret_PostParse
==============
*/
char XAnimTurret_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  return 1;
}

/*
==============
XAnimTurret_Debug
==============
*/
void XAnimTurret_Debug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size)
{
  char **v4; 
  __int64 v5; 
  const vec3_t *v6; 
  int v7; 
  const vec4_t **v8; 
  float *v9; 
  float v10; 
  const vec4_t *v11; 
  float v12; 
  __int64 v13; 
  __int64 v14; 
  char *text; 
  vec3_t end; 

  v4 = (char **)s_tagLabelNames;
  v5 = 12i64;
  v6 = (const vec3_t *)((char *)nodeData + 40);
  do
  {
    text = *v4;
    CG_DebugSphere(v6, 0.69999999, &colorYellow, 0, 0);
    v7 = 0;
    v8 = off_147F8EA20;
    v9 = &v6[-3].v[2];
    do
    {
      if ( (unsigned int)v7 >= 4 )
      {
        LODWORD(v14) = 4;
        LODWORD(v13) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v10 = 10.0 * *(v9 - 1);
      v11 = *v8;
      end.v[0] = (float)(10.0 * *(v9 - 2)) + v6->v[0];
      v12 = 10.0 * *v9;
      end.v[1] = v10 + v6->v[1];
      end.v[2] = v12 + v6->v[2];
      CG_DebugLine(v6, &end, v11, 0, 0);
      ++v7;
      v9 += 3;
      ++v8;
    }
    while ( v7 < 3 );
    if ( text )
    {
      if ( *text )
        CL_AddDebugString(v6, &colorWhiteFaded, 0.15000001, text, 0, 0);
    }
    ++v4;
    v6 = (const vec3_t *)((char *)v6 + 52);
    --v5;
  }
  while ( v5 );
}

/*
==============
XAnimTurretParams::IsValid
==============
*/
bool XAnimTurretParams::IsValid(XAnimTurretParams *this)
{
  return this->pNode && this->animCalcInfo && this->obj && this->destBuffer;
}

/*
==============
XAnimTurret_ComputePivotHeight
==============
*/
void XAnimTurret_ComputePivotHeight(XAnimTurretParams *params)
{
  float v2; 
  XAnimTurret *pNode; 
  float v8; 
  double v9; 
  XAnimTurret *v10; 
  int boneIndex; 
  vec4_t v13; 
  XAnimTurret *v16; 
  int v17; 
  vec4_t v19; 
  const float4 *v22; 
  const float4 *v23; 
  const float4 *v24; 
  const float4 *v25; 
  vec4_t out; 
  tmat43_t<vec3_t> outTransform; 

  XAnimTurret_GetBonePosition(params, params->pNode->bones[0].boneIndex, 1, (vec3_t *)&out);
  v2 = out.v[2];
  _XMM0 = LODWORD(params->pNode->footTracePos1.v[2]);
  __asm
  {
    vminss  xmm0, xmm0, dword ptr [rax+280h]
    vminss  xmm1, xmm0, dword ptr [rax+298h]
    vminss  xmm2, xmm1, dword ptr [rax+274h]
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM2 - out.v[2], -42.0, 0.0);
  params->pNode->tgtPivotHeight = *(float *)&_XMM0;
  pNode = params->pNode;
  if ( params->pNode->poseIndex == 1 )
  {
    XAnimTurret_GetBonePosition(params, pNode->bones[7].boneIndex, 1, (vec3_t *)&out);
    if ( params->pNode->poseIndex == 1 )
      v8 = (float)(v2 + offs) - out.v[2];
    else
      v8 = 0.0;
    params->pNode->tgtBaseHeight = v8;
    v9 = I_fclamp(params->pNode->tgtBaseHeight, params->pNode->tgtPivotHeight, 0.0);
    params->pNode->tgtBaseHeight = *(float *)&v9;
    pNode = params->pNode;
  }
  XAnimTurret_GetBoneTransformMatrix(params, pNode->bones[1].boneIndex, 0, &outTransform);
  v10 = params->pNode;
  outTransform.m[3].v[2] = outTransform.m[3].v[2] + params->pNode->curPivotHeight;
  boneIndex = v10->bones[1].boneIndex;
  out.v[3] = 0.0;
  v13 = out;
  v13.v[0] = outTransform.m[3].v[0];
  _XMM6 = v13;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rbp+57h+outTransform+28h], 57h+outTransform+9
    vinsertps xmm6, xmm6, xmm2, 20h ; ' '
  }
  out = _XMM6;
  AxisToQuat((const tmat33_t<vec3_t> *)&outTransform, &out);
  XAnimSetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, v22, v24, params->weightScale);
  XAnimTurret_GetBoneTransformMatrix(params, params->pNode->bones[2].boneIndex, 0, &outTransform);
  v16 = params->pNode;
  outTransform.m[3].v[2] = outTransform.m[3].v[2] + params->pNode->curBaseHeight;
  v17 = v16->bones[2].boneIndex;
  out.v[3] = 0.0;
  v19 = out;
  v19.v[0] = outTransform.m[3].v[0];
  _XMM6 = v19;
  __asm
  {
    vinsertps xmm6, xmm6, dword ptr [rbp+57h+outTransform+28h], 57h+outTransform+9
    vinsertps xmm6, xmm6, xmm2, 20h ; ' '
  }
  out = _XMM6;
  AxisToQuat((const tmat33_t<vec3_t> *)&outTransform, &out);
  XAnimSetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v17, v23, v25, params->weightScale);
}

/*
==============
XAnimTurret_CreateNode
==============
*/
void XAnimTurret_CreateNode(XAnim_s *anims, unsigned int animIndex)
{
  unsigned __int16 v2; 
  const scr_string_t **v5; 
  scr_string_t *v6; 
  XAnimSyncGroupID v7; 

  LOBYTE(v7) = 4;
  v2 = 0;
  XAnimCustomNode(scr_const.turret, anims, animIndex, "deploy", 0, 1u, 0, v7, 1);
  XAnimSetNumGameParameters(anims, 8u);
  v5 = (const scr_string_t **)s_XAnimNodeGameParams;
  do
  {
    v6 = (scr_string_t *)*v5;
    XAnimSetGameParameterName(anims, v2, *v5);
    XAnimBindGameParameterFieldToNodeParameterByName(anims, animIndex, *v6, *v6, *v6);
    ++v2;
    ++v5;
  }
  while ( v2 < 8u );
}

/*
==============
XAnimTurret_FirstTimeInitWithDObj
==============
*/
void XAnimTurret_FirstTimeInitWithDObj(XAnimTurret *pNode, const DObj *obj)
{
  scr_string_t **v3; 
  XAnimTurret *v5; 
  __int64 v6; 
  int modelIndex; 

  v3 = (scr_string_t **)s_tagNames;
  v5 = pNode;
  v6 = 12i64;
  do
  {
    if ( v5->bones[0].boneIndex == 0xFE )
    {
      DObjGetBoneIndexInternal_34(obj, **v3, (unsigned __int8 *)v5, &modelIndex);
      if ( v5->bones[0].boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 318, ASSERT_TYPE_ASSERT, "(binfo.boneIndex < 254)", "%s\n\tXAnimTurret: tag isn't found", "binfo.boneIndex < UNDEFINED_BONEINDEX") )
        __debugbreak();
    }
    v5 = (XAnimTurret *)((char *)v5 + 52);
    ++v3;
    --v6;
  }
  while ( v6 );
  pNode->poseInitState = 0;
}

/*
==============
XAnimTurret_GetBaseTagName
==============
*/
__int64 XAnimTurret_GetBaseTagName()
{
  return (unsigned int)*s_tagNames[2];
}

/*
==============
XAnimTurret_GetBonePosition
==============
*/
void XAnimTurret_GetBonePosition(const XAnimTurretParams *params, unsigned __int8 boneIndex, bool applyViewOffset, vec3_t *outPos)
{
  __m128 v; 
  float v9; 
  float v10; 
  XAnimTurret *pNode; 
  float4 outModelTranslation; 
  float4 outModelQuat; 

  if ( !XAnimTurretParams::IsValid((XAnimTurretParams *)params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  if ( boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, &outModelQuat, &outModelTranslation);
  v = outModelTranslation.v;
  LODWORD(v9) = _mm_shuffle_ps(v, v, 85).m128_u32[0];
  LODWORD(v10) = _mm_shuffle_ps(v, v, 170).m128_u32[0];
  outPos->v[1] = v9;
  outPos->v[2] = v10;
  outPos->v[0] = v.m128_f32[0];
  if ( applyViewOffset )
  {
    pNode = params->pNode;
    outPos->v[0] = v.m128_f32[0] + params->pNode->entityViewOffset.v[0];
    outPos->v[1] = v9 + pNode->entityViewOffset.v[1];
    outPos->v[2] = v10 + pNode->entityViewOffset.v[2];
  }
}

/*
==============
XAnimTurret_GetBoneTransformMatrix
==============
*/
void XAnimTurret_GetBoneTransformMatrix(const XAnimTurretParams *params, unsigned __int8 boneIndex, bool applyViewOffset, tmat43_t<vec3_t> *outTransform)
{
  vec4_t v; 
  XAnimTurret *pNode; 
  float4 outModelQuat; 
  float4 outModelTranslation; 
  vec4_t quat; 
  tmat33_t<vec3_t> axis; 

  _RBX = (tmat33_t<vec3_t> *)outTransform;
  if ( !XAnimTurretParams::IsValid((XAnimTurretParams *)params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 420, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  if ( boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 421, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, &outModelQuat, &outModelTranslation);
  _XMM2 = outModelTranslation.v;
  v = (vec4_t)outModelQuat.v;
  _RBX[1].m[0].v[0] = outModelTranslation.v.m128_f32[0];
  __asm
  {
    vextractps dword ptr [rbx+28h], xmm2, 1
    vextractps dword ptr [rbx+2Ch], xmm2, 2
  }
  quat = v;
  if ( applyViewOffset )
  {
    pNode = params->pNode;
    _RBX[1].m[0].v[0] = _XMM2.m128_f32[0] + params->pNode->entityViewOffset.v[0];
    _RBX[1].m[0].v[1] = _RBX[1].m[0].v[1] + pNode->entityViewOffset.v[1];
    _RBX[1].m[0].v[2] = _RBX[1].m[0].v[2] + pNode->entityViewOffset.v[2];
  }
  QuatToAxis(&quat, &axis);
  MatrixCopy33(&axis, _RBX);
}

/*
==============
XAnimTurret_GetFootTagName
==============
*/
__int64 XAnimTurret_GetFootTagName(unsigned int legNdx)
{
  int v4; 

  if ( legNdx >= 3 )
  {
    v4 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( legNdx ) < (unsigned)( XAnimTurret::NLEGS )", "legNdx doesn't index XAnimTurret::NLEGS\n\t%i not in [0, %i)", legNdx, v4) )
      __debugbreak();
  }
  return *(unsigned int *)s_tagNames[3 * legNdx + 5];
}

/*
==============
XAnimTurret_GetKneeTagName
==============
*/
__int64 XAnimTurret_GetKneeTagName(unsigned int legNdx)
{
  int v4; 

  if ( legNdx >= 3 )
  {
    v4 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 259, ASSERT_TYPE_ASSERT, "(unsigned)( legNdx ) < (unsigned)( XAnimTurret::NLEGS )", "legNdx doesn't index XAnimTurret::NLEGS\n\t%i not in [0, %i)", legNdx, v4) )
      __debugbreak();
  }
  return *(unsigned int *)s_tagNames[3 * legNdx + 4];
}

/*
==============
XAnimTurret_GetPelvisTagName
==============
*/
__int64 XAnimTurret_GetPelvisTagName(unsigned int legNdx)
{
  int v4; 

  if ( legNdx >= 3 )
  {
    v4 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 251, ASSERT_TYPE_ASSERT, "(unsigned)( legNdx ) < (unsigned)( XAnimTurret::NLEGS )", "legNdx doesn't index XAnimTurret::NLEGS\n\t%i not in [0, %i)", legNdx, v4) )
      __debugbreak();
  }
  return *(unsigned int *)s_tagNames[3 * legNdx + 3];
}

/*
==============
XAnimTurret_InitPose
==============
*/
void XAnimTurret_InitPose(XAnimTurretParams *params)
{
  XAnimTurret *pNode; 
  int v3; 
  int v4; 
  unsigned __int8 boneIndex; 
  XAnimTurret *v6; 
  int v7; 
  __int64 v8; 
  __int128 v10; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  int v20; 
  bool v21; 
  float tgtPivotHeight; 
  bool v23; 
  char v24; 
  char v25; 
  const dvar_t *v26; 
  double v27; 
  float4 outModelTranslation; 
  float4 outModelQuat; 
  vec3_t *p_footTracePos0; 
  vec3_t *p_footTracePos1; 
  vec3_t *p_footTracePos2; 

  if ( dword_14FFF6BA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14FFF6BA8);
    if ( dword_14FFF6BA8 == -1 )
    {
      COS_INCLINED_ANGLE_THRESHOLD = FLOAT_0_99619472;
      j__Init_thread_footer(&dword_14FFF6BA8);
    }
  }
  pNode = params->pNode;
  v3 = 0;
  v4 = 0;
  p_footTracePos0 = &params->pNode->footTracePos0;
  p_footTracePos1 = &pNode->footTracePos1;
  p_footTracePos2 = &pNode->footTracePos2;
  do
  {
    boneIndex = params->pNode->bones[3 * v4 + 5].boneIndex;
    if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
      __debugbreak();
    if ( boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
      __debugbreak();
    XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, &outModelQuat, &outModelTranslation);
    v6 = params->pNode;
    v7 = 2;
    if ( v4 < 2 )
      v7 = v4;
    v8 = (__int64)*(&p_footTracePos0 + v7);
    v10 = *(unsigned int *)(v8 + 8);
    *(float *)&v10 = *(float *)(v8 + 8) - (float)(outModelTranslation.v.m128_f32[2] + v6->entityViewOffset.v[2]);
    _XMM1 = v10;
    __asm { vminss  xmm8, xmm1, xmm8 }
    if ( COS_INCLINED_ANGLE_THRESHOLD > v6->footCosNormals.v[v4] )
      ++v3;
    ++v4;
  }
  while ( (unsigned int)v4 < 3 );
  v12 = p_footTracePos0->v[2];
  v13 = p_footTracePos1->v[2];
  v14 = p_footTracePos2->v[2];
  LODWORD(v15) = COERCE_UNSIGNED_INT(v12 - v14) & _xmm;
  LODWORD(v16) = COERCE_UNSIGNED_INT(v13 - v14) & _xmm;
  LODWORD(v17) = COERCE_UNSIGNED_INT(v12 - v13) & _xmm;
  LODWORD(v18) = COERCE_UNSIGNED_INT((float)((float)(v14 + v13) * 0.5) - v12) & _xmm;
  LODWORD(v19) = COERCE_UNSIGNED_INT(v12 - params->pNode->baseTracePos.v[2]) & _xmm;
  v20 = (COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - v15) & _xmm) < 0.001) + (COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - v16) & _xmm) < 0.001) + (COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - v16) & _xmm) < 0.001);
  v21 = !v20 || v16 > THRESHOLD_CONSIDERED_UNEVEN_SMALL || v18 > THRESHOLD_CONSIDERED_UNEVEN_SMALL && v18 <= BACK_FRONT_HEIGHTS_THRESHOLD;
  tgtPivotHeight = params->pNode->tgtPivotHeight;
  v23 = COERCE_FLOAT(LODWORD(tgtPivotHeight) & _xmm) > PIVOT_MOVED_THRESHOLD;
  if ( v19 <= THRESHOLD_CONSIDERED_UNEVEN || v19 >= BACK_FRONT_HEIGHTS_THRESHOLD )
  {
    v24 = 0;
LABEL_26:
    v25 = 0;
    goto LABEL_27;
  }
  v24 = 1;
  if ( COERCE_FLOAT(LODWORD(tgtPivotHeight) & _xmm) <= PIVOT_MOVED_THRESHOLD || !v20 )
    goto LABEL_26;
  v25 = 1;
LABEL_27:
  v26 = DCONST_DVARBOOL_turret_deploy_never_folded;
  if ( !DCONST_DVARBOOL_turret_deploy_never_folded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turret_deploy_never_folded") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled || (!v23 || *(float *)&_XMM8 >= tgtPivotHeight || v3 || v21 || v24) && !v25 )
  {
    params->pNode->poseIndex = 0;
    v27 = I_fclamp(*(float *)&_XMM8, params->pNode->tgtPivotHeight, 0.0);
    params->pNode->tgtBaseHeight = *(float *)&v27 * 0.75;
    XAnimTurret_InitPseudoIkPose(params);
  }
  else
  {
    params->pNode->poseIndex = 1;
  }
}

/*
==============
XAnimTurret_InitPseudoIkPose
==============
*/
void XAnimTurret_InitPseudoIkPose(XAnimTurretParams *params)
{
  XAnimTurret *pNode; 
  vec3_t *pseudoIkPose; 
  int v4; 
  float **v5; 
  unsigned int i; 
  int v7; 
  unsigned __int8 boneIndex; 
  __m128 v; 
  float v10; 
  float v11; 
  __m128 v12; 
  __m128 v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  unsigned __int8 v17; 
  __m128 v18; 
  float v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  unsigned __int8 v23; 
  __m128 v24; 
  float v25; 
  float v26; 
  __m128 v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  __m128 v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v39; 
  float v41; 
  __int128 v44; 
  __int128 v45; 
  __int128 v47; 
  float v48; 
  __int64 v53; 
  float v60; 
  __int128 v61; 
  __int128 v66; 
  __int128 v67; 
  __int64 v69; 
  float v75; 
  vec3_t b; 
  vec3_t a; 
  float4 outModelTranslation; 
  float4 v79; 
  float4 v80; 
  float4 outModelQuat; 
  float4 v82; 
  float4 v83; 
  _QWORD v84[3]; 

  pNode = params->pNode;
  v84[0] = &params->pNode->footTracePos0;
  pseudoIkPose = pNode->pseudoIkPose;
  v84[1] = &pNode->footTracePos1;
  v84[2] = &pNode->footTracePos2;
  memset_0(pNode->pseudoIkPose, 0, sizeof(pNode->pseudoIkPose));
  v4 = _xmm;
  v5 = (float **)v84;
  for ( i = 0; i < 3; ++i )
  {
    v7 = 3 * i;
    boneIndex = params->pNode->bones[3 * i + 5].boneIndex;
    if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
      __debugbreak();
    if ( boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
      __debugbreak();
    XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, &outModelQuat, &outModelTranslation);
    v = outModelTranslation.v;
    v10 = outModelTranslation.v.m128_f32[0] + params->pNode->entityViewOffset.v[0];
    v11 = (float)(_mm_shuffle_ps(v, v, 170).m128_f32[0] + params->pNode->entityViewOffset.v[2]) + params->pNode->tgtBaseHeight;
    v13 = _mm_shuffle_ps(v, v, 85);
    v13.m128_f32[0] = v13.m128_f32[0] + params->pNode->entityViewOffset.v[1];
    v12 = v13;
    v14 = **v5;
    v75 = (*v5)[1];
    v15 = (*v5)[2] + 3.0;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v15) & v4) > dispZAllowed )
    {
      v16 = (unsigned int)(v7 + 3);
      v17 = params->pNode->bones[v16].boneIndex;
      if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
        __debugbreak();
      if ( v17 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
        __debugbreak();
      XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v17, &v82, &v79);
      v18 = v79.v;
      v19 = v79.v.m128_f32[0] + params->pNode->entityViewOffset.v[0];
      v20 = (float)(_mm_shuffle_ps(v18, v18, 170).m128_f32[0] + params->pNode->entityViewOffset.v[2]) + params->pNode->tgtBaseHeight;
      v21 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0] + params->pNode->entityViewOffset.v[1];
      v22 = (unsigned int)(v7 + 4);
      v23 = params->pNode->bones[v22].boneIndex;
      if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
        __debugbreak();
      if ( v23 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
        __debugbreak();
      XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v23, &v83, &v80);
      v24 = v80.v;
      v25 = v80.v.m128_f32[0] + params->pNode->entityViewOffset.v[0];
      v27 = _mm_shuffle_ps(v24, v24, 85);
      v26 = v27.m128_f32[0] + params->pNode->entityViewOffset.v[1];
      v28 = (float)(_mm_shuffle_ps(v24, v24, 170).m128_f32[0] + params->pNode->entityViewOffset.v[2]) + params->pNode->tgtBaseHeight;
      v29 = v11 - v28;
      v30 = v10 - v25;
      v31 = v25 - v19;
      v27.m128_f32[0] = v26 - v21;
      v32 = v27;
      v34 = v12;
      v34.m128_f32[0] = v12.m128_f32[0] - v26;
      v33 = v34;
      v35 = v32;
      v35.m128_f32[0] = fsqrt((float)((float)(v32.m128_f32[0] * v32.m128_f32[0]) + (float)(v31 * v31)) + (float)((float)(v28 - v20) * (float)(v28 - v20)));
      _XMM3 = v35;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      a.v[0] = (float)(1.0 / *(float *)&_XMM0) * v31;
      a.v[2] = (float)(v28 - v20) * (float)(1.0 / *(float *)&_XMM0);
      a.v[1] = (float)(1.0 / *(float *)&_XMM0) * v32.m128_f32[0];
      v39 = v33;
      v39.m128_f32[0] = fsqrt((float)((float)(v33.m128_f32[0] * v33.m128_f32[0]) + (float)(v30 * v30)) + (float)(v29 * v29));
      _XMM1 = v39;
      LODWORD(v41) = v39.m128_i32[0] ^ _xmm;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm0, xmm1, xmm2, xmm0
      }
      v45 = LODWORD(FLOAT_1_0);
      *(float *)&v45 = 1.0 / *(float *)&_XMM0;
      v44 = v45;
      *(float *)&v45 = (float)(1.0 / *(float *)&_XMM0) * v30;
      _XMM7 = LODWORD(FLOAT_1_0);
      v32.m128_f32[0] = (float)(*(float *)&v45 * v41) + v14;
      v47 = v44;
      _XMM3.m128_f32[0] = (float)((float)(*(float *)&v44 * v33.m128_f32[0]) * v41) + v75;
      v48 = (float)((float)((float)(*(float *)&v44 * v29) * v41) + v15) - v20;
      *(float *)&v44 = v32.m128_f32[0] - v19;
      v32.m128_f32[0] = _XMM3.m128_f32[0] - v21;
      *(float *)&v47 = fsqrt((float)((float)((float)(_XMM3.m128_f32[0] - v21) * (float)(_XMM3.m128_f32[0] - v21)) + (float)(*(float *)&v44 * *(float *)&v44)) + (float)(v48 * v48));
      _XMM3 = v47;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
      }
      b.v[0] = (float)(1.0 / *(float *)&_XMM0) * *(float *)&v44;
      b.v[2] = (float)(1.0 / *(float *)&_XMM0) * v48;
      b.v[1] = (float)(1.0 / *(float *)&_XMM0) * v32.m128_f32[0];
      *(double *)&_XMM0 = AngleBetween(&a, &b);
      _XMM10 = LODWORD(FLOAT_N1_0);
      v4 = _xmm;
      v53 = v16;
      _XMM8 = 0i64;
      __asm
      {
        vcmpless xmm1, xmm8, xmm11
        vblendvps xmm4, xmm10, xmm7, xmm1
      }
      _XMM1 = i;
      __asm
      {
        vpcmpeqd xmm3, xmm1, xmm2
        vblendvps xmm1, xmm10, xmm7, xmm3
      }
      v61 = (unsigned __int64)_XMM0;
      *(float *)&v61 = *(float *)&_XMM0 * (float)(*(float *)&_XMM4 * *(float *)&_XMM1);
      v60 = *(float *)&v61;
      _XMM0 = i;
      __asm { vpcmpeqd xmm2, xmm0, xmm1 }
      _XMM1 = LODWORD(FLOAT_65_0);
      __asm { vblendvps xmm0, xmm1, xmm0, xmm2 }
      v66 = v61 & (unsigned int)_xmm;
      *((_QWORD *)&_XMM0 + 1) = *((_QWORD *)&v66 + 1);
      pseudoIkPose[v53].v[0] = v60;
      *(_QWORD *)&pseudoIkPose[v53].y = 0i64;
      *(double *)&_XMM0 = I_fclamp(*(float *)&v66 / *(float *)&_XMM0, 0.0, 1.0);
      v67 = _XMM0;
      *(float *)&v67 = (float)((float)(*(float *)&_XMM0 * *(float *)&_XMM0) * (float)(*(float *)&_XMM0 * *(float *)&_XMM0)) * 12.0;
      _XMM1 = v67 ^ _xmm;
      v69 = v22;
      __asm
      {
        vcmpless xmm0, xmm8, xmm6
        vblendvps xmm3, xmm1, xmm2, xmm0
      }
      _XMM0 = i;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm7, xmm10, xmm2
      }
      pseudoIkPose[v69].v[0] = (float)(*(float *)&_XMM3 * *(float *)&_XMM0) - v60;
      *(_QWORD *)&pseudoIkPose[v69].y = 0i64;
    }
    ++v5;
  }
}

/*
==============
XAnimTurret_PreCalc
==============
*/
void XAnimTurret_PreCalc(XAnimTurretParams *params, DObjPartBits *savedPartBits)
{
  unsigned int v4; 
  unsigned int v5; 
  DObjPartBits *p_partBits; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int64 boneIndex; 

  if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 456, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  v4 = 0;
  v5 = 0;
  p_partBits = &params->pNode->partBits;
  while ( !p_partBits->array[0] )
  {
    ++v5;
    p_partBits = (DObjPartBits *)((char *)p_partBits + 4);
    if ( v5 >= 8 )
    {
      v7 = 0i64;
      v8 = 12i64;
      do
      {
        boneIndex = params->pNode->bones[v7++].boneIndex;
        params->pNode->partBits.array[boneIndex >> 5] |= 0x80000000 >> (boneIndex & 0x1F);
        --v8;
      }
      while ( v8 );
      DObjCompleteHierarchyBits(params->obj, &params->pNode->partBits);
      break;
    }
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(savedPartBits, params->animCalcInfo->partBits);
  _RDI = params->animCalcInfo->partBits;
  _RBP = (char *)((char *)&params->pNode->partBits - (char *)_RDI);
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rdi+rbp]
      vlddqu  xmm0, xmmword ptr [rdi]
      vpor    xmm6, xmm0, xmm6
    }
    *(_OWORD *)_RDI->array = _XMM6;
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v4;
  }
  while ( v4 < 2 );
  XAnimCalcDefaultBlendNode(params->animCalcInfo, params->obj, params->animInfo, params->weightScale, params->bNormQuat, params->destBuffer, LINEAR);
}

/*
==============
XAnimTurret_Register
==============
*/
void XAnimTurret_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimTurret>::ms_typeInfo);
}


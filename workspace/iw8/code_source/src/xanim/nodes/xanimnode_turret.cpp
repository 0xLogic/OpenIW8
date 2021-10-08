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
  scr_string_t **v13; 
  unsigned __int8 *v14; 
  __int64 v15; 
  char v16; 
  int v17; 
  unsigned int v35; 
  int v37; 
  refdef_t *v55; 
  int modelIndex[4]; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBX = nodeData;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 349, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 350, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 351, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( _RBX[1052] )
  {
    v16 = _RBX[1053];
  }
  else
  {
    v13 = (scr_string_t **)s_tagNames;
    v14 = _RBX;
    _RBX[1052] = 1;
    v15 = 12i64;
    do
    {
      if ( *v14 == 0xFE )
      {
        DObjGetBoneIndexInternal_34(obj, **v13, v14, modelIndex);
        if ( *v14 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 318, ASSERT_TYPE_ASSERT, "(binfo.boneIndex < 254)", "%s\n\tXAnimTurret: tag isn't found", "binfo.boneIndex < UNDEFINED_BONEINDEX") )
          __debugbreak();
      }
      v14 += 52;
      ++v13;
      --v15;
    }
    while ( v15 );
    v16 = 0;
    _RBX[1053] = 0;
  }
  v17 = *((_DWORD *)_RBX + 156);
  if ( v17 != *((_DWORD *)_RBX + 174) )
  {
    *((_DWORD *)_RBX + 174) = v17;
LABEL_22:
    _RBX[1053] = 1;
    goto LABEL_23;
  }
  if ( !v16 )
    goto LABEL_22;
LABEL_23:
  _RDI = DCONST_DVARFLT_turret_deploy_cover_speed;
  if ( !DCONST_DVARFLT_turret_deploy_cover_speed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turret_deploy_cover_speed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vmovss  xmm2, dword ptr [rbx+3E4h]
    vmovss  xmm5, [rsp+0B8h+dtime]
    vmovss  xmm4, dword ptr [rbx+3ECh]
    vmovss  xmm0, dword ptr [rbx+3E0h]
    vmovss  xmm8, cs:dword_147F8EA04
  }
  _R8 = _RBX + 708;
  __asm
  {
    vsubss  xmm1, xmm0, xmm2
    vmulss  xmm1, xmm1, xmm5
    vmulss  xmm0, xmm1, xmm6
    vaddss  xmm2, xmm0, xmm2
    vmovss  xmm0, dword ptr [rbx+3E8h]
    vsubss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rbx+3E4h], xmm2
    vmulss  xmm2, xmm1, xmm5
    vmulss  xmm3, xmm2, xmm6
    vaddss  xmm0, xmm3, xmm4
    vmovss  dword ptr [rbx+3ECh], xmm0
  }
  v35 = 0;
  __asm { vmulss  xmm9, xmm6, xmm5 }
  do
  {
    v37 = *((_DWORD *)_RBX + 247);
    if ( v37 )
    {
      if ( v37 == 1 )
      {
        __asm { vcomiss xmm8, dword ptr [rbx+3E4h] }
        _RAX = &s_foldedPoseAngles[v35];
      }
      else
      {
        _RAX = &vec3_origin;
      }
    }
    else
    {
      _RAX = (vec3_t *)&_RBX[12 * v35 + 844];
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vsubss  xmm1, xmm0, dword ptr [r8-8]
      vmovss  xmm5, dword ptr [rax+4]
      vmovss  xmm7, dword ptr [rax+8]
      vmulss  xmm2, xmm1, xmm9
      vaddss  xmm3, xmm2, dword ptr [r8-8]
      vmovss  dword ptr [r8-8], xmm3
      vsubss  xmm0, xmm5, dword ptr [r8-4]
      vmulss  xmm1, xmm0, xmm9
      vaddss  xmm2, xmm1, dword ptr [r8-4]
      vmovss  dword ptr [r8-4], xmm2
      vsubss  xmm0, xmm7, dword ptr [r8]
      vmulss  xmm1, xmm0, xmm9
      vaddss  xmm2, xmm1, dword ptr [r8]
      vmovss  dword ptr [r8], xmm2
    }
    _R8 += 12;
    ++v35;
  }
  while ( v35 < 0xC );
  __asm
  {
    vmovaps xmm9, [rsp+0B8h+var_68]
    vmovaps xmm8, [rsp+0B8h+var_58]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm6, [rsp+0B8h+var_38]
  }
  *((_QWORD *)_RBX + 126) = 0i64;
  *((_DWORD *)_RBX + 254) = 0;
  v55 = g_activeRefDef;
  if ( g_activeRefDef )
  {
    *((_DWORD *)_RBX + 252) = LODWORD(g_activeRefDef->viewOffset.v[0]);
    *((_DWORD *)_RBX + 253) = LODWORD(v55->viewOffset.v[1]);
    *((_DWORD *)_RBX + 254) = LODWORD(v55->viewOffset.v[2]);
  }
}

/*
==============
XAnimTurret_Calc
==============
*/
void XAnimTurret_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  unsigned __int8 *v15; 
  const vec3_t *v16; 
  unsigned __int8 v17; 
  int v24; 
  XAnimCalcBuffer *v31; 
  XAnimTurret *pNode; 
  __int64 v34; 
  const DObj *v35; 
  XAnimCalcAnimInfo *v36; 
  unsigned __int8 v37; 
  const float4 *fmt; 
  float4 *outModelTranslation; 
  float v49; 
  __int64 v50; 
  XAnimTurretParams params; 
  __int128 v52; 
  float4 v53; 
  vec4_t quat; 
  vec4_t v55; 
  tmat33_t<vec3_t> dst; 
  tmat33_t<vec3_t> out; 
  float4 outModelQuat; 
  tmat33_t<vec3_t> axis; 
  DObjPartBits savedPartBits; 
  tmat33_t<vec3_t> in1; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  if ( !animCalcInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 687, ASSERT_TYPE_ASSERT, "(animCalcInfo)", (const char *)&queryFormat, "animCalcInfo") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 688, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  __asm { vmovss  xmm7, [rbp+110h+weightScale] }
  params.bNormQuat = bNormQuat;
  __asm { vmovss  [rsp+210h+params.weightScale], xmm7 }
  params.pNode = (XAnimTurret *)nodeData;
  params.animCalcInfo = animCalcInfo;
  params.obj = obj;
  params.animInfo = animInfo;
  params.destBuffer = destBuffer;
  XAnimTurret_PreCalc(&params, &savedPartBits);
  v50 = 9i64;
  v15 = (unsigned __int8 *)nodeData + 156;
  v16 = (const vec3_t *)((char *)nodeData + 736);
  do
  {
    v17 = *v15;
    if ( (!nodeData || !animCalcInfo || !obj || !destBuffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 420, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
      __debugbreak();
    if ( v17 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 421, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
      __debugbreak();
    XAnimGetLocalBoneTransform(animCalcInfo, obj, destBuffer, v17, &outModelQuat, &v53);
    __asm
    {
      vmovups xmm1, xmmword ptr [rbp+110h+var_180.v]
      vmovups xmm0, xmmword ptr [rbp+110h+outModelQuat.v]
      vmovss  [rbp+110h+var_12C], xmm1
      vextractps [rbp+110h+var_128], xmm1, 1
      vextractps [rbp+110h+var_124], xmm1, 2
      vmovups xmmword ptr [rbp+110h+quat], xmm0
    }
    QuatToAxis(&quat, &axis);
    MatrixCopy33(&axis, &dst);
    __asm
    {
      vmovss  xmm0, [rbp+110h+var_12C]
      vmovss  xmm1, [rbp+110h+var_128]
      vmovss  [rbp+110h+var_FC], xmm0
      vmovss  xmm0, [rbp+110h+var_124]
      vmovss  [rbp+110h+var_F4], xmm0
      vmovss  [rbp+110h+var_F8], xmm1
    }
    AnglesToAxis(v16, &in1);
    MatrixMultiply(&in1, &dst, &out);
    __asm { vmovss  xmm0, [rbp+110h+var_FC] }
    v24 = *v15;
    HIDWORD(v52) = 0;
    __asm
    {
      vmovups xmm6, xmmword ptr [rbp-80h]
      vmovss  xmm6, xmm6, xmm0
      vinsertps xmm6, xmm6, [rbp+110h+var_F8], 110h+out+20h
      vinsertps xmm6, xmm6, [rbp+110h+var_F4], 110h+outModelQuat
      vmovups xmmword ptr [rbp-80h], xmm6
    }
    AxisToQuat(&out, &v55);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+110h+var_160]
      vmovups xmm1, xmm6
      vmovss  dword ptr [rsp+30h], xmm7
    }
    XAnimSetLocalBoneTransform(animCalcInfo, obj, destBuffer, v24, fmt, outModelTranslation, v49);
    ++v16;
    v15 += 52;
    --v50;
  }
  while ( v50 );
  XAnimTurret_ComputePivotHeight(&params);
  if ( *((_BYTE *)nodeData + 1053) == 1 )
  {
    XAnimTurret_InitPose(&params);
    *((_BYTE *)nodeData + 1053) = 2;
  }
  v31 = params.destBuffer;
  _RBX = (char *)nodeData + 48;
  pNode = params.pNode;
  v34 = 12i64;
  v35 = params.obj;
  v36 = params.animCalcInfo;
  do
  {
    v37 = *(_RBX - 48);
    if ( (!pNode || !v36 || !v35 || !v31) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 420, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
      __debugbreak();
    if ( v37 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 421, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
      __debugbreak();
    XAnimGetLocalBoneTransform(v36, v35, v31, v37, (float4 *)&v55, (float4 *)&quat);
    __asm
    {
      vmovups xmm3, xmmword ptr [rbp+110h+quat]
      vmovups xmm0, xmmword ptr [rbp+110h+var_160]
      vmovss  dword ptr [rbx-8], xmm3
      vmovups xmmword ptr [rbp+110h+var_180.v], xmm0
      vshufps xmm1, xmm3, xmm3, 55h ; 'U'
      vmovss  dword ptr [rbx-4], xmm1
      vshufps xmm2, xmm3, xmm3, 0AAh ; 'ª'
      vmovss  dword ptr [rbx], xmm2
      vaddss  xmm0, xmm3, dword ptr [rdi+3F0h]
      vmovss  dword ptr [rbx-8], xmm0
      vaddss  xmm1, xmm1, dword ptr [rdi+3F4h]
      vmovss  dword ptr [rbx-4], xmm1
      vaddss  xmm0, xmm2, dword ptr [rdi+3F8h]
      vmovss  dword ptr [rbx], xmm0
    }
    QuatToAxis((const vec4_t *)&v53, &axis);
    MatrixCopy33(&axis, (tmat33_t<vec3_t> *)(_RBX - 44));
    _RBX += 52;
    --v34;
  }
  while ( v34 );
  if ( (!pNode || !v36 || !v35 || !v31) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 477, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v36->partBits, &savedPartBits);
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+210h+var_58+8]
    vmovaps xmm7, [rsp+210h+var_68+8]
  }
}

/*
==============
XAnimTurret_Read
==============
*/
void XAnimTurret_Read(void *nodeData, MemoryFile *memFile)
{
  int p; 

  _RDI = nodeData;
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[156] = p;
  MemFile_ReadData(memFile, 0x270ui64, _RDI);
  MemFile_ReadData(memFile, 0x90ui64, _RDI + 175);
  MemFile_ReadData(memFile, 0x90ui64, _RDI + 211);
  MemFile_ReadData(memFile, 4ui64, &p);
  _RDI[247] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+3E0h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+3E4h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+3E8h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+3ECh], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+3F0h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+3F4h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rdi+3F8h], xmm0 }
  MemFile_ReadData(memFile, 0x20ui64, _RDI + 255);
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 1052) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)_RDI + 1053) = p;
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
  _RBX = (char *)nodeData;
  MemFile_WriteData(memFile, 4ui64, &p);
  MemFile_WriteData(memFile, 0x270ui64, _RBX);
  MemFile_WriteData(memFile, 0x90ui64, _RBX + 700);
  MemFile_WriteData(memFile, 0x90ui64, _RBX + 844);
  p = *((_DWORD *)_RBX + 247);
  MemFile_WriteData(memFile, 4ui64, &p);
  __asm { vmovss  xmm1, dword ptr [rbx+3E0h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+3E4h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+3E8h]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  __asm { vmovss  xmm1, dword ptr [rbx+3ECh]; value }
  MemFile_WriteFloat(memFile, *(float *)&_XMM1);
  MemFile_WriteData(memFile, 0xCui64, _RBX + 1008);
  MemFile_WriteData(memFile, 0x20ui64, _RBX + 1020);
  LOBYTE(p) = _RBX[1052];
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = _RBX[1053];
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
  char **v11; 
  __int64 v12; 
  const vec3_t *v13; 
  int v15; 
  const vec4_t **v16; 
  char *p_z; 
  const vec4_t *v21; 
  __int64 v30; 
  __int64 v31; 
  char *text; 
  vec3_t end; 
  char v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovss  xmm8, cs:__real@3f333333
    vmovss  xmm6, cs:__real@41200000
    vmovss  xmm7, cs:__real@3e19999a
  }
  v11 = (char **)s_tagLabelNames;
  v12 = 12i64;
  v13 = (const vec3_t *)((char *)nodeData + 40);
  do
  {
    text = *v11;
    __asm { vmovaps xmm1, xmm8; radius }
    CG_DebugSphere(v13, *(float *)&_XMM1, &colorYellow, 0, 0);
    v15 = 0;
    v16 = off_147F8EA20;
    p_z = (char *)&v13[-3].z;
    do
    {
      if ( (unsigned int)v15 >= 4 )
      {
        LODWORD(v31) = 4;
        LODWORD(v30) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 341, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      __asm
      {
        vmulss  xmm1, xmm6, dword ptr [rsi-8]
        vaddss  xmm2, xmm1, dword ptr [rdi]
        vmulss  xmm1, xmm6, dword ptr [rsi-4]
      }
      v21 = *v16;
      __asm
      {
        vmovss  dword ptr [rsp+0B8h+end], xmm2
        vaddss  xmm2, xmm1, dword ptr [rdi+4]
        vmulss  xmm1, xmm6, dword ptr [rsi]
        vmovss  dword ptr [rsp+0B8h+end+4], xmm2
        vaddss  xmm2, xmm1, dword ptr [rdi+8]
        vmovss  dword ptr [rsp+0B8h+end+8], xmm2
      }
      CG_DebugLine(v13, &end, v21, 0, 0);
      ++v15;
      p_z += 12;
      ++v16;
    }
    while ( v15 < 3 );
    if ( text && *text )
    {
      __asm { vmovaps xmm2, xmm7; scale }
      CL_AddDebugString(v13, &colorWhiteFaded, *(float *)&_XMM2, text, 0, 0);
    }
    ++v11;
    v13 = (const vec3_t *)((char *)v13 + 52);
    --v12;
  }
  while ( v12 );
  _R11 = &v35;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  XAnimTurret *pNode; 
  XAnimTurret *v23; 
  int boneIndex; 
  XAnimTurret *v35; 
  int v39; 
  const float4 *v49; 
  const float4 *v50; 
  const float4 *v51; 
  const float4 *v52; 
  float v53; 
  float v54; 
  vec4_t out; 
  tmat43_t<vec3_t> outTransform; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RDI = params;
  XAnimTurret_GetBonePosition(params, params->pNode->bones[0].boneIndex, 1, (vec3_t *)&out);
  _RAX = _RDI->pNode;
  __asm
  {
    vmovss  xmm6, dword ptr [rbp+57h+out+8]
    vmovss  xmm0, dword ptr [rax+28Ch]
    vminss  xmm0, xmm0, dword ptr [rax+280h]
    vminss  xmm1, xmm0, dword ptr [rax+298h]
    vminss  xmm2, xmm1, dword ptr [rax+274h]
    vmovss  xmm1, cs:__real@c2280000; min
    vsubss  xmm0, xmm2, xmm6; val
    vxorps  xmm2, xmm2, xmm2; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = _RDI->pNode;
  __asm { vmovss  dword ptr [rax+3E0h], xmm0 }
  pNode = _RDI->pNode;
  if ( _RDI->pNode->poseIndex == 1 )
  {
    XAnimTurret_GetBonePosition(_RDI, pNode->bones[7].boneIndex, 1, (vec3_t *)&out);
    _RAX = _RDI->pNode;
    if ( _RDI->pNode->poseIndex == 1 )
    {
      __asm
      {
        vaddss  xmm0, xmm6, cs:offs
        vsubss  xmm1, xmm0, dword ptr [rbp+57h+out+8]
      }
    }
    else
    {
      __asm { vxorps  xmm1, xmm1, xmm1 }
    }
    __asm { vmovss  dword ptr [rax+3E8h], xmm1 }
    _RAX = _RDI->pNode;
    __asm
    {
      vxorps  xmm2, xmm2, xmm2; max
      vmovss  xmm1, dword ptr [rax+3E0h]; min
      vmovss  xmm0, dword ptr [rax+3E8h]; val
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RAX = _RDI->pNode;
    __asm { vmovss  dword ptr [rax+3E8h], xmm0 }
    pNode = _RDI->pNode;
  }
  XAnimTurret_GetBoneTransformMatrix(_RDI, pNode->bones[1].boneIndex, 0, &outTransform);
  v23 = _RDI->pNode;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+outTransform+2Ch]
    vaddss  xmm2, xmm0, dword ptr [rax+3E4h]
    vmovss  xmm0, dword ptr [rbp+57h+outTransform+24h]
    vmovss  dword ptr [rbp+57h+outTransform+2Ch], xmm2
  }
  boneIndex = v23->bones[1].boneIndex;
  out.v[3] = 0.0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rbp+57h+out]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rbp+57h+outTransform+28h], 57h+outTransform+9
    vinsertps xmm6, xmm6, xmm2, 20h ; ' '
    vmovups xmmword ptr [rbp+57h+out], xmm6
  }
  AxisToQuat((const tmat33_t<vec3_t> *)&outTransform, &out);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+20h]
    vmovups xmm0, xmmword ptr [rbp+57h+out]
    vmovups xmm1, xmm6
    vmovss  [rsp+0A0h+var_70], xmm2
  }
  XAnimSetLocalBoneTransform(_RDI->animCalcInfo, _RDI->obj, _RDI->destBuffer, boneIndex, v49, v51, v53);
  XAnimTurret_GetBoneTransformMatrix(_RDI, _RDI->pNode->bones[2].boneIndex, 0, &outTransform);
  v35 = _RDI->pNode;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+outTransform+2Ch]
    vaddss  xmm2, xmm0, dword ptr [rax+3ECh]
    vmovss  xmm0, dword ptr [rbp+57h+outTransform+24h]
    vmovss  dword ptr [rbp+57h+outTransform+2Ch], xmm2
  }
  v39 = v35->bones[2].boneIndex;
  out.v[3] = 0.0;
  __asm
  {
    vmovups xmm6, xmmword ptr [rbp+57h+out]
    vmovss  xmm6, xmm6, xmm0
    vinsertps xmm6, xmm6, dword ptr [rbp+57h+outTransform+28h], 57h+outTransform+9
    vinsertps xmm6, xmm6, xmm2, 20h ; ' '
    vmovups xmmword ptr [rbp+57h+out], xmm6
  }
  AxisToQuat((const tmat33_t<vec3_t> *)&outTransform, &out);
  __asm
  {
    vmovss  xmm2, dword ptr [rdi+20h]
    vmovups xmm0, xmmword ptr [rbp+57h+out]
    vmovups xmm1, xmm6
    vmovss  [rsp+0A0h+var_70], xmm2
  }
  XAnimSetLocalBoneTransform(_RDI->animCalcInfo, _RDI->obj, _RDI->destBuffer, v39, v50, v52, v54);
  _R11 = &vars0;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
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
  float4 outModelTranslation; 
  float4 outModelQuat; 

  _RBX = outPos;
  if ( !XAnimTurretParams::IsValid((XAnimTurretParams *)params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  if ( boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
    __debugbreak();
  XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, &outModelQuat, &outModelTranslation);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+88h+var_58.v]
    vshufps xmm1, xmm0, xmm0, 55h ; 'U'
    vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
    vmovss  dword ptr [rbx+4], xmm1
    vmovss  dword ptr [rbx+8], xmm2
    vmovss  dword ptr [rbx], xmm0
  }
  if ( applyViewOffset )
  {
    __asm
    {
      vaddss  xmm0, xmm0, dword ptr [rax+3F0h]
      vmovss  dword ptr [rbx], xmm0
      vaddss  xmm1, xmm1, dword ptr [rax+3F4h]
      vmovss  dword ptr [rbx+4], xmm1
      vaddss  xmm0, xmm2, dword ptr [rax+3F8h]
      vmovss  dword ptr [rbx+8], xmm0
    }
  }
}

/*
==============
XAnimTurret_GetBoneTransformMatrix
==============
*/
void XAnimTurret_GetBoneTransformMatrix(const XAnimTurretParams *params, unsigned __int8 boneIndex, bool applyViewOffset, tmat43_t<vec3_t> *outTransform)
{
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
  __asm
  {
    vmovups xmm2, xmmword ptr [rsp+0B8h+var_78.v]
    vmovups xmm0, xmmword ptr [rsp+0B8h+outModelQuat.v]
    vmovss  dword ptr [rbx+24h], xmm2
    vextractps dword ptr [rbx+28h], xmm2, 1
    vextractps dword ptr [rbx+2Ch], xmm2, 2
    vmovups xmmword ptr [rsp+0B8h+quat], xmm0
  }
  if ( applyViewOffset )
  {
    __asm
    {
      vaddss  xmm0, xmm2, dword ptr [rax+3F0h]
      vmovss  dword ptr [rbx+24h], xmm0
      vmovss  xmm1, dword ptr [rbx+28h]
      vaddss  xmm2, xmm1, dword ptr [rax+3F4h]
      vmovss  dword ptr [rbx+28h], xmm2
      vmovss  xmm0, dword ptr [rbx+2Ch]
      vaddss  xmm1, xmm0, dword ptr [rax+3F8h]
      vmovss  dword ptr [rbx+2Ch], xmm1
    }
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
  int v7; 
  unsigned __int8 boneIndex; 
  int v12; 
  const dvar_t *v50; 
  float4 outModelTranslation; 
  float4 outModelQuat; 
  vec3_t *p_footTracePos0; 
  vec3_t *p_footTracePos1; 
  vec3_t *p_footTracePos2; 
  char v67; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  if ( dword_14FFF6BA8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14FFF6BA8);
    if ( dword_14FFF6BA8 == -1 )
    {
      __asm
      {
        vmovss  xmm0, cs:__real@3f7f069e
        vmovss  cs:COS_INCLINED_ANGLE_THRESHOLD, xmm0
      }
      j__Init_thread_footer(&dword_14FFF6BA8);
    }
  }
  pNode = params->pNode;
  v7 = 0;
  __asm { vxorps  xmm8, xmm8, xmm8 }
  p_footTracePos0 = &params->pNode->footTracePos0;
  p_footTracePos1 = &pNode->footTracePos1;
  p_footTracePos2 = &pNode->footTracePos2;
  do
  {
    boneIndex = params->pNode->bones[3 * v7 + 5].boneIndex;
    if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
      __debugbreak();
    if ( boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
      __debugbreak();
    XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, &outModelQuat, &outModelTranslation);
    __asm { vmovss  xmm1, dword ptr [rsp+0D8h+var_98.v+8] }
    _RSI = params->pNode;
    v12 = 2;
    if ( v7 < 2 )
      v12 = v7;
    __asm { vaddss  xmm2, xmm1, dword ptr [rsi+3F8h] }
    _RCX = (__int64)*(&p_footTracePos0 + v12);
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+8]
      vsubss  xmm1, xmm0, xmm2
      vminss  xmm8, xmm1, xmm8
      vmovss  xmm0, cs:COS_INCLINED_ANGLE_THRESHOLD
    }
    _RAX = v7;
    __asm { vcomiss xmm0, dword ptr [rsi+rax*4+2A8h] }
    ++v7;
  }
  while ( (unsigned int)v7 < 3 );
  __asm { vmovss  xmm5, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff }
  _RBP = p_footTracePos0;
  _R14 = (__int64)p_footTracePos1;
  _R15 = (__int64)p_footTracePos2;
  _R8 = params->pNode;
  __asm
  {
    vmovss  xmm2, dword ptr [rbp+8]
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  xmm0, dword ptr [r15+8]
    vsubss  xmm3, xmm2, xmm0
    vsubss  xmm7, xmm1, xmm0
    vaddss  xmm0, xmm0, xmm1
    vsubss  xmm4, xmm2, xmm1
    vmulss  xmm1, xmm0, cs:__real@3f000000
    vsubss  xmm6, xmm1, xmm2
    vmovss  xmm1, cs:__real@3a83126f
    vsubss  xmm2, xmm2, dword ptr [r8+2A4h]
    vandps  xmm3, xmm3, xmm5
    vandps  xmm7, xmm7, xmm5
    vsubss  xmm0, xmm3, xmm7
    vandps  xmm0, xmm0, xmm5
    vcomiss xmm0, xmm1
    vandps  xmm4, xmm4, xmm5
    vsubss  xmm0, xmm4, xmm7
    vandps  xmm0, xmm0, xmm5
    vcomiss xmm0, xmm1
    vsubss  xmm0, xmm4, xmm3
    vmovss  xmm3, cs:BACK_FRONT_HEIGHTS_THRESHOLD
    vandps  xmm0, xmm0, xmm5
    vandps  xmm6, xmm6, xmm5
    vandps  xmm2, xmm2, xmm5
    vcomiss xmm0, xmm1
    vmovss  xmm1, dword ptr [r8+3E0h]
    vandps  xmm0, xmm1, xmm5
    vcomiss xmm0, cs:PIVOT_MOVED_THRESHOLD
    vcomiss xmm8, xmm1
    vcomiss xmm2, cs:THRESHOLD_CONSIDERED_UNEVEN
  }
  v50 = DCONST_DVARBOOL_turret_deploy_never_folded;
  if ( !DCONST_DVARBOOL_turret_deploy_never_folded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turret_deploy_never_folded") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v50);
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; max
    vmovaps xmm0, xmm8; val
  }
  params->pNode->poseIndex = 0;
  _RAX = params->pNode;
  __asm { vmovss  xmm1, dword ptr [rax+3E0h]; min }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  _RAX = params->pNode;
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@3f400000
    vmovss  dword ptr [rax+3E8h], xmm1
  }
  XAnimTurret_InitPseudoIkPose(params);
  _R11 = &v67;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
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
  __int64 *v16; 
  int v18; 
  unsigned __int8 boneIndex; 
  char v34; 
  char v35; 
  __int64 v36; 
  unsigned __int8 v37; 
  __int64 v45; 
  unsigned __int8 v46; 
  vec3_t b; 
  vec3_t a; 
  float4 outModelTranslation; 
  float4 v161; 
  float4 v162; 
  float4 outModelQuat; 
  float4 v164; 
  float4 v165; 
  _QWORD v166[3]; 
  char v170; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-0C8h], xmm15
  }
  pNode = params->pNode;
  v166[0] = &params->pNode->footTracePos0;
  _R13 = pNode->pseudoIkPose;
  v166[1] = &pNode->footTracePos1;
  v166[2] = &pNode->footTracePos2;
  memset_0(pNode->pseudoIkPose, 0, sizeof(pNode->pseudoIkPose));
  __asm
  {
    vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+1B8h+var_98], xmm12
  }
  v16 = v166;
  _EDI = 0;
  __asm
  {
    vmovaps [rsp+1B8h+var_A8], xmm13
    vmovaps [rsp+1B8h+var_B8], xmm14
  }
  do
  {
    v18 = 3 * _EDI;
    boneIndex = params->pNode->bones[3 * _EDI + 5].boneIndex;
    if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
      __debugbreak();
    if ( boneIndex >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
      __debugbreak();
    XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, boneIndex, &outModelQuat, &outModelTranslation);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+1B8h+var_148.v]
      vshufps xmm1, xmm0, xmm0, 55h ; 'U'
      vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
      vaddss  xmm7, xmm0, dword ptr [rax+3F0h]
      vaddss  xmm0, xmm2, dword ptr [rax+3F8h]
      vaddss  xmm6, xmm0, dword ptr [rax+3E8h]
      vaddss  xmm8, xmm1, dword ptr [rax+3F4h]
    }
    _RAX = *v16;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+4]
      vmovss  xmm15, dword ptr [rax]
      vmovss  [rsp+1B8h+var_178], xmm0
      vmovss  xmm0, dword ptr [rax+8]
      vaddss  xmm10, xmm0, cs:__real@40400000
      vsubss  xmm11, xmm6, xmm10
      vandps  xmm0, xmm11, xmm9
      vcomiss xmm0, cs:dispZAllowed
    }
    if ( !(v34 | v35) )
    {
      v36 = (unsigned int)(v18 + 3);
      v37 = params->pNode->bones[v36].boneIndex;
      if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
        __debugbreak();
      if ( v37 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
        __debugbreak();
      XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v37, &v164, &v161);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1B8h+var_138.v]
        vshufps xmm1, xmm0, xmm0, 55h ; 'U'
        vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
        vaddss  xmm12, xmm0, dword ptr [rax+3F0h]
        vaddss  xmm0, xmm2, dword ptr [rax+3F8h]
        vaddss  xmm14, xmm0, dword ptr [rax+3E8h]
        vaddss  xmm13, xmm1, dword ptr [rax+3F4h]
      }
      v45 = (unsigned int)(v18 + 4);
      v46 = params->pNode->bones[v45].boneIndex;
      if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 405, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
        __debugbreak();
      if ( v46 >= 0xFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 406, ASSERT_TYPE_ASSERT, "(boneIndex < 254)", (const char *)&queryFormat, "boneIndex < UNDEFINED_BONEINDEX") )
        __debugbreak();
      XAnimGetLocalBoneTransform(params->animCalcInfo, params->obj, params->destBuffer, v46, &v165, &v162);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+1B8h+var_128.v]
        vshufps xmm1, xmm0, xmm0, 55h ; 'U'
        vshufps xmm2, xmm0, xmm0, 0AAh ; 'ª'
        vaddss  xmm4, xmm0, dword ptr [rax+3F0h]
        vaddss  xmm3, xmm1, dword ptr [rax+3F4h]
        vaddss  xmm0, xmm2, dword ptr [rax+3F8h]
        vaddss  xmm1, xmm0, dword ptr [rax+3E8h]
        vsubss  xmm9, xmm6, xmm1
        vsubss  xmm6, xmm1, xmm14
        vsubss  xmm7, xmm7, xmm4
        vsubss  xmm5, xmm4, xmm12
        vsubss  xmm4, xmm3, xmm13
        vsubss  xmm8, xmm8, xmm3
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vmovss  xmm1, cs:__real@3f800000
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm2, xmm5
        vmulss  xmm1, xmm2, xmm4
        vmovss  dword ptr [rsp+1B8h+a], xmm0
        vmulss  xmm0, xmm6, xmm2
        vmovss  dword ptr [rsp+1B8h+a+8], xmm0
        vmovss  dword ptr [rsp+1B8h+a+4], xmm1
        vmulss  xmm1, xmm7, xmm7
        vmulss  xmm2, xmm8, xmm8
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm9, xmm9
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vxorps  xmm6, xmm1, cs:__xmm@80000000800000008000000080000000
        vcmpless xmm0, xmm1, cs:__real@80000000
        vmovss  xmm2, cs:__real@3f800000
        vblendvps xmm0, xmm1, xmm2, xmm0
        vdivss  xmm5, xmm2, xmm0
        vmulss  xmm0, xmm5, xmm7
        vmovss  xmm7, cs:__real@3f800000
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm4, xmm1, xmm15
        vmulss  xmm2, xmm5, xmm8
        vmulss  xmm0, xmm2, xmm6
        vaddss  xmm3, xmm0, [rsp+1B8h+var_178]
        vmulss  xmm1, xmm5, xmm9
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm0, xmm2, xmm10
        vsubss  xmm6, xmm0, xmm14
        vsubss  xmm5, xmm4, xmm12
        vsubss  xmm4, xmm3, xmm13
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm3, xmm2, xmm2
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm7, xmm0
        vdivss  xmm2, xmm7, xmm0
        vmulss  xmm0, xmm2, xmm5
        vmovss  dword ptr [rsp+1B8h+b], xmm0
        vmulss  xmm0, xmm2, xmm6
        vmulss  xmm1, xmm2, xmm4
        vmovss  dword ptr [rsp+1B8h+b+8], xmm0
        vmovss  dword ptr [rsp+1B8h+b+4], xmm1
      }
      *(double *)&_XMM0 = AngleBetween(&a, &b);
      __asm
      {
        vmovss  xmm10, cs:__real@bf800000
        vmovss  xmm9, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vmovaps xmm5, xmm0
      }
      _ESI = 0;
      _RAX = v36;
      __asm
      {
        vmovd   xmm2, esi
        vxorps  xmm8, xmm8, xmm8
        vcmpless xmm1, xmm8, xmm11
        vblendvps xmm4, xmm10, xmm7, xmm1
        vmovd   xmm1, edi
        vpcmpeqd xmm3, xmm1, xmm2
        vblendvps xmm1, xmm10, xmm7, xmm3
        vmulss  xmm0, xmm4, xmm1
        vmulss  xmm6, xmm5, xmm0
        vmovd   xmm1, esi
        vmovd   xmm0, edi
        vpcmpeqd xmm2, xmm0, xmm1
        vmovss  xmm1, cs:__real@42820000
        vmovss  xmm0, cs:__real@42480000
        vblendvps xmm0, xmm1, xmm0, xmm2
        vandps  xmm3, xmm6, xmm9
        vdivss  xmm0, xmm3, xmm0; val
        vmovaps xmm2, xmm7; max
        vxorps  xmm1, xmm1, xmm1; min
        vmovss  dword ptr [r13+rax*4+0], xmm6
      }
      *(_QWORD *)&_R13[_RAX].y = 0i64;
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm1
        vmulss  xmm2, xmm0, cs:__real@41400000
        vxorps  xmm1, xmm2, cs:__xmm@80000000800000008000000080000000
      }
      _RAX = v45;
      __asm
      {
        vcmpless xmm0, xmm8, xmm6
        vblendvps xmm3, xmm1, xmm2, xmm0
        vmovd   xmm1, esi
        vmovd   xmm0, edi
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm7, xmm10, xmm2
        vmulss  xmm1, xmm3, xmm0
        vsubss  xmm2, xmm1, xmm6
        vmovss  dword ptr [r13+rax*4+0], xmm2
      }
      *(_QWORD *)&_R13[_RAX].y = 0i64;
    }
    ++_EDI;
    ++v16;
  }
  while ( _EDI < 3 );
  __asm
  {
    vmovaps xmm14, [rsp+1B8h+var_B8]
    vmovaps xmm13, [rsp+1B8h+var_A8]
    vmovaps xmm12, [rsp+1B8h+var_98]
  }
  _R11 = &v170;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
XAnimTurret_PreCalc
==============
*/
void XAnimTurret_PreCalc(XAnimTurretParams *params, DObjPartBits *savedPartBits)
{
  unsigned int v5; 
  unsigned int v6; 
  DObjPartBits *p_partBits; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 boneIndex; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RSI = params;
  if ( !XAnimTurretParams::IsValid(params) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_turret.cpp", 456, ASSERT_TYPE_ASSERT, "(params.IsValid())", (const char *)&queryFormat, "params.IsValid()") )
    __debugbreak();
  v5 = 0;
  v6 = 0;
  p_partBits = &_RSI->pNode->partBits;
  while ( !p_partBits->array[0] )
  {
    ++v6;
    p_partBits = (DObjPartBits *)((char *)p_partBits + 4);
    if ( v6 >= 8 )
    {
      v8 = 0i64;
      v9 = 12i64;
      do
      {
        boneIndex = _RSI->pNode->bones[v8++].boneIndex;
        _RSI->pNode->partBits.array[boneIndex >> 5] |= 0x80000000 >> (boneIndex & 0x1F);
        --v9;
      }
      while ( v9 );
      DObjCompleteHierarchyBits(_RSI->obj, &_RSI->pNode->partBits);
      break;
    }
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(savedPartBits, _RSI->animCalcInfo->partBits);
  _RDI = _RSI->animCalcInfo->partBits;
  _RBP = (char *)((char *)&_RSI->pNode->partBits - (char *)_RDI);
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rdi+rbp]
      vlddqu  xmm0, xmmword ptr [rdi]
      vpor    xmm6, xmm0, xmm6
      vmovdqu xmmword ptr [rdi], xmm6
    }
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v5;
  }
  while ( v5 < 2 );
  __asm { vmovss  xmm3, dword ptr [rsi+20h]; weightScale }
  XAnimCalcDefaultBlendNode(_RSI->animCalcInfo, _RSI->obj, _RSI->animInfo, *(float *)&_XMM3, _RSI->bNormQuat, _RSI->destBuffer, LINEAR);
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
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


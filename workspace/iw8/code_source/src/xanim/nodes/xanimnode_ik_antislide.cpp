/*
==============
XAnimNode_IKAntiSlide_GetOriginBoneWorld
==============
*/

void __fastcall XAnimNode_IKAntiSlide_GetOriginBoneWorld(const XAnimNode_IKAntiSlide *antiSlide, vec3_t *outOrigin)
{
  ?XAnimNode_IKAntiSlide_GetOriginBoneWorld@@YAXPEBUXAnimNode_IKAntiSlide@@AEATvec3_t@@@Z(antiSlide, outOrigin);
}

/*
==============
XAnimNode_IKAntiSlide_Register
==============
*/

void XAnimNode_IKAntiSlide_Register(void)
{
  ?XAnimNode_IKAntiSlide_Register@@YAXXZ();
}

/*
==============
XAnimNode_IKAntiSlide_DrawDebug
==============
*/

void __fastcall XAnimNode_IKAntiSlide_DrawDebug(const DObj *obj)
{
  ?XAnimNode_IKAntiSlide_DrawDebug@@YAXPEBUDObj@@@Z(obj);
}

/*
==============
XAnimNode_IKAntiSlide_SetOriginBoneWorld
==============
*/

void __fastcall XAnimNode_IKAntiSlide_SetOriginBoneWorld(XAnimNode_IKAntiSlide *antiSlide, const vec3_t *origin)
{
  ?XAnimNode_IKAntiSlide_SetOriginBoneWorld@@YAXPEAUXAnimNode_IKAntiSlide@@AEBTvec3_t@@@Z(antiSlide, origin);
}

/*
==============
XAnimNode_IKAntiSlide_DrawDebug_r
==============
*/

bool __fastcall XAnimNode_IKAntiSlide_DrawDebug_r(const XAnimTree *tree, unsigned __int16 infoIndex)
{
  return ?XAnimNode_IKAntiSlide_DrawDebug_r@@YA_NPEBUXAnimTree@@G@Z(tree, infoIndex);
}

/*
==============
XAnimNode_IKAntiSlide_Destroy
==============
*/
void XAnimNode_IKAntiSlide_Destroy(void *nodeData)
{
  ;
}

/*
==============
XAnimNode_IKAntiSlide_Update
==============
*/
void XAnimNode_IKAntiSlide_Update(void *nodeData, const DObj *obj, XAnimInfo *animInfo, unsigned __int16 animInfoIndex, float dtime)
{
  const dvar_t *v7; 
  __int16 v11; 
  int v12; 
  refdef_t *v13; 
  int modelIndex[6]; 

  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 172, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  v7 = DVARBOOL_xanim_ik_antislide_enable;
  if ( !DVARBOOL_xanim_ik_antislide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled && *((_BYTE *)nodeData + 4) )
  {
    __asm
    {
      vmovss  xmm0, [rsp+58h+dtime]
      vmulss  xmm1, xmm0, cs:__real@447a0000
      vcvttss2si ebx, xmm1
    }
    v11 = I_clamp(*((__int16 *)nodeData + 5) - _EBX, 0, 0x7FFF);
    v12 = *((__int16 *)nodeData + 53) - _EBX;
    *((_WORD *)nodeData + 5) = v11;
    *((_WORD *)nodeData + 53) = I_clamp(v12, 0, 0x7FFF);
    if ( *((_BYTE *)nodeData + 5) == 0xFE )
      DObjGetBoneIndexInternal_29(obj, scr_const.tag_origin, (unsigned __int8 *)nodeData + 5, modelIndex);
    *((_QWORD *)nodeData + 25) = 0i64;
    *((_DWORD *)nodeData + 52) = 0;
    v13 = g_activeRefDef;
    if ( g_activeRefDef )
    {
      *((_DWORD *)nodeData + 50) = LODWORD(g_activeRefDef->viewOffset.v[0]);
      *((_DWORD *)nodeData + 51) = LODWORD(v13->viewOffset.v[1]);
      *((_DWORD *)nodeData + 52) = LODWORD(v13->viewOffset.v[2]);
    }
  }
}

/*
==============
XAnimNode_IKAntiSlide_Read
==============
*/
void XAnimNode_IKAntiSlide_Read(void *nodeData, MemoryFile *memFile)
{
  vec3_t origin; 
  __int16 p; 

  _RBX = (XAnimNode_IKAntiSlide *)nodeData;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX->initialized = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX->originBoneIndex = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+0D4h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+0D8h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+0DCh], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsp+48h+origin], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsp+48h+origin+4], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rsp+48h+origin+8], xmm0 }
  XAnimNode_IKAntiSlide_SetOriginBoneWorld(_RBX, &origin);
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+0C8h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+0CCh], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+0D0h], xmm0 }
  MemFile_ReadData(memFile, 0x20ui64, &_RBX->partBits);
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX->footState[0].state[0] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+10h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+14h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+18h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+1Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+20h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+24h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+28h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+2Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+30h], xmm0 }
  MemFile_ReadData(memFile, 2ui64, &p);
  _RBX->footState[0].remainingTime = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  _RBX->footState[0].goalTime = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  _RBX->footState[1].state[0] = p;
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+70h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+74h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+78h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+7Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+80h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+84h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+88h], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+8Ch], xmm0 }
  *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
  __asm { vmovss  dword ptr [rbx+90h], xmm0 }
  MemFile_ReadData(memFile, 2ui64, &p);
  _RBX->footState[1].remainingTime = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  _RBX->footState[1].goalTime = p;
  memset(&origin, 0, sizeof(origin));
}

/*
==============
XAnimNode_IKAntiSlide_Write
==============
*/
void XAnimNode_IKAntiSlide_Write(void *nodeData, MemoryFile *memFile)
{
  vec3_t outOrigin; 
  __int16 p; 

  LOBYTE(p) = *((_BYTE *)nodeData + 4);
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 5);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 212);
  XAnimNode_IKAntiSlide_GetOriginBoneWorld((const XAnimNode_IKAntiSlide *)nodeData, &outOrigin);
  MemFile_WriteData(memFile, 0xCui64, &outOrigin);
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 200);
  MemFile_WriteData(memFile, 0x20ui64, (char *)nodeData + 236);
  LOBYTE(p) = *((_BYTE *)nodeData + 8);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 16);
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 28);
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 40);
  p = *((_WORD *)nodeData + 5);
  MemFile_WriteData(memFile, 2ui64, &p);
  p = *((_WORD *)nodeData + 6);
  MemFile_WriteData(memFile, 2ui64, &p);
  LOBYTE(p) = *((_BYTE *)nodeData + 104);
  MemFile_WriteData(memFile, 1ui64, &p);
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 112);
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 124);
  MemFile_WriteData(memFile, 0xCui64, (char *)nodeData + 136);
  p = *((_WORD *)nodeData + 53);
  MemFile_WriteData(memFile, 2ui64, &p);
  p = *((_WORD *)nodeData + 54);
  MemFile_WriteData(memFile, 2ui64, &p);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
XAnimNode_IKAntiSlide_Init
==============
*/
void XAnimNode_IKAntiSlide_Init(void *nodeData, const XAnim_s *anims, unsigned int animIndex)
{
  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 142, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 143, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  *(_DWORD *)nodeData = 0;
  memset_0((char *)nodeData + 8, 0, 0xC0ui64);
  *((_WORD *)nodeData + 2) = -511;
  *(_QWORD *)((char *)nodeData + 212) = 0i64;
  *((_DWORD *)nodeData + 55) = 0;
  *((_QWORD *)nodeData + 25) = 0i64;
  *((_DWORD *)nodeData + 52) = 0;
  SetSecureRootVec3(&vec3_origin, (vec3_t *)((char *)nodeData + 224), s_ikanticlide_aab_X, s_ikanticlide_aab_Y, s_ikanticlide_aab_Z);
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits((bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *)((char *)nodeData + 236));
}

/*
==============
XAnimNode_IKAntiSlide_PostParse
==============
*/
char XAnimNode_IKAntiSlide_PostParse(XAnim_s *anims, unsigned int animIndex)
{
  __int64 v5; 

  if ( !anims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 131, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
    __debugbreak();
  if ( animIndex >= anims->size )
  {
    LODWORD(v5) = animIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 132, ASSERT_TYPE_ASSERT, "(unsigned)( animIndex ) < (unsigned)( anims->size )", "animIndex doesn't index anims->size\n\t%i not in [0, %i)", v5, anims->size) )
      __debugbreak();
  }
  return 1;
}

/*
==============
XAnimNode_IKAntiSlide_Calc
==============
*/
void XAnimNode_IKAntiSlide_Calc(void *nodeData, XAnimCalcAnimInfo *animCalcInfo, const DObj *obj, const XAnimInfo *animInfo, float weightScale, bool bNormQuat, XAnimCalcBuffer *destBuffer)
{
  const dvar_t *v21; 
  XAnimIKCalcInfo *ikCalcInfo; 
  unsigned int v23; 
  unsigned __int64 v24; 
  __int64 v25; 
  char *dObjData; 
  char *v27; 
  unsigned __int64 v28; 
  bool v29; 
  unsigned int v30; 
  __int64 v31; 
  unsigned __int16 v32; 
  unsigned int v33; 
  bitarray_base<bitarray<256> > *p_partBits; 
  DObjPartBits *v35; 
  __int64 v36; 
  __int64 *v37; 
  __int64 v38; 
  __int64 v39; 
  int v40; 
  XAnimCalcAnimInfo *v41; 
  unsigned int i; 
  XAnimCalcBuffer *v48; 
  __int64 *v91; 
  float4 *v93; 
  XAnimCalcAnimInfo *v94; 
  DObj *v95; 
  __int64 v96; 
  unsigned int v131; 
  char v139; 
  char v141; 
  XAnimCalcAnimInfo *v143; 
  const dvar_t *v161; 
  unsigned int v166; 
  XAnimCalcAnimInfo *v167; 
  unsigned __int8 v316; 
  unsigned __int8 v317; 
  bool v318; 
  char v319; 
  bool v320; 
  bool v336; 
  bool v337; 
  unsigned __int16 v338; 
  char v340; 
  unsigned __int16 Int_Internal_DebugName; 
  int v351; 
  _BOOL8 v352; 
  unsigned __int8 v377; 
  const char *v410; 
  const dvar_t *v411; 
  char v412; 
  char v413; 
  bool v427; 
  int v429; 
  __int16 v430; 
  bool v522; 
  _BYTE *v543; 
  char v544; 
  char v545; 
  _BOOL8 v549; 
  __int64 v550; 
  __int64 v551; 
  unsigned __int16 v552; 
  int *v553; 
  __int64 *v554; 
  const float4 *fmt; 
  XAnimCalcBuffer *v576; 
  const float4 *v577; 
  __int64 calcMode; 
  float calcModea; 
  unsigned __int8 v580; 
  int v581; 
  int v582; 
  int v583; 
  int v584; 
  int v585; 
  int v586; 
  int v587; 
  int v588; 
  int v589; 
  int v590; 
  int v591; 
  int v592; 
  int v594; 
  char v595; 
  unsigned __int16 v596; 
  int idx; 
  char v598[4]; 
  __int64 v599; 
  XAnimCalcAnimInfo *animInfoa; 
  unsigned __int16 outBlendoutTime[2]; 
  int v602; 
  DObj *obja; 
  XAnimCalcBuffer *buffer; 
  float outThreshold[3]; 
  XAnimInfo *info; 
  vec3_t outOrigin; 
  __int64 v622[2]; 
  __int64 v624; 
  __int128 v627; 
  vec3_t v629; 
  vec3_t in1; 
  vec3_t v; 
  vec3_t v632; 
  vec3_t origin; 
  vec3_t v634; 
  XAnimNode_IKAntiSlide_Capsule capsuleA; 
  vec3_t v637; 
  vec3_t v638; 
  XAnimNode_IKAntiSlide_Capsule capsuleB; 
  __int128 v640; 
  __int128 v641; 
  __int128 v642; 
  __int128 v643; 
  __int128 v644; 
  vec4_t v645; 
  tmat33_t<vec3_t> axis; 
  float4 outModelTranslation; 
  float4 outModelQuat; 
  vec4_t quat; 
  float4 v650; 
  float4 v651; 
  float4 v652; 
  float4 outTranslation; 
  tmat43_t<vec3_t> v654; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  tmat43_t<vec3_t> out; 
  int v658[20]; 
  int v659[18]; 
  float4 v660; 
  char v662; 
  void *retaddr; 

  _RAX = &retaddr;
  v624 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
    vmovaps xmmword ptr [rax-88h], xmm9
    vmovaps xmmword ptr [rax-98h], xmm10
    vmovaps xmmword ptr [rax-0A8h], xmm11
    vmovaps xmmword ptr [rax-0B8h], xmm12
    vmovaps xmmword ptr [rax-0C8h], xmm13
    vmovaps xmmword ptr [rax-0D8h], xmm14
    vmovaps xmmword ptr [rax-0E8h], xmm15
  }
  info = (XAnimInfo *)animInfo;
  obja = (DObj *)obj;
  animInfoa = animCalcInfo;
  _RSI = (XAnimNode_IKAntiSlide *)nodeData;
  *(_QWORD *)&v640 = nodeData;
  buffer = destBuffer;
  Profile_Begin(434);
  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 287, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  v21 = DVARBOOL_xanim_ik_antislide_enable;
  if ( !DVARBOOL_xanim_ik_antislide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  if ( !v21->current.enabled )
    goto LABEL_200;
  if ( !_RSI->initialized )
    goto LABEL_200;
  if ( _RSI->originBoneIndex == 0xFE )
    goto LABEL_200;
  ikCalcInfo = animCalcInfo->ikCalcInfo;
  if ( !ikCalcInfo->dObjData || !ikCalcInfo->ikData )
    goto LABEL_200;
  v596 = 255;
  v23 = 0;
  v24 = 0i64;
  do
  {
    v25 = 28i64 * (v23 + 2);
    dObjData = (char *)animCalcInfo->ikCalcInfo->dObjData;
    v27 = &dObjData[v25 + 68];
    v622[v24] = (__int64)v27;
    *((_BYTE *)&v594 + v24) = 1;
    v28 = *(unsigned int *)&dObjData[v25 + 84];
    if ( (*(_DWORD *)&dObjData[v25 + 84] & 0x8000) != 0 )
    {
      v29 = (obja->skel.partBits.skel.array[7] & 2) != 0;
    }
    else
    {
      if ( (unsigned int)v28 >= 0x100 )
      {
        LODWORD(calcMode) = 256;
        LODWORD(v576) = *(_DWORD *)&dObjData[v25 + 84];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v576, calcMode) )
          __debugbreak();
      }
      dObjData = (char *)obja;
      v29 = ((0x80000000 >> (v28 & 0x1F)) & obja->skel.partBits.skel.array[v28 >> 5]) != 0;
    }
    v598[v24] = v29;
    if ( !*(_DWORD *)v27 || (v30 = *((_DWORD *)v27 + 4), v30 == 255) )
    {
      if ( v24 >= 2 )
      {
        j___report_rangecheckfailure(dObjData);
        __debugbreak();
      }
    }
    else
    {
      if ( !bitarray_base<bitarray<256>>::testBit(&animCalcInfo->ignorePartBits, v30) )
        goto LABEL_26;
      if ( v24 >= 2 )
      {
        j___report_rangecheckfailure(v31);
        JUMPOUT(0x1418EC8D2i64);
      }
    }
    *((_BYTE *)&v594 + v24) = 0;
LABEL_26:
    v32 = truncate_cast<unsigned short,unsigned int>(*((_DWORD *)v27 + 6));
    if ( v596 == 255 )
    {
      v596 = v32;
    }
    else if ( v32 != 255 && v32 != v596 )
    {
      LODWORD(v576) = v32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 344, ASSERT_TYPE_ASSERT, "( ( footFloatTrackBoneIndex == 255 || footFloatTrackBoneIndex == floatTrackBoneIndex ) )", "( footFloatTrackBoneIndex ) = %i", v576) )
        __debugbreak();
    }
    ++v23;
    ++v24;
  }
  while ( v23 < 2 );
  if ( !(_WORD)v594 )
  {
LABEL_200:
    Profile_EndInternal(NULL);
    goto LABEL_201;
  }
  v33 = 0;
  p_partBits = &_RSI->partBits;
  v35 = &_RSI->partBits;
  while ( 1 )
  {
    v36 = 2i64;
    if ( v35->array[0] )
      break;
    ++v33;
    v35 = (DObjPartBits *)((char *)v35 + 4);
    if ( v33 >= 8 )
    {
      v37 = v622;
      v38 = 2i64;
      do
      {
        v39 = *v37;
        bitarray_base<bitarray<256>>::setBit(p_partBits, *(_DWORD *)(*v37 + 16));
        bitarray_base<bitarray<256>>::setBit(p_partBits, *(_DWORD *)(v39 + 12));
        v40 = *(_DWORD *)(v39 + 24);
        if ( v40 != 255 )
          XAnimSetPartBit((DObjPartBits *)p_partBits, v40);
        ++v37;
        --v38;
      }
      while ( v38 );
      DObjCompleteHierarchyBits(obja, (DObjPartBits *)p_partBits);
      _RSI = (XAnimNode_IKAntiSlide *)v640;
      break;
    }
  }
  v41 = animInfoa;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, animInfoa->partBits);
  _R13 = v41->partBits;
  for ( i = 0; i < 2; ++i )
  {
    _R15 = 2i64 * i;
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rsi+r15*8+0ECh]
      vlddqu  xmm0, xmmword ptr [r13+r15*8+0]
      vpor    xmm6, xmm0, xmm6
      vmovdqu xmmword ptr [r13+r15*8+0], xmm6
    }
  }
  v48 = buffer;
  __asm { vmovss  xmm3, [rbp+4C0h+weightScale]; weightScale }
  XAnimCalcDefaultBlendNode(animInfoa, obja, info, *(float *)&_XMM3, bNormQuat, buffer, LINEAR);
  LOBYTE(v602) = 0;
  LOWORD(v599) = 0;
  XAnimGetLocalBoneTransform(animInfoa, obja, v48, _RSI->originBoneIndex, &outModelQuat, &outModelTranslation);
  __asm
  {
    vmovups xmm6, xmmword ptr [rbp+4C0h+outModelTranslation.v]
    vmovups [rbp+4C0h+var_490], xmm6
    vmovdqa [rbp+4C0h+var_3D0], xmm6
    vmovups [rbp+4C0h+var_3D0], xmm6
    vmovups [rbp+4C0h+var_3D0], xmm6
    vshufps xmm7, xmm6, xmm6, 55h ; 'U'
    vmovups [rbp+4C0h+var_3D0], xmm7
    vmovups [rbp+4C0h+var_3D0], xmm6
    vshufps xmm12, xmm6, xmm6, 0AAh ; 'ª'
    vmovups [rbp+4C0h+var_3D0], xmm12
    vmovups xmm0, xmmword ptr [rbp+4C0h+outModelQuat.v]
    vmovups xmmword ptr [rbp+4C0h+var_460], xmm0
    vmovups xmmword ptr [rbp+4C0h+quat], xmm0
  }
  QuatToAxis(&quat, &axis);
  __asm
  {
    vaddss  xmm0, xmm6, dword ptr [rsi+0C8h]
    vmovss  dword ptr [rbp+4C0h+origin], xmm0
    vaddss  xmm1, xmm7, dword ptr [rsi+0CCh]
    vmovss  dword ptr [rbp+4C0h+origin+4], xmm1
    vaddss  xmm0, xmm12, dword ptr [rsi+0D0h]
    vmovss  dword ptr [rbp+4C0h+origin+8], xmm0
  }
  XAnimNode_IKAntiSlide_GetOriginBoneWorld(_RSI, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4C0h+origin]
    vsubss  xmm6, xmm0, dword ptr [rbp+4C0h+outOrigin]
    vmovss  xmm1, dword ptr [rbp+4C0h+origin+4]
    vsubss  xmm5, xmm1, dword ptr [rbp+4C0h+outOrigin+4]
    vmovss  xmm0, dword ptr [rbp+4C0h+origin+8]
    vsubss  xmm4, xmm0, dword ptr [rbp+4C0h+outOrigin+8]
    vmulss  xmm2, xmm5, xmm5
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm1, xmm2, xmm2
    vcmpless xmm0, xmm1, cs:__real@80000000
    vmovss  xmm15, cs:__real@3f800000
    vblendvps xmm1, xmm1, xmm15, xmm0
    vmovss  dword ptr [rbp+4C0h+info], xmm1
    vdivss  xmm0, xmm15, xmm1
    vmulss  xmm7, xmm0, xmm6
    vmulss  xmm6, xmm0, xmm5
    vmulss  xmm8, xmm0, xmm4
  }
  XAnimNode_IKAntiSlide_SetOriginBoneWorld(_RSI, &origin);
  __asm
  {
    vmulss  xmm1, xmm6, dword ptr [rbp+4C0h+axis+10h]
    vmulss  xmm0, xmm7, dword ptr [rbp+4C0h+axis+0Ch]
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbp+4C0h+axis+14h]
    vaddss  xmm3, xmm2, xmm1
    vmovss  [rbp+4C0h+var_4D4], xmm3
    vmulss  xmm3, xmm6, dword ptr [rbp+4C0h+axis+4]
    vmulss  xmm0, xmm7, dword ptr [rbp+4C0h+axis]
    vaddss  xmm2, xmm3, xmm0
    vmulss  xmm1, xmm8, dword ptr [rbp+4C0h+axis+8]
    vaddss  xmm0, xmm2, xmm1
    vmovss  dword ptr [rbp+4C0h+info], xmm0
  }
  v91 = v622;
  _R15 = v658;
  v93 = &v660;
  v94 = animInfoa;
  v95 = obja;
  do
  {
    v96 = *v91;
    XAnimGetLocalBoneTransform(v94, v95, buffer, *(_DWORD *)(*v91 + 4), v93 - 1, &v650);
    XAnimGetLocalBoneTransform(v94, v95, buffer, *(_DWORD *)(v96 + 8), v93, &v651);
    XAnimGetLocalBoneTransform(v94, v95, buffer, *(_DWORD *)(v96 + 16), v93 + 1, &v652);
    __asm
    {
      vmovups xmm1, xmmword ptr [rbp+4C0h+var_2B0.v]
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
      vmovss  dword ptr [r15-8], xmm1
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
      vshufps xmm0, xmm1, xmm1, 55h ; 'U'
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm0
      vmovss  dword ptr [r15-4], xmm0
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
      vshufps xmm1, xmm1, xmm1, 0AAh ; 'ª'
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
      vmovss  dword ptr [r15], xmm1
      vmovups xmm2, xmmword ptr [rbp+4C0h+var_2A0.v]
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm2
      vmovss  dword ptr [r15+4], xmm2
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm2
      vshufps xmm0, xmm2, xmm2, 55h ; 'U'
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm0
      vmovss  dword ptr [r15+8], xmm0
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm2
      vshufps xmm1, xmm2, xmm2, 0AAh ; 'ª'
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
      vmovss  dword ptr [r15+0Ch], xmm1
      vmovups xmm2, xmmword ptr [rbp+4C0h+var_290.v]
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm2
      vmovss  dword ptr [r15+10h], xmm2
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm2
      vshufps xmm0, xmm2, xmm2, 55h ; 'U'
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm0
      vmovss  dword ptr [r15+14h], xmm0
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm2
      vshufps xmm1, xmm2, xmm2, 0AAh ; 'ª'
      vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
      vmovss  dword ptr [r15+18h], xmm1
    }
    v93 += 3;
    ++v91;
    _R15 += 9;
    --v36;
  }
  while ( v36 );
  _RSI = v640;
  __asm
  {
    vmovss  xmm2, dword ptr [rsi+0D8h]
    vmovss  xmm0, dword ptr [rsi+0D4h]
    vmovss  xmm3, dword ptr [rsi+0DCh]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm4, xmm2, xmm1
    vxorps  xmm10, xmm10, xmm10
    vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm4, xmm10
  }
  v131 = 0;
  __asm
  {
    vmovss  xmm0, [rbp+4C0h+var_1D8]
    vsubss  xmm6, xmm0, xmm12
    vandps  xmm6, xmm6, xmm7
    vmovss  xmm0, [rbp+4C0h+var_1B4]
    vsubss  xmm8, xmm0, xmm12
    vandps  xmm8, xmm8, xmm7
  }
  if ( !(_BYTE)v594 && !v598[0] )
    goto LABEL_53;
  _RDI = DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold;
  if ( !DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_crouch_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vcomiss xmm6, dword ptr [rdi+28h] }
  if ( v319 )
    v139 = 1;
  else
LABEL_53:
    v139 = 0;
  if ( !BYTE1(v594) && !v598[1] )
    goto LABEL_61;
  _RDI = DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold;
  if ( !DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_crouch_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vcomiss xmm8, dword ptr [rdi+28h] }
  if ( v319 )
    v141 = 1;
  else
LABEL_61:
    v141 = 0;
  v595 = v139 | v141;
  __asm { vmovss  xmm0, dword ptr [rsi]; speed }
  XAnimNode_IKAntiSlide_GetParametersBySpeed(*(float *)&_XMM0, outThreshold, outBlendoutTime);
  v143 = animInfoa;
  if ( v596 == 255 )
  {
    __asm
    {
      vmovss  dword ptr [rbp+4C0h+var_450], xmm10
      vmovss  dword ptr [rbp+4C0h+var_450+4], xmm10
      vmovss  dword ptr [rbp+4C0h+var_450+8], xmm10
    }
LABEL_78:
    __asm
    {
      vxorps  xmm11, xmm11, xmm11
      vxorps  xmm13, xmm13, xmm13
      vxorps  xmm14, xmm14, xmm14
    }
    goto LABEL_79;
  }
  XAnimGetParentRelativeBoneTranslationRelativeToBasePose(animInfoa, obja, buffer, v596, &outTranslation);
  __asm
  {
    vmovups xmm1, xmmword ptr [rbp+4C0h+outTranslation.v]
    vmovdqa xmmword ptr [rbp+4C0h+var_460], xmm1
    vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
    vmovss  dword ptr [rbp+4C0h+var_450], xmm1
    vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
    vmovups xmmword ptr [rbp+4C0h+var_460], xmm0
    vmovss  dword ptr [rbp+4C0h+var_450+4], xmm0
    vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
    vshufps xmm1, xmm1, xmm1, 0AAh ; 'ª'
    vmovups xmmword ptr [rbp+4C0h+var_460], xmm1
    vmovss  dword ptr [rbp+4C0h+var_450+8], xmm1
  }
  _RDI = DCONST_DVARFLT_xanim_ik_antislide_floatTrackRange;
  if ( !DCONST_DVARFLT_xanim_ik_antislide_floatTrackRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_floatTrackRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vucomiss xmm6, xmm10
  }
  if ( v320 )
  {
    v577 = (const float4 *)"range != 0.0f";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 448, ASSERT_TYPE_ASSERT, "(range != 0.0f)", (const char *)&queryFormat) )
      __debugbreak();
  }
  __asm
  {
    vdivss  xmm6, xmm15, xmm6
    vmulss  xmm0, xmm6, dword ptr [rbp+4C0h+var_450]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rbp+4C0h+var_450], xmm0
    vmulss  xmm0, xmm6, dword ptr [rbp+4C0h+var_450+4]; val
    vmovaps xmm2, xmm15; max
    vxorps  xmm1, xmm1, xmm1; min
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm { vmovss  dword ptr [rbp+4C0h+var_450+4], xmm0 }
  v161 = DCONST_DVARBOOL_xanim_ik_antislide_enable_foot_pin_offset;
  if ( !DCONST_DVARBOOL_xanim_ik_antislide_enable_foot_pin_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable_foot_pin_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v161);
  if ( !v161->current.enabled )
    goto LABEL_78;
  _RDI = DCONST_DVARVEC3_xanim_ik_antislide_foot_pin_offset;
  if ( !DCONST_DVARVEC3_xanim_ik_antislide_foot_pin_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_foot_pin_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm11, dword ptr [rdi+28h]
    vmovss  xmm13, dword ptr [rdi+2Ch]
    vmovss  xmm14, dword ptr [rdi+30h]
  }
LABEL_79:
  __asm
  {
    vmovss  [rbp+4C0h+var_510], xmm14
    vmovss  [rbp+4C0h+var_514], xmm13
    vmovss  [rbp+4C0h+var_518], xmm11
  }
  v166 = 0;
  idx = 0;
  v167 = NULL;
  animInfoa = NULL;
  while ( 2 )
  {
    if ( !*((_BYTE *)&v594 + (_QWORD)v167) )
      goto LABEL_182;
    _RDI = 9i64 * (_QWORD)v167;
    __asm
    {
      vmovss  xmm4, [rbp+rdi*4+4C0h+var_1E0]
      vmovss  xmm5, [rbp+rdi*4+4C0h+var_1DC]
      vmovss  xmm6, [rbp+rdi*4+4C0h+var_1D8]
    }
    HIDWORD(v641) = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+150h]
      vmovss  xmm0, xmm0, xmm4
      vinsertps xmm0, xmm0, xmm5, 10h
      vinsertps xmm0, xmm0, xmm6, 20h ; ' '
      vmovups xmmword ptr [rbp+150h], xmm0
      vmovdqa [rbp+4C0h+var_4F0], xmm0
      vmovdqa [rbp+4C0h+var_4F0], xmm0
      vmovss  xmm3, [rbp+rdi*4+4C0h+var_1D4]
    }
    HIDWORD(v644) = 0;
    __asm
    {
      vmovups xmm2, xmmword ptr [rbp+180h]
      vmovss  xmm2, xmm2, xmm3
      vinsertps xmm2, xmm2, [rbp+rdi*4+4C0h+var_1D0], 4C0h+var_4B0
      vinsertps xmm2, xmm2, [rbp+rdi*4+4C0h+var_1CC], 4C0h+var_4A0
      vmovups xmmword ptr [rbp+180h], xmm2
      vmovdqa [rbp+4C0h+var_4F0], xmm2
      vmovdqa [rbp+4C0h+var_4F0], xmm2
      vmovdqa [rbp+4C0h+var_4F0], xmm2
      vmovss  xmm0, [rbp+rdi*4+4C0h+var_1C8]
    }
    HIDWORD(v642) = 0;
    __asm
    {
      vmovups xmm8, xmmword ptr [rbp+160h]
      vmovss  xmm8, xmm8, xmm0
      vinsertps xmm8, xmm8, [rbp+rdi*4+4C0h+var_1C4], 4C0h+var_4B0
      vinsertps xmm8, xmm8, [rbp+rdi*4+4C0h+var_1C0], 4C0h+var_4A0
      vmovups xmmword ptr [rbp+160h], xmm8
      vmovdqa [rbp+4C0h+var_4F0], xmm8
      vmovdqa [rbp+4C0h+var_4F0], xmm8
      vmovdqa [rbp+4C0h+var_4F0], xmm8
    }
    _RAX = 6i64 * (_QWORD)v167;
    __asm
    {
      vmovups xmm0, [rbp+rax*8+4C0h+var_150]
      vmovups [rbp+4C0h+var_4F0], xmm0
      vmovups xmm0, xmmword ptr [rbp+rax*8+4C0h+var_140.v]
      vmovups [rbp+4C0h+var_480], xmm0
      vmovups xmm9, [rbp+rax*8+4C0h+var_130]
      vmovss  xmm0, dword ptr [rsi+0C8h]
      vaddss  xmm1, xmm0, xmm4
      vmovss  [rbp+4C0h+var_500], xmm1
      vaddss  xmm1, xmm5, dword ptr [rsi+0CCh]
      vmovss  [rbp+4C0h+var_4FC], xmm1
      vaddss  xmm1, xmm6, dword ptr [rsi+0D0h]
      vmovss  [rbp+4C0h+var_53C], xmm1
      vaddss  xmm0, xmm0, xmm3
      vmovss  dword ptr [rbp+4C0h+in1], xmm0
      vmovss  xmm1, [rbp+rdi*4+4C0h+var_1D0]
      vaddss  xmm2, xmm1, dword ptr [rsi+0CCh]
      vmovss  dword ptr [rbp+4C0h+in1+4], xmm2
      vmovss  xmm0, [rbp+rdi*4+4C0h+var_1CC]
      vaddss  xmm1, xmm0, dword ptr [rsi+0D0h]
      vmovss  dword ptr [rbp+4C0h+in1+8], xmm1
      vmovss  xmm0, dword ptr [rsi+0C8h]
      vaddss  xmm0, xmm0, [rbp+rdi*4+4C0h+var_1C8]
      vmovss  [rbp+4C0h+var_4D8], xmm0
      vmovss  xmm1, dword ptr [rsi+0CCh]
      vaddss  xmm0, xmm1, [rbp+rdi*4+4C0h+var_1C4]
      vmovss  [rbp+4C0h+var_528], xmm0
      vmovss  xmm0, dword ptr [rsi+0D0h]
      vaddss  xmm0, xmm0, [rbp+rdi*4+4C0h+var_1C0]
      vmovss  [rbp+4C0h+var_524], xmm0
    }
    HIDWORD(v643) = 0;
    __asm
    {
      vmovups xmm7, xmmword ptr [rbp+170h]
      vmovss  xmm7, xmm7, xmm11
      vinsertps xmm7, xmm7, xmm13, 10h
      vinsertps xmm7, xmm7, xmm14, 20h ; ' '
      vmovups xmmword ptr [rbp+170h], xmm7
      vmovdqa [rbp+4C0h+var_480], xmm7
      vmovdqa [rbp+4C0h+var_480], xmm7
      vmovdqa [rbp+4C0h+var_480], xmm7
      vmovdqa [rbp+4C0h+var_480], xmm7
      vmovups [rbp+4C0h+var_480], xmm9
      vshufps xmm4, xmm9, xmm9, 0FFh
      vmovdqa [rbp+4C0h+var_480], xmm4
      vmovdqa [rbp+4C0h+var_480], xmm4
      vmovups [rbp+4C0h+var_480], xmm7
      vmovups [rbp+4C0h+var_480], xmm9
      vshufps xmm6, xmm9, xmm9, 0C9h ; 'É'
      vmovups [rbp+4C0h+var_480], xmm6
      vmovups [rbp+4C0h+var_480], xmm6
      vshufps xmm1, xmm7, xmm7, 0D2h ; 'Ò'
      vmovups [rbp+4C0h+var_480], xmm1
      vmovups [rbp+4C0h+var_480], xmm1
      vshufps xmm5, xmm9, xmm9, 0D2h ; 'Ò'
      vmovups [rbp+4C0h+var_480], xmm5
      vmovups [rbp+4C0h+var_480], xmm5
      vshufps xmm0, xmm7, xmm7, 0C9h ; 'É'
      vmovups [rbp+4C0h+var_480], xmm0
      vmovups [rbp+4C0h+var_480], xmm0
      vmulps  xmm1, xmm1, xmm6
      vmovups [rbp+4C0h+var_480], xmm1
      vmovups [rbp+4C0h+var_480], xmm1
      vmulps  xmm0, xmm0, xmm5
      vsubps  xmm2, xmm1, xmm0
      vmovdqa [rbp+4C0h+var_480], xmm2
      vmovdqa [rbp+4C0h+var_480], xmm2
      vmovdqa [rbp+4C0h+var_480], xmm2
      vmovdqa [rbp+4C0h+var_480], xmm2
      vmovups [rbp+4C0h+var_480], xmm2
      vmovups [rbp+4C0h+var_480], xmm2
      vaddps  xmm3, xmm2, xmm2
      vmovdqa [rbp+4C0h+var_480], xmm3
      vmovdqa [rbp+4C0h+var_480], xmm3
      vmovdqa [rbp+4C0h+var_480], xmm3
      vmovdqa [rbp+4C0h+var_480], xmm4
      vmovups [rbp+4C0h+var_480], xmm3
      vmovups [rbp+4C0h+var_480], xmm4
      vmovups [rbp+4C0h+var_480], xmm7
      vmulps  xmm0, xmm3, xmm4
      vaddps  xmm4, xmm7, xmm0
      vmovdqa [rbp+4C0h+var_480], xmm4
      vmovdqa [rbp+4C0h+var_480], xmm4
      vmovdqa [rbp+4C0h+var_480], xmm3
      vmovups [rbp+4C0h+var_480], xmm3
      vmovups [rbp+4C0h+var_480], xmm9
      vmovups [rbp+4C0h+var_480], xmm6
      vmovups [rbp+4C0h+var_480], xmm6
      vshufps xmm1, xmm3, xmm3, 0D2h ; 'Ò'
      vmovups [rbp+4C0h+var_480], xmm1
      vmovups [rbp+4C0h+var_480], xmm1
      vmovups [rbp+4C0h+var_480], xmm5
      vmovups [rbp+4C0h+var_480], xmm5
      vshufps xmm0, xmm3, xmm3, 0C9h ; 'É'
      vmovups [rbp+4C0h+var_480], xmm0
      vmovups [rbp+4C0h+var_480], xmm0
      vmulps  xmm1, xmm1, xmm6
      vmovups [rbp+4C0h+var_480], xmm1
      vmovups [rbp+4C0h+var_480], xmm1
      vmulps  xmm0, xmm0, xmm5
      vsubps  xmm2, xmm1, xmm0
      vmovdqa [rbp+4C0h+var_480], xmm2
      vmovdqa [rbp+4C0h+var_480], xmm2
      vmovdqa [rbp+4C0h+var_480], xmm2
      vmovdqa [rbp+4C0h+var_480], xmm4
      vmovups [rbp+4C0h+var_480], xmm2
      vmovups [rbp+4C0h+var_480], xmm4
      vaddps  xmm3, xmm2, xmm4
      vmovdqa [rbp+4C0h+var_480], xmm3
      vmovdqa [rbp+4C0h+var_470], xmm3
      vmovdqa [rbp+4C0h+var_470], xmm3
      vmovdqa [rbp+4C0h+var_470], xmm8
      vmovups [rbp+4C0h+var_470], xmm3
      vmovups [rbp+4C0h+var_470], xmm8
      vaddps  xmm2, xmm8, xmm3
      vmovdqa [rbp+4C0h+var_470], xmm2
      vmovdqa [rbp+4C0h+var_470], xmm2
      vmovdqa [rbp+4C0h+var_470], xmm2
      vmovups [rbp+4C0h+var_470], xmm2
      vmovups [rbp+4C0h+var_470], xmm2
      vshufps xmm1, xmm2, xmm2, 55h ; 'U'
      vmovups [rbp+4C0h+var_470], xmm1
      vmovups [rbp+4C0h+var_470], xmm2
      vshufps xmm0, xmm2, xmm2, 0AAh ; 'ª'
      vmovups [rbp+4C0h+var_470], xmm0
      vmovdqa [rbp+4C0h+var_470], xmm3
      vmovups [rbp+4C0h+var_470], xmm3
      vmovups [rbp+4C0h+var_470], xmm3
      vshufps xmm4, xmm3, xmm3, 55h ; 'U'
      vmovups [rbp+4C0h+var_4B0], xmm4
      vmovups [rbp+4C0h+var_470], xmm3
      vshufps xmm3, xmm3, xmm3, 0AAh ; 'ª'
      vmovups [rbp+4C0h+var_470], xmm3
      vaddss  xmm8, xmm2, dword ptr [rsi+0C8h]
      vmovss  [rbp+4C0h+var_530], xmm8
      vaddss  xmm11, xmm1, dword ptr [rsi+0CCh]
      vmovss  [rbp+4C0h+var_508], xmm11
      vaddss  xmm13, xmm0, dword ptr [rsi+0D0h]
      vmovss  [rbp+4C0h+var_504], xmm13
      vmovups [rbp+4C0h+var_380], xmm9
    }
    _RAX = 2i64 * v166;
    __asm { vmovups [rbp+rax*8+4C0h+var_178], xmm9 }
    _RDX = v166 + 2;
    _RCX = v143->ikCalcInfo->ikData;
    __asm
    {
      vmovss  xmm7, dword ptr [rcx+rdx*4]
      vmovss  dword ptr [rbp+4C0h+var_380], xmm7
      vmovss  xmm0, [rbp+rdi*4+4C0h+var_1C0]
      vsubss  xmm6, xmm0, xmm12
      vmovss  [rbp+4C0h+var_52C], xmm6
    }
    _RBX = 96i64 * (_QWORD)v167;
    v316 = *(_BYTE *)(96i64 * (_QWORD)v167 + _RSI + 8);
    v580 = v316;
    v317 = v316;
    __asm { vcomiss xmm10, dword ptr [rsi] }
    v318 = __CFSHL__(3i64 * (_QWORD)v167, 5);
    if ( !v318 )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_move_threshold, "xanim_ik_antislide_move_threshold");
      __asm { vcomiss xmm0, xmm10 }
      if ( !(v319 | v320) )
      {
        __asm
        {
          vmovss  xmm4, dword ptr [rbx+rsi+20h]
          vmovss  xmm5, dword ptr [rbx+rsi+1Ch]
          vmovss  xmm6, dword ptr [rbx+rsi+24h]
          vmulss  xmm1, xmm4, xmm4
          vmulss  xmm0, xmm5, xmm5
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm6, xmm6
          vaddss  xmm3, xmm2, xmm1
          vcomiss xmm3, xmm10
        }
        if ( !(v319 | v320) )
        {
          __asm
          {
            vsubss  xmm2, xmm5, xmm8
            vsubss  xmm0, xmm4, xmm11
            vsubss  xmm3, xmm6, xmm13
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm6, xmm2, xmm1
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_move_threshold, "xanim_ik_antislide_move_threshold");
          __asm { vcomiss xmm6, xmm0 }
          if ( !v319 )
            v318 = 1;
        }
        __asm { vmovss  xmm6, [rbp+4C0h+var_52C] }
      }
      v166 = idx;
    }
    if ( v316 == 1 )
    {
      if ( v596 == 255 )
      {
        __asm { vcomiss xmm6, [rbp+4C0h+outThreshold] }
        v336 = v596 >= 0xFFu;
      }
      else
      {
        _RDI = vec3_t::operator[](&v629, v166);
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_floatTrackThresholdFraction, "xanim_ik_antislide_floatTrackThresholdFraction");
        __asm { vcomiss xmm0, dword ptr [rdi] }
        v336 = !(v319 | v320);
        v316 = v580;
      }
      v337 = !v336;
      if ( v336 || (v337 = !v318) || (v337 = (_BYTE)v602 == 0, (_BYTE)v602) )
      {
        v317 = 2;
        v338 = outBlendoutTime[0];
        *(_WORD *)(_RBX + _RSI + 10) = outBlendoutTime[0];
        *(_WORD *)(_RBX + _RSI + 12) = v338;
      }
      goto LABEL_108;
    }
    if ( v316 == 2 )
    {
      v337 = *(_WORD *)(_RBX + _RSI + 10) == 0;
      if ( *(__int16 *)(_RBX + _RSI + 10) > 0 )
        goto LABEL_108;
      *(_WORD *)(_RBX + _RSI + 12) = 0;
      goto LABEL_107;
    }
    if ( !v318 || (_BYTE)v602 )
    {
      *(_DWORD *)(_RBX + _RSI + 10) = 0;
LABEL_107:
      v317 = 0;
      v337 = 1;
      goto LABEL_108;
    }
    if ( v596 == 255 )
    {
      __asm
      {
        vmovss  xmm0, [rbp+4C0h+outThreshold]
        vcomiss xmm0, xmm6
      }
      v340 = v596 > 0xFFu;
    }
    else
    {
      _RDI = vec3_t::operator[](&v629, v166);
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_floatTrackThresholdFraction, "xanim_ik_antislide_floatTrackThresholdFraction");
      __asm { vcomiss xmm0, dword ptr [rdi] }
      v340 = v319 | v320;
      v316 = v580;
    }
    v337 = v340 == 0;
    if ( v340 )
    {
      v317 = 1;
      *((_BYTE *)&v599 + (_QWORD)animInfoa) = 1;
    }
LABEL_108:
    __asm
    {
      vmovss  dword ptr [rbx+rsi+38h], xmm8
      vmovss  dword ptr [rbx+rsi+3Ch], xmm11
      vmovss  dword ptr [rbx+rsi+40h], xmm13
    }
    *(_BYTE *)(_RBX + _RSI + 100) = 0;
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+rsi+20h]
      vmovss  xmm0, dword ptr [rbx+rsi+1Ch]
      vmovss  xmm3, dword ptr [rbx+rsi+24h]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vcomiss xmm3, xmm10
    }
    if ( v337 )
      goto LABEL_141;
    if ( !v317 )
    {
      v351 = idx;
LABEL_148:
      *(_QWORD *)(_RBX + _RSI + 16) = 0i64;
      *(_QWORD *)(_RBX + _RSI + 24) = 0i64;
      *(_QWORD *)(_RBX + _RSI + 32) = 0i64;
      *(_QWORD *)(_RBX + _RSI + 40) = 0i64;
      *(_DWORD *)(_RBX + _RSI + 48) = 0;
      *(_BYTE *)(_RBX + _RSI + 8) = v317;
      __asm { vmovss  dword ptr [rbx+rsi+34h], xmm7 }
      *(_DWORD *)(_RBX + _RSI + 72) = 0;
      __asm { vmovss  dword ptr [rbx+rsi+4Ch], xmm6 }
      *(_QWORD *)(_RBX + _RSI + 80) = 0i64;
      *(float *)(_RBX + _RSI + 96) = *vec3_t::operator[](&v629, v351);
      *(_QWORD *)(_RBX + _RSI + 88) = 0i64;
      *(_BYTE *)(_RBX + _RSI + 100) = 0;
      goto LABEL_181;
    }
    if ( !v316 )
    {
LABEL_141:
      v351 = idx;
      goto LABEL_142;
    }
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_ik_antislide_collision_blendout_time, "xanim_ik_antislide_collision_blendout_time");
    v351 = idx;
    v352 = idx == 0;
    if ( *((_BYTE *)&v594 + v352) || v598[v352] )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+rsi+28h]
        vmovss  dword ptr [rbp+4C0h+capsuleA.start], xmm0
        vmovss  xmm1, dword ptr [rbx+rsi+2Ch]
        vmovss  dword ptr [rbp+4C0h+capsuleA.start+4], xmm1
        vmovss  xmm0, dword ptr [rbx+rsi+30h]
        vmovss  dword ptr [rbp+4C0h+capsuleA.start+8], xmm0
        vmovss  xmm1, dword ptr [rbx+rsi+1Ch]
        vmovss  dword ptr [rbp+4C0h+capsuleA.end], xmm1
        vmovss  xmm0, dword ptr [rbx+rsi+20h]
        vmovss  dword ptr [rbp+4C0h+capsuleA.end+4], xmm0
        vmovss  xmm1, dword ptr [rbx+rsi+24h]
        vmovss  dword ptr [rbp+4C0h+capsuleA.end+8], xmm1
      }
      _RAX = 9 * v352;
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0C8h]
        vaddss  xmm3, xmm0, [rbp+rax*4+4C0h+var_1D4]
        vmovss  dword ptr [rbp+4C0h+capsuleB.start], xmm3
        vmovss  xmm0, [rbp+rax*4+4C0h+var_1D0]
        vaddss  xmm4, xmm0, dword ptr [rsi+0CCh]
        vmovss  dword ptr [rbp+4C0h+capsuleB.start+4], xmm4
        vmovss  xmm0, [rbp+rax*4+4C0h+var_1CC]
        vaddss  xmm5, xmm0, dword ptr [rsi+0D0h]
        vmovss  dword ptr [rbp+4C0h+capsuleB.start+8], xmm5
        vmovss  xmm0, dword ptr [rsi+0C8h]
        vaddss  xmm1, xmm0, [rbp+rax*4+4C0h+var_1C8]
        vmovss  dword ptr [rbp+4C0h+capsuleB.end], xmm1
        vmovss  xmm2, dword ptr [rsi+0CCh]
        vaddss  xmm0, xmm2, [rbp+rax*4+4C0h+var_1C4]
        vmovss  dword ptr [rbp+4C0h+capsuleB.end+4], xmm0
        vmovss  xmm1, dword ptr [rsi+0D0h]
        vaddss  xmm2, xmm1, [rbp+rax*4+4C0h+var_1C0]
        vmovss  dword ptr [rbp+4C0h+capsuleB.end+8], xmm2
        vmovss  [rsp+5C0h+var_56C], xmm3
      }
      if ( (v581 & 0x7F800000) == 2139095040 )
        goto LABEL_207;
      __asm { vmovss  [rsp+5C0h+var_56C], xmm4 }
      if ( (v582 & 0x7F800000) == 2139095040 )
        goto LABEL_207;
      __asm { vmovss  [rsp+5C0h+var_56C], xmm5 }
      if ( (v583 & 0x7F800000) == 2139095040 )
      {
LABEL_207:
        v577 = (const float4 *)"!IS_NAN_VEC( otherFootCapsule.start )";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 646, ASSERT_TYPE_ASSERT, "(!( IS_NAN( ( otherFootCapsule.start )[0] ) || IS_NAN( ( otherFootCapsule.start )[1] ) || IS_NAN( ( otherFootCapsule.start )[2] ) ))", (const char *)&queryFormat) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+capsuleB.end]
        vmovss  [rsp+5C0h+var_56C], xmm0
      }
      if ( (v584 & 0x7F800000) == 2139095040 )
        goto LABEL_208;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+capsuleB.end+4]
        vmovss  [rsp+5C0h+var_56C], xmm0
      }
      if ( (v585 & 0x7F800000) == 2139095040 )
        goto LABEL_208;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+capsuleB.end+8]
        vmovss  [rsp+5C0h+var_56C], xmm0
      }
      if ( (v586 & 0x7F800000) == 2139095040 )
      {
LABEL_208:
        v577 = (const float4 *)"!IS_NAN_VEC( otherFootCapsule.end )";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 647, ASSERT_TYPE_ASSERT, "(!( IS_NAN( ( otherFootCapsule.end )[0] ) || IS_NAN( ( otherFootCapsule.end )[1] ) || IS_NAN( ( otherFootCapsule.end )[2] ) ))", (const char *)&queryFormat) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+capsuleA.start]
        vmovss  [rsp+5C0h+var_56C], xmm0
      }
      if ( (v587 & 0x7F800000) == 2139095040 )
        goto LABEL_209;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+capsuleA.start+4]
        vmovss  [rsp+5C0h+var_56C], xmm0
      }
      if ( (v588 & 0x7F800000) == 2139095040 )
        goto LABEL_209;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+capsuleA.start+8]
        vmovss  [rsp+5C0h+var_56C], xmm0
      }
      if ( (v589 & 0x7F800000) == 2139095040 )
      {
LABEL_209:
        v577 = (const float4 *)"!IS_NAN_VEC( currentFootCapsule.start )";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 648, ASSERT_TYPE_ASSERT, "(!( IS_NAN( ( currentFootCapsule.start )[0] ) || IS_NAN( ( currentFootCapsule.start )[1] ) || IS_NAN( ( currentFootCapsule.start )[2] ) ))", (const char *)&queryFormat) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+capsuleA.end]
        vmovss  [rsp+5C0h+var_56C], xmm0
      }
      if ( (v590 & 0x7F800000) == 2139095040 )
        goto LABEL_210;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+capsuleA.end+4]
        vmovss  [rsp+5C0h+var_56C], xmm0
      }
      if ( (v591 & 0x7F800000) == 2139095040 )
        goto LABEL_210;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+capsuleA.end+8]
        vmovss  [rsp+5C0h+var_56C], xmm0
      }
      if ( (v592 & 0x7F800000) == 2139095040 )
      {
LABEL_210:
        v577 = (const float4 *)"!IS_NAN_VEC( currentFootCapsule.end )";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 649, ASSERT_TYPE_ASSERT, "(!( IS_NAN( ( currentFootCapsule.end )[0] ) || IS_NAN( ( currentFootCapsule.end )[1] ) || IS_NAN( ( currentFootCapsule.end )[2] ) ))", (const char *)&queryFormat) )
          __debugbreak();
      }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_capsule_radius, "xanim_ik_antislide_capsule_radius");
      __asm { vmovss  [rbp+4C0h+capsuleA.radius], xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_capsule_radius, "xanim_ik_antislide_capsule_radius");
      __asm { vmovss  [rbp+4C0h+capsuleB.radius], xmm0 }
      if ( XAnimNode_IKAntiSlide_TestCapsuleCapsule(&capsuleA, &capsuleB) )
      {
        if ( v317 == 2 )
        {
          if ( *(__int16 *)(_RBX + _RSI + 10) < (int)Int_Internal_DebugName )
            Int_Internal_DebugName = *(_WORD *)(_RBX + _RSI + 10);
          *(_WORD *)(_RBX + _RSI + 10) = Int_Internal_DebugName;
          *(_BYTE *)(_RBX + _RSI + 100) = 1;
        }
        else
        {
          if ( v317 == 1 )
          {
            v317 = 2;
            *(_WORD *)(_RBX + _RSI + 12) = Int_Internal_DebugName;
            *(_WORD *)(_RBX + _RSI + 10) = Int_Internal_DebugName;
          }
          *(_BYTE *)(_RBX + _RSI + 100) = 1;
        }
      }
    }
LABEL_142:
    if ( !v317 )
      goto LABEL_148;
    __asm { vmovss  [rsp+5C0h+var_56C], xmm10 }
    v377 = v580;
    if ( v580 )
    {
      if ( v580 == 1 )
      {
        if ( v317 == 2 )
        {
          __asm
          {
            vmovss  xmm2, dword ptr [rbx+rsi+14h]
            vmovss  xmm0, dword ptr [rbx+rsi+10h]
            vmovss  xmm3, dword ptr [rbx+rsi+18h]
            vmulss  xmm1, xmm0, xmm0
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vucomiss xmm3, xmm10
            vmovaps xmm7, xmm15
          }
          goto LABEL_152;
        }
      }
      else
      {
LABEL_145:
        if ( v317 == 2 )
        {
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, eax
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vdivss  xmm7, xmm1, xmm0
          }
          goto LABEL_154;
        }
      }
      _EAX = 1;
      __asm { vmovd   xmm1, eax }
      _EAX = v317;
      __asm
      {
        vmovd   xmm0, eax
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm10, xmm15, xmm2
        vmovaps xmm7, xmm0
        vmovss  [rbp+4C0h+var_540], xmm0
      }
    }
    else
    {
      if ( v317 != 1 )
        goto LABEL_145;
LABEL_152:
      __asm
      {
        vmovss  dword ptr [rbx+rsi+10h], xmm8
        vmovss  dword ptr [rbx+rsi+14h], xmm11
        vmovss  dword ptr [rbx+rsi+18h], xmm13
        vmovaps xmm7, xmm15
      }
    }
LABEL_154:
    __asm
    {
      vmovss  xmm12, dword ptr [rbx+rsi+10h]
      vmovss  xmm14, dword ptr [rbx+rsi+14h]
      vmovss  xmm0, dword ptr [rbx+rsi+18h]
      vmovss  [rbp+4C0h+var_540], xmm0
      vsubss  xmm8, xmm12, xmm8
      vsubss  xmm9, xmm14, xmm11
      vsubss  xmm11, xmm0, xmm13
      vmulss  xmm1, xmm9, xmm9
      vmulss  xmm0, xmm8, xmm8
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm11, xmm11
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm13, xmm2, xmm2
    }
    if ( v595 )
    {
      v410 = "xanim_ik_antislide_max_distance_crouch";
      v411 = DCONST_DVARFLT_xanim_ik_antislide_max_distance_crouch;
    }
    else
    {
      v410 = "xanim_ik_antislide_max_distance";
      v411 = DCONST_DVARFLT_xanim_ik_antislide_max_distance;
    }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v411, v410);
    __asm
    {
      vmovaps xmm6, xmm0
      vcomiss xmm7, xmm10
    }
    if ( v412 | v413 )
      goto LABEL_176;
    __asm { vcomiss xmm13, xmm0 }
    if ( v412 | v413 )
    {
LABEL_176:
      __asm { vmovss  xmm8, [rbp+4C0h+var_530] }
    }
    else
    {
      __asm
      {
        vcmpless xmm0, xmm13, cs:__real@80000000
        vblendvps xmm1, xmm13, xmm15, xmm0
        vmovss  [rbp+4C0h+var_540], xmm1
        vdivss  xmm3, xmm15, xmm1
        vmulss  xmm0, xmm8, xmm3
        vmulss  xmm1, xmm0, xmm6
        vmovss  xmm8, [rbp+4C0h+var_530]
        vaddss  xmm12, xmm1, xmm8
        vmulss  xmm2, xmm9, xmm3
        vmulss  xmm0, xmm2, xmm6
        vaddss  xmm14, xmm0, [rbp+4C0h+var_508]
        vmulss  xmm1, xmm11, xmm3
        vmulss  xmm2, xmm1, xmm6
        vaddss  xmm0, xmm2, [rbp+4C0h+var_504]
        vmovss  [rbp+4C0h+var_540], xmm0
        vmovss  dword ptr [rbx+rsi+10h], xmm12
        vmovss  dword ptr [rbx+rsi+14h], xmm14
        vmovss  dword ptr [rbx+rsi+18h], xmm0
      }
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_ik_antislide_fast_blendout_enabled, "xanim_ik_antislide_fast_blendout_enabled") )
      {
        v427 = v580 == 2 || v317 == 2;
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_fast_blendout_threshold, "xanim_ik_antislide_fast_blendout_threshold");
        __asm { vaddss  xmm1, xmm0, xmm6 }
        if ( v427 )
        {
          __asm { vcomiss xmm13, xmm1 }
          v429 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_ik_antislide_fast_blendout_time, "xanim_ik_antislide_fast_blendout_time");
          v430 = v429;
          if ( (unsigned int)(v429 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v429, "signed", v429) )
            __debugbreak();
          if ( v430 > *(__int16 *)(_RBX + _RSI + 10) )
            v430 = *(_WORD *)(_RBX + _RSI + 10);
          *(_WORD *)(_RBX + _RSI + 10) = v430;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, eax
            vdivss  xmm1, xmm0, xmm7
            vcvttss2si ecx, xmm1; val
          }
          *(_WORD *)(_RBX + _RSI + 12) = I_clamp(_ECX, 0, 0x7FFF);
        }
        v377 = v580;
      }
    }
    __asm
    {
      vmulss  xmm0, xmm7, [rbp+4C0h+weightScale]; val
      vmovaps xmm2, xmm15; max
      vmovaps xmm1, xmm10; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovaps xmm15, xmm0
      vsubss  xmm1, xmm12, xmm8
      vmulss  xmm2, xmm1, xmm0
      vaddss  xmm9, xmm2, xmm8
      vsubss  xmm3, xmm14, [rbp+4C0h+var_508]
      vmulss  xmm1, xmm3, xmm0
      vaddss  xmm11, xmm1, [rbp+4C0h+var_508]
      vmovss  xmm0, [rbp+4C0h+var_540]
      vsubss  xmm2, xmm0, [rbp+4C0h+var_504]
      vmulss  xmm3, xmm2, xmm15
      vaddss  xmm12, xmm3, [rbp+4C0h+var_504]
      vsubss  xmm14, xmm9, dword ptr [rbp+4C0h+var_480]
      vmovss  dword ptr [rbp+4C0h+var_420], xmm14
      vsubss  xmm0, xmm11, dword ptr [rbp+4C0h+var_4B0]
      vmovss  dword ptr [rbp+4C0h+var_420+4], xmm0
      vsubss  xmm0, xmm12, dword ptr [rbp+4C0h+var_470]
      vmovss  dword ptr [rbp+4C0h+var_420+8], xmm0
      vmovss  xmm7, dword ptr [rbp+4C0h+in1]
      vsubss  xmm2, xmm7, [rbp+4C0h+var_500]
      vmovss  xmm6, dword ptr [rbp+4C0h+in1+4]
      vsubss  xmm0, xmm6, [rbp+4C0h+var_4FC]
      vmovss  xmm4, dword ptr [rbp+4C0h+in1+8]
      vsubss  xmm3, xmm4, [rbp+4C0h+var_53C]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm5, xmm2, xmm2
      vmovss  xmm0, [rbp+4C0h+var_4D8]
      vsubss  xmm3, xmm0, xmm7
      vmovss  xmm1, [rbp+4C0h+var_528]
      vsubss  xmm0, xmm1, xmm6
      vmovss  xmm2, [rbp+4C0h+var_524]
      vsubss  xmm4, xmm2, xmm4
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm3, xmm3
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm4, xmm4
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vaddss  xmm8, xmm0, xmm5
      vmovss  xmm6, [rbp+4C0h+var_500]
      vsubss  xmm1, xmm14, xmm6
      vmovups xmm0, [rbp+4C0h+var_4B0]
      vsubss  xmm4, xmm11, xmm0
      vmovss  xmm7, [rbp+4C0h+var_4FC]
      vsubss  xmm2, xmm4, xmm7
      vmovups xmm0, [rbp+4C0h+var_470]
      vsubss  xmm5, xmm12, xmm0
      vsubss  xmm3, xmm5, [rbp+4C0h+var_53C]
      vmulss  xmm1, xmm1, xmm1
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vsqrtss xmm0, xmm2, xmm2
      vmovss  [rbp+4C0h+var_524], xmm0
      vcomiss xmm0, xmm8
    }
    if ( !(v319 | v320) )
    {
      __asm
      {
        vsubss  xmm0, xmm14, xmm6
        vmovss  dword ptr [rbp+4C0h+v], xmm0
        vsubss  xmm1, xmm4, xmm7
        vmovss  dword ptr [rbp+4C0h+v+4], xmm1
        vsubss  xmm0, xmm5, [rbp+4C0h+var_53C]
        vmovss  dword ptr [rbp+4C0h+v+8], xmm0
      }
      Vec3Normalize(&v);
      __asm
      {
        vmulss  xmm1, xmm8, dword ptr [rbp+4C0h+v]
        vaddss  xmm4, xmm1, xmm6
        vmulss  xmm0, xmm8, dword ptr [rbp+4C0h+v+4]
        vaddss  xmm3, xmm0, xmm7
        vmulss  xmm2, xmm8, dword ptr [rbp+4C0h+v+8]
        vaddss  xmm0, xmm2, [rbp+4C0h+var_53C]
        vmovss  dword ptr [rbp+4C0h+var_420], xmm4
        vmovss  dword ptr [rbp+4C0h+var_420+4], xmm3
        vmovss  dword ptr [rbp+4C0h+var_420+8], xmm0
        vaddss  xmm9, xmm4, dword ptr [rbp+4C0h+var_480]
        vaddss  xmm11, xmm3, dword ptr [rbp+4C0h+var_4B0]
        vaddss  xmm12, xmm0, dword ptr [rbp+4C0h+var_470]
      }
    }
    __asm
    {
      vmovups xmm0, [rbp+4C0h+var_4F0]
      vmovups xmmword ptr [rbp+4C0h+var_320], xmm0
    }
    QuatToAxis(&v645, (tmat33_t<vec3_t> *)&v654);
    __asm
    {
      vmovss  [rbp+4C0h+var_23C], xmm6
      vmovss  [rbp+4C0h+var_238], xmm7
      vmovss  xmm0, [rbp+4C0h+var_53C]
      vmovss  [rbp+4C0h+var_234], xmm0
    }
    MatrixInverseOrthogonal43(&v654, &out);
    MatrixTransformVector43(&in1, &out, &v638);
    MatrixTransformVector43(&v632, &out, &v637);
    __asm
    {
      vmovss  dword ptr [rbp+4C0h+var_3B0+4], xmm10
      vmovss  dword ptr [rbp+4C0h+var_3C0+4], xmm10
      vmovss  xmm0, dword ptr [rbp+4C0h+var_3C0]
      vmovss  dword ptr [rbp+4C0h+var_400], xmm0
      vmovss  dword ptr [rbp+4C0h+var_400+4], xmm10
      vmovss  xmm1, dword ptr [rbp+4C0h+var_3C0+8]
      vmovss  dword ptr [rbp+4C0h+var_400+8], xmm1
      vmovss  xmm5, dword ptr [rbp+4C0h+var_3B0+8]
      vmulss  xmm2, xmm5, xmm5
      vmovss  xmm4, dword ptr [rbp+4C0h+var_3B0]
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm2, xmm0
      vsqrtss xmm3, xmm1, xmm1
      vcmpless xmm0, xmm3, cs:__real@80000000
      vmovss  xmm2, cs:__real@3f800000
      vblendvps xmm1, xmm3, xmm2, xmm0
      vmovss  [rbp+4C0h+var_528], xmm1
      vdivss  xmm0, xmm2, xmm1
      vmulss  xmm6, xmm0, xmm4
      vmulss  xmm7, xmm0, xmm5
    }
    Vec3Normalize(&v634);
    __asm
    {
      vmulss  xmm3, xmm6, dword ptr [rbp+4C0h+var_400]
      vmulss  xmm2, xmm7, dword ptr [rbp+4C0h+var_400+8]
      vaddss  xmm0, xmm3, xmm2; X
    }
    *(float *)&_XMM0 = acosf_0(*(float *)&_XMM0);
    __asm { vmulss  xmm7, xmm0, cs:__real@42652ee0 }
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_max_angle_knee_target, "xanim_ik_antislide_max_angle_knee_target");
    __asm { vmovaps xmm14, xmm0 }
    v522 = v595 == 0;
    if ( !v595 )
      __asm { vcomiss xmm7, xmm0 }
    __asm
    {
      vmovss  xmm6, [rsp+5C0h+var_56C]
      vmovss  xmm0, dword ptr [rbp+4C0h+in1]
      vmovss  dword ptr [rbx+rsi+28h], xmm0
      vmovss  xmm1, dword ptr [rbp+4C0h+in1+4]
      vmovss  dword ptr [rbx+rsi+2Ch], xmm1
      vmovss  xmm0, dword ptr [rbp+4C0h+in1+8]
      vmovss  dword ptr [rbx+rsi+30h], xmm0
      vmovss  dword ptr [rbx+rsi+1Ch], xmm9
      vmovss  dword ptr [rbx+rsi+20h], xmm11
      vmovss  dword ptr [rbx+rsi+24h], xmm12
      vsubss  xmm0, xmm9, dword ptr [rbp+4C0h+var_480]
      vsubss  xmm1, xmm11, dword ptr [rbp+4C0h+var_4B0]
      vsubss  xmm2, xmm12, dword ptr [rbp+4C0h+var_470]
      vsubss  xmm3, xmm0, dword ptr [rsi+0C8h]
      vsubss  xmm4, xmm1, dword ptr [rsi+0CCh]
      vsubss  xmm5, xmm2, dword ptr [rsi+0D0h]
    }
    _RAX = 3i64 * (_QWORD)animInfoa;
    __asm
    {
      vmovss  [rbp+rax*4+4C0h+var_190], xmm3
      vmovss  [rbp+rax*4+4C0h+var_18C], xmm4
      vmovss  [rbp+rax*4+4C0h+var_188], xmm5
      vmovss  dword ptr [rbx+rsi+48h], xmm15
      vmovss  xmm0, [rbp+4C0h+var_52C]
      vmovss  dword ptr [rbx+rsi+4Ch], xmm0
      vmovss  dword ptr [rbx+rsi+50h], xmm13
      vcomiss xmm8, xmm10
    }
    if ( v522 )
    {
      __asm { vmovaps xmm0, xmm10 }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, [rbp+4C0h+var_524]
        vdivss  xmm0, xmm0, xmm8
      }
    }
    __asm { vmovss  dword ptr [rbx+rsi+54h], xmm0 }
    *(_BYTE *)(_RBX + _RSI + 68) = v377;
    __asm
    {
      vmovss  dword ptr [rbx+rsi+58h], xmm7
      vmovss  dword ptr [rbx+rsi+5Ch], xmm6
      vmovss  xmm0, dword ptr [rbp+4C0h+var_380]
      vmovss  dword ptr [rbx+rsi+34h], xmm0
    }
    *(float *)(_RBX + _RSI + 96) = *vec3_t::operator[](&v629, v351);
    *(_BYTE *)(_RBX + _RSI + 8) = v317;
    __asm
    {
      vmovss  xmm15, cs:__real@3f800000
      vmovups xmm12, [rbp+4C0h+var_3D0]
    }
LABEL_181:
    v167 = animInfoa;
    v166 = idx;
LABEL_182:
    idx = ++v166;
    v167 = (XAnimCalcAnimInfo *)((char *)v167 + 1);
    animInfoa = v167;
    __asm
    {
      vmovss  xmm11, [rbp+4C0h+var_518]
      vmovss  xmm13, [rbp+4C0h+var_514]
      vmovss  xmm14, [rbp+4C0h+var_510]
    }
    if ( v166 < 2 )
      continue;
    break;
  }
  __asm
  {
    vmovups xmm0, [rbp+4C0h+var_490]
    vmovss  dword ptr [rsi+0D4h], xmm0
    vextractps dword ptr [rsi+0D8h], xmm0, 1
    vmovss  dword ptr [rsi+0DCh], xmm12
  }
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v143->partBits, &otherBitSet);
  v543 = (_BYTE *)(_RSI + 8);
  if ( *(_BYTE *)(_RSI + 8) == 1 && *(_BYTE *)(_RSI + 104) == 1 )
  {
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_strafe_cosine_angle, "xanim_ik_antislide_strafe_cosine_angle");
    __asm
    {
      vmovss  xmm2, [rbp+4C0h+var_4D4]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vcomiss xmm2, xmm0
    }
    if ( !(v544 | v545) )
      goto LABEL_188;
    __asm { vcomiss xmm2, xmm1 }
    if ( v544 )
    {
LABEL_188:
      v549 = 0i64;
      __asm { vcomiss xmm2, xmm0 }
      if ( v544 | v545 )
      {
        __asm { vcomiss xmm1, xmm2 }
        if ( !(v544 | v545) )
          v549 = 1i64;
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+4C0h+info]
        vcomiss xmm0, xmm10
      }
      v549 = !(v544 | v545);
    }
    v320 = *((_BYTE *)&v599 + v549) == 0;
    v550 = 3 * v549;
    if ( v320 )
    {
      v551 = 32 * v550;
      *(_BYTE *)(v551 + _RSI + 8) = 2;
      v552 = outBlendoutTime[0];
      *(_WORD *)(v551 + _RSI + 10) = outBlendoutTime[0];
      *(_WORD *)(v551 + _RSI + 12) = v552;
    }
    else
    {
      *(_BYTE *)(32 * v550 + _RSI + 8) = 0;
    }
  }
  v553 = &v594;
  v554 = v622;
  _RDI = v659;
  __asm { vmovss  xmm9, [rbp+4C0h+weightScale] }
  do
  {
    if ( *(_BYTE *)v553 && *v543 )
    {
      __asm { vmovss  xmm0, dword ptr [rdi-8] }
      HIDWORD(v627) = 0;
      __asm
      {
        vmovups xmm1, [rbp+4C0h+var_470]
        vmovss  xmm1, xmm1, xmm0
        vinsertps xmm1, xmm1, dword ptr [rdi-4], 10h
        vinsertps xmm1, xmm1, dword ptr [rdi], 20h ; ' '
        vmovups [rbp+4C0h+var_470], xmm1
      }
      _RAX = 2i64 * v131;
      __asm
      {
        vmovups xmm0, [rbp+rax*8+4C0h+var_178]
        vmovss  dword ptr [rsp+5C0h+calcMode], xmm9
      }
      XAnimSetLocalBoneTransform(v143, obja, buffer, *(_DWORD *)(*v554 + 16), fmt, v577, calcModea);
    }
    ++v131;
    v553 = (int *)((char *)v553 + 1);
    v543 += 96;
    _RDI += 3;
    ++v554;
  }
  while ( v131 < 2 );
  Profile_EndInternal(NULL);
  memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_201:
  _R11 = &v662;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
    vmovaps xmm14, xmmword ptr [r11-98h]
    vmovaps xmm15, xmmword ptr [r11-0A8h]
  }
}

/*
==============
XAnimNode_IKAntiSlide_PrintDebug
==============
*/
void XAnimNode_IKAntiSlide_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v15; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  unsigned __int8 v21; 
  unsigned __int8 v22; 
  unsigned __int8 v23; 
  unsigned __int8 v24; 
  unsigned __int64 v25; 
  __int64 v26; 
  const char *v27; 
  const char *v41; 
  __int64 v54; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  double v89; 
  __int64 v90; 
  __int64 v91; 
  double v92; 
  __int64 v93; 
  double v94; 
  __int64 v95; 
  double v96; 
  __int64 v97; 
  double v98; 
  __int64 v99; 
  double v100; 
  __int64 v101; 
  double v102; 
  __int64 v103; 
  double v104; 
  __int64 v105; 
  double v106; 
  __int64 v107; 
  double v108; 

  v15 = size;
  _RSI = nodeData;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1012, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1013, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (int)v15 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1014, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1015, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1016, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1020, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( _RSI[4] )
  {
    v19 = DVARBOOL_xanim_ik_antislide_enable;
    if ( !DVARBOOL_xanim_ik_antislide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( !v19->current.enabled )
      goto LABEL_51;
    v20 = DCONST_DVARBOOL_xanim_ik_disable;
    if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
LABEL_51:
      if ( depth > 0 )
      {
        v86 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v15, inoutPos, "  ");
          --v86;
        }
        while ( v86 );
      }
      Com_sprintfPos_truncate(buffer, v15, inoutPos, "   ^5OFF\n");
    }
    else
    {
      v21 = _RSI[8];
      __asm
      {
        vmovaps [rsp+128h+var_38], xmm6
        vmovaps [rsp+128h+var_48], xmm7
        vmovaps [rsp+128h+var_58], xmm8
        vmovaps [rsp+128h+var_68], xmm9
        vmovaps [rsp+128h+var_78], xmm10
        vmovaps [rsp+128h+var_88], xmm11
        vmovaps [rsp+128h+var_98], xmm12
      }
      if ( v21 >= 3u )
      {
        LODWORD(v90) = 3;
        LODWORD(v87) = v21;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1036, ASSERT_TYPE_ASSERT, "(unsigned)( node->footState[0].state ) < (unsigned)( static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT) )", "node->footState[0].state doesn't index static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT)\n\t%i not in [0, %i)", v87, v90) )
          __debugbreak();
      }
      v22 = _RSI[104];
      if ( v22 >= 3u )
      {
        LODWORD(v90) = 3;
        LODWORD(v87) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1037, ASSERT_TYPE_ASSERT, "(unsigned)( node->footState[1].state ) < (unsigned)( static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT) )", "node->footState[1].state doesn't index static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT)\n\t%i not in [0, %i)", v87, v90) )
          __debugbreak();
      }
      v23 = _RSI[68];
      if ( v23 >= 3u )
      {
        LODWORD(v90) = 3;
        LODWORD(v87) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1038, ASSERT_TYPE_ASSERT, "(unsigned)( node->footState[0].lastState ) < (unsigned)( static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT) )", "node->footState[0].lastState doesn't index static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT)\n\t%i not in [0, %i)", v87, v90) )
          __debugbreak();
      }
      v24 = _RSI[164];
      if ( v24 >= 3u )
      {
        LODWORD(v90) = 3;
        LODWORD(v87) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1039, ASSERT_TYPE_ASSERT, "(unsigned)( node->footState[1].lastState ) < (unsigned)( static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT) )", "node->footState[1].lastState doesn't index static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT)\n\t%i not in [0, %i)", v87, v90) )
          __debugbreak();
      }
      v25 = v15;
      if ( depth > 0 )
      {
        v26 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v25, inoutPos, "  ");
          --v26;
        }
        while ( v26 );
      }
      v27 = (char *)&queryFormat.fmt + 3;
      __asm
      {
        vmovss  xmm4, dword ptr [rsi+5Ch]
        vmovss  xmm5, dword ptr [rsi+58h]
        vmovss  xmm6, dword ptr [rsi+54h]
        vmovss  xmm7, dword ptr [rsi+50h]
        vmovss  xmm8, dword ptr [rsi+4Ch]
        vmovss  xmm9, dword ptr [rsi+60h]
        vmovss  xmm12, cs:__real@3a83126f
        vmovss  xmm10, dword ptr [rsi+48h]
        vmovss  xmm11, dword ptr [rsi+34h]
        vxorps  xmm0, xmm0, xmm0
        vcvtss2sd xmm4, xmm4, xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vxorps  xmm1, xmm1, xmm1
      }
      v41 = (char *)&queryFormat.fmt + 3;
      if ( _RSI[100] )
        v41 = ", collision";
      __asm
      {
        vmovsd  [rsp+128h+var_B0], xmm4
        vmovsd  [rsp+128h+var_B8], xmm5
        vcvtsi2ss xmm0, xmm0, eax
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm0, xmm12
        vcvtss2sd xmm3, xmm0, xmm0
        vmulss  xmm0, xmm1, xmm12
        vcvtss2sd xmm2, xmm0, xmm0
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+128h+var_C0], xmm6
        vcvtss2sd xmm7, xmm7, xmm7
        vmovsd  [rsp+128h+var_C8], xmm7
        vcvtss2sd xmm8, xmm8, xmm8
        vmovsd  [rsp+128h+var_D0], xmm8
        vcvtss2sd xmm9, xmm9, xmm9
        vmovsd  [rsp+128h+var_D8], xmm9
        vcvtss2sd xmm10, xmm10, xmm10
        vmovsd  [rsp+128h+var_E0], xmm10
        vcvtss2sd xmm11, xmm11, xmm11
        vmovsd  [rsp+128h+var_E8], xmm11
        vmovsd  [rsp+128h+var_F8], xmm3
        vmovsd  [rsp+128h+var_100], xmm2
      }
      Com_sprintfPos_truncate(buffer, v25, inoutPos, "   ^5(L): state: %3s, %.3f over %.3f, last: %3s, ik: %.3f, lerp: %.3f, floatTrack: %.2f, height: %.2f, dist: %.2f, legExtension: %.2f, hipAngle: %.2f, hipAdjust: %.2f%s\n", s_footStateNames[(unsigned __int8)_RSI[8]], v88, v91, s_footStateNames[(unsigned __int8)_RSI[68]], v93, v95, v97, v99, v101, v103, v105, v107, v41);
      if ( depth > 0 )
      {
        v54 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v25, inoutPos, "  ");
          --v54;
        }
        while ( v54 );
      }
      __asm
      {
        vmovss  xmm4, dword ptr [rsi+0BCh]
        vmovss  xmm5, dword ptr [rsi+0B8h]
        vmovss  xmm6, dword ptr [rsi+0B4h]
        vmovss  xmm7, dword ptr [rsi+0B0h]
        vmovss  xmm8, dword ptr [rsi+0ACh]
        vmovss  xmm9, dword ptr [rsi+0C0h]
        vmovss  xmm10, dword ptr [rsi+0A8h]
        vmovss  xmm11, dword ptr [rsi+94h]
      }
      if ( _RSI[196] )
        v27 = ", collision";
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm12
        vcvtss2sd xmm3, xmm1, xmm1
        vcvtss2sd xmm4, xmm4, xmm4
        vmovsd  [rsp+128h+var_B0], xmm4
        vcvtss2sd xmm5, xmm5, xmm5
        vmovsd  [rsp+128h+var_B8], xmm5
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm12
        vcvtss2sd xmm2, xmm1, xmm1
        vcvtss2sd xmm6, xmm6, xmm6
        vmovsd  [rsp+128h+var_C0], xmm6
        vcvtss2sd xmm7, xmm7, xmm7
        vmovsd  [rsp+128h+var_C8], xmm7
        vcvtss2sd xmm8, xmm8, xmm8
        vmovsd  [rsp+128h+var_D0], xmm8
        vcvtss2sd xmm9, xmm9, xmm9
        vmovsd  [rsp+128h+var_D8], xmm9
        vcvtss2sd xmm10, xmm10, xmm10
        vmovsd  [rsp+128h+var_E0], xmm10
        vcvtss2sd xmm11, xmm11, xmm11
        vmovsd  [rsp+128h+var_E8], xmm11
        vmovsd  [rsp+128h+var_F8], xmm3
        vmovsd  [rsp+128h+var_100], xmm2
      }
      Com_sprintfPos_truncate(buffer, v25, inoutPos, "   ^5(R): state: %3s, %.3f over %.3f, last: %3s, ik: %.3f, lerp: %.3f, floatTrack: %.2f, height: %.2f, dist: %.2f, legExtension: %.2f, hipAngle: %.2f, hipAdjust: %.2f%s\n", s_footStateNames[(unsigned __int8)_RSI[104]], v89, v92, s_footStateNames[(unsigned __int8)_RSI[164]], v94, v96, v98, v100, v102, v104, v106, v108, v27);
      __asm
      {
        vmovaps xmm12, [rsp+128h+var_98]
        vmovaps xmm11, [rsp+128h+var_88]
        vmovaps xmm10, [rsp+128h+var_78]
        vmovaps xmm9, [rsp+128h+var_68]
        vmovaps xmm8, [rsp+128h+var_58]
        vmovaps xmm7, [rsp+128h+var_48]
        vmovaps xmm6, [rsp+128h+var_38]
      }
    }
  }
}

/*
==============
XAnimNode_IKAntiSlide_DrawDebug
==============
*/
void XAnimNode_IKAntiSlide_DrawDebug(const DObj *obj)
{
  const dvar_t *v2; 
  XAnimTree *tree; 
  unsigned __int16 children; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1160, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v2 = DVARBOOL_xanim_ik_antislide_enable;
  if ( !DVARBOOL_xanim_ik_antislide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( obj )
    {
      tree = obj->tree;
      if ( obj->tree )
      {
        children = tree->children;
        if ( children )
          XAnimNode_IKAntiSlide_DrawDebug_r(tree, children);
      }
    }
  }
}

/*
==============
XAnimNode_IKAntiSlide_DrawDebug_r
==============
*/
char XAnimNode_IKAntiSlide_DrawDebug_r(const XAnimTree *tree, unsigned __int16 infoIndex)
{
  XAnimInfo *AnimInfo; 
  const XAnim_s *SubTreeAnims; 
  const XAnimNodeTypeInfo *CustomNodeTypeInfo; 
  bool v10; 
  bool Bool_Internal_DebugName; 
  unsigned __int16 children; 
  unsigned __int8 *v71; 
  __int64 v72; 
  unsigned __int16 v73; 
  __int64 duration; 
  __int64 v75; 
  vec3_t center; 

  if ( infoIndex )
  {
    AnimInfo = XAnimGetAnimInfo(infoIndex);
    if ( !AnimInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1071, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
      __debugbreak();
    SubTreeAnims = XAnimGetSubTreeAnims(tree, (const XAnimSubTreeID)AnimInfo->subTreeID);
    if ( !SubTreeAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1074, ASSERT_TYPE_ASSERT, "(anims)", (const char *)&queryFormat, "anims") )
      __debugbreak();
    if ( XAnimIsCustomNode(SubTreeAnims, AnimInfo) )
    {
      CustomNodeTypeInfo = XAnimGetCustomNodeTypeInfo(SubTreeAnims, AnimInfo);
      if ( !CustomNodeTypeInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1080, ASSERT_TYPE_ASSERT, "(nodeTypeInfo)", (const char *)&queryFormat, "nodeTypeInfo") )
        __debugbreak();
      if ( *CustomNodeTypeInfo->name == scr_const.xanimIKAntiSlide )
      {
        _RBX = (char *)XAnimGetCustomNodeData(SubTreeAnims, AnimInfo, AnimInfo->animIndex);
        if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1087, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( _RBX[4] )
        {
          v10 = _RBX[8] == 0;
          __asm
          {
            vmovaps [rsp+0A8h+var_38], xmm6
            vmovaps [rsp+0A8h+var_48], xmm7
            vmovss  xmm7, cs:__real@3f4ccccd
          }
          if ( !v10 )
          {
            __asm { vmovaps xmm1, xmm7; radius }
            CG_DebugSphere((const vec3_t *)(_RBX + 56), *(float *)&_XMM1, &colorBlue, 0, 1);
            __asm { vmovaps xmm1, xmm7; radius }
            CG_DebugSphere((const vec3_t *)(_RBX + 16), *(float *)&_XMM1, &colorRed, 0, 1);
            if ( _RBX[8] == 2 )
            {
              __asm
              {
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, eax
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vdivss  xmm6, xmm1, xmm0
                vmovss  xmm0, dword ptr [rbx+10h]
                vsubss  xmm1, xmm0, dword ptr [rbx+38h]
                vmovss  xmm0, dword ptr [rbx+14h]
                vmulss  xmm2, xmm1, xmm6
                vaddss  xmm3, xmm2, dword ptr [rbx+38h]
                vsubss  xmm1, xmm0, dword ptr [rbx+3Ch]
                vmovss  xmm0, dword ptr [rbx+18h]
                vmulss  xmm2, xmm1, xmm6
                vsubss  xmm1, xmm0, dword ptr [rbx+40h]
                vmovss  dword ptr [rsp+0A8h+center], xmm3
                vaddss  xmm3, xmm2, dword ptr [rbx+3Ch]
                vmulss  xmm2, xmm1, xmm6
                vmovss  dword ptr [rsp+0A8h+center+4], xmm3
                vaddss  xmm3, xmm2, dword ptr [rbx+40h]
                vmovaps xmm1, xmm7; radius
                vmovss  dword ptr [rsp+0A8h+center+8], xmm3
              }
              CG_DebugSphere(&center, *(float *)&_XMM1, &colorGreen, 0, 1);
            }
          }
          if ( _RBX[104] )
          {
            __asm { vmovaps xmm1, xmm7; radius }
            CG_DebugSphere((const vec3_t *)(_RBX + 152), *(float *)&_XMM1, &colorBlue, 0, 1);
            __asm { vmovaps xmm1, xmm7; radius }
            CG_DebugSphere((const vec3_t *)(_RBX + 112), *(float *)&_XMM1, &colorRed, 0, 1);
            if ( _RBX[104] == 2 )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vxorps  xmm1, xmm1, xmm1
                vcvtsi2ss xmm1, xmm1, eax
                vcvtsi2ss xmm0, xmm0, eax
                vdivss  xmm6, xmm1, xmm0
                vmovss  xmm0, dword ptr [rbx+70h]
                vsubss  xmm1, xmm0, dword ptr [rbx+98h]
                vmovss  xmm0, dword ptr [rbx+74h]
                vmulss  xmm2, xmm1, xmm6
                vaddss  xmm3, xmm2, dword ptr [rbx+98h]
                vsubss  xmm2, xmm0, dword ptr [rbx+9Ch]
                vmovss  xmm0, dword ptr [rbx+78h]
                vmovss  dword ptr [rsp+0A8h+center], xmm3
                vmulss  xmm3, xmm2, xmm6
                vaddss  xmm4, xmm3, dword ptr [rbx+9Ch]
                vsubss  xmm2, xmm0, dword ptr [rbx+0A0h]
                vmulss  xmm3, xmm2, xmm6
                vmovss  dword ptr [rsp+0A8h+center+4], xmm4
                vaddss  xmm4, xmm3, dword ptr [rbx+0A0h]
                vmovaps xmm1, xmm7; radius
                vmovss  dword ptr [rsp+0A8h+center+8], xmm4
              }
              CG_DebugSphere(&center, *(float *)&_XMM1, &colorGreen, 0, 1);
            }
          }
          Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_ik_antislide_collision_show_capsules, "xanim_ik_antislide_collision_show_capsules");
          __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
          if ( Bool_Internal_DebugName && (_RBX[8] || _RBX[104]) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+1Ch]
              vmovss  xmm2, dword ptr [rbx+20h]
              vmovss  xmm3, dword ptr [rbx+24h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm4, xmm2, xmm1
              vxorps  xmm6, xmm6, xmm6
              vcomiss xmm4, xmm6
              vmovss  xmm0, dword ptr [rbx+7Ch]
              vmovss  xmm2, dword ptr [rbx+80h]
              vmovss  xmm3, dword ptr [rbx+84h]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm3, xmm2, xmm1
              vcomiss xmm3, xmm6
            }
          }
          __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
        }
        return 1;
      }
    }
    children = AnimInfo->children;
    if ( children )
    {
      while ( 1 )
      {
        if ( (children & 0x8000u) != 0 )
        {
          v72 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v72 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v75) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(duration) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", duration, v75) )
              __debugbreak();
          }
          v71 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v72];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v75) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(duration) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", duration, v75) )
              __debugbreak();
          }
          v71 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        if ( !v71 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1144, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
          __debugbreak();
        v73 = *((_WORD *)v71 + 5);
        if ( XAnimNode_IKAntiSlide_DrawDebug_r(tree, children) )
          break;
        children = v73;
        if ( !v73 )
          return 0;
      }
      return 1;
    }
  }
  return 0;
}

/*
==============
XAnimNode_IKAntiSlide_GetOriginBoneWorld
==============
*/
void XAnimNode_IKAntiSlide_GetOriginBoneWorld(const XAnimNode_IKAntiSlide *antiSlide, vec3_t *outOrigin)
{
  if ( !antiSlide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 86, ASSERT_TYPE_ASSERT, "(antiSlide)", (const char *)&queryFormat, "antiSlide") )
    __debugbreak();
  GetSecureRootVec3(&antiSlide->originBoneWorldTrans, outOrigin, s_ikanticlide_aab_X, s_ikanticlide_aab_Y, s_ikanticlide_aab_Z);
}

/*
==============
XAnimNode_IKAntiSlide_GetParametersBySpeed
==============
*/

void __fastcall XAnimNode_IKAntiSlide_GetParametersBySpeed(double speed, float *outThreshold, unsigned __int16 *outBlendoutTime)
{
  bool v18; 
  unsigned int v20; 
  __int64 v26; 
  __int64 v27; 
  __int128 v28; 
  char v31; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm { vmovaps xmmword ptr [r11-28h], xmm6 }
  _RBX = DCONST_DVARFLT_player_runThreshhold;
  __asm
  {
    vmovss  xmm2, cs:__real@41700000
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rsp+0A8h+var_48], xmm1
    vmovss  [rsp+0A8h+var_44], xmm2
    vmovaps xmm6, xmm0
  }
  if ( !DCONST_DVARFLT_player_runThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_runThreshhold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_player_sprintThreshhold;
  __asm { vmovss  [rsp+0A8h+var_40], xmm0 }
  if ( !DCONST_DVARFLT_player_sprintThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintThreshhold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmovss  [rsp+0A8h+var_3C], xmm0
  }
  if ( !outThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 213, ASSERT_TYPE_ASSERT, "(outThreshold)", (const char *)&queryFormat, "outThreshold") )
    __debugbreak();
  if ( !outBlendoutTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 214, ASSERT_TYPE_ASSERT, "(outBlendoutTime)", (const char *)&queryFormat, "outBlendoutTime") )
    __debugbreak();
  *outThreshold = 0.0;
  *outBlendoutTime = 0;
  _RBX = DCONST_DVARVEC4_xanim_ik_antislide_height_thresholds;
  if ( !DCONST_DVARVEC4_xanim_ik_antislide_height_thresholds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_height_thresholds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovups xmm0, xmmword ptr [rbx+28h] }
  _RBX = DCONST_DVARVEC4_xanim_ik_antislide_blendoutTimes;
  __asm { vmovups [rsp+0A8h+var_68], xmm0 }
  if ( !DCONST_DVARVEC4_xanim_ik_antislide_blendoutTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_blendoutTimes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovups xmm0, xmmword ptr [rbx+28h] }
  v20 = 3;
  _RAX = 3i64;
  __asm { vmovups [rsp+0A8h+var_58], xmm0 }
  while ( 1 )
  {
    __asm { vcomiss xmm6, [rsp+rax*4+0A8h+var_48] }
    if ( !v18 )
      break;
    --v20;
    v18 = _RAX-- == 0;
    if ( _RAX < 0 )
      goto LABEL_30;
  }
  if ( v20 >= 4 )
  {
    LODWORD(v27) = 4;
    LODWORD(v26) = v20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  _RDI = (int)v20;
  *outThreshold = *((float *)&v28 + (int)v20);
  if ( v20 >= 4 )
  {
    LODWORD(v27) = 4;
    LODWORD(v26) = v20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  __asm { vcvttss2si eax, dword ptr [rsp+rdi*4+0A8h+var_58] }
  *outBlendoutTime = _EAX;
LABEL_30:
  _R11 = &v31;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
XAnimNode_IKAntiSlide_Register
==============
*/
void XAnimNode_IKAntiSlide_Register(void)
{
  XAnimRegisterNodeTypeInternal(XAnimNodeTypeDeclaration<XAnimNode_IKAntiSlide>::ms_typeInfo);
}

/*
==============
XAnimNode_IKAntiSlide_SetOriginBoneWorld
==============
*/
void XAnimNode_IKAntiSlide_SetOriginBoneWorld(XAnimNode_IKAntiSlide *antiSlide, const vec3_t *origin)
{
  if ( !antiSlide && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 105, ASSERT_TYPE_ASSERT, "(antiSlide)", (const char *)&queryFormat, "antiSlide") )
    __debugbreak();
  SetSecureRootVec3(origin, &antiSlide->originBoneWorldTrans, s_ikanticlide_aab_X, s_ikanticlide_aab_Y, s_ikanticlide_aab_Z);
}

/*
==============
XAnimNode_IKAntiSlide_TestCapsuleCapsule
==============
*/
bool XAnimNode_IKAntiSlide_TestCapsuleCapsule(const XAnimNode_IKAntiSlide_Capsule *capsuleA, const XAnimNode_IKAntiSlide_Capsule *capsuleB)
{
  char v72; 
  float t1; 
  float t0; 
  char v81; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = capsuleB;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RDI = capsuleA;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0E8h+var_88], xmm13
    vmovaps [rsp+0E8h+var_98], xmm14
    vmovaps [rsp+0E8h+var_A8], xmm15
  }
  if ( !capsuleA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 245, ASSERT_TYPE_ASSERT, "(capsuleA)", (const char *)&queryFormat, "capsuleA") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 246, ASSERT_TYPE_ASSERT, "(capsuleB)", (const char *)&queryFormat, "capsuleB") )
    __debugbreak();
  __asm
  {
    vmovss  xmm12, dword ptr [rdi]
    vmovss  xmm14, dword ptr [rdi+4]
    vmovss  xmm6, dword ptr [rbx]
    vmovss  xmm8, dword ptr [rbx+4]
    vmovss  xmm10, dword ptr [rbx+8]
  }
  _RDX = &_RDI->end;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  xmm13, dword ptr [rdx]
    vmovss  xmm15, dword ptr [rdx+4]
  }
  _R9 = &_RBX->end;
  __asm
  {
    vmovss  xmm7, dword ptr [r9]
    vmovss  xmm9, dword ptr [r9+4]
    vmovss  xmm11, dword ptr [r9+8]
    vmovss  [rsp+0E8h+var_B0], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0E8h+var_AC], xmm0
  }
  ClosestPointsTwoSegs(&_RDI->start, &_RDI->end, &_RBX->start, &_RBX->end, &t0, &t1);
  __asm
  {
    vmovss  xmm5, [rsp+0E8h+var_B8]
    vmovss  xmm4, [rsp+0E8h+t0]
  }
  _R11 = &v81;
  __asm
  {
    vsubss  xmm0, xmm7, xmm6
    vmulss  xmm0, xmm0, xmm5
    vaddss  xmm2, xmm0, dword ptr [rbx]
    vsubss  xmm1, xmm13, xmm12
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmulss  xmm0, xmm1, xmm4
    vaddss  xmm1, xmm0, dword ptr [rdi]
    vsubss  xmm7, xmm2, xmm1
    vsubss  xmm2, xmm9, xmm8
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulss  xmm0, xmm2, xmm5
    vaddss  xmm3, xmm0, dword ptr [rbx+4]
    vsubss  xmm1, xmm15, xmm14
    vmovaps xmm14, [rsp+0E8h+var_98]
    vmovaps xmm15, [rsp+0E8h+var_A8]
    vmulss  xmm2, xmm1, xmm4
    vaddss  xmm0, xmm2, dword ptr [rdi+4]
    vsubss  xmm6, xmm3, xmm0
    vmovss  xmm0, [rsp+0E8h+var_B0]
    vsubss  xmm0, xmm0, [rsp+0E8h+var_AC]
    vsubss  xmm1, xmm11, xmm10
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmulss  xmm2, xmm1, xmm5
    vaddss  xmm3, xmm2, dword ptr [rbx+8]
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  xmm0, dword ptr [rbx+18h]
    vaddss  xmm5, xmm0, dword ptr [rdi+18h]
    vsubss  xmm4, xmm3, xmm2
    vmulss  xmm1, xmm7, xmm7
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmulss  xmm2, xmm6, xmm6
    vmovaps xmm6, xmmword ptr [r11-10h]
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm4, xmm3, xmm0
    vmulss  xmm1, xmm5, xmm5
    vcomiss xmm1, xmm4
  }
  return !v72;
}


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
  int v8; 
  __int16 v9; 
  int v10; 
  refdef_t *v11; 
  int modelIndex[6]; 

  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 172, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  v7 = DVARBOOL_xanim_ik_antislide_enable;
  if ( !DVARBOOL_xanim_ik_antislide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled && *((_BYTE *)nodeData + 4) )
  {
    v8 = (int)(float)(dtime * 1000.0);
    v9 = I_clamp(*((__int16 *)nodeData + 5) - v8, 0, 0x7FFF);
    v10 = *((__int16 *)nodeData + 53) - v8;
    *((_WORD *)nodeData + 5) = v9;
    *((_WORD *)nodeData + 53) = I_clamp(v10, 0, 0x7FFF);
    if ( *((_BYTE *)nodeData + 5) == 0xFE )
      DObjGetBoneIndexInternal_29(obj, scr_const.tag_origin, (unsigned __int8 *)nodeData + 5, modelIndex);
    *((_QWORD *)nodeData + 25) = 0i64;
    *((_DWORD *)nodeData + 52) = 0;
    v11 = g_activeRefDef;
    if ( g_activeRefDef )
    {
      *((_DWORD *)nodeData + 50) = LODWORD(g_activeRefDef->viewOffset.v[0]);
      *((_DWORD *)nodeData + 51) = LODWORD(v11->viewOffset.v[1]);
      *((_DWORD *)nodeData + 52) = LODWORD(v11->viewOffset.v[2]);
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
  double v18; 
  double v19; 
  double v20; 
  double v21; 
  double v22; 
  double v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  double v29; 
  double v30; 
  vec3_t origin; 
  __int16 p; 

  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 4) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 5) = p;
  Float = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 53) = *(float *)&Float;
  v5 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 54) = *(float *)&v5;
  v6 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 55) = *(float *)&v6;
  v7 = MemFile_ReadFloat(memFile);
  origin.v[0] = *(float *)&v7;
  v8 = MemFile_ReadFloat(memFile);
  origin.v[1] = *(float *)&v8;
  v9 = MemFile_ReadFloat(memFile);
  origin.v[2] = *(float *)&v9;
  XAnimNode_IKAntiSlide_SetOriginBoneWorld((XAnimNode_IKAntiSlide *)nodeData, &origin);
  v10 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 50) = *(float *)&v10;
  v11 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 51) = *(float *)&v11;
  v12 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 52) = *(float *)&v12;
  MemFile_ReadData(memFile, 0x20ui64, (char *)nodeData + 236);
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 8) = p;
  v13 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 4) = *(float *)&v13;
  v14 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 5) = *(float *)&v14;
  v15 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 6) = *(float *)&v15;
  v16 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 7) = *(float *)&v16;
  v17 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 8) = *(float *)&v17;
  v18 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 9) = *(float *)&v18;
  v19 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 10) = *(float *)&v19;
  v20 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 11) = *(float *)&v20;
  v21 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 12) = *(float *)&v21;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)nodeData + 5) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)nodeData + 6) = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  *((_BYTE *)nodeData + 104) = p;
  v22 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 28) = *(float *)&v22;
  v23 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 29) = *(float *)&v23;
  v24 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 30) = *(float *)&v24;
  v25 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 31) = *(float *)&v25;
  v26 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 32) = *(float *)&v26;
  v27 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 33) = *(float *)&v27;
  v28 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 34) = *(float *)&v28;
  v29 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 35) = *(float *)&v29;
  v30 = MemFile_ReadFloat(memFile);
  *((float *)nodeData + 36) = *(float *)&v30;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)nodeData + 53) = p;
  MemFile_ReadData(memFile, 2ui64, &p);
  *((_WORD *)nodeData + 54) = p;
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
  const dvar_t *v10; 
  XAnimIKCalcInfo *ikCalcInfo; 
  unsigned int v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  char *dObjData; 
  char *v16; 
  unsigned __int64 v17; 
  bool v18; 
  unsigned int v19; 
  __int64 v20; 
  unsigned __int16 v21; 
  unsigned int v22; 
  bitarray_base<bitarray<256> > *p_partBits; 
  DObjPartBits *v24; 
  __int64 v25; 
  __int64 *v26; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  XAnimCalcAnimInfo *v30; 
  unsigned int i; 
  XAnimCalcBuffer *v37; 
  float v38; 
  float v39; 
  __m128 v40; 
  __int128 v41; 
  float v44; 
  float v46; 
  float v47; 
  __int64 *v48; 
  float *v49; 
  float4 *v50; 
  XAnimCalcAnimInfo *v51; 
  DObj *v52; 
  __int64 v53; 
  __m128 v54; 
  __m128 v55; 
  __m128 v56; 
  char v59; 
  unsigned int v60; 
  const dvar_t *v61; 
  int v62; 
  float v63; 
  float v64; 
  const dvar_t *v65; 
  char v66; 
  const dvar_t *v67; 
  char v68; 
  XAnimCalcAnimInfo *v69; 
  __m128 v70; 
  const dvar_t *v71; 
  float value; 
  float v73; 
  double v74; 
  double v75; 
  const dvar_t *v76; 
  const dvar_t *v77; 
  float v78; 
  float v79; 
  float v80; 
  unsigned int v81; 
  XAnimCalcAnimInfo *v82; 
  float v83; 
  float v84; 
  float v85; 
  vec4_t v87; 
  float v90; 
  vec4_t v92; 
  __m128 v96; 
  __m128 v99; 
  __m128 v101; 
  __m128 v104; 
  __m128 v105; 
  __m128 v106; 
  __m128 v107; 
  __m128 v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  __int64 v114; 
  unsigned __int8 v115; 
  unsigned __int8 v116; 
  bool v117; 
  double Float_Internal_DebugName; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  double v123; 
  float *v124; 
  double v125; 
  bool v126; 
  unsigned __int16 v127; 
  float *v128; 
  double v129; 
  bool v130; 
  unsigned __int16 Int_Internal_DebugName; 
  int v132; 
  _BOOL8 v133; 
  float v134; 
  float v135; 
  double v136; 
  double v137; 
  char v138; 
  unsigned __int8 v139; 
  float v140; 
  float v144; 
  __int128 v145; 
  float v146; 
  float v147; 
  float v148; 
  __int128 v150; 
  const char *v151; 
  const dvar_t *v152; 
  double v153; 
  float v154; 
  float v157; 
  float v158; 
  float v159; 
  bool v160; 
  double v161; 
  int v162; 
  __int16 v163; 
  double v164; 
  float v165; 
  float v166; 
  float v167; 
  float v168; 
  float v169; 
  float v170; 
  float v171; 
  float v172; 
  __int128 v173; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  double v181; 
  float v182; 
  double v183; 
  float v184; 
  float v185; 
  float v190; 
  int v191; 
  int v192; 
  __int64 v193; 
  float v194; 
  _BYTE *v196; 
  double v197; 
  float v198; 
  __int64 v199; 
  bool v200; 
  __int64 v201; 
  __int64 v202; 
  unsigned __int16 v203; 
  int *v204; 
  __int64 *v205; 
  int *v206; 
  float v207; 
  __m128 v209; 
  const float4 *fmt; 
  XAnimCalcBuffer *v213; 
  const float4 *v214; 
  __int64 calcMode; 
  unsigned __int8 v216; 
  int v217; 
  char v218; 
  unsigned __int16 v219; 
  int idx; 
  char v221[4]; 
  __int64 v222; 
  XAnimCalcAnimInfo *animInfoa; 
  unsigned __int16 outBlendoutTime[2]; 
  int v225; 
  float v226; 
  float v227; 
  DObj *obja; 
  float v229; 
  float v230; 
  float v231; 
  float v232; 
  XAnimCalcBuffer *buffer; 
  float v234; 
  float v235; 
  float v236; 
  float outThreshold; 
  float v238; 
  float v239; 
  float v240; 
  float v241; 
  vec4_t v242; 
  XAnimInfo *info; 
  float v244; 
  float v245; 
  vec3_t outOrigin; 
  __int64 v247[2]; 
  __m128 v248; 
  __int64 v249; 
  __m128 v250; 
  __m128 v251; 
  __m128 v252; 
  vec4_t v253; 
  vec3_t v254; 
  vec3_t in1; 
  vec3_t v; 
  vec3_t v257; 
  vec3_t origin; 
  vec3_t v259; 
  XAnimNode_IKAntiSlide_Capsule capsuleA; 
  __m128 v261; 
  vec3_t v262; 
  vec3_t v263; 
  XAnimNode_IKAntiSlide_Capsule capsuleB; 
  __m128 v265; 
  vec4_t v266; 
  __m128 v267; 
  __m128 v268; 
  vec4_t v269; 
  vec4_t v270; 
  tmat33_t<vec3_t> axis; 
  float4 outModelTranslation; 
  float4 outModelQuat; 
  vec4_t quat; 
  float4 v275; 
  float4 v276; 
  float4 v277; 
  float4 outTranslation; 
  vec4_t in2; 
  tmat43_t<vec3_t> v280; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > otherBitSet; 
  tmat43_t<vec3_t> out; 
  int v283[2]; 
  int v284[20]; 
  int v285[18]; 
  float4 v286; 
  __int128 v287[4]; 

  v249 = -2i64;
  info = (XAnimInfo *)animInfo;
  obja = (DObj *)obj;
  animInfoa = animCalcInfo;
  _RSI = (XAnimNode_IKAntiSlide *)nodeData;
  v265.m128_u64[0] = (unsigned __int64)nodeData;
  buffer = destBuffer;
  Profile_Begin(434);
  if ( !XAnimIsClientOnlyNode(animInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 287, ASSERT_TYPE_ASSERT, "(XAnimIsClientOnlyNode( animInfo ))", (const char *)&queryFormat, "XAnimIsClientOnlyNode( animInfo )") )
    __debugbreak();
  v10 = DVARBOOL_xanim_ik_antislide_enable;
  if ( !DVARBOOL_xanim_ik_antislide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
    goto LABEL_212;
  if ( !_RSI->initialized )
    goto LABEL_212;
  if ( _RSI->originBoneIndex == 0xFE )
    goto LABEL_212;
  ikCalcInfo = animCalcInfo->ikCalcInfo;
  if ( !ikCalcInfo->dObjData || !ikCalcInfo->ikData )
    goto LABEL_212;
  v219 = 255;
  v12 = 0;
  v13 = 0i64;
  do
  {
    v14 = 28i64 * (v12 + 2);
    dObjData = (char *)animCalcInfo->ikCalcInfo->dObjData;
    v16 = &dObjData[v14 + 68];
    v247[v13] = (__int64)v16;
    *((_BYTE *)&v217 + v13) = 1;
    v17 = *(unsigned int *)&dObjData[v14 + 84];
    if ( (*(_DWORD *)&dObjData[v14 + 84] & 0x8000) != 0 )
    {
      v18 = (obja->skel.partBits.skel.array[7] & 2) != 0;
    }
    else
    {
      if ( (unsigned int)v17 >= 0x100 )
      {
        LODWORD(calcMode) = 256;
        LODWORD(v213) = *(_DWORD *)&dObjData[v14 + 84];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v213, calcMode) )
          __debugbreak();
      }
      dObjData = (char *)obja;
      v18 = ((0x80000000 >> (v17 & 0x1F)) & obja->skel.partBits.skel.array[v17 >> 5]) != 0;
    }
    v221[v13] = v18;
    if ( !*(_DWORD *)v16 || (v19 = *((_DWORD *)v16 + 4), v19 == 255) )
    {
      if ( v13 >= 2 )
      {
        j___report_rangecheckfailure(dObjData);
        __debugbreak();
      }
    }
    else
    {
      if ( !bitarray_base<bitarray<256>>::testBit(&animCalcInfo->ignorePartBits, v19) )
        goto LABEL_26;
      if ( v13 >= 2 )
      {
        j___report_rangecheckfailure(v20);
        JUMPOUT(0x1418EC8D2i64);
      }
    }
    *((_BYTE *)&v217 + v13) = 0;
LABEL_26:
    v21 = truncate_cast<unsigned short,unsigned int>(*((_DWORD *)v16 + 6));
    if ( v219 == 255 )
    {
      v219 = v21;
    }
    else if ( v21 != 255 && v21 != v219 )
    {
      LODWORD(v213) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 344, ASSERT_TYPE_ASSERT, "( ( footFloatTrackBoneIndex == 255 || footFloatTrackBoneIndex == floatTrackBoneIndex ) )", "( footFloatTrackBoneIndex ) = %i", v213) )
        __debugbreak();
    }
    ++v12;
    ++v13;
  }
  while ( v12 < 2 );
  if ( !(_WORD)v217 )
  {
LABEL_212:
    Profile_EndInternal(NULL);
    return;
  }
  v22 = 0;
  p_partBits = &_RSI->partBits;
  v24 = &_RSI->partBits;
  while ( 1 )
  {
    v25 = 2i64;
    if ( v24->array[0] )
      break;
    ++v22;
    v24 = (DObjPartBits *)((char *)v24 + 4);
    if ( v22 >= 8 )
    {
      v26 = v247;
      v27 = 2i64;
      do
      {
        v28 = *v26;
        bitarray_base<bitarray<256>>::setBit(p_partBits, *(_DWORD *)(*v26 + 16));
        bitarray_base<bitarray<256>>::setBit(p_partBits, *(_DWORD *)(v28 + 12));
        v29 = *(_DWORD *)(v28 + 24);
        if ( v29 != 255 )
          XAnimSetPartBit((DObjPartBits *)p_partBits, v29);
        ++v26;
        --v27;
      }
      while ( v27 );
      DObjCompleteHierarchyBits(obja, (DObjPartBits *)p_partBits);
      _RSI = (XAnimNode_IKAntiSlide *)v265.m128_u64[0];
      break;
    }
  }
  v30 = animInfoa;
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(&otherBitSet, animInfoa->partBits);
  _R13 = v30->partBits;
  for ( i = 0; i < 2; ++i )
  {
    _R15 = 2i64 * i;
    __asm
    {
      vlddqu  xmm6, xmmword ptr [rsi+r15*8+0ECh]
      vlddqu  xmm0, xmmword ptr [r13+r15*8+0]
      vpor    xmm6, xmm0, xmm6
    }
    *(_OWORD *)&_R13->array[4 * i] = _XMM6;
  }
  v37 = buffer;
  XAnimCalcDefaultBlendNode(animInfoa, obja, info, weightScale, bNormQuat, buffer, LINEAR);
  LOBYTE(v225) = 0;
  LOWORD(v222) = 0;
  XAnimGetLocalBoneTransform(animInfoa, obja, v37, _RSI->originBoneIndex, &outModelQuat, &outModelTranslation);
  v38 = outModelTranslation.v.m128_f32[0];
  v250 = outModelTranslation.v;
  v39 = _mm_shuffle_ps(v250, v250, 85).m128_f32[0];
  v40 = _mm_shuffle_ps(v250, v250, 170);
  v261 = v40;
  v253 = (vec4_t)outModelQuat.v;
  quat = (vec4_t)outModelQuat.v;
  QuatToAxis(&quat, &axis);
  origin.v[0] = v38 + _RSI->entityViewOffset.v[0];
  origin.v[1] = v39 + _RSI->entityViewOffset.v[1];
  origin.v[2] = v40.m128_f32[0] + _RSI->entityViewOffset.v[2];
  XAnimNode_IKAntiSlide_GetOriginBoneWorld(_RSI, &outOrigin);
  v41 = LODWORD(origin.v[1]);
  *(float *)&v41 = fsqrt((float)((float)((float)(origin.v[1] - outOrigin.v[1]) * (float)(origin.v[1] - outOrigin.v[1])) + (float)((float)(origin.v[0] - outOrigin.v[0]) * (float)(origin.v[0] - outOrigin.v[0]))) + (float)((float)(origin.v[2] - outOrigin.v[2]) * (float)(origin.v[2] - outOrigin.v[2])));
  _XMM1 = v41;
  __asm { vcmpless xmm0, xmm1, cs:__real@80000000 }
  v44 = FLOAT_1_0;
  __asm { vblendvps xmm1, xmm1, xmm15, xmm0 }
  *(float *)&info = *(float *)&_XMM1;
  v46 = (float)(1.0 / *(float *)&_XMM1) * (float)(origin.v[0] - outOrigin.v[0]);
  v47 = (float)(1.0 / *(float *)&_XMM1) * (float)(origin.v[1] - outOrigin.v[1]);
  *(float *)&v41 = (float)(1.0 / *(float *)&_XMM1) * (float)(origin.v[2] - outOrigin.v[2]);
  XAnimNode_IKAntiSlide_SetOriginBoneWorld(_RSI, &origin);
  v245 = (float)((float)(v47 * axis.m[1].v[1]) + (float)(v46 * axis.m[1].v[0])) + (float)(*(float *)&v41 * axis.m[1].v[2]);
  *(float *)&info = (float)((float)(v47 * axis.m[0].v[1]) + (float)(v46 * axis.m[0].v[0])) + (float)(*(float *)&v41 * axis.m[0].v[2]);
  v48 = v247;
  v49 = (float *)v284;
  v50 = &v286;
  v51 = animInfoa;
  v52 = obja;
  do
  {
    v53 = *v48;
    XAnimGetLocalBoneTransform(v51, v52, buffer, *(_DWORD *)(*v48 + 4), v50 - 1, &v275);
    XAnimGetLocalBoneTransform(v51, v52, buffer, *(_DWORD *)(v53 + 8), v50, &v276);
    XAnimGetLocalBoneTransform(v51, v52, buffer, *(_DWORD *)(v53 + 16), v50 + 1, &v277);
    v54 = v275.v;
    *(v49 - 2) = v275.v.m128_f32[0];
    *(v49 - 1) = _mm_shuffle_ps(v54, v54, 85).m128_f32[0];
    *v49 = _mm_shuffle_ps(v54, v54, 170).m128_f32[0];
    v55 = v276.v;
    v49[1] = v276.v.m128_f32[0];
    v49[2] = _mm_shuffle_ps(v55, v55, 85).m128_f32[0];
    v49[3] = _mm_shuffle_ps(v55, v55, 170).m128_f32[0];
    v56 = v277.v;
    v49[4] = v277.v.m128_f32[0];
    v49[5] = _mm_shuffle_ps(v56, v56, 85).m128_f32[0];
    v253 = (vec4_t)_mm_shuffle_ps(v56, v56, 170);
    v49[6] = v253.v[0];
    v50 += 3;
    ++v48;
    v49 += 9;
    --v25;
  }
  while ( v25 );
  _RSI = v265.m128_u64[0];
  _XMM10 = 0i64;
  v59 = v217;
  v60 = 0;
  if ( (float)((float)((float)(*(float *)(v265.m128_u64[0] + 212) * *(float *)(v265.m128_u64[0] + 212)) + (float)(*(float *)(v265.m128_u64[0] + 216) * *(float *)(v265.m128_u64[0] + 216))) + (float)(*(float *)(v265.m128_u64[0] + 220) * *(float *)(v265.m128_u64[0] + 220))) > 0.0 )
  {
    v61 = DCONST_DVARFLT_xanim_ik_antislide_slope_threshold;
    if ( !DCONST_DVARFLT_xanim_ik_antislide_slope_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_slope_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v61);
    v62 = (unsigned __int8)v225;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(_RSI + 220) - v40.m128_f32[0]) & _xmm) > v61->current.value )
      v62 = 1;
    v225 = v62;
  }
  LODWORD(v63) = COERCE_UNSIGNED_INT(*(float *)v284 - v40.m128_f32[0]) & _xmm;
  LODWORD(v64) = COERCE_UNSIGNED_INT(*(float *)&v284[9] - v40.m128_f32[0]) & _xmm;
  if ( !v59 && !v221[0] )
    goto LABEL_60;
  v65 = DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold;
  if ( !DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_crouch_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v65);
  if ( v63 < v65->current.value )
    v66 = 1;
  else
LABEL_60:
    v66 = 0;
  if ( !BYTE1(v217) && !v221[1] )
    goto LABEL_68;
  v67 = DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold;
  if ( !DCONST_DVARFLT_xanim_ik_antislide_crouch_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_crouch_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v67);
  if ( v64 < v67->current.value )
    v68 = 1;
  else
LABEL_68:
    v68 = 0;
  v218 = v66 | v68;
  XAnimNode_IKAntiSlide_GetParametersBySpeed(*(float *)_RSI, &outThreshold, outBlendoutTime);
  v69 = animInfoa;
  if ( v219 == 255 )
  {
    v254.v[0] = 0.0;
    v254.v[1] = 0.0;
    v254.v[2] = 0.0;
LABEL_85:
    v78 = 0.0;
    v79 = 0.0;
    v80 = 0.0;
    goto LABEL_86;
  }
  XAnimGetParentRelativeBoneTranslationRelativeToBasePose(animInfoa, obja, buffer, v219, &outTranslation);
  v70 = outTranslation.v;
  v254.v[0] = outTranslation.v.m128_f32[0];
  LODWORD(v254.v[1]) = _mm_shuffle_ps(v70, v70, 85).m128_u32[0];
  v253 = (vec4_t)_mm_shuffle_ps(v70, v70, 170);
  v254.v[2] = v253.v[0];
  v71 = DCONST_DVARFLT_xanim_ik_antislide_floatTrackRange;
  if ( !DCONST_DVARFLT_xanim_ik_antislide_floatTrackRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_floatTrackRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v71);
  value = v71->current.value;
  if ( value == 0.0 )
  {
    v214 = (const float4 *)"range != 0.0f";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 448, ASSERT_TYPE_ASSERT, "(range != 0.0f)", (const char *)&queryFormat) )
      __debugbreak();
  }
  v73 = 1.0 / value;
  v74 = I_fclamp(v73 * v254.v[0], 0.0, 1.0);
  v254.v[0] = *(float *)&v74;
  v75 = I_fclamp(v73 * v254.v[1], 0.0, 1.0);
  v254.v[1] = *(float *)&v75;
  v76 = DCONST_DVARBOOL_xanim_ik_antislide_enable_foot_pin_offset;
  if ( !DCONST_DVARBOOL_xanim_ik_antislide_enable_foot_pin_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable_foot_pin_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v76);
  if ( !v76->current.enabled )
    goto LABEL_85;
  v77 = DCONST_DVARVEC3_xanim_ik_antislide_foot_pin_offset;
  if ( !DCONST_DVARVEC3_xanim_ik_antislide_foot_pin_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_foot_pin_offset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v77);
  v78 = v77->current.value;
  v79 = v77->current.vector.v[1];
  v80 = v77->current.vector.v[2];
LABEL_86:
  v236 = v80;
  v235 = v79;
  v234 = v78;
  v81 = 0;
  idx = 0;
  v82 = NULL;
  animInfoa = NULL;
  while ( 2 )
  {
    if ( !*((_BYTE *)&v217 + (_QWORD)v82) )
      goto LABEL_194;
    v83 = *(float *)&v283[9 * (_QWORD)v82];
    v84 = *(float *)&v283[9 * (_QWORD)v82 + 1];
    v85 = *(float *)&v284[9 * (_QWORD)v82];
    v266.v[3] = 0.0;
    v87 = v266;
    v87.v[0] = v83;
    _XMM0 = v87;
    __asm
    {
      vinsertps xmm0, xmm0, xmm5, 10h
      vinsertps xmm0, xmm0, xmm6, 20h ; ' '
    }
    v266 = _XMM0;
    v242 = _XMM0;
    v90 = *(float *)&v284[9 * (_QWORD)v82 + 1];
    v269.v[3] = 0.0;
    v92 = v269;
    v92.v[0] = v90;
    _XMM2 = v92;
    __asm
    {
      vinsertps xmm2, xmm2, [rbp+rdi*4+4C0h+var_1D0], 4C0h+var_4B0
      vinsertps xmm2, xmm2, [rbp+rdi*4+4C0h+var_1CC], 4C0h+var_4A0
    }
    v269 = _XMM2;
    v242 = _XMM2;
    LODWORD(_XMM0.v[0]) = v284[9 * (_QWORD)v82 + 4];
    v267.m128_i32[3] = 0;
    v96 = v267;
    v96.m128_f32[0] = _XMM0.v[0];
    _XMM8 = v96;
    __asm
    {
      vinsertps xmm8, xmm8, [rbp+rdi*4+4C0h+var_1C4], 4C0h+var_4B0
      vinsertps xmm8, xmm8, [rbp+rdi*4+4C0h+var_1C0], 4C0h+var_4A0
    }
    v267 = _XMM8;
    v242 = (vec4_t)_XMM8;
    v242 = *(vec4_t *)&v285[12 * (_QWORD)v82 + 14];
    v251 = *(&v286.v + 3 * (_QWORD)v82);
    v99 = (__m128)v287[3 * (_QWORD)v82];
    _XMM0.v[0] = *(float *)(_RSI + 200);
    v240 = _XMM0.v[0] + v83;
    v241 = v84 + *(float *)(_RSI + 204);
    v227 = v85 + *(float *)(_RSI + 208);
    in1.v[0] = _XMM0.v[0] + v90;
    in1.v[1] = *(float *)&v284[9 * (_QWORD)v82 + 2] + *(float *)(_RSI + 204);
    in1.v[2] = *(float *)&v284[9 * (_QWORD)v82 + 3] + *(float *)(_RSI + 208);
    v244 = *(float *)(_RSI + 200) + *(float *)&v284[9 * (_QWORD)v82 + 4];
    v231 = *(float *)(_RSI + 204) + *(float *)&v284[9 * (_QWORD)v82 + 5];
    v232 = *(float *)(_RSI + 208) + *(float *)&v284[9 * (_QWORD)v82 + 6];
    v268.m128_i32[3] = 0;
    v101 = v268;
    v101.m128_f32[0] = v78;
    _XMM7 = v101;
    __asm
    {
      vinsertps xmm7, xmm7, xmm13, 10h
      vinsertps xmm7, xmm7, xmm14, 20h ; ' '
    }
    v268 = _XMM7;
    v104 = _mm_shuffle_ps(v99, v99, 201);
    v105 = _mm_shuffle_ps(v99, v99, 210);
    v106 = _mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 210), v104), _mm128_mul_ps(_mm_shuffle_ps(_XMM7, _XMM7, 201), v105));
    v107 = _mm128_add_ps(v106, v106);
    v251 = _mm128_add_ps(_mm128_sub_ps(_mm128_mul_ps(_mm_shuffle_ps(v107, v107, 210), v104), _mm128_mul_ps(_mm_shuffle_ps(v107, v107, 201), v105)), _mm128_add_ps(_XMM7, _mm128_mul_ps(v107, _mm_shuffle_ps(v99, v99, 255))));
    v108 = _mm128_add_ps(_XMM8, v251);
    v248 = _mm_shuffle_ps(v251, v251, 85);
    v252 = _mm_shuffle_ps(v251, v251, 170);
    v109 = v108.m128_f32[0] + *(float *)(_RSI + 200);
    v229 = v109;
    v110 = _mm_shuffle_ps(v108, v108, 85).m128_f32[0] + *(float *)(_RSI + 204);
    v238 = v110;
    v111 = _mm_shuffle_ps(v108, v108, 170).m128_f32[0] + *(float *)(_RSI + 208);
    v239 = v111;
    v265 = v99;
    *(__m128 *)&v285[4 * v81 + 4] = v99;
    v112 = v69->ikCalcInfo->ikData->weights[v81 + 2];
    v265.m128_f32[0] = v112;
    v113 = *(float *)&v284[9 * (_QWORD)v82 + 6] - v40.m128_f32[0];
    v230 = v113;
    v114 = 96i64 * (_QWORD)v82;
    v115 = *(_BYTE *)(96i64 * (_QWORD)v82 + _RSI + 8);
    v216 = v115;
    v116 = v115;
    v117 = *(float *)_RSI > 0.0;
    if ( *(float *)_RSI <= 0.0 )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_move_threshold, "xanim_ik_antislide_move_threshold");
      if ( *(float *)&Float_Internal_DebugName > 0.0 )
      {
        v119 = *(float *)(v114 + _RSI + 32);
        v120 = *(float *)(v114 + _RSI + 28);
        v121 = *(float *)(v114 + _RSI + 36);
        if ( (float)((float)((float)(v119 * v119) + (float)(v120 * v120)) + (float)(v121 * v121)) > 0.0 )
        {
          v122 = (float)((float)((float)(v119 - v110) * (float)(v119 - v110)) + (float)((float)(v120 - v109) * (float)(v120 - v109))) + (float)((float)(v121 - v111) * (float)(v121 - v111));
          v123 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_move_threshold, "xanim_ik_antislide_move_threshold");
          if ( v122 >= *(float *)&v123 )
            v117 = 1;
        }
        v113 = v230;
      }
      v81 = idx;
    }
    if ( v115 == 1 )
    {
      if ( v219 == 255 )
      {
        v126 = v113 >= outThreshold;
      }
      else
      {
        v124 = vec3_t::operator[](&v254, v81);
        v125 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_floatTrackThresholdFraction, "xanim_ik_antislide_floatTrackThresholdFraction");
        v126 = *(float *)&v125 > *v124;
        v115 = v216;
      }
      if ( v126 || !v117 || (_BYTE)v225 )
      {
        v116 = 2;
        v127 = outBlendoutTime[0];
        *(_WORD *)(v114 + _RSI + 10) = outBlendoutTime[0];
        *(_WORD *)(v114 + _RSI + 12) = v127;
      }
      goto LABEL_115;
    }
    if ( v115 == 2 )
    {
      if ( *(__int16 *)(v114 + _RSI + 10) > 0 )
        goto LABEL_115;
      *(_WORD *)(v114 + _RSI + 12) = 0;
      goto LABEL_114;
    }
    if ( !v117 || (_BYTE)v225 )
    {
      *(_DWORD *)(v114 + _RSI + 10) = 0;
LABEL_114:
      v116 = 0;
      goto LABEL_115;
    }
    if ( v219 == 255 )
    {
      v130 = outThreshold > v113;
    }
    else
    {
      v128 = vec3_t::operator[](&v254, v81);
      v129 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_floatTrackThresholdFraction, "xanim_ik_antislide_floatTrackThresholdFraction");
      v130 = *(float *)&v129 <= *v128;
      v115 = v216;
    }
    if ( v130 )
    {
      v116 = 1;
      *((_BYTE *)&v222 + (_QWORD)animInfoa) = 1;
    }
LABEL_115:
    *(float *)(v114 + _RSI + 56) = v109;
    *(float *)(v114 + _RSI + 60) = v110;
    *(float *)(v114 + _RSI + 64) = v111;
    *(_BYTE *)(v114 + _RSI + 100) = 0;
    if ( (float)((float)((float)(*(float *)(v114 + _RSI + 28) * *(float *)(v114 + _RSI + 28)) + (float)(*(float *)(v114 + _RSI + 32) * *(float *)(v114 + _RSI + 32))) + (float)(*(float *)(v114 + _RSI + 36) * *(float *)(v114 + _RSI + 36))) <= 0.0 )
      goto LABEL_148;
    if ( !v116 )
    {
      v132 = idx;
LABEL_155:
      *(_QWORD *)(v114 + _RSI + 16) = 0i64;
      *(_QWORD *)(v114 + _RSI + 24) = 0i64;
      *(_QWORD *)(v114 + _RSI + 32) = 0i64;
      *(_QWORD *)(v114 + _RSI + 40) = 0i64;
      *(_DWORD *)(v114 + _RSI + 48) = 0;
      *(_BYTE *)(v114 + _RSI + 8) = v116;
      *(float *)(v114 + _RSI + 52) = v112;
      *(_DWORD *)(v114 + _RSI + 72) = 0;
      *(float *)(v114 + _RSI + 76) = v113;
      *(_QWORD *)(v114 + _RSI + 80) = 0i64;
      *(float *)(v114 + _RSI + 96) = *vec3_t::operator[](&v254, v132);
      *(_QWORD *)(v114 + _RSI + 88) = 0i64;
      *(_BYTE *)(v114 + _RSI + 100) = 0;
      goto LABEL_193;
    }
    if ( !v115 )
    {
LABEL_148:
      v132 = idx;
      goto LABEL_149;
    }
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_ik_antislide_collision_blendout_time, "xanim_ik_antislide_collision_blendout_time");
    v132 = idx;
    v133 = idx == 0;
    if ( *((_BYTE *)&v217 + v133) || v221[v133] )
    {
      *(_QWORD *)capsuleA.start.v = *(_QWORD *)(v114 + _RSI + 40);
      capsuleA.start.v[2] = *(float *)(v114 + _RSI + 48);
      capsuleA.end = *(vec3_t *)(v114 + _RSI + 28);
      capsuleB.start.v[0] = *(float *)(_RSI + 200) + *(float *)&v284[9 * v133 + 1];
      v134 = *(float *)&v284[9 * v133 + 2] + *(float *)(_RSI + 204);
      capsuleB.start.v[1] = v134;
      v135 = *(float *)&v284[9 * v133 + 3] + *(float *)(_RSI + 208);
      capsuleB.start.v[2] = v135;
      capsuleB.end.v[0] = *(float *)(_RSI + 200) + *(float *)&v284[9 * v133 + 4];
      capsuleB.end.v[1] = *(float *)(_RSI + 204) + *(float *)&v284[9 * v133 + 5];
      capsuleB.end.v[2] = *(float *)(_RSI + 208) + *(float *)&v284[9 * v133 + 6];
      if ( (LODWORD(capsuleB.start.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v134) & 0x7F800000) == 2139095040 || (LODWORD(v135) & 0x7F800000) == 2139095040 )
      {
        v214 = (const float4 *)"!IS_NAN_VEC( otherFootCapsule.start )";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 646, ASSERT_TYPE_ASSERT, "(!( IS_NAN( ( otherFootCapsule.start )[0] ) || IS_NAN( ( otherFootCapsule.start )[1] ) || IS_NAN( ( otherFootCapsule.start )[2] ) ))", (const char *)&queryFormat) )
          __debugbreak();
      }
      if ( (LODWORD(capsuleB.end.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(capsuleB.end.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(capsuleB.end.v[2]) & 0x7F800000) == 2139095040 )
      {
        v214 = (const float4 *)"!IS_NAN_VEC( otherFootCapsule.end )";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 647, ASSERT_TYPE_ASSERT, "(!( IS_NAN( ( otherFootCapsule.end )[0] ) || IS_NAN( ( otherFootCapsule.end )[1] ) || IS_NAN( ( otherFootCapsule.end )[2] ) ))", (const char *)&queryFormat) )
          __debugbreak();
      }
      if ( (LODWORD(capsuleA.start.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(capsuleA.start.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(capsuleA.start.v[2]) & 0x7F800000) == 2139095040 )
      {
        v214 = (const float4 *)"!IS_NAN_VEC( currentFootCapsule.start )";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 648, ASSERT_TYPE_ASSERT, "(!( IS_NAN( ( currentFootCapsule.start )[0] ) || IS_NAN( ( currentFootCapsule.start )[1] ) || IS_NAN( ( currentFootCapsule.start )[2] ) ))", (const char *)&queryFormat) )
          __debugbreak();
      }
      if ( (LODWORD(capsuleA.end.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(capsuleA.end.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(capsuleA.end.v[2]) & 0x7F800000) == 2139095040 )
      {
        v214 = (const float4 *)"!IS_NAN_VEC( currentFootCapsule.end )";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 649, ASSERT_TYPE_ASSERT, "(!( IS_NAN( ( currentFootCapsule.end )[0] ) || IS_NAN( ( currentFootCapsule.end )[1] ) || IS_NAN( ( currentFootCapsule.end )[2] ) ))", (const char *)&queryFormat) )
          __debugbreak();
      }
      v136 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_capsule_radius, "xanim_ik_antislide_capsule_radius");
      capsuleA.radius = *(float *)&v136;
      v137 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_capsule_radius, "xanim_ik_antislide_capsule_radius");
      capsuleB.radius = *(float *)&v137;
      if ( XAnimNode_IKAntiSlide_TestCapsuleCapsule(&capsuleA, &capsuleB) )
      {
        if ( v116 == 2 )
        {
          if ( *(__int16 *)(v114 + _RSI + 10) < (int)Int_Internal_DebugName )
            Int_Internal_DebugName = *(_WORD *)(v114 + _RSI + 10);
          *(_WORD *)(v114 + _RSI + 10) = Int_Internal_DebugName;
          *(_BYTE *)(v114 + _RSI + 100) = 1;
        }
        else
        {
          if ( v116 == 1 )
          {
            v116 = 2;
            *(_WORD *)(v114 + _RSI + 12) = Int_Internal_DebugName;
            *(_WORD *)(v114 + _RSI + 10) = Int_Internal_DebugName;
          }
          *(_BYTE *)(v114 + _RSI + 100) = 1;
        }
      }
    }
LABEL_149:
    if ( !v116 )
      goto LABEL_155;
    v138 = 0;
    v139 = v216;
    if ( v216 )
    {
      if ( v216 == 1 )
      {
        if ( v116 == 2 )
        {
          if ( (float)((float)((float)(*(float *)(v114 + _RSI + 16) * *(float *)(v114 + _RSI + 16)) + (float)(*(float *)(v114 + _RSI + 20) * *(float *)(v114 + _RSI + 20))) + (float)(*(float *)(v114 + _RSI + 24) * *(float *)(v114 + _RSI + 24))) == 0.0 )
            v138 = 1;
          v140 = v44;
          if ( v138 )
            goto LABEL_161;
          goto LABEL_163;
        }
      }
      else
      {
LABEL_152:
        if ( v116 == 2 )
        {
          v140 = (float)*(__int16 *)(v114 + _RSI + 10) / (float)*(__int16 *)(v114 + _RSI + 12);
          goto LABEL_163;
        }
      }
      _XMM0 = v116;
      __asm
      {
        vpcmpeqd xmm2, xmm0, xmm1
        vblendvps xmm0, xmm10, xmm15, xmm2
      }
      v140 = *(float *)&_XMM0;
      v226 = *(float *)&_XMM0;
      goto LABEL_163;
    }
    if ( v116 != 1 )
      goto LABEL_152;
LABEL_161:
    *(float *)(v114 + _RSI + 16) = v109;
    *(float *)(v114 + _RSI + 20) = v110;
    *(float *)(v114 + _RSI + 24) = v111;
    v140 = v44;
LABEL_163:
    v144 = *(float *)(v114 + _RSI + 16);
    v145 = *(unsigned int *)(v114 + _RSI + 20);
    v226 = *(float *)(v114 + _RSI + 24);
    v146 = v144 - v109;
    v150 = v145;
    v147 = *(float *)&v145 - v110;
    v148 = v226 - v111;
    *(float *)&v150 = fsqrt((float)((float)(v147 * v147) + (float)(v146 * v146)) + (float)(v148 * v148));
    _XMM13 = v150;
    if ( v218 )
    {
      v151 = "xanim_ik_antislide_max_distance_crouch";
      v152 = DCONST_DVARFLT_xanim_ik_antislide_max_distance_crouch;
    }
    else
    {
      v151 = "xanim_ik_antislide_max_distance";
      v152 = DCONST_DVARFLT_xanim_ik_antislide_max_distance;
    }
    v153 = Dvar_GetFloat_Internal_DebugName(v152, v151);
    v154 = *(float *)&v153;
    if ( v140 <= 0.0 || *(float *)&v150 <= *(float *)&v153 )
    {
      v158 = v229;
    }
    else
    {
      __asm
      {
        vcmpless xmm0, xmm13, cs:__real@80000000
        vblendvps xmm1, xmm13, xmm15, xmm0
      }
      v157 = (float)(v146 * (float)(v44 / *(float *)&_XMM1)) * v154;
      v158 = v229;
      v144 = v157 + v229;
      *(float *)&v145 = (float)((float)(v147 * (float)(v44 / *(float *)&_XMM1)) * v154) + v238;
      v159 = (float)((float)(v148 * (float)(v44 / *(float *)&_XMM1)) * v154) + v239;
      v226 = v159;
      *(float *)(v114 + _RSI + 16) = v144;
      *(float *)(v114 + _RSI + 20) = *(float *)&v145;
      *(float *)(v114 + _RSI + 24) = v159;
      if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_ik_antislide_fast_blendout_enabled, "xanim_ik_antislide_fast_blendout_enabled") )
      {
        v160 = v216 == 2 || v116 == 2;
        v161 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_fast_blendout_threshold, "xanim_ik_antislide_fast_blendout_threshold");
        if ( v160 && *(float *)&_XMM13 > (float)(*(float *)&v161 + v154) )
        {
          v162 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_ik_antislide_fast_blendout_time, "xanim_ik_antislide_fast_blendout_time");
          v163 = v162;
          if ( (unsigned int)(v162 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v162, "signed", v162) )
            __debugbreak();
          if ( v163 > *(__int16 *)(v114 + _RSI + 10) )
            v163 = *(_WORD *)(v114 + _RSI + 10);
          *(_WORD *)(v114 + _RSI + 10) = v163;
          *(_WORD *)(v114 + _RSI + 12) = I_clamp((int)(float)((float)v163 / v140), 0, 0x7FFF);
        }
        v139 = v216;
      }
    }
    v164 = I_fclamp(v140 * weightScale, 0.0, v44);
    v165 = v140 * weightScale;
    v166 = (float)((float)(v144 - v158) * *(float *)&v164) + v158;
    v167 = (float)((float)(*(float *)&v145 - v238) * *(float *)&v164) + v238;
    v168 = (float)((float)(v226 - v239) * *(float *)&v164) + v239;
    v257.v[0] = v166 - v251.m128_f32[0];
    v257.v[1] = v167 - v248.m128_f32[0];
    v257.v[2] = v168 - v252.m128_f32[0];
    v170 = fsqrt((float)((float)((float)(v231 - in1.v[1]) * (float)(v231 - in1.v[1])) + (float)((float)(v244 - in1.v[0]) * (float)(v244 - in1.v[0]))) + (float)((float)(v232 - in1.v[2]) * (float)(v232 - in1.v[2]))) + fsqrt((float)((float)((float)(in1.v[1] - v241) * (float)(in1.v[1] - v241)) + (float)((float)(in1.v[0] - v240) * (float)(in1.v[0] - v240))) + (float)((float)(in1.v[2] - v227) * (float)(in1.v[2] - v227)));
    v169 = v170;
    v171 = v240;
    v172 = v241;
    v232 = fsqrt((float)((float)((float)((float)(v166 - v251.m128_f32[0]) - v240) * (float)((float)(v166 - v251.m128_f32[0]) - v240)) + (float)((float)((float)(v167 - v248.m128_f32[0]) - v241) * (float)((float)(v167 - v248.m128_f32[0]) - v241))) + (float)((float)((float)(v168 - v252.m128_f32[0]) - v227) * (float)((float)(v168 - v252.m128_f32[0]) - v227)));
    if ( v232 > v170 )
    {
      v.v[0] = (float)(v166 - v251.m128_f32[0]) - v240;
      v.v[1] = (float)(v167 - v248.m128_f32[0]) - v241;
      v.v[2] = (float)(v168 - v252.m128_f32[0]) - v227;
      Vec3Normalize(&v);
      v257.v[0] = (float)(v170 * v.v[0]) + v171;
      v257.v[1] = (float)(v170 * v.v[1]) + v172;
      v257.v[2] = (float)(v170 * v.v[2]) + v227;
      v166 = v257.v[0] + v251.m128_f32[0];
      v167 = v257.v[1] + v248.m128_f32[0];
      v168 = v257.v[2] + v252.m128_f32[0];
    }
    v270 = v242;
    QuatToAxis(&v270, (tmat33_t<vec3_t> *)&v280);
    v280.m[3].v[0] = v171;
    v280.m[3].v[1] = v172;
    v280.m[3].v[2] = v227;
    MatrixInverseOrthogonal43(&v280, &out);
    MatrixTransformVector43(&in1, &out, &v263);
    MatrixTransformVector43(&v257, &out, &v262);
    v263.v[1] = 0.0;
    v262.v[1] = 0.0;
    v259.v[0] = v262.v[0];
    v259.v[1] = 0.0;
    v259.v[2] = v262.v[2];
    v173 = LODWORD(v263.v[2]);
    *(float *)&v173 = fsqrt((float)(*(float *)&v173 * *(float *)&v173) + (float)(v263.v[0] * v263.v[0]));
    _XMM3 = v173;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm1, xmm3, xmm2, xmm0
    }
    v231 = *(float *)&_XMM1;
    v177 = (float)(1.0 / *(float *)&_XMM1) * v263.v[0];
    v178 = (float)(1.0 / *(float *)&_XMM1) * v263.v[2];
    Vec3Normalize(&v259);
    v180 = acosf_0((float)(v177 * v259.v[0]) + (float)(v178 * v259.v[2])) * 57.295776;
    v179 = v180;
    v181 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_max_angle_knee_target, "xanim_ik_antislide_max_angle_knee_target");
    v182 = *(float *)&v181;
    if ( v218 || v180 <= *(float *)&v181 )
    {
      v190 = 0.0;
    }
    else
    {
      v183 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_adjust_angle_knee_target, "xanim_ik_antislide_adjust_angle_knee_target");
      v184 = *(float *)&v183;
      v185 = *(float *)&v183 - v182;
      _XMM1 = LODWORD(v262.v[2]);
      __asm { vcmpltss xmm2, xmm1, dword ptr [rbp+4C0h+var_3B0+8] }
      _XMM0 = LODWORD(FLOAT_1_0);
      __asm { vblendvps xmm6, xmm0, xmm1, xmm2 }
      *(double *)&_XMM0 = I_fclamp((float)((float)(v180 - v182) * v184) / v185, 0.0, v184);
      v231 = *(float *)&_XMM6;
      v190 = *(float *)&_XMM0 * *(float *)&_XMM6;
      v270 = v242;
      AngleRadAxisToQuat(v190 * 0.017453292, &v280.m[1], &in2);
      QuatMultiply(&v270, &in2, &v253);
      XAnimSetLocalBoneTransform(v69, obja, buffer, *(_DWORD *)(v247[(_QWORD)animInfoa] + 4), fmt, v214, weightScale);
    }
    *(vec3_t *)(v114 + _RSI + 40) = in1;
    *(float *)(v114 + _RSI + 28) = v166;
    *(float *)(v114 + _RSI + 32) = v167;
    *(float *)(v114 + _RSI + 36) = v168;
    *(float *)&v191 = (float)(v167 - v248.m128_f32[0]) - *(float *)(_RSI + 204);
    *(float *)&v192 = (float)(v168 - v252.m128_f32[0]) - *(float *)(_RSI + 208);
    v193 = 3i64 * (_QWORD)animInfoa;
    *(float *)&v284[v193 + 18] = (float)(v166 - v251.m128_f32[0]) - *(float *)(_RSI + 200);
    v284[v193 + 19] = v191;
    v285[v193] = v192;
    *(float *)(v114 + _RSI + 72) = v165;
    *(float *)(v114 + _RSI + 76) = v230;
    *(float *)(v114 + _RSI + 80) = *(float *)&_XMM13;
    if ( v169 <= 0.0 )
      v194 = 0.0;
    else
      v194 = v232 / v169;
    *(float *)(v114 + _RSI + 84) = v194;
    *(_BYTE *)(v114 + _RSI + 68) = v139;
    *(float *)(v114 + _RSI + 88) = v179;
    *(float *)(v114 + _RSI + 92) = v190;
    *(float *)(v114 + _RSI + 52) = v265.m128_f32[0];
    *(float *)(v114 + _RSI + 96) = *vec3_t::operator[](&v254, v132);
    *(_BYTE *)(v114 + _RSI + 8) = v116;
    v44 = FLOAT_1_0;
    v40.m128_i32[0] = v261.m128_i32[0];
LABEL_193:
    v82 = animInfoa;
    v81 = idx;
LABEL_194:
    idx = ++v81;
    v82 = (XAnimCalcAnimInfo *)((char *)v82 + 1);
    animInfoa = v82;
    v78 = v234;
    if ( v81 < 2 )
      continue;
    break;
  }
  _XMM0 = v250;
  *(float *)(_RSI + 212) = v250.m128_f32[0];
  __asm { vextractps dword ptr [rsi+0D8h], xmm0, 1 }
  *(float *)(_RSI + 220) = v40.m128_f32[0];
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::copyBitArray<bitarray_traits_simd128<bitarray_memory_traits_simd128u>>(v69->partBits, &otherBitSet);
  v196 = (_BYTE *)(_RSI + 8);
  if ( *(_BYTE *)(_RSI + 8) == 1 && *(_BYTE *)(_RSI + 104) == 1 )
  {
    v197 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_strafe_cosine_angle, "xanim_ik_antislide_strafe_cosine_angle");
    LODWORD(v198) = LODWORD(v197) ^ _xmm;
    if ( v245 > *(float *)&v197 || v245 < v198 )
    {
      v199 = 0i64;
      if ( v245 <= *(float *)&v197 && v198 > v245 )
        v199 = 1i64;
    }
    else
    {
      v199 = 0i64;
      LOBYTE(v199) = *(float *)&info > 0.0;
    }
    v200 = *((_BYTE *)&v222 + v199) == 0;
    v201 = 3 * v199;
    if ( v200 )
    {
      v202 = 32 * v201;
      *(_BYTE *)(v202 + _RSI + 8) = 2;
      v203 = outBlendoutTime[0];
      *(_WORD *)(v202 + _RSI + 10) = outBlendoutTime[0];
      *(_WORD *)(v202 + _RSI + 12) = v203;
    }
    else
    {
      *(_BYTE *)(32 * v201 + _RSI + 8) = 0;
    }
  }
  v204 = &v217;
  v205 = v247;
  v206 = v285;
  do
  {
    if ( *(_BYTE *)v204 )
    {
      if ( *v196 )
      {
        v207 = *((float *)v206 - 2);
        v252.m128_i32[3] = 0;
        v209 = v252;
        v209.m128_f32[0] = v207;
        _XMM1 = v209;
        __asm
        {
          vinsertps xmm1, xmm1, dword ptr [rdi-4], 10h
          vinsertps xmm1, xmm1, dword ptr [rdi], 20h ; ' '
        }
        v252 = _XMM1;
        XAnimSetLocalBoneTransform(v69, obja, buffer, *(_DWORD *)(*v205 + 16), fmt, v214, weightScale);
      }
    }
    ++v60;
    v204 = (int *)((char *)v204 + 1);
    v196 += 96;
    v206 += 3;
    ++v205;
  }
  while ( v60 < 2 );
  Profile_EndInternal(NULL);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
XAnimNode_IKAntiSlide_PrintDebug
==============
*/
void XAnimNode_IKAntiSlide_PrintDebug(void *nodeData, const XAnimInfo *animInfo, char *buffer, const int size, const int depth, int *inoutPos)
{
  unsigned __int64 v6; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  unsigned __int8 v12; 
  unsigned __int8 v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  const char *v18; 
  const char *v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 

  v6 = size;
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1012, ASSERT_TYPE_ASSERT, "(nodeData)", (const char *)&queryFormat, "nodeData") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1013, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1014, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  if ( !inoutPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1015, ASSERT_TYPE_ASSERT, "(inoutPos)", (const char *)&queryFormat, "inoutPos") )
    __debugbreak();
  if ( !animInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1016, ASSERT_TYPE_ASSERT, "(animInfo)", (const char *)&queryFormat, "animInfo") )
    __debugbreak();
  if ( !nodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1020, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *((_BYTE *)nodeData + 4) )
  {
    v10 = DVARBOOL_xanim_ik_antislide_enable;
    if ( !DVARBOOL_xanim_ik_antislide_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_enable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( !v10->current.enabled )
      goto LABEL_51;
    v11 = DCONST_DVARBOOL_xanim_ik_disable;
    if ( !DCONST_DVARBOOL_xanim_ik_disable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_disable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled )
    {
LABEL_51:
      if ( depth > 0 )
      {
        v21 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v6, inoutPos, "  ");
          --v21;
        }
        while ( v21 );
      }
      Com_sprintfPos_truncate(buffer, v6, inoutPos, "   ^5OFF\n");
    }
    else
    {
      v12 = *((_BYTE *)nodeData + 8);
      if ( v12 >= 3u )
      {
        LODWORD(v23) = 3;
        LODWORD(v22) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1036, ASSERT_TYPE_ASSERT, "(unsigned)( node->footState[0].state ) < (unsigned)( static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT) )", "node->footState[0].state doesn't index static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT)\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      v13 = *((_BYTE *)nodeData + 104);
      if ( v13 >= 3u )
      {
        LODWORD(v23) = 3;
        LODWORD(v22) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1037, ASSERT_TYPE_ASSERT, "(unsigned)( node->footState[1].state ) < (unsigned)( static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT) )", "node->footState[1].state doesn't index static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT)\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      v14 = *((_BYTE *)nodeData + 68);
      if ( v14 >= 3u )
      {
        LODWORD(v23) = 3;
        LODWORD(v22) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1038, ASSERT_TYPE_ASSERT, "(unsigned)( node->footState[0].lastState ) < (unsigned)( static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT) )", "node->footState[0].lastState doesn't index static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT)\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      v15 = *((_BYTE *)nodeData + 164);
      if ( v15 >= 3u )
      {
        LODWORD(v23) = 3;
        LODWORD(v22) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1039, ASSERT_TYPE_ASSERT, "(unsigned)( node->footState[1].lastState ) < (unsigned)( static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT) )", "node->footState[1].lastState doesn't index static_cast<uint>(XAnimNode_IKFootStateType::STATE_COUNT)\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      v16 = v6;
      if ( depth > 0 )
      {
        v17 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v16, inoutPos, "  ");
          --v17;
        }
        while ( v17 );
      }
      v18 = (char *)&queryFormat.fmt + 3;
      v19 = (char *)&queryFormat.fmt + 3;
      if ( *((_BYTE *)nodeData + 100) )
        v19 = ", collision";
      Com_sprintfPos_truncate(buffer, v16, inoutPos, "   ^5(L): state: %3s, %.3f over %.3f, last: %3s, ik: %.3f, lerp: %.3f, floatTrack: %.2f, height: %.2f, dist: %.2f, legExtension: %.2f, hipAngle: %.2f, hipAdjust: %.2f%s\n", s_footStateNames[*((unsigned __int8 *)nodeData + 8)], (float)((float)*((__int16 *)nodeData + 5) * 0.001), (float)((float)*((__int16 *)nodeData + 6) * 0.001), s_footStateNames[*((unsigned __int8 *)nodeData + 68)], *((float *)nodeData + 13), *((float *)nodeData + 18), *((float *)nodeData + 24), *((float *)nodeData + 19), *((float *)nodeData + 20), *((float *)nodeData + 21), *((float *)nodeData + 22), *((float *)nodeData + 23), v19);
      if ( depth > 0 )
      {
        v20 = (unsigned int)depth;
        do
        {
          Com_sprintfPos_truncate(buffer, v16, inoutPos, "  ");
          --v20;
        }
        while ( v20 );
      }
      if ( *((_BYTE *)nodeData + 196) )
        v18 = ", collision";
      Com_sprintfPos_truncate(buffer, v16, inoutPos, "   ^5(R): state: %3s, %.3f over %.3f, last: %3s, ik: %.3f, lerp: %.3f, floatTrack: %.2f, height: %.2f, dist: %.2f, legExtension: %.2f, hipAngle: %.2f, hipAdjust: %.2f%s\n", s_footStateNames[*((unsigned __int8 *)nodeData + 104)], (float)((float)*((__int16 *)nodeData + 53) * 0.001), (float)((float)*((__int16 *)nodeData + 54) * 0.001), s_footStateNames[*((unsigned __int8 *)nodeData + 164)], *((float *)nodeData + 37), *((float *)nodeData + 42), *((float *)nodeData + 48), *((float *)nodeData + 43), *((float *)nodeData + 44), *((float *)nodeData + 45), *((float *)nodeData + 46), *((float *)nodeData + 47), v18);
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
  char *CustomNodeData; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  double Float_Internal_DebugName; 
  double v15; 
  unsigned __int16 children; 
  unsigned __int8 *v18; 
  __int64 v19; 
  unsigned __int16 v20; 
  __int64 duration; 
  __int64 v22; 
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
        CustomNodeData = (char *)XAnimGetCustomNodeData(SubTreeAnims, AnimInfo, AnimInfo->animIndex);
        if ( !CustomNodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1087, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
          __debugbreak();
        if ( CustomNodeData[4] )
        {
          if ( CustomNodeData[8] )
          {
            CG_DebugSphere((const vec3_t *)(CustomNodeData + 56), 0.80000001, &colorBlue, 0, 1);
            CG_DebugSphere((const vec3_t *)(CustomNodeData + 16), 0.80000001, &colorRed, 0, 1);
            if ( CustomNodeData[8] == 2 )
            {
              v7 = (float)*((__int16 *)CustomNodeData + 5) / (float)*((__int16 *)CustomNodeData + 6);
              v8 = (float)(*((float *)CustomNodeData + 5) - *((float *)CustomNodeData + 15)) * v7;
              v9 = *((float *)CustomNodeData + 6) - *((float *)CustomNodeData + 16);
              center.v[0] = (float)((float)(*((float *)CustomNodeData + 4) - *((float *)CustomNodeData + 14)) * v7) + *((float *)CustomNodeData + 14);
              center.v[1] = v8 + *((float *)CustomNodeData + 15);
              center.v[2] = (float)(v9 * v7) + *((float *)CustomNodeData + 16);
              CG_DebugSphere(&center, 0.80000001, &colorGreen, 0, 1);
            }
          }
          if ( CustomNodeData[104] )
          {
            CG_DebugSphere((const vec3_t *)(CustomNodeData + 152), 0.80000001, &colorBlue, 0, 1);
            CG_DebugSphere((const vec3_t *)(CustomNodeData + 112), 0.80000001, &colorRed, 0, 1);
            if ( CustomNodeData[104] == 2 )
            {
              v10 = (float)*((__int16 *)CustomNodeData + 53) / (float)*((__int16 *)CustomNodeData + 54);
              v11 = *((float *)CustomNodeData + 29) - *((float *)CustomNodeData + 39);
              v12 = *((float *)CustomNodeData + 30);
              center.v[0] = (float)((float)(*((float *)CustomNodeData + 28) - *((float *)CustomNodeData + 38)) * v10) + *((float *)CustomNodeData + 38);
              v13 = (float)(v12 - *((float *)CustomNodeData + 40)) * v10;
              center.v[1] = (float)(v11 * v10) + *((float *)CustomNodeData + 39);
              center.v[2] = v13 + *((float *)CustomNodeData + 40);
              CG_DebugSphere(&center, 0.80000001, &colorGreen, 0, 1);
            }
          }
          if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_xanim_ik_antislide_collision_show_capsules, "xanim_ik_antislide_collision_show_capsules") && (CustomNodeData[8] || CustomNodeData[104]) )
          {
            if ( (float)((float)((float)(*((float *)CustomNodeData + 7) * *((float *)CustomNodeData + 7)) + (float)(*((float *)CustomNodeData + 8) * *((float *)CustomNodeData + 8))) + (float)(*((float *)CustomNodeData + 9) * *((float *)CustomNodeData + 9))) > 0.0 )
            {
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_capsule_radius, "xanim_ik_antislide_capsule_radius");
              CG_DebugCapsule((const vec3_t *)(CustomNodeData + 40), (const vec3_t *)(CustomNodeData + 28), *(float *)&Float_Internal_DebugName, &colorYellow, 0, 1);
            }
            if ( (float)((float)((float)(*((float *)CustomNodeData + 31) * *((float *)CustomNodeData + 31)) + (float)(*((float *)CustomNodeData + 32) * *((float *)CustomNodeData + 32))) + (float)(*((float *)CustomNodeData + 33) * *((float *)CustomNodeData + 33))) > 0.0 )
            {
              v15 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_xanim_ik_antislide_capsule_radius, "xanim_ik_antislide_capsule_radius");
              CG_DebugCapsule((const vec3_t *)(CustomNodeData + 136), (const vec3_t *)(CustomNodeData + 124), *(float *)&v15, &colorYellow, 0, 1);
            }
          }
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
          v19 = 32 * (children & 0x7FFFu);
          if ( (unsigned int)v19 > g_xanimMemoryGlobals.bucketAllocatorMaxOffset )
          {
            LODWORD(v22) = g_xanimMemoryGlobals.bucketAllocatorMaxOffset;
            LODWORD(duration) = 32 * (children & 0x7FFF);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 102, ASSERT_TYPE_ASSERT, "( offset ) <= ( g_xanimMemoryGlobals.bucketAllocatorMaxOffset )", "offset not in [0, g_xanimMemoryGlobals.bucketAllocatorMaxOffset]\n\t%u not in [0, %u]", duration, v22) )
              __debugbreak();
          }
          v18 = &g_xanimMemoryGlobals.bucketAllocatorBasePointer[v19];
        }
        else
        {
          if ( (unsigned int)children >= g_xanimMemoryGlobals.infoPoolSize )
          {
            LODWORD(v22) = g_xanimMemoryGlobals.infoPoolSize;
            LODWORD(duration) = children;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_memory.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( infoIndex ) < (unsigned)( g_xanimMemoryGlobals.infoPoolSize )", "infoIndex doesn't index g_xanimMemoryGlobals.infoPoolSize\n\t%i not in [0, %i)", duration, v22) )
              __debugbreak();
          }
          v18 = (unsigned __int8 *)&g_xanimMemoryGlobals.infoPool[children];
        }
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 1144, ASSERT_TYPE_ASSERT, "(childInfo)", (const char *)&queryFormat, "childInfo") )
          __debugbreak();
        v20 = *((_WORD *)v18 + 5);
        if ( XAnimNode_IKAntiSlide_DrawDebug_r(tree, children) )
          break;
        children = v20;
        if ( !v20 )
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
void XAnimNode_IKAntiSlide_GetParametersBySpeed(float speed, float *outThreshold, unsigned __int16 *outBlendoutTime)
{
  const dvar_t *v3; 
  float value; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  __int128 current; 
  const dvar_t *v11; 
  __int128 v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int128 v17; 
  __int128 v18; 
  int v19[4]; 

  v3 = DCONST_DVARFLT_player_runThreshhold;
  *(float *)v19 = 0.0;
  *(float *)&v19[1] = FLOAT_15_0;
  if ( !DCONST_DVARFLT_player_runThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_runThreshhold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  v8 = DCONST_DVARFLT_player_sprintThreshhold;
  *(float *)&v19[2] = value;
  if ( !DCONST_DVARFLT_player_sprintThreshhold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "player_sprintThreshhold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v19[3] = v8->current.integer;
  if ( !outThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 213, ASSERT_TYPE_ASSERT, "(outThreshold)", (const char *)&queryFormat, "outThreshold") )
    __debugbreak();
  if ( !outBlendoutTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 214, ASSERT_TYPE_ASSERT, "(outBlendoutTime)", (const char *)&queryFormat, "outBlendoutTime") )
    __debugbreak();
  *outThreshold = 0.0;
  *outBlendoutTime = 0;
  v9 = DCONST_DVARVEC4_xanim_ik_antislide_height_thresholds;
  if ( !DCONST_DVARVEC4_xanim_ik_antislide_height_thresholds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_height_thresholds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  current = (__int128)v9->current;
  v11 = DCONST_DVARVEC4_xanim_ik_antislide_blendoutTimes;
  v17 = current;
  if ( !DCONST_DVARVEC4_xanim_ik_antislide_blendoutTimes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xanim_ik_antislide_blendoutTimes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = (__int128)v11->current;
  v13 = 3;
  v14 = 3i64;
  v18 = v12;
  while ( speed < *(float *)&v19[v14] )
  {
    --v13;
    if ( --v14 < 0 )
      return;
  }
  if ( v13 >= 4 )
  {
    LODWORD(v16) = 4;
    LODWORD(v15) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  *outThreshold = *((float *)&v17 + (int)v13);
  if ( v13 >= 4 )
  {
    LODWORD(v16) = 4;
    LODWORD(v15) = v13;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 98, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  *outBlendoutTime = (int)*(float *)&v19[v13 - 4];
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
  float v4; 
  float v5; 
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
  float v16; 
  float v17; 
  float t1; 
  float t0; 
  float v21; 
  float v22; 

  if ( !capsuleA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 245, ASSERT_TYPE_ASSERT, "(capsuleA)", (const char *)&queryFormat, "capsuleA") )
    __debugbreak();
  if ( !capsuleB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\nodes\\xanimnode_ik_antislide.cpp", 246, ASSERT_TYPE_ASSERT, "(capsuleB)", (const char *)&queryFormat, "capsuleB") )
    __debugbreak();
  v4 = capsuleA->start.v[0];
  v5 = capsuleA->start.v[1];
  v6 = capsuleB->start.v[0];
  v7 = capsuleB->start.v[1];
  v8 = capsuleB->start.v[2];
  v9 = capsuleA->end.v[0];
  v10 = capsuleA->end.v[1];
  v11 = capsuleB->end.v[0];
  v12 = capsuleB->end.v[1];
  v13 = capsuleB->end.v[2];
  v21 = capsuleA->end.v[2];
  v22 = capsuleA->start.v[2];
  ClosestPointsTwoSegs(&capsuleA->start, &capsuleA->end, &capsuleB->start, &capsuleB->end, &t0, &t1);
  v14 = (float)((float)((float)(v11 - v6) * t1) + capsuleB->start.v[0]) - (float)((float)((float)(v9 - v4) * t0) + capsuleA->start.v[0]);
  v15 = (float)((float)((float)(v12 - v7) * t1) + capsuleB->start.v[1]) - (float)((float)((float)(v10 - v5) * t0) + capsuleA->start.v[1]);
  v16 = capsuleB->radius + capsuleA->radius;
  v17 = (float)((float)((float)(v13 - v8) * t1) + capsuleB->start.v[2]) - (float)((float)((float)(v21 - v22) * t0) + capsuleA->start.v[2]);
  return (float)(v16 * v16) >= (float)((float)((float)(v15 * v15) + (float)(v14 * v14)) + (float)(v17 * v17));
}


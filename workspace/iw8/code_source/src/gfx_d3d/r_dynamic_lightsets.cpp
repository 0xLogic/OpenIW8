/*
==============
R_DynamicLightsets_ShutdownWorldBuffers
==============
*/

void __fastcall R_DynamicLightsets_ShutdownWorldBuffers(GfxWorld *world)
{
  ?R_DynamicLightsets_ShutdownWorldBuffers@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_DynamicLightsets_DisableTemporalSmoothing
==============
*/

bool __fastcall R_DynamicLightsets_DisableTemporalSmoothing(unsigned int frameIndex)
{
  return ?R_DynamicLightsets_DisableTemporalSmoothing@@YA_NI@Z(frameIndex);
}

/*
==============
R_DynamicLightsets_ShutdownTransientZoneBuffers
==============
*/

void __fastcall R_DynamicLightsets_ShutdownTransientZoneBuffers(GfxDynamicLightsetLGppZoneInfo *SMLGppZone)
{
  ?R_DynamicLightsets_ShutdownTransientZoneBuffers@@YAXPEAUGfxDynamicLightsetLGppZoneInfo@@@Z(SMLGppZone);
}

/*
==============
RB_DynamicLightsets_Update
==============
*/

void __fastcall RB_DynamicLightsets_Update(GfxCmdBufContext *gfxContext, GfxWorld *world, const GfxBackEndData *data)
{
  ?RB_DynamicLightsets_Update@@YAXUGfxCmdBufContext@@PEAUGfxWorld@@PEBUGfxBackEndData@@@Z(gfxContext, world, data);
}

/*
==============
R_DynamicLightsets_InitWorld
==============
*/

void __fastcall R_DynamicLightsets_InitWorld(GfxWorld *world)
{
  ?R_DynamicLightsets_InitWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_DynamicLightsets_LightmapReady
==============
*/

bool __fastcall R_DynamicLightsets_LightmapReady(GfxWorld *world, const GfxBackEndData *data)
{
  return ?R_DynamicLightsets_LightmapReady@@YA_NPEAUGfxWorld@@PEBUGfxBackEndData@@@Z(world, data);
}

/*
==============
RB_DynamicLightsets_ForceTransientUpdate
==============
*/

void __fastcall RB_DynamicLightsets_ForceTransientUpdate(unsigned int whichTransient)
{
  ?RB_DynamicLightsets_ForceTransientUpdate@@YAXI@Z(whichTransient);
}

/*
==============
R_DynamicLightsets_ShutdownWorld
==============
*/

void __fastcall R_DynamicLightsets_ShutdownWorld(GfxWorld *world)
{
  ?R_DynamicLightsets_ShutdownWorld@@YAXPEAUGfxWorld@@@Z(world);
}

/*
==============
R_UpdateDLS_Quat
==============
*/

void __fastcall R_UpdateDLS_Quat(vec4_t *quat, const int whichSlot, unsigned int smpFrame)
{
  ?R_UpdateDLS_Quat@@YAXAEATvec4_t@@HI@Z(quat, whichSlot, smpFrame);
}

/*
==============
RB_DynamicLightsets_DisplayDebug
==============
*/

void __fastcall RB_DynamicLightsets_DisplayDebug(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  ?RB_DynamicLightsets_DisplayDebug@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@@Z(gfxContext, data);
}

/*
==============
GetLightmapAtlasShift
==============
*/
bool GetLightmapAtlasShift(unsigned int lightmapIndex, unsigned int *outShift, unsigned int *outSlice)
{
  bool result; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11[3]; 
  unsigned int v12; 

  result = RB_GetLightimapPacking(GFX_LIGHTMAP_TYPE_AB_LIGHTING, lightmapIndex, &v8, &v12, v11, &v10, &v9);
  if ( result )
  {
    if ( (unsigned __int16)v8 != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 569, ASSERT_TYPE_ASSERT, "(( x & 0xFFFF ) == x)", (const char *)&queryFormat, "( x & 0xFFFF ) == x") )
      __debugbreak();
    v6 = v12;
    if ( (unsigned __int16)v12 != v12 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 570, ASSERT_TYPE_ASSERT, "(( y & 0xFFFF ) == y)", (const char *)&queryFormat, "( y & 0xFFFF ) == y") )
        __debugbreak();
      v6 = v12;
    }
    v7 = v9;
    *outShift = v8 | (v6 << 16);
    *outSlice = v7;
    return 1;
  }
  return result;
}

/*
==============
GfxColorFromVec4_t
==============
*/
__int64 GfxColorFromVec4_t(const vec4_t *val)
{
  char v11; 
  char v16; 
  char v21; 
  char v25; 
  unsigned int v28; 

  __asm
  {
    vmovss  xmm5, cs:__real@437f0000
    vmulss  xmm1, xmm5, dword ptr [rcx]
    vmovss  xmm4, cs:__real@3f000000
    vmovaps [rsp+18h+var_18], xmm6
    vaddss  xmm2, xmm1, xmm4
    vmulss  xmm1, xmm5, dword ptr [rcx+4]
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm3, xmm6, xmm2, 1
    vcvttss2si edx, xmm3
    vaddss  xmm3, xmm1, xmm4
  }
  if ( _EDX > 255 )
    _EDX = 255;
  v11 = _EDX;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  if ( _EDX < 0 )
    v11 = 0;
  LOBYTE(v28) = v11;
  __asm
  {
    vcvttss2si ecx, xmm1
    vmulss  xmm1, xmm5, dword ptr [r8+8]
    vaddss  xmm3, xmm1, xmm4
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v16 = _ECX;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  if ( _ECX < 0 )
    v16 = 0;
  BYTE1(v28) = v16;
  __asm
  {
    vcvttss2si ecx, xmm1
    vmulss  xmm1, xmm5, dword ptr [r8+0Ch]
    vaddss  xmm3, xmm1, xmm4
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v21 = _ECX;
  __asm
  {
    vroundss xmm1, xmm6, xmm3, 1
    vmovaps xmm6, [rsp+18h+var_18]
  }
  if ( _ECX < 0 )
    v21 = 0;
  BYTE2(v28) = v21;
  __asm { vcvttss2si ecx, xmm1 }
  if ( _ECX > 255 )
    _ECX = 255;
  v25 = _ECX;
  if ( _ECX < 0 )
    v25 = 0;
  HIBYTE(v28) = v25;
  return v28;
}

/*
==============
RB_DynamicLightsets_DisplayDebug
==============
*/
void RB_DynamicLightsets_DisplayDebug(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  GfxWorld *world; 
  __int64 v20; 
  int v24; 
  __int64 v28; 
  int v29; 
  __int64 v30; 
  GfxColor v32; 
  unsigned int v33; 
  GfxColor v34; 
  __int64 v37; 
  GfxDynamicLightsetBFData *basisFunctions; 
  bool v44; 
  bool v45; 
  char v49; 
  GfxColor v58; 
  __int64 v59; 
  int *v60; 
  materialCommands_t *Tess; 
  materialCommands_t *v72; 
  float fmt; 
  float fmta; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  unsigned int v86; 
  unsigned int numBasisFunctions; 
  _QWORD v89[3]; 
  GfxWorld *v90; 
  GfxCmdBufContext v91; 
  vec4_t val; 
  __int64 v93; 
  int v94; 
  int v95[8]; 
  char dest[512]; 
  void *retaddr; 

  _R11 = &retaddr;
  _R13 = gfxContext;
  world = rgp.world;
  v90 = rgp.world;
  if ( r_dlsDebugVisualize->current.enabled )
  {
    if ( data->viewInfoCount )
    {
      if ( !data->viewInfoIndex )
      {
        if ( rgp.world )
        {
          numBasisFunctions = rgp.world->dynamicLightset.numBasisFunctions;
          if ( numBasisFunctions )
          {
            if ( dlsGlob.initDone )
            {
              __asm
              {
                vmovaps xmmword ptr [r11-38h], xmm6
                vmovaps xmmword ptr [r11-48h], xmm7
                vmovaps xmmword ptr [r11-58h], xmm8
                vmovaps xmmword ptr [r11-68h], xmm9
                vmovss  xmm9, cs:__real@3e4ccccd
                vmovaps xmmword ptr [r11-78h], xmm10
                vmovss  xmm10, cs:__real@3f800000
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, dword ptr [rax+8]
                vmovaps xmmword ptr [r11-88h], xmm11
              }
              v20 = 0i64;
              __asm
              {
                vmovss  dword ptr [rbp+2B0h+val+0Ch], xmm10
                vmovss  dword ptr [rsp+3B0h+var_350], xmm0
              }
              do
              {
                v93 = 0i64;
                v94 = 0;
                *(_DWORD *)((char *)&v93 + v20) = 1061997773;
                __asm
                {
                  vmovss  xmm6, dword ptr [rbp+2B0h+var_300]
                  vmovss  xmm7, dword ptr [rbp+2B0h+var_300+4]
                  vmovss  xmm8, [rbp+2B0h+var_2F8]
                  vmovss  dword ptr [rbp+2B0h+val], xmm6
                  vmovss  dword ptr [rbp+2B0h+val+4], xmm7
                  vmovss  dword ptr [rbp+2B0h+val+8], xmm8
                }
                v24 = GfxColorFromVec4_t(&val);
                __asm
                {
                  vmulss  xmm0, xmm6, xmm9
                  vmovss  dword ptr [rbp+2B0h+val], xmm0
                  vmulss  xmm0, xmm8, xmm9
                  vmulss  xmm1, xmm7, xmm9
                }
                *(int *)((char *)v95 + v28) = v24;
                __asm
                {
                  vmovss  dword ptr [rbp+2B0h+val+8], xmm0
                  vmovss  dword ptr [rbp+2B0h+val+4], xmm1
                }
                v29 = GfxColorFromVec4_t(&val);
                *(int *)((char *)&v95[4] + v30) = v29;
                v20 = v30 + 4;
              }
              while ( v20 < 12 );
              __asm { vmovss  xmm11, cs:__real@43020000 }
              v32.packed = GfxColorFromVec4_t(&colorWhite);
              v33 = 0;
              v34.packed = GfxColorFromVec4_t(&colorMdGrey);
              __asm
              {
                vmovss  xmm9, cs:__real@43c60000
                vmovss  xmm8, cs:__real@40a00000
              }
              v37 = 0i64;
              __asm
              {
                vmovaps [rsp+3B0h+var_98+8], xmm12
                vmovss  xmm12, cs:__real@430c0000
                vmovaps [rsp+3B0h+var_A8+8], xmm13
                vmovss  xmm13, cs:__real@41900000
                vmovaps [rsp+3B0h+var_B8+8], xmm14
                vmovss  xmm14, cs:__real@3a800000
                vmovaps [rsp+3B0h+var_C8+8], xmm15
                vmovss  xmm15, cs:__real@3f000000
              }
              v89[0] = 0i64;
              __asm { vxorps  xmm7, xmm7, xmm7 }
              do
              {
                basisFunctions = world->dynamicLightset.basisFunctions;
                v44 = (GfxDynamicLightsetBFData *)((char *)basisFunctions + v37) == NULL;
                v45 = __CFADD__(v37, basisFunctions) || v44;
                _R14 = (char *)basisFunctions + v37;
                __asm
                {
                  vmovaps xmm6, xmm11
                  vucomiss xmm7, dword ptr [r14+4]
                  vmovss  xmm0, dword ptr [r14+8]
                }
                if ( !v44 )
                  goto LABEL_14;
                __asm { vcomiss xmm0, xmm14 }
                if ( v45 )
                  v49 = 0;
                else
LABEL_14:
                  v49 = 1;
                __asm
                {
                  vmovss  xmm1, dword ptr [r14]
                  vmulss  xmm2, xmm1, cs:__real@3eaaaaab
                  vcvtss2sd xmm3, xmm2, xmm2
                  vmulss  xmm0, xmm0, xmm15
                  vmovq   r9, xmm3
                  vmovss  dword ptr [r14+8], xmm0
                }
                Com_sprintf<512>((char (*)[512])dest, "%2.2d %5.2f", v33, *(double *)&_XMM3);
                __asm
                {
                  vmovups xmm0, xmmword ptr [r13+0]
                  vaddss  xmm1, xmm11, dword ptr [rsp+3B0h+var_350]
                  vmovss  xmm3, cs:__real@42480000
                }
                v58 = v34;
                __asm { vmovups [rbp+2B0h+var_320], xmm0 }
                if ( v49 )
                  v58 = v32;
                __asm { vmovss  dword ptr [rsp+3B0h+fmt], xmm1 }
                RB_DrawText(&v91, dest, backEnd.debugFont, *(float *)&_XMM3, fmt, v58);
                v59 = 0i64;
                do
                {
                  v60 = &v95[v59];
                  __asm { vmulss  xmm1, xmm9, dword ptr [r14+rax+0Ch] }
                  if ( !v49 )
                    v60 = &v95[v59 + 4];
                  __asm { vmovups xmm0, xmmword ptr [r13+0] }
                  v86 = *v60;
                  __asm
                  {
                    vmovss  [rsp+3B0h+var_368], xmm10
                    vmovss  [rsp+3B0h+var_370], xmm10
                    vmovss  [rsp+3B0h+var_378], xmm7
                    vmovss  [rsp+3B0h+var_380], xmm7
                    vmovss  [rsp+3B0h+var_388], xmm8
                    vmovaps xmm3, xmm6
                    vmovaps xmm2, xmm12
                    vmovss  dword ptr [rsp+3B0h+fmt], xmm1
                    vmovups xmmword ptr [rsp+3B0h+var_348+8], xmm0
                  }
                  RB_DrawStretchPic((GfxCmdBufContext *)&v89[1], rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v81, v82, v83, v84, v85, v86, GFX_PRIM_STATS_DEBUG);
                  ++v59;
                  __asm { vaddss  xmm6, xmm6, xmm8 }
                }
                while ( v59 < 3 );
                ++v33;
                world = v90;
                v37 = v89[0] + 32i64;
                __asm { vaddss  xmm11, xmm11, xmm13 }
                v89[0] += 32i64;
              }
              while ( v33 < numBasisFunctions );
              __asm
              {
                vmovaps xmm15, [rsp+3B0h+var_C8+8]
                vmovaps xmm14, [rsp+3B0h+var_B8+8]
                vmovaps xmm13, [rsp+3B0h+var_A8+8]
                vmovaps xmm12, [rsp+3B0h+var_98+8]
                vmovups xmm0, xmmword ptr [r13+0]
                vmovups xmmword ptr [rsp+3B0h+var_348+8], xmm0
              }
              Tess = R_GetTess((GfxCmdBufContext *)&v89[1]);
              __asm { vmovaps xmm11, [rsp+3B0h+var_88+8] }
              v72 = Tess;
              __asm
              {
                vmovaps xmm10, [rsp+3B0h+var_78+8]
                vmovaps xmm9, [rsp+3B0h+var_68+8]
                vmovaps xmm8, [rsp+3B0h+var_58+8]
                vmovaps xmm7, [rsp+3B0h+var_48+8]
                vmovaps xmm6, [rsp+3B0h+var_38+8]
              }
              if ( Tess->vertexCount )
              {
                __asm
                {
                  vmovups xmm0, xmmword ptr [r13+0]
                  vmovups xmmword ptr [rsp+3B0h+var_348+8], xmm0
                }
                RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v89[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
              }
              else
              {
                if ( Tess->indexCount )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
                    __debugbreak();
                }
                v72->viewStatsTarget = GFX_VIEW_STATS_INVALID;
                v72->primStatsTarget = GFX_PRIM_STATS_INVALID;
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
RB_DynamicLightsets_ForceTransientUpdate
==============
*/
void RB_DynamicLightsets_ForceTransientUpdate(unsigned int whichTransient)
{
  __int64 v1; 

  v1 = whichTransient;
  if ( whichTransient >= 0x600 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 278, ASSERT_TYPE_ASSERT, "(whichTransient < MAX_MAP_TRANSIENT_ZONES)", (const char *)&queryFormat, "whichTransient < MAX_MAP_TRANSIENT_ZONES") )
    __debugbreak();
  dlsGlob.transientForceUpdate[v1] = 1;
  ++dlsGlob.transientForceUpdateCount;
}

/*
==============
RB_DynamicLightsets_Update
==============
*/
void RB_DynamicLightsets_Update(GfxCmdBufContext *gfxContext, GfxWorld *world, const GfxBackEndData *data)
{
  GfxCmdBufContext *v16; 
  char v17; 
  GfxShaderBufferView *smpFrame; 
  char v19; 
  int v20; 
  unsigned int v21; 
  int v22; 
  int v23; 
  GfxDynamicLightsetBFType bfType; 
  __int64 v37; 
  unsigned int v38; 
  __int64 whichPrimary; 
  unsigned int numRec; 
  bool v56; 
  bool v57; 
  GfxDynamicLightsetBFData *basisFunctions; 
  unsigned __int64 v65; 
  bool v66; 
  unsigned int v91; 
  GfxDynamicLightsetProductGIData *productGIData; 
  int v94; 
  int v103; 
  GfxDynamicLightsetBFData *v112; 
  GfxDynamicLightsetBFData *v113; 
  __int64 v124; 
  __int64 v125; 
  __int64 v126; 
  int integer; 
  __int64 v129; 
  int v142; 
  bool v143; 
  char v144; 
  unsigned int *p_numBFActive; 
  unsigned int v146; 
  __int64 v147; 
  __int64 v148; 
  __int64 v149; 
  __int64 v150; 
  __int64 v151; 
  __int64 v152; 
  unsigned int *v153; 
  __int64 v154; 
  GfxCmdBufState *v155; 
  D3D12_RESOURCE_STATES v156; 
  const GfxImage *LightmapAtlasTexture; 
  const GfxTexture *Resident; 
  const GfxImage *v159; 
  const GfxTexture *v160; 
  unsigned int v161; 
  _DWORD *i; 
  __int64 v163; 
  __int64 v164; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v166; 
  unsigned int v167; 
  __int64 v168; 
  __int64 v169; 
  unsigned __int64 v170; 
  unsigned int *chunkLMStart; 
  __int64 v172; 
  unsigned int v173; 
  unsigned int v174; 
  unsigned int v175; 
  GfxDynamicLightsetGChunk *chunkGLM; 
  GfxDynamicLightsetBFData *v177; 
  unsigned __int16 *chunkGLMBF; 
  __int64 v179; 
  unsigned int *v180; 
  GfxDynamicLightsetGChunk *v181; 
  __int64 v182; 
  __int64 v183; 
  unsigned int v184; 
  __int64 v185; 
  int v186; 
  unsigned int *p_deltaBits; 
  __int64 v188; 
  GfxDynamicLightsetGChunk *v189; 
  int v190; 
  int v191; 
  unsigned int *v192; 
  GfxDynamicLightsetGChunk *v193; 
  __int64 v194; 
  unsigned int *v195; 
  __int64 v196; 
  __int64 v197; 
  GfxDynamicLightsetGChunk *v198; 
  const GfxImage *v199; 
  const GfxTexture *v200; 
  const GfxImage *v201; 
  const GfxTexture *v202; 
  __int64 v203; 
  const GfxImage *LightGridVolumeAtlasTexture; 
  const GfxTexture *v205; 
  const GfxImage *v206; 
  const GfxTexture *v207; 
  unsigned int v208; 
  GfxBackEndData *v209; 
  GfxDynamicLightsetLGppZoneInfo *v210; 
  const GfxImage *v211; 
  const GfxImage *v212; 
  const GfxImage *v213; 
  const GfxTexture *v214; 
  const GfxImage *v215; 
  const GfxTexture *v216; 
  __int64 flag; 
  unsigned int *slice; 
  char v219; 
  bool forceUpdate; 
  int v221; 
  unsigned int v222; 
  unsigned int y; 
  GfxShaderBufferView *views; 
  bool dlsUseAsyncCompute; 
  GfxBackEndData *dataa; 
  unsigned int height[2]; 
  GfxShaderTextureRWView *LightmapAtlasTextureSliceRWView; 
  float Px; 
  unsigned int heavySlot; 
  unsigned int mixedSlot; 
  D3D12_RESOURCE_STATES v232; 
  unsigned int x; 
  unsigned int v234; 
  unsigned int optSlot; 
  unsigned int copySlot; 
  unsigned int v237; 
  unsigned int numChunk; 
  unsigned int numRecords; 
  unsigned int orgStart; 
  unsigned int bfStart; 
  unsigned int tmpStart; 
  __int128 v243; 
  __int128 v244; 
  int v245[4]; 
  ComputeCmdBufState state; 
  unsigned int heavySet[64]; 
  unsigned int mixedSet[64]; 
  unsigned int copySet[64]; 
  GChunkBypassStruct optSet; 

  dataa = (GfxBackEndData *)data;
  _R12 = (GfxBackEndData *)data;
  *(_QWORD *)height = gfxContext;
  v16 = gfxContext;
  if ( world && data )
  {
    if ( !world->dynamicLightset.numBasisFunctions || !dlsGlob.initDone )
      return;
    v17 = 1;
  }
  else
  {
    v17 = 0;
  }
  if ( !v17 || !r_dlsDebugMode->current.integer )
    return;
  smpFrame = (GfxShaderBufferView *)data->smpFrame;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  views = smpFrame;
  v23 = 0;
  v219 = 0;
  y = 0;
  _ER15 = 0;
  v221 = 0;
  if ( !world->dynamicLightset.numBasisFunctions )
    goto LABEL_37;
  __asm
  {
    vmovaps [rsp+12F0h+var_40], xmm6
    vmovaps [rsp+12F0h+var_50], xmm7
    vmovaps [rsp+12F0h+var_60], xmm8
    vmovaps [rsp+12F0h+var_90], xmm11
    vmovss  xmm11, cs:__real@3f800000
    vmovaps [rsp+12F0h+var_A0], xmm12
    vmovss  xmm12, cs:__real@40a00000
    vmovaps [rsp+12F0h+var_B0], xmm13
    vmovss  xmm13, cs:__real@40000000
    vmovaps [rsp+12F0h+var_C0], xmm14
    vmovss  xmm14, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vmovaps [rsp+12F0h+var_D0], xmm15
    vmovss  xmm15, cs:__real@3f7ff972
    vmovaps [rsp+12F0h+var_70], xmm9
    vmovaps [rsp+12F0h+var_80], xmm10
    vxorps  xmm6, xmm6, xmm6
  }
  do
  {
    _R9 = world->dynamicLightset.basisFunctions;
    _RBX = _ER15;
    __asm
    {
      vmovaps xmm5, xmm6
      vmovaps xmm7, xmm6
      vmovaps xmm8, xmm6
    }
    bfType = _R9[_RBX].bfType;
    if ( bfType )
    {
      if ( bfType == GFX_BF_PORTALGI )
      {
        v65 = 16 * (v21 + ((unsigned __int64)_R12->smpFrame << 8));
        v66 = __CFADD__(dlsGlob.portalGIquats, v65);
        v57 = __CFADD__(dlsGlob.portalGIquats, v65) || (DynamicLightsetsGlob *)((char *)dlsGlob.portalGIquats + v65) == NULL;
        _RCX = (char *)dlsGlob.portalGIquats + v65;
        __asm
        {
          vmovaps xmm5, xmm6
          vmovss  xmm7, dword ptr [rcx+4]
          vmovss  xmm8, dword ptr [rcx]
          vmovss  xmm9, dword ptr [rcx+8]
          vmovss  xmm10, dword ptr [rcx+0Ch]
          vmulss  xmm1, xmm8, xmm8
          vmulss  xmm0, xmm7, xmm7
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm1, xmm9, xmm9
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm10, xmm10
          vaddss  xmm4, xmm3, xmm0
          vcomiss xmm4, xmm6
        }
        if ( !v57 )
        {
          __asm
          {
            vmulss  xmm1, xmm7, dword ptr [rax+rcx*4+8]
            vmulss  xmm0, xmm8, dword ptr [rax+rcx*4+4]
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm9, dword ptr [rax+rcx*4+0Ch]
            vmulss  xmm0, xmm10, dword ptr [rax+rcx*4+10h]
            vaddss  xmm3, xmm2, xmm1
            vaddss  xmm1, xmm3, xmm0
            vandps  xmm1, xmm1, xmm14
            vsubss  xmm1, xmm1, dword ptr [rax+rcx*4+14h]
            vmulss  xmm0, xmm1, dword ptr [rax+rcx*4+18h]
            vsubss  xmm0, xmm15, xmm0
            vminss  xmm1, xmm0, xmm11
            vmaxss  xmm5, xmm1, xmm6
          }
        }
        v91 = v21 + 1;
        v56 = v91 == 0;
        v57 = v66 || v91 == 0;
        y = v91;
        __asm
        {
          vmovaps xmm0, xmm5
          vmovaps xmm2, xmm5
        }
      }
      else
      {
        productGIData = world->dynamicLightset.productGIData;
        _RAX = 32i64 * productGIData[v23].whichDLS;
        v66 = __CFSHL__(world->dynamicLightset.numDLSBasisFunctions + productGIData[v23].whichPortal, 5);
        v94 = v23 + 1;
        v56 = v94 == 0;
        v57 = v66 || v94 == 0;
        v221 = v94;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+r9+0Ch]
          vmulss  xmm5, xmm0, dword ptr [r8+r9+0Ch]
          vmovss  xmm0, dword ptr [rax+r9+14h]
          vmovss  xmm1, dword ptr [rax+r9+10h]
          vmulss  xmm0, xmm0, dword ptr [r8+r9+14h]
          vmulss  xmm2, xmm1, dword ptr [r8+r9+10h]
        }
      }
      basisFunctions = _R9;
    }
    else
    {
      if ( !_R9[_RBX].numRec )
      {
        v37 = _ER15;
        _R9[v37].curValue[0] = 0.0;
        world->dynamicLightset.basisFunctions[v37].curValue[1] = 0.0;
        goto LABEL_35;
      }
      v38 = 0;
      do
      {
        _RDX = &world->dynamicLightset.basisFunctionLights[v38 + _R9[_RBX].startRec];
        whichPrimary = _RDX->whichPrimary;
        if ( (unsigned int)whichPrimary < _R12->sceneLightCount )
        {
          _RCX = 152 * whichPrimary;
          __asm
          {
            vmovss  xmm4, dword ptr [rcx+r12+53A010h]
            vmulss  xmm0, xmm4, dword ptr [rcx+r12+53A014h]
            vmulss  xmm3, xmm0, dword ptr [rdx]
            vmovss  xmm1, dword ptr [rcx+r12+53A018h]
            vmovss  xmm2, dword ptr [rcx+r12+53A01Ch]
            vmovss  dword ptr [rdx+0Ch], xmm3
            vmulss  xmm1, xmm4, xmm1
            vmulss  xmm0, xmm1, dword ptr [rdx+4]
            vmovss  dword ptr [rdx+10h], xmm0
            vmulss  xmm2, xmm4, xmm2
            vmulss  xmm1, xmm2, dword ptr [rdx+8]
            vmovss  dword ptr [rdx+14h], xmm1
            vmaxss  xmm4, xmm3, xmm6
            vmovss  dword ptr [rdx+0Ch], xmm4
            vmovss  xmm0, dword ptr [rdx+10h]
            vmaxss  xmm2, xmm0, xmm6
            vmovss  dword ptr [rdx+10h], xmm2
            vmovss  xmm1, dword ptr [rdx+14h]
            vmaxss  xmm0, xmm1, xmm6
            vmovss  dword ptr [rdx+14h], xmm0
          }
          _R9 = world->dynamicLightset.basisFunctions;
          __asm
          {
            vaddss  xmm5, xmm5, xmm4
            vaddss  xmm7, xmm7, xmm2
            vaddss  xmm8, xmm8, xmm0
          }
        }
        numRec = _R9[_RBX].numRec;
        v56 = ++v38 == numRec;
        v57 = v38 <= numRec;
      }
      while ( v38 < numRec );
      basisFunctions = world->dynamicLightset.basisFunctions;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm1, xmm11, xmm0
        vmulss  xmm5, xmm5, xmm1
        vmulss  xmm2, xmm7, xmm1
        vmulss  xmm0, xmm8, xmm1
      }
    }
    __asm { vminss  xmm7, xmm5, xmm12 }
    _RAX = _R9;
    __asm
    {
      vminss  xmm4, xmm2, xmm12
      vminss  xmm5, xmm0, xmm12
      vmovss  xmm1, dword ptr [rax+rbx+0Ch]
      vucomiss xmm7, xmm1
    }
    if ( !v56 )
      goto LABEL_29;
    __asm { vucomiss xmm4, dword ptr [rax+rbx+10h] }
    if ( !v56 )
      goto LABEL_29;
    __asm { vucomiss xmm5, dword ptr [rax+rbx+14h] }
    if ( v56 )
    {
      v103 = 1;
      __asm { vaddss  xmm2, xmm4, xmm7 }
    }
    else
    {
LABEL_29:
      __asm
      {
        vaddss  xmm3, xmm4, xmm7
        vaddss  xmm0, xmm5, xmm3
        vucomiss xmm0, xmm6
      }
      v103 = 0;
      __asm { vmovaps xmm2, xmm3 }
      if ( v56 )
      {
        __asm
        {
          vaddss  xmm0, xmm1, dword ptr [rax+rbx+10h]
          vaddss  xmm1, xmm0, dword ptr [rax+rbx+14h]
          vcomiss xmm1, xmm13
        }
        if ( !v57 )
        {
          v219 = 1;
          _RAX = basisFunctions;
        }
      }
    }
    __asm
    {
      vmovss  dword ptr [rbx+rax+0Ch], xmm7
      vmovss  dword ptr [rbx+rax+10h], xmm4
      vmovss  dword ptr [rbx+rax+14h], xmm5
      vaddss  xmm0, xmm2, xmm5
    }
    world->dynamicLightset.basisFunctions[_RBX].curValue[1] = 0.0;
    _RAX = world->dynamicLightset.basisFunctions;
    __asm { vmovss  dword ptr [rbx+rax], xmm0 }
    _RAX = world->dynamicLightset.basisFunctions;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+rax]
      vmovss  [rbp+11F0h+Px], xmm0
    }
    if ( _fdtest(&Px) > 0 )
    {
      v112 = world->dynamicLightset.basisFunctions;
      *(_QWORD *)v112[_RBX].curValue = 0i64;
      v112[_RBX].curValue[2] = 0.0;
      v113 = world->dynamicLightset.basisFunctions;
      *(_QWORD *)v113[_RBX].lastValue = 0i64;
      v113[_RBX].lastValue[2] = 0.0;
LABEL_34:
      _R12 = dataa;
      v23 = v221;
      v21 = y;
      goto LABEL_35;
    }
    if ( !v103 )
    {
      v125 = _ER15;
      world->dynamicLightset.basisFunctions[v125].curValue[1] = 1.0;
      world->dynamicLightset.basisFunctions[v125].curValue[2] = 1.0;
      if ( (unsigned int)v22 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 815, ASSERT_TYPE_ASSERT, "(numChanged < MAX_CHANGED)", (const char *)&queryFormat, "numChanged < MAX_CHANGED") )
        __debugbreak();
      v126 = (unsigned int)v22++;
      *(&optSet.whichChunk + v126) = _ER15;
    }
    integer = r_dlsDebugLight->current.integer;
    if ( !integer )
      goto LABEL_34;
    _RAX = r_dlsDebugIntensity;
    v129 = _ER15;
    __asm { vmovss  xmm3, dword ptr [rax+28h] }
    world->dynamicLightset.basisFunctions[v129].curValue[1] = 1.0;
    world->dynamicLightset.basisFunctions[v129].curValue[2] = 1.0;
    world->dynamicLightset.basisFunctions[_RBX].curValue[0] = 0.0;
    world->dynamicLightset.basisFunctions[_RBX].lastValue[2] = 0.0;
    world->dynamicLightset.basisFunctions[_RBX].lastValue[1] = 0.0;
    world->dynamicLightset.basisFunctions[_RBX].lastValue[0] = 0.0;
    if ( integer == 2 )
    {
      world->dynamicLightset.basisFunctions[_RBX].curValue[0] = 1.0;
      world->dynamicLightset.basisFunctions[_RBX].curValue[2] = 1.0;
      _RAX = world->dynamicLightset.basisFunctions;
      __asm { vmovss  dword ptr [rax+rbx+14h], xmm3 }
      _RAX = world->dynamicLightset.basisFunctions;
      __asm { vmovss  dword ptr [rax+rbx+10h], xmm3 }
      _RAX = world->dynamicLightset.basisFunctions;
      __asm { vmovss  dword ptr [rax+rbx+0Ch], xmm3 }
      goto LABEL_34;
    }
    if ( integer < 3 )
      goto LABEL_34;
    _RAX = world->dynamicLightset.basisFunctions;
    _ECX = integer - 3;
    v21 = y;
    v23 = v221;
    _R12 = dataa;
    __asm
    {
      vmovd   xmm0, ecx
      vmovd   xmm1, r15d
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm6, xmm11, xmm2
      vmovss  dword ptr [rbx+rax], xmm0
    }
    _RAX = world->dynamicLightset.basisFunctions;
    if ( _ECX == _ER15 )
    {
      __asm { vmovss  dword ptr [rbx+rax+14h], xmm3 }
      _RAX = world->dynamicLightset.basisFunctions;
      __asm { vmovss  dword ptr [rax+rbx+10h], xmm3 }
      _RAX = world->dynamicLightset.basisFunctions;
      __asm { vmovss  dword ptr [rax+rbx+0Ch], xmm3 }
      world->dynamicLightset.basisFunctions[_RBX].curValue[2] = 1.0;
    }
    else
    {
      _RAX[_RBX].curValue[2] = 0.0;
    }
LABEL_35:
    ++_ER15;
  }
  while ( _ER15 < world->dynamicLightset.numBasisFunctions );
  LOBYTE(smpFrame) = (_BYTE)views;
  v19 = v219;
  v16 = *(GfxCmdBufContext **)height;
  __asm
  {
    vmovaps xmm15, [rsp+12F0h+var_D0]
    vmovaps xmm14, [rsp+12F0h+var_C0]
    vmovaps xmm13, [rsp+12F0h+var_B0]
    vmovaps xmm12, [rsp+12F0h+var_A0]
    vmovaps xmm11, [rsp+12F0h+var_90]
    vmovaps xmm10, [rsp+12F0h+var_80]
    vmovaps xmm9, [rsp+12F0h+var_70]
    vmovaps xmm8, [rsp+12F0h+var_60]
    vmovaps xmm7, [rsp+12F0h+var_50]
    vmovaps xmm6, [rsp+12F0h+var_40]
  }
LABEL_37:
  v124 = (unsigned __int8)smpFrame & 1;
  if ( r_dlsDebugDisableTemporalSmoothingPulse->current.enabled )
  {
    dlsGlob.lgvTemporalDisableCount[v124] = 0;
  }
  else if ( v19 && dlsGlob.lgvTemporalDisableCount[v124] >= 0 )
  {
    dlsGlob.lgvTemporalDisableCount[v124] = -2;
  }
  else
  {
    v142 = dlsGlob.lgvTemporalDisableCount[v124];
    if ( v142 < 0 )
      dlsGlob.lgvTemporalDisableCount[v124] = v142 + 1;
  }
  if ( r_dlsDebugLight->current.integer || v22 || dlsGlob.transientForceUpdateCount )
  {
    v143 = !RB_IsLightmapAtlasIdle(GFX_LIGHTMAP_TYPE_AB_LIGHTING);
    v56 = !RB_IsLightGridVolumesAtlasIdle();
    v144 = v143;
    if ( v56 )
      v144 = 1;
    if ( v144 )
    {
      if ( v22 >= 4 )
      {
        p_numBFActive = &optSet.numBFActive;
        v146 = ((unsigned int)(v22 - 4) >> 2) + 1;
        v147 = v146;
        v20 = 4 * v146;
        do
        {
          v148 = *(p_numBFActive - 1);
          p_numBFActive += 4;
          v148 *= 32i64;
          *(float *)((char *)world->dynamicLightset.basisFunctions->lastValue + v148) = -1.0;
          *(float *)((char *)&world->dynamicLightset.basisFunctions->lastValue[1] + v148) = -1.0;
          *(float *)((char *)&world->dynamicLightset.basisFunctions->lastValue[2] + v148) = -1.0;
          v149 = *(p_numBFActive - 4);
          world->dynamicLightset.basisFunctions[v149].lastValue[0] = -1.0;
          world->dynamicLightset.basisFunctions[v149].lastValue[1] = -1.0;
          world->dynamicLightset.basisFunctions[v149].lastValue[2] = -1.0;
          v150 = *(p_numBFActive - 3);
          world->dynamicLightset.basisFunctions[v150].lastValue[0] = -1.0;
          world->dynamicLightset.basisFunctions[v150].lastValue[1] = -1.0;
          world->dynamicLightset.basisFunctions[v150].lastValue[2] = -1.0;
          v151 = *(p_numBFActive - 2);
          world->dynamicLightset.basisFunctions[v151].lastValue[0] = -1.0;
          world->dynamicLightset.basisFunctions[v151].lastValue[1] = -1.0;
          world->dynamicLightset.basisFunctions[v151].lastValue[2] = -1.0;
          --v147;
        }
        while ( v147 );
      }
      if ( v20 < v22 )
      {
        v152 = (unsigned int)(v22 - v20);
        v153 = &optSet.whichChunk + v20;
        do
        {
          v154 = *v153++;
          v154 *= 32i64;
          *(float *)((char *)world->dynamicLightset.basisFunctions->lastValue + v154) = -1.0;
          *(float *)((char *)&world->dynamicLightset.basisFunctions->lastValue[1] + v154) = -1.0;
          *(float *)((char *)&world->dynamicLightset.basisFunctions->lastValue[2] + v154) = -1.0;
          --v152;
        }
        while ( v152 );
      }
      return;
    }
    v155 = v16->state;
    R_LockGfxImmediateContext();
    dlsUseAsyncCompute = _R12->viewInfo[_R12->viewInfoIndex].dlsUseAsyncCompute;
    if ( dlsUseAsyncCompute )
    {
      R_InitComputeCmdBufState(&state, _R12, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
      R_ComputeWaitForGraphics(&state, v155);
      v156 = D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
    }
    else
    {
      R_InitGfxComputeCmdBufState(&state, v155);
      R_GfxComputeWaitForGraphics(v155);
      v156 = D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
    }
    v232 = v156;
    LightmapAtlasTexture = R_GetLightmapAtlasTexture(_R12, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 1u);
    Resident = R_Texture_GetResident(LightmapAtlasTexture->textureId);
    R_HW_AddResourceTransition(&state, Resident, 0xFFFFFFFF, v156, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v159 = R_GetLightmapAtlasTexture(_R12, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 2u);
    v160 = R_Texture_GetResident(v159->textureId);
    R_HW_AddResourceTransition(&state, v160, 0xFFFFFFFF, v156, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v161 = 0;
    for ( i = dlsGlob.bfCoeffs[_R12->smpFrame].data; v161 < world->dynamicLightset.numBasisFunctions; i[2 * v164 + 3] = LODWORD(world->dynamicLightset.basisFunctions[v163].curValue[1]) )
    {
      v163 = v161;
      v164 = v161++;
      v164 *= 2i64;
      i[2 * v164] = LODWORD(world->dynamicLightset.basisFunctions[v163].lastValue[0]);
      i[2 * v164 + 1] = LODWORD(world->dynamicLightset.basisFunctions[v163].lastValue[1]);
      i[2 * v164 + 2] = LODWORD(world->dynamicLightset.basisFunctions[v163].lastValue[2]);
    }
    R_FlushResourceTransitions(&state);
    R_ProfBeginNamedEvent(&state, "Dynamic Lightsets");
    views = &world->dynamicLightset.lmData.origTexelsBuffer.view;
    R_SetComputeViews(&state, 0, 1, (const GfxShaderBufferView *const *)&views);
    views = &world->dynamicLightset.lmData.origRecordsBuffer.view;
    R_SetComputeViews(&state, 1, 1, (const GfxShaderBufferView *const *)&views);
    views = &dlsGlob.bfCoeffs[0].view + 2 * _R12->smpFrame;
    R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)&views);
    views = &world->dynamicLightset.lmData.bfTexelsBuffer.view;
    R_SetComputeViews(&state, 3, 1, (const GfxShaderBufferView *const *)&views);
    p_view = &gfxBuf.dummyBuffer.view;
    v166 = &world->dynamicLightset.lmData.skipRecordsBuffer.view;
    if ( world->dynamicLightset.lmData.numSkipRecords )
      p_view = &world->dynamicLightset.lmData.palletteRecordsBuffer.view;
    else
      v166 = &gfxBuf.dummyBuffer.view;
    views = p_view;
    R_SetComputeViews(&state, 4, 1, (const GfxShaderBufferView *const *)&views);
    views = v166;
    R_SetComputeViews(&state, 5, 1, (const GfxShaderBufferView *const *)&views);
    v167 = 0;
    v222 = 0;
    if ( world->dynamicLightset.lmData.numLMHave )
    {
      while ( 2 )
      {
        v168 = v167;
        v169 = world->dynamicLightset.lmData.chunkWhichLM[v167];
        v170 = world->draw.lightmapTransientIndex[v169];
        forceUpdate = dlsGlob.transientForceUpdate[v170];
        if ( !(_DWORD)v170 )
          goto LABEL_84;
        if ( (unsigned int)v170 >= 0x600 )
        {
          LODWORD(slice) = 1536;
          LODWORD(flag) = v170;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", flag, slice) )
            __debugbreak();
          v167 = v222;
        }
        if ( ((0x80000000 >> (v170 & 0x1F)) & dataa->transientVisibility.array[v170 >> 5]) == 0 )
        {
          _R12 = dataa;
        }
        else
        {
LABEL_84:
          chunkLMStart = world->dynamicLightset.lmData.chunkLMStart;
          Px = 0.0;
          v172 = chunkLMStart[v168];
          v173 = chunkLMStart[v167 + 1] - v172;
          numChunk = v173;
          if ( !RB_GetLightimapPacking(GFX_LIGHTMAP_TYPE_AB_LIGHTING, v169, &x, &y, (unsigned int *)&views, height, &v237) )
            goto LABEL_127;
          if ( (unsigned __int16)x != x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 569, ASSERT_TYPE_ASSERT, "(( x & 0xFFFF ) == x)", (const char *)&queryFormat, "( x & 0xFFFF ) == x") )
            __debugbreak();
          v174 = y;
          if ( (unsigned __int16)y != y )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 570, ASSERT_TYPE_ASSERT, "(( y & 0xFFFF ) == y)", (const char *)&queryFormat, "( y & 0xFFFF ) == y") )
              __debugbreak();
            v174 = y;
          }
          _R12 = dataa;
          v175 = x | (v174 << 16);
          v234 = v175;
          LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)GetLightmapAtlasTextureSliceRWView(dataa, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 1u, v237);
          R_SetComputeTextureRWViews(&state, 0, 1, (const GfxShaderTextureRWView *const *)&LightmapAtlasTextureSliceRWView);
          LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)GetLightmapAtlasTextureSliceRWView(_R12, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 2u, v237);
          R_SetComputeTextureRWViews(&state, 1, 1, (const GfxShaderTextureRWView *const *)&LightmapAtlasTextureSliceRWView);
          chunkGLM = world->dynamicLightset.lmData.chunkGLM;
          v177 = world->dynamicLightset.basisFunctions;
          chunkGLMBF = world->dynamicLightset.lmData.chunkGLMBF;
          LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)(3 * v172);
          if ( RB_GetNextGChunks(v173, &chunkGLM[v172], chunkGLMBF, v177, (unsigned int *)&Px, copySet, &optSet, mixedSet, heavySet, &copySlot, &optSlot, &mixedSlot, &heavySlot, forceUpdate) )
          {
            do
            {
              v179 = copySlot;
              if ( copySlot )
              {
                R_ProfBeginNamedEvent(&state, "lm copy");
                R_SetComputeShader(&state, rgp.dynLightsetsOptCopyToLM);
                if ( (_DWORD)v179 )
                {
                  v180 = copySet;
                  do
                  {
                    v181 = world->dynamicLightset.lmData.chunkGLM;
                    v182 = (unsigned int)v172 + *v180;
                    v245[0] = v181[(unsigned int)v172 + *v180].chunkInfo.numRecords;
                    v245[1] = v181[v182].chunkInfo.orgStart;
                    v245[2] = v175;
                    if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                      Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                    R_UploadAndSetComputeConstants(&state, 0, v245, 0x10u, NULL);
                    R_Dispatch(&state, (unsigned int)(v245[0] + 63) >> 6, 1u, 1u);
                    ++v180;
                    --v179;
                  }
                  while ( v179 );
                }
                R_ProfEndNamedEvent(&state);
              }
              v183 = optSlot;
              v184 = heavySlot;
              v185 = mixedSlot;
              if ( optSlot || mixedSlot || heavySlot )
              {
                v243 = v175;
                if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                  Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                R_UploadAndSetComputeConstants(&state, 0, &v243, 0x10u, NULL);
                v186 = -1;
                if ( (_DWORD)v183 )
                {
                  R_ProfBeginNamedEvent(&state, "lm opt blend");
                  p_deltaBits = &optSet.deltaBits;
                  v188 = v183;
                  do
                  {
                    v189 = world->dynamicLightset.lmData.chunkGLM;
                    v190 = *(p_deltaBits - 2);
                    numRecords = v189[(unsigned int)(v172 + v190)].chunkInfo.numRecords;
                    orgStart = v189[(unsigned int)(v172 + v190)].chunkInfo.orgStart;
                    bfStart = v189[(unsigned int)(v172 + v190)].chunkInfo.bfStart;
                    tmpStart = *p_deltaBits;
                    if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                      Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                    R_UploadAndSetComputeConstants(&state, 1, &numRecords, 0x10u, NULL);
                    v191 = *(p_deltaBits - 1) - 1;
                    if ( v191 != v186 )
                    {
                      R_SetComputeShader(&state, rgp.dynLightsetsOptBlendToLM[v191]);
                      v186 = v191;
                    }
                    R_Dispatch(&state, (numRecords + 63) >> 6, 1u, 1u);
                    p_deltaBits += 3;
                    --v188;
                  }
                  while ( v188 );
                  v185 = mixedSlot;
                  v184 = heavySlot;
                  R_ProfEndNamedEvent(&state);
                }
                if ( (_DWORD)v185 )
                {
                  R_ProfBeginNamedEvent(&state, "lm mixed blend");
                  R_SetComputeShader(&state, rgp.dynLightsetsOpt5to8LM);
                  v192 = mixedSet;
                  do
                  {
                    v193 = world->dynamicLightset.lmData.chunkGLM;
                    v194 = (unsigned int)v172 + *v192;
                    numRecords = v193[(unsigned int)v172 + *v192].chunkInfo.numRecords;
                    orgStart = v193[v194].chunkInfo.orgStart;
                    bfStart = v193[v194].chunkInfo.bfStart;
                    tmpStart = v193[v194].chunkInfo.tmpStart;
                    if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                      Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                    R_UploadAndSetComputeConstants(&state, 1, &numRecords, 0x10u, NULL);
                    R_Dispatch(&state, (numRecords + 63) >> 6, 1u, 1u);
                    ++v192;
                    --v185;
                  }
                  while ( v185 );
                  R_ProfEndNamedEvent(&state);
                }
                if ( v184 )
                {
                  R_ProfBeginNamedEvent(&state, "lm large blend");
                  R_SetComputeShader(&state, rgp.dynLightsetsOpt9to16LM);
                  v195 = heavySet;
                  v196 = v184;
                  do
                  {
                    v197 = (unsigned int)v172 + *v195;
                    v198 = world->dynamicLightset.lmData.chunkGLM;
                    numRecords = v198[(unsigned int)v172 + *v195].chunkInfo.numRecords;
                    orgStart = v198[v197].chunkInfo.orgStart;
                    bfStart = v198[v197].chunkInfo.bfStart;
                    tmpStart = v198[v197].chunkInfo.tmpStart;
                    if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                      Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                    R_UploadAndSetComputeConstants(&state, 1, &numRecords, 0x10u, NULL);
                    R_Dispatch(&state, (numRecords + 63) >> 6, 1u, 1u);
                    ++v195;
                    --v196;
                  }
                  while ( v196 );
                  R_ProfEndNamedEvent(&state);
                }
                v175 = v234;
              }
            }
            while ( RB_GetNextGChunks(numChunk, (GfxDynamicLightsetGChunk *)((char *)world->dynamicLightset.lmData.chunkGLM + 8 * (_QWORD)LightmapAtlasTextureSliceRWView), world->dynamicLightset.lmData.chunkGLMBF, world->dynamicLightset.basisFunctions, (unsigned int *)&Px, copySet, &optSet, mixedSet, heavySet, &copySlot, &optSlot, &mixedSlot, &heavySlot, forceUpdate) );
LABEL_127:
            _R12 = dataa;
          }
          v167 = v222;
        }
        v222 = ++v167;
        if ( v167 >= world->dynamicLightset.lmData.numLMHave )
        {
          v156 = v232;
          break;
        }
        continue;
      }
    }
    R_ComputeWaitForCompute(&state, PIPE_FLUSH_FULL);
    v199 = R_GetLightmapAtlasTexture(_R12, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 1u);
    v200 = R_Texture_GetResident(v199->textureId);
    R_HW_AddResourceTransition(&state, v200, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, v156, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v201 = R_GetLightmapAtlasTexture(_R12, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 2u);
    v202 = R_Texture_GetResident(v201->textureId);
    R_HW_AddResourceTransition(&state, v202, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, v156, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(&state);
    if ( world->draw.lightGridType != GFX_LIGHTGRID_TYPE_SINGLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 1233, ASSERT_TYPE_ASSERT, "(( world->draw.lightGridType == GFX_LIGHTGRID_TYPE_SINGLE ) && \"Transient GpuLightGrids not yet supported on levels with A/B lighting!\")", (const char *)&queryFormat, "( world->draw.lightGridType == GFX_LIGHTGRID_TYPE_SINGLE ) && \"Transient GpuLightGrids not yet supported on levels with A/B lighting!\"") )
      __debugbreak();
    if ( R_GetNumActiveLightGrids(_R12) > 0 )
    {
      if ( R_GetNumActiveLightGrids(_R12) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 1237, ASSERT_TYPE_ASSERT, "(R_GetNumActiveLightGrids( data ) == 1)", (const char *)&queryFormat, "R_GetNumActiveLightGrids( data ) == 1") )
        __debugbreak();
      v203 = (__int64)*R_GetActiveLightGridsList(_R12);
      R_HW_AddResourceTransition(&state, (const GfxWrappedBuffer *)(v203 + 16), 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(&state);
      LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)(v203 + 48);
      R_SetComputeRWViewsWithCounters(&state, 0, 1, (const GfxShaderBufferRWView *const *)&LightmapAtlasTextureSliceRWView, NULL);
      LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)&world->dynamicLightset.lgProbeData.tempRemapBuffer.view;
      R_SetComputeViews(&state, 8, 1, (const GfxShaderBufferView *const *)&LightmapAtlasTextureSliceRWView);
      v244 = 0ui64;
      v243 = 0ui64;
      LODWORD(v244) = world->dynamicLightset.lgProbeData.origStart;
      if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
        Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
      R_UploadAndSetComputeConstants(&state, 0, &v243, 0x20u, NULL);
      RB_DynamicLightsets_UpdateProbesNew(world, _R12, &state, &world->dynamicLightset.lgProbeData, 0, 0, 0);
      R_HW_AddResourceTransition(&state, (const GfxWrappedBuffer *)(v203 + 16), 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(&state);
    }
    LightGridVolumeAtlasTexture = R_GetLightGridVolumeAtlasTexture(_R12, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
    v205 = R_Texture_GetResident(LightGridVolumeAtlasTexture->textureId);
    R_HW_AddResourceTransition(&state, v205, 0xFFFFFFFF, v156, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v206 = R_GetLightGridVolumeAtlasTexture(_R12, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
    v207 = R_Texture_GetResident(v206->textureId);
    R_HW_AddResourceTransition(&state, v207, 0xFFFFFFFF, v156, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(&state);
    v208 = 0;
    if ( _R12->transientDrawContext.zoneCount )
    {
      do
      {
        v209 = dataa;
        v210 = dataa->transientDrawContext.dynLightSets[v208];
        if ( v210 && v210->lgvProbeData.numGChunk )
        {
          v211 = R_GetLightGridVolumeAtlasTexture(dataa, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
          LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)R_Texture_GetResident(v211->textureId);
          R_SetComputeRWTextures(&state, 1, 1, (const GfxTexture *const *)&LightmapAtlasTextureSliceRWView);
          v212 = R_GetLightGridVolumeAtlasTexture(v209, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
          views = (GfxShaderBufferView *)R_Texture_GetResident(v212->textureId);
          R_SetComputeRWTextures(&state, 2, 1, (const GfxTexture *const *)&views);
          *(_QWORD *)height = &R_GetLightGridVolumesAtlasPackingParamsBuffer(v209)->view;
          R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)height);
          *(_QWORD *)height = &R_GetLightGridVolumesAtlasTransientPackingBuffer(v209)->view;
          R_SetComputeViews(&state, 4, 1, (const GfxShaderBufferView *const *)height);
          *(_QWORD *)height = &v210->lgvReferencesBuffer.view;
          R_SetComputeViews(&state, 3, 1, (const GfxShaderBufferView *const *)height);
          *(_QWORD *)height = &gfxBuf.dummyRWBuffer.rwView;
          R_SetComputeRWViewsWithCounters(&state, 0, 1, (const GfxShaderBufferRWView *const *)height, NULL);
          *(_QWORD *)height = &v210->lgvProbeData.tempRemapBuffer.view;
          R_SetComputeViews(&state, 8, 1, (const GfxShaderBufferView *const *)height);
          LODWORD(v244) = v210->lgvProbeData.origStart;
          *(_QWORD *)((char *)&v243 + 4) = 64i64;
          *(_QWORD *)((char *)&v244 + 4) = 0i64;
          HIDWORD(v244) = 0;
          HIDWORD(v243) = v208;
          LODWORD(v243) = 64;
          DWORD2(v243) = R_GetLightGridVolumesAtlasTextureDepth(v209);
          if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
            Sys_Error((const ObfuscateErrorText)&stru_143DB8A20, (unsigned int)state.computeContextType);
          R_UploadAndSetComputeConstants(&state, 0, &v243, 0x20u, NULL);
          _R12 = v209;
          RB_DynamicLightsets_UpdateProbesNew(world, v209, &state, &v210->lgvProbeData, 1, v208, dlsGlob.transientForceUpdate[v208]);
        }
        else
        {
          _R12 = dataa;
        }
        ++v208;
      }
      while ( v208 < _R12->transientDrawContext.zoneCount );
      v156 = v232;
    }
    v213 = R_GetLightGridVolumeAtlasTexture(_R12, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
    v214 = R_Texture_GetResident(v213->textureId);
    R_HW_AddResourceTransition(&state, v214, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, v156, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v215 = R_GetLightGridVolumeAtlasTexture(_R12, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
    v216 = R_Texture_GetResident(v215->textureId);
    R_HW_AddResourceTransition(&state, v216, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, v156, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(&state);
    if ( dlsGlob.transientForceUpdateCount )
      memset_0(&dlsGlob.transientForceUpdateCount, 0, 0x604ui64);
    R_ProfEndNamedEvent(&state);
    if ( dlsUseAsyncCompute )
      R_ShutdownComputeCmdBufState(&state);
    else
      R_ShutdownGfxComputeCmdBufState(&state);
    R_UnlockGfxImmediateContext();
  }
}

/*
==============
RB_DynamicLightsets_UpdateProbesNew
==============
*/
void RB_DynamicLightsets_UpdateProbesNew(GfxWorld *world, const GfxBackEndData *data, ComputeCmdBufState *state, GfxDynamicLightsetProbeData *probeData, bool updateLGVTexture, unsigned int zoneIndex, bool forceUpdate)
{
  bool v8; 
  GfxDynamicLightsetProbeData *v9; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v13; 
  __int64 v14; 
  ComputeShader *dynLightsetsProbesCopy; 
  unsigned int *v16; 
  GfxDynamicLightsetGChunk *v17; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  int v21; 
  unsigned int *p_deltaBits; 
  __int64 v23; 
  GfxDynamicLightsetGChunk *chunkG; 
  unsigned int v25; 
  int *v26; 
  int v27; 
  int v28; 
  int v29; 
  ComputeShader *dynLightsetsMixedBlend5to8; 
  unsigned int *v31; 
  int *v32; 
  ComputeShader *dynLightsetsMixedBlend9to16; 
  unsigned int *v34; 
  __int64 v35; 
  int *v36; 
  GfxShaderBufferView *views; 
  unsigned int heavySlot; 
  __int64 optSlot; 
  unsigned int activeIndex; 
  GfxDynamicLightsetProbeData *v41; 
  ComputeShader *computeShader; 
  ComputeShader *dynLightsetsProbesBlend5to8; 
  GfxWorld *v44; 
  unsigned int v45; 
  int v46; 
  int v47; 
  unsigned int v48; 
  __int64 dataa[2]; 
  unsigned int heavySet[64]; 
  unsigned int mixedSet[64]; 
  unsigned int copySet[64]; 
  GChunkBypassStruct optSet; 

  v8 = updateLGVTexture;
  computeShader = rgp.dynLightsetsProbesBlend1to4;
  v9 = probeData;
  dynLightsetsProbesBlend5to8 = rgp.dynLightsetsProbesBlend5to8;
  v41 = probeData;
  v44 = world;
  views = &probeData->origProbesBuffer.view;
  activeIndex = 0;
  R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&views);
  views = &dlsGlob.bfCoeffs[0].view + 2 * data->smpFrame;
  R_SetComputeViews(state, 1, 1, (const GfxShaderBufferView *const *)&views);
  views = &v9->bfProbesBuffer.view;
  R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&views);
  p_view = &gfxBuf.dummyBuffer.view;
  v13 = &v9->skipRecordsBuffer.view;
  if ( v9->numSkipRecords )
    p_view = &v9->palletteRecordsBuffer.view;
  else
    v13 = &gfxBuf.dummyBuffer.view;
  views = p_view;
  R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&views);
  views = v13;
  R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&views);
  if ( updateLGVTexture )
  {
    computeShader = rgp.dynLightsetsProbesBlend1to4Tex;
    dynLightsetsProbesBlend5to8 = rgp.dynLightsetsProbesBlend5to8Tex;
  }
  if ( RB_GetNextGChunks(v9->numGChunk, v9->chunkG, v9->chunkGBF, world->dynamicLightset.basisFunctions, &activeIndex, copySet, &optSet, mixedSet, heavySet, (unsigned int *)&views, (unsigned int *)&optSlot + 1, (unsigned int *)&optSlot, &heavySlot, forceUpdate) )
  {
    do
    {
      v14 = (unsigned int)views;
      if ( (_DWORD)views )
      {
        R_ProfBeginNamedEvent(state, "probe copy");
        dynLightsetsProbesCopy = rgp.dynLightsetsProbesCopy;
        if ( v8 )
          dynLightsetsProbesCopy = rgp.dynLightsetsProbesCopyTex;
        R_SetComputeShader(state, dynLightsetsProbesCopy);
        if ( (_DWORD)v14 )
        {
          v16 = copySet;
          do
          {
            dataa[0] = 0i64;
            dataa[1] = 0i64;
            v17 = &v9->chunkG[*v16];
            LODWORD(dataa[0]) = v17->chunkInfo.numRecords;
            HIDWORD(dataa[0]) = v17->chunkInfo.orgStart;
            if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
              Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state->computeContextType);
            R_UploadAndSetComputeConstants(state, 1, dataa, 0x10u, NULL);
            R_Dispatch(state, (unsigned int)(LODWORD(dataa[0]) + 63) >> 6, 1u, 1u);
            ++v16;
            --v14;
          }
          while ( v14 );
        }
        R_ProfEndNamedEvent(state);
      }
      v18 = HIDWORD(optSlot);
      v19 = heavySlot;
      v20 = (unsigned int)optSlot;
      if ( optSlot || heavySlot )
      {
        v21 = -1;
        if ( HIDWORD(optSlot) )
        {
          R_ProfBeginNamedEvent(state, "probe opt blend");
          p_deltaBits = &optSet.deltaBits;
          v23 = v18;
          do
          {
            chunkG = v9->chunkG;
            v25 = *(p_deltaBits - 1);
            v26 = (int *)&chunkG[*(p_deltaBits - 2)];
            v27 = *v26;
            v45 = *v26;
            v46 = v26[2];
            v47 = v26[1];
            v48 = *p_deltaBits;
            v28 = 1;
            if ( v25 > 4 )
              v28 = 5;
            v45 = v27 | ((v25 - v28) << 30);
            v29 = v27 & 0x3FFFFFFF;
            if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
              Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state->computeContextType);
            R_UploadAndSetComputeConstants(state, 1, &v45, 0x10u, NULL);
            if ( v25 > 4 != v21 )
            {
              R_SetComputeShader(state, *(&computeShader + (v25 > 4)));
              v21 = v25 > 4;
            }
            R_Dispatch(state, (unsigned int)(v29 + 63) >> 6, 1u, 1u);
            v9 = v41;
            p_deltaBits += 3;
            --v23;
          }
          while ( v23 );
          v20 = (unsigned int)optSlot;
          v19 = heavySlot;
          v8 = updateLGVTexture;
          R_ProfEndNamedEvent(state);
        }
        if ( (_DWORD)v20 )
        {
          R_ProfBeginNamedEvent(state, "probe mixed blend");
          dynLightsetsMixedBlend5to8 = rgp.dynLightsetsMixedBlend5to8;
          if ( v8 )
            dynLightsetsMixedBlend5to8 = rgp.dynLightsetsMixedBlend5to8Tex;
          R_SetComputeShader(state, dynLightsetsMixedBlend5to8);
          v31 = mixedSet;
          do
          {
            v32 = (int *)&v9->chunkG[*v31];
            v45 = *v32;
            v46 = v32[2];
            v47 = v32[1];
            v48 = v32[3];
            if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
              Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state->computeContextType);
            R_UploadAndSetComputeConstants(state, 1, &v45, 0x10u, NULL);
            R_Dispatch(state, (v45 + 63) >> 6, 1u, 1u);
            ++v31;
            --v20;
          }
          while ( v20 );
          R_ProfEndNamedEvent(state);
        }
        if ( v19 )
        {
          R_ProfBeginNamedEvent(state, "probe large blend");
          dynLightsetsMixedBlend9to16 = rgp.dynLightsetsMixedBlend9to16;
          if ( v8 )
            dynLightsetsMixedBlend9to16 = rgp.dynLightsetsMixedBlend9to16Tex;
          R_SetComputeShader(state, dynLightsetsMixedBlend9to16);
          v34 = heavySet;
          v35 = v19;
          do
          {
            v36 = (int *)&v9->chunkG[*v34];
            v45 = *v36;
            v46 = v36[2];
            v47 = v36[1];
            v48 = v36[3];
            if ( !R_ComputeCheckReserveDescriptorHeaps(state) )
              Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state->computeContextType);
            R_UploadAndSetComputeConstants(state, 1, &v45, 0x10u, NULL);
            R_Dispatch(state, (v45 + 63) >> 6, 1u, 1u);
            ++v34;
            --v35;
          }
          while ( v35 );
          R_ProfEndNamedEvent(state);
        }
      }
    }
    while ( RB_GetNextGChunks(v9->numGChunk, v9->chunkG, v9->chunkGBF, v44->dynamicLightset.basisFunctions, &activeIndex, copySet, &optSet, mixedSet, heavySet, (unsigned int *)&views, (unsigned int *)&optSlot + 1, (unsigned int *)&optSlot, &heavySlot, forceUpdate) );
  }
  R_ComputeWaitForCompute(state, PIPE_FLUSH_FULL);
}

/*
==============
RB_GetNextGChunks
==============
*/
bool RB_GetNextGChunks(const unsigned int numChunk, GfxDynamicLightsetGChunk *chunks, unsigned __int16 *bfList, GfxDynamicLightsetBFData *bfData, unsigned int *activeIndex, unsigned int *copySet, GChunkBypassStruct *optSet, unsigned int *mixedSet, unsigned int *heavySet, unsigned int *copySlot, unsigned int *optSlot, unsigned int *mixedSlot, unsigned int *heavySlot, bool forceUpdate)
{
  unsigned int *v15; 
  unsigned int *v17; 
  unsigned int *v19; 
  unsigned int *v21; 
  __int64 v22; 
  __int64 v24; 
  __int64 v25; 
  char v26; 
  __int64 v27; 
  GfxDynamicLightsetGChunkFlags flags; 
  unsigned int v29; 
  __int16 v30; 
  char v31; 
  bool v32; 
  unsigned int v33; 
  unsigned int bfChunkStart; 
  __int64 v35; 
  bool v37; 
  unsigned int numBFActive; 
  __int64 v40; 
  unsigned int v43; 
  __int64 v44; 
  unsigned int v47; 
  __int64 v48; 
  unsigned int v51; 
  __int64 v52; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v58; 
  char v59; 

  v15 = optSlot;
  _RDI = bfData;
  v17 = mixedSlot;
  v19 = heavySlot;
  v21 = copySlot;
  *heavySlot = 0;
  *mixedSlot = 0;
  *optSlot = 0;
  *copySlot = 0;
  v22 = *activeIndex;
  if ( (unsigned int)v22 < numChunk )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
    while ( 1 )
    {
      if ( *v21 >= 0x40 )
        return *v15 || *v17 || *v21 || *v19;
      v24 = *v15;
      if ( (unsigned int)v24 >= 0x40 || *v17 >= 0x40 || *v19 >= 0x40 )
        return *v15 || *v17 || *v21 || *v19;
      v25 = v22;
      v26 = 0;
      v27 = v24;
      flags = chunks[v22].flags;
      v29 = (unsigned __int8)flags;
      v30 = (unsigned __int16)flags >> 12;
      v31 = 0;
      v32 = (flags & 0x800) != 0;
      optSet[v27].numBFActive = 0;
      v58 = v29;
      v59 = v30 & 1;
      optSet[v27].whichChunk = *activeIndex;
      optSet[v27].deltaBits = 0;
      if ( (v30 & 1) != 0 )
      {
        optSet[v24].deltaBits = 16434824;
        optSet[v24].numBFActive = (((unsigned __int16)chunks[v25].flags >> 8) & 7) + 1;
      }
      v33 = 0;
      if ( v29 >= 4 )
      {
        do
        {
          bfChunkStart = chunks[v25].bfChunkStart;
          v35 = bfList[bfChunkStart + v33];
          if ( forceUpdate )
            goto LABEL_12;
          _RAX = 32i64 * bfList[bfChunkStart + v33];
          __asm { vucomiss xmm0, dword ptr [rax+rdi+4] }
          if ( _RAX )
LABEL_12:
            v26 = 1;
          v37 = __CFSHL__(v35, 5);
          _R11 = 32 * v35;
          __asm { vcomiss xmm0, dword ptr [r11+rdi] }
          if ( v37 )
          {
            v31 = 1;
            if ( v32 )
            {
              numBFActive = optSet[v24].numBFActive;
              optSet[v24].deltaBits |= v33 << (3 * numBFActive);
              optSet[v24].numBFActive = numBFActive + 1;
              bfChunkStart = chunks[v25].bfChunkStart;
            }
            else if ( v26 )
            {
              goto LABEL_51;
            }
          }
          v40 = bfList[bfChunkStart + 1 + v33];
          if ( forceUpdate )
            goto LABEL_19;
          _RAX = 32i64 * bfList[bfChunkStart + 1 + v33];
          __asm { vucomiss xmm0, dword ptr [rax+rdi+4] }
          if ( _RAX )
LABEL_19:
            v26 = 1;
          v37 = __CFSHL__(v40, 5);
          _R11 = 32 * v40;
          __asm { vcomiss xmm0, dword ptr [r11+rdi] }
          if ( v37 )
          {
            v31 = 1;
            if ( v32 )
            {
              v43 = optSet[v24].numBFActive;
              optSet[v24].deltaBits |= (v33 + 1) << (3 * v43);
              optSet[v24].numBFActive = v43 + 1;
              bfChunkStart = chunks[v25].bfChunkStart;
            }
            else if ( v26 )
            {
              goto LABEL_51;
            }
          }
          v44 = bfList[bfChunkStart + 2 + v33];
          if ( forceUpdate )
            goto LABEL_26;
          _RAX = 32i64 * bfList[bfChunkStart + 2 + v33];
          __asm { vucomiss xmm0, dword ptr [rax+rdi+4] }
          if ( _RAX )
LABEL_26:
            v26 = 1;
          v37 = __CFSHL__(v44, 5);
          _R11 = 32 * v44;
          __asm { vcomiss xmm0, dword ptr [r11+rdi] }
          if ( v37 )
          {
            v31 = 1;
            if ( v32 )
            {
              v47 = optSet[v24].numBFActive;
              optSet[v24].deltaBits |= (v33 + 2) << (3 * v47);
              optSet[v24].numBFActive = v47 + 1;
              bfChunkStart = chunks[v25].bfChunkStart;
            }
            else if ( v26 )
            {
              goto LABEL_51;
            }
          }
          v48 = bfList[bfChunkStart + 3 + v33];
          if ( forceUpdate )
            goto LABEL_33;
          _RAX = 32i64 * (unsigned int)v48;
          __asm { vucomiss xmm0, dword ptr [rax+rdi+4] }
          if ( _RAX )
LABEL_33:
            v26 = 1;
          v37 = __CFSHL__(v48, 5);
          _RDX = 32 * v48;
          __asm { vcomiss xmm0, dword ptr [rdx+rdi] }
          if ( v37 )
          {
            v31 = 1;
            if ( v32 )
            {
              v51 = optSet[v24].numBFActive;
              optSet[v24].deltaBits |= (v33 + 3) << (3 * v51);
              optSet[v24].numBFActive = v51 + 1;
            }
            else if ( v26 )
            {
              goto LABEL_51;
            }
          }
          v29 = v58;
          v33 += 4;
        }
        while ( v33 < v58 - 3 );
      }
      for ( ; v33 < v29; ++v33 )
      {
        v52 = bfList[v33 + chunks[v25].bfChunkStart];
        if ( forceUpdate )
          goto LABEL_42;
        _RAX = 32i64 * bfList[v33 + chunks[v25].bfChunkStart];
        __asm { vucomiss xmm0, dword ptr [rax+rdi+4] }
        if ( _RAX )
LABEL_42:
          v26 = 1;
        v37 = __CFSHL__(v52, 5);
        _RCX = 32 * v52;
        __asm { vcomiss xmm0, dword ptr [rcx+rdi] }
        if ( v37 )
        {
          v31 = 1;
          if ( v32 )
          {
            v55 = optSet[v27].numBFActive;
            optSet[v27].deltaBits |= v33 << (3 * v55);
            optSet[v27].numBFActive = v55 + 1;
          }
          else if ( v26 )
          {
            goto LABEL_51;
          }
        }
      }
      if ( !v26 )
        break;
      if ( v31 )
      {
        if ( !v32 )
        {
LABEL_51:
          if ( !v59 )
          {
            v17 = mixedSlot;
            v19 = heavySlot;
            v15 = optSlot;
            v56 = *activeIndex;
            if ( (chunks[v25].flags & 0x2000) != 0 )
              mixedSet[(*mixedSlot)++] = v56;
            else
              heavySet[(*heavySlot)++] = v56;
            goto LABEL_59;
          }
        }
        v15 = optSlot;
        ++*optSlot;
LABEL_58:
        v17 = mixedSlot;
        v19 = heavySlot;
LABEL_59:
        v21 = copySlot;
        goto LABEL_60;
      }
      v21 = copySlot;
      v17 = mixedSlot;
      v15 = optSlot;
      copySet[(*copySlot)++] = *activeIndex;
      v19 = heavySlot;
LABEL_60:
      v22 = *activeIndex + 1;
      *activeIndex = v22;
      if ( (unsigned int)v22 >= numChunk )
        return *v15 || *v17 || *v21 || *v19;
    }
    v15 = optSlot;
    goto LABEL_58;
  }
  return *v15 || *v17 || *v21 || *v19;
}

/*
==============
R_DynamicLightsets_DisableTemporalSmoothing
==============
*/
__int64 R_DynamicLightsets_DisableTemporalSmoothing(unsigned int frameIndex)
{
  return (unsigned int)dlsGlob.lgvTemporalDisableCount[frameIndex & 1] >> 31;
}

/*
==============
R_DynamicLightsets_InitWorld
==============
*/
void R_DynamicLightsets_InitWorld(GfxWorld *world)
{
  __int64 v2; 
  DynamicLightsetsGlob *v3; 
  unsigned int numBasisFunctions; 
  int ElementSizeForDataFormat; 

  if ( world->dynamicLightset.numBasisFunctions )
  {
    PMem_BeginAlloc("DynamicLightSet", PMEM_STACK_GAME);
    v2 = 2i64;
    v3 = &dlsGlob;
    do
    {
      numBasisFunctions = world->dynamicLightset.numBasisFunctions;
      ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32G32B32A32_FLOAT);
      R_CreateGfxWrappedBuffer(v3->bfCoeffs, GfxWrappedBuffer_Data, ElementSizeForDataFormat, numBasisFunctions, GFX_DATA_FORMAT_R32G32B32A32_FLOAT, 0xCu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "bf buffer");
      v3 = (DynamicLightsetsGlob *)((char *)v3 + 32);
      --v2;
    }
    while ( v2 );
    PMem_EndAlloc("DynamicLightSet", PMEM_STACK_GAME);
  }
  dlsGlob.initDone = 1;
}

/*
==============
R_DynamicLightsets_LightmapReady
==============
*/
char R_DynamicLightsets_LightmapReady(GfxWorld *world, const GfxBackEndData *data)
{
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int outSlice; 
  unsigned int outShift; 

  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 582, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( data && RB_IsLightmapAtlasIdle(GFX_LIGHTMAP_TYPE_AB_LIGHTING) )
  {
    if ( !world->dynamicLightset.numBasisFunctions )
      return 1;
    if ( !world->draw.lightmapTransientIndex )
      return 1;
    v4 = 0i64;
    if ( !world->dynamicLightset.lmData.numLMHave )
      return 1;
    while ( 1 )
    {
      v5 = world->dynamicLightset.lmData.chunkWhichLM[v4];
      v6 = world->draw.lightmapTransientIndex[v5];
      if ( v6 )
      {
        if ( !bitarray_base<bitarray<1536>>::testBit(&data->transientVisibility, v6) || !GetLightmapAtlasShift(v5, &outShift, &outSlice) )
          break;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= world->dynamicLightset.lmData.numLMHave )
        return 1;
    }
  }
  return 0;
}

/*
==============
R_DynamicLightsets_ShutdownProbeData
==============
*/
void R_DynamicLightsets_ShutdownProbeData(GfxDynamicLightsetProbeData *probeData)
{
  GfxWrappedBuffer *p_bfProbesBuffer; 

  p_bfProbesBuffer = &probeData->bfProbesBuffer;
  if ( p_bfProbesBuffer->data && p_bfProbesBuffer->view.view >= 2 )
    R_ShutdownGfxWrappedBuffer(p_bfProbesBuffer);
  if ( probeData->origProbesBuffer.data && probeData->origProbesBuffer.view.view >= 2 )
    R_ShutdownGfxWrappedBuffer(&probeData->origProbesBuffer);
  if ( probeData->palletteRecordsBuffer.data && probeData->palletteRecordsBuffer.view.view >= 2 )
    R_ShutdownGfxWrappedBuffer(&probeData->palletteRecordsBuffer);
  if ( probeData->skipRecordsBuffer.data && probeData->skipRecordsBuffer.view.view >= 2 )
    R_ShutdownGfxWrappedBuffer(&probeData->skipRecordsBuffer);
  if ( probeData->tempRemapBuffer.data )
  {
    if ( probeData->tempRemapBuffer.view.view >= 2 )
      R_ShutdownGfxWrappedBuffer(&probeData->tempRemapBuffer);
  }
}

/*
==============
R_DynamicLightsets_ShutdownTransientZoneBuffers
==============
*/
void R_DynamicLightsets_ShutdownTransientZoneBuffers(GfxDynamicLightsetLGppZoneInfo *SMLGppZone)
{
  GfxWrappedBuffer *p_lgvReferencesBuffer; 

  if ( SMLGppZone )
  {
    p_lgvReferencesBuffer = &SMLGppZone->lgvReferencesBuffer;
    if ( SMLGppZone->lgvReferencesBuffer.data )
    {
      if ( SMLGppZone->lgvReferencesBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(p_lgvReferencesBuffer);
    }
    R_DynamicLightsets_ShutdownProbeData(&SMLGppZone->lgvProbeData);
  }
}

/*
==============
R_DynamicLightsets_ShutdownWorld
==============
*/
void R_DynamicLightsets_ShutdownWorld(GfxWorld *world)
{
  DynamicLightsetsGlob *v1; 
  __int64 v2; 
  StreamerMemLoan result; 

  if ( world->dynamicLightset.numBasisFunctions )
  {
    v1 = &dlsGlob;
    v2 = 2i64;
    do
    {
      R_ShutdownGfxWrappedBuffer(v1->bfCoeffs);
      v1 = (DynamicLightsetsGlob *)((char *)v1 + 32);
      --v2;
    }
    while ( v2 );
    PMem_Free(&result, "DynamicLightSet", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
  dlsGlob.initDone = 0;
}

/*
==============
R_DynamicLightsets_ShutdownWorldBuffers
==============
*/
void R_DynamicLightsets_ShutdownWorldBuffers(GfxWorld *world)
{
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 193, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( world->dynamicLightset.numBasisFunctions )
  {
    R_DynamicLightsets_ShutdownProbeData(&world->dynamicLightset.lgProbeData);
    if ( world->dynamicLightset.lmData.bfTexelsBuffer.data && world->dynamicLightset.lmData.bfTexelsBuffer.view.view >= 2 )
      R_ShutdownGfxWrappedBuffer(&world->dynamicLightset.lmData.bfTexelsBuffer);
    if ( world->dynamicLightset.lmData.origRecordsBuffer.data && world->dynamicLightset.lmData.origRecordsBuffer.view.view >= 2 )
      R_ShutdownGfxWrappedBuffer(&world->dynamicLightset.lmData.origRecordsBuffer);
    if ( world->dynamicLightset.lmData.origTexelsBuffer.data && world->dynamicLightset.lmData.origTexelsBuffer.view.view >= 2 )
      R_ShutdownGfxWrappedBuffer(&world->dynamicLightset.lmData.origTexelsBuffer);
    if ( world->dynamicLightset.lmData.palletteRecordsBuffer.data && world->dynamicLightset.lmData.palletteRecordsBuffer.view.view >= 2 )
      R_ShutdownGfxWrappedBuffer(&world->dynamicLightset.lmData.palletteRecordsBuffer);
    if ( world->dynamicLightset.lmData.skipRecordsBuffer.data )
    {
      if ( world->dynamicLightset.lmData.skipRecordsBuffer.view.view >= 2 )
        R_ShutdownGfxWrappedBuffer(&world->dynamicLightset.lmData.skipRecordsBuffer);
    }
  }
}

/*
==============
R_UpdateDLS_Quat
==============
*/
void R_UpdateDLS_Quat(vec4_t *quat, const int whichSlot, unsigned int smpFrame)
{
  __asm { vmovups xmm0, xmmword ptr [rcx] }
  _RAX = dlsGlob.portalGIquats;
  _R9 = 2 * (whichSlot + ((unsigned __int64)(smpFrame & 1) << 8));
  __asm { vmovups xmmword ptr [rax+r9*8], xmm0 }
}


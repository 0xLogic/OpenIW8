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
  int v3; 
  char v4; 
  int v6; 
  char v7; 
  int v9; 
  char v10; 
  int v12; 
  char v13; 
  unsigned int v15; 

  _XMM6 = 0i64;
  __asm { vroundss xmm3, xmm6, xmm2, 1 }
  v3 = (int)*(float *)&_XMM3;
  if ( (int)*(float *)&_XMM3 > 255 )
    v3 = 255;
  v4 = v3;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  if ( v3 < 0 )
    v4 = 0;
  LOBYTE(v15) = v4;
  v6 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 > 255 )
    v6 = 255;
  v7 = v6;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  if ( v6 < 0 )
    v7 = 0;
  BYTE1(v15) = v7;
  v9 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 > 255 )
    v9 = 255;
  v10 = v9;
  __asm { vroundss xmm1, xmm6, xmm3, 1 }
  if ( v9 < 0 )
    v10 = 0;
  BYTE2(v15) = v10;
  v12 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 > 255 )
    v12 = 255;
  v13 = v12;
  if ( v12 < 0 )
    v13 = 0;
  HIBYTE(v15) = v13;
  return v15;
}

/*
==============
RB_DynamicLightsets_DisplayDebug
==============
*/
void RB_DynamicLightsets_DisplayDebug(GfxCmdBufContext *gfxContext, const GfxBackEndData *data)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  GfxWorld *world; 
  float pixelHeight; 
  __int64 v15; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  __int64 v22; 
  __int128 v23; 
  GfxColor v24; 
  unsigned int v25; 
  GfxColor v26; 
  __int64 v27; 
  float *v28; 
  __int128 v29; 
  float v30; 
  bool v31; 
  double v32; 
  GfxColor v33; 
  signed __int64 v34; 
  __int64 v35; 
  int *v36; 
  float v37; 
  __int128 v38; 
  __int128 v39; 
  materialCommands_t *Tess; 
  materialCommands_t *v41; 
  unsigned int v42; 
  float v43; 
  unsigned int numBasisFunctions; 
  _QWORD v45[3]; 
  GfxWorld *v46; 
  GfxCmdBufContext v47; 
  vec4_t val; 
  __int64 v49; 
  float v50; 
  int v51[8]; 
  char dest[512]; 
  __int128 v53; 
  __int128 v54; 
  __int128 v55; 
  __int128 v56; 
  __int128 v57; 
  __int128 v58; 
  __int128 v59; 
  __int128 v60; 
  __int128 v61; 
  __int128 v62; 

  world = rgp.world;
  v46 = rgp.world;
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
              v62 = v2;
              v61 = v3;
              v60 = v4;
              v59 = v5;
              v58 = v6;
              pixelHeight = (float)backEnd.debugFont->pixelHeight;
              v57 = v7;
              v15 = 0i64;
              val.v[3] = FLOAT_1_0;
              v43 = pixelHeight;
              do
              {
                v49 = 0i64;
                v50 = 0.0;
                *(_DWORD *)((char *)&v49 + v15) = 1061997773;
                v16 = *(float *)&v49;
                v17 = *((float *)&v49 + 1);
                v18 = v50;
                val.v[0] = *(float *)&v49;
                val.v[1] = *((float *)&v49 + 1);
                val.v[2] = v50;
                v19 = GfxColorFromVec4_t(&val);
                val.v[0] = v16 * 0.2;
                *(int *)((char *)v51 + v20) = v19;
                val.v[2] = v18 * 0.2;
                val.v[1] = v17 * 0.2;
                v21 = GfxColorFromVec4_t(&val);
                *(int *)((char *)&v51[4] + v22) = v21;
                v15 = v22 + 4;
              }
              while ( v15 < 12 );
              v23 = LODWORD(FLOAT_130_0);
              v24.packed = GfxColorFromVec4_t(&colorWhite);
              v25 = 0;
              v26.packed = GfxColorFromVec4_t(&colorMdGrey);
              v27 = 0i64;
              v56 = v8;
              v55 = v9;
              v54 = v10;
              v53 = v11;
              v45[0] = 0i64;
              do
              {
                v28 = (float *)((char *)world->dynamicLightset.basisFunctions->curValue + v27);
                v29 = v23;
                v30 = v28[2];
                v31 = v28[1] != 0.0 || v30 > 0.0009765625;
                v32 = (float)(*v28 * 0.33333334);
                v28[2] = v30 * 0.5;
                Com_sprintf<512>((char (*)[512])dest, "%2.2d %5.2f", v25, v32);
                v33 = v26;
                v47 = *gfxContext;
                if ( v31 )
                  v33 = v24;
                RB_DrawText(&v47, dest, backEnd.debugFont, 50.0, *(float *)&v23 + v43, v33);
                v34 = (char *)v28 - (char *)v51;
                v35 = 0i64;
                do
                {
                  v36 = &v51[v35];
                  v37 = 396.0 * *(float *)((char *)&v51[v35 + 3] + v34);
                  if ( !v31 )
                    v36 = &v51[v35 + 4];
                  v42 = *v36;
                  *(GfxCmdBufContext *)&v45[1] = *gfxContext;
                  RB_DrawStretchPic((GfxCmdBufContext *)&v45[1], rgp.whiteMaterial, 140.0, *(float *)&v29, v37, 5.0, 0.0, 0.0, 1.0, 1.0, v42, GFX_PRIM_STATS_DEBUG);
                  ++v35;
                  v38 = v29;
                  *(float *)&v38 = *(float *)&v29 + 5.0;
                  v29 = v38;
                }
                while ( v35 < 3 );
                ++v25;
                world = v46;
                v27 = v45[0] + 32i64;
                v39 = v23;
                *(float *)&v39 = *(float *)&v23 + 18.0;
                v23 = v39;
                v45[0] += 32i64;
              }
              while ( v25 < numBasisFunctions );
              *(GfxCmdBufContext *)&v45[1] = *gfxContext;
              Tess = R_GetTess((GfxCmdBufContext *)&v45[1]);
              v41 = Tess;
              if ( Tess->vertexCount )
              {
                *(GfxCmdBufContext *)&v45[1] = *gfxContext;
                RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v45[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h(162)");
              }
              else
              {
                if ( Tess->indexCount )
                {
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_backend.h", 166, ASSERT_TYPE_ASSERT, "(tess.indexCount == 0)", (const char *)&queryFormat, "tess.indexCount == 0") )
                    __debugbreak();
                }
                v41->viewStatsTarget = GFX_VIEW_STATS_INVALID;
                v41->primStatsTarget = GFX_PRIM_STATS_INVALID;
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
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  GfxBackEndData *v13; 
  GfxCmdBufContext *v15; 
  char v16; 
  GfxShaderBufferView *smpFrame; 
  char v18; 
  int v19; 
  unsigned int v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  GfxDynamicLightsetBFData *basisFunctions; 
  unsigned __int64 v26; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  GfxDynamicLightsetBFType bfType; 
  __int64 v31; 
  unsigned int v32; 
  GfxDynamicLightsetLightInfo *v33; 
  __int64 whichPrimary; 
  __int128 intensity_low; 
  __int128 v36; 
  float v38; 
  float v39; 
  __int128 v45; 
  __int128 v46; 
  __int128 v47; 
  GfxDynamicLightsetBFData *v48; 
  float v49; 
  __int128 v51; 
  __int128 v53; 
  __int128 v55; 
  vec4_t *v56; 
  float v57; 
  float v58; 
  float v59; 
  float v60; 
  GfxDynamicLightsetPortalGIData *portalGIData; 
  __int128 v63; 
  GfxDynamicLightsetProductGIData *productGIData; 
  __int64 whichDLS; 
  __int64 v67; 
  __int128 v68; 
  __int128 v69; 
  __int128 v70; 
  GfxDynamicLightsetBFData *v72; 
  float v75; 
  int v76; 
  float v77; 
  GfxDynamicLightsetBFData *v78; 
  GfxDynamicLightsetBFData *v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  int integer; 
  __int64 v84; 
  float value; 
  unsigned int v86; 
  GfxDynamicLightsetBFData *v90; 
  int v91; 
  bool v92; 
  bool v93; 
  char v94; 
  unsigned int *p_numBFActive; 
  unsigned int v96; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  __int64 v102; 
  unsigned int *v103; 
  __int64 v104; 
  GfxCmdBufState *v105; 
  D3D12_RESOURCE_STATES v106; 
  const GfxImage *LightmapAtlasTexture; 
  const GfxTexture *Resident; 
  const GfxImage *v109; 
  const GfxTexture *v110; 
  unsigned int v111; 
  _DWORD *i; 
  __int64 v113; 
  __int64 v114; 
  GfxShaderBufferView *p_view; 
  GfxShaderBufferView *v116; 
  unsigned int v117; 
  __int64 v118; 
  __int64 v119; 
  unsigned __int64 v120; 
  unsigned int *chunkLMStart; 
  __int64 v122; 
  unsigned int v123; 
  unsigned int v124; 
  unsigned int v125; 
  GfxDynamicLightsetGChunk *chunkGLM; 
  GfxDynamicLightsetBFData *v127; 
  unsigned __int16 *chunkGLMBF; 
  __int64 v129; 
  unsigned int *v130; 
  GfxDynamicLightsetGChunk *v131; 
  __int64 v132; 
  __int64 v133; 
  unsigned int v134; 
  __int64 v135; 
  int v136; 
  unsigned int *p_deltaBits; 
  __int64 v138; 
  GfxDynamicLightsetGChunk *v139; 
  int v140; 
  int v141; 
  unsigned int *v142; 
  GfxDynamicLightsetGChunk *v143; 
  __int64 v144; 
  unsigned int *v145; 
  __int64 v146; 
  __int64 v147; 
  GfxDynamicLightsetGChunk *v148; 
  const GfxImage *v149; 
  const GfxTexture *v150; 
  const GfxImage *v151; 
  const GfxTexture *v152; 
  __int64 v153; 
  const GfxImage *LightGridVolumeAtlasTexture; 
  const GfxTexture *v155; 
  const GfxImage *v156; 
  const GfxTexture *v157; 
  unsigned int v158; 
  GfxBackEndData *v159; 
  GfxDynamicLightsetLGppZoneInfo *v160; 
  const GfxImage *v161; 
  const GfxImage *v162; 
  const GfxImage *v163; 
  const GfxTexture *v164; 
  const GfxImage *v165; 
  const GfxTexture *v166; 
  __int64 flag; 
  unsigned int *slice; 
  char v169; 
  bool forceUpdate; 
  int v171; 
  unsigned int v172; 
  unsigned int y; 
  GfxShaderBufferView *views; 
  bool dlsUseAsyncCompute; 
  GfxBackEndData *dataa; 
  unsigned int height[2]; 
  GfxShaderTextureRWView *LightmapAtlasTextureSliceRWView; 
  float Px; 
  unsigned int heavySlot; 
  unsigned int mixedSlot; 
  D3D12_RESOURCE_STATES v182; 
  unsigned int x; 
  unsigned int v184; 
  unsigned int optSlot; 
  unsigned int copySlot; 
  unsigned int v187; 
  unsigned int numChunk; 
  unsigned int numRecords; 
  unsigned int orgStart; 
  unsigned int bfStart; 
  unsigned int tmpStart; 
  __int128 v193; 
  __int128 v194; 
  int v195[4]; 
  ComputeCmdBufState state; 
  unsigned int heavySet[64]; 
  unsigned int mixedSet[64]; 
  unsigned int copySet[64]; 
  GChunkBypassStruct optSet; 
  __int128 v201; 
  __int128 v202; 
  __int128 v203; 
  __int128 v204; 
  __int128 v205; 
  __int128 v206; 
  __int128 v207; 
  __int128 v208; 
  __int128 v209; 
  __int128 v210; 

  dataa = (GfxBackEndData *)data;
  v13 = (GfxBackEndData *)data;
  *(_QWORD *)height = gfxContext;
  v15 = gfxContext;
  if ( world && data )
  {
    if ( !world->dynamicLightset.numBasisFunctions || !dlsGlob.initDone )
      return;
    v16 = 1;
  }
  else
  {
    v16 = 0;
  }
  if ( !v16 || !r_dlsDebugMode->current.integer )
    return;
  smpFrame = (GfxShaderBufferView *)data->smpFrame;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  views = smpFrame;
  v22 = 0;
  v169 = 0;
  y = 0;
  v23 = 0;
  v171 = 0;
  if ( !world->dynamicLightset.numBasisFunctions )
    goto LABEL_37;
  v210 = v3;
  v209 = v4;
  v208 = v5;
  v205 = v8;
  v204 = v9;
  v203 = v10;
  v202 = v11;
  v201 = v12;
  v207 = v6;
  v206 = v7;
  _XMM6 = 0i64;
  do
  {
    basisFunctions = world->dynamicLightset.basisFunctions;
    v26 = v23;
    v27 = 0i64;
    v28 = 0i64;
    v29 = 0i64;
    bfType = basisFunctions[v26].bfType;
    if ( bfType )
    {
      if ( bfType == GFX_BF_PORTALGI )
      {
        v56 = &dlsGlob.portalGIquats[(unsigned __int64)v13->smpFrame][v20];
        _XMM5 = 0i64;
        v57 = v56->v[1];
        v58 = v56->v[0];
        v59 = v56->v[2];
        v60 = v56->v[3];
        if ( (float)((float)((float)((float)(v58 * v58) + (float)(v57 * v57)) + (float)(v59 * v59)) + (float)(v60 * v60)) > 0.0 )
        {
          portalGIData = world->dynamicLightset.portalGIData;
          v63 = LODWORD(FLOAT_0_99989998);
          *(float *)&v63 = 0.99989998 - (float)((float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v57 * portalGIData[basisFunctions[v26].startRec].baseQuat.v[1]) + (float)(v58 * portalGIData[basisFunctions[v26].startRec].baseQuat.v[0])) + (float)(v59 * portalGIData[basisFunctions[v26].startRec].baseQuat.v[2])) + (float)(v60 * portalGIData[basisFunctions[v26].startRec].baseQuat.v[3])) & _xmm) - portalGIData[basisFunctions[v26].startRec].extraInfo.v[0]) * portalGIData[basisFunctions[v26].startRec].extraInfo.v[1]);
          _XMM0 = v63;
          __asm
          {
            vminss  xmm1, xmm0, xmm11
            vmaxss  xmm5, xmm1, xmm6
          }
        }
        y = v20 + 1;
        _XMM0 = _XMM5;
        _XMM2 = _XMM5;
      }
      else
      {
        productGIData = world->dynamicLightset.productGIData;
        whichDLS = productGIData[v22].whichDLS;
        v67 = world->dynamicLightset.numDLSBasisFunctions + productGIData[v22].whichPortal;
        v171 = v22 + 1;
        v68 = LODWORD(basisFunctions[whichDLS].lastValue[0]);
        *(float *)&v68 = basisFunctions[whichDLS].lastValue[0] * basisFunctions[v67].lastValue[0];
        _XMM5 = v68;
        v69 = LODWORD(basisFunctions[whichDLS].lastValue[2]);
        *(float *)&v69 = basisFunctions[whichDLS].lastValue[2] * basisFunctions[v67].lastValue[2];
        _XMM0 = v69;
        v70 = LODWORD(basisFunctions[whichDLS].lastValue[1]);
        *(float *)&v70 = basisFunctions[whichDLS].lastValue[1] * basisFunctions[v67].lastValue[1];
        _XMM2 = v70;
      }
      v48 = basisFunctions;
    }
    else
    {
      if ( !basisFunctions[v26].numRec )
      {
        v31 = v23;
        basisFunctions[v31].curValue[0] = 0.0;
        world->dynamicLightset.basisFunctions[v31].curValue[1] = 0.0;
        goto LABEL_35;
      }
      v32 = 0;
      do
      {
        v33 = &world->dynamicLightset.basisFunctionLights[v32 + basisFunctions[v26].startRec];
        whichPrimary = v33->whichPrimary;
        if ( (unsigned int)whichPrimary < v13->sceneLightCount )
        {
          intensity_low = LODWORD(v13->sceneLights[whichPrimary].intensity);
          v36 = intensity_low;
          *(float *)&v36 = (float)(*(float *)&intensity_low * v13->sceneLights[whichPrimary].colorLinearSrgb.v[0]) * v33->baseIntensity[0];
          _XMM3 = v36;
          v38 = v13->sceneLights[whichPrimary].colorLinearSrgb.v[1];
          v39 = v13->sceneLights[whichPrimary].colorLinearSrgb.v[2];
          v33->lastIntensity[0] = *(float *)&v36;
          v33->lastIntensity[1] = (float)(*(float *)&intensity_low * v38) * v33->baseIntensity[1];
          v33->lastIntensity[2] = (float)(*(float *)&intensity_low * v39) * v33->baseIntensity[2];
          __asm { vmaxss  xmm4, xmm3, xmm6 }
          v33->lastIntensity[0] = *(float *)&_XMM4;
          _XMM0 = LODWORD(v33->lastIntensity[1]);
          __asm { vmaxss  xmm2, xmm0, xmm6 }
          v33->lastIntensity[1] = *(float *)&_XMM2;
          _XMM1 = LODWORD(v33->lastIntensity[2]);
          __asm { vmaxss  xmm0, xmm1, xmm6 }
          v33->lastIntensity[2] = *(float *)&_XMM0;
          basisFunctions = world->dynamicLightset.basisFunctions;
          v45 = v27;
          *(float *)&v45 = *(float *)&v27 + *(float *)&_XMM4;
          v27 = v45;
          v46 = v28;
          *(float *)&v46 = *(float *)&v28 + *(float *)&_XMM2;
          v28 = v46;
          v47 = v29;
          *(float *)&v47 = *(float *)&v29 + *(float *)&_XMM0;
          v29 = v47;
        }
        ++v32;
      }
      while ( v32 < basisFunctions[v26].numRec );
      v48 = world->dynamicLightset.basisFunctions;
      v49 = 1.0 / (float)basisFunctions[v26].numRec;
      v51 = v27;
      *(float *)&v51 = *(float *)&v27 * v49;
      _XMM5 = v51;
      v53 = v28;
      *(float *)&v53 = *(float *)&v28 * v49;
      _XMM2 = v53;
      v55 = v29;
      *(float *)&v55 = *(float *)&v29 * v49;
      _XMM0 = v55;
    }
    __asm { vminss  xmm7, xmm5, xmm12 }
    v72 = basisFunctions;
    __asm
    {
      vminss  xmm4, xmm2, xmm12
      vminss  xmm5, xmm0, xmm12
    }
    v75 = basisFunctions[v26].lastValue[0];
    if ( *(float *)&_XMM7 == v75 && *(float *)&_XMM4 == basisFunctions[v26].lastValue[1] && *(float *)&_XMM5 == basisFunctions[v26].lastValue[2] )
    {
      v76 = 1;
      v77 = *(float *)&_XMM4 + *(float *)&_XMM7;
    }
    else
    {
      v76 = 0;
      v77 = *(float *)&_XMM4 + *(float *)&_XMM7;
      if ( (float)(*(float *)&_XMM5 + (float)(*(float *)&_XMM4 + *(float *)&_XMM7)) == 0.0 && (float)((float)(v75 + basisFunctions[v26].lastValue[1]) + basisFunctions[v26].lastValue[2]) > 2.0 )
      {
        v169 = 1;
        v72 = v48;
      }
    }
    v72[v26].lastValue[0] = *(float *)&_XMM7;
    v72[v26].lastValue[1] = *(float *)&_XMM4;
    v72[v26].lastValue[2] = *(float *)&_XMM5;
    world->dynamicLightset.basisFunctions[v26].curValue[1] = 0.0;
    world->dynamicLightset.basisFunctions[v26].curValue[0] = v77 + *(float *)&_XMM5;
    Px = world->dynamicLightset.basisFunctions[v26].curValue[0];
    if ( _fdtest(&Px) > 0 )
    {
      v78 = world->dynamicLightset.basisFunctions;
      *(_QWORD *)v78[v26].curValue = 0i64;
      v78[v26].curValue[2] = 0.0;
      v79 = world->dynamicLightset.basisFunctions;
      *(_QWORD *)v79[v26].lastValue = 0i64;
      v79[v26].lastValue[2] = 0.0;
LABEL_34:
      v13 = dataa;
      v22 = v171;
      v20 = y;
      goto LABEL_35;
    }
    if ( !v76 )
    {
      v81 = v23;
      world->dynamicLightset.basisFunctions[v81].curValue[1] = 1.0;
      world->dynamicLightset.basisFunctions[v81].curValue[2] = 1.0;
      if ( (unsigned int)v21 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 815, ASSERT_TYPE_ASSERT, "(numChanged < MAX_CHANGED)", (const char *)&queryFormat, "numChanged < MAX_CHANGED") )
        __debugbreak();
      v82 = (unsigned int)v21++;
      *(&optSet.whichChunk + v82) = v23;
    }
    integer = r_dlsDebugLight->current.integer;
    if ( !integer )
      goto LABEL_34;
    v84 = v23;
    value = r_dlsDebugIntensity->current.value;
    world->dynamicLightset.basisFunctions[v84].curValue[1] = 1.0;
    world->dynamicLightset.basisFunctions[v84].curValue[2] = 1.0;
    world->dynamicLightset.basisFunctions[v26].curValue[0] = 0.0;
    world->dynamicLightset.basisFunctions[v26].lastValue[2] = 0.0;
    world->dynamicLightset.basisFunctions[v26].lastValue[1] = 0.0;
    world->dynamicLightset.basisFunctions[v26].lastValue[0] = 0.0;
    if ( integer == 2 )
    {
      world->dynamicLightset.basisFunctions[v26].curValue[0] = 1.0;
      world->dynamicLightset.basisFunctions[v26].curValue[2] = 1.0;
      world->dynamicLightset.basisFunctions[v26].lastValue[2] = value;
      world->dynamicLightset.basisFunctions[v26].lastValue[1] = value;
      world->dynamicLightset.basisFunctions[v26].lastValue[0] = value;
      goto LABEL_34;
    }
    if ( integer < 3 )
      goto LABEL_34;
    v86 = integer - 3;
    v20 = y;
    v22 = v171;
    v13 = dataa;
    _XMM0 = v86;
    __asm
    {
      vpcmpeqd xmm2, xmm0, xmm1
      vblendvps xmm0, xmm6, xmm11, xmm2
    }
    world->dynamicLightset.basisFunctions[v26].curValue[0] = *(float *)&_XMM0;
    v90 = world->dynamicLightset.basisFunctions;
    if ( v86 == v23 )
    {
      v90[v26].lastValue[2] = value;
      world->dynamicLightset.basisFunctions[v26].lastValue[1] = value;
      world->dynamicLightset.basisFunctions[v26].lastValue[0] = value;
      world->dynamicLightset.basisFunctions[v26].curValue[2] = 1.0;
    }
    else
    {
      v90[v26].curValue[2] = 0.0;
    }
LABEL_35:
    ++v23;
  }
  while ( v23 < world->dynamicLightset.numBasisFunctions );
  LOBYTE(smpFrame) = (_BYTE)views;
  v18 = v169;
  v15 = *(GfxCmdBufContext **)height;
LABEL_37:
  v80 = (unsigned __int8)smpFrame & 1;
  if ( r_dlsDebugDisableTemporalSmoothingPulse->current.enabled )
  {
    dlsGlob.lgvTemporalDisableCount[v80] = 0;
  }
  else if ( v18 && dlsGlob.lgvTemporalDisableCount[v80] >= 0 )
  {
    dlsGlob.lgvTemporalDisableCount[v80] = -2;
  }
  else
  {
    v91 = dlsGlob.lgvTemporalDisableCount[v80];
    if ( v91 < 0 )
      dlsGlob.lgvTemporalDisableCount[v80] = v91 + 1;
  }
  if ( r_dlsDebugLight->current.integer || v21 || dlsGlob.transientForceUpdateCount )
  {
    v92 = !RB_IsLightmapAtlasIdle(GFX_LIGHTMAP_TYPE_AB_LIGHTING);
    v93 = !RB_IsLightGridVolumesAtlasIdle();
    v94 = v92;
    if ( v93 )
      v94 = 1;
    if ( v94 )
    {
      if ( v21 >= 4 )
      {
        p_numBFActive = &optSet.numBFActive;
        v96 = ((unsigned int)(v21 - 4) >> 2) + 1;
        v97 = v96;
        v19 = 4 * v96;
        do
        {
          v98 = *(p_numBFActive - 1);
          p_numBFActive += 4;
          v98 *= 32i64;
          *(float *)((char *)world->dynamicLightset.basisFunctions->lastValue + v98) = -1.0;
          *(float *)((char *)&world->dynamicLightset.basisFunctions->lastValue[1] + v98) = -1.0;
          *(float *)((char *)&world->dynamicLightset.basisFunctions->lastValue[2] + v98) = -1.0;
          v99 = *(p_numBFActive - 4);
          world->dynamicLightset.basisFunctions[v99].lastValue[0] = -1.0;
          world->dynamicLightset.basisFunctions[v99].lastValue[1] = -1.0;
          world->dynamicLightset.basisFunctions[v99].lastValue[2] = -1.0;
          v100 = *(p_numBFActive - 3);
          world->dynamicLightset.basisFunctions[v100].lastValue[0] = -1.0;
          world->dynamicLightset.basisFunctions[v100].lastValue[1] = -1.0;
          world->dynamicLightset.basisFunctions[v100].lastValue[2] = -1.0;
          v101 = *(p_numBFActive - 2);
          world->dynamicLightset.basisFunctions[v101].lastValue[0] = -1.0;
          world->dynamicLightset.basisFunctions[v101].lastValue[1] = -1.0;
          world->dynamicLightset.basisFunctions[v101].lastValue[2] = -1.0;
          --v97;
        }
        while ( v97 );
      }
      if ( v19 < v21 )
      {
        v102 = (unsigned int)(v21 - v19);
        v103 = &optSet.whichChunk + v19;
        do
        {
          v104 = *v103++;
          v104 *= 32i64;
          *(float *)((char *)world->dynamicLightset.basisFunctions->lastValue + v104) = -1.0;
          *(float *)((char *)&world->dynamicLightset.basisFunctions->lastValue[1] + v104) = -1.0;
          *(float *)((char *)&world->dynamicLightset.basisFunctions->lastValue[2] + v104) = -1.0;
          --v102;
        }
        while ( v102 );
      }
      return;
    }
    v105 = v15->state;
    R_LockGfxImmediateContext();
    dlsUseAsyncCompute = v13->viewInfo[v13->viewInfoIndex].dlsUseAsyncCompute;
    if ( dlsUseAsyncCompute )
    {
      R_InitComputeCmdBufState(&state, v13, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
      R_ComputeWaitForGraphics(&state, v105);
      v106 = D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
    }
    else
    {
      R_InitGfxComputeCmdBufState(&state, v105);
      R_GfxComputeWaitForGraphics(v105);
      v106 = D3D12_RESOURCE_STATE_COPY_SOURCE|D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE;
    }
    v182 = v106;
    LightmapAtlasTexture = R_GetLightmapAtlasTexture(v13, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 1u);
    Resident = R_Texture_GetResident(LightmapAtlasTexture->textureId);
    R_HW_AddResourceTransition(&state, Resident, 0xFFFFFFFF, v106, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v109 = R_GetLightmapAtlasTexture(v13, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 2u);
    v110 = R_Texture_GetResident(v109->textureId);
    R_HW_AddResourceTransition(&state, v110, 0xFFFFFFFF, v106, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v111 = 0;
    for ( i = dlsGlob.bfCoeffs[v13->smpFrame].data; v111 < world->dynamicLightset.numBasisFunctions; i[2 * v114 + 3] = LODWORD(world->dynamicLightset.basisFunctions[v113].curValue[1]) )
    {
      v113 = v111;
      v114 = v111++;
      v114 *= 2i64;
      i[2 * v114] = LODWORD(world->dynamicLightset.basisFunctions[v113].lastValue[0]);
      i[2 * v114 + 1] = LODWORD(world->dynamicLightset.basisFunctions[v113].lastValue[1]);
      i[2 * v114 + 2] = LODWORD(world->dynamicLightset.basisFunctions[v113].lastValue[2]);
    }
    R_FlushResourceTransitions(&state);
    R_ProfBeginNamedEvent(&state, "Dynamic Lightsets");
    views = &world->dynamicLightset.lmData.origTexelsBuffer.view;
    R_SetComputeViews(&state, 0, 1, (const GfxShaderBufferView *const *)&views);
    views = &world->dynamicLightset.lmData.origRecordsBuffer.view;
    R_SetComputeViews(&state, 1, 1, (const GfxShaderBufferView *const *)&views);
    views = &dlsGlob.bfCoeffs[0].view + 2 * v13->smpFrame;
    R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)&views);
    views = &world->dynamicLightset.lmData.bfTexelsBuffer.view;
    R_SetComputeViews(&state, 3, 1, (const GfxShaderBufferView *const *)&views);
    p_view = &gfxBuf.dummyBuffer.view;
    v116 = &world->dynamicLightset.lmData.skipRecordsBuffer.view;
    if ( world->dynamicLightset.lmData.numSkipRecords )
      p_view = &world->dynamicLightset.lmData.palletteRecordsBuffer.view;
    else
      v116 = &gfxBuf.dummyBuffer.view;
    views = p_view;
    R_SetComputeViews(&state, 4, 1, (const GfxShaderBufferView *const *)&views);
    views = v116;
    R_SetComputeViews(&state, 5, 1, (const GfxShaderBufferView *const *)&views);
    v117 = 0;
    v172 = 0;
    if ( world->dynamicLightset.lmData.numLMHave )
    {
      while ( 2 )
      {
        v118 = v117;
        v119 = world->dynamicLightset.lmData.chunkWhichLM[v117];
        v120 = world->draw.lightmapTransientIndex[v119];
        forceUpdate = dlsGlob.transientForceUpdate[v120];
        if ( !(_DWORD)v120 )
          goto LABEL_84;
        if ( (unsigned int)v120 >= 0x600 )
        {
          LODWORD(slice) = 1536;
          LODWORD(flag) = v120;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", flag, slice) )
            __debugbreak();
          v117 = v172;
        }
        if ( ((0x80000000 >> (v120 & 0x1F)) & dataa->transientVisibility.array[v120 >> 5]) == 0 )
        {
          v13 = dataa;
        }
        else
        {
LABEL_84:
          chunkLMStart = world->dynamicLightset.lmData.chunkLMStart;
          Px = 0.0;
          v122 = chunkLMStart[v118];
          v123 = chunkLMStart[v117 + 1] - v122;
          numChunk = v123;
          if ( !RB_GetLightimapPacking(GFX_LIGHTMAP_TYPE_AB_LIGHTING, v119, &x, &y, (unsigned int *)&views, height, &v187) )
            goto LABEL_127;
          if ( (unsigned __int16)x != x && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 569, ASSERT_TYPE_ASSERT, "(( x & 0xFFFF ) == x)", (const char *)&queryFormat, "( x & 0xFFFF ) == x") )
            __debugbreak();
          v124 = y;
          if ( (unsigned __int16)y != y )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 570, ASSERT_TYPE_ASSERT, "(( y & 0xFFFF ) == y)", (const char *)&queryFormat, "( y & 0xFFFF ) == y") )
              __debugbreak();
            v124 = y;
          }
          v13 = dataa;
          v125 = x | (v124 << 16);
          v184 = v125;
          LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)GetLightmapAtlasTextureSliceRWView(dataa, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 1u, v187);
          R_SetComputeTextureRWViews(&state, 0, 1, (const GfxShaderTextureRWView *const *)&LightmapAtlasTextureSliceRWView);
          LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)GetLightmapAtlasTextureSliceRWView(v13, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 2u, v187);
          R_SetComputeTextureRWViews(&state, 1, 1, (const GfxShaderTextureRWView *const *)&LightmapAtlasTextureSliceRWView);
          chunkGLM = world->dynamicLightset.lmData.chunkGLM;
          v127 = world->dynamicLightset.basisFunctions;
          chunkGLMBF = world->dynamicLightset.lmData.chunkGLMBF;
          LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)(3 * v122);
          if ( RB_GetNextGChunks(v123, &chunkGLM[v122], chunkGLMBF, v127, (unsigned int *)&Px, copySet, &optSet, mixedSet, heavySet, &copySlot, &optSlot, &mixedSlot, &heavySlot, forceUpdate) )
          {
            do
            {
              v129 = copySlot;
              if ( copySlot )
              {
                R_ProfBeginNamedEvent(&state, "lm copy");
                R_SetComputeShader(&state, rgp.dynLightsetsOptCopyToLM);
                if ( (_DWORD)v129 )
                {
                  v130 = copySet;
                  do
                  {
                    v131 = world->dynamicLightset.lmData.chunkGLM;
                    v132 = (unsigned int)v122 + *v130;
                    v195[0] = v131[(unsigned int)v122 + *v130].chunkInfo.numRecords;
                    v195[1] = v131[v132].chunkInfo.orgStart;
                    v195[2] = v125;
                    if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                      Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                    R_UploadAndSetComputeConstants(&state, 0, v195, 0x10u, NULL);
                    R_Dispatch(&state, (unsigned int)(v195[0] + 63) >> 6, 1u, 1u);
                    ++v130;
                    --v129;
                  }
                  while ( v129 );
                }
                R_ProfEndNamedEvent(&state);
              }
              v133 = optSlot;
              v134 = heavySlot;
              v135 = mixedSlot;
              if ( optSlot || mixedSlot || heavySlot )
              {
                v193 = v125;
                if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                  Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                R_UploadAndSetComputeConstants(&state, 0, &v193, 0x10u, NULL);
                v136 = -1;
                if ( (_DWORD)v133 )
                {
                  R_ProfBeginNamedEvent(&state, "lm opt blend");
                  p_deltaBits = &optSet.deltaBits;
                  v138 = v133;
                  do
                  {
                    v139 = world->dynamicLightset.lmData.chunkGLM;
                    v140 = *(p_deltaBits - 2);
                    numRecords = v139[(unsigned int)(v122 + v140)].chunkInfo.numRecords;
                    orgStart = v139[(unsigned int)(v122 + v140)].chunkInfo.orgStart;
                    bfStart = v139[(unsigned int)(v122 + v140)].chunkInfo.bfStart;
                    tmpStart = *p_deltaBits;
                    if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                      Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                    R_UploadAndSetComputeConstants(&state, 1, &numRecords, 0x10u, NULL);
                    v141 = *(p_deltaBits - 1) - 1;
                    if ( v141 != v136 )
                    {
                      R_SetComputeShader(&state, rgp.dynLightsetsOptBlendToLM[v141]);
                      v136 = v141;
                    }
                    R_Dispatch(&state, (numRecords + 63) >> 6, 1u, 1u);
                    p_deltaBits += 3;
                    --v138;
                  }
                  while ( v138 );
                  v135 = mixedSlot;
                  v134 = heavySlot;
                  R_ProfEndNamedEvent(&state);
                }
                if ( (_DWORD)v135 )
                {
                  R_ProfBeginNamedEvent(&state, "lm mixed blend");
                  R_SetComputeShader(&state, rgp.dynLightsetsOpt5to8LM);
                  v142 = mixedSet;
                  do
                  {
                    v143 = world->dynamicLightset.lmData.chunkGLM;
                    v144 = (unsigned int)v122 + *v142;
                    numRecords = v143[(unsigned int)v122 + *v142].chunkInfo.numRecords;
                    orgStart = v143[v144].chunkInfo.orgStart;
                    bfStart = v143[v144].chunkInfo.bfStart;
                    tmpStart = v143[v144].chunkInfo.tmpStart;
                    if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                      Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                    R_UploadAndSetComputeConstants(&state, 1, &numRecords, 0x10u, NULL);
                    R_Dispatch(&state, (numRecords + 63) >> 6, 1u, 1u);
                    ++v142;
                    --v135;
                  }
                  while ( v135 );
                  R_ProfEndNamedEvent(&state);
                }
                if ( v134 )
                {
                  R_ProfBeginNamedEvent(&state, "lm large blend");
                  R_SetComputeShader(&state, rgp.dynLightsetsOpt9to16LM);
                  v145 = heavySet;
                  v146 = v134;
                  do
                  {
                    v147 = (unsigned int)v122 + *v145;
                    v148 = world->dynamicLightset.lmData.chunkGLM;
                    numRecords = v148[(unsigned int)v122 + *v145].chunkInfo.numRecords;
                    orgStart = v148[v147].chunkInfo.orgStart;
                    bfStart = v148[v147].chunkInfo.bfStart;
                    tmpStart = v148[v147].chunkInfo.tmpStart;
                    if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
                      Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
                    R_UploadAndSetComputeConstants(&state, 1, &numRecords, 0x10u, NULL);
                    R_Dispatch(&state, (numRecords + 63) >> 6, 1u, 1u);
                    ++v145;
                    --v146;
                  }
                  while ( v146 );
                  R_ProfEndNamedEvent(&state);
                }
                v125 = v184;
              }
            }
            while ( RB_GetNextGChunks(numChunk, (GfxDynamicLightsetGChunk *)((char *)world->dynamicLightset.lmData.chunkGLM + 8 * (_QWORD)LightmapAtlasTextureSliceRWView), world->dynamicLightset.lmData.chunkGLMBF, world->dynamicLightset.basisFunctions, (unsigned int *)&Px, copySet, &optSet, mixedSet, heavySet, &copySlot, &optSlot, &mixedSlot, &heavySlot, forceUpdate) );
LABEL_127:
            v13 = dataa;
          }
          v117 = v172;
        }
        v172 = ++v117;
        if ( v117 >= world->dynamicLightset.lmData.numLMHave )
        {
          v106 = v182;
          break;
        }
        continue;
      }
    }
    R_ComputeWaitForCompute(&state, PIPE_FLUSH_FULL);
    v149 = R_GetLightmapAtlasTexture(v13, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 1u);
    v150 = R_Texture_GetResident(v149->textureId);
    R_HW_AddResourceTransition(&state, v150, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, v106, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v151 = R_GetLightmapAtlasTexture(v13, GFX_LIGHTMAP_TYPE_AB_LIGHTING, 2u);
    v152 = R_Texture_GetResident(v151->textureId);
    R_HW_AddResourceTransition(&state, v152, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, v106, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(&state);
    if ( world->draw.lightGridType != GFX_LIGHTGRID_TYPE_SINGLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 1233, ASSERT_TYPE_ASSERT, "(( world->draw.lightGridType == GFX_LIGHTGRID_TYPE_SINGLE ) && \"Transient GpuLightGrids not yet supported on levels with A/B lighting!\")", (const char *)&queryFormat, "( world->draw.lightGridType == GFX_LIGHTGRID_TYPE_SINGLE ) && \"Transient GpuLightGrids not yet supported on levels with A/B lighting!\"") )
      __debugbreak();
    if ( R_GetNumActiveLightGrids(v13) > 0 )
    {
      if ( R_GetNumActiveLightGrids(v13) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_dynamic_lightsets.cpp", 1237, ASSERT_TYPE_ASSERT, "(R_GetNumActiveLightGrids( data ) == 1)", (const char *)&queryFormat, "R_GetNumActiveLightGrids( data ) == 1") )
        __debugbreak();
      v153 = (__int64)*R_GetActiveLightGridsList(v13);
      R_HW_AddResourceTransition(&state, (const GfxWrappedBuffer *)(v153 + 16), 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(&state);
      LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)(v153 + 48);
      R_SetComputeRWViewsWithCounters(&state, 0, 1, (const GfxShaderBufferRWView *const *)&LightmapAtlasTextureSliceRWView, NULL);
      LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)&world->dynamicLightset.lgProbeData.tempRemapBuffer.view;
      R_SetComputeViews(&state, 8, 1, (const GfxShaderBufferView *const *)&LightmapAtlasTextureSliceRWView);
      v194 = 0ui64;
      v193 = 0ui64;
      LODWORD(v194) = world->dynamicLightset.lgProbeData.origStart;
      if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
        Sys_Error((const ObfuscateErrorText)&stru_143DB8680, (unsigned int)state.computeContextType);
      R_UploadAndSetComputeConstants(&state, 0, &v193, 0x20u, NULL);
      RB_DynamicLightsets_UpdateProbesNew(world, v13, &state, &world->dynamicLightset.lgProbeData, 0, 0, 0);
      R_HW_AddResourceTransition(&state, (const GfxWrappedBuffer *)(v153 + 16), 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(&state);
    }
    LightGridVolumeAtlasTexture = R_GetLightGridVolumeAtlasTexture(v13, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
    v155 = R_Texture_GetResident(LightGridVolumeAtlasTexture->textureId);
    R_HW_AddResourceTransition(&state, v155, 0xFFFFFFFF, v106, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v156 = R_GetLightGridVolumeAtlasTexture(v13, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
    v157 = R_Texture_GetResident(v156->textureId);
    R_HW_AddResourceTransition(&state, v157, 0xFFFFFFFF, v106, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(&state);
    v158 = 0;
    if ( v13->transientDrawContext.zoneCount )
    {
      do
      {
        v159 = dataa;
        v160 = dataa->transientDrawContext.dynLightSets[v158];
        if ( v160 && v160->lgvProbeData.numGChunk )
        {
          v161 = R_GetLightGridVolumeAtlasTexture(dataa, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
          LightmapAtlasTextureSliceRWView = (GfxShaderTextureRWView *)R_Texture_GetResident(v161->textureId);
          R_SetComputeRWTextures(&state, 1, 1, (const GfxTexture *const *)&LightmapAtlasTextureSliceRWView);
          v162 = R_GetLightGridVolumeAtlasTexture(v159, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
          views = (GfxShaderBufferView *)R_Texture_GetResident(v162->textureId);
          R_SetComputeRWTextures(&state, 2, 1, (const GfxTexture *const *)&views);
          *(_QWORD *)height = &R_GetLightGridVolumesAtlasPackingParamsBuffer(v159)->view;
          R_SetComputeViews(&state, 2, 1, (const GfxShaderBufferView *const *)height);
          *(_QWORD *)height = &R_GetLightGridVolumesAtlasTransientPackingBuffer(v159)->view;
          R_SetComputeViews(&state, 4, 1, (const GfxShaderBufferView *const *)height);
          *(_QWORD *)height = &v160->lgvReferencesBuffer.view;
          R_SetComputeViews(&state, 3, 1, (const GfxShaderBufferView *const *)height);
          *(_QWORD *)height = &gfxBuf.dummyRWBuffer.rwView;
          R_SetComputeRWViewsWithCounters(&state, 0, 1, (const GfxShaderBufferRWView *const *)height, NULL);
          *(_QWORD *)height = &v160->lgvProbeData.tempRemapBuffer.view;
          R_SetComputeViews(&state, 8, 1, (const GfxShaderBufferView *const *)height);
          LODWORD(v194) = v160->lgvProbeData.origStart;
          *(_QWORD *)((char *)&v193 + 4) = 64i64;
          *(_QWORD *)((char *)&v194 + 4) = 0i64;
          HIDWORD(v194) = 0;
          HIDWORD(v193) = v158;
          LODWORD(v193) = 64;
          DWORD2(v193) = R_GetLightGridVolumesAtlasTextureDepth(v159);
          if ( !R_ComputeCheckReserveDescriptorHeaps(&state) )
            Sys_Error((const ObfuscateErrorText)&stru_143DB8A20, (unsigned int)state.computeContextType);
          R_UploadAndSetComputeConstants(&state, 0, &v193, 0x20u, NULL);
          v13 = v159;
          RB_DynamicLightsets_UpdateProbesNew(world, v159, &state, &v160->lgvProbeData, 1, v158, dlsGlob.transientForceUpdate[v158]);
        }
        else
        {
          v13 = dataa;
        }
        ++v158;
      }
      while ( v158 < v13->transientDrawContext.zoneCount );
      v106 = v182;
    }
    v163 = R_GetLightGridVolumeAtlasTexture(v13, LIGHTGRID_VOLUME_ATLAS_TEXTURE_DC);
    v164 = R_Texture_GetResident(v163->textureId);
    R_HW_AddResourceTransition(&state, v164, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, v106, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    v165 = R_GetLightGridVolumeAtlasTexture(v13, LIGHTGRID_VOLUME_ATLAS_TEXTURE_HIGH_BANDS);
    v166 = R_Texture_GetResident(v165->textureId);
    R_HW_AddResourceTransition(&state, v166, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, v106, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  unsigned int *v14; 
  unsigned int *v16; 
  unsigned int *v18; 
  unsigned int *v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  char v24; 
  __int64 v25; 
  GfxDynamicLightsetGChunkFlags flags; 
  unsigned int v27; 
  __int16 v28; 
  char v29; 
  bool v30; 
  char v31; 
  unsigned int v32; 
  unsigned int bfChunkStart; 
  unsigned int numBFActive; 
  unsigned int v35; 
  unsigned int v36; 
  __int64 v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v42; 

  v14 = optSlot;
  v16 = mixedSlot;
  v18 = heavySlot;
  v20 = copySlot;
  *heavySlot = 0;
  *mixedSlot = 0;
  *optSlot = 0;
  *copySlot = 0;
  v21 = *activeIndex;
  if ( (unsigned int)v21 < numChunk )
  {
    while ( 1 )
    {
      if ( *v20 >= 0x40 )
        return *v14 || *v16 || *v20 || *v18;
      v22 = *v14;
      if ( (unsigned int)v22 >= 0x40 || *v16 >= 0x40 || *v18 >= 0x40 )
        return *v14 || *v16 || *v20 || *v18;
      v23 = v21;
      v24 = 0;
      v25 = v22;
      flags = chunks[v21].flags;
      v27 = (unsigned __int8)flags;
      v28 = (unsigned __int16)flags >> 12;
      v29 = 0;
      v30 = (flags & 0x800) != 0;
      optSet[v25].numBFActive = 0;
      v31 = v28 & 1;
      v42 = v27;
      optSet[v25].whichChunk = *activeIndex;
      optSet[v25].deltaBits = 0;
      if ( v31 )
      {
        optSet[v22].deltaBits = 16434824;
        optSet[v22].numBFActive = (((unsigned __int16)chunks[v23].flags >> 8) & 7) + 1;
      }
      v32 = 0;
      if ( v27 >= 4 )
      {
        do
        {
          bfChunkStart = chunks[v23].bfChunkStart;
          if ( forceUpdate || bfData[bfList[bfChunkStart + v32]].curValue[1] != 0.0 )
            v24 = 1;
          if ( bfData[bfList[bfChunkStart + v32]].curValue[0] > 0.0 )
          {
            v29 = 1;
            if ( v30 )
            {
              numBFActive = optSet[v22].numBFActive;
              optSet[v22].deltaBits |= v32 << (3 * numBFActive);
              optSet[v22].numBFActive = numBFActive + 1;
              bfChunkStart = chunks[v23].bfChunkStart;
            }
            else if ( v24 )
            {
              goto LABEL_50;
            }
          }
          if ( forceUpdate || bfData[bfList[bfChunkStart + 1 + v32]].curValue[1] != 0.0 )
            v24 = 1;
          if ( bfData[bfList[bfChunkStart + 1 + v32]].curValue[0] > 0.0 )
          {
            v29 = 1;
            if ( v30 )
            {
              v35 = optSet[v22].numBFActive;
              optSet[v22].deltaBits |= (v32 + 1) << (3 * v35);
              optSet[v22].numBFActive = v35 + 1;
              bfChunkStart = chunks[v23].bfChunkStart;
            }
            else if ( v24 )
            {
              goto LABEL_50;
            }
          }
          if ( forceUpdate || bfData[bfList[bfChunkStart + 2 + v32]].curValue[1] != 0.0 )
            v24 = 1;
          if ( bfData[bfList[bfChunkStart + 2 + v32]].curValue[0] > 0.0 )
          {
            v29 = 1;
            if ( v30 )
            {
              v36 = optSet[v22].numBFActive;
              optSet[v22].deltaBits |= (v32 + 2) << (3 * v36);
              optSet[v22].numBFActive = v36 + 1;
              bfChunkStart = chunks[v23].bfChunkStart;
            }
            else if ( v24 )
            {
              goto LABEL_50;
            }
          }
          v37 = bfList[bfChunkStart + 3 + v32];
          if ( forceUpdate || bfData[(unsigned int)v37].curValue[1] != 0.0 )
            v24 = 1;
          if ( bfData[v37].curValue[0] > 0.0 )
          {
            v29 = 1;
            if ( v30 )
            {
              v38 = optSet[v22].numBFActive;
              optSet[v22].deltaBits |= (v32 + 3) << (3 * v38);
              optSet[v22].numBFActive = v38 + 1;
            }
            else if ( v24 )
            {
              goto LABEL_50;
            }
          }
          v27 = v42;
          v32 += 4;
        }
        while ( v32 < v42 - 3 );
      }
      for ( ; v32 < v27; ++v32 )
      {
        if ( forceUpdate || bfData[bfList[v32 + chunks[v23].bfChunkStart]].curValue[1] != 0.0 )
          v24 = 1;
        if ( bfData[bfList[v32 + chunks[v23].bfChunkStart]].curValue[0] > 0.0 )
        {
          v29 = 1;
          if ( v30 )
          {
            v39 = optSet[v22].numBFActive;
            optSet[v22].deltaBits |= v32 << (3 * v39);
            optSet[v22].numBFActive = v39 + 1;
          }
          else if ( v24 )
          {
            goto LABEL_50;
          }
        }
      }
      if ( !v24 )
        break;
      if ( v29 )
      {
        if ( !v30 )
        {
LABEL_50:
          if ( !v31 )
          {
            v16 = mixedSlot;
            v18 = heavySlot;
            v14 = optSlot;
            v40 = *activeIndex;
            if ( (chunks[v23].flags & 0x2000) != 0 )
              mixedSet[(*mixedSlot)++] = v40;
            else
              heavySet[(*heavySlot)++] = v40;
            goto LABEL_58;
          }
        }
        v14 = optSlot;
        ++*optSlot;
LABEL_57:
        v16 = mixedSlot;
        v18 = heavySlot;
LABEL_58:
        v20 = copySlot;
        goto LABEL_59;
      }
      v20 = copySlot;
      v16 = mixedSlot;
      v14 = optSlot;
      copySet[(*copySlot)++] = *activeIndex;
      v18 = heavySlot;
LABEL_59:
      v21 = *activeIndex + 1;
      *activeIndex = v21;
      if ( (unsigned int)v21 >= numChunk )
        return *v14 || *v16 || *v20 || *v18;
    }
    v14 = optSlot;
    goto LABEL_57;
  }
  return *v14 || *v16 || *v20 || *v18;
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
  dlsGlob.portalGIquats[(unsigned __int64)(smpFrame & 1)][whichSlot] = *quat;
}


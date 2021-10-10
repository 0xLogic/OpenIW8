/*
==============
R_SpotShadow_Blur
==============
*/

void __fastcall R_SpotShadow_Blur(ComputeCmdBufState *state, R_RT_ColorHandle *src, R_RT_ColorHandle *dst, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs, const GfxSpotShadowUpdate *spotShadowUpdate, unsigned int islice)
{
  ?R_SpotShadow_Blur@@YAXPEAUComputeCmdBufState@@VR_RT_ColorHandle@@1VR_RT_BufferHandle@@22PEBUGfxSpotShadowUpdate@@I@Z(state, src, dst, htileMask, htileMaskCounter, htileMaskIndirectArgs, spotShadowUpdate, islice);
}

/*
==============
R_SpotShadow_GetComputeShaderIndex
==============
*/

SpotComputerShaderIndex __fastcall R_SpotShadow_GetComputeShaderIndex(R_RT_DepthHandle *depth)
{
  return ?R_SpotShadow_GetComputeShaderIndex@@YA?AW4SpotComputerShaderIndex@@VR_RT_DepthHandle@@@Z(depth);
}

/*
==============
RB_SpotShadowMap
==============
*/

void __fastcall RB_SpotShadowMap(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  ?RB_SpotShadowMap@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@I@Z(gfxContext, data, viewInfo, spotShadowUpdateIndex);
}

/*
==============
R_SpotShadow_DrawOverlay
==============
*/

void __fastcall R_SpotShadow_DrawOverlay(GfxCmdBufContext *gfxContext, int overlayType, const R_RT_ColorHandle *spotshadowsActiveCache, const R_RT_DepthHandle *spotshadowsStaleCache)
{
  ?R_SpotShadow_DrawOverlay@@YAXUGfxCmdBufContext@@HVR_RT_ColorHandle@@VR_RT_DepthHandle@@@Z(gfxContext, overlayType, spotshadowsActiveCache, spotshadowsStaleCache);
}

/*
==============
RB_SpotShadowMaps
==============
*/

void __fastcall RB_SpotShadowMaps(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?RB_SpotShadowMaps@@YAXUGfxCmdBufContext@@PEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(gfxContext, data, viewInfo);
}

/*
==============
R_SpotShadow_Downsample
==============
*/

void __fastcall R_SpotShadow_Downsample(ComputeCmdBufState *state, R_RT_ColorHandle *dstArray, R_RT_DepthHandle *staticShadowsCache, R_RT_DepthHandle *dynamicShadowsArray, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs, const GfxSpotShadowUpdate *spotShadowUpdate, bool useArrayBindings, unsigned int islice)
{
  ?R_SpotShadow_Downsample@@YAXPEAUComputeCmdBufState@@VR_RT_ColorHandle@@VR_RT_DepthHandle@@2VR_RT_BufferHandle@@33PEBUGfxSpotShadowUpdate@@_NI@Z(state, dstArray, staticShadowsCache, dynamicShadowsArray, htileMask, htileMaskCounter, htileMaskIndirectArgs, spotShadowUpdate, useArrayBindings, islice);
}

/*
==============
RB_DrawSpotShadowOverlayExtents
==============
*/
void RB_DrawSpotShadowOverlayExtents(GfxCmdBufContext *gfxContext, unsigned int spotShadowIndex, float x0, float y0, float ratio, const GfxExtents2D *extents)
{
  __int64 v6; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  GfxCmdBufContext v12; 
  int v14; 
  GfxPointVertex v15; 
  float v16; 
  float v17; 
  float v18; 
  int v19; 
  float v20; 
  float v21; 
  float v22; 
  int v23; 
  float v24; 
  float v25; 
  float v26; 
  int v27; 
  float v28; 
  float v29; 
  float v30; 
  int v31; 
  float v32; 
  float v33; 
  float v34; 
  int v35; 
  float v36; 
  float v37; 
  float v38; 
  int v39; 
  float v40; 
  float v41; 
  float v42; 
  int v43; 
  GfxCmdBufContext v44; 
  int v45; 
  __int64 v46; 
  int v47; 

  v6 = spotShadowIndex;
  v44.source = (GfxCmdBufSourceState *)0xFF00FF00FF0000FFi64;
  v44.state = (GfxCmdBufState *)0xFF00FFFFFFFF0000i64;
  v45 = -65281;
  v46 = -256i64;
  v47 = -16777088;
  if ( spotShadowIndex >= 8 )
  {
    v14 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 409, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowIndex ) < (unsigned)( R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT )", "spotShadowIndex doesn't index R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT\n\t%i not in [0, %i)", spotShadowIndex, v14) )
      __debugbreak();
  }
  *(_DWORD *)v15.color = *((unsigned __int8 *)&v44.source + 4 * v6) | ((*((unsigned __int8 *)&v44.source + 4 * v6 + 1) | ((*((unsigned __int8 *)&v44.source + 4 * v6 + 2) | (*((unsigned __int8 *)&v44.source + 4 * v6 + 3) << 8)) << 8)) << 8);
  v19 = *(_DWORD *)v15.color;
  v23 = *(_DWORD *)v15.color;
  *(float *)&v8 = (float)(ratio * extents->minX) + x0;
  *(float *)&v9 = (float)(ratio * extents->minY) + y0;
  *(float *)&v10 = (float)(ratio * extents->maxX) + x0;
  *(float *)&v11 = (float)(ratio * extents->maxY) + y0;
  v12 = *gfxContext;
  v27 = *(_DWORD *)v15.color;
  v31 = *(_DWORD *)v15.color;
  v35 = *(_DWORD *)v15.color;
  v39 = *(_DWORD *)v15.color;
  v43 = *(_DWORD *)v15.color;
  v44 = v12;
  v15.xyz.v[0] = *(float *)&v8;
  v15.xyz.v[1] = *(float *)&v9;
  v15.xyz.v[2] = FLOAT_1_0;
  v16 = *(float *)&v10;
  v17 = *(float *)&v9;
  v18 = FLOAT_1_0;
  v20 = *(float *)&v10;
  v21 = *(float *)&v9;
  v22 = FLOAT_1_0;
  v24 = *(float *)&v10;
  v25 = *(float *)&v11;
  v26 = FLOAT_1_0;
  v28 = *(float *)&v10;
  v29 = *(float *)&v11;
  v30 = FLOAT_1_0;
  v32 = *(float *)&v8;
  v33 = *(float *)&v11;
  v34 = FLOAT_1_0;
  v36 = *(float *)&v8;
  v37 = *(float *)&v11;
  v38 = FLOAT_1_0;
  v40 = *(float *)&v8;
  v41 = *(float *)&v9;
  v42 = FLOAT_1_0;
  RB_DrawLines2D(&v44, 4, 1, &v15);
}

/*
==============
RB_DrawSpotShadowOverlayItem
==============
*/
void RB_DrawSpotShadowOverlayItem(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, int overlayType, const GfxSpotShadow *spotShadow, unsigned int spotShadowIndex, float x0, float y0, float imageWidth, const R_RT_ColorHandle *spotshadowsStaleCache, const R_RT_DepthHandle *spotshadowActiveCache)
{
  __int128 v10; 
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  unsigned int sceneLightIndex; 
  bool v19; 
  R_SpotShadow_ActiveCacheEntry *ActiveCacheEntryForSceneLight; 
  __int64 v21; 
  R_SpotShadow_ActiveCacheEntry *v22; 
  int v23; 
  float v24; 
  float v25; 
  float v26; 
  unsigned int primaryLightCount; 
  const char *v28; 
  unsigned int v29; 
  GfxSpotShadowUpdate *v30; 
  unsigned int v31; 
  unsigned int spotShadowUpdateCount; 
  __int64 v33; 
  float v34; 
  const R_RT_Surface *Surface; 
  unsigned int arraySliceIndex; 
  const char *v37; 
  GfxCmdBufSourceState *source; 
  __m128 v; 
  float v40; 
  float v41; 
  float v42; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v44; 
  GfxCmdBufState *state; 
  __int64 v46; 
  const char *v47; 
  __int128 v48; 
  float bulbRadius; 
  __m128 v50; 
  float cosHalfFovOuter; 
  __int128 v52; 
  float v56; 
  float v57; 
  __int128 v58; 
  const char *v61; 
  GfxCmdBufSourceState *v62; 
  __int128 v64; 
  float v66; 
  float v67; 
  GfxCmdBufInput *v68; 
  GfxCmdBufContext v69; 
  GfxCmdBufState *v70; 
  char v71; 
  float MapSize; 
  float v73; 
  const char *v74; 
  float v75; 
  float v76; 
  float v77; 
  GfxColor v78; 
  __int64 v79; 
  R_SpotShadow_StaleCacheEntry *staleCacheEntry; 
  GfxColor v81; 
  __int64 v82; 
  GfxFont *debugFont; 
  const char *v84; 
  float v85; 
  const char *v86; 
  float v87; 
  float v88; 
  __int64 bspUpdateCount; 
  GfxFont *v90; 
  const char *v91; 
  const char *v92; 
  __int64 smodelUpdateCount; 
  GfxFont *v94; 
  const char *v95; 
  const char *v96; 
  __int64 smodelLODUpdateCount; 
  GfxFont *v98; 
  const char *v99; 
  const char *v100; 
  unsigned __int16 missingTransientBSP; 
  __int64 updateCount; 
  GfxFont *v105; 
  const char *v106; 
  const char *v107; 
  __int64 v108; 
  GfxFont *v109; 
  const char *v110; 
  const char *v111; 
  __int64 maskedUpdateCount; 
  GfxFont *v113; 
  const char *v114; 
  const char *v115; 
  unsigned __int16 v116; 
  GfxFont *v117; 
  const char *v118; 
  const char *v119; 
  __int64 missingSModelLOD; 
  __int64 missingTransientSModel; 
  GfxFont *v122; 
  const char *v123; 
  const char *v124; 
  const char *v125; 
  unsigned int dynUpdateCount; 
  GfxFont *v127; 
  const char *v128; 
  const char *v129; 
  __int64 v130; 
  GfxFont *v131; 
  const char *v132; 
  const char *v133; 
  GfxFont *v134; 
  const char *v135; 
  const char *v136; 
  const dvar_t *v137; 
  float score; 
  __int64 v139; 
  float v140; 
  GfxFont *v141; 
  const char *v142; 
  double v143; 
  const char *v144; 
  const char *v145; 
  char *fmt; 
  char *fmta; 
  __int64 v148; 
  char v149; 
  bool v150; 
  unsigned int v151; 
  unsigned int v152; 
  const char *v153; 
  __int64 v154; 
  __int64 v155; 
  R_RT_Image *p_m_image; 
  __int64 v157; 
  float v158; 
  float v160; 
  unsigned int subAtlasIndex; 
  float v162; 
  unsigned int v165; 
  float4 result[2]; 
  R_RT_Handle v167; 
  __int128 v168; 
  __int128 v169; 
  __int128 v170; 
  __int128 v171; 
  __int128 v172; 

  sceneLightIndex = spotShadow->sceneLightIndex;
  v172 = v10;
  v170 = v12;
  v169 = v13;
  v168 = v14;
  v19 = (unsigned int)(overlayType - 6) <= 1;
  v150 = v19;
  ActiveCacheEntryForSceneLight = R_SpotShadow_GetActiveCacheEntryForSceneLight(sceneLightIndex);
  v21 = spotShadow->sceneLightIndex;
  v22 = ActiveCacheEntryForSceneLight;
  v23 = 1;
  if ( v22 )
    v23 = v19 + 1;
  v24 = (float)((unsigned int)v19 + 1);
  v25 = v24 * imageWidth;
  v26 = (float)v19;
  v151 = v23;
  v154 = v21;
  primaryLightCount = rgp.world->primaryLightCount;
  v160 = (float)(v25 + (float)(v26 * 2.0)) + 18.0;
  if ( (unsigned int)v21 >= primaryLightCount )
  {
    v28 = "D";
  }
  else
  {
    v28 = "Ps";
    if ( data->sceneLights[v21].needsDynamicShadows )
      v28 = "P";
  }
  v153 = v28;
  *(GfxCmdBufContext *)&v167.m_surfaceID = *gfxContext;
  if ( (unsigned int)v21 >= primaryLightCount )
    LODWORD(v21) = v21 - primaryLightCount;
  v165 = v21;
  RB_SetUIColorimetryParams((GfxCmdBufContext *)&v167);
  v29 = 0;
  v30 = NULL;
  v149 = 0;
  v31 = 0;
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount )
  {
    while ( 1 )
    {
      v33 = v31;
      v30 = &data->spotShadowUpdates[v33];
      if ( data->spotShadowUpdates[v33].sceneLightIndex == spotShadow->sceneLightIndex )
        break;
      if ( ++v31 >= spotShadowUpdateCount )
        goto LABEL_13;
    }
    v34 = y0;
    v75 = (float)v151;
    *(GfxCmdBufContext *)&v167.m_surfaceID = *gfxContext;
    v76 = (float)(v151 - 1);
    RB_DrawRect2D((GfxCmdBufContext *)&v167, x0 - 2.0, y0 - 2.0, imageWidth + 4.0, (float)((float)(v75 * imageWidth) + (float)(v76 * 2.0)) + 4.0, (const GfxColor)-16711936);
    *(GfxCmdBufContext *)&v167.m_surfaceID = *gfxContext;
    RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v167, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(498)");
    v149 = 1;
  }
  else
  {
LABEL_13:
    v34 = y0;
  }
  Surface = R_RT_Handle::GetSurface(&spotshadowsStaleCache->R_RT_Handle);
  arraySliceIndex = spotShadow->arraySliceIndex;
  subAtlasIndex = spotShadow->subAtlasIndex;
  *(_QWORD *)&v167.m_surfaceID = &Surface->m_image;
  v152 = arraySliceIndex;
  if ( arraySliceIndex >= Surface->m_image.m_base.numElements && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 512, ASSERT_TYPE_ASSERT, "(slice < shadowArray->numElements)", (const char *)&queryFormat, "slice < shadowArray->numElements") )
    __debugbreak();
  R_SpotShadow_GetAtlasUVOffsetAndScale(result, spotShadow);
  LODWORD(fmt) = subAtlasIndex;
  v37 = j_va("%s light(%d) shadow slice(%d,%d)", v153, (unsigned int)v21, v152, fmt);
  R_ProfBeginNamedEvent(gfxContext->state, v37);
  source = gfxContext->source;
  if ( 1.0 != gfxContext->source->input.consts[16].v[0] || source->input.consts[16].v[1] != 0.0 || source->input.consts[16].v[2] != 0.0 || source->input.consts[16].v[3] != 0.0 )
  {
    *(_QWORD *)source->input.consts[16].v = 1065353216i64;
    *(_QWORD *)&source->input.consts[16].xyz.z = 0i64;
    ++source->constVersions[16];
  }
  v = result[0].v;
  v40 = (float)v152;
  LODWORD(v41) = _mm_shuffle_ps(v, v, 170).m128_u32[0];
  LODWORD(v42) = _mm_shuffle_ps(v, v, 85).m128_u32[0];
  if ( v40 != source->input.consts[17].v[0] || result[0].v.m128_f32[0] != source->input.consts[17].v[1] || v42 != source->input.consts[17].v[2] || v41 != source->input.consts[17].v[3] )
  {
    source->input.consts[17].v[0] = v40;
    source->input.consts[17].v[1] = v.m128_f32[0];
    source->input.consts[17].v[2] = v42;
    source->input.consts[17].v[3] = v41;
    ++source->constVersions[17];
  }
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v44 = *gfxContext;
  p_input->codeImages[4] = *(const GfxImage **)&v167.m_surfaceID;
  *(GfxCmdBufContext *)&v167.m_surfaceID = v44;
  RB_DrawStretchPic((GfxCmdBufContext *)&v167, rgp.shadowArrayOverlayMaterial, x0, v34, imageWidth, imageWidth, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
  *(GfxCmdBufContext *)&v167.m_surfaceID = *gfxContext;
  RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v167, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(520)");
  state = gfxContext->state;
  R_ProfEndNamedEvent(state);
  if ( v150 && v22 )
  {
    v171 = v11;
    *(__m256i *)result[0].v.m128_f32 = *(__m256i *)spotshadowActiveCache;
    R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(v22, (const R_RT_DepthHandle *)&v167, (R_SpotShadow_ActiveCacheSubsetID)(overlayType != 6), (R_RT_DepthHandle *)result);
    v46 = v154 * 152;
    v47 = "BSP + smodel";
    v48 = *(unsigned __int64 *)data->sceneLights[v154].bulbLength.v;
    bulbRadius = data->sceneLights[v154].bulbRadius;
    v50 = (__m128)*(unsigned __int64 *)data->sceneLights[v154].dir.v;
    cosHalfFovOuter = data->sceneLights[v154].cosHalfFovOuter;
    v158 = data->sceneLights[v154].bulbLength.v[2];
    v52 = v48;
    v162 = data->sceneLights[v154].dir.v[2];
    v155 = *(_QWORD *)data->sceneLights[v154].bulbLength.v;
    *(float *)&v52 = fsqrt((float)((float)(*(float *)&v48 * *(float *)&v48) + (float)(*((float *)&v155 + 1) * *((float *)&v155 + 1))) + (float)(v158 * v158));
    _XMM3 = v52;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm12, xmm0
    }
    v58 = LODWORD(FLOAT_1_0);
    *(float *)&v48 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * *(float *)&v48) * bulbRadius) + *(float *)&v48;
    *(float *)&v58 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * *((float *)&v155 + 1)) * bulbRadius) + *((float *)&v155 + 1);
    v56 = (float)((float)((float)(1.0 / *(float *)&_XMM0) * v158) * bulbRadius) + v158;
    LODWORD(v57) = COERCE_UNSIGNED_INT((float)((float)(*(float *)&v58 * _mm_shuffle_ps(v50, v50, 85).m128_f32[0]) + (float)(*(float *)&v48 * v50.m128_f32[0])) + (float)(v56 * v162)) & _xmm;
    *(float *)&v58 = fsqrt((float)((float)((float)(*(float *)&v58 * *(float *)&v58) + (float)(*(float *)&v48 * *(float *)&v48)) + (float)(v56 * v56)) - (float)(v57 * v57)) * cosHalfFovOuter;
    if ( overlayType == 6 )
      v47 = "BSP";
    *(float *)&v58 = (float)((float)((float)(*(float *)&v58 / fsqrt(1.0 - (float)(cosHalfFovOuter * cosHalfFovOuter))) + v57) + v57) + *(float *)((char *)&data->sceneLights[0].shadowNearPlaneBias + v46);
    _XMM1 = v58;
    __asm { vmaxss  xmm7, xmm1, xmm12 }
    LODWORD(fmta) = spotShadow->cacheIndex;
    v61 = j_va("%s light(%d) cached %s shadow(%d)", v153, (unsigned int)v21, v47, fmta);
    R_ProfBeginNamedEvent(state, v61);
    v62 = gfxContext->source;
    v64 = _XMM7;
    *(float *)&v64 = *(float *)&_XMM7 + 1.0;
    _XMM0 = v64;
    __asm { vmaxss  xmm1, xmm0, xmm6 }
    LODWORD(v66) = _XMM1 ^ _xmm;
    LODWORD(v67) = _XMM7 ^ _xmm;
    if ( gfxContext->source->input.consts[16].v[0] != 0.0 || v62->input.consts[16].v[1] != 0.0 || v67 != v62->input.consts[16].v[2] || v66 != v62->input.consts[16].v[3] )
    {
      v62->input.consts[16].v[2] = v67;
      v62->input.consts[16].v[3] = v66;
      *(_QWORD *)v62->input.consts[16].v = 0i64;
      ++v62->constVersions[16];
    }
    if ( v62->input.consts[17].v[0] != 0.0 || v62->input.consts[17].v[1] != 0.0 || v62->input.consts[17].v[2] != 0.0 || v62->input.consts[17].v[3] != 0.0 )
    {
      *(_QWORD *)v62->input.consts[17].v = 0i64;
      *(_QWORD *)&v62->input.consts[17].xyz.z = 0i64;
      ++v62->constVersions[17];
    }
    p_m_image = &R_RT_Handle::GetSurface(&v167)->m_image;
    if ( !v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v68 = &v62->input;
    if ( !v68 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    v69 = *gfxContext;
    v34 = y0;
    v68->codeImages[4] = &p_m_image->m_base;
    result[0] = (float4)v69;
    RB_DrawStretchPic((GfxCmdBufContext *)result, rgp.shadowOverlayMaterial, x0, (float)(y0 + imageWidth) + 2.0, imageWidth, imageWidth, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
    result[0] = *(float4 *)gfxContext;
    RB_EndTessSurfaceInternal((GfxCmdBufContext *)result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(547)");
    v70 = gfxContext->state;
    R_ProfEndNamedEvent(v70);
    v71 = v149;
    if ( v149 && v30->smodelsChangedCount )
    {
      MapSize = (float)R_SpotShadow_GetMapSize();
      v73 = (float)(0.5 / MapSize) * imageWidth;
      if ( (v73 <= 0.0 || v73 > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 553, ASSERT_TYPE_ASSERT, "( ( ratio > 0.0f && ratio <= 1.0f ) )", "( ratio ) = %g", v73) )
        __debugbreak();
      v74 = j_va("%s light(%d) cached shadow extents", v153, (unsigned int)v21);
      R_ProfBeginNamedEvent(v70, v74);
      if ( v30->smodelsChangedCount )
      {
        do
        {
          result[0] = *(float4 *)gfxContext;
          RB_DrawSpotShadowOverlayExtents((GfxCmdBufContext *)result, v31, x0, y0, v73, &v30->smodelChangedBoundingBox[v29++]);
        }
        while ( v29 < v30->smodelsChangedCount );
        v70 = gfxContext->state;
      }
      R_ProfEndNamedEvent(v70);
      v71 = v149;
    }
  }
  else
  {
    v71 = v149;
  }
  v77 = v34 + v160;
  v78.packed = -8355712;
  v79 = (unsigned int)v21;
  staleCacheEntry = spotShadow->staleCacheEntry;
  v157 = v79;
  if ( g_lightScore[v79].ranking0 == 255 )
  {
    v81.packed = -8355712;
  }
  else
  {
    v81.packed = -12517632;
    if ( !v71 )
      v81.packed = -12582657;
  }
  if ( imageWidth < 128.0 )
  {
    debugFont = backEnd.debugFont;
    v84 = j_va("%s(%d)", v153, v165);
  }
  else
  {
    if ( v22 )
      v82 = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(v22);
    else
      v82 = 255i64;
    debugFont = backEnd.debugFont;
    LODWORD(v148) = spotShadow->subAtlasIndex;
    LODWORD(fmta) = spotShadow->arraySliceIndex;
    v84 = j_va("%s(%d):%d,%d-%d", v153, v165, v82, fmta, v148);
  }
  v85 = x0 + 1.0;
  v86 = v84;
  result[0] = *(float4 *)gfxContext;
  RB_DrawText((GfxCmdBufContext *)result, v84, debugFont, x0 + 1.0, v77 + 1.0, (const GfxColor)-16777216);
  result[0] = *(float4 *)gfxContext;
  RB_DrawText((GfxCmdBufContext *)result, v86, debugFont, x0, v77, v81);
  v88 = v77 + 18.0;
  v87 = v88;
  if ( v22 )
  {
    bspUpdateCount = v22->bspUpdateCount;
    if ( imageWidth < 128.0 )
    {
      v98 = backEnd.debugFont;
      v99 = j_va("SU:%d,%d,%d", bspUpdateCount, v22->smodelUpdateCount, v22->smodelLODUpdateCount);
      goto LABEL_85;
    }
    if ( (_DWORD)bspUpdateCount )
    {
      v90 = backEnd.debugFont;
      v91 = j_va("bsp U%d F%d", bspUpdateCount, v22->bspUpdateFrame);
      result[0] = *(float4 *)gfxContext;
      v92 = v91;
      RB_DrawText((GfxCmdBufContext *)result, v91, v90, v85, v88 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v92, v90, x0, v88, v81);
      v87 = v88 + 18.0;
    }
    smodelUpdateCount = v22->smodelUpdateCount;
    if ( (_DWORD)smodelUpdateCount )
    {
      v94 = backEnd.debugFont;
      v95 = j_va("sm U%d F%d", smodelUpdateCount, v22->smodelUpdateFrame);
      result[0] = *(float4 *)gfxContext;
      v96 = v95;
      RB_DrawText((GfxCmdBufContext *)result, v95, v94, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v96, v94, x0, v87, v81);
      v87 = v87 + 18.0;
    }
    smodelLODUpdateCount = v22->smodelLODUpdateCount;
    if ( (_DWORD)smodelLODUpdateCount )
    {
      v98 = backEnd.debugFont;
      v99 = j_va("smLOD U%d F%d", smodelLODUpdateCount, v22->smodelLODUpdateFrame);
LABEL_85:
      result[0] = *(float4 *)gfxContext;
      v100 = v99;
      RB_DrawText((GfxCmdBufContext *)result, v99, v98, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v100, v98, x0, v87, v81);
      v87 = v87 + 18.0;
    }
  }
  if ( !staleCacheEntry )
    goto LABEL_110;
  missingTransientBSP = staleCacheEntry->missingTransientBSP;
  if ( missingTransientBSP || staleCacheEntry->missingTransientSModel )
    v78.packed = -1;
  _XMM0 = 0i64;
  __asm { vroundss xmm1, xmm0, xmm3, 1 }
  if ( imageWidth < 128.0 )
  {
    dynUpdateCount = staleCacheEntry->dynUpdateCount;
    if ( dynUpdateCount )
    {
      v127 = backEnd.debugFont;
      v128 = j_va("DU:%d", dynUpdateCount);
      result[0] = *(float4 *)gfxContext;
      v129 = v128;
      RB_DrawText((GfxCmdBufContext *)result, v128, v127, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v129, v127, x0, v87, v81);
      missingTransientBSP = staleCacheEntry->missingTransientBSP;
      v87 = v87 + 18.0;
    }
    v130 = staleCacheEntry->missingTransientSModel + staleCacheEntry->missingSModelLOD + (unsigned int)missingTransientBSP;
    if ( (_DWORD)v130 )
    {
      v131 = backEnd.debugFont;
      v132 = j_va("M:%d", v130);
      result[0] = *(float4 *)gfxContext;
      v133 = v132;
      RB_DrawText((GfxCmdBufContext *)result, v132, v131, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v133, v131, x0, v87, v78);
      v87 = v87 + 18.0;
    }
    if ( !v149 )
    {
      v125 = "S:%d";
      goto LABEL_109;
    }
  }
  else
  {
    updateCount = staleCacheEntry->updateCount;
    if ( (_DWORD)updateCount )
    {
      v105 = backEnd.debugFont;
      v106 = j_va("staticUpdate:%d", updateCount);
      result[0] = *(float4 *)gfxContext;
      v107 = v106;
      RB_DrawText((GfxCmdBufContext *)result, v106, v105, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v107, v105, x0, v87, v81);
      v87 = v87 + 18.0;
    }
    v108 = staleCacheEntry->dynUpdateCount;
    if ( (_DWORD)v108 )
    {
      v109 = backEnd.debugFont;
      v110 = j_va("dynUpdate:%d", v108);
      result[0] = *(float4 *)gfxContext;
      v111 = v110;
      RB_DrawText((GfxCmdBufContext *)result, v110, v109, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v111, v109, x0, v87, v81);
      v87 = v87 + 18.0;
    }
    maskedUpdateCount = staleCacheEntry->maskedUpdateCount;
    if ( (_DWORD)maskedUpdateCount )
    {
      v113 = backEnd.debugFont;
      v114 = j_va("maskedUpdate:%d", maskedUpdateCount);
      result[0] = *(float4 *)gfxContext;
      v115 = v114;
      RB_DrawText((GfxCmdBufContext *)result, v114, v113, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v115, v113, x0, v87, v81);
      v87 = v87 + 18.0;
    }
    v116 = staleCacheEntry->missingTransientBSP;
    if ( v116 )
    {
      v117 = backEnd.debugFont;
      v118 = j_va("MissingBSP:%d", v116);
      result[0] = *(float4 *)gfxContext;
      v119 = v118;
      RB_DrawText((GfxCmdBufContext *)result, v118, v117, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v119, v117, x0, v87, v78);
      v87 = v87 + 18.0;
    }
    missingSModelLOD = staleCacheEntry->missingSModelLOD;
    missingTransientSModel = staleCacheEntry->missingTransientSModel;
    if ( (_DWORD)missingTransientSModel + (_DWORD)missingSModelLOD )
    {
      v122 = backEnd.debugFont;
      v123 = j_va("MissingSM:%d,%d", missingTransientSModel, missingSModelLOD);
      result[0] = *(float4 *)gfxContext;
      v124 = v123;
      RB_DrawText((GfxCmdBufContext *)result, v123, v122, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v124, v122, x0, v87, v78);
      v87 = v87 + 18.0;
    }
    if ( !v149 )
    {
      v125 = "Staleness:%d";
LABEL_109:
      v134 = backEnd.debugFont;
      v135 = j_va(v125, staleCacheEntry->staleness);
      result[0] = *(float4 *)gfxContext;
      v136 = v135;
      RB_DrawText((GfxCmdBufContext *)result, v135, v134, v85, v87 + 1.0, (const GfxColor)-16777216);
      result[0] = *(float4 *)gfxContext;
      RB_DrawText((GfxCmdBufContext *)result, v136, v134, x0, v87, (const GfxColor)((unsigned __int8)(int)*(float *)&_XMM1 | (((unsigned __int8)(int)*(float *)&_XMM1 | (((int)*(float *)&_XMM1 | 0xFFFFFF00) << 8)) << 8)));
      v87 = v87 + 18.0;
    }
  }
LABEL_110:
  if ( g_lightScore[v157].ranking0 != 255 )
  {
    v137 = DVARINT_sm_spotShadowScoreSystem;
    if ( !DVARINT_sm_spotShadowScoreSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScoreSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v137);
    if ( v137->current.integer )
    {
      score = g_lightScore[v157].score;
      LOWORD(v139) = g_lightScore[v157].ranking0;
      v140 = score;
    }
    else
    {
      LODWORD(v139) = g_lightScore[v157].ranking0;
      v140 = g_lightScore[v157].score;
      score = (float)(int)v139 * 0.015625;
    }
    v141 = backEnd.debugFont;
    v139 = (unsigned __int16)v139;
    v142 = "Rank:%d Score:%03.2f";
    v143 = v140;
    if ( imageWidth < 128.0 )
      v142 = "%d:%03.2f";
    v144 = j_va(v142, v139, v143);
    result[0] = *(float4 *)gfxContext;
    v145 = v144;
    RB_DrawText((GfxCmdBufContext *)result, v144, v141, v85, v87 + 1.0, (const GfxColor)-16777216);
    result[0] = *(float4 *)gfxContext;
    RB_DrawText((GfxCmdBufContext *)result, v145, v141, x0, v87, (const GfxColor)((unsigned __int8)(int)(float)((float)(score + 1.0) * 127.5) | (((unsigned __int8)(int)(float)((float)(score + 1.0) * 127.5) | (((int)(float)((float)(score + 1.0) * 127.5) | 0xFFFFFF00) << 8)) << 8)));
  }
  result[0] = *(float4 *)gfxContext;
  RB_EndTessSurfaceInternal((GfxCmdBufContext *)result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(739)");
}

/*
==============
RB_SpotShadowMap
==============
*/
void RB_SpotShadowMap(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  __int64 v4; 
  GfxCmdBufState *state; 
  GfxCmdBufInput *p_input; 
  R_RT_DepthHandle *v10; 
  GfxDrawListType v11; 
  R_RT_DepthHandle v12; 
  GfxDrawListType v13; 
  GfxCmdBufContext v14; 
  __int64 v15; 
  R_RT_DepthHandle v16; 
  R_RT_DepthHandle spotshadowActiveCache; 
  GfxDrawCallOutput drawOutput; 

  v4 = spotShadowUpdateIndex;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 257, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 258, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( (unsigned int)v4 >= data->spotShadowUpdateCount )
  {
    LODWORD(v15) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 259, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowUpdateIndex ) < (unsigned)( data->spotShadowUpdateCount )", "spotShadowUpdateIndex doesn't index data->spotShadowUpdateCount\n\t%i not in [0, %i)", v15, data->spotShadowUpdateCount) )
      __debugbreak();
  }
  state = gfxContext->state;
  p_input = &gfxContext->source->input;
  R_InitLocalCmdBufState(state, p_input);
  v10 = &viewInfo->sceneRtInput.m_spotShadowRts[v4];
  *(GfxCmdBufContext *)&v16.m_surfaceID = *gfxContext;
  spotshadowActiveCache = *v10;
  R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v16, &spotshadowActiveCache, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(263)");
  R_ClearScreen(state, 0x10u, 0);
  R_ShutdownLocalCmdBufState(state, p_input);
  v11 = v4 + 29;
  if ( R_RunDrawListCommandBuffer(data, (const GfxDrawListType)(v4 + 29)) )
  {
    R_InitDrawCallOutput(data, &drawOutput);
    R_LockIfGfxImmediateContext(state->device);
    R_ProfBeginDrawListImmediate(v11);
    R_GPU_BeginRunDrawListTimer(v11);
    v12 = *v10;
    spotshadowActiveCache = viewInfo->spotshadowActiveCache;
    v16 = v12;
    R_DrawSpotShadowMapStatics(viewInfo, &viewInfo->drawList[v11], v11, &v16, &spotshadowActiveCache, v4, &drawOutput, 0);
    R_GPU_EndTimer();
    R_ProfEndDrawListImmediate();
    R_FlushImmediateContext();
    R_UnlockIfGfxImmediateContext(state->device);
  }
  v13 = v4 + 37;
  if ( R_RunDrawListCommandBuffer(data, (const GfxDrawListType)(v4 + 37)) )
  {
    R_InitDrawCallOutput(data, &drawOutput);
    R_LockIfGfxImmediateContext(state->device);
    R_ProfBeginDrawListImmediate(v13);
    R_GPU_BeginRunDrawListTimer(v13);
    spotshadowActiveCache = *v10;
    R_DrawSpotShadowMapDynamics(viewInfo, &viewInfo->drawList[v13], v13, &spotshadowActiveCache, v4, &drawOutput, 0);
    R_GPU_EndTimer();
    R_ProfEndDrawListImmediate();
    R_FlushImmediateContext();
    R_UnlockIfGfxImmediateContext(state->device);
  }
  R_InitLocalCmdBufState(state, p_input);
  v14 = *gfxContext;
  spotshadowActiveCache = *v10;
  *(GfxCmdBufContext *)&v16.m_surfaceID = v14;
  R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v16, &spotshadowActiveCache, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(327)");
  *(GfxCmdBufContext *)&v16.m_surfaceID = *gfxContext;
  R_ResolveDepth((GfxCmdBufContext *)&v16);
  R_ShutdownLocalCmdBufState(state, p_input);
  RB_SpotShadow_Resolve(state, data, viewInfo, v4);
}

/*
==============
RB_SpotShadowMaps
==============
*/
void RB_SpotShadowMaps(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  unsigned int spotShadowUpdateCount; 
  unsigned int i; 
  GfxCmdBufContext v8; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 339, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 340, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 343, ASSERT_TYPE_ASSERT, "(spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  for ( i = 0; i < spotShadowUpdateCount; ++i )
  {
    v8 = *gfxContext;
    RB_SpotShadowMap(&v8, data, viewInfo, i);
  }
}

/*
==============
RB_SpotShadow_Resolve
==============
*/
void RB_SpotShadow_Resolve(GfxCmdBufState *gfxState, const GfxBackEndData *data, const GfxViewInfo *viewInfo, unsigned int spotShadowUpdateIndex)
{
  __int64 v6; 
  const GfxSpotShadowUpdate *v9; 
  bool v10; 
  int v11; 
  const R_RT_Surface *Surface; 
  unsigned __int16 m_surfaceID; 
  const R_RT_Surface *v15; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v18; 
  const GfxTexture *v19; 
  R_RT_Handle v21; 
  R_RT_Handle v22; 
  R_RT_Handle v23; 
  __m256i v24; 
  R_RT_ColorHandle v25; 
  R_RT_Handle v26; 
  R_RT_Handle v27; 
  R_RT_BufferHandle v28; 
  R_RT_Handle v29; 
  R_RT_ColorHandle result; 
  ComputeCmdBufState state; 

  v6 = spotShadowUpdateIndex;
  R_InitComputeCmdBufState(&state, (GfxBackEndData *)data, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
  R_LockIfGfxImmediateContext(gfxState->device);
  R_ComputeWaitForGraphics(&state, gfxState);
  v9 = &data->spotShadowUpdates[v6];
  v10 = data->spotShadowUpdates[v6].stale == NULL;
  v29 = (R_RT_Handle)viewInfo->sceneRtInput.m_spotShadowRts[v6];
  v22 = v29;
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 220, ASSERT_TYPE_ASSERT, "(spotShadowUpdate->stale != nullptr)", (const char *)&queryFormat, "spotShadowUpdate->stale != nullptr") )
    __debugbreak();
  R_SpotShadow_StaleCacheEntry::GetColorRtDraw3D(data->spotShadowUpdates[v6].stale, &result);
  if ( !result.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 223, ASSERT_TYPE_ASSERT, "(!staleCacheRT.IsNull())", (const char *)&queryFormat, "!staleCacheRT.IsNull()") )
    __debugbreak();
  v11 = R_RT_Handle::GetSurface(&v22)->m_image.m_base.height >> 1;
  Surface = R_RT_Handle::GetSurface(&v22);
  m_surfaceID = _XMM0;
  v27 = *R_RT_CreateInternal(&v26, Surface->m_image.m_base.width >> 1, v11, Surface->m_image.m_base.width >> 1, v11, 1u, 1u, 1u, g_R_RT_renderTargetFmts[7], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Exponential Shadowmap Depth 0", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(225)");
  v23 = v27;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v23);
    if ( (R_RT_Handle::GetSurface(&v23)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RBX) = v23.m_tracking.m_allocCounter;
      m_surfaceID = v23.m_surfaceID;
      v27 = v23;
      __debugbreak();
    }
    else
    {
      LODWORD(_RBX) = v23.m_tracking.m_allocCounter;
      m_surfaceID = v23.m_surfaceID;
      v27 = v23;
    }
  }
  else
  {
    __asm { vpextrd rbx, xmm0, 2 }
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  R_ProfBeginNamedEvent(&state, "Resolve Spot Shadow Map");
  v22 = v27;
  R_ProfBeginNamedEvent(&state, "Resolve Exponential Shadow Map");
  v15 = R_RT_Handle::GetSurface(&v22);
  Resident = R_Texture_GetResident(v15->m_image.m_base.textureId);
  R_HW_AddResourceTransition(&state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(&state);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v23.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v24.m256i_u64[2] = _XMM0;
  *(_OWORD *)&v28.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  v23.m_surfaceID = 0;
  v23.m_tracking.m_allocCounter = 0;
  v28.m_surfaceID = 0;
  v28.m_tracking.m_allocCounter = 0;
  v24.m256i_i16[0] = 0;
  v24.m256i_i32[2] = 0;
  v25.m_surfaceID = 0;
  v25.m_tracking.m_allocCounter = 0;
  v26 = v22;
  R_SpotShadow_Downsample(&state, (R_RT_ColorHandle *)&v26, (R_RT_DepthHandle *)&v25, (R_RT_DepthHandle *)&v29, (R_RT_BufferHandle *)&v24, &v28, (R_RT_BufferHandle *)&v23, v9, 0, 0);
  v18 = R_RT_Handle::GetSurface(&v22);
  v19 = R_Texture_GetResident(v18->m_image.m_base.textureId);
  R_HW_AddResourceTransition(&state, v19, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(&state);
  R_ProfEndNamedEvent(&state);
  v26 = (R_RT_Handle)result;
  R_HW_AddResourceTransition(&state, &v26, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v22.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v24.m256i_u64[2] = _XMM0;
  *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
  v25.m_surfaceID = 0;
  v25.m_tracking.m_allocCounter = 0;
  v29 = (R_RT_Handle)v25;
  v22.m_surfaceID = 0;
  v22.m_tracking.m_allocCounter = 0;
  v24.m256i_i16[0] = 0;
  v24.m256i_i32[2] = 0;
  v25 = result;
  v26 = v22;
  v21 = (R_RT_Handle)v24;
  v24 = (__m256i)v27;
  v22 = v21;
  R_SpotShadow_Blur(&state, (R_RT_ColorHandle *)&v24, &v25, (R_RT_BufferHandle *)&v22, (R_RT_BufferHandle *)&v29, (R_RT_BufferHandle *)&v26, v9, v6);
  v26 = (R_RT_Handle)result;
  R_HW_AddResourceTransition(&state, &v26, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  v22 = v27;
  if ( m_surfaceID )
  {
    R_RT_Handle::GetSurface(&v22);
    v26 = v22;
    R_RT_DestroyInternal(&v26);
  }
  else if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  R_ProfEndNamedEvent(&state);
  R_UnlockIfGfxImmediateContext(gfxState->device);
  R_ShutdownComputeCmdBufState(&state);
}

/*
==============
R_SpotShadowOverlayCompLightIndex
==============
*/
__int64 R_SpotShadowOverlayCompLightIndex(const void *a, const void *b)
{
  return (unsigned int)(*(_DWORD *)(*(_QWORD *)a + 64i64) - *(_DWORD *)(*(_QWORD *)b + 64i64));
}

/*
==============
R_SpotShadow_Blur
==============
*/
void R_SpotShadow_Blur(ComputeCmdBufState *state, R_RT_ColorHandle *src, R_RT_ColorHandle *dst, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs, const GfxSpotShadowUpdate *spotShadowUpdate, unsigned int islice)
{
  R_SpotShadow_StaleCacheEntry *stale; 
  int width; 
  int height; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  const R_RT_Surface *Surface; 
  float v19; 
  float v20; 
  float v21; 
  const R_RT_Surface *v22; 
  const R_RT_Surface *v23; 
  R_RT_Handle *v24; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  unsigned int AtlasIndex; 
  R_RT_Handle *Resident; 
  R_RT_Handle *p_view; 
  R_RT_Handle *v29; 
  R_RT_Handle *v30; 
  char data[8]; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 

  v29 = htileMaskCounter;
  p_view = htileMask;
  stale = spotShadowUpdate->stale;
  Resident = dst;
  v30 = htileMaskIndirectArgs;
  AtlasIndex = R_SpotShadow_StaleCacheEntry::GetAtlasIndex(stale);
  width = R_RT_Handle::GetSurface(src)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(src)->m_image.m_base.height;
  v14 = R_RT_Handle::GetSurface(dst)->m_image.m_base.width;
  if ( v14 != 2 * R_RT_Handle::GetSurface(src)->m_image.m_base.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 141, ASSERT_TYPE_ASSERT, "(dst.GetWidth() == R_SPOTSHADOW_LAYER_ATLAS_COUNT_DIM * src.GetWidth())", (const char *)&queryFormat, "dst.GetWidth() == R_SPOTSHADOW_LAYER_ATLAS_COUNT_DIM * src.GetWidth()") )
    __debugbreak();
  v15 = R_RT_Handle::GetSurface(dst)->m_image.m_base.height;
  if ( v15 != 2 * R_RT_Handle::GetSurface(src)->m_image.m_base.height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 142, ASSERT_TYPE_ASSERT, "(dst.GetHeight() == R_SPOTSHADOW_LAYER_ATLAS_COUNT_DIM * src.GetHeight())", (const char *)&queryFormat, "dst.GetHeight() == R_SPOTSHADOW_LAYER_ATLAS_COUNT_DIM * src.GetHeight()") )
    __debugbreak();
  v16 = R_RT_Handle::GetSurface(src)->m_image.m_base.width;
  v17 = R_RT_Handle::GetSurface(src)->m_image.m_base.height;
  v34 = 1.0 / (float)R_RT_Handle::GetSurface(src)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(src);
  v19 = spotShadowUpdate->viewportParms.viewParms.camera.zPlanes[2];
  v20 = (float)Surface->m_image.m_base.height;
  v37 = height * (AtlasIndex >> 1);
  v36 = width * (AtlasIndex & 1);
  v35 = 1.0 / v20;
  v21 = spotShadowUpdate->viewportParms.viewParms.camera.zPlanes[3];
  v39 = 8 * islice + 4;
  v32 = v19;
  v33 = v21;
  v38 = v39 * ((unsigned int)(2 * v16) >> 3) * ((unsigned int)(2 * v17) >> 3);
  R_UploadAndSetComputeConstants(state, 0, data, 0x40u, NULL);
  v22 = R_RT_Handle::GetSurface(Resident);
  Resident = (R_RT_Handle *)R_Texture_GetResident(v22->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&Resident);
  v23 = R_RT_Handle::GetSurface(src);
  Resident = (R_RT_Handle *)R_Texture_GetResident(v23->m_image.m_base.textureId);
  R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&Resident);
  v24 = p_view;
  if ( p_view->m_surfaceID && R_SpotShadow_ShouldUseHTileMask(spotShadowUpdate) )
  {
    p_view = (R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer(v24)->view;
    R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&p_view);
    v29 = (R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer(v29)->view;
    R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&v29);
    R_SetComputeShader(state, rgp.spotBlurMasked);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v30);
    R_DispatchIndirect(state, WrappedBuffer->buffer, (islice << 6) + 32);
  }
  else
  {
    R_SetComputeShader(state, rgp.spotBlur);
    if ( (!width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
      __debugbreak();
    R_Dispatch(state, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
  }
}

/*
==============
R_SpotShadow_Downsample
==============
*/
void R_SpotShadow_Downsample(ComputeCmdBufState *state, R_RT_ColorHandle *dstArray, R_RT_DepthHandle *staticShadowsCache, R_RT_DepthHandle *dynamicShadowsArray, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs, const GfxSpotShadowUpdate *spotShadowUpdate, bool useArrayBindings, unsigned int islice)
{
  R_RT_Handle v11; 
  R_RT_Handle v14; 
  bool v16; 
  R_RT_Handle v17; 
  bool v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  const R_RT_Surface *Surface; 
  float v25; 
  R_SpotShadow_ActiveCacheEntry *active; 
  char v27; 
  ID3D12Resource *resource; 
  R_RT_Handle *v29; 
  const R_RT_Surface *v30; 
  const R_RT_Surface *v31; 
  const R_RT_Surface *v32; 
  const R_RT_Surface *v33; 
  bool v34; 
  int v35; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const R_RT_Surface *v37; 
  const R_RT_Surface *v38; 
  ComputeShader *spotDownsampleLegacy; 
  int height; 
  const R_RT_Surface *v41; 
  int width; 
  R_RT_Handle *Resident; 
  R_RT_Handle v44; 
  R_RT_Handle *v45; 
  unsigned __int64 v46; 
  R_RT_Handle *p_view; 
  R_RT_Handle v48; 
  R_RT_Handle *v49; 
  R_RT_Handle v50; 
  GfxShaderBufferView v51; 
  int data[6]; 
  __int64 v53; 
  __int64 v54; 
  unsigned __int64 v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  R_RT_Handle v60; 

  v11 = dstArray->R_RT_Handle;
  p_view = htileMask;
  v49 = htileMaskCounter;
  v51.resource = (ID3D12Resource *)staticShadowsCache;
  v45 = htileMaskIndirectArgs;
  Resident = dynamicShadowsArray;
  v44 = v11;
  v14 = *R_RT_GetViewInternal(&v50, &v44, islice, -1);
  v44 = v14;
  v48 = v14;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v48);
    if ( (R_RT_Handle::GetSurface(&v48)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v14 = v48;
      __debugbreak();
    }
    else
    {
      v14 = v48;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v14 = v44;
      if ( v16 )
        __debugbreak();
    }
  }
  v50 = v14;
  v44 = dynamicShadowsArray->R_RT_Handle;
  v17 = *R_RT_GetViewInternal(&v60, &v44, islice, -1);
  v48 = v17;
  v44 = v17;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v44);
    if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      v17 = v44;
      v48 = v44;
    }
    else
    {
      v17 = v44;
      v48 = v44;
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v17 = v48;
      if ( v19 )
        __debugbreak();
    }
  }
  v44 = v17;
  v20 = R_RT_Handle::GetSurface(&v44)->m_image.m_base.width >> 3;
  v21 = 0;
  v22 = R_RT_Handle::GetSurface(&v44)->m_image.m_base.height >> 3;
  v53 = 0i64;
  v54 = 0i64;
  v59 = 0;
  v23 = 4 * v20 * v22;
  *(float *)&data[4] = 1.0 / (float)R_RT_Handle::GetSurface(&v50)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(&v50);
  v25 = spotShadowUpdate->viewportParms.viewParms.camera.zPlanes[3];
  v46 = __PAIR64__(v22, v20);
  active = spotShadowUpdate->active;
  *(float *)&data[5] = 1.0 / (float)Surface->m_image.m_base.height;
  data[2] = LODWORD(spotShadowUpdate->viewportParms.viewParms.camera.zPlanes[2]);
  *(float *)data = FLOAT_1_0;
  *(float *)&data[1] = FLOAT_1_0;
  v59 = v23 * islice;
  v58 = v23 * islice;
  *(float *)&data[3] = v25;
  v56 = 2 * v23 * islice;
  v57 = 8 * islice;
  v55 = v46;
  if ( v51.resource->m_pFunction && spotShadowUpdate->activeStatus )
  {
    v27 = 1;
    v48 = *(R_RT_Handle *)v51.resource;
    v48 = R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(active, (const R_RT_DepthHandle *)&v60, R_SpotShadow_ActiveCacheSubsetID_Final, (R_RT_DepthHandle *)&v48)->R_RT_Handle;
    v58 = v23 * (R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(active) + 1);
  }
  else
  {
    v27 = 0;
  }
  R_UploadAndSetComputeConstants(state, 0, data, 0x40u, NULL);
  if ( p_view->m_surfaceID && R_SpotShadow_ShouldUseHTileMask(spotShadowUpdate) )
  {
    if ( !useArrayBindings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 107, ASSERT_TYPE_ASSERT, "(useArrayBindings)", (const char *)&queryFormat, "useArrayBindings") )
      __debugbreak();
    resource = v51.resource;
    if ( v27 && R_RT_Handle::GetSurface((R_RT_Handle *)v51.resource)->m_image.m_base.format != GFX_PF_D16 )
    {
      v29 = Resident;
    }
    else
    {
      v29 = Resident;
      if ( R_RT_Handle::GetSurface(Resident)->m_image.m_base.format == GFX_PF_D16 )
      {
LABEL_33:
        v30 = R_RT_Handle::GetSurface(&v50);
        Resident = (R_RT_Handle *)R_Texture_GetResident(v30->m_image.m_base.textureId);
        R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&Resident);
        v31 = R_RT_Handle::GetSurface(&v48);
        Resident = (R_RT_Handle *)R_Texture_GetResident(v31->m_image.m_base.textureId);
        R_SetComputeTextures(state, 2, 1, (const GfxTexture *const *)&Resident);
        v32 = R_RT_Handle::GetSurface(&v44);
        Resident = (R_RT_Handle *)R_Texture_GetResident(v32->m_image.m_base.textureId);
        R_SetComputeTextures(state, 3, 1, (const GfxTexture *const *)&Resident);
        if ( !v27 )
          resource = (ID3D12Resource *)v29;
        v44 = *(R_RT_Handle *)&resource->m_pFunction;
        Resident = (R_RT_Handle *)R_RT_GetHtileView(&v51, (R_RT_DepthHandle *)&v44);
        R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&Resident);
        v44 = *v29;
        Resident = (R_RT_Handle *)R_RT_GetHtileView(&v51, (R_RT_DepthHandle *)&v44);
        R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&Resident);
        p_view = (R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer(p_view)->view;
        R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&p_view);
        v49 = (R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer(v49)->view;
        R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&v49);
        v44 = *v29;
        v48 = v44;
        R_RT_GetHtileInfo((R_RT_DepthHandle *)&v48, (unsigned int *)&v51, (unsigned int *)&v46);
        if ( (R_RT_Handle::GetSurface(&v44)->m_image.m_base.width & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 41, ASSERT_TYPE_ASSERT, "(depth.GetWidth() % 8 == 0)", (const char *)&queryFormat, "depth.GetWidth() % 8 == 0") )
          __debugbreak();
        v33 = R_RT_Handle::GetSurface(&v44);
        if ( v33->m_image.m_base.width >> 3 != (_DWORD)v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 42, ASSERT_TYPE_ASSERT, "(depth.GetWidth() / 8 == htilePitch)", (const char *)&queryFormat, "depth.GetWidth() / 8 == htilePitch") )
          __debugbreak();
        if ( R_RT_Handle::GetSurface(&v44)->m_image.m_base.format != GFX_PF_D16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 43, ASSERT_TYPE_ASSERT, "(depth.GetFormat() == GFX_PF_D16)", "%s\n\tSpot shaders support only 16 bit depth", "depth.GetFormat() == GFX_PF_D16") )
          __debugbreak();
        v34 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO;
        if ( LODWORD(v51.resource) )
          v21 = 1;
        v35 = v21 | 2;
        if ( !v34 )
          v35 = v21;
        R_SetComputeShader(state, rgp.spotDownsampleMasked[v35]);
        WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v45);
        R_DispatchIndirect(state, WrappedBuffer->buffer, islice << 6);
        return;
      }
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 108, ASSERT_TYPE_ASSERT, "(( !hasStaticShadows || staticShadowsCache.GetFormat() == GFX_PF_D16 ) && dynamicShadowsArray.GetFormat() == GFX_PF_D16)", "%s\n\tspotDownsampleMasked shaders support only 16 bit depth", "( !hasStaticShadows || staticShadowsCache.GetFormat() == GFX_PF_D16 ) && dynamicShadowsArray.GetFormat() == GFX_PF_D16") )
      __debugbreak();
    goto LABEL_33;
  }
  v37 = R_RT_Handle::GetSurface(&v44);
  v45 = (R_RT_Handle *)R_Texture_GetResident(v37->m_image.m_base.textureId);
  R_SetComputeTextures(state, useArrayBindings, 1, (const GfxTexture *const *)&v45);
  v38 = R_RT_Handle::GetSurface(&v50);
  v45 = (R_RT_Handle *)R_Texture_GetResident(v38->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, useArrayBindings, 1, (const GfxTexture *const *)&v45);
  spotDownsampleLegacy = rgp.spotDownsampleLegacy;
  if ( useArrayBindings )
    spotDownsampleLegacy = rgp.spotDownsample;
  R_SetComputeShader(state, spotDownsampleLegacy);
  height = R_RT_Handle::GetSurface(&v50)->m_image.m_base.height;
  v41 = R_RT_Handle::GetSurface(&v50);
  width = v41->m_image.m_base.width;
  if ( (!v41->m_image.m_base.width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(state, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
}

/*
==============
R_SpotShadow_DrawOverlay
==============
*/
void R_SpotShadow_DrawOverlay(GfxCmdBufContext *gfxContext, int overlayType, const R_RT_ColorHandle *spotshadowsActiveCache, const R_RT_DepthHandle *spotshadowsStaleCache)
{
  int v4; 
  GfxCmdBufContext *source; 
  int integer; 
  const dvar_t *v7; 
  const GfxBackEndData *v8; 
  const GfxSpotShadow *v9; 
  float value; 
  unsigned int v11; 
  unsigned int v12; 
  const dvar_t *v13; 
  __int64 v14; 
  __int64 v15; 
  float *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  __int64 viewInfoIndex; 
  GfxViewInfo *viewInfo; 
  float v22; 
  float v23; 
  float v24; 
  __int64 v25; 
  float displayHeight; 
  float v27; 
  float v28; 
  float v29; 
  float displayWidth; 
  unsigned int v31; 
  unsigned int v32; 
  const GfxSpotShadow **v33; 
  const GfxSpotShadow *v34; 
  float v35; 
  float v36; 
  float v37; 
  GfxCmdBufContext v41; 
  R_RT_ColorHandle v42; 
  R_RT_ColorHandle v43; 
  __int64 Base[64]; 

  v4 = overlayType;
  source = gfxContext;
  integer = sm_showOverlayFocus->current.integer;
  v41.source = (GfxCmdBufSourceState *)gfxContext;
  if ( backEndData->spotShadowCount )
  {
    v7 = DCONST_DVARFLT_sm_showOverlayDistance;
    if ( !DCONST_DVARFLT_sm_showOverlayDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_showOverlayDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    v8 = backEndData;
    v9 = NULL;
    value = v7->current.value;
    v11 = 0;
    v12 = 0;
    if ( backEndData->spotShadowCount )
    {
      do
      {
        v13 = DCONST_DVARINT_sm_spotShadowOverlayTarget;
        v14 = v12;
        v15 = (__int64)&v8->spotShadows[v14];
        v16 = (float *)((char *)v8 + 152 * v8->spotShadows[v14].sceneLightIndex);
        if ( !DCONST_DVARINT_sm_spotShadowOverlayTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowOverlayTarget") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        if ( v13->current.integer > 0 )
        {
          v17 = DCONST_DVARINT_sm_spotShadowOverlayTarget;
          if ( !DCONST_DVARINT_sm_spotShadowOverlayTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowOverlayTarget") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v17);
          if ( *(_DWORD *)(v15 + 64) != v17->current.integer )
            goto LABEL_24;
        }
        v18 = DCONST_DVARINT_sm_spotShadowOverlayTarget;
        if ( !DCONST_DVARINT_sm_spotShadowOverlayTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowOverlayTarget") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        if ( v18->current.integer == -1 && !*((_BYTE *)v16 + 5480450) )
          goto LABEL_24;
        v19 = DCONST_DVARINT_sm_spotShadowOverlayTarget;
        if ( !DCONST_DVARINT_sm_spotShadowOverlayTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowOverlayTarget") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        if ( v19->current.integer == -2 && *((_BYTE *)v16 + 5480450) )
        {
LABEL_24:
          v8 = backEndData;
        }
        else
        {
          v8 = backEndData;
          if ( value <= 0.0099999998 || (viewInfoIndex = backEndData->viewInfoIndex, viewInfo = backEndData->viewInfo, v22 = viewInfo[viewInfoIndex].viewParmsSet.frames[0].viewParms.camera.origin.v[0] - v16[1370126], v23 = viewInfo[viewInfoIndex].viewParmsSet.frames[0].viewParms.camera.origin.v[1] - v16[1370127], v24 = viewInfo[viewInfoIndex].viewParmsSet.frames[0].viewParms.camera.origin.v[2] - v16[1370128], fsqrt((float)((float)(v23 * v23) + (float)(v22 * v22)) + (float)(v24 * v24)) < value) )
          {
            v25 = v11++;
            Base[v25] = v15;
          }
        }
        ++v12;
      }
      while ( v12 < v8->spotShadowCount );
      v9 = NULL;
      source = (GfxCmdBufContext *)v41.source;
      v4 = overlayType;
    }
    qsort(Base, v11, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)R_SpotShadowOverlayCompLightIndex);
    displayHeight = (float)vidConfig.displayHeight;
    v27 = displayHeight * 0.25;
    v28 = displayHeight * 0.25;
    if ( v11 > 6 )
    {
      v29 = (float)v11;
      displayWidth = (float)vidConfig.displayWidth;
      v27 = (float)((float)(displayWidth - 16.0) - (float)(v29 * 2.0)) / v29;
    }
    v31 = v11;
    v32 = 0;
    if ( v11 )
    {
      v33 = (const GfxSpotShadow **)Base;
      do
      {
        v34 = *v33;
        if ( integer && v32 + 1 == integer )
        {
          v9 = *v33;
          v31 = v32;
        }
        else
        {
          v42 = *(R_RT_ColorHandle *)spotshadowsStaleCache;
          v41 = *source;
          v43 = *spotshadowsActiveCache;
          v35 = (float)v32;
          RB_DrawSpotShadowOverlayItem(&v41, backEndData, v4, v34, v32, (float)((float)(v27 + 2.0) * v35) + 8.0, 8.0, v27, &v43, (const R_RT_DepthHandle *)&v42);
        }
        ++v32;
        ++v33;
      }
      while ( v32 < v11 );
      if ( v9 )
      {
        v43 = *(R_RT_ColorHandle *)spotshadowsStaleCache;
        v41 = *source;
        v36 = (float)(backEndData->spotShadowCount - 1);
        v42 = *spotshadowsActiveCache;
        v37 = (float)(unsigned int)(integer - 1);
        RB_DrawSpotShadowOverlayItem(&v41, backEndData, v4, v9, v31, (float)((float)((float)((float)((float)(v27 - v28) / v36) + v27) + 2.0) * v37) + 8.0, 8.0, v28, &v42, (const R_RT_DepthHandle *)&v43);
      }
    }
  }
}

/*
==============
R_SpotShadow_GetComputeShaderIndex
==============
*/
__int64 R_SpotShadow_GetComputeShaderIndex(R_RT_DepthHandle *depth)
{
  const R_RT_Surface *Surface; 
  bool v3; 
  __int64 result; 
  R_RT_DepthHandle v5; 
  unsigned int v6; 
  unsigned int v7; 

  v5 = *depth;
  R_RT_GetHtileInfo(&v5, &v7, &v6);
  if ( (R_RT_Handle::GetSurface(depth)->m_image.m_base.width & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 41, ASSERT_TYPE_ASSERT, "(depth.GetWidth() % 8 == 0)", (const char *)&queryFormat, "depth.GetWidth() % 8 == 0") )
    __debugbreak();
  Surface = R_RT_Handle::GetSurface(depth);
  if ( Surface->m_image.m_base.width >> 3 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 42, ASSERT_TYPE_ASSERT, "(depth.GetWidth() / 8 == htilePitch)", (const char *)&queryFormat, "depth.GetWidth() / 8 == htilePitch") )
    __debugbreak();
  if ( R_RT_Handle::GetSurface(depth)->m_image.m_base.format != GFX_PF_D16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 43, ASSERT_TYPE_ASSERT, "(depth.GetFormat() == GFX_PF_D16)", "%s\n\tSpot shaders support only 16 bit depth", "depth.GetFormat() == GFX_PF_D16") )
    __debugbreak();
  v3 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO;
  result = (v7 != 0) | 2u;
  if ( !v3 )
    return v7 != 0;
  return result;
}


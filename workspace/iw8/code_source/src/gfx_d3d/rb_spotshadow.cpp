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

void __fastcall RB_DrawSpotShadowOverlayExtents(GfxCmdBufContext *gfxContext, unsigned int spotShadowIndex, double x0, double y0, float ratio)
{
  __int64 v9; 
  int v28; 
  GfxPointVertex v29; 
  int v33; 
  int v37; 
  int v41; 
  int v45; 
  int v49; 
  int v53; 
  int v57; 
  GfxCmdBufContext v58; 
  int v59; 
  __int64 v60; 
  int v61; 
  __int64 v62; 
  char vars0; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v62;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  v9 = spotShadowIndex;
  _RDI = gfxContext;
  v58.source = (GfxCmdBufSourceState *)0xFF00FF00FF0000FFi64;
  v58.state = (GfxCmdBufState *)0xFF00FFFFFFFF0000i64;
  v59 = -65281;
  v60 = -256i64;
  v61 = -16777088;
  __asm
  {
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
  }
  if ( spotShadowIndex >= 8 )
  {
    v28 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 409, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowIndex ) < (unsigned)( R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT )", "spotShadowIndex doesn't index R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT\n\t%i not in [0, %i)", spotShadowIndex, v28) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, cs:__real@3f800000
    vmovss  xmm1, [rbp+10h+arg_20]
  }
  *(_DWORD *)v29.color = *((unsigned __int8 *)&v58.source + 4 * v9) | ((*((unsigned __int8 *)&v58.source + 4 * v9 + 1) | ((*((unsigned __int8 *)&v58.source + 4 * v9 + 2) | (*((unsigned __int8 *)&v58.source + 4 * v9 + 3) << 8)) << 8)) << 8);
  v33 = *(_DWORD *)v29.color;
  v37 = *(_DWORD *)v29.color;
  __asm
  {
    vmulss  xmm0, xmm1, dword ptr [rax]
    vaddss  xmm5, xmm0, xmm7
    vmulss  xmm0, xmm1, dword ptr [rax+8]
    vaddss  xmm4, xmm0, xmm6
    vmulss  xmm0, xmm1, dword ptr [rax+4]
    vaddss  xmm2, xmm0, xmm7
    vmulss  xmm0, xmm1, dword ptr [rax+0Ch]
    vaddss  xmm1, xmm0, xmm6
    vmovups xmm0, xmmword ptr [rdi]
  }
  v41 = *(_DWORD *)v29.color;
  v45 = *(_DWORD *)v29.color;
  v49 = *(_DWORD *)v29.color;
  v53 = *(_DWORD *)v29.color;
  v57 = *(_DWORD *)v29.color;
  __asm
  {
    vmovups [rbp+10h+var_50], xmm0
    vmovss  [rsp+110h+var_D0], xmm5
    vmovss  [rsp+110h+var_CC], xmm4
    vmovss  [rsp+110h+var_C8], xmm3
    vmovss  [rsp+110h+var_C0], xmm2
    vmovss  [rsp+110h+var_BC], xmm4
    vmovss  [rsp+110h+var_B8], xmm3
    vmovss  [rsp+110h+var_B0], xmm2
    vmovss  [rsp+110h+var_AC], xmm4
    vmovss  [rsp+110h+var_A8], xmm3
    vmovss  [rsp+110h+var_A0], xmm2
    vmovss  [rsp+110h+var_9C], xmm1
    vmovss  [rsp+110h+var_98], xmm3
    vmovss  [rbp+10h+var_90], xmm2
    vmovss  [rbp+10h+var_8C], xmm1
    vmovss  [rbp+10h+var_88], xmm3
    vmovss  [rbp+10h+var_80], xmm5
    vmovss  [rbp+10h+var_7C], xmm1
    vmovss  [rbp+10h+var_78], xmm3
    vmovss  [rbp+10h+var_70], xmm5
    vmovss  [rbp+10h+var_6C], xmm1
    vmovss  [rbp+10h+var_68], xmm3
    vmovss  [rbp+10h+var_60], xmm5
    vmovss  [rbp+10h+var_5C], xmm4
    vmovss  [rbp+10h+var_58], xmm3
  }
  RB_DrawLines2D(&v58, 4, 1, &v29);
  _R11 = &vars0;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
RB_DrawSpotShadowOverlayItem
==============
*/
void RB_DrawSpotShadowOverlayItem(GfxCmdBufContext *gfxContext, const GfxBackEndData *data, int overlayType, const GfxSpotShadow *spotShadow, unsigned int spotShadowIndex, float x0, float y0, float imageWidth, const R_RT_ColorHandle *spotshadowsStaleCache, const R_RT_DepthHandle *spotshadowActiveCache)
{
  unsigned int sceneLightIndex; 
  R_SpotShadow_ActiveCacheEntry *ActiveCacheEntryForSceneLight; 
  __int64 v30; 
  R_SpotShadow_ActiveCacheEntry *v31; 
  unsigned int primaryLightCount; 
  const char *v44; 
  unsigned int v46; 
  GfxSpotShadowUpdate *v48; 
  unsigned int v49; 
  unsigned int spotShadowUpdateCount; 
  __int64 v51; 
  const R_RT_Surface *Surface; 
  unsigned int arraySliceIndex; 
  const char *v55; 
  bool v56; 
  GfxCmdBufInput *p_input; 
  CmdBufState *state; 
  const char *v74; 
  const char *v125; 
  bool v126; 
  GfxCmdBufInput *v133; 
  CmdBufState *v139; 
  char v140; 
  char v141; 
  char v142; 
  const char *v149; 
  GfxColor v171; 
  __int64 v172; 
  R_SpotShadow_StaleCacheEntry *staleCacheEntry; 
  GfxColor v174; 
  __int64 v175; 
  GfxFont *debugFont; 
  const char *v177; 
  const char *v182; 
  __int64 bspUpdateCount; 
  GfxFont *v187; 
  const char *v188; 
  const char *v192; 
  __int64 smodelUpdateCount; 
  GfxFont *v195; 
  const char *v196; 
  const char *v200; 
  __int64 smodelLODUpdateCount; 
  GfxFont *v203; 
  const char *v204; 
  const char *v208; 
  unsigned __int16 missingTransientBSP; 
  unsigned int v217; 
  __int64 updateCount; 
  GfxFont *v219; 
  const char *v220; 
  const char *v224; 
  __int64 dynUpdateCount; 
  GfxFont *v227; 
  const char *v228; 
  const char *v232; 
  __int64 maskedUpdateCount; 
  GfxFont *v235; 
  const char *v236; 
  const char *v240; 
  unsigned __int16 v242; 
  GfxFont *v243; 
  const char *v244; 
  const char *v248; 
  __int64 missingSModelLOD; 
  __int64 missingTransientSModel; 
  GfxFont *v252; 
  const char *v253; 
  const char *v257; 
  const char *v259; 
  unsigned int v260; 
  GfxFont *v261; 
  const char *v262; 
  const char *v266; 
  __int64 v268; 
  GfxFont *v269; 
  const char *v270; 
  const char *v274; 
  GfxFont *v276; 
  const char *v277; 
  const char *v281; 
  const dvar_t *v287; 
  __int64 v289; 
  GfxFont *v293; 
  unsigned int v297; 
  const char *v298; 
  const char *v302; 
  const char *v305; 
  char *fmt; 
  float fmtb; 
  char *fmta; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float fmtj; 
  float fmtk; 
  float fmtl; 
  float fmtm; 
  float fmtn; 
  float fmto; 
  float fmtp; 
  float fmtq; 
  float fmtr; 
  float fmts; 
  float fmtt; 
  float fmtu; 
  float fmtv; 
  float fmtw; 
  float fmtx; 
  float fmty; 
  float fmtz; 
  float fmtba; 
  float fmtbb; 
  float fmtbc; 
  float fmtbd; 
  float fmtbe; 
  float v347; 
  GfxExtents2D *v348; 
  float v349; 
  double v350; 
  float v351; 
  float v352; 
  float v353; 
  float v354; 
  float v355; 
  float v356; 
  float v357; 
  float v358; 
  char v359; 
  bool v360; 
  bool v361; 
  unsigned int v362; 
  const char *v363; 
  __int64 v364; 
  R_RT_Image *p_m_image; 
  __int64 v367; 
  float v368; 
  unsigned int subAtlasIndex; 
  unsigned int v374; 
  float4 result[2]; 
  R_RT_Handle v376; 
  char v383; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-58h], xmm7
    vmovaps xmmword ptr [r11-98h], xmm11
    vmovaps xmmword ptr [r11-0A8h], xmm12
  }
  _R12 = gfxContext;
  sceneLightIndex = spotShadow->sceneLightIndex;
  __asm
  {
    vmovaps xmmword ptr [r11-78h], xmm9
    vmovaps xmmword ptr [r11-0B8h], xmm13
    vmovaps xmmword ptr [r11-0C8h], xmm14
    vmovaps xmmword ptr [r11-0D8h], xmm15
  }
  v361 = (unsigned int)(overlayType - 6) <= 1;
  ActiveCacheEntryForSceneLight = R_SpotShadow_GetActiveCacheEntryForSceneLight(sceneLightIndex);
  __asm { vmovss  xmm15, [rsp+1F8h+arg_38] }
  v30 = spotShadow->sceneLightIndex;
  v31 = ActiveCacheEntryForSceneLight;
  __asm
  {
    vmovss  xmm9, cs:__real@43000000
    vmovss  xmm6, cs:__real@40000000
    vmovss  xmm14, cs:__real@41900000
    vcomiss xmm15, xmm9
  }
  v360 = !v141;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, rcx
    vmulss  xmm2, xmm0, xmm15
    vcvtsi2ss xmm1, xmm1, rdx
    vmulss  xmm0, xmm1, xmm6
    vaddss  xmm2, xmm2, xmm0
    vaddss  xmm0, xmm2, xmm14
  }
  v364 = v30;
  primaryLightCount = rgp.world->primaryLightCount;
  __asm { vmovss  [rsp+1F8h+var_174], xmm0 }
  if ( (unsigned int)v30 >= primaryLightCount )
  {
    v44 = "D";
  }
  else
  {
    v44 = "Ps";
    if ( data->sceneLights[v30].needsDynamicShadows )
      v44 = "P";
  }
  __asm { vmovups xmm0, xmmword ptr [r12] }
  v363 = v44;
  __asm { vmovups xmmword ptr [rsp+1F8h+var_108.m_surfaceID], xmm0 }
  if ( (unsigned int)v30 >= primaryLightCount )
    LODWORD(v30) = v30 - primaryLightCount;
  v374 = v30;
  RB_SetUIColorimetryParams((GfxCmdBufContext *)&v376);
  v46 = 0;
  __asm { vmovss  xmm11, [rsp+1F8h+arg_28] }
  v48 = NULL;
  v359 = 0;
  v49 = 0;
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount )
  {
    while ( 1 )
    {
      v51 = v49;
      v48 = &data->spotShadowUpdates[v51];
      if ( data->spotShadowUpdates[v51].sceneLightIndex == spotShadow->sceneLightIndex )
        break;
      if ( ++v49 >= spotShadowUpdateCount )
        goto LABEL_11;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovss  xmm7, [rsp+1F8h+arg_30]
      vaddss  xmm3, xmm15, cs:__real@40800000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rcx
      vmulss  xmm2, xmm1, xmm15
      vmovups xmmword ptr [rsp+1F8h+var_108.m_surfaceID], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
      vmulss  xmm1, xmm0, xmm6
      vaddss  xmm2, xmm2, xmm1
      vaddss  xmm0, xmm2, cs:__real@40800000
      vsubss  xmm2, xmm7, xmm6
      vsubss  xmm1, xmm11, xmm6
      vmovss  dword ptr [rsp+1F8h+fmt], xmm0
    }
    RB_DrawRect2D((GfxCmdBufContext *)&v376, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmte, (const GfxColor)-16711936);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rsp+1F8h+var_108.m_surfaceID], xmm0
    }
    RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v376, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(498)");
    v359 = 1;
  }
  else
  {
LABEL_11:
    __asm { vmovss  xmm7, [rsp+1F8h+arg_30] }
  }
  Surface = R_RT_Handle::GetSurface(&spotshadowsStaleCache->R_RT_Handle);
  arraySliceIndex = spotShadow->arraySliceIndex;
  subAtlasIndex = spotShadow->subAtlasIndex;
  *(_QWORD *)&v376.m_surfaceID = &Surface->m_image;
  v362 = arraySliceIndex;
  if ( arraySliceIndex >= Surface->m_image.m_base.numElements && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 512, ASSERT_TYPE_ASSERT, "(slice < shadowArray->numElements)", (const char *)&queryFormat, "slice < shadowArray->numElements") )
    __debugbreak();
  R_SpotShadow_GetAtlasUVOffsetAndScale(result, spotShadow);
  LODWORD(fmt) = subAtlasIndex;
  v55 = j_va("%s light(%d) shadow slice(%d,%d)", v363, (unsigned int)v30, v362, fmt);
  R_ProfBeginNamedEvent(_R12->state, v55);
  _RDI = _R12->source;
  __asm
  {
    vmovss  xmm12, cs:__real@3f800000
    vxorps  xmm13, xmm13, xmm13
    vucomiss xmm12, dword ptr [rdi+800h]
  }
  if ( !v56 )
    goto LABEL_19;
  __asm { vucomiss xmm13, dword ptr [rdi+804h] }
  if ( !v56 )
    goto LABEL_19;
  __asm { vucomiss xmm13, dword ptr [rdi+808h] }
  if ( !v56 )
    goto LABEL_19;
  __asm { vucomiss xmm13, dword ptr [rdi+80Ch] }
  if ( !v56 )
  {
LABEL_19:
    *(_QWORD *)_RDI->input.consts[16].v = 1065353216i64;
    *(_QWORD *)&_RDI->input.consts[16].xyz.z = 0i64;
    v56 = _RDI->constVersions[16]++ == 0xFFFF;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+1F8h+result.v]
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vucomiss xmm3, dword ptr [rdi+810h]
    vshufps xmm1, xmm0, xmm0, 0AAh ; 'ª'
    vshufps xmm2, xmm0, xmm0, 55h ; 'U'
  }
  if ( !v56 )
    goto LABEL_24;
  __asm { vucomiss xmm0, dword ptr [rdi+814h] }
  if ( !v56 )
    goto LABEL_24;
  __asm { vucomiss xmm2, dword ptr [rdi+818h] }
  if ( !v56 )
    goto LABEL_24;
  __asm { vucomiss xmm1, dword ptr [rdi+81Ch] }
  if ( !v56 )
  {
LABEL_24:
    __asm
    {
      vmovss  dword ptr [rdi+810h], xmm3
      vmovss  dword ptr [rdi+814h], xmm0
      vmovss  dword ptr [rdi+818h], xmm2
      vmovss  dword ptr [rdi+81Ch], xmm1
    }
    ++_RDI->constVersions[17];
  }
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &_RDI->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovss  [rsp+1F8h+var_1B0], xmm12
    vmovss  [rsp+1F8h+var_1B8], xmm12
    vmovss  [rsp+1F8h+var_1C0], xmm13
    vmovss  dword ptr [rsp+1F8h+var_1C8], xmm13
  }
  p_input->codeImages[4] = *(const GfxImage **)&v376.m_surfaceID;
  __asm
  {
    vmovss  dword ptr [rsp+1F8h+var_1D0], xmm15
    vmovaps xmm3, xmm7
    vmovaps xmm2, xmm11
    vmovss  dword ptr [rsp+1F8h+fmt], xmm15
    vmovaps [rsp+1F8h+var_68], xmm8
    vmovups xmmword ptr [rsp+1F8h+var_108.m_surfaceID], xmm0
  }
  RB_DrawStretchPic((GfxCmdBufContext *)&v376, rgp.shadowArrayOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v347, v351, v353, v355, v357, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmmword ptr [rsp+1F8h+var_108.m_surfaceID], xmm0
  }
  RB_EndTessSurfaceInternal((GfxCmdBufContext *)&v376, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(520)");
  state = _R12->state;
  R_ProfEndNamedEvent(state);
  if ( v361 && v31 )
  {
    _RAX = spotshadowActiveCache;
    __asm
    {
      vmovaps [rsp+1F8h+var_88], xmm10
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rsp+1F8h+result.v], ymm0
    }
    R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(v31, (const R_RT_DepthHandle *)&v376, (R_SpotShadow_ActiveCacheSubsetID)(overlayType != 6), (R_RT_DepthHandle *)result);
    _RDX = v364 * 152;
    v74 = "BSP + smodel";
    _RCX = data;
    __asm
    {
      vmovsd  xmm6, qword ptr [rdx+rcx+53A054h]
      vmovss  xmm8, dword ptr [rdx+rcx+53A050h]
      vmovsd  xmm9, qword ptr [rdx+rcx+53A020h]
      vmovss  xmm10, dword ptr [rdx+rcx+53A060h]
    }
    v368 = data->sceneLights[v364].bulbLength.v[2];
    __asm
    {
      vmovss  xmm7, [rsp+1F8h+var_180]
      vmulss  xmm1, xmm6, xmm6
      vmovsd  [rsp+1F8h+var_188], xmm6
      vmovss  xmm5, dword ptr [rsp+1F8h+var_188+4]
      vmulss  xmm0, xmm5, xmm5
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, xmm7
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm12, xmm0
      vdivss  xmm4, xmm12, xmm0
      vmulss  xmm0, xmm4, xmm6
      vmulss  xmm1, xmm0, xmm8
      vaddss  xmm6, xmm1, xmm6
      vmulss  xmm1, xmm4, xmm7
      vmulss  xmm2, xmm4, xmm5
      vmulss  xmm0, xmm2, xmm8
      vaddss  xmm3, xmm0, xmm5
      vmulss  xmm2, xmm1, xmm8
      vaddss  xmm5, xmm2, xmm7
      vshufps xmm0, xmm9, xmm9, 55h ; 'U'
      vmulss  xmm1, xmm3, xmm0
      vmulss  xmm0, xmm6, xmm9
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm5, [rsp+1F8h+var_150]
      vaddss  xmm7, xmm2, xmm1
      vandps  xmm7, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm6, xmm6
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm0, xmm7, xmm7
      vmulss  xmm1, xmm5, xmm5
      vaddss  xmm3, xmm2, xmm1
      vsubss  xmm2, xmm3, xmm0
      vsqrtss xmm1, xmm2, xmm2
      vmulss  xmm4, xmm1, xmm10
    }
    if ( overlayType == 6 )
      v74 = "BSP";
    __asm
    {
      vmulss  xmm0, xmm10, xmm10
      vsubss  xmm0, xmm12, xmm0
      vsqrtss xmm1, xmm0, xmm0
      vdivss  xmm2, xmm4, xmm1
      vaddss  xmm3, xmm2, xmm7
      vaddss  xmm6, xmm3, dword ptr [rdx+rcx+53A044h]
      vaddss  xmm0, xmm3, xmm7
      vaddss  xmm1, xmm0, dword ptr [rdx+rcx+53A074h]
      vmaxss  xmm7, xmm1, xmm12
    }
    LODWORD(fmta) = spotShadow->cacheIndex;
    v125 = j_va("%s light(%d) cached %s shadow(%d)", v363, (unsigned int)v30, v74, fmta);
    R_ProfBeginNamedEvent(state, v125);
    _RDI = _R12->source;
    __asm
    {
      vmovaps xmm10, [rsp+1F8h+var_88]
      vaddss  xmm0, xmm7, xmm12
      vmaxss  xmm1, xmm0, xmm6
      vucomiss xmm13, dword ptr [rdi+800h]
      vxorps  xmm3, xmm1, cs:__xmm@80000000800000008000000080000000
      vxorps  xmm0, xmm7, cs:__xmm@80000000800000008000000080000000
    }
    if ( !v126 )
      goto LABEL_39;
    __asm { vucomiss xmm13, dword ptr [rdi+804h] }
    if ( !v126 )
      goto LABEL_39;
    __asm { vucomiss xmm0, dword ptr [rdi+808h] }
    if ( !v126 )
      goto LABEL_39;
    __asm { vucomiss xmm3, dword ptr [rdi+80Ch] }
    if ( !v126 )
    {
LABEL_39:
      __asm
      {
        vmovss  dword ptr [rdi+808h], xmm0
        vmovss  dword ptr [rdi+80Ch], xmm3
      }
      *(_QWORD *)_RDI->input.consts[16].v = 0i64;
      v126 = _RDI->constVersions[16]++ == 0xFFFF;
    }
    __asm { vucomiss xmm13, dword ptr [rdi+810h] }
    if ( !v126 )
      goto LABEL_44;
    __asm { vucomiss xmm13, dword ptr [rdi+814h] }
    if ( !v126 )
      goto LABEL_44;
    __asm { vucomiss xmm13, dword ptr [rdi+818h] }
    if ( !v126 )
      goto LABEL_44;
    __asm { vucomiss xmm13, dword ptr [rdi+81Ch] }
    if ( !v126 )
    {
LABEL_44:
      *(_QWORD *)_RDI->input.consts[17].v = 0i64;
      *(_QWORD *)&_RDI->input.consts[17].xyz.z = 0i64;
      ++_RDI->constVersions[17];
    }
    p_m_image = &R_RT_Handle::GetSurface(&v376)->m_image;
    if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
      __debugbreak();
    v133 = &_RDI->input;
    if ( !v133 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovss  xmm7, [rsp+1F8h+arg_30]
      vmovss  [rsp+1F8h+var_1B0], xmm12
      vmovss  [rsp+1F8h+var_1B8], xmm12
      vmovss  [rsp+1F8h+var_1C0], xmm13
      vaddss  xmm1, xmm7, xmm15
      vaddss  xmm3, xmm1, cs:__real@40000000
      vmovss  dword ptr [rsp+1F8h+var_1C8], xmm13
    }
    v133->codeImages[4] = &p_m_image->m_base;
    __asm
    {
      vmovss  dword ptr [rsp+1F8h+var_1D0], xmm15
      vmovaps xmm2, xmm11
      vmovss  dword ptr [rsp+1F8h+fmt], xmm15
      vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
    }
    RB_DrawStretchPic((GfxCmdBufContext *)result, rgp.shadowOverlayMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, v349, v352, v354, v356, v358, 0xFFFFFFFF, GFX_PRIM_STATS_HUD);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
    }
    RB_EndTessSurfaceInternal((GfxCmdBufContext *)result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(547)");
    v139 = _R12->state;
    R_ProfEndNamedEvent(v139);
    v140 = v359;
    if ( v359 && v48->smodelsChangedCount )
    {
      __asm
      {
        vmovss  xmm8, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
      }
      R_SpotShadow_GetMapSize();
      __asm
      {
        vcvtsi2ss xmm0, xmm0, rax
        vdivss  xmm0, xmm8, xmm0
        vmulss  xmm6, xmm0, xmm15
        vcomiss xmm6, xmm13
      }
      if ( v141 | v142 )
        goto LABEL_123;
      __asm { vcomiss xmm6, xmm12 }
      if ( !(v141 | v142) )
      {
LABEL_123:
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+1F8h+var_1D0], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 553, ASSERT_TYPE_ASSERT, "( ( ratio > 0.0f && ratio <= 1.0f ) )", "( ratio ) = %g", v350) )
          __debugbreak();
      }
      v149 = j_va("%s light(%d) cached shadow extents", v363, (unsigned int)v30);
      R_ProfBeginNamedEvent(v139, v149);
      if ( v48->smodelsChangedCount )
      {
        do
        {
          __asm { vmovups xmm0, xmmword ptr [r12] }
          v348 = &v48->smodelChangedBoundingBox[v46];
          __asm
          {
            vmovaps xmm3, xmm7
            vmovaps xmm2, xmm11
            vmovss  dword ptr [rsp+1F8h+fmt], xmm6
            vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
          }
          RB_DrawSpotShadowOverlayExtents((GfxCmdBufContext *)result, v49, *(double *)&_XMM2, *(double *)&_XMM3, fmtd);
          ++v46;
        }
        while ( v46 < v48->smodelsChangedCount );
        v139 = _R12->state;
      }
      R_ProfEndNamedEvent(v139);
      v140 = v359;
    }
    else
    {
      __asm { vmovss  xmm8, cs:__real@3f000000 }
    }
    __asm { vmovss  xmm9, cs:__real@43000000 }
  }
  else
  {
    __asm { vmovss  xmm8, cs:__real@3f000000 }
    v140 = v359;
  }
  __asm
  {
    vaddss  xmm6, xmm7, [rsp+1F8h+var_174]
    vmovaps xmm15, [rsp+1F8h+var_D8]
    vmovaps xmm13, [rsp+1F8h+var_B8]
  }
  v171.packed = -8355712;
  v172 = (unsigned int)v30;
  staleCacheEntry = spotShadow->staleCacheEntry;
  v367 = v172;
  if ( g_lightScore[v172].ranking0 == 255 )
  {
    v174.packed = -8355712;
  }
  else
  {
    v174.packed = -12517632;
    if ( !v140 )
      v174.packed = -12582657;
  }
  if ( v360 )
  {
    if ( v31 )
      v175 = R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(v31);
    else
      v175 = 255i64;
    debugFont = backEnd.debugFont;
    LODWORD(v348) = spotShadow->subAtlasIndex;
    LODWORD(fmta) = spotShadow->arraySliceIndex;
    v177 = j_va("%s(%d):%d,%d-%d", v363, v374, v175, fmta, v348);
  }
  else
  {
    debugFont = backEnd.debugFont;
    v177 = j_va("%s(%d)", v363, v374);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vaddss  xmm1, xmm6, xmm12
    vaddss  xmm7, xmm11, xmm12
    vmovaps xmm3, xmm7
    vmovss  dword ptr [rsp+1F8h+fmt], xmm1
  }
  v182 = v177;
  __asm { vmovups xmmword ptr [rsp+1F8h+result.v], xmm0 }
  RB_DrawText((GfxCmdBufContext *)result, v177, debugFont, *(float *)&_XMM3, fmtf, (const GfxColor)-16777216);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovaps xmm3, xmm11
    vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
    vmovss  dword ptr [rsp+1F8h+fmt], xmm6
  }
  RB_DrawText((GfxCmdBufContext *)result, v182, debugFont, *(float *)&_XMM3, fmtg, v174);
  __asm { vaddss  xmm6, xmm6, xmm14 }
  if ( v31 )
  {
    bspUpdateCount = v31->bspUpdateCount;
    if ( !v360 )
    {
      v203 = backEnd.debugFont;
      v204 = j_va("SU:%d,%d,%d", bspUpdateCount, v31->smodelUpdateCount, v31->smodelLODUpdateCount);
      goto LABEL_85;
    }
    if ( (_DWORD)bspUpdateCount )
    {
      v187 = backEnd.debugFont;
      v188 = j_va("bsp U%d F%d", bspUpdateCount, v31->bspUpdateFrame);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v192 = v188;
      RB_DrawText((GfxCmdBufContext *)result, v188, v187, *(float *)&_XMM3, fmth, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v192, v187, *(float *)&_XMM3, fmti, v174);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
    smodelUpdateCount = v31->smodelUpdateCount;
    if ( (_DWORD)smodelUpdateCount )
    {
      v195 = backEnd.debugFont;
      v196 = j_va("sm U%d F%d", smodelUpdateCount, v31->smodelUpdateFrame);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v200 = v196;
      RB_DrawText((GfxCmdBufContext *)result, v196, v195, *(float *)&_XMM3, fmtj, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v200, v195, *(float *)&_XMM3, fmtk, v174);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
    smodelLODUpdateCount = v31->smodelLODUpdateCount;
    if ( (_DWORD)smodelLODUpdateCount )
    {
      v203 = backEnd.debugFont;
      v204 = j_va("smLOD U%d F%d", smodelLODUpdateCount, v31->smodelLODUpdateFrame);
LABEL_85:
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v208 = v204;
      RB_DrawText((GfxCmdBufContext *)result, v204, v203, *(float *)&_XMM3, fmtl, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v208, v203, *(float *)&_XMM3, fmtm, v174);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
  }
  if ( !staleCacheEntry )
    goto LABEL_110;
  missingTransientBSP = staleCacheEntry->missingTransientBSP;
  if ( missingTransientBSP || staleCacheEntry->missingTransientSModel )
    v171.packed = -1;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, xmm8
    vaddss  xmm3, xmm1, xmm9
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si eax, xmm1
  }
  v217 = (unsigned __int8)_EAX | (((unsigned __int8)_EAX | ((_EAX | 0xFFFFFF00) << 8)) << 8);
  if ( v360 )
  {
    updateCount = staleCacheEntry->updateCount;
    if ( (_DWORD)updateCount )
    {
      v219 = backEnd.debugFont;
      v220 = j_va("staticUpdate:%d", updateCount);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v224 = v220;
      RB_DrawText((GfxCmdBufContext *)result, v220, v219, *(float *)&_XMM3, fmtn, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v224, v219, *(float *)&_XMM3, fmto, v174);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
    dynUpdateCount = staleCacheEntry->dynUpdateCount;
    if ( (_DWORD)dynUpdateCount )
    {
      v227 = backEnd.debugFont;
      v228 = j_va("dynUpdate:%d", dynUpdateCount);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v232 = v228;
      RB_DrawText((GfxCmdBufContext *)result, v228, v227, *(float *)&_XMM3, fmtp, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v232, v227, *(float *)&_XMM3, fmtq, v174);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
    maskedUpdateCount = staleCacheEntry->maskedUpdateCount;
    if ( (_DWORD)maskedUpdateCount )
    {
      v235 = backEnd.debugFont;
      v236 = j_va("maskedUpdate:%d", maskedUpdateCount);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v240 = v236;
      RB_DrawText((GfxCmdBufContext *)result, v236, v235, *(float *)&_XMM3, fmtr, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v240, v235, *(float *)&_XMM3, fmts, v174);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
    v242 = staleCacheEntry->missingTransientBSP;
    if ( v242 )
    {
      v243 = backEnd.debugFont;
      v244 = j_va("MissingBSP:%d", v242);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v248 = v244;
      RB_DrawText((GfxCmdBufContext *)result, v244, v243, *(float *)&_XMM3, fmtt, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v248, v243, *(float *)&_XMM3, fmtu, v171);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
    missingSModelLOD = staleCacheEntry->missingSModelLOD;
    missingTransientSModel = staleCacheEntry->missingTransientSModel;
    if ( (_DWORD)missingTransientSModel + (_DWORD)missingSModelLOD )
    {
      v252 = backEnd.debugFont;
      v253 = j_va("MissingSM:%d,%d", missingTransientSModel, missingSModelLOD);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v257 = v253;
      RB_DrawText((GfxCmdBufContext *)result, v253, v252, *(float *)&_XMM3, fmtv, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v257, v252, *(float *)&_XMM3, fmtw, v171);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
    if ( !v359 )
    {
      v259 = "Staleness:%d";
LABEL_109:
      v276 = backEnd.debugFont;
      v277 = j_va(v259, staleCacheEntry->staleness);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v281 = v277;
      RB_DrawText((GfxCmdBufContext *)result, v277, v276, *(float *)&_XMM3, fmtbb, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v281, v276, *(float *)&_XMM3, fmtbc, (const GfxColor)v217);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
  }
  else
  {
    v260 = staleCacheEntry->dynUpdateCount;
    if ( v260 )
    {
      v261 = backEnd.debugFont;
      v262 = j_va("DU:%d", v260);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v266 = v262;
      RB_DrawText((GfxCmdBufContext *)result, v262, v261, *(float *)&_XMM3, fmtx, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v266, v261, *(float *)&_XMM3, fmty, v174);
      missingTransientBSP = staleCacheEntry->missingTransientBSP;
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
    v268 = staleCacheEntry->missingTransientSModel + staleCacheEntry->missingSModelLOD + (unsigned int)missingTransientBSP;
    if ( (_DWORD)v268 )
    {
      v269 = backEnd.debugFont;
      v270 = j_va("M:%d", v268);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vaddss  xmm1, xmm6, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+1F8h+fmt], xmm1
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      }
      v274 = v270;
      RB_DrawText((GfxCmdBufContext *)result, v270, v269, *(float *)&_XMM3, fmtz, (const GfxColor)-16777216);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovaps xmm3, xmm11
        vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
        vmovss  dword ptr [rsp+1F8h+fmt], xmm6
      }
      RB_DrawText((GfxCmdBufContext *)result, v274, v269, *(float *)&_XMM3, fmtba, v171);
      __asm { vaddss  xmm6, xmm6, xmm14 }
    }
    if ( !v359 )
    {
      v259 = "S:%d";
      goto LABEL_109;
    }
  }
LABEL_110:
  _RBX = v367;
  _RSI = g_lightScore;
  __asm
  {
    vmovaps xmm14, [rsp+1F8h+var_C8]
    vmovaps xmm9, [rsp+1F8h+var_78]
  }
  if ( g_lightScore[v367].ranking0 != 255 )
  {
    v287 = DVARINT_sm_spotShadowScoreSystem;
    if ( !DVARINT_sm_spotShadowScoreSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowScoreSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v287);
    if ( v287->current.integer )
    {
      __asm { vmovss  xmm0, dword ptr [rsi+rbx*8] }
      LOWORD(v289) = g_lightScore[v367].ranking0;
      __asm { vmovaps xmm2, xmm0 }
    }
    else
    {
      LOWORD(v289) = g_lightScore[v367].ranking0;
      __asm
      {
        vmovss  xmm2, dword ptr [rsi+rbx*8]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edx
        vmulss  xmm0, xmm0, cs:__real@3c800000
      }
    }
    v293 = backEnd.debugFont;
    __asm
    {
      vaddss  xmm0, xmm0, xmm12
      vmulss  xmm1, xmm0, cs:__real@42ff0000
      vcvttss2si eax, xmm1
    }
    v289 = (unsigned __int16)v289;
    v297 = (unsigned __int8)_EAX | (((unsigned __int8)_EAX | ((_EAX | 0xFFFFFF00) << 8)) << 8);
    v298 = "Rank:%d Score:%03.2f";
    __asm
    {
      vcvtss2sd xmm2, xmm2, xmm2
      vaddss  xmm8, xmm6, xmm12
      vmovq   r8, xmm2
    }
    if ( !v360 )
      v298 = "%d:%03.2f";
    v302 = j_va(v298, v289, _R8);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovaps xmm3, xmm7
      vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      vmovss  dword ptr [rsp+1F8h+fmt], xmm8
    }
    v305 = v302;
    RB_DrawText((GfxCmdBufContext *)result, v302, v293, *(float *)&_XMM3, fmtbd, (const GfxColor)-16777216);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovaps xmm3, xmm11
      vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
      vmovss  dword ptr [rsp+1F8h+fmt], xmm6
    }
    RB_DrawText((GfxCmdBufContext *)result, v305, v293, *(float *)&_XMM3, fmtbe, (const GfxColor)v297);
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups xmmword ptr [rsp+1F8h+result.v], xmm0
  }
  RB_EndTessSurfaceInternal((GfxCmdBufContext *)result, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(739)");
  __asm { vmovaps xmm8, [rsp+1F8h+var_68] }
  _R11 = &v383;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-28h]
    vmovaps xmm7, xmmword ptr [r11-38h]
    vmovaps xmm11, xmmword ptr [r11-78h]
    vmovaps xmm12, xmmword ptr [r11-88h]
  }
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
  GfxDrawListType v13; 
  GfxDrawListType v16; 
  __int64 v21; 
  R_RT_DepthHandle v22; 
  R_RT_DepthHandle v23; 
  GfxDrawCallOutput drawOutput; 

  v4 = spotShadowUpdateIndex;
  _RSI = viewInfo;
  _R15 = gfxContext;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 257, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 258, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( (unsigned int)v4 >= data->spotShadowUpdateCount )
  {
    LODWORD(v21) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 259, ASSERT_TYPE_ASSERT, "(unsigned)( spotShadowUpdateIndex ) < (unsigned)( data->spotShadowUpdateCount )", "spotShadowUpdateIndex doesn't index data->spotShadowUpdateCount\n\t%i not in [0, %i)", v21, data->spotShadowUpdateCount) )
      __debugbreak();
  }
  state = _R15->state;
  p_input = &_R15->source->input;
  R_InitLocalCmdBufState(state, p_input);
  __asm { vmovups xmm1, xmmword ptr [r15] }
  _R12 = &_RSI->sceneRtInput.m_spotShadowRts[v4];
  __asm
  {
    vmovups xmmword ptr [rsp+2488h+var_2448], xmm1
    vmovups ymm0, ymmword ptr [r12]
    vmovups [rsp+2488h+var_2428], ymm0
  }
  R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v22, &v23, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(263)");
  R_ClearScreen(state, 0x10u, 0);
  R_ShutdownLocalCmdBufState(state, p_input);
  v13 = v4 + 29;
  if ( R_RunDrawListCommandBuffer(data, (const GfxDrawListType)(v4 + 29)) )
  {
    R_InitDrawCallOutput(data, &drawOutput);
    R_LockIfGfxImmediateContext(state->device);
    R_ProfBeginDrawListImmediate(v13);
    R_GPU_BeginRunDrawListTimer(v13);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi+6420h]
      vmovups ymm1, ymmword ptr [r12]
      vmovups [rsp+2488h+var_2428], ymm0
      vmovups [rsp+2488h+var_2448], ymm1
    }
    R_DrawSpotShadowMapStatics(_RSI, &_RSI->drawList[v13], v13, &v22, &v23, v4, &drawOutput, 0);
    R_GPU_EndTimer();
    R_ProfEndDrawListImmediate();
    R_FlushImmediateContext();
    R_UnlockIfGfxImmediateContext(state->device);
  }
  v16 = v4 + 37;
  if ( R_RunDrawListCommandBuffer(data, (const GfxDrawListType)(v4 + 37)) )
  {
    R_InitDrawCallOutput(data, &drawOutput);
    R_LockIfGfxImmediateContext(state->device);
    R_ProfBeginDrawListImmediate(v16);
    R_GPU_BeginRunDrawListTimer(v16);
    __asm
    {
      vmovups ymm0, ymmword ptr [r12]
      vmovups [rsp+2488h+var_2428], ymm0
    }
    R_DrawSpotShadowMapDynamics(_RSI, &_RSI->drawList[v16], v16, &v23, v4, &drawOutput, 0);
    R_GPU_EndTimer();
    R_ProfEndDrawListImmediate();
    R_FlushImmediateContext();
    R_UnlockIfGfxImmediateContext(state->device);
  }
  R_InitLocalCmdBufState(state, p_input);
  __asm
  {
    vmovups ymm0, ymmword ptr [r12]
    vmovups xmm1, xmmword ptr [r15]
    vmovups [rsp+2488h+var_2428], ymm0
    vmovups xmmword ptr [rsp+2488h+var_2448], xmm1
  }
  R_SetRenderTargetsInternal_DepthOnly((GfxCmdBufContext *)&v22, &v23, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(327)");
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups xmmword ptr [rsp+2488h+var_2448], xmm0
  }
  R_ResolveDepth((GfxCmdBufContext *)&v22);
  R_ShutdownLocalCmdBufState(state, p_input);
  RB_SpotShadow_Resolve(state, data, _RSI, v4);
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
  GfxCmdBufContext v9; 

  _R14 = gfxContext;
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 339, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 340, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  spotShadowUpdateCount = data->spotShadowUpdateCount;
  if ( spotShadowUpdateCount > 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 343, ASSERT_TYPE_ASSERT, "(spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT)", (const char *)&queryFormat, "spotShadowUpdateCount <= R_SPOTSHADOW_UPDATE_PER_FRAME_LIMIT") )
    __debugbreak();
  for ( i = 0; i < spotShadowUpdateCount; ++i )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rsp+48h+var_18.source], xmm0
    }
    RB_SpotShadowMap(&v9, data, viewInfo, i);
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
  bool v11; 
  int v13; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v22; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v31; 
  const GfxTexture *v32; 
  R_RT_Handle v43; 
  R_RT_Handle v44; 
  R_RT_ColorHandle v45; 
  R_RT_ColorHandle v46; 
  R_RT_Handle v47; 
  R_RT_BufferHandle v49; 
  R_RT_DepthHandle v50; 
  R_RT_ColorHandle result; 
  ComputeCmdBufState state; 

  _RDI = viewInfo;
  v6 = spotShadowUpdateIndex;
  R_InitComputeCmdBufState(&state, (GfxBackEndData *)data, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
  R_LockIfGfxImmediateContext(gfxState->device);
  R_ComputeWaitForGraphics(&state, gfxState);
  v9 = &data->spotShadowUpdates[v6];
  _RAX = 32 * (v6 + 382);
  v11 = data->spotShadowUpdates[v6].stale == NULL;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rdi]
    vmovups [rbp+0AE0h+var_A80], ymm0
    vmovups ymmword ptr [rbp+0AE0h+var_B60.m_surfaceID], ymm0
  }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 220, ASSERT_TYPE_ASSERT, "(spotShadowUpdate->stale != nullptr)", (const char *)&queryFormat, "spotShadowUpdate->stale != nullptr") )
    __debugbreak();
  R_SpotShadow_StaleCacheEntry::GetColorRtDraw3D(data->spotShadowUpdates[v6].stale, &result);
  if ( !result.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 223, ASSERT_TYPE_ASSERT, "(!staleCacheRT.IsNull())", (const char *)&queryFormat, "!staleCacheRT.IsNull()") )
    __debugbreak();
  v13 = R_RT_Handle::GetSurface(&v43)->m_image.m_base.height >> 1;
  Surface = R_RT_Handle::GetSurface(&v43);
  _RAX = R_RT_CreateInternal(&v47, Surface->m_image.m_base.width >> 1, v13, Surface->m_image.m_base.width >> 1, v13, 1u, 1u, 1u, g_R_RT_renderTargetFmts[7], R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Exponential Shadowmap Depth 0", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp(225)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   edi, xmm0
    vmovups [rbp+0AE0h+var_AC0], ymm0
    vmovups ymmword ptr [rbp+0AE0h+var_B40.m_surfaceID], ymm0
  }
  if ( (_WORD)_EDI )
  {
    R_RT_Handle::GetSurface(&v44);
    if ( (R_RT_Handle::GetSurface(&v44)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0AE0h+var_B40.m_surfaceID] }
      LODWORD(_RBX) = v44.m_tracking.m_allocCounter;
      LOWORD(_EDI) = v44.m_surfaceID;
      __asm { vmovups [rbp+0AE0h+var_AC0], ymm0 }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0AE0h+var_B40.m_surfaceID] }
      LODWORD(_RBX) = v44.m_tracking.m_allocCounter;
      LOWORD(_EDI) = v44.m_surfaceID;
      __asm { vmovups [rbp+0AE0h+var_AC0], ymm0 }
    }
  }
  else
  {
    __asm { vpextrd rbx, xmm0, 2 }
    if ( (_DWORD)_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
  }
  R_ProfBeginNamedEvent(&state, "Resolve Spot Shadow Map");
  __asm
  {
    vmovups ymm0, [rbp+0AE0h+var_AC0]
    vmovups ymmword ptr [rbp+0AE0h+var_B60.m_surfaceID], ymm0
  }
  R_ProfBeginNamedEvent(&state, "Resolve Exponential Shadow Map");
  v22 = R_RT_Handle::GetSurface(&v43);
  Resident = R_Texture_GetResident(v22->m_image.m_base.textureId);
  R_HW_AddResourceTransition(&state, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(&state);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+0AE0h+var_B40.m_tracking.m_name], xmm0
    vmovdqu xmmword ptr [rbp+0AE0h+var_B20+10h], xmm0
    vmovdqu xmmword ptr [rbp+0AE0h+var_AA0+10h], xmm0
    vmovdqu xmmword ptr [rbp+0AE0h+var_B00+10h], xmm0
  }
  v44.m_surfaceID = 0;
  v44.m_tracking.m_allocCounter = 0;
  __asm { vmovups ymm1, ymmword ptr [rbp+0AE0h+var_B40.m_surfaceID] }
  v49.m_surfaceID = 0;
  v49.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm0, [rbp+0AE0h+var_AA0]
    vmovups ymmword ptr [rbp+0AE0h+var_B40.m_surfaceID], ymm1
    vmovups [rbp+0AE0h+var_AA0], ymm0
    vmovups ymm0, [rbp+0AE0h+var_A80]
  }
  v45.m_surfaceID = 0;
  v45.m_tracking.m_allocCounter = 0;
  __asm { vmovups ymm1, [rbp+0AE0h+var_B20] }
  v46.m_surfaceID = 0;
  v46.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups [rbp+0AE0h+var_B20], ymm1
    vmovups ymm1, ymmword ptr [rbp+0AE0h+var_B60.m_surfaceID]
    vmovups [rbp+0AE0h+var_A80], ymm0
    vmovups ymm0, [rbp+0AE0h+var_B00]
    vmovups [rbp+0AE0h+var_B00], ymm0
    vmovups ymmword ptr [rbp+0AE0h+var_AE0.m_surfaceID], ymm1
  }
  R_SpotShadow_Downsample(&state, (R_RT_ColorHandle *)&v47, (R_RT_DepthHandle *)&v46, &v50, (R_RT_BufferHandle *)&v45, &v49, (R_RT_BufferHandle *)&v44, v9, 0, 0);
  v31 = R_RT_Handle::GetSurface(&v43);
  v32 = R_Texture_GetResident(v31->m_image.m_base.textureId);
  R_HW_AddResourceTransition(&state, v32, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_HW_FlushResourceTransitions(&state);
  R_ProfEndNamedEvent(&state);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0AE0h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rbp+0AE0h+var_AE0.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(&state, &v47, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+0AE0h+var_B60.m_tracking.m_name], xmm0
    vmovdqu xmmword ptr [rbp+0AE0h+var_B20+10h], xmm0
    vmovdqu xmmword ptr [rbp+0AE0h+var_B00+10h], xmm0
  }
  v46.m_surfaceID = 0;
  v46.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm0, [rbp+0AE0h+var_B00]
    vmovups [rbp+0AE0h+var_A80], ymm0
    vmovups ymm0, ymmword ptr [rbp+0AE0h+result.baseclass_0.m_surfaceID]
  }
  v43.m_surfaceID = 0;
  v43.m_tracking.m_allocCounter = 0;
  __asm { vmovups ymm1, ymmword ptr [rbp+0AE0h+var_B60.m_surfaceID] }
  v45.m_surfaceID = 0;
  v45.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups [rbp+0AE0h+var_B00], ymm0
    vmovups ymm0, [rbp+0AE0h+var_AC0]
    vmovups ymmword ptr [rbp+0AE0h+var_AE0.m_surfaceID], ymm1
    vmovups ymm1, [rbp+0AE0h+var_B20]
    vmovups [rbp+0AE0h+var_B20], ymm0
    vmovups ymmword ptr [rbp+0AE0h+var_B60.m_surfaceID], ymm1
  }
  R_SpotShadow_Blur(&state, &v45, &v46, (R_RT_BufferHandle *)&v43, (R_RT_BufferHandle *)&v50, (R_RT_BufferHandle *)&v47, v9, v6);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0AE0h+result.baseclass_0.m_surfaceID]
    vmovups ymmword ptr [rbp+0AE0h+var_AE0.m_surfaceID], ymm0
  }
  R_HW_AddResourceTransition(&state, &v47, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(&state);
  __asm
  {
    vmovups ymm0, [rbp+0AE0h+var_AC0]
    vmovups ymmword ptr [rbp+0AE0h+var_B60.m_surfaceID], ymm0
  }
  if ( (_WORD)_EDI )
  {
    R_RT_Handle::GetSurface(&v43);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+0AE0h+var_B60.m_surfaceID]
      vmovups ymmword ptr [rbp+0AE0h+var_AE0.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v47);
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
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v31; 
  R_RT_Handle *v32; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  unsigned int AtlasIndex; 
  R_RT_Handle *Resident; 
  R_RT_Handle *p_view; 
  R_RT_Handle *v38; 
  R_RT_Handle *v39; 
  char data[8]; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 

  __asm { vmovaps [rsp+108h+var_58], xmm6 }
  _R12 = spotShadowUpdate;
  v38 = htileMaskCounter;
  p_view = htileMask;
  stale = spotShadowUpdate->stale;
  Resident = dst;
  v39 = htileMaskIndirectArgs;
  AtlasIndex = R_SpotShadow_StaleCacheEntry::GetAtlasIndex(stale);
  width = R_RT_Handle::GetSurface(src)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(src)->m_image.m_base.height;
  v17 = R_RT_Handle::GetSurface(dst)->m_image.m_base.width;
  if ( v17 != 2 * R_RT_Handle::GetSurface(src)->m_image.m_base.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 141, ASSERT_TYPE_ASSERT, "(dst.GetWidth() == R_SPOTSHADOW_LAYER_ATLAS_COUNT_DIM * src.GetWidth())", (const char *)&queryFormat, "dst.GetWidth() == R_SPOTSHADOW_LAYER_ATLAS_COUNT_DIM * src.GetWidth()") )
    __debugbreak();
  v18 = R_RT_Handle::GetSurface(dst)->m_image.m_base.height;
  if ( v18 != 2 * R_RT_Handle::GetSurface(src)->m_image.m_base.height && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 142, ASSERT_TYPE_ASSERT, "(dst.GetHeight() == R_SPOTSHADOW_LAYER_ATLAS_COUNT_DIM * src.GetHeight())", (const char *)&queryFormat, "dst.GetHeight() == R_SPOTSHADOW_LAYER_ATLAS_COUNT_DIM * src.GetHeight()") )
    __debugbreak();
  v19 = R_RT_Handle::GetSurface(src)->m_image.m_base.width;
  v20 = R_RT_Handle::GetSurface(src)->m_image.m_base.height;
  R_RT_Handle::GetSurface(src);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm0, xmm6, xmm0
    vmovss  [rsp+108h+var_98], xmm0
  }
  R_RT_Handle::GetSurface(src);
  __asm
  {
    vmovss  xmm1, dword ptr [r12+158h]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
  }
  v46 = height * (AtlasIndex >> 1);
  v45 = width * (AtlasIndex & 1);
  __asm
  {
    vdivss  xmm0, xmm6, xmm0
    vmovss  [rsp+108h+var_94], xmm0
    vmovss  xmm0, dword ptr [r12+15Ch]
  }
  v48 = 8 * islice + 4;
  __asm
  {
    vmovss  [rsp+108h+var_A0], xmm1
    vmovss  [rsp+108h+var_9C], xmm0
  }
  v47 = v48 * ((unsigned int)(2 * v19) >> 3) * ((unsigned int)(2 * v20) >> 3);
  R_UploadAndSetComputeConstants(state, 0, data, 0x40u, NULL);
  Surface = R_RT_Handle::GetSurface(Resident);
  Resident = (R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&Resident);
  v31 = R_RT_Handle::GetSurface(src);
  Resident = (R_RT_Handle *)R_Texture_GetResident(v31->m_image.m_base.textureId);
  R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&Resident);
  v32 = p_view;
  if ( p_view->m_surfaceID && R_SpotShadow_ShouldUseHTileMask(spotShadowUpdate) )
  {
    p_view = (R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer(v32)->view;
    R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&p_view);
    v38 = (R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer(v38)->view;
    R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&v38);
    R_SetComputeShader(state, rgp.spotBlurMasked);
    WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v39);
    R_DispatchIndirect(state, WrappedBuffer->buffer, (islice << 6) + 32);
  }
  else
  {
    R_SetComputeShader(state, rgp.spotBlur);
    if ( (!width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
      __debugbreak();
    R_Dispatch(state, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
  }
  __asm { vmovaps xmm6, [rsp+108h+var_58] }
}

/*
==============
R_SpotShadow_Downsample
==============
*/
void R_SpotShadow_Downsample(ComputeCmdBufState *state, R_RT_ColorHandle *dstArray, R_RT_DepthHandle *staticShadowsCache, R_RT_DepthHandle *dynamicShadowsArray, R_RT_BufferHandle *htileMask, R_RT_BufferHandle *htileMaskCounter, R_RT_BufferHandle *htileMaskIndirectArgs, const GfxSpotShadowUpdate *spotShadowUpdate, bool useArrayBindings, unsigned int islice)
{
  bool v19; 
  bool v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  R_SpotShadow_ActiveCacheEntry *active; 
  char v42; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v48; 
  const R_RT_Surface *v49; 
  const R_RT_Surface *v53; 
  bool v54; 
  int v55; 
  const GfxWrappedRWBuffer *WrappedBuffer; 
  const R_RT_Surface *v57; 
  const R_RT_Surface *v58; 
  ComputeShader *spotDownsampleLegacy; 
  int height; 
  const R_RT_Surface *v61; 
  int width; 
  R_RT_Handle *Resident; 
  R_RT_Handle v65; 
  R_RT_Handle *v66; 
  unsigned __int64 v67; 
  R_RT_Handle *p_view; 
  R_RT_Handle v69; 
  R_RT_Handle *v70; 
  R_RT_Handle v71; 
  GfxShaderBufferView v72; 
  int data[6]; 
  __int64 v74; 
  __int64 v75; 
  unsigned __int64 v76; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v79; 
  unsigned int v80; 
  R_RT_Handle v81; 

  __asm
  {
    vmovaps [rsp+1A0h+var_50], xmm6
    vmovups ymm0, ymmword ptr [rdx]
  }
  _RBX = dynamicShadowsArray;
  _R13 = spotShadowUpdate;
  p_view = htileMask;
  v70 = htileMaskCounter;
  v72.resource = (ID3D12Resource *)staticShadowsCache;
  v66 = htileMaskIndirectArgs;
  Resident = dynamicShadowsArray;
  __asm { vmovups ymmword ptr [rsp+1A0h+var_160.m_surfaceID], ymm0 }
  _RAX = R_RT_GetViewInternal(&v71, &v65, islice, -1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rsp+1A0h+var_160.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v69);
    if ( (R_RT_Handle::GetSurface(&v69)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_120.m_surfaceID] }
      __debugbreak();
    }
    else
    {
      __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_120.m_surfaceID] }
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rsp+1A0h+var_160.m_surfaceID] }
      if ( v19 )
        __debugbreak();
    }
  }
  __asm
  {
    vmovups ymmword ptr [rbp+0A0h+var_F8.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rbx]
    vmovups ymmword ptr [rsp+1A0h+var_160.m_surfaceID], ymm0
  }
  _RAX = R_RT_GetViewInternal(&v81, &v65, islice, -1);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovd   eax, xmm0
    vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
    vmovups ymmword ptr [rsp+1A0h+var_160.m_surfaceID], ymm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v65);
    if ( (R_RT_Handle::GetSurface(&v65)->m_rtFlagsInternal & 0x10) != 0 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 277, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsDepth())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsDepth()") )
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1A0h+var_160.m_surfaceID]
        vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
      }
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+1A0h+var_160.m_surfaceID]
        vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
      }
      __debugbreak();
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_120.m_surfaceID] }
      if ( v24 )
        __debugbreak();
    }
  }
  __asm { vmovups ymmword ptr [rsp+1A0h+var_160.m_surfaceID], ymm0 }
  v25 = R_RT_Handle::GetSurface(&v65)->m_image.m_base.width >> 3;
  v26 = 0;
  v27 = R_RT_Handle::GetSurface(&v65)->m_image.m_base.height >> 3;
  v74 = 0i64;
  v75 = 0i64;
  v80 = 0;
  v28 = 4 * v25 * v27;
  R_RT_Handle::GetSurface(&v71);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm0, xmm6, xmm0
    vmovss  [rbp+0A0h+var_B0], xmm0
  }
  R_RT_Handle::GetSurface(&v71);
  __asm
  {
    vmovss  xmm1, dword ptr [r13+15Ch]
    vxorps  xmm0, xmm0, xmm0
  }
  v67 = __PAIR64__(v27, v25);
  active = spotShadowUpdate->active;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm0, xmm6, xmm0
    vmovss  [rbp+0A0h+var_AC], xmm0
    vmovss  xmm0, dword ptr [r13+158h]
    vmovss  [rbp+0A0h+var_B8], xmm0
    vmovups ymm0, ymmword ptr [rbp+0A0h+var_120.m_surfaceID]
    vmovss  [rbp+0A0h+data], xmm6
    vmovss  [rbp+0A0h+var_BC], xmm6
  }
  v80 = v28 * islice;
  v79 = v28 * islice;
  __asm { vmovss  [rbp+0A0h+var_B4], xmm1 }
  v77 = 2 * v28 * islice;
  v78 = 8 * islice;
  v76 = v67;
  _RAX = v72.resource;
  __asm { vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0 }
  if ( v72.resource->m_pFunction && spotShadowUpdate->activeStatus )
  {
    __asm { vmovups ymm0, ymmword ptr [rax] }
    v42 = 1;
    __asm { vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0 }
    _RAX = R_SpotShadow_ActiveCacheEntry::GetSubsetDepthRt(active, (const R_RT_DepthHandle *)&v81, R_SpotShadow_ActiveCacheSubsetID_Final, (R_RT_DepthHandle *)&v69);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
    }
    v79 = v28 * (R_SpotShadow_ActiveCacheEntry::GetArraySliceIndex(active) + 1);
  }
  else
  {
    v42 = 0;
  }
  R_UploadAndSetComputeConstants(state, 0, data, 0x40u, NULL);
  if ( p_view->m_surfaceID && R_SpotShadow_ShouldUseHTileMask(spotShadowUpdate) )
  {
    if ( !useArrayBindings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 107, ASSERT_TYPE_ASSERT, "(useArrayBindings)", (const char *)&queryFormat, "useArrayBindings") )
      __debugbreak();
    _RDI = v72.resource;
    if ( v42 && R_RT_Handle::GetSurface((R_RT_Handle *)v72.resource)->m_image.m_base.format != GFX_PF_D16 )
    {
      _R12 = Resident;
    }
    else
    {
      _R12 = Resident;
      if ( R_RT_Handle::GetSurface(Resident)->m_image.m_base.format == GFX_PF_D16 )
      {
LABEL_33:
        Surface = R_RT_Handle::GetSurface(&v71);
        Resident = (R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
        R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&Resident);
        v48 = R_RT_Handle::GetSurface(&v69);
        Resident = (R_RT_Handle *)R_Texture_GetResident(v48->m_image.m_base.textureId);
        R_SetComputeTextures(state, 2, 1, (const GfxTexture *const *)&Resident);
        v49 = R_RT_Handle::GetSurface(&v65);
        Resident = (R_RT_Handle *)R_Texture_GetResident(v49->m_image.m_base.textureId);
        R_SetComputeTextures(state, 3, 1, (const GfxTexture *const *)&Resident);
        if ( !v42 )
          _RDI = (ID3D12Resource *)_R12;
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymmword ptr [rsp+1A0h+var_160.m_surfaceID], ymm0
        }
        Resident = (R_RT_Handle *)R_RT_GetHtileView(&v72, (R_RT_DepthHandle *)&v65);
        R_SetComputeViews(state, 4, 1, (const GfxShaderBufferView *const *)&Resident);
        __asm
        {
          vmovups ymm0, ymmword ptr [r12]
          vmovups ymmword ptr [rsp+1A0h+var_160.m_surfaceID], ymm0
        }
        Resident = (R_RT_Handle *)R_RT_GetHtileView(&v72, (R_RT_DepthHandle *)&v65);
        R_SetComputeViews(state, 5, 1, (const GfxShaderBufferView *const *)&Resident);
        p_view = (R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer(p_view)->view;
        R_SetComputeViews(state, 6, 1, (const GfxShaderBufferView *const *)&p_view);
        v70 = (R_RT_Handle *)&R_RT_Handle::GetWrappedBuffer(v70)->view;
        R_SetComputeViews(state, 7, 1, (const GfxShaderBufferView *const *)&v70);
        __asm
        {
          vmovups ymm0, ymmword ptr [r12]
          vmovups ymmword ptr [rsp+1A0h+var_160.m_surfaceID], ymm0
          vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
        }
        R_RT_GetHtileInfo((R_RT_DepthHandle *)&v69, (unsigned int *)&v72, (unsigned int *)&v67);
        if ( (R_RT_Handle::GetSurface(&v65)->m_image.m_base.width & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 41, ASSERT_TYPE_ASSERT, "(depth.GetWidth() % 8 == 0)", (const char *)&queryFormat, "depth.GetWidth() % 8 == 0") )
          __debugbreak();
        v53 = R_RT_Handle::GetSurface(&v65);
        if ( v53->m_image.m_base.width >> 3 != (_DWORD)v67 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 42, ASSERT_TYPE_ASSERT, "(depth.GetWidth() / 8 == htilePitch)", (const char *)&queryFormat, "depth.GetWidth() / 8 == htilePitch") )
          __debugbreak();
        if ( R_RT_Handle::GetSurface(&v65)->m_image.m_base.format != GFX_PF_D16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 43, ASSERT_TYPE_ASSERT, "(depth.GetFormat() == GFX_PF_D16)", "%s\n\tSpot shaders support only 16 bit depth", "depth.GetFormat() == GFX_PF_D16") )
          __debugbreak();
        v54 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO;
        if ( LODWORD(v72.resource) )
          v26 = 1;
        v55 = v26 | 2;
        if ( !v54 )
          v55 = v26;
        R_SetComputeShader(state, rgp.spotDownsampleMasked[v55]);
        WrappedBuffer = R_RT_Handle::GetWrappedBuffer(v66);
        R_DispatchIndirect(state, WrappedBuffer->buffer, islice << 6);
        goto LABEL_56;
      }
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 108, ASSERT_TYPE_ASSERT, "(( !hasStaticShadows || staticShadowsCache.GetFormat() == GFX_PF_D16 ) && dynamicShadowsArray.GetFormat() == GFX_PF_D16)", "%s\n\tspotDownsampleMasked shaders support only 16 bit depth", "( !hasStaticShadows || staticShadowsCache.GetFormat() == GFX_PF_D16 ) && dynamicShadowsArray.GetFormat() == GFX_PF_D16") )
      __debugbreak();
    goto LABEL_33;
  }
  v57 = R_RT_Handle::GetSurface(&v65);
  v66 = (R_RT_Handle *)R_Texture_GetResident(v57->m_image.m_base.textureId);
  R_SetComputeTextures(state, useArrayBindings, 1, (const GfxTexture *const *)&v66);
  v58 = R_RT_Handle::GetSurface(&v71);
  v66 = (R_RT_Handle *)R_Texture_GetResident(v58->m_image.m_base.textureId);
  R_SetComputeRWTextures(state, useArrayBindings, 1, (const GfxTexture *const *)&v66);
  spotDownsampleLegacy = rgp.spotDownsampleLegacy;
  if ( useArrayBindings )
    spotDownsampleLegacy = rgp.spotDownsample;
  R_SetComputeShader(state, spotDownsampleLegacy);
  height = R_RT_Handle::GetSurface(&v71)->m_image.m_base.height;
  v61 = R_RT_Handle::GetSurface(&v71);
  width = v61->m_image.m_base.width;
  if ( (!v61->m_image.m_base.width || !height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(state, (unsigned int)(width + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
LABEL_56:
  __asm { vmovaps xmm6, [rsp+1A0h+var_50] }
}

/*
==============
R_SpotShadow_DrawOverlay
==============
*/
void R_SpotShadow_DrawOverlay(GfxCmdBufContext *gfxContext, int overlayType, const R_RT_ColorHandle *spotshadowsActiveCache, const R_RT_DepthHandle *spotshadowsStaleCache)
{
  int v11; 
  int integer; 
  const GfxBackEndData *v15; 
  const GfxSpotShadow *v16; 
  unsigned int v18; 
  unsigned int v19; 
  const dvar_t *v21; 
  __int64 v22; 
  __int64 v23; 
  char *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  bool v28; 
  __int64 v41; 
  unsigned int v54; 
  unsigned int v55; 
  const GfxSpotShadow **v57; 
  const GfxSpotShadow *v58; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  GfxCmdBufContext v97; 
  R_RT_ColorHandle v98; 
  R_RT_ColorHandle v99; 
  __int64 Base[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  v11 = overlayType;
  _R12 = gfxContext;
  integer = sm_showOverlayFocus->current.integer;
  v97.source = (GfxCmdBufSourceState *)gfxContext;
  if ( backEndData->spotShadowCount )
  {
    _RBX = DCONST_DVARFLT_sm_showOverlayDistance;
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
      vmovaps xmmword ptr [r11-78h], xmm8
      vmovaps xmmword ptr [r11-88h], xmm9
    }
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_showOverlayDistance") )
      __debugbreak();
    __asm { vmovaps [rsp+358h+var_68], xmm7 }
    Dvar_CheckFrontendServerThread(_RBX);
    v15 = backEndData;
    v16 = NULL;
    __asm { vmovss  xmm6, dword ptr [rbx+28h] }
    v18 = 0;
    v19 = 0;
    if ( backEndData->spotShadowCount )
    {
      __asm { vmovss  xmm7, cs:__real@3c23d70a }
      do
      {
        v21 = DCONST_DVARINT_sm_spotShadowOverlayTarget;
        v22 = v19;
        v23 = (__int64)&v15->spotShadows[v22];
        v24 = (char *)v15 + 152 * v15->spotShadows[v22].sceneLightIndex;
        if ( !DCONST_DVARINT_sm_spotShadowOverlayTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowOverlayTarget") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        if ( v21->current.integer > 0 )
        {
          v25 = DCONST_DVARINT_sm_spotShadowOverlayTarget;
          if ( !DCONST_DVARINT_sm_spotShadowOverlayTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowOverlayTarget") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v25);
          if ( *(_DWORD *)(v23 + 64) != v25->current.integer )
            goto LABEL_25;
        }
        v26 = DCONST_DVARINT_sm_spotShadowOverlayTarget;
        if ( !DCONST_DVARINT_sm_spotShadowOverlayTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowOverlayTarget") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v26->current.integer == -1 && !v24[5480450] )
          goto LABEL_25;
        v27 = DCONST_DVARINT_sm_spotShadowOverlayTarget;
        if ( !DCONST_DVARINT_sm_spotShadowOverlayTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sm_spotShadowOverlayTarget") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        v28 = v27->current.integer != -1;
        if ( v27->current.integer == -2 && (v28 = v24[5480450] == 0, v24[5480450]) )
        {
LABEL_25:
          v15 = backEndData;
        }
        else
        {
          __asm { vcomiss xmm6, xmm7 }
          v15 = backEndData;
          if ( v28 )
            goto LABEL_28;
          _RCX = 25744i64 * backEndData->viewInfoIndex;
          _RAX = backEndData->viewInfo;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rax+100h]
            vsubss  xmm3, xmm0, dword ptr [rbp+53A038h]
            vmovss  xmm1, dword ptr [rcx+rax+104h]
            vsubss  xmm2, xmm1, dword ptr [rbp+53A03Ch]
            vmovss  xmm0, dword ptr [rcx+rax+108h]
            vsubss  xmm4, xmm0, dword ptr [rbp+53A040h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm1, xmm2, xmm2
            vcomiss xmm1, xmm6
          }
          if ( !is_mul_ok(0x6490ui64, backEndData->viewInfoIndex) )
          {
LABEL_28:
            v41 = v18++;
            Base[v41] = v23;
          }
        }
        ++v19;
      }
      while ( v19 < v15->spotShadowCount );
      v16 = NULL;
      _R12 = v97.source;
      v11 = overlayType;
    }
    qsort(Base, v18, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)R_SpotShadowOverlayCompLightIndex);
    __asm
    {
      vmovss  xmm8, cs:__real@40000000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmulss  xmm6, xmm0, cs:__real@3e800000
      vmovaps xmm9, xmm6
    }
    if ( v18 > 6 )
    {
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, rax
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vsubss  xmm2, xmm0, cs:__real@41800000
        vmulss  xmm1, xmm3, xmm8
        vsubss  xmm2, xmm2, xmm1
        vdivss  xmm6, xmm2, xmm3
      }
    }
    v54 = v18;
    v55 = 0;
    if ( v18 )
    {
      __asm { vmovss  xmm7, cs:__real@41000000 }
      v57 = (const GfxSpotShadow **)Base;
      do
      {
        v58 = *v57;
        if ( integer && v55 + 1 == integer )
        {
          v16 = *v57;
          v54 = v55;
        }
        else
        {
          _RAX = spotshadowsStaleCache;
          __asm { vmovups ymm0, ymmword ptr [rax] }
          _RAX = spotshadowsActiveCache;
          __asm
          {
            vmovups [rsp+358h+var_2D8], ymm0
            vmovups xmm0, xmmword ptr [r12]
            vmovups [rsp+358h+var_2E8], xmm0
            vmovups ymm1, ymmword ptr [rax]
            vmovups [rsp+358h+var_2B8], ymm1
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, rax
            vmovss  [rsp+358h+var_320], xmm6
            vaddss  xmm1, xmm6, xmm8
            vmulss  xmm1, xmm1, xmm0
            vaddss  xmm2, xmm1, xmm7
            vmovss  dword ptr [rsp+358h+var_328], xmm7
            vmovss  dword ptr [rsp+358h+var_330], xmm2
          }
          RB_DrawSpotShadowOverlayItem(&v97, backEndData, v11, v58, v55, v88, v90, v92, &v99, (const R_RT_DepthHandle *)&v98);
        }
        ++v55;
        ++v57;
      }
      while ( v55 < v18 );
      if ( v16 )
      {
        _RAX = spotshadowsStaleCache;
        __asm { vmovups ymm0, ymmword ptr [rax] }
        _RAX = spotshadowsActiveCache;
        __asm
        {
          vmovups [rsp+358h+var_2B8], ymm0
          vmovups xmm0, xmmword ptr [r12]
          vmovups [rsp+358h+var_2E8], xmm0
          vmovups ymm1, ymmword ptr [rax]
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rax
          vmovups [rsp+358h+var_2D8], ymm1
          vsubss  xmm1, xmm6, xmm9
          vdivss  xmm1, xmm1, xmm0
          vaddss  xmm2, xmm1, xmm6
          vaddss  xmm3, xmm2, xmm8
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, rcx
          vmovss  [rsp+358h+var_320], xmm9
          vmulss  xmm1, xmm3, xmm0
          vaddss  xmm2, xmm1, xmm7
          vmovss  dword ptr [rsp+358h+var_328], xmm7
          vmovss  dword ptr [rsp+358h+var_330], xmm2
        }
        RB_DrawSpotShadowOverlayItem(&v97, backEndData, v11, v16, v54, v89, v91, v93, &v98, (const R_RT_DepthHandle *)&v99);
      }
    }
    __asm
    {
      vmovaps xmm7, [rsp+358h+var_68]
      vmovaps xmm8, [rsp+358h+var_78]
      vmovaps xmm6, [rsp+358h+var_58]
      vmovaps xmm9, [rsp+358h+var_88]
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
  R_RT_DepthHandle *v2; 
  const R_RT_Surface *Surface; 
  bool v4; 
  __int64 result; 
  R_RT_DepthHandle v6; 
  unsigned int v7; 
  unsigned int v8; 

  __asm { vmovups ymm0, ymmword ptr [rcx] }
  v2 = depth;
  __asm { vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0 }
  R_RT_GetHtileInfo(&v6, &v8, &v7);
  if ( (R_RT_Handle::GetSurface(v2)->m_image.m_base.width & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 41, ASSERT_TYPE_ASSERT, "(depth.GetWidth() % 8 == 0)", (const char *)&queryFormat, "depth.GetWidth() % 8 == 0") )
    __debugbreak();
  Surface = R_RT_Handle::GetSurface(v2);
  if ( Surface->m_image.m_base.width >> 3 != v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 42, ASSERT_TYPE_ASSERT, "(depth.GetWidth() / 8 == htilePitch)", (const char *)&queryFormat, "depth.GetWidth() / 8 == htilePitch") )
    __debugbreak();
  if ( R_RT_Handle::GetSurface(v2)->m_image.m_base.format != GFX_PF_D16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_spotshadow.cpp", 43, ASSERT_TYPE_ASSERT, "(depth.GetFormat() == GFX_PF_D16)", "%s\n\tSpot shaders support only 16 bit depth", "depth.GetFormat() == GFX_PF_D16") )
    __debugbreak();
  v4 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO;
  result = (v8 != 0) | 2u;
  if ( !v4 )
    return v8 != 0;
  return result;
}


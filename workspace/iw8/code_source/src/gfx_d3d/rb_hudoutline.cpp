/*
==============
R_HudOutline_ShutdownConstBuffers
==============
*/

void R_HudOutline_ShutdownConstBuffers(void)
{
  ?R_HudOutline_ShutdownConstBuffers@@YAXXZ();
}

/*
==============
RB_ApplyHudOutline
==============
*/

void __fastcall RB_ApplyHudOutline(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  ?RB_ApplyHudOutline@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@@Z(gfxContext, viewInfo, activeGroup);
}

/*
==============
R_HudOutlineGenWorkgroups
==============
*/

void __fastcall R_HudOutlineGenWorkgroups(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *dstTiles, const GfxWrappedRWBuffer *stencilMask, const GfxTexture *floatZFull, const GfxTexture *floatZEighthMipMin)
{
  ?R_HudOutlineGenWorkgroups@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@2PEBUGfxTexture@@3@Z(computeState, viewInfo, dstTiles, stencilMask, floatZFull, floatZEighthMipMin);
}

/*
==============
R_ApplyHudOutlineCS
==============
*/

void __fastcall R_ApplyHudOutlineCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *dstRt, R_RT_ColorHandle *dstSmaaHudoutlineMask, R_RT_ColorHandle *entityVelocityRt, R_RT_ColorHandle *packedStencilRt, R_RT_ColorHandle *tangentFrameRt, const GfxWrappedBuffer *workgroups, const GfxWrappedBuffer *indirectArgs, R_RT_ColorHandle *floatZFull, bool vrsInlineResolve)
{
  ?R_ApplyHudOutlineCS@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2222PEBUGfxWrappedBuffer@@32_N@Z(computeState, viewInfo, dstRt, dstSmaaHudoutlineMask, entityVelocityRt, packedStencilRt, tangentFrameRt, workgroups, indirectArgs, floatZFull, vrsInlineResolve);
}

/*
==============
R_ApplyHudOutline
==============
*/

void __fastcall R_ApplyHudOutline(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *dstRt, R_RT_ColorHandle *entityVelocityRt, R_RT_ColorHandle *packedStencilRt, R_RT_ColorHandle *tangentFrameRt, R_RT_ColorHandle *lensDistortion, R_RT_ColorHandle *floatZFull, bool vrsInlineResolve)
{
  ?R_ApplyHudOutline@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@22222_N@Z(gfxContext, viewInfo, dstRt, entityVelocityRt, packedStencilRt, tangentFrameRt, lensDistortion, floatZFull, vrsInlineResolve);
}

/*
==============
R_HudOutlineWorkgroupArgs
==============
*/

void __fastcall R_HudOutlineWorkgroupArgs(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *dstArgs, const GfxWrappedRWBuffer *tiles)
{
  ?R_HudOutlineWorkgroupArgs@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxWrappedRWBuffer@@2@Z(computeState, viewInfo, dstArgs, tiles);
}

/*
==============
R_HudOutline_InitConstBuffers
==============
*/

void R_HudOutline_InitConstBuffers(void)
{
  ?R_HudOutline_InitConstBuffers@@YAXXZ();
}

/*
==============
R_HudOutline_Enabled
==============
*/

bool __fastcall R_HudOutline_Enabled(const GfxViewInfo *viewInfo)
{
  return ?R_HudOutline_Enabled@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
RB_ApplyHudOutline
==============
*/
void RB_ApplyHudOutline(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup)
{
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v8; 
  __m256i m_mainSceneTangentFrameRt; 
  __m256i m_packedStencilRt; 
  __m256i m_mainSceneEntityIDVelocityRt; 
  R_RT_Handle v15; 
  R_RT_Handle v16; 
  R_RT_ColorHandle result; 
  R_RT_Handle v18; 
  __m256i v19; 
  __m256i v20; 
  __m256i v21; 
  R_RT_Group v22; 
  R_RT_Group v23; 

  if ( viewInfo->hudOutline.enable && viewInfo->hudOutline.mode || R_HudOutline_BRCircleOutlineEnabled(viewInfo) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF7F50, "Hud Outline");
    R_ProfBeginNamedEvent(gfxContext->state, "RB_ApplyHudOutline");
    R_GPU_BeginTimer(GPU_TIMER_HUD_OUTLINE);
    R_RT_GetGlobalColor(&result, R_RENDERTARGET_DISPLAY_BUFFER);
    v16 = (R_RT_Handle)result;
    height = R_RT_Handle::GetSurface(&v16)->m_image.m_base.height;
    Surface = R_RT_Handle::GetSurface(&v16);
    R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FOR_VIEW);
    v8 = *gfxContext;
    v15 = (R_RT_Handle)result;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v15);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    v22.m_colorRtCount = 1;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v16.m_tracking.m_name = _XMM0;
    v16.m_surfaceID = 0;
    v16.m_tracking.m_allocCounter = 0;
    v18 = v15;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v18);
    }
    else
    {
      if ( v15.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    v22.m_colorRts[0] = (R_RT_ColorHandle)v15;
    v22.m_depthRt = (R_RT_DepthHandle)v16;
    v23 = v22;
    *(GfxCmdBufContext *)&v15.m_surfaceID = v8;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&v15, &v23, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(307)");
    R_SetViewportStruct(gfxContext->source, &viewInfo->displayViewport);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v16.m_tracking.m_name = _XMM0;
    *(_OWORD *)&v15.m_tracking.m_name = _XMM0;
    v16.m_surfaceID = 0;
    v16.m_tracking.m_allocCounter = 0;
    v15.m_surfaceID = 0;
    v15.m_tracking.m_allocCounter = 0;
    v18 = v16;
    m_mainSceneTangentFrameRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneTangentFrameRt;
    v16 = v15;
    m_packedStencilRt = (__m256i)viewInfo->sceneRtInput.m_packedStencilRt;
    v19 = m_mainSceneTangentFrameRt;
    m_mainSceneEntityIDVelocityRt = (__m256i)viewInfo->sceneRtInput.m_mainSceneEntityIDVelocityRt;
    v20 = m_packedStencilRt;
    v21 = m_mainSceneEntityIDVelocityRt;
    *(GfxCmdBufContext *)&v15.m_surfaceID = v8;
    R_ApplyHudOutline((GfxCmdBufContext *)&v15, viewInfo, &result, (R_RT_ColorHandle *)&v21, (R_RT_ColorHandle *)&v20, (R_RT_ColorHandle *)&v19, (R_RT_ColorHandle *)&v16, (R_RT_ColorHandle *)&v18, 0);
    R_GPU_EndTimer();
    R_ProfEndNamedEvent(gfxContext->state);
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
R_ApplyHudOutline
==============
*/
void R_ApplyHudOutline(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *dstRt, R_RT_ColorHandle *entityVelocityRt, R_RT_ColorHandle *packedStencilRt, R_RT_ColorHandle *tangentFrameRt, R_RT_ColorHandle *lensDistortion, R_RT_ColorHandle *floatZFull, bool vrsInlineResolve)
{
  unsigned int v9; 
  GfxCmdBufSourceState *source; 
  float width; 
  GfxCmdBufContext *v14; 
  float scopeWidth; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v31; 
  const R_RT_Surface *v32; 
  const R_RT_Surface *v33; 
  R_RT_Image *p_m_image; 
  bool v35; 
  const GfxBackEndData *data; 
  bool v37; 
  unsigned int frameCount; 
  __int64 v39; 
  unsigned int unsignedInt; 
  __int64 v41; 
  GfxCmdBufSourceState *v42; 
  const R_RT_Surface *v43; 
  Material *hudOutlineVrsInlineResolveMaterial; 
  float height; 
  float v46; 
  __int64 v47; 
  __int64 v48; 
  float outThickness; 
  R_RT_Handle *v50; 
  GfxCmdBufContext *v51; 
  GfxCmdBufContext v52; 
  GfxViewport displayViewport; 

  v9 = 0;
  source = gfxContext->source;
  width = viewInfo->hudOutline.width;
  _XMM8 = LODWORD(FLOAT_1_0);
  v14 = gfxContext;
  _XMM0 = viewInfo->hudOutline.depthTestInScope;
  _XMM7 = 0i64;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = viewInfo->hudOutline.fillInScope;
  __asm
  {
    vblendvps xmm5, xmm7, xmm8, xmm2
    vpcmpeqd xmm2, xmm0, xmm1
  }
  _XMM0 = viewInfo->scopeLensDistortionEnabled;
  __asm
  {
    vblendvps xmm4, xmm8, xmm7, xmm2
    vpcmpeqd xmm2, xmm0, xmm1
  }
  scopeWidth = viewInfo->hudOutline.scopeWidth;
  source->input.consts[21].v[0] = viewInfo->hudOutline.occludedColorFromFill;
  source->input.consts[21].v[1] = *(float *)&_XMM5;
  source->input.consts[21].v[2] = *(float *)&_XMM4;
  source->input.consts[21].v[3] = width;
  ++source->constVersions[21];
  source->input.consts[29].v[3] = scopeWidth;
  *(_QWORD *)&source->input.consts[29].xyz.y = 0i64;
  __asm { vblendvps xmm0, xmm8, xmm7, xmm2 }
  source->input.consts[29].v[0] = *(float *)&_XMM0;
  ++source->constVersions[29];
  source->input.consts[22] = viewInfo->hudOutline.scopeFriendColor;
  ++source->constVersions[22];
  source->input.consts[23] = viewInfo->hudOutline.scopeFoeColor;
  ++source->constVersions[23];
  source->input.consts[24] = viewInfo->hudOutline.fillColor0;
  ++source->constVersions[24];
  source->input.consts[25] = viewInfo->hudOutline.fillColor1;
  ++source->constVersions[25];
  v26 = viewInfo->hudOutline.occludedOutlineColor.v[0];
  outThickness = *(float *)&_XMM5;
  source->input.consts[26].v[0] = v26;
  v27 = viewInfo->hudOutline.occludedOutlineColor.v[1];
  v50 = entityVelocityRt;
  v51 = gfxContext;
  outThickness = *(float *)&_XMM0;
  source->input.consts[26].v[1] = v27;
  *(_QWORD *)&source->input.consts[26].xyz.z = *(_QWORD *)&viewInfo->hudOutline.occludedOutlineColor.xyz.z;
  ++source->constVersions[26];
  source->input.consts[27] = viewInfo->hudOutline.occludedInlineColor;
  ++source->constVersions[27];
  source->input.consts[28] = viewInfo->hudOutline.occludedInteriorColor;
  ++source->constVersions[28];
  source->input.consts[30] = viewInfo->hudOutline.scopeFillColor0;
  ++source->constVersions[30];
  source->input.consts[31] = viewInfo->hudOutline.scopeFillColor1;
  ++source->constVersions[31];
  source->input.consts[32] = viewInfo->hudOutline.scopeOccludedOutlineColor;
  ++source->constVersions[32];
  source->input.consts[33] = viewInfo->hudOutline.scopeOccludedInlineColor;
  ++source->constVersions[33];
  source->input.consts[34] = viewInfo->hudOutline.scopeOccludedInteriorColor;
  ++source->constVersions[34];
  source->input.consts[35] = viewInfo->hudOutline.shimmerTextureProperties;
  ++source->constVersions[35];
  source->input.consts[37] = viewInfo->hudOutline.shimmerTextureProperties1;
  R_DirtyCodeConstant(source, 0x25u);
  source->input.consts[155] = viewInfo->hudOutline.shimmerTextureProperties2;
  R_DirtyCodeConstant(source, 0x9Bu);
  R_HudOutline_GetBrCircleConsts(viewInfo, (vec3_t *)&v52, &outThickness);
  v28 = *(float *)&v52.source;
  source->input.consts[156].v[0] = outThickness;
  LODWORD(_XMM0) = HIDWORD(v52.source);
  source->input.consts[156].v[1] = v28;
  v29 = *(float *)&v52.state;
  source->input.consts[156].v[2] = *(float *)&_XMM0;
  source->input.consts[156].v[3] = v29;
  R_DirtyCodeConstant(source, 0x9Cu);
  R_SetCodeConstantFromVec4(source, 0x24u, &viewInfo->hudOutline.snapshotEffectProperties);
  Surface = R_RT_Handle::GetSurface(tangentFrameRt);
  R_SetCodeImageTextureInternal(source, 8u, &Surface->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(109)");
  v31 = R_RT_Handle::GetSurface(floatZFull);
  R_SetCodeImageTextureInternal(source, 9u, &v31->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(111)");
  v32 = R_RT_Handle::GetSurface(v50);
  R_SetCodeImageTextureInternal(source, 1u, &v32->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(113)");
  v33 = R_RT_Handle::GetSurface(packedStencilRt);
  R_SetCodeImageTextureInternal(source, 0x4Fu, &v33->m_image.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(114)");
  if ( R_RT_Handle::IsValid(lensDistortion) )
    p_m_image = &R_RT_Handle::GetSurface(lensDistortion)->m_image;
  else
    p_m_image = (R_RT_Image *)rgp.blackImage;
  R_SetCodeImageTextureInternal(source, 0x50u, &p_m_image->m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(115)");
  v52 = *v14;
  RB_UiClut_SetParameters(&v52);
  v35 = viewInfo->hudOutline.mode == 3;
  data = viewInfo->input.data;
  displayViewport = viewInfo->displayViewport;
  v37 = v35 || data->scope.scopeUseDualFov && data->scope.adsSmoothFade;
  if ( vrsInlineResolve )
  {
    frameCount = data->frameCount;
    v39 = 0i64;
    do
    {
      unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( unsignedInt == -1 )
        unsignedInt = frameCount & 3;
      if ( unsignedInt >= 4 )
      {
        LODWORD(v48) = 4;
        LODWORD(v47) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v47, v48) )
          __debugbreak();
      }
      outThickness = *(float *)&s_VRSPixelToSampleOrdered_9[unsignedInt][v39];
      v41 = (int)v9;
      ++v39;
      ++v9;
      *((float *)&v52.source + v41) = outThickness;
    }
    while ( v9 < 4 );
    v14 = v51;
    v42 = v51->source;
    v42->input.consts[15] = (vec4_t)v52;
    R_DirtyCodeConstant(v42, 0xFu);
    v43 = R_RT_Handle::GetSurface(v50);
    R_SetCodeImageTextureInternal(v42, 5u, &v43->m_color.m_fmaskImage.m_base, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(150)");
    hudOutlineVrsInlineResolveMaterial = rgp.hudOutlineVrsInlineResolveMaterial;
    if ( v37 )
      hudOutlineVrsInlineResolveMaterial = rgp.hudOutlineScopeVrsInlineResolveMaterial;
  }
  else
  {
    hudOutlineVrsInlineResolveMaterial = rgp.hudOutlineMaterial;
    if ( v37 )
      hudOutlineVrsInlineResolveMaterial = rgp.hudOutlineScopeMaterial;
  }
  v52 = *v14;
  height = (float)displayViewport.height;
  v46 = (float)displayViewport.width;
  RB_ViewportFilterDirectInternal(&v52, hudOutlineVrsInlineResolveMaterial, 0xFFFFFFFF, &displayViewport, 0.0, 0.0, v46, height, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp(160)");
}

/*
==============
R_ApplyHudOutlineCS
==============
*/
void R_ApplyHudOutlineCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *dstRt, R_RT_ColorHandle *dstSmaaHudoutlineMask, R_RT_ColorHandle *entityVelocityRt, R_RT_ColorHandle *packedStencilRt, R_RT_ColorHandle *tangentFrameRt, const GfxWrappedBuffer *workgroups, const GfxWrappedBuffer *indirectArgs, R_RT_ColorHandle *floatZFull, bool vrsInlineResolve)
{
  __int128 v11; 
  bool v12; 
  unsigned __int8 *v13; 
  ComputeCmdBufState *v14; 
  const GfxBackEndData *v15; 
  bool v16; 
  float width; 
  float height; 
  float floatTime; 
  unsigned int v22; 
  unsigned int v24; 
  unsigned int v28; 
  __int128 v34; 
  __int128 v35; 
  __m256i v36; 
  __m256i v37; 
  __m256i v38; 
  __m256i v39; 
  __int128 v40; 
  __int128 v41; 
  __int128 v42; 
  __int128 v43; 
  __m256i v44; 
  ComputeShader *csHudoutline; 
  unsigned int v46; 
  __int64 v47; 
  int v48; 
  __int64 unsignedInt; 
  int v50; 
  __int64 v51; 
  R_RT_Handle *v52; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v54; 
  const R_RT_Surface *v55; 
  const R_RT_Surface *v56; 
  const R_RT_Surface *v57; 
  const GfxImage *Variant; 
  const R_RT_Surface *v59; 
  const R_RT_Surface *v60; 
  __int64 v61; 
  __int64 v62; 
  ID3D12Resource *buffers; 
  R_RT_Handle *v64; 
  R_RT_Handle *Resident; 
  R_RT_Handle *v66; 
  R_RT_Handle *v67; 
  GfxShaderBufferView *views; 
  R_RT_Handle *v69; 
  R_RT_Handle *v70; 
  ComputeCmdBufState *state; 
  const GfxWrappedBuffer *v72; 
  __int128 v73; 
  int data[4]; 
  __int128 v75; 
  vec4_t outGameTime; 
  int v77; 
  int v78; 
  int v79; 
  int v80; 
  int v81; 
  float v82; 
  float v83; 
  int v84; 
  __int128 v85; 
  __int128 v86; 
  __m256i v87; 
  __m256i v88; 
  __int128 v89; 
  __m256i v90; 
  __m256i v91; 
  __int128 v92; 
  __int128 v93; 
  __int128 v94; 
  __m256i v95; 
  float outThickness; 
  vec3_t outColor; 
  __int128 v98; 

  v12 = viewInfo->hudOutline.mode == 3;
  v13 = (unsigned __int8 *)viewInfo;
  v14 = computeState;
  Resident = entityVelocityRt;
  v66 = packedStencilRt;
  v67 = tangentFrameRt;
  views = (GfxShaderBufferView *)workgroups;
  v72 = indirectArgs;
  v64 = floatZFull;
  v15 = viewInfo->input.data;
  v98 = v11;
  v70 = dstSmaaHudoutlineMask;
  v69 = dstRt;
  buffers = (ID3D12Resource *)viewInfo;
  state = computeState;
  v16 = v12 || v15->scope.scopeUseDualFov && v15->scope.adsSmoothFade;
  width = (float)viewInfo->displayViewport.width;
  height = (float)viewInfo->displayViewport.height;
  *(float *)&data[1] = height;
  *(float *)data = width;
  floatTime = viewInfo->sceneDef.floatTime;
  _XMM6 = 0i64;
  *(float *)&data[2] = 0.0;
  *(float *)&data[3] = 0.0;
  R_CalculateGameTime(floatTime, 0.0, &outGameTime);
  _XMM3 = LODWORD(FLOAT_1_0);
  v22 = v13[14760];
  v77 = *((_DWORD *)v13 + 3689);
  _XMM0 = v22;
  v24 = v13[14761];
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm6, xmm3, xmm2
  }
  v78 = _XMM0;
  _XMM0 = v24;
  v28 = v13[15747];
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  v80 = *((_DWORD *)v13 + 3631);
  __asm { vblendvps xmm0, xmm3, xmm6, xmm2 }
  v79 = _XMM0;
  _XMM0 = v28;
  __asm
  {
    vpcmpeqd xmm1, xmm0, xmm2
    vblendvps xmm0, xmm3, xmm6, xmm1
  }
  v34 = *(_OWORD *)(v13 + 14508);
  v81 = _XMM0;
  v84 = *((_DWORD *)v13 + 3652);
  v35 = *(_OWORD *)(v13 + 14492);
  v85 = v34;
  v36 = *((__m256i *)v13 + 454);
  v86 = v35;
  v37 = *(__m256i *)(v13 + 14612);
  v90 = v36;
  v38 = *((__m256i *)v13 + 455);
  v87 = v37;
  v39 = *(__m256i *)(v13 + 14644);
  v91 = v38;
  v40 = *((_OWORD *)v13 + 912);
  v88 = v39;
  v41 = *(_OWORD *)(v13 + 14676);
  v92 = v40;
  v42 = *(_OWORD *)(v13 + 14692);
  v89 = v41;
  v43 = *(_OWORD *)(v13 + 14740);
  v93 = v42;
  v44 = *(__m256i *)(v13 + 14708);
  v94 = v43;
  v82 = 0.0;
  v83 = 0.0;
  v95 = v44;
  R_HudOutline_GetBrCircleConsts((const GfxViewInfo *)v13, &outColor, &outThickness);
  csHudoutline = rgp.csHudoutline;
  if ( v16 )
    csHudoutline = rgp.csHudoutlineScope;
  if ( vrsInlineResolve )
  {
    v46 = 0;
    v47 = 0i64;
    v48 = *(_DWORD *)(*((_QWORD *)v13 + 1462) + 31432i64);
    do
    {
      unsignedInt = v48 & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v62) = 4;
        LODWORD(v61) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v61, v62) )
          __debugbreak();
      }
      v50 = s_VRSPixelToSampleOrdered_9[unsignedInt][v47];
      v51 = (int)v46;
      ++v47;
      ++v46;
      data[v51 - 2] = v50;
    }
    while ( v46 < 4 );
    csHudoutline = rgp.csHudoutlineVrsInlineResolve;
    v52 = Resident;
    if ( v16 )
      csHudoutline = rgp.csHudoutlineScopeVrsInlineResolve;
    v75 = v73;
    Surface = R_RT_Handle::GetSurface(Resident);
    v14 = state;
    Resident = (R_RT_Handle *)R_Texture_GetResident(Surface->m_color.m_fmaskImage.m_base.textureId);
    R_SetComputeTextures(state, 7, 1, (const GfxTexture *const *)&Resident);
    v13 = (unsigned __int8 *)buffers;
  }
  else
  {
    v52 = Resident;
  }
  R_UploadAndSetComputeConstants(v14, 0, data, 0x160u, NULL);
  buffers = v14->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(v14, 7, 1, &buffers);
  v54 = R_RT_Handle::GetSurface(v52);
  buffers = (ID3D12Resource *)R_Texture_GetResident(v54->m_image.m_base.textureId);
  R_SetComputeTextures(v14, 0, 1, (const GfxTexture *const *)&buffers);
  buffers = (ID3D12Resource *)R_Texture_GetResident(rgp.shimmerEffectImage->textureId);
  R_SetComputeTextures(v14, 1, 1, (const GfxTexture *const *)&buffers);
  v55 = R_RT_Handle::GetSurface(v66);
  v66 = (R_RT_Handle *)R_Texture_GetResident(v55->m_image.m_base.textureId);
  R_SetComputeTextures(v14, 3, 1, (const GfxTexture *const *)&v66);
  v56 = R_RT_Handle::GetSurface(v67);
  v67 = (R_RT_Handle *)R_Texture_GetResident(v56->m_image.m_base.textureId);
  R_SetComputeTextures(v14, 8, 1, (const GfxTexture *const *)&v67);
  v57 = R_RT_Handle::GetSurface(v64);
  v64 = (R_RT_Handle *)R_Texture_GetResident(v57->m_image.m_base.textureId);
  R_SetComputeTextures(v14, 2, 1, (const GfxTexture *const *)&v64);
  Variant = RB_UiClut_GetVariant(DODGE);
  v64 = (R_RT_Handle *)R_Texture_GetResident(Variant->textureId);
  R_SetComputeTextures(v14, 9, 1, (const GfxTexture *const *)&v64);
  v64 = (R_RT_Handle *)(*(_QWORD *)(*((_QWORD *)v13 + 1462) + 31408i64) + 8i64);
  R_SetComputeViews(v14, 5, 1, (const GfxShaderBufferView *const *)&v64);
  views = (GfxShaderBufferView *)((char *)views + 8);
  R_SetComputeViews(v14, 6, 1, (const GfxShaderBufferView *const *)&views);
  v59 = R_RT_Handle::GetSurface(v69);
  v69 = (R_RT_Handle *)R_Texture_GetResident(v59->m_image.m_base.textureId);
  R_SetComputeRWTextures(v14, 0, 1, (const GfxTexture *const *)&v69);
  v60 = R_RT_Handle::GetSurface(v70);
  v70 = (R_RT_Handle *)R_Texture_GetResident(v60->m_image.m_base.textureId);
  R_SetComputeRWTextures(v14, 1, 1, (const GfxTexture *const *)&v70);
  R_SetComputeShader(v14, csHudoutline);
  R_DispatchIndirect(v14, v72->buffer, 0);
}

/*
==============
R_HudOutlineGenWorkgroups
==============
*/
void R_HudOutlineGenWorkgroups(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *dstTiles, const GfxWrappedRWBuffer *stencilMask, const GfxTexture *floatZFull, const GfxTexture *floatZEighthMipMin)
{
  unsigned int v10; 
  unsigned int v11; 
  ID3D12Resource *buffers; 
  GfxShaderBufferRWView *views; 
  char data[336]; 
  float outThickness; 
  vec3_t outColor; 

  buffers = computeState->data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, &buffers);
  buffers = (ID3D12Resource *)&stencilMask->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&buffers, NULL);
  buffers = (ID3D12Resource *)floatZFull;
  R_SetComputeTextures(computeState, 1, 1, (const GfxTexture *const *)&buffers);
  buffers = (ID3D12Resource *)floatZEighthMipMin;
  R_SetComputeTextures(computeState, 2, 1, (const GfxTexture *const *)&buffers);
  LODWORD(buffers) = 0;
  views = &dstTiles->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, (const unsigned int *)&buffers);
  if ( R_HudOutline_BRCircleOutlineEnabled(viewInfo) )
  {
    R_SetComputeShader(computeState, rgp.csHudoutlineWorkGroupsBrCircle);
    memset_0(data, 0, 0x160ui64);
    R_HudOutline_GetBrCircleConsts(viewInfo, &outColor, &outThickness);
    R_UploadAndSetComputeConstants(computeState, 0, data, 0x160u, NULL);
  }
  else
  {
    R_SetComputeShader(computeState, rgp.csHudoutlineWorkGroups);
  }
  v10 = (viewInfo->sceneViewport.width + 7) >> 3;
  v11 = (viewInfo->sceneViewport.height + 7) >> 3;
  if ( (v10 > 0xFFF || v11 > 0xFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_hudoutline.cpp", 279, ASSERT_TYPE_ASSERT, "(nTilesX <= 0x0fff && nTilesY <= 0x0fff)", (const char *)&queryFormat, "nTilesX <= HUD_OUTLINE_TILE_INDEX_MASK && nTilesY <= HUD_OUTLINE_TILE_INDEX_MASK") )
    __debugbreak();
  if ( (!v10 || !v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_compute.h", 558, ASSERT_TYPE_ASSERT, "(xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0)", "%s\n\tCompute thread count or group size is 0.", "xThreads > 0 && yThreads > 0 && zThreads > 0 && xGroupSize > 0 && yGroupSize > 0 && zGroupSize > 0") )
    __debugbreak();
  R_Dispatch(computeState, (v10 + 7) >> 3, (v11 + 7) >> 3, 1u);
}

/*
==============
R_HudOutlineWorkgroupArgs
==============
*/
void R_HudOutlineWorkgroupArgs(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedRWBuffer *dstArgs, const GfxWrappedRWBuffer *tiles)
{
  GfxShaderBufferRWView *views; 

  R_SetComputeShader(computeState, rgp.csHudoutlineWorkGroupsArgs);
  views = &tiles->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  views = &dstArgs->rwView;
  R_SetComputeRWViewsWithCounters(computeState, 1, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
  R_Dispatch(computeState, 1u, 1u, 1u);
}

/*
==============
R_HudOutline_BRCircleOutlineEnabled
==============
*/
bool R_HudOutline_BRCircleOutlineEnabled(const GfxViewInfo *viewInfo)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_r_brCircleOutlineEnabled;
  if ( !DVARBOOL_r_brCircleOutlineEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_brCircleOutlineEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled && viewInfo->brCircle.radius > 0.0;
}

/*
==============
R_HudOutline_Enabled
==============
*/
bool R_HudOutline_Enabled(const GfxViewInfo *viewInfo)
{
  bool result; 

  if ( viewInfo->hudOutline.enable && viewInfo->hudOutline.mode )
    return 1;
  result = R_HudOutline_BRCircleOutlineEnabled(viewInfo);
  if ( result )
    return 1;
  return result;
}

/*
==============
R_HudOutline_GetBrCircleConsts
==============
*/
void R_HudOutline_GetBrCircleConsts(const GfxViewInfo *viewInfo, vec3_t *outColor, float *outThickness)
{
  const dvar_t *v5; 
  float value; 
  const dvar_t *v7; 
  float v8; 
  float v9; 
  float v10; 

  if ( R_HudOutline_BRCircleOutlineEnabled(viewInfo) )
  {
    v5 = DVARFLT_r_brCircleOutlineThickness;
    if ( !DVARFLT_r_brCircleOutlineThickness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_brCircleOutlineThickness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
  }
  else
  {
    value = 0.0;
  }
  *outThickness = value;
  v7 = DVARVEC4_r_brCircleOutlineColor;
  if ( !DVARVEC4_r_brCircleOutlineColor && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_brCircleOutlineColor") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.vector.v[3];
  v9 = v7->current.vector.v[1];
  v10 = v7->current.vector.v[2];
  outColor->v[0] = v8 * v7->current.value;
  outColor->v[2] = v8 * v10;
  outColor->v[1] = v8 * v9;
}

/*
==============
R_HudOutline_InitConstBuffers
==============
*/
void R_HudOutline_InitConstBuffers(void)
{
  ;
}

/*
==============
R_HudOutline_ShutdownConstBuffers
==============
*/
void R_HudOutline_ShutdownConstBuffers(void)
{
  ;
}


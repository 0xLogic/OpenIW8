/*
==============
R_DOF_Median
==============
*/

void __fastcall R_DOF_Median(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *halfAlphaPingPongHandle, R_RT_ColorHandle *halfColorPingPongHandle)
{
  ?R_DOF_Median@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@1@Z(gfxContext, halfAlphaPingPongHandle, halfColorPingPongHandle);
}

/*
==============
R_DOF_TileDownsample_Horizontal
==============
*/

void __fastcall R_DOF_TileDownsample_Horizontal(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *texture0, const vec2_t *bias, const vec2_t *scale)
{
  ?R_DOF_TileDownsample_Horizontal@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@AEBTvec2_t@@2@Z(gfxContext, texture0, bias, scale);
}

/*
==============
RB_DOF_GetCircleOfConfusionClip
==============
*/

double __fastcall RB_DOF_GetCircleOfConfusionClip()
{
  double result; 

  *(float *)&result = ?RB_DOF_GetCircleOfConfusionClip@@YAMXZ();
  return result;
}

/*
==============
R_DOF_Downsample
==============
*/

void __fastcall R_DOF_Downsample(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *sourceHandle, const R_RT_ColorHandle *outputHandle)
{
  ?R_DOF_Downsample@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@AEBV3@@Z(computeState, viewInfo, sourceHandle, outputHandle);
}

/*
==============
R_DOF_TileDownsample_GetParams
==============
*/

void __fastcall R_DOF_TileDownsample_GetParams(unsigned int inputWidth, unsigned int inputHeight, unsigned int tileWidth, unsigned int tileHeight, vec2_t *bias, vec2_t *scale)
{
  ?R_DOF_TileDownsample_GetParams@@YAXIIIIAEATvec2_t@@0@Z(inputWidth, inputHeight, tileWidth, tileHeight, bias, scale);
}

/*
==============
R_DOF_GetEquationParams
==============
*/

void __fastcall R_DOF_GetEquationParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, vec4_t *dofEquationLinear, vec4_t *dofEquationClip)
{
  ?R_DOF_GetEquationParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEATvec4_t@@2@Z(gfxContext, viewInfo, dofEquationLinear, dofEquationClip);
}

/*
==============
R_DOF_Upsample
==============
*/

void __fastcall R_DOF_Upsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *halfColorPingPongHandle, R_RT_ColorHandle *halfAlphaHandle, R_RT_ColorHandle *halfPrepassHandle, R_RT_ColorHandle *scopeBuffer, R_RT_ColorHandle *floatZColorRt, R_RT_ColorHandle *sourceHandle)
{
  ?R_DOF_Upsample@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@222222@Z(gfxContext, viewInfo, tile1Handle, halfColorPingPongHandle, halfAlphaHandle, halfPrepassHandle, scopeBuffer, floatZColorRt, sourceHandle);
}

/*
==============
R_DOF_TileNeighor
==============
*/

void __fastcall R_DOF_TileNeighor(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *tile0Handle)
{
  ?R_DOF_TileNeighor@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@@Z(gfxContext, tile0Handle);
}

/*
==============
R_DOF_TileDownsample_Vertical
==============
*/

void __fastcall R_DOF_TileDownsample_Vertical(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *texture0, const vec2_t *bias, const vec2_t *scale)
{
  ?R_DOF_TileDownsample_Vertical@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@AEBTvec2_t@@2@Z(gfxContext, texture0, bias, scale);
}

/*
==============
R_DOF_UpdateEquationParams
==============
*/

void __fastcall R_DOF_UpdateEquationParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?R_DOF_UpdateEquationParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_DOF_Sharpen
==============
*/

void __fastcall R_DOF_Sharpen(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *halfColorHandle)
{
  ?R_DOF_Sharpen@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@@Z(gfxContext, halfColorHandle);
}

/*
==============
R_DOF_CircularFilterFullres
==============
*/

void __fastcall R_DOF_CircularFilterFullres(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHalfResHandle, R_RT_ColorHandle *sourceHandle, R_RT_ColorHandle *floatZColorRt, R_RT_ColorHandle *scopeBuffer)
{
  ?R_DOF_CircularFilterFullres@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@2222@Z(gfxContext, viewInfo, tile1Handle, sourceHalfResHandle, sourceHandle, floatZColorRt, scopeBuffer);
}

/*
==============
R_DOF_Prepass
==============
*/

void __fastcall R_DOF_Prepass(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *floatZ, R_RT_ColorHandle *prevHalfColorHandle, R_RT_ColorHandle *prevHalfPrepassHandle, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHandle, R_RT_ColorHandle *halfVelocityRt)
{
  ?R_DOF_Prepass@@YAXUGfxCmdBufContext@@VR_RT_ColorHandle@@11111@Z(gfxContext, floatZ, prevHalfColorHandle, prevHalfPrepassHandle, tile1Handle, sourceHandle, halfVelocityRt);
}

/*
==============
RB_DOF_GetDistance
==============
*/

double __fastcall RB_DOF_GetDistance()
{
  double result; 

  *(float *)&result = ?RB_DOF_GetDistance@@YAMXZ();
  return result;
}

/*
==============
RB_DOF_UpdateDistanceMeter
==============
*/

void __fastcall RB_DOF_UpdateDistanceMeter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *floatZColorRt)
{
  ?RB_DOF_UpdateDistanceMeter@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@@Z(gfxContext, viewInfo, floatZColorRt);
}

/*
==============
RB_ApplyDepthOfField
==============
*/

void __fastcall RB_ApplyDepthOfField(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, R_RT_ColorHandle *scopeBuffer, const GfxBackEndData *data)
{
  ?RB_ApplyDepthOfField@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@AEAUR_RT_Group@@VR_RT_ColorHandle@@PEBUGfxBackEndData@@@Z(gfxContext, viewInfo, activeGroup, scopeBuffer, data);
}

/*
==============
RB_DepthOfField_FreeTemporalRts
==============
*/

void RB_DepthOfField_FreeTemporalRts(void)
{
  ?RB_DepthOfField_FreeTemporalRts@@YAXXZ();
}

/*
==============
R_DOF_TemporalSampling
==============
*/

bool __fastcall R_DOF_TemporalSampling(const GfxViewInfo *viewInfo)
{
  return ?R_DOF_TemporalSampling@@YA_NPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_DOF_UpdateBufferParams
==============
*/

void __fastcall R_DOF_UpdateBufferParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, unsigned int rtWidth, unsigned int rtHeight)
{
  ?R_DOF_UpdateBufferParams@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@II@Z(gfxContext, viewInfo, rtWidth, rtHeight);
}

/*
==============
R_DOF_CircularFilter
==============
*/

void __fastcall R_DOF_CircularFilter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *halfPrepassHandle, R_RT_ColorHandle *halfColorHandle, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHandle)
{
  ?R_DOF_CircularFilter@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@222@Z(gfxContext, viewInfo, halfPrepassHandle, halfColorHandle, tile1Handle, sourceHandle);
}

/*
==============
RB_DOF_GetCircleOfConfusionLinear
==============
*/

double __fastcall RB_DOF_GetCircleOfConfusionLinear()
{
  double result; 

  *(float *)&result = ?RB_DOF_GetCircleOfConfusionLinear@@YAMXZ();
  return result;
}

/*
==============
RB_ApplyDepthOfField
==============
*/
void RB_ApplyDepthOfField(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_Group *activeGroup, R_RT_ColorHandle *scopeBuffer)
{
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  bool v11; 
  R_RT_ColorHandle v12; 
  const dvar_t *v13; 
  int v14; 
  int v15; 
  const dvar_t *v16; 
  int v17; 
  int rtFlags; 
  unsigned int m_allocHeight; 
  unsigned int m_allocWidth; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  __m256i v23; 
  R_RT_Handle v25; 
  unsigned __int16 m_surfaceID; 
  bool v28; 
  __int16 v29; 
  unsigned __int16 v30; 
  const char *v31; 
  int v32; 
  const char *v33; 
  unsigned int width; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  double BokehMaxCocDiameter; 
  GfxCmdBufSourceState *source; 
  float v43; 
  float v44; 
  float v45; 
  float v46; 
  __int64 v47; 
  const R_RT_Surface *v48; 
  __int64 v49; 
  double v50; 
  float v51; 
  float displayWidth; 
  float v53; 
  float v54; 
  float v55; 
  __int64 v58; 
  float fireflySuppression; 
  float v60; 
  float v61; 
  float v67; 
  float v68; 
  GfxCmdBufState *state; 
  int v72; 
  __m256i v73; 
  bool v75; 
  int v76; 
  __m256i v77; 
  bool v79; 
  __m256i v80; 
  bool v82; 
  GfxCmdBufContext v84; 
  unsigned int v85; 
  unsigned int v86; 
  __m256i v87; 
  bool v89; 
  __m256i v90; 
  bool v92; 
  __int64 frameIndex; 
  __m256i v94; 
  bool v96; 
  __m256i v97; 
  bool v99; 
  __int64 v100; 
  __m256i v101; 
  bool v103; 
  unsigned int v106; 
  const R_RT_Surface *v107; 
  __m256i v108; 
  __m256i *v109; 
  unsigned int v112; 
  const R_RT_Surface *v113; 
  __m256i v114; 
  GfxCmdBufState *v115; 
  GfxCmdBufContext v116; 
  GfxCmdBufContext v117; 
  GfxCmdBufContext v118; 
  R_RT_Handle dofTile1Handle; 
  R_RT_Handle pingPongRenderTargetHandle; 
  R_RT_Handle dofHalfAlphaPingPongHandle; 
  R_RT_Handle result; 
  int v123; 
  R_RT_ColorHandle *v124; 
  R_RT_Group *v125; 
  R_RT_ColorHandle m_floatZFullRt; 
  DepthOfField_RenderState v127; 
  __m256i v128; 
  R_RT_ColorHandle dofHalfPrepassHandle; 
  R_RT_ColorHandle sourceHandle; 
  R_RT_Handle dofHalfAlphaHandle; 
  char *v132[4]; 
  __m256i floatZColorRt; 
  R_RT_Group v134; 
  R_RT_Group v135; 
  __int128 v136; 
  __int128 v137; 
  __int128 v138; 

  v124 = scopeBuffer;
  v125 = activeGroup;
  if ( !R_UsingDepthOfField(viewInfo) )
    return;
  v11 = activeGroup->m_colorRtCount == 1;
  v138 = v5;
  v137 = v6;
  v136 = v7;
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 559, ASSERT_TYPE_ASSERT, "(this->m_colorRtCount == 1)", (const char *)&queryFormat, "this->m_colorRtCount == 1") )
    __debugbreak();
  v12 = activeGroup->m_colorRts[0];
  v13 = DCONST_DVARINT_r_dccPostFX;
  v127.sourceHandle = v12;
  if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v11 = v13->current.integer == 1;
  v14 = 0;
  v123 = 8;
  if ( v11 )
    v14 = 8;
  v15 = 2112;
  if ( Dvar_GetBool_Internal(r_deviceDebug) )
    goto LABEL_15;
  v16 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  v17 = 2112;
  if ( !v16->current.enabled )
LABEL_15:
    v17 = 2048;
  rtFlags = v14 | v17;
  m_allocHeight = R_RT_Handle::GetSurface(&v127.sourceHandle)->m_allocHeight;
  m_allocWidth = R_RT_Handle::GetSurface(&v127.sourceHandle)->m_allocWidth;
  height = R_RT_Handle::GetSurface(&v127.sourceHandle)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&v127.sourceHandle);
  v23 = *(__m256i *)R_RT_CreateInternal(&result, Surface->m_image.m_base.width, height, m_allocWidth, m_allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)rtFlags, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "dof color", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(619)");
  pingPongRenderTargetHandle = (R_RT_Handle)v23;
  dofHalfAlphaPingPongHandle = (R_RT_Handle)v23;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&dofHalfAlphaPingPongHandle);
    if ( (R_RT_Handle::GetSurface(&dofHalfAlphaPingPongHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v23 = (__m256i)dofHalfAlphaPingPongHandle;
      pingPongRenderTargetHandle = dofHalfAlphaPingPongHandle;
      __debugbreak();
    }
    else
    {
      v23 = (__m256i)dofHalfAlphaPingPongHandle;
      pingPongRenderTargetHandle = dofHalfAlphaPingPongHandle;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v23 = (__m256i)pingPongRenderTargetHandle;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
  v127.destHandle = (R_RT_ColorHandle)v23;
  dofHalfAlphaPingPongHandle = (R_RT_Handle)v23;
  R_RT_Group::AssignColor(v125, (R_RT_ColorHandle *)&dofHalfAlphaPingPongHandle);
  m_floatZFullRt = viewInfo->sceneRtInput.m_floatZFullRt;
  v127.floatZColorRt = m_floatZFullRt;
  dofHalfAlphaPingPongHandle = (R_RT_Handle)m_floatZFullRt;
  v25 = *R_RT_GetViewInternal(&result, &dofHalfAlphaPingPongHandle, 0, 1);
  m_surfaceID = _XMM0;
  dofHalfAlphaPingPongHandle = v25;
  dofHalfAlphaHandle = v25;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&dofHalfAlphaHandle);
    if ( (R_RT_Handle::GetSurface(&dofHalfAlphaHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      LODWORD(_RDI) = dofHalfAlphaHandle.m_tracking.m_allocCounter;
      m_surfaceID = dofHalfAlphaHandle.m_surfaceID;
      v25 = dofHalfAlphaHandle;
      __debugbreak();
    }
    else
    {
      LODWORD(_RDI) = dofHalfAlphaHandle.m_tracking.m_allocCounter;
      m_surfaceID = dofHalfAlphaHandle.m_surfaceID;
      v25 = dofHalfAlphaHandle;
    }
  }
  else
  {
    __asm { vpextrd rdi, xmm0, 2 }
    if ( (_DWORD)_RDI )
    {
      v28 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v25 = dofHalfAlphaPingPongHandle;
      if ( v28 )
        __debugbreak();
    }
  }
  floatZColorRt = (__m256i)v25;
  v29 = m_surfaceID & 0x7FFF;
  if ( v29 )
    v30 = v29 | 0x8000;
  else
    v30 = 0;
  dofHalfAlphaPingPongHandle.m_surfaceID = v30;
  dofHalfAlphaPingPongHandle.m_tracking = dofHalfAlphaHandle.m_tracking;
  if ( v30 )
  {
    R_RT_Handle::GetSurface(&dofHalfAlphaPingPongHandle);
    if ( (R_RT_Handle::GetSurface(&dofHalfAlphaPingPongHandle)->m_rtFlagsInternal & 0x18) != 0 )
    {
      v31 = "!unionHandle.IsValid() || unionHandle.IsColor()";
      v32 = 217;
      v33 = "(!unionHandle.IsValid() || unionHandle.IsColor())";
LABEL_40:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", v32, ASSERT_TYPE_ASSERT, v33, (const char *)&queryFormat, v31) )
        __debugbreak();
    }
  }
  else if ( (_DWORD)_RDI )
  {
    v31 = "!this->m_tracking.m_allocCounter";
    v32 = 100;
    v33 = "(!this->m_tracking.m_allocCounter)";
    goto LABEL_40;
  }
  v127.floatZColorRtForTileDownsample = (R_RT_ColorHandle)dofHalfAlphaPingPongHandle;
  width = R_RT_Handle::GetSurface(&v127.floatZColorRt)->m_image.m_base.width;
  v127.sceneWidth = width;
  v35 = R_RT_Handle::GetSurface(&v127.floatZColorRt)->m_image.m_base.height;
  v127.sceneHeight = v35;
  v36 = truncate_cast<unsigned short,unsigned int>(width >> 4);
  v127.tileWidth = v36;
  v37 = truncate_cast<unsigned short,unsigned int>(v35 >> 4);
  v127.tileHeight = v37;
  if ( Dvar_GetBool_Internal(r_deviceDebug) )
    goto LABEL_47;
  v38 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( !v38->current.enabled )
LABEL_47:
    v15 = 2048;
  v39 = DCONST_DVARINT_r_dccPostFX;
  if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v39);
  if ( v39->current.integer != 1 )
    v123 = 0;
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
  R_DOF_GetEquationParams((GfxCmdBufContext *)&dofTile1Handle, viewInfo, (vec4_t *)v132, (vec4_t *)&dofHalfAlphaHandle);
  BokehMaxCocDiameter = R_DOF_GetBokehMaxCocDiameter(viewInfo);
  _XMM9 = LODWORD(FLOAT_1_0);
  source = gfxContext->source;
  v43 = (float)(1.0 / *(float *)&BokehMaxCocDiameter) * viewInfo->dofPhysical.cocScale;
  v44 = v43 * *((float *)v132 + 1);
  v45 = v43 * *(float *)&v132[1];
  v46 = v43 * *((float *)&v132[1] + 1);
  if ( (float)(v43 * *(float *)v132) != gfxContext->source->input.consts[38].v[0] || v44 != source->input.consts[38].v[1] || v45 != source->input.consts[38].v[2] || v46 != source->input.consts[38].v[3] )
  {
    source->input.consts[38].v[0] = v43 * *(float *)v132;
    source->input.consts[38].v[1] = v44;
    source->input.consts[38].v[2] = v45;
    source->input.consts[38].v[3] = v46;
    ++source->constVersions[38];
  }
  v47 = R_RT_Handle::GetSurface(&v127.sourceHandle)->m_image.m_base.height;
  v48 = R_RT_Handle::GetSurface(&v127.sourceHandle);
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
  v49 = v48->m_image.m_base.width;
  v50 = R_DOF_GetBokehMaxCocDiameter(viewInfo);
  v51 = *(float *)&v50 * 0.5;
  displayWidth = (float)vidConfig.displayWidth;
  *(float *)&v50 = (float)vidConfig.displayHeight;
  v53 = v51 / displayWidth;
  v54 = v51 / *(float *)&v50;
  v55 = 0.0;
  if ( (unsigned int)(viewInfo->postAA.mode - 2) <= 1 )
  {
    Sys_Microseconds();
    _XMM0 = 0i64;
    __asm { vroundss xmm0, xmm0, xmm1, 1; X }
    v55 = fmodf_0(*(float *)&_XMM0, 600.0) + 1024.0;
  }
  v58 = *(_QWORD *)&dofTile1Handle.m_surfaceID;
  fireflySuppression = rg.dofFilter.fireflySuppression;
  if ( v53 != *(float *)(*(_QWORD *)&dofTile1Handle.m_surfaceID + 2416i64) || v54 != *(float *)(*(_QWORD *)&dofTile1Handle.m_surfaceID + 2420i64) || *(float *)(*(_QWORD *)&dofTile1Handle.m_surfaceID + 2424i64) != 0.0 || rg.dofFilter.fireflySuppression != *(float *)(*(_QWORD *)&dofTile1Handle.m_surfaceID + 2428i64) )
  {
    *(_DWORD *)(*(_QWORD *)&dofTile1Handle.m_surfaceID + 2424i64) = 0;
    *(float *)(v58 + 2416) = v53;
    *(float *)(v58 + 2420) = v54;
    *(float *)(v58 + 2428) = fireflySuppression;
    ++*(_WORD *)(v58 + 10242);
  }
  _XMM0 = (unsigned int)rg.dofFilter.temporalFilterEnabled;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm9, xmm6, xmm2
  }
  if ( rg.dofFilter.bokehEdgeSharpness != *(float *)(v58 + 2448) || *(float *)(v58 + 2452) != 0.0 || *(float *)&_XMM0 != *(float *)(v58 + 2456) || v55 != *(float *)(v58 + 2460) )
  {
    *(float *)(v58 + 2448) = rg.dofFilter.bokehEdgeSharpness;
    *(float *)(v58 + 2456) = *(float *)&_XMM0;
    *(float *)(v58 + 2460) = v55;
    *(_DWORD *)(v58 + 2452) = 0;
    ++*(_WORD *)(v58 + 10246);
  }
  _XMM0 = (unsigned int)rg.dofFilter.backgroundReconstruction;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  v61 = (float)v47;
  v67 = v61 * v54;
  v60 = (float)v49;
  v68 = v60 * v53;
  __asm { vblendvps xmm0, xmm9, xmm6, xmm2 }
  if ( rg.dofFilter.sharpen != *(float *)(v58 + 2464) || *(float *)&_XMM0 != *(float *)(v58 + 2468) || v68 != *(float *)(v58 + 2472) || v67 != *(float *)(v58 + 2476) )
  {
    *(float *)(v58 + 2464) = rg.dofFilter.sharpen;
    *(float *)(v58 + 2468) = *(float *)&_XMM0;
    *(float *)(v58 + 2472) = v68;
    *(float *)(v58 + 2476) = v67;
    ++*(_WORD *)(v58 + 10248);
  }
  dofHalfAlphaPingPongHandle = (R_RT_Handle)m_floatZFullRt;
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
  _XMM0 = *(_OWORD *)&dofTile1Handle.m_surfaceID;
  RB_DOF_UpdateDistanceMeter((GfxCmdBufContext *)&dofTile1Handle, viewInfo, (R_RT_ColorHandle *)&dofHalfAlphaPingPongHandle);
  state = gfxContext->state;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&pingPongRenderTargetHandle, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v72 = v123 | v15;
  v73 = *(__m256i *)R_RT_CreateInternal(&result, v36, v37, v36, v37, 1u, 1u, 1u, g_R_RT_renderTargetFmts[24], (R_RT_Flags)v72, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_TILE1", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(641)");
  dofHalfAlphaPingPongHandle = (R_RT_Handle)v73;
  pingPongRenderTargetHandle = (R_RT_Handle)v73;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&pingPongRenderTargetHandle);
    if ( (R_RT_Handle::GetSurface(&pingPongRenderTargetHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v73 = (__m256i)pingPongRenderTargetHandle;
      __debugbreak();
    }
    else
    {
      v73 = (__m256i)pingPongRenderTargetHandle;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v75 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v73 = (__m256i)dofHalfAlphaPingPongHandle;
      if ( v75 )
        __debugbreak();
    }
  }
  v127.dofTile1Handle = (R_RT_ColorHandle)v73;
  R_ProfBeginNamedEvent(state, "Bokeh DoF");
  R_GPU_BeginTimer(GPU_TIMER_DOF_TILE);
  v76 = R_RT_Handle::GetSurface(&v127.floatZColorRtForTileDownsample)->m_image.m_base.height >> 1;
  v77 = *(__m256i *)R_RT_CreateInternal(&result, v36, v37, v36, v37, 1u, 1u, 1u, g_R_RT_renderTargetFmts[24], (R_RT_Flags)v72, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_TILE0", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(647)");
  dofHalfAlphaPingPongHandle = (R_RT_Handle)v77;
  pingPongRenderTargetHandle = (R_RT_Handle)v77;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&pingPongRenderTargetHandle);
    if ( (R_RT_Handle::GetSurface(&pingPongRenderTargetHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v77 = (__m256i)pingPongRenderTargetHandle;
      __debugbreak();
    }
    else
    {
      v77 = (__m256i)pingPongRenderTargetHandle;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v79 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v77 = (__m256i)dofHalfAlphaPingPongHandle;
      if ( v79 )
        __debugbreak();
    }
  }
  viewInfo->sceneRtInput.m_dofTile0Handle = (R_RT_ColorHandle)v77;
  v127.dofTile0Handle = (R_RT_ColorHandle)v77;
  v80 = *(__m256i *)R_RT_CreateInternal(&result, v36, v76, v36, v76, 1u, 1u, 1u, g_R_RT_renderTargetFmts[24], (R_RT_Flags)v72, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_TILE0_PINGPONG", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(649)");
  dofHalfAlphaPingPongHandle = (R_RT_Handle)v80;
  pingPongRenderTargetHandle = (R_RT_Handle)v80;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&pingPongRenderTargetHandle);
    if ( (R_RT_Handle::GetSurface(&pingPongRenderTargetHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v80 = (__m256i)pingPongRenderTargetHandle;
      __debugbreak();
    }
    else
    {
      v80 = (__m256i)pingPongRenderTargetHandle;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v82 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v80 = (__m256i)dofHalfAlphaPingPongHandle;
      if ( v82 )
        __debugbreak();
    }
  }
  v127.pingPongRenderTargetHandle = (R_RT_ColorHandle)v80;
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
  RB_DOF_TileDownsample((GfxCmdBufContext *)&dofTile1Handle, viewInfo, &v127);
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
  _XMM0 = *(_OWORD *)&dofTile1Handle.m_surfaceID;
  RB_DOF_TileNeighbor((GfxCmdBufContext *)&dofTile1Handle, viewInfo, &v127);
  v84 = *gfxContext;
  pingPongRenderTargetHandle = (R_RT_Handle)v127.pingPongRenderTargetHandle;
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = v84;
  R_RT_Destroy((GfxCmdBufContext *)&dofTile1Handle, (R_RT_ColorHandle *)&pingPongRenderTargetHandle);
  R_GPU_EndTimer();
  v132[0] = "R_RENDERTARGET_DOF_HALF_COLOR_PINGPONG_0";
  v132[1] = "R_RENDERTARGET_DOF_HALF_COLOR_PINGPONG_1";
  *(_QWORD *)&dofTile1Handle.m_surfaceID = "R_RENDERTARGET_DOF_HALF_PREPASS_0";
  *(_QWORD *)&dofTile1Handle.m_tracking.m_allocCounter = "R_RENDERTARGET_DOF_HALF_PREPASS_1";
  v85 = v127.sceneWidth >> 1;
  v86 = v127.sceneHeight >> 1;
  v87 = *(__m256i *)R_RT_CreateInternal(&result, v127.sceneWidth >> 1, v127.sceneHeight >> 1, v127.sceneWidth >> 1, v127.sceneHeight >> 1, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)v72, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_HALF_COLOR", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(661)");
  m_floatZFullRt = (R_RT_ColorHandle)v87;
  pingPongRenderTargetHandle = (R_RT_Handle)v87;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&pingPongRenderTargetHandle);
    if ( (R_RT_Handle::GetSurface(&pingPongRenderTargetHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v87 = (__m256i)pingPongRenderTargetHandle;
      m_floatZFullRt = (R_RT_ColorHandle)pingPongRenderTargetHandle;
      __debugbreak();
    }
    else
    {
      v87 = (__m256i)pingPongRenderTargetHandle;
      m_floatZFullRt = (R_RT_ColorHandle)pingPongRenderTargetHandle;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v89 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v87 = (__m256i)m_floatZFullRt;
      if ( v89 )
        __debugbreak();
    }
  }
  v127.dofHalfColorHandle = (R_RT_ColorHandle)v87;
  v90 = *(__m256i *)R_RT_CreateInternal(&result, v85, v86, v85, v86, 1u, 1u, 1u, g_R_RT_renderTargetFmts[27], (R_RT_Flags)v72, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_HALF_ALPHA", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(662)");
  dofHalfAlphaHandle = (R_RT_Handle)v90;
  pingPongRenderTargetHandle = (R_RT_Handle)v90;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&pingPongRenderTargetHandle);
    if ( (R_RT_Handle::GetSurface(&pingPongRenderTargetHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v90 = (__m256i)pingPongRenderTargetHandle;
      dofHalfAlphaHandle = pingPongRenderTargetHandle;
      __debugbreak();
    }
    else
    {
      v90 = (__m256i)pingPongRenderTargetHandle;
      dofHalfAlphaHandle = pingPongRenderTargetHandle;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v92 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v90 = (__m256i)dofHalfAlphaHandle;
      if ( v92 )
        __debugbreak();
    }
  }
  frameIndex = viewInfo->input.data->frameIndex;
  v127.dofHalfAlphaHandle = (R_RT_ColorHandle)v90;
  v94 = *(__m256i *)R_RT_CreateInternal(&result, v85, v86, v85, v86, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)v72, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v132[frameIndex], 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(663)");
  *(__m256i *)v132 = v94;
  pingPongRenderTargetHandle = (R_RT_Handle)v94;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&pingPongRenderTargetHandle);
    if ( (R_RT_Handle::GetSurface(&pingPongRenderTargetHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v94 = (__m256i)pingPongRenderTargetHandle;
      *(R_RT_Handle *)v132 = pingPongRenderTargetHandle;
      __debugbreak();
    }
    else
    {
      v94 = (__m256i)pingPongRenderTargetHandle;
      *(R_RT_Handle *)v132 = pingPongRenderTargetHandle;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v96 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v94 = *(__m256i *)v132;
      if ( v96 )
        __debugbreak();
    }
  }
  v127.dofHalfColorPingPongHandle = (R_RT_ColorHandle)v94;
  v97 = *(__m256i *)R_RT_CreateInternal(&result, v85, v86, v85, v86, 1u, 1u, 1u, g_R_RT_renderTargetFmts[27], (R_RT_Flags)v72, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "R_RENDERTARGET_DOF_HALF_ALPHA_PINGPONG", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(664)");
  dofHalfAlphaPingPongHandle = (R_RT_Handle)v97;
  pingPongRenderTargetHandle = (R_RT_Handle)v97;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&pingPongRenderTargetHandle);
    if ( (R_RT_Handle::GetSurface(&pingPongRenderTargetHandle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v97 = (__m256i)pingPongRenderTargetHandle;
      dofHalfAlphaPingPongHandle = pingPongRenderTargetHandle;
      __debugbreak();
    }
    else
    {
      v97 = (__m256i)pingPongRenderTargetHandle;
      dofHalfAlphaPingPongHandle = pingPongRenderTargetHandle;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v99 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v97 = (__m256i)dofHalfAlphaPingPongHandle;
      if ( v99 )
        __debugbreak();
    }
  }
  v100 = viewInfo->input.data->frameIndex;
  v127.dofHalfAlphaPingPongHandle = (R_RT_ColorHandle)v97;
  v101 = *(__m256i *)R_RT_CreateInternal(&result, v85, v86, v85, v86, 1u, 1u, 1u, g_R_RT_renderTargetFmts[3], (R_RT_Flags)v72, (R_RT_FlagsInternal)2, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, *((const char **)&dofTile1Handle.m_surfaceID + v100), 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(665)");
  pingPongRenderTargetHandle = (R_RT_Handle)v101;
  dofTile1Handle = (R_RT_Handle)v101;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&dofTile1Handle);
    if ( (R_RT_Handle::GetSurface(&dofTile1Handle)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
    {
      v101 = (__m256i)dofTile1Handle;
      pingPongRenderTargetHandle = dofTile1Handle;
      __debugbreak();
    }
    else
    {
      v101 = (__m256i)dofTile1Handle;
      pingPongRenderTargetHandle = dofTile1Handle;
    }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      v103 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v101 = (__m256i)pingPongRenderTargetHandle;
      if ( v103 )
        __debugbreak();
    }
  }
  v127.dofHalfPrepassHandle = (R_RT_ColorHandle)v101;
  if ( rg.dofFilter.fullres )
  {
    R_GPU_BeginTimer(GPU_TIMER_DOF_FILTER);
    _XMM6 = *gfxContext;
    __asm { vpextrq rdi, xmm6, 1 }
    R_ProfBeginNamedEvent(_RDI, "DOF Circular Filter");
    dofTile1Handle = (R_RT_Handle)v127.dofTile1Handle;
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&dofTile1Handle, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    dofTile1Handle = (R_RT_Handle)v127.destHandle;
    v106 = R_RT_Handle::GetSurface(&dofTile1Handle)->m_image.m_base.height;
    v107 = R_RT_Handle::GetSurface(&dofTile1Handle);
    R_SetRenderTargetSize(_XMM6.source, v107->m_image.m_base.width, v106, GFX_USE_VIEWPORT_FULL);
    dofTile1Handle = (R_RT_Handle)v127.destHandle;
    R_RT_Group::AssignColor(&v134, (R_RT_ColorHandle *)&dofTile1Handle);
    v135 = v134;
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = _XMM6;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&dofTile1Handle, &v135, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(476)");
    v108 = (__m256i)viewInfo->sceneRtInput.m_floatZFullRt;
    v128 = *(__m256i *)v124;
    sourceHandle = v127.sourceHandle;
    floatZColorRt = (__m256i)v127.sourceHandle;
    result = (R_RT_Handle)v127.dofTile1Handle;
    dofHalfPrepassHandle = (R_RT_ColorHandle)v108;
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = _XMM6;
    R_DOF_CircularFilterFullres((GfxCmdBufContext *)&dofTile1Handle, viewInfo, (R_RT_ColorHandle *)&result, (R_RT_ColorHandle *)&floatZColorRt, &sourceHandle, &dofHalfPrepassHandle, (R_RT_ColorHandle *)&v128);
    R_ProfEndNamedEvent(_RDI);
  }
  else
  {
    R_GPU_BeginTimer(GPU_TIMER_DOF_FILTER);
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
    RB_DOF_Prepass((GfxCmdBufContext *)&dofTile1Handle, viewInfo, &v127);
    v109 = (__m256i *)v124;
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
    result = v124->R_RT_Handle;
    RB_DOF_CircularFilter((GfxCmdBufContext *)&dofTile1Handle, viewInfo, &v127, (R_RT_ColorHandle *)&result);
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
    RB_DOF_Median((GfxCmdBufContext *)&dofTile1Handle, viewInfo, &v127);
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
    RB_DOF_Sharpen((GfxCmdBufContext *)&dofTile1Handle, viewInfo, &v127);
    _XMM6 = *gfxContext;
    __asm { vpextrq rdi, xmm6, 1 }
    R_ProfBeginNamedEvent(_RDI, "DOF Upsample");
    *(R_RT_ColorHandle *)v132 = v127.dofHalfColorPingPongHandle;
    result = (R_RT_Handle)v127.dofHalfColorPingPongHandle;
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    dofHalfAlphaHandle = (R_RT_Handle)v127.dofHalfAlphaHandle;
    result = (R_RT_Handle)v127.dofHalfAlphaHandle;
    R_AddRenderTargetTransition(_RDI, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(_RDI);
    pingPongRenderTargetHandle = (R_RT_Handle)v127.destHandle;
    v112 = R_RT_Handle::GetSurface(&pingPongRenderTargetHandle)->m_image.m_base.height;
    v113 = R_RT_Handle::GetSurface(&pingPongRenderTargetHandle);
    R_SetRenderTargetSize(_XMM6.source, v113->m_image.m_base.width, v112, GFX_USE_VIEWPORT_FULL);
    result = (R_RT_Handle)v127.destHandle;
    R_RT_Group::AssignColor(&v135, (R_RT_ColorHandle *)&result);
    v134 = v135;
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = _XMM6;
    R_SetRenderTargetsInternal((GfxCmdBufContext *)&dofTile1Handle, &v134, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(601)");
    v114 = *v109;
    result = (R_RT_Handle)v127.sourceHandle;
    floatZColorRt = (__m256i)v127.floatZColorRt;
    pingPongRenderTargetHandle = (R_RT_Handle)v127.dofHalfPrepassHandle;
    dofHalfPrepassHandle = v127.dofHalfPrepassHandle;
    dofHalfAlphaPingPongHandle = *(R_RT_Handle *)v132;
    sourceHandle = (R_RT_ColorHandle)v114;
    m_floatZFullRt = v127.dofTile1Handle;
    v128 = (__m256i)dofHalfAlphaHandle;
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = _XMM6;
    R_DOF_Upsample((GfxCmdBufContext *)&dofTile1Handle, viewInfo, &m_floatZFullRt, (R_RT_ColorHandle *)&dofHalfAlphaPingPongHandle, (R_RT_ColorHandle *)&v128, &dofHalfPrepassHandle, &sourceHandle, (R_RT_ColorHandle *)&floatZColorRt, (R_RT_ColorHandle *)&result);
    R_ProfEndNamedEvent(_RDI);
    dofHalfAlphaPingPongHandle = (R_RT_Handle)v127.dofHalfAlphaPingPongHandle;
    m_floatZFullRt = v127.dofHalfColorHandle;
  }
  R_GPU_EndTimer();
  result = (R_RT_Handle)m_floatZFullRt;
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&dofTile1Handle, (R_RT_ColorHandle *)&result);
  result = dofHalfAlphaHandle;
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&dofTile1Handle, (R_RT_ColorHandle *)&result);
  result = dofHalfAlphaPingPongHandle;
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&dofTile1Handle, (R_RT_ColorHandle *)&result);
  result = (R_RT_Handle)v127.dofTile1Handle;
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = *gfxContext;
  R_RT_Destroy((GfxCmdBufContext *)&dofTile1Handle, (R_RT_ColorHandle *)&result);
  v115 = gfxContext->state;
  R_ProfEndNamedEvent(v115);
  result = (R_RT_Handle)v127.destHandle;
  R_AddRenderTargetTransition(v115, (R_RT_ColorHandle *)&result, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v115);
  if ( s_dofPrevHalfHandlesValid )
  {
    v116 = *gfxContext;
    result = (R_RT_Handle)s_dofPrevHalfPrepassHandle;
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = v116;
    R_RT_Destroy((GfxCmdBufContext *)&dofTile1Handle, (R_RT_ColorHandle *)&result);
    v117 = *gfxContext;
    result = (R_RT_Handle)s_dofPrevHalfColorHandle;
    *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = v117;
    R_RT_Destroy((GfxCmdBufContext *)&dofTile1Handle, (R_RT_ColorHandle *)&result);
  }
  s_dofPrevHalfPrepassHandle = (R_RT_ColorHandle)pingPongRenderTargetHandle;
  s_dofPrevHalfColorHandle = *(R_RT_ColorHandle *)v132;
  result = (R_RT_Handle)v127.sourceHandle;
  v118 = *gfxContext;
  s_dofPrevHalfHandlesValid = 1;
  *(GfxCmdBufContext *)&dofTile1Handle.m_surfaceID = v118;
  R_RT_Destroy((GfxCmdBufContext *)&dofTile1Handle, (R_RT_ColorHandle *)&result);
  result = (R_RT_Handle)v127.destHandle;
  R_RT_Group::AssignColor(v125, (R_RT_ColorHandle *)&result);
}

/*
==============
RB_DOF_CircularFilter
==============
*/
void RB_DOF_CircularFilter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState, R_RT_ColorHandle *scopeBuffer)
{
  GfxCmdBufState *state; 
  __m256i dofHalfColorPingPongHandle; 
  __m256i dofHalfAlphaPingPongHandle; 
  __int64 v9; 
  __int64 v11; 
  R_RT_Handle v13; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext *source; 
  R_RT_Handle dofTile1Handle; 
  GfxCmdBufContext v18; 
  __m256i v19; 
  R_RT_Handle dofHalfPrepassHandle; 
  GfxCmdBufContext v21; 
  const GfxViewInfo *v22; 
  R_RT_Handle sourceHandle; 
  R_RT_ColorHandle dofHalfColorHandle; 
  _BYTE v25[128]; 
  _BYTE v26[64]; 
  const char *v27; 
  R_RT_Group v28; 
  R_RT_ColorHandle v29[2]; 

  state = gfxContext->state;
  v22 = viewInfo;
  v21.source = (GfxCmdBufSourceState *)gfxContext;
  R_ProfBeginNamedEvent(state, "DOF Circular Filter");
  dofHalfPrepassHandle = (R_RT_Handle)dofState->dofHalfPrepassHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfPrepassHandle, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofHalfPrepassHandle = (R_RT_Handle)dofState->dofHalfColorHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfPrepassHandle, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofHalfPrepassHandle = (R_RT_Handle)dofState->dofHalfColorPingPongHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfPrepassHandle, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofHalfPrepassHandle = (R_RT_Handle)dofState->dofHalfAlphaPingPongHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfPrepassHandle, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  dofHalfColorPingPongHandle = (__m256i)dofState->dofHalfColorPingPongHandle;
  dofHalfAlphaPingPongHandle = (__m256i)dofState->dofHalfAlphaPingPongHandle;
  v9 = 0i64;
  v25[0] = 2;
  v29[0] = (R_RT_ColorHandle)dofHalfColorPingPongHandle;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&dofHalfPrepassHandle.m_tracking.m_name = _XMM0;
  v11 = 2i64;
  dofHalfPrepassHandle.m_surfaceID = 0;
  v29[1] = (R_RT_ColorHandle)dofHalfAlphaPingPongHandle;
  dofHalfPrepassHandle.m_tracking.m_allocCounter = 0;
  do
  {
    sourceHandle = (R_RT_Handle)v29[v9];
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&sourceHandle);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    *(R_RT_ColorHandle *)&v25[v9 * 32 + 8] = v29[v9];
    ++v9;
    --v11;
  }
  while ( v11 );
  *(R_RT_Handle *)&v26[8] = dofHalfPrepassHandle;
  *(__m256i *)&v28.m_colorRtCount = *(__m256i *)v25;
  *(__m256i *)&v28.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v25[32];
  *(__m256i *)&v28.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v25[64];
  *(__m256i *)&v28.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v25[96];
  v13 = (R_RT_Handle)dofState->dofHalfColorPingPongHandle;
  *(__m256i *)&v28.m_colorRts[3].m_tracking.m_location = *(__m256i *)v26;
  *(__m256i *)&v28.m_depthRt.m_tracking.m_location = *(__m256i *)&v26[32];
  v28.m_vrsRt.m_tracking.m_location = v27;
  dofHalfPrepassHandle = v13;
  height = R_RT_Handle::GetSurface(&dofHalfPrepassHandle)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&dofHalfPrepassHandle);
  source = (GfxCmdBufContext *)v21.source;
  R_SetRenderTargetSize(*(GfxCmdBufSourceState **)v21.source->matrices.matrix[0].m.m[0].v, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v21 = *source;
  R_SetRenderTargetsInternal(&v21, &v28, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(458)");
  dofTile1Handle = (R_RT_Handle)dofState->dofTile1Handle;
  sourceHandle = (R_RT_Handle)dofState->sourceHandle;
  dofHalfColorHandle = dofState->dofHalfColorHandle;
  v18 = *source;
  dofHalfPrepassHandle = dofTile1Handle;
  v19 = (__m256i)dofState->dofHalfPrepassHandle;
  v21 = v18;
  v29[0] = (R_RT_ColorHandle)v19;
  R_DOF_CircularFilter(&v21, v22, v29, &dofHalfColorHandle, (R_RT_ColorHandle *)&dofHalfPrepassHandle, (R_RT_ColorHandle *)&sourceHandle);
  R_ProfEndNamedEvent(source->state);
}

/*
==============
RB_DOF_GetCircleOfConfusionClip
==============
*/
float RB_DOF_GetCircleOfConfusionClip()
{
  return s_circleOfConfusionClip;
}

/*
==============
RB_DOF_GetCircleOfConfusionLinear
==============
*/
float RB_DOF_GetCircleOfConfusionLinear()
{
  return s_circleOfConfusionLinear;
}

/*
==============
RB_DOF_GetDistance
==============
*/
float RB_DOF_GetDistance()
{
  return s_distance;
}

/*
==============
RB_DOF_Median
==============
*/
void RB_DOF_Median(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  __m256i dofHalfColorHandle; 
  __m256i dofHalfAlphaHandle; 
  __int64 v8; 
  __int64 v10; 
  R_RT_Handle v12; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext *source; 
  R_RT_Handle dofHalfAlphaPingPongHandle; 
  R_RT_Handle dofHalfColorPingPongHandle; 
  GfxCmdBufContext v18; 
  R_RT_Handle v19; 
  _BYTE v20[128]; 
  _BYTE v21[64]; 
  const char *v22; 
  R_RT_Group v23; 
  _BYTE v24[64]; 

  state = gfxContext->state;
  v18.source = (GfxCmdBufSourceState *)gfxContext;
  R_ProfBeginNamedEvent(state, "DOF Median");
  dofHalfColorPingPongHandle = (R_RT_Handle)dofState->dofHalfColorPingPongHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfColorPingPongHandle, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofHalfColorPingPongHandle = (R_RT_Handle)dofState->dofHalfAlphaPingPongHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfColorPingPongHandle, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofHalfColorPingPongHandle = (R_RT_Handle)dofState->dofHalfColorHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfColorPingPongHandle, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofHalfColorPingPongHandle = (R_RT_Handle)dofState->dofHalfAlphaHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfColorPingPongHandle, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  dofHalfColorHandle = (__m256i)dofState->dofHalfColorHandle;
  dofHalfAlphaHandle = (__m256i)dofState->dofHalfAlphaHandle;
  v8 = 0i64;
  v20[0] = 2;
  *(__m256i *)v24 = dofHalfColorHandle;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&dofHalfColorPingPongHandle.m_tracking.m_name = _XMM0;
  v10 = 2i64;
  dofHalfColorPingPongHandle.m_surfaceID = 0;
  *(__m256i *)&v24[32] = dofHalfAlphaHandle;
  dofHalfColorPingPongHandle.m_tracking.m_allocCounter = 0;
  do
  {
    v19 = *(R_RT_Handle *)&v24[v8];
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v19);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    *(__m256i *)&v20[v8 + 8] = *(__m256i *)&v24[v8];
    v8 += 32i64;
    --v10;
  }
  while ( v10 );
  *(R_RT_Handle *)&v21[8] = dofHalfColorPingPongHandle;
  *(__m256i *)&v23.m_colorRtCount = *(__m256i *)v20;
  *(__m256i *)&v23.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v20[32];
  *(__m256i *)&v23.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v20[64];
  *(__m256i *)&v23.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v20[96];
  v12 = (R_RT_Handle)dofState->dofHalfColorHandle;
  *(__m256i *)&v23.m_colorRts[3].m_tracking.m_location = *(__m256i *)v21;
  *(__m256i *)&v23.m_depthRt.m_tracking.m_location = *(__m256i *)&v21[32];
  v23.m_vrsRt.m_tracking.m_location = v22;
  dofHalfColorPingPongHandle = v12;
  height = R_RT_Handle::GetSurface(&dofHalfColorPingPongHandle)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&dofHalfColorPingPongHandle);
  source = (GfxCmdBufContext *)v18.source;
  R_SetRenderTargetSize(*(GfxCmdBufSourceState **)v18.source->matrices.matrix[0].m.m[0].v, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v18 = *source;
  R_SetRenderTargetsInternal(&v18, &v23, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(515)");
  dofHalfAlphaPingPongHandle = (R_RT_Handle)dofState->dofHalfAlphaPingPongHandle;
  v19 = (R_RT_Handle)dofState->dofHalfColorPingPongHandle;
  v18 = *source;
  dofHalfColorPingPongHandle = dofHalfAlphaPingPongHandle;
  R_DOF_Median(&v18, (R_RT_ColorHandle *)&dofHalfColorPingPongHandle, (R_RT_ColorHandle *)&v19);
  R_ProfEndNamedEvent(source->state);
}

/*
==============
RB_DOF_Prepass
==============
*/
void RB_DOF_Prepass(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  const GfxBackEndData *data; 
  __int64 v8; 
  __int64 clientIndex; 
  int v10; 
  unsigned int frameCount; 
  __m256i dofHalfPrepassHandle; 
  __int64 v14; 
  __int64 v16; 
  R_RT_Handle v17; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext *source; 
  R_RT_Handle v21; 
  __m256i v22; 
  GfxCmdBufContext v23; 
  R_RT_Handle dofTile1Handle; 
  __m256i *v25; 
  GfxCmdBufContext v26; 
  DepthOfField_RenderState *v27; 
  R_RT_Handle v28; 
  R_RT_ColorHandle v29; 
  _BYTE v30[128]; 
  _BYTE v31[64]; 
  const char *v32; 
  R_RT_ColorHandle v33; 
  R_RT_ColorHandle v34; 
  R_RT_ColorHandle result; 
  R_RT_Group v36; 
  R_RT_ColorHandle v37[2]; 

  state = gfxContext->state;
  v26.source = (GfxCmdBufSourceState *)gfxContext;
  v27 = dofState;
  R_ProfBeginNamedEvent(state, "DOF Prepass");
  data = viewInfo->input.data;
  v8 = 0i64;
  if ( !s_dofPrevHalfHandlesValid )
  {
    LODWORD(clientIndex) = viewInfo->clientIndex;
    goto LABEL_5;
  }
  clientIndex = viewInfo->clientIndex;
  if ( data->frameCount - s_temporalSamplingLastValidFrame[clientIndex] != 1 )
  {
LABEL_5:
    v10 = 0;
    goto LABEL_6;
  }
  v10 = 1;
LABEL_6:
  frameCount = data->frameCount;
  v25 = (__m256i *)&v33;
  s_temporalSamplingLastValidFrame[(int)clientIndex] = frameCount;
  if ( v10 )
  {
    v33 = s_dofPrevHalfColorHandle;
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v33.m_tracking.m_name = _XMM0;
    v33.m_surfaceID = 0;
    v33.m_tracking.m_allocCounter = 0;
  }
  if ( v10 )
  {
    v34 = s_dofPrevHalfPrepassHandle;
  }
  else
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v34.m_tracking.m_name = _XMM0;
    v34.m_surfaceID = 0;
    v34.m_tracking.m_allocCounter = 0;
  }
  RB_GetHalfVelocityRt(&result, viewInfo, 0);
  dofTile1Handle = (R_RT_Handle)dofState->dofTile1Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofTile1Handle, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofTile1Handle = (R_RT_Handle)dofState->dofHalfPrepassHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofTile1Handle, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofTile1Handle = (R_RT_Handle)dofState->dofHalfColorHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofTile1Handle, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  dofHalfPrepassHandle = (__m256i)dofState->dofHalfPrepassHandle;
  v37[0] = dofState->dofHalfColorHandle;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&dofTile1Handle.m_tracking.m_name = _XMM0;
  v37[1] = (R_RT_ColorHandle)dofHalfPrepassHandle;
  dofTile1Handle.m_surfaceID = 0;
  dofTile1Handle.m_tracking.m_allocCounter = 0;
  v30[0] = 2;
  v14 = 2i64;
  do
  {
    v28 = (R_RT_Handle)v37[v8];
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v28);
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
        __debugbreak();
    }
    *(R_RT_ColorHandle *)&v30[v8 * 32 + 8] = v37[v8];
    ++v8;
    --v14;
  }
  while ( v14 );
  v16 = (__int64)v27;
  *(R_RT_Handle *)&v31[8] = dofTile1Handle;
  *(__m256i *)&v36.m_colorRtCount = *(__m256i *)v30;
  *(__m256i *)&v36.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v30[32];
  *(__m256i *)&v36.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v30[64];
  *(__m256i *)&v36.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v30[96];
  v17 = (R_RT_Handle)v27->dofHalfPrepassHandle;
  *(__m256i *)&v36.m_colorRts[3].m_tracking.m_location = *(__m256i *)v31;
  *(__m256i *)&v36.m_depthRt.m_tracking.m_location = *(__m256i *)&v31[32];
  v36.m_vrsRt.m_tracking.m_location = v32;
  dofTile1Handle = v17;
  height = R_RT_Handle::GetSurface(&dofTile1Handle)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&dofTile1Handle);
  source = (GfxCmdBufContext *)v26.source;
  R_SetRenderTargetSize(*(GfxCmdBufSourceState **)v26.source->matrices.matrix[0].m.m[0].v, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  v26 = *source;
  R_SetRenderTargetsInternal(&v26, &v36, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(365)");
  v21 = *(R_RT_Handle *)v16;
  v28 = (R_RT_Handle)result;
  v29 = *(R_RT_ColorHandle *)(v16 + 184);
  v22 = *v25;
  dofTile1Handle = v21;
  v33 = (R_RT_ColorHandle)v22;
  v23 = *source;
  v37[0] = *(R_RT_ColorHandle *)(v16 + 72);
  v26 = v23;
  R_DOF_Prepass(&v26, v37, &v33, &v34, &v29, (R_RT_ColorHandle *)&dofTile1Handle, (R_RT_ColorHandle *)&v28);
  R_ProfEndNamedEvent(source->state);
}

/*
==============
RB_DOF_Sharpen
==============
*/
void RB_DOF_Sharpen(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  R_RT_Handle v8; 
  R_RT_Handle dofHalfColorHandle; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v13; 
  R_RT_Image *p_m_image; 
  GfxCmdBufState *v15; 
  R_RT_Handle dofHalfColorPingPongHandle; 
  R_RT_Handle v17; 
  _BYTE v18[64]; 
  __m256i v19; 
  __m256i v20; 
  _BYTE v21[64]; 
  const char *v22; 
  R_RT_Group v23; 
  R_RT_Handle v24; 

  state = gfxContext->state;
  R_ProfBeginNamedEvent(state, "DOF Sharpen");
  dofHalfColorPingPongHandle = (R_RT_Handle)dofState->dofHalfColorPingPongHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfColorPingPongHandle, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofHalfColorPingPongHandle = (R_RT_Handle)dofState->dofHalfColorHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofHalfColorPingPongHandle, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  v24 = (R_RT_Handle)dofState->dofHalfColorPingPongHandle;
  v18[0] = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&dofHalfColorPingPongHandle.m_tracking.m_name = _XMM0;
  v8 = (R_RT_Handle)dofState->dofHalfColorPingPongHandle;
  dofHalfColorPingPongHandle.m_surfaceID = 0;
  dofHalfColorPingPongHandle.m_tracking.m_allocCounter = 0;
  v24 = v8;
  v17 = v8;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v17);
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
      __debugbreak();
  }
  *(R_RT_Handle *)&v18[8] = v24;
  *(R_RT_Handle *)&v21[8] = dofHalfColorPingPongHandle;
  *(__m256i *)&v23.m_colorRtCount = *(__m256i *)v18;
  *(__m256i *)&v23.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v18[32];
  *(__m256i *)&v23.m_colorRts[1].m_tracking.m_location = v19;
  *(__m256i *)&v23.m_colorRts[2].m_tracking.m_location = v20;
  dofHalfColorHandle = (R_RT_Handle)dofState->dofHalfColorHandle;
  *(__m256i *)&v23.m_colorRts[3].m_tracking.m_location = *(__m256i *)v21;
  *(__m256i *)&v23.m_depthRt.m_tracking.m_location = *(__m256i *)&v21[32];
  v23.m_vrsRt.m_tracking.m_location = v22;
  dofHalfColorPingPongHandle = dofHalfColorHandle;
  height = R_RT_Handle::GetSurface(&dofHalfColorPingPongHandle)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&dofHalfColorPingPongHandle);
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
  *(GfxCmdBufContext *)&dofHalfColorPingPongHandle.m_surfaceID = *gfxContext;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&dofHalfColorPingPongHandle, &v23, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(549)");
  v13 = *gfxContext;
  v24 = (R_RT_Handle)dofState->dofHalfColorHandle;
  p_m_image = &R_RT_Handle::GetSurface(&v24)->m_image;
  if ( !v13.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v13.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v13.source->input.codeImages[22] = &p_m_image->m_base;
  *(GfxCmdBufContext *)&dofHalfColorPingPongHandle.m_surfaceID = v13;
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&dofHalfColorPingPongHandle, rgp.dofSharpenMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(529)");
  if ( !v13.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v13.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v15 = gfxContext->state;
  v13.source->input.codeImages[22] = NULL;
  R_ProfEndNamedEvent(v15);
}

/*
==============
RB_DOF_TileDownsample
==============
*/
void RB_DOF_TileDownsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  GfxCmdBufSourceState *source; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v8; 
  __int64 tileWidth; 
  const R_RT_Surface *v10; 
  float v11; 
  float width; 
  float v13; 
  float v14; 
  float v15; 
  GfxCmdBufContext v16; 
  R_RT_Image *p_m_image; 
  GfxCmdBufState *v18; 
  const R_RT_Surface *v19; 
  __int64 tileHeight; 
  const R_RT_Surface *v21; 
  float height; 
  float v23; 
  float v24; 
  R_RT_Image *v25; 
  GfxCmdBufState *v26; 
  _QWORD v27[5]; 
  R_RT_Group v28; 
  R_RT_Group v29; 

  state = gfxContext->state;
  source = gfxContext->source;
  R_ProfBeginNamedEvent(state, "DOF Tile Downsample");
  *(R_RT_ColorHandle *)&v27[1] = dofState->pingPongRenderTargetHandle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&v27[1], RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  *(R_RT_ColorHandle *)&v27[1] = dofState->pingPongRenderTargetHandle;
  LODWORD(state) = R_RT_Handle::GetSurface((R_RT_Handle *)&v27[1])->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface((R_RT_Handle *)&v27[1]);
  R_SetRenderTargetSize(source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  *(R_RT_ColorHandle *)&v27[1] = dofState->pingPongRenderTargetHandle;
  R_RT_Group::AssignColor(&v28, (R_RT_ColorHandle *)&v27[1]);
  *(__m256i *)&v29.m_colorRtCount = *(__m256i *)&v28.m_colorRtCount;
  *(__m256i *)&v29.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v28.m_colorRts[0].m_tracking.m_location;
  *(__m256i *)&v29.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v28.m_colorRts[1].m_tracking.m_location;
  *(__m256i *)&v29.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v28.m_colorRts[2].m_tracking.m_location;
  v8 = *gfxContext;
  *(__m256i *)&v29.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v28.m_colorRts[3].m_tracking.m_location;
  *(__m256i *)&v29.m_depthRt.m_tracking.m_location = *(__m256i *)&v28.m_depthRt.m_tracking.m_location;
  v29.m_vrsRt.m_tracking.m_location = v28.m_vrsRt.m_tracking.m_location;
  *(GfxCmdBufContext *)&v27[1] = v8;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v27[1], &v29, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(258)");
  tileWidth = dofState->tileWidth;
  v10 = R_RT_Handle::GetSurface(&dofState->floatZColorRtForTileDownsample);
  v11 = FLOAT_1_0;
  if ( v10->m_image.m_base.width )
  {
    width = (float)v10->m_image.m_base.width;
    v13 = 1.0 / width;
  }
  else
  {
    v13 = FLOAT_1_0;
  }
  if ( (_DWORD)tileWidth )
  {
    v14 = (float)tileWidth;
    v15 = 0.5 / v14;
  }
  else
  {
    v15 = FLOAT_0_5;
  }
  v16 = *gfxContext;
  *(R_RT_ColorHandle *)&v27[1] = dofState->floatZColorRtForTileDownsample;
  p_m_image = &R_RT_Handle::GetSurface((R_RT_Handle *)&v27[1])->m_image;
  if ( !v16.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v16.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v16.source->input.codeImages[22] = &p_m_image->m_base;
  v16.source->input.consts[40].v[1] = 0.0;
  v16.source->input.consts[40].v[3] = 0.0;
  v16.source->input.consts[40].v[0] = v13 - v15;
  v16.source->input.consts[40].v[2] = v13;
  ++v16.source->constVersions[40];
  *(GfxCmdBufContext *)&v27[1] = v16;
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v27[1], rgp.dofTileDownsampleMaterial[0], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(231)");
  v18 = gfxContext->state;
  *(R_RT_ColorHandle *)&v27[1] = dofState->pingPongRenderTargetHandle;
  R_AddRenderTargetTransition(v18, (R_RT_ColorHandle *)&v27[1], RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  *(R_RT_ColorHandle *)&v27[1] = dofState->dofTile0Handle;
  R_AddRenderTargetTransition(v18, (R_RT_ColorHandle *)&v27[1], RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(v18);
  *(R_RT_ColorHandle *)&v27[1] = dofState->dofTile0Handle;
  LODWORD(v18) = R_RT_Handle::GetSurface((R_RT_Handle *)&v27[1])->m_image.m_base.height;
  v19 = R_RT_Handle::GetSurface((R_RT_Handle *)&v27[1]);
  R_SetRenderTargetSize(source, v19->m_image.m_base.width, (unsigned int)v18, GFX_USE_VIEWPORT_FULL);
  *(R_RT_ColorHandle *)&v27[1] = dofState->dofTile0Handle;
  R_RT_Group::AssignColor(&v29, (R_RT_ColorHandle *)&v27[1]);
  v28 = v29;
  *(GfxCmdBufContext *)&v27[1] = v16;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&v27[1], &v28, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(270)");
  tileHeight = dofState->tileHeight;
  v21 = R_RT_Handle::GetSurface(&dofState->pingPongRenderTargetHandle);
  if ( v21->m_image.m_base.height )
  {
    height = (float)v21->m_image.m_base.height;
    v11 = 1.0 / height;
  }
  if ( (_DWORD)tileHeight )
  {
    v23 = (float)tileHeight;
    v24 = 0.5 / v23;
  }
  else
  {
    v24 = FLOAT_0_5;
  }
  *(R_RT_ColorHandle *)&v27[1] = dofState->pingPongRenderTargetHandle;
  v25 = &R_RT_Handle::GetSurface((R_RT_Handle *)&v27[1])->m_image;
  if ( !v16.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v16.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v16.source->input.codeImages[22] = &v25->m_base;
  v16.source->input.consts[40].v[1] = (float)(v11 * 0.5) - v24;
  v16.source->input.consts[40].v[3] = v11;
  v16.source->input.consts[40].v[0] = 0.0;
  v16.source->input.consts[40].v[2] = 0.0;
  ++v16.source->constVersions[40];
  *(GfxCmdBufContext *)&v27[1] = v16;
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&v27[1], rgp.dofTileDownsampleMaterial[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(239)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v26 = gfxContext->state;
  source->input.codeImages[22] = NULL;
  R_ProfEndNamedEvent(v26);
}

/*
==============
RB_DOF_TileNeighbor
==============
*/
void RB_DOF_TileNeighbor(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, DepthOfField_RenderState *dofState)
{
  GfxCmdBufState *state; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v7; 
  GfxCmdBufContext v8; 
  R_RT_Image *p_m_image; 
  GfxCmdBufState *v10; 
  R_RT_Handle dofTile0Handle; 
  R_RT_Group v12; 
  R_RT_Group v13; 

  state = gfxContext->state;
  R_ProfBeginNamedEvent(state, "DOF Tile Neighbor");
  dofTile0Handle = (R_RT_Handle)dofState->dofTile0Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofTile0Handle, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  dofTile0Handle = (R_RT_Handle)dofState->dofTile1Handle;
  R_AddRenderTargetTransition(state, (R_RT_ColorHandle *)&dofTile0Handle, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(state);
  dofTile0Handle = (R_RT_Handle)dofState->dofTile1Handle;
  LODWORD(state) = R_RT_Handle::GetSurface(&dofTile0Handle)->m_image.m_base.height;
  Surface = R_RT_Handle::GetSurface(&dofTile0Handle);
  R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, (unsigned int)state, GFX_USE_VIEWPORT_FULL);
  dofTile0Handle = (R_RT_Handle)dofState->dofTile1Handle;
  R_RT_Group::AssignColor(&v12, (R_RT_ColorHandle *)&dofTile0Handle);
  *(__m256i *)&v13.m_colorRtCount = *(__m256i *)&v12.m_colorRtCount;
  *(__m256i *)&v13.m_colorRts[0].m_tracking.m_location = *(__m256i *)&v12.m_colorRts[0].m_tracking.m_location;
  *(__m256i *)&v13.m_colorRts[1].m_tracking.m_location = *(__m256i *)&v12.m_colorRts[1].m_tracking.m_location;
  *(__m256i *)&v13.m_colorRts[2].m_tracking.m_location = *(__m256i *)&v12.m_colorRts[2].m_tracking.m_location;
  v7 = *gfxContext;
  *(__m256i *)&v13.m_colorRts[3].m_tracking.m_location = *(__m256i *)&v12.m_colorRts[3].m_tracking.m_location;
  *(__m256i *)&v13.m_depthRt.m_tracking.m_location = *(__m256i *)&v12.m_depthRt.m_tracking.m_location;
  v13.m_vrsRt.m_tracking.m_location = v12.m_vrsRt.m_tracking.m_location;
  *(GfxCmdBufContext *)&dofTile0Handle.m_surfaceID = v7;
  R_SetRenderTargetsInternal((GfxCmdBufContext *)&dofTile0Handle, &v13, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(301)");
  v8 = *gfxContext;
  dofTile0Handle = (R_RT_Handle)dofState->dofTile0Handle;
  p_m_image = &R_RT_Handle::GetSurface(&dofTile0Handle)->m_image;
  if ( !v8.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v8.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v8.source->input.codeImages[22] = &p_m_image->m_base;
  *(GfxCmdBufContext *)&dofTile0Handle.m_surfaceID = v8;
  RB_FullScreenFilterInternal((GfxCmdBufContext *)&dofTile0Handle, rgp.dofTileNeighborMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(286)");
  if ( !v8.source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( v8.source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v10 = gfxContext->state;
  v8.source->input.codeImages[22] = NULL;
  R_ProfEndNamedEvent(v10);
}

/*
==============
RB_DOF_UpdateDistanceMeter
==============
*/
void RB_DOF_UpdateDistanceMeter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *floatZColorRt)
{
  __m256i v7; 
  unsigned __int16 m_surfaceID; 
  bool v10; 
  __int16 v11; 
  unsigned __int16 v12; 
  __m256i v13; 
  bool v14; 
  int v15; 
  const R_RT_Surface *Surface; 
  unsigned int width; 
  int v20; 
  float v21; 
  float v23; 
  bool v24; 
  float v32; 
  double v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  R_RT_Handle v38; 
  float v39; 
  R_RT_Handle v40; 
  R_RT_Handle v41; 
  R_RT_Handle v42; 
  vec4_t v43; 
  vec4_t v44; 

  if ( r_dof_physical_distanceMeter->current.enabled )
  {
    *(GfxCmdBufContext *)&v38.m_surfaceID = *gfxContext;
    _XMM0 = *(_OWORD *)&v38.m_surfaceID;
    R_DOF_GetEquationParams((GfxCmdBufContext *)&v38, viewInfo, &v44, &v43);
    v42 = floatZColorRt->R_RT_Handle;
    v7 = *(__m256i *)R_RT_GetViewInternal(&v41, &v42, 0, 0);
    m_surfaceID = _XMM0;
    v42 = (R_RT_Handle)v7;
    v38 = (R_RT_Handle)v7;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v38);
      if ( (R_RT_Handle::GetSurface(&v38)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        LODWORD(_RDI) = v38.m_tracking.m_allocCounter;
        m_surfaceID = v38.m_surfaceID;
        v7 = (__m256i)v38;
        __debugbreak();
      }
      else
      {
        LODWORD(_RDI) = v38.m_tracking.m_allocCounter;
        m_surfaceID = v38.m_surfaceID;
        v7 = (__m256i)v38;
      }
    }
    else
    {
      __asm { vpextrd rdi, xmm0, 2 }
      if ( (_DWORD)_RDI )
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
        v7 = (__m256i)v42;
        if ( v10 )
          __debugbreak();
      }
    }
    v42 = (R_RT_Handle)v7;
    v11 = m_surfaceID & 0x7FFF;
    if ( v11 )
      v12 = v11 | 0x8000;
    else
      v12 = 0;
    v40.m_surfaceID = v12;
    v40.m_tracking = v38.m_tracking;
    v13 = (__m256i)v40;
    v42 = v40;
    v38 = v40;
    if ( v12 )
    {
      R_RT_Handle::GetSurface(&v38);
      if ( (R_RT_Handle::GetSurface(&v38)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      {
        v13 = (__m256i)v38;
        v42 = v38;
        __debugbreak();
      }
      else
      {
        v13 = (__m256i)v38;
        v42 = v38;
      }
    }
    else if ( (_DWORD)_RDI )
    {
      v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
      v13 = (__m256i)v40;
      if ( v14 )
        __debugbreak();
    }
    v40 = (R_RT_Handle)v13;
    v15 = R_RT_Handle::GetSurface(&v40)->m_image.m_base.height >> 1;
    Surface = R_RT_Handle::GetSurface(&v40);
    _XMM0 = *gfxContext;
    __asm { vpextrq r14, xmm0, 1 }
    width = Surface->m_image.m_base.width;
    v37 = 0.0;
    v20 = width >> 1;
    R_UnlockIfGfxImmediateContext(*(const GfxDevice **)(_R14 + 1360));
    if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    R_GetBufferData((R_RT_ColorHandle *)&v42, v20, v15, 1, 1, 4, (unsigned __int8 *)&v37);
    if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
      __debugbreak();
    R_LockIfGfxImmediateContext(*(const GfxDevice **)(_R14 + 1360));
    v21 = v37;
    _XMM3 = LODWORD(FLOAT_0_984375);
    LODWORD(v23) = LODWORD(v37) & _xmm;
    v24 = v37 < 0.0;
    _XMM0 = v37 < 0.0;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM0 = LODWORD(FLOAT_0_015625);
    __asm { vblendvps xmm1, xmm0, xmm3, xmm2 }
    _XMM0 = v37 < 0.0;
    v37 = *(float *)&_XMM1;
    __asm
    {
      vpcmpeqd xmm1, xmm0, xmm2
      vblendvps xmm0, xmm3, xmm9, xmm1
    }
    v39 = *(float *)&_XMM0;
    if ( v24 )
      v32 = viewInfo->viewParmsSet.frames[0].viewParms.camera.zPlanes[0];
    else
      v32 = viewInfo->viewParmsSet.frames[0].viewParms.camera.zPlanes[2];
    v33 = I_fclamp((float)((float)(v32 / v21) * v37) + v39, 0.0, 1.0);
    s_distance = v23;
    if ( v24 )
      v34 = (float)(*(float *)&v33 * v43.v[2]) + v43.v[3];
    else
      v34 = (float)(*(float *)&v33 * v43.v[0]) + v43.v[1];
    v35 = 1.0 / v23;
    LODWORD(s_circleOfConfusionClip) = LODWORD(v34) & _xmm;
    if ( v24 )
      v36 = (float)(v35 * v44.v[2]) + v44.v[3];
    else
      v36 = (float)(v35 * v44.v[0]) + v44.v[1];
    LODWORD(s_circleOfConfusionLinear) = LODWORD(v36) & _xmm;
  }
}

/*
==============
RB_DepthOfField_FreeTemporalRts
==============
*/

void __fastcall RB_DepthOfField_FreeTemporalRts(double _XMM0_8)
{
  R_RT_ColorHandle v2; 

  if ( s_dofPrevHalfPrepassHandle.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_dofPrevHalfPrepassHandle);
    v2 = s_dofPrevHalfPrepassHandle;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v2.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
    v2.m_surfaceID = 0;
    v2.m_tracking.m_allocCounter = 0;
    s_dofPrevHalfPrepassHandle = v2;
  }
  else if ( s_dofPrevHalfPrepassHandle.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( s_dofPrevHalfColorHandle.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_dofPrevHalfColorHandle);
    v2 = s_dofPrevHalfColorHandle;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v2.m_tracking.m_name = _XMM0;
    v2.m_surfaceID = 0;
    v2.m_tracking.m_allocCounter = 0;
    s_dofPrevHalfColorHandle = v2;
  }
  else if ( s_dofPrevHalfColorHandle.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", s_dofPrevHalfColorHandle.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  s_dofPrevHalfHandlesValid = 0;
}

/*
==============
R_DOF_CircularFilter
==============
*/
void R_DOF_CircularFilter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *halfPrepassHandle, R_RT_ColorHandle *halfColorHandle, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHandle)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v11; 
  R_RT_Image *v12; 
  R_RT_Image *v13; 
  unsigned int preset; 
  __int64 v15; 
  GfxCmdBufContext v16; 

  source = gfxContext->source;
  p_m_image = &R_RT_Handle::GetSurface(halfPrepassHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  v11 = &R_RT_Handle::GetSurface(halfColorHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = &v11->m_base;
  v12 = &R_RT_Handle::GetSurface(tile1Handle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = &v12->m_base;
  v13 = &R_RT_Handle::GetSurface(sourceHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = &v13->m_base;
  if ( viewInfo->dofPhysical.hipEnabled )
  {
    preset = 0;
  }
  else
  {
    preset = 1;
    if ( rg.dofFilter.preset < 1 )
      preset = rg.dofFilter.preset;
    if ( preset >= 2 )
    {
      LODWORD(v15) = preset;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( presetIndex ) < (unsigned)( ( sizeof( *array_counter( rgp.dofCircularMaterial ) ) + 0 ) )", "presetIndex doesn't index ARRAY_COUNT( rgp.dofCircularMaterial )\n\t%i not in [0, %i)", v15, 2) )
        __debugbreak();
    }
  }
  v16 = *gfxContext;
  RB_FullScreenFilterInternal(&v16, rgp.dofCircularMaterial[preset], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(384)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = NULL;
}

/*
==============
R_DOF_CircularFilterFullres
==============
*/
void R_DOF_CircularFilterFullres(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHalfResHandle, R_RT_ColorHandle *sourceHandle, R_RT_ColorHandle *floatZColorRt, R_RT_ColorHandle *scopeBuffer)
{
  GfxCmdBufSourceState *source; 
  bool v12; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v14; 
  R_RT_Image *v15; 
  R_RT_Image *blackImage; 
  GfxImage *blueNoiseImage; 
  R_RT_Image *v18; 
  unsigned int preset; 
  __int64 v20; 
  GfxCmdBufContext v21; 

  source = gfxContext->source;
  v12 = viewInfo->scopeLensDistortionEnabled && R_RT_Handle::IsValid(scopeBuffer);
  p_m_image = &R_RT_Handle::GetSurface(tile1Handle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  v14 = &R_RT_Handle::GetSurface(sourceHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = &v14->m_base;
  v15 = &R_RT_Handle::GetSurface(floatZColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = &v15->m_base;
  if ( v12 )
    blackImage = &R_RT_Handle::GetSurface(scopeBuffer)->m_image;
  else
    blackImage = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = &blackImage->m_base;
  blueNoiseImage = rgp.blueNoiseImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = blueNoiseImage;
  v18 = &R_RT_Handle::GetSurface(sourceHalfResHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[70] = &v18->m_base;
  if ( viewInfo->dofPhysical.hipEnabled || (preset = rg.dofFilter.preset, viewInfo->dofPhysical.adsEnabled) )
    preset = 0;
  if ( preset >= 2 )
  {
    LODWORD(v20) = preset;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp", 429, ASSERT_TYPE_ASSERT, "(unsigned)( presetIndex ) < (unsigned)( ( sizeof( *array_counter( rgp.dofCircularFullresMaterial ) ) + 0 ) )", "presetIndex doesn't index ARRAY_COUNT( rgp.dofCircularFullresMaterial )\n\t%i not in [0, %i)", v20, 2) )
      __debugbreak();
  }
  v21 = *gfxContext;
  RB_FullScreenFilterInternal(&v21, rgp.dofCircularFullresMaterial[preset][v12], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(431)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[70] = NULL;
}

/*
==============
R_DOF_Downsample
==============
*/
void R_DOF_Downsample(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, R_RT_ColorHandle *sourceHandle, const R_RT_ColorHandle *outputHandle)
{
  int width; 
  unsigned int v8; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v10; 
  GfxTexture *textures[3]; 

  width = R_RT_Handle::GetSurface(&outputHandle->R_RT_Handle)->m_image.m_base.width;
  v8 = ((unsigned int)R_RT_Handle::GetSurface(&outputHandle->R_RT_Handle)->m_image.m_base.height + 7) >> 3;
  Surface = R_RT_Handle::GetSurface(sourceHandle);
  textures[0] = (GfxTexture *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  v10 = R_RT_Handle::GetSurface(&outputHandle->R_RT_Handle);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v10->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 0, 1, (const GfxTexture *const *)textures);
  R_SetComputeShader(computeState, rgp.dofDownsampleComputeShader);
  R_Dispatch(computeState, (unsigned int)(width + 7) >> 3, v8, 1u);
}

/*
==============
R_DOF_GetEquationParams
==============
*/
void R_DOF_GetEquationParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, vec4_t *dofEquationLinear, vec4_t *dofEquationClip)
{
  float v5; 
  float minFocusDistance; 
  float focusDistance; 
  float sceneWidth; 
  float sceneHeight; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float scale; 
  float bias; 
  float znear; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  vec3_t clipToZ; 
  vec3_t v27; 

  v5 = viewInfo->dofPhysical.filmDiagonal * 0.039370101;
  clipToZ.v[1] = FLOAT_N0_0;
  clipToZ.v[2] = FLOAT_1_0158731;
  v27.v[1] = FLOAT_N63_0;
  minFocusDistance = viewInfo->dofPhysical.minFocusDistance;
  clipToZ.v[0] = FLOAT_1_0;
  v27.v[0] = FLOAT_1_0;
  focusDistance = viewInfo->dofPhysical.focusDistance;
  v27.v[2] = FLOAT_64_0;
  sceneWidth = (float)vidConfig.sceneWidth;
  sceneHeight = (float)vidConfig.sceneHeight;
  R_GetPhysicalDepthOfFieldEquationLinear(viewInfo->viewParmsSet.frames[0].viewParms.camera.focalLength, viewInfo->dofPhysical.fstop, focusDistance, sceneWidth, sceneHeight, v5, minFocusDistance, &scale, &bias);
  R_GetPhysicalDepthOfFieldEquationLinear(viewInfo->viewParmsSet.frames[0].viewParms.camera.focalLength, viewInfo->dofPhysical.viewModelFstop, viewInfo->dofPhysical.viewModelFocusDistance, sceneWidth, sceneHeight, v5, viewInfo->dofPhysical.minFocusDistance, &znear, &v21);
  v12 = bias;
  dofEquationLinear->v[0] = scale;
  v13 = znear;
  dofEquationLinear->v[1] = v12;
  v14 = v21;
  dofEquationLinear->v[2] = v13;
  dofEquationLinear->v[3] = v14;
  R_GetPhysicalDepthOfFieldEquationClip(viewInfo->viewParmsSet.frames[0].viewParms.camera.focalLength, viewInfo->dofPhysical.fstop, viewInfo->dofPhysical.focusDistance, sceneWidth, sceneHeight, v5, viewInfo->dofPhysical.minFocusDistance, viewInfo->viewParmsSet.frames[0].viewParms.camera.zPlanes[2], &clipToZ, &v22, &v23);
  R_GetPhysicalDepthOfFieldEquationClip(viewInfo->viewParmsSet.frames[0].viewParms.camera.focalLength, viewInfo->dofPhysical.viewModelFstop, viewInfo->dofPhysical.viewModelFocusDistance, sceneWidth, sceneHeight, v5, viewInfo->dofPhysical.minFocusDistance, viewInfo->viewParmsSet.frames[0].viewParms.camera.zPlanes[0], &v27, &v24, &v25);
  v15 = v23;
  dofEquationClip->v[0] = v22;
  v16 = v24;
  dofEquationClip->v[1] = v15;
  v17 = v25;
  dofEquationClip->v[2] = v16;
  dofEquationClip->v[3] = v17;
}

/*
==============
R_DOF_Median
==============
*/
void R_DOF_Median(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *halfAlphaPingPongHandle, R_RT_ColorHandle *halfColorPingPongHandle)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v7; 
  GfxCmdBufContext v8; 
  GfxCmdBufContext v9; 

  source = gfxContext->source;
  p_m_image = &R_RT_Handle::GetSurface(halfAlphaPingPongHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  v7 = &R_RT_Handle::GetSurface(halfColorPingPongHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v8 = *gfxContext;
  source->input.codeImages[23] = &v7->m_base;
  v9 = v8;
  RB_FullScreenFilterInternal(&v9, rgp.dofMedianMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(492)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
}

/*
==============
R_DOF_Prepass
==============
*/
void R_DOF_Prepass(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *floatZ, R_RT_ColorHandle *prevHalfColorHandle, R_RT_ColorHandle *prevHalfPrepassHandle, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *sourceHandle, R_RT_ColorHandle *halfVelocityRt)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  R_RT_Image *blackImage; 
  R_RT_Image *v13; 
  R_RT_Image *v14; 
  R_RT_Image *v15; 
  R_RT_Image *v16; 
  GfxCmdBufContext v17; 
  GfxCmdBufContext v18; 

  source = gfxContext->source;
  p_m_image = &R_RT_Handle::GetSurface(floatZ)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  if ( R_RT_Handle::IsValid(prevHalfColorHandle) )
    blackImage = &R_RT_Handle::GetSurface(prevHalfColorHandle)->m_image;
  else
    blackImage = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = &blackImage->m_base;
  if ( R_RT_Handle::IsValid(prevHalfPrepassHandle) )
    v13 = &R_RT_Handle::GetSurface(prevHalfPrepassHandle)->m_image;
  else
    v13 = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = &v13->m_base;
  v14 = &R_RT_Handle::GetSurface(tile1Handle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = &v14->m_base;
  v15 = &R_RT_Handle::GetSurface(sourceHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = &v15->m_base;
  if ( R_RT_Handle::IsValid(halfVelocityRt) )
    v16 = &R_RT_Handle::GetSurface(halfVelocityRt)->m_image;
  else
    v16 = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v17 = *gfxContext;
  source->input.codeImages[8] = &v16->m_base;
  v18 = v17;
  RB_FullScreenFilterInternal(&v18, rgp.dofPrepassMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(329)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[8] = NULL;
}

/*
==============
R_DOF_Sharpen
==============
*/
void R_DOF_Sharpen(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *halfColorHandle)
{
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufContext v5; 
  GfxCmdBufContext v6; 

  source = gfxContext->source;
  p_m_image = &R_RT_Handle::GetSurface(halfColorHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v5 = *gfxContext;
  source->input.codeImages[22] = &p_m_image->m_base;
  v6 = v5;
  RB_FullScreenFilterInternal(&v6, rgp.dofSharpenMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(529)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
}

/*
==============
R_DOF_TemporalSampling
==============
*/
bool R_DOF_TemporalSampling(const GfxViewInfo *viewInfo)
{
  return (unsigned int)(viewInfo->postAA.mode - 2) <= 1;
}

/*
==============
R_DOF_TileDownsample_GetParams
==============
*/
void R_DOF_TileDownsample_GetParams(unsigned int inputWidth, unsigned int inputHeight, unsigned int tileWidth, unsigned int tileHeight, vec2_t *bias, vec2_t *scale)
{
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 

  v6 = FLOAT_1_0;
  if ( inputWidth )
  {
    v7 = (float)inputWidth;
    v8 = 1.0 / v7;
  }
  else
  {
    v8 = FLOAT_1_0;
  }
  if ( inputHeight )
  {
    v9 = (float)inputHeight;
    v10 = 1.0 / v9;
  }
  else
  {
    v10 = FLOAT_1_0;
  }
  if ( tileWidth )
  {
    v11 = (float)tileWidth;
    v12 = 1.0 / v11;
  }
  else
  {
    v12 = FLOAT_1_0;
  }
  if ( tileHeight )
  {
    v13 = (float)tileHeight;
    v6 = 1.0 / v13;
  }
  bias->v[0] = v8 - (float)(v12 * 0.5);
  bias->v[1] = (float)(v10 * 0.5) - (float)(v6 * 0.5);
  scale->v[0] = v8;
  scale->v[1] = v10;
}

/*
==============
R_DOF_TileDownsample_Horizontal
==============
*/
void R_DOF_TileDownsample_Horizontal(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *texture0, const vec2_t *bias, const vec2_t *scale)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  float v11; 
  float v12; 
  GfxCmdBufSourceState *v13; 
  GfxCmdBufContext v14; 
  GfxCmdBufContext v15; 

  Surface = R_RT_Handle::GetSurface(texture0);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v11 = scale->v[0];
  v12 = bias->v[0];
  v13 = gfxContext->source;
  p_input->codeImages[22] = &p_m_image->m_base;
  v13->input.consts[40].v[0] = v12;
  v13->input.consts[40].v[2] = v11;
  v14 = *gfxContext;
  v13->input.consts[40].v[1] = 0.0;
  v13->input.consts[40].v[3] = 0.0;
  ++v13->constVersions[40];
  v15 = v14;
  RB_FullScreenFilterInternal(&v15, rgp.dofTileDownsampleMaterial[0], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(231)");
}

/*
==============
R_DOF_TileDownsample_Vertical
==============
*/
void R_DOF_TileDownsample_Vertical(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *texture0, const vec2_t *bias, const vec2_t *scale)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  float v11; 
  GfxCmdBufSourceState *v12; 
  float v13; 
  GfxCmdBufContext v14; 
  GfxCmdBufContext v15; 

  Surface = R_RT_Handle::GetSurface(texture0);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v11 = bias->v[1];
  v12 = gfxContext->source;
  v13 = scale->v[1];
  p_input->codeImages[22] = &p_m_image->m_base;
  v12->input.consts[40].v[1] = v11;
  v14 = *gfxContext;
  v12->input.consts[40].v[0] = 0.0;
  v12->input.consts[40].v[2] = 0.0;
  v12->input.consts[40].v[3] = v13;
  ++v12->constVersions[40];
  v15 = v14;
  RB_FullScreenFilterInternal(&v15, rgp.dofTileDownsampleMaterial[1], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(239)");
}

/*
==============
R_DOF_TileNeighor
==============
*/
void R_DOF_TileNeighor(GfxCmdBufContext *gfxContext, R_RT_ColorHandle *tile0Handle)
{
  const R_RT_Surface *Surface; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v7; 
  GfxCmdBufSourceState *v8; 
  GfxCmdBufInput *v9; 
  GfxCmdBufContext v10; 

  Surface = R_RT_Handle::GetSurface(tile0Handle);
  source = gfxContext->source;
  p_m_image = &Surface->m_image;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v7 = *gfxContext;
  p_input->codeImages[22] = &p_m_image->m_base;
  v10 = v7;
  RB_FullScreenFilterInternal(&v10, rgp.dofTileNeighborMaterial, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(286)");
  v8 = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  v9 = &v8->input;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v9->codeImages[22] = NULL;
}

/*
==============
R_DOF_UpdateBufferParams
==============
*/
void R_DOF_UpdateBufferParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, unsigned int rtWidth, unsigned int rtHeight)
{
  __int64 v6; 
  __int64 v7; 
  double BokehMaxCocDiameter; 
  float v9; 
  float displayWidth; 
  float v11; 
  float v12; 
  float v13; 
  GfxCmdBufSourceState *source; 
  float fireflySuppression; 
  float v18; 
  float v19; 
  float v26; 
  float v27; 

  v6 = rtHeight;
  v7 = rtWidth;
  BokehMaxCocDiameter = R_DOF_GetBokehMaxCocDiameter(viewInfo);
  v9 = *(float *)&BokehMaxCocDiameter * 0.5;
  displayWidth = (float)vidConfig.displayWidth;
  *(float *)&BokehMaxCocDiameter = (float)vidConfig.displayHeight;
  v11 = v9 / displayWidth;
  v12 = v9 / *(float *)&BokehMaxCocDiameter;
  v13 = 0.0;
  if ( (unsigned int)(viewInfo->postAA.mode - 2) <= 1 )
  {
    Sys_Microseconds();
    _XMM0 = 0i64;
    __asm { vroundss xmm0, xmm0, xmm1, 1; X }
    v13 = fmodf_0(*(float *)&_XMM0, 600.0) + 1024.0;
  }
  source = gfxContext->source;
  fireflySuppression = rg.dofFilter.fireflySuppression;
  if ( v11 != gfxContext->source->input.consts[39].v[0] || v12 != source->input.consts[39].v[1] || source->input.consts[39].v[2] != 0.0 || rg.dofFilter.fireflySuppression != source->input.consts[39].v[3] )
  {
    source->input.consts[39].v[0] = v11;
    source->input.consts[39].v[1] = v12;
    source->input.consts[39].v[3] = fireflySuppression;
    source->input.consts[39].v[2] = 0.0;
    ++source->constVersions[39];
  }
  _XMM0 = (unsigned int)rg.dofFilter.temporalFilterEnabled;
  _XMM5 = LODWORD(FLOAT_1_0);
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm5, xmm6, xmm2
  }
  if ( rg.dofFilter.bokehEdgeSharpness != source->input.consts[41].v[0] || source->input.consts[41].v[1] != 0.0 || *(float *)&_XMM0 != source->input.consts[41].v[2] || v13 != source->input.consts[41].v[3] )
  {
    source->input.consts[41].v[0] = rg.dofFilter.bokehEdgeSharpness;
    source->input.consts[41].v[2] = *(float *)&_XMM0;
    source->input.consts[41].v[3] = v13;
    source->input.consts[41].v[1] = 0.0;
    ++source->constVersions[41];
  }
  _XMM0 = (unsigned int)rg.dofFilter.backgroundReconstruction;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  v19 = (float)v6;
  v26 = v19 * v12;
  v18 = (float)v7;
  v27 = v18 * v11;
  __asm { vblendvps xmm0, xmm5, xmm6, xmm2 }
  if ( rg.dofFilter.sharpen != source->input.consts[42].v[0] || *(float *)&_XMM0 != source->input.consts[42].v[1] || v27 != source->input.consts[42].v[2] || v26 != source->input.consts[42].v[3] )
  {
    source->input.consts[42].v[0] = rg.dofFilter.sharpen;
    source->input.consts[42].v[1] = *(float *)&_XMM0;
    source->input.consts[42].v[2] = v27;
    source->input.consts[42].v[3] = v26;
    ++source->constVersions[42];
  }
}

/*
==============
R_DOF_UpdateEquationParams
==============
*/
void R_DOF_UpdateEquationParams(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  double BokehMaxCocDiameter; 
  GfxCmdBufSourceState *source; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  GfxCmdBufContext v10; 
  vec4_t v11; 
  vec4_t v12; 

  v10 = *gfxContext;
  R_DOF_GetEquationParams(&v10, viewInfo, &v11, &v12);
  BokehMaxCocDiameter = R_DOF_GetBokehMaxCocDiameter(viewInfo);
  source = gfxContext->source;
  v6 = (float)(1.0 / *(float *)&BokehMaxCocDiameter) * viewInfo->dofPhysical.cocScale;
  v7 = v6 * v11.v[1];
  v8 = v6 * v11.v[2];
  v9 = v6 * v11.v[3];
  if ( (float)(v6 * v11.v[0]) != gfxContext->source->input.consts[38].v[0] || v7 != source->input.consts[38].v[1] || v8 != source->input.consts[38].v[2] || v9 != source->input.consts[38].v[3] )
  {
    source->input.consts[38].v[0] = v6 * v11.v[0];
    source->input.consts[38].v[1] = v7;
    source->input.consts[38].v[2] = v8;
    source->input.consts[38].v[3] = v9;
    ++source->constVersions[38];
  }
}

/*
==============
R_DOF_Upsample
==============
*/
void R_DOF_Upsample(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, R_RT_ColorHandle *tile1Handle, R_RT_ColorHandle *halfColorPingPongHandle, R_RT_ColorHandle *halfAlphaHandle, R_RT_ColorHandle *halfPrepassHandle, R_RT_ColorHandle *scopeBuffer, R_RT_ColorHandle *floatZColorRt, R_RT_ColorHandle *sourceHandle)
{
  GfxCmdBufSourceState *source; 
  bool v14; 
  R_RT_Image *p_m_image; 
  R_RT_Image *v16; 
  R_RT_Image *v17; 
  R_RT_Image *v18; 
  R_RT_Image *blackImage; 
  R_RT_Image *v20; 
  R_RT_Image *v21; 
  GfxCmdBufContext v22; 
  __int32 v23; 
  bool v24; 
  GfxCmdBufContext v25; 

  source = gfxContext->source;
  v14 = viewInfo->scopeLensDistortionEnabled && R_RT_Handle::IsValid(scopeBuffer);
  p_m_image = &R_RT_Handle::GetSurface(tile1Handle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = &p_m_image->m_base;
  v16 = &R_RT_Handle::GetSurface(halfColorPingPongHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = &v16->m_base;
  v17 = &R_RT_Handle::GetSurface(halfAlphaHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = &v17->m_base;
  v18 = &R_RT_Handle::GetSurface(halfPrepassHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = &v18->m_base;
  if ( v14 )
    blackImage = &R_RT_Handle::GetSurface(scopeBuffer)->m_image;
  else
    blackImage = (R_RT_Image *)rgp.blackImage;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = &blackImage->m_base;
  v20 = &R_RT_Handle::GetSurface(floatZColorRt)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[8] = &v20->m_base;
  v21 = &R_RT_Handle::GetSurface(sourceHandle)->m_image;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  v22 = *gfxContext;
  source->input.codeImages[9] = &v21->m_base;
  v23 = viewInfo->postAA.mode - 2;
  v24 = viewInfo->postAA.mode == POST_AA_MODE_SMAA_T2X;
  v25 = v22;
  RB_FullScreenFilterInternal(&v25, rgp.dofUpsampleMaterial[v24 | (unsigned __int8)(v23 == 1)][v14], "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_dof_physical.cpp(577)");
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[22] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[23] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[24] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[25] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[26] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[8] = NULL;
  if ( !source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  if ( source == (GfxCmdBufSourceState *)-1792i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  source->input.codeImages[9] = NULL;
}


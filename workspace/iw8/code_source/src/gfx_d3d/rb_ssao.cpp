/*
==============
R_RegisterSSAODvars
==============
*/

void R_RegisterSSAODvars(void)
{
  ?R_RegisterSSAODvars@@YAXXZ();
}

/*
==============
R_SSAO_RequestVelocities
==============
*/

bool __fastcall R_SSAO_RequestVelocities(unsigned int mode)
{
  return ?R_SSAO_RequestVelocities@@YA_NI@Z(mode);
}

/*
==============
R_SSAO_Filter
==============
*/

void __fastcall R_SSAO_Filter(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *inPrepassRt, const R_RT_ColorHandle *outPrepassRt, bool isHorizontal)
{
  ?R_SSAO_Filter@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_ColorHandle@@3_N@Z(computeState, viewInfo, data, inPrepassRt, outPrepassRt, isHorizontal);
}

/*
==============
RB_SSAO_Generate
==============
*/

void __fastcall RB_SSAO_Generate(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, SSAOZone zone)
{
  ?RB_SSAO_Generate@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@W4SSAOZone@@@Z(computeState, viewInfo, data, zone);
}

/*
==============
RB_SSAO_RotateRTs
==============
*/

void __fastcall RB_SSAO_RotateRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_SSAO_RotateRTs@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_SSAO_FreeTemporalRts
==============
*/

void R_SSAO_FreeTemporalRts(void)
{
  ?R_SSAO_FreeTemporalRts@@YAXXZ();
}

/*
==============
R_SSAO_RequestPreviousFrameVelocities
==============
*/

bool __fastcall R_SSAO_RequestPreviousFrameVelocities(unsigned int mode)
{
  return ?R_SSAO_RequestPreviousFrameVelocities@@YA_NI@Z(mode);
}

/*
==============
R_SetSSAOInfo
==============
*/

void __fastcall R_SetSSAOInfo(GfxViewInfo *viewInfo, unsigned int sceneWidth, unsigned int sceneHeight, const SSAOControls *ssaoControls)
{
  ?R_SetSSAOInfo@@YAXPEAUGfxViewInfo@@IIPEBUSSAOControls@@@Z(viewInfo, sceneWidth, sceneHeight, ssaoControls);
}

/*
==============
R_InitSSAO
==============
*/

void R_InitSSAO(void)
{
  ?R_InitSSAO@@YAXXZ();
}

/*
==============
RB_SSAO_DecommitRTs
==============
*/

void __fastcall RB_SSAO_DecommitRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_SSAO_DecommitRTs@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
R_GetSSAOMode
==============
*/

GfxSSAOMode __fastcall R_GetSSAOMode(const GfxViewInfo *viewInfo)
{
  return ?R_GetSSAOMode@@YA?AW4GfxSSAOMode@@PEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_SSAO_Generate
==============
*/

void __fastcall R_SSAO_Generate(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *floatZFullRt, const R_RT_ColorHandle *tangentBasisRt, const R_RT_ColorHandle *velocityRt, const R_RT_ColorHandle *previousVelocityRt, const R_RT_ColorHandle *previousAORt, const R_RT_ColorHandle *mdaoRt, const R_RT_ColorHandle *floatZMinRt, const R_RT_ColorHandle *floatZMaxRt, const R_RT_ColorHandle *ioPrepassAORt, const R_RT_ColorHandle *previousPrepassAORt, const R_RT_ColorHandle *ioPrepassMomentsRt, const R_RT_ColorHandle *outAORt, SSAOZone zone, bool isPrepass)
{
  ?R_SSAO_Generate@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_ColorHandle@@33333333333W4SSAOZone@@_N@Z(computeState, viewInfo, data, floatZFullRt, tangentBasisRt, velocityRt, previousVelocityRt, previousAORt, mdaoRt, floatZMinRt, floatZMaxRt, ioPrepassAORt, previousPrepassAORt, ioPrepassMomentsRt, outAORt, zone, isPrepass);
}

/*
==============
R_ShutdownSSAO
==============
*/

void R_ShutdownSSAO(void)
{
  ?R_ShutdownSSAO@@YAXXZ();
}

/*
==============
RB_SSAO_DecommitRTs
==============
*/
void RB_SSAO_DecommitRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufContext v4; 
  GfxCmdBufContext v5; 
  R_RT_ColorHandle m_ssaoRt; 

  if ( (R_GetSSAOMode(viewInfo) & 1) == 0 )
  {
    v4 = *gfxContext;
    m_ssaoRt = viewInfo->sceneRtInput.m_ssaoRt;
    v5 = v4;
    R_RT_Destroy(&v5, &m_ssaoRt);
  }
  viewInfo->sceneRtInput.m_ssaoRt.m_surfaceID = 0;
  viewInfo->sceneRtInput.m_ssaoRt.m_tracking.m_allocCounter = 0;
  viewInfo->sceneRtInput.m_ssaoRt.m_tracking.m_name = NULL;
  viewInfo->sceneRtInput.m_ssaoRt.m_tracking.m_location = NULL;
}

/*
==============
RB_SSAO_Generate
==============
*/
void RB_SSAO_Generate(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, SSAOZone zone)
{
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v12; 
  const GfxTexture *v13; 
  R_RT_ColorHandle v14; 
  R_RT_ColorHandle v15; 
  R_RT_ColorHandle v16; 
  R_RT_ColorHandle v17; 
  R_RT_ColorHandle v18; 
  R_RT_ColorHandle m_ssaoRt; 
  R_RT_ColorHandle m_mdaoRt; 
  R_RT_ColorHandle v21; 
  R_RT_ColorHandle m_mainSceneTangentFrameRt; 
  R_RT_ColorHandle m_floatZFullRt; 
  R_RT_Handle v24; 
  R_RT_ColorHandle v25; 
  R_RT_ColorHandle v26; 
  R_RT_ColorHandle v27; 
  R_RT_ColorHandle result; 

  R_ProfBeginNamedEvent(computeState, "Generate SSAO");
  R_GPU_BeginTimer(GPU_TIMER_SSAO);
  m_floatZFullRt = viewInfo->sceneRtInput.m_floatZFullRt;
  RB_GetHalfVelocityRt(&result, viewInfo, 0);
  RB_GetHalfVelocityRt(&v27, viewInfo, 1u);
  v21 = s_previousAORt;
  m_ssaoRt = viewInfo->sceneRtInput.m_ssaoRt;
  v24 = (R_RT_Handle)m_ssaoRt;
  m_mainSceneTangentFrameRt = viewInfo->sceneRtInput.m_mainSceneTangentFrameRt;
  m_mdaoRt = viewInfo->sceneRtInput.m_mdaoRt;
  Surface = R_RT_Handle::GetSurface(&v24);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v15.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v17.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v14.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v16.m_tracking.m_name = _XMM0;
  *(_OWORD *)&v18.m_tracking.m_name = _XMM0;
  v14.m_surfaceID = 0;
  v14.m_tracking.m_allocCounter = 0;
  v15.m_surfaceID = 0;
  v15.m_tracking.m_allocCounter = 0;
  v16.m_surfaceID = 0;
  v16.m_tracking.m_allocCounter = 0;
  v17.m_surfaceID = 0;
  v17.m_tracking.m_allocCounter = 0;
  v18.m_surfaceID = 0;
  v18.m_tracking.m_allocCounter = 0;
  v25 = v27;
  v26 = result;
  R_SSAO_Generate(computeState, viewInfo, data, &m_floatZFullRt, &m_mainSceneTangentFrameRt, &v26, &v25, &v21, &m_mdaoRt, &v18, &v17, &v16, &v15, &v14, &m_ssaoRt, zone, 0);
  v12 = R_RT_Handle::GetSurface(&v24);
  v13 = R_Texture_GetResident(v12->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v13, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(computeState);
}

/*
==============
RB_SSAO_RotateRTs
==============
*/
void RB_SSAO_RotateRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufContext v3; 
  GfxCmdBufContext v6; 
  R_RT_ColorHandle v7; 

  v3 = *gfxContext;
  v7 = s_previousAORt;
  v6 = v3;
  R_RT_Destroy(&v6, &v7);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_previousAORt.m_surfaceID = 0;
  s_previousAORt.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&s_previousAORt.m_tracking.m_name = _XMM0;
  if ( (R_GetSSAOMode(viewInfo) & 1) != 0 )
  {
    if ( !R_RT_Handle::IsValid(&viewInfo->sceneRtInput.m_ssaoRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 388, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_ssaoRt)", (const char *)&queryFormat, "viewInfo->sceneRtInput.m_ssaoRt") )
      __debugbreak();
    s_previousAORt = viewInfo->sceneRtInput.m_ssaoRt;
  }
}

/*
==============
R_GetSSAOMode
==============
*/
__int64 R_GetSSAOMode(const GfxViewInfo *viewInfo)
{
  GfxSSAOMode mode; 
  int v4; 
  int v5; 

  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 10) & 0x20000) != 0 )
    return (unsigned __int8)viewInfo->viewportFeatures.m_ssaoModeOverride;
  mode = viewInfo->ssao.mode;
  if ( (unsigned __int8)mode >= GFX_SSAO_COUNT )
  {
    v5 = 4;
    v4 = (unsigned __int8)mode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 54, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->ssao.mode ) < (unsigned)( GFX_SSAO_COUNT )", "viewInfo->ssao.mode doesn't index GFX_SSAO_COUNT\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  return (unsigned __int8)viewInfo->ssao.mode;
}

/*
==============
R_InitSSAO
==============
*/
void R_InitSSAO(void)
{
  ;
}

/*
==============
R_RegisterSSAODvars
==============
*/
void R_RegisterSSAODvars(void)
{
  r_ssao = Dvar_RegisterEnum("MNRQQOMSMM", r_ssaoNames, 1, 0, "Screen Space Ambient Occlusion mode");
  r_ssaoDistanceFade = Dvar_RegisterVec4("NSNSNQTRON", 8.0, 4.0, 0.0, 0.0, 0.0, 255.0, 4u, "SSAO distance fade params in screen space texel sampling radius: X - fadeStart Y - fadeEnd");
  r_ssaoSplitZones = Dvar_RegisterBool("NQTSOQQRKT", 1, 4u, "Splits SSAO computations for better async behavior (console only)");
  r_ssaoLowFrequencyBlendParams0 = Dvar_RegisterVec4("MMLLKRSKMR", 0.050000001, 0.40000001, 0.25, 0.0, 0.0, 255.0, 4u, "SSAO moment rejection params ( momentsVarianceSensitivty momentsMeanMin momentsMeanMax )");
  r_ssaoLowFrequencyBlendParams1 = Dvar_RegisterVec4("LNSOPSPTO", 0.125, 0.66600001, 1.0, 16.0, 0.0, 255.0, 4u, "SSAO cache params ( skipUpdateRate skipMomentThreshold skipAlphaMulThreshold skipConvergenceFrameCount )");
}

/*
==============
R_SSAO_Filter
==============
*/
void R_SSAO_Filter(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *inPrepassRt, const R_RT_ColorHandle *outPrepassRt, bool isHorizontal)
{
  unsigned __int16 width; 
  ComputeShader *gtaoPrepassFilterVerticalComputeShader; 
  __int64 v12; 
  const R_RT_Surface *Surface; 
  __int64 height; 
  float v17; 
  float v24; 
  const R_RT_Surface *v25; 
  const R_RT_Surface *v26; 
  ID3D12Resource *buffers[2]; 
  int dataa[20]; 

  if ( (!inPrepassRt->m_surfaceID || !outPrepassRt->m_surfaceID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 303, ASSERT_TYPE_ASSERT, "(!inPrepassRt.IsNull() && !outPrepassRt.IsNull())", (const char *)&queryFormat, "!inPrepassRt.IsNull() && !outPrepassRt.IsNull()") )
    __debugbreak();
  width = R_RT_Handle::GetSurface(&inPrepassRt->R_RT_Handle)->m_image.m_base.width;
  if ( width != R_RT_Handle::GetSurface(&outPrepassRt->R_RT_Handle)->m_image.m_base.width && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 304, ASSERT_TYPE_ASSERT, "(inPrepassRt.GetWidth() == outPrepassRt.GetWidth())", (const char *)&queryFormat, "inPrepassRt.GetWidth() == outPrepassRt.GetWidth()") )
    __debugbreak();
  gtaoPrepassFilterVerticalComputeShader = rgp.gtaoPrepassFilterVerticalComputeShader;
  if ( isHorizontal )
    gtaoPrepassFilterVerticalComputeShader = rgp.gtaoPrepassFilterHorizontalComputeShader;
  R_SetComputeShader(computeState, gtaoPrepassFilterVerticalComputeShader);
  v12 = R_RT_Handle::GetSurface(&outPrepassRt->R_RT_Handle)->m_image.m_base.width;
  Surface = R_RT_Handle::GetSurface(&outPrepassRt->R_RT_Handle);
  _XMM4 = LODWORD(FLOAT_1_0);
  _XMM3 = 0i64;
  height = Surface->m_image.m_base.height;
  v17 = (float)(viewInfo->input.data->frameCount & 0xFFF);
  *(float *)&dataa[4] = v17;
  _XMM0 = isHorizontal;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm4, xmm3, xmm2
  }
  dataa[12] = _XMM0;
  _XMM0 = isHorizontal;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
  }
  dataa[13] = _XMM0;
  *(float *)&_XMM0 = (float)v12;
  v24 = (float)height;
  dataa[0] = _XMM0;
  *(float *)&dataa[1] = v24;
  *(float *)&dataa[2] = 1.0 / *(float *)&_XMM0;
  *(float *)&dataa[5] = 0.0;
  *(float *)&dataa[6] = 0.0;
  *(float *)&dataa[7] = 0.0;
  *(float *)&dataa[14] = 0.0;
  *(float *)&dataa[15] = 0.0;
  *(float *)&dataa[3] = 1.0 / v24;
  R_UploadAndSetComputeConstants(computeState, 0, dataa, 0x50u, NULL);
  buffers[0] = data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, buffers);
  v25 = R_RT_Handle::GetSurface(&inPrepassRt->R_RT_Handle);
  buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v25->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 8, 1, (const GfxTexture *const *)buffers);
  v26 = R_RT_Handle::GetSurface(&outPrepassRt->R_RT_Handle);
  buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v26->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 2, 1, (const GfxTexture *const *)buffers);
  R_Dispatch(computeState, (unsigned int)(v12 + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
}

/*
==============
R_SSAO_FreeTemporalRts
==============
*/

void __fastcall R_SSAO_FreeTemporalRts(double _XMM0_8)
{
  R_RT_Handle v2; 

  if ( s_previousAORt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousAORt);
    v2 = (R_RT_Handle)s_previousAORt;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousAORt.m_surfaceID = 0;
    s_previousAORt.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&s_previousAORt.m_tracking.m_name = _XMM0;
  }
  else if ( s_previousAORt.m_tracking.m_allocCounter != s_previousAORt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}

/*
==============
R_SSAO_Generate
==============
*/
void R_SSAO_Generate(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, const R_RT_ColorHandle *floatZFullRt, const R_RT_ColorHandle *tangentBasisRt, const R_RT_ColorHandle *velocityRt, const R_RT_ColorHandle *previousVelocityRt, const R_RT_ColorHandle *previousAORt, const R_RT_ColorHandle *mdaoRt, const R_RT_ColorHandle *floatZMinRt, const R_RT_ColorHandle *floatZMaxRt, const R_RT_ColorHandle *ioPrepassAORt, const R_RT_ColorHandle *previousPrepassAORt, const R_RT_ColorHandle *ioPrepassMomentsRt, const R_RT_ColorHandle *outAORt, SSAOZone zone, bool isPrepass)
{
  __int128 v17; 
  __int128 v18; 
  ComputeCmdBufState *v19; 
  char v20; 
  bool v21; 
  ComputeShader *gtaoCinematicQualityMSAAComputeShader; 
  GfxTextureId textureId; 
  GfxTexture *Resident; 
  const R_RT_Surface *Surface; 
  R_RT_Handle *v26; 
  R_RT_Handle *v27; 
  const R_RT_Surface *v28; 
  const R_RT_Surface *v29; 
  const R_RT_Surface *v30; 
  R_RT_Handle *v31; 
  GfxTextureId v32; 
  R_RT_Handle *v33; 
  GfxTextureId v34; 
  const R_RT_Surface *v35; 
  const R_RT_Surface *v36; 
  const R_RT_Surface *v37; 
  R_RT_Handle **v38; 
  int v39; 
  const R_RT_Surface *v40; 
  const R_RT_Surface *v41; 
  const R_RT_Surface *v42; 
  __int64 v43; 
  __int64 v44; 
  float v45; 
  float value; 
  float v47; 
  unsigned int v48; 
  const GfxBackEndData *v49; 
  unsigned int v50; 
  __int64 v51; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  unsigned int frameCount; 
  unsigned int v57; 
  __int64 v58; 
  __int64 unsignedInt; 
  unsigned int v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  R_RT_Handle *v64; 
  R_RT_Handle *v65; 
  unsigned int v66; 
  unsigned int v67; 
  ID3D12Resource *buffers; 
  R_RT_Handle *v69; 
  R_RT_ColorHandle *v70; 
  __int128 v71; 
  R_RT_Handle *v72; 
  const GfxViewInfo *v73; 
  R_RT_Handle *v74; 
  ComputeCmdBufState *v75; 
  int dataa[12]; 
  DvarValue current; 
  __int128 v78; 
  _OWORD v79[6]; 

  v19 = computeState;
  v69 = &velocityRt->R_RT_Handle;
  v74 = &previousVelocityRt->R_RT_Handle;
  v70 = (R_RT_ColorHandle *)mdaoRt;
  v73 = viewInfo;
  v75 = computeState;
  v65 = &ioPrepassAORt->R_RT_Handle;
  v79[1] = v17;
  v79[0] = v18;
  v64 = &floatZFullRt->R_RT_Handle;
  buffers = (ID3D12Resource *)data;
  v72 = &tangentBasisRt->R_RT_Handle;
  *(_QWORD *)&v71 = floatZMaxRt;
  if ( rg.vrs && !isPrepass )
  {
    v20 = 1;
LABEL_5:
    if ( v20 != ((R_RT_Handle::GetSurface(&tangentBasisRt->R_RT_Handle)->m_rtFlags & 0x4000) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 187, ASSERT_TYPE_ASSERT, "(isPrepass || (useMSAA == tangentBasisRt.IsMultisampled()))", (const char *)&queryFormat, "isPrepass || (useMSAA == tangentBasisRt.IsMultisampled())") )
      __debugbreak();
    if ( v73->validFrameCount && (((unsigned __int16)*(_DWORD *)&previousAORt->m_surfaceID ^ (unsigned __int16)*(_DWORD *)&outAORt->m_surfaceID) & 0xFFFF7FFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 204, ASSERT_TYPE_ASSERT, "(!RB_SSAO_AreTemporalBuffersReady( viewInfo ) || outAORt != previousAORt)", (const char *)&queryFormat, "!RB_SSAO_AreTemporalBuffersReady( viewInfo ) || outAORt != previousAORt") )
      __debugbreak();
    LOWORD(v67) = R_RT_Handle::GetSurface(&outAORt->R_RT_Handle)->m_image.m_base.width;
    LOWORD(v66) = R_RT_Handle::GetSurface(&outAORt->R_RT_Handle)->m_image.m_base.height;
    v21 = R_Screenshot_InProcess();
    if ( v20 )
    {
      if ( v21 )
        gtaoCinematicQualityMSAAComputeShader = rgp.gtaoCinematicQualityMSAAComputeShader;
      else
        gtaoCinematicQualityMSAAComputeShader = rgp.gtaoMSAAComputeShader;
    }
    else
    {
      gtaoCinematicQualityMSAAComputeShader = rgp.gtaoCinematicQualityComputeShader;
      if ( !v21 )
        gtaoCinematicQualityMSAAComputeShader = rgp.gtaoComputeShader;
    }
    R_SetComputeShader(v19, gtaoCinematicQualityMSAAComputeShader);
    if ( v73->validFrameCount )
    {
      if ( R_RT_Handle::IsValid(&previousAORt->R_RT_Handle) )
        textureId = R_RT_Handle::GetSurface(&previousAORt->R_RT_Handle)->m_image.m_base.textureId;
      else
        textureId = rgp.defaultGtaoImage->textureId;
      Resident = (GfxTexture *)R_Texture_GetResident(textureId);
      if ( R_RT_Handle::IsValid(v74) )
      {
        Surface = R_RT_Handle::GetSurface(v74);
        v26 = v69;
LABEL_26:
        v27 = (R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
        v28 = R_RT_Handle::GetSurface(v64);
        v64 = (R_RT_Handle *)R_Texture_GetResident(v28->m_image.m_base.textureId);
        R_SetComputeTextures(v19, 0, 1, (const GfxTexture *const *)&v64);
        v29 = R_RT_Handle::GetSurface(v72);
        v64 = (R_RT_Handle *)R_Texture_GetResident(v29->m_image.m_base.textureId);
        R_SetComputeTextures(v19, 1, 1, (const GfxTexture *const *)&v64);
        v64 = (R_RT_Handle *)Resident;
        R_SetComputeTextures(v19, 2, 1, (const GfxTexture *const *)&v64);
        v30 = R_RT_Handle::GetSurface(v26);
        v64 = (R_RT_Handle *)R_Texture_GetResident(v30->m_image.m_base.textureId);
        R_SetComputeTextures(v19, 3, 1, (const GfxTexture *const *)&v64);
        v64 = v27;
        R_SetComputeTextures(v19, 4, 1, (const GfxTexture *const *)&v64);
        v31 = v70;
        if ( R_RT_Handle::IsValid(v70) )
          v32 = R_RT_Handle::GetSurface(v31)->m_image.m_base.textureId;
        else
          v32 = rgp.whiteImage->textureId;
        v70 = (R_RT_ColorHandle *)R_Texture_GetResident(v32);
        R_SetComputeTextures(v19, 6, 1, (const GfxTexture *const *)&v70);
        v33 = v65;
        if ( R_RT_Handle::IsValid(v65) )
          v34 = R_RT_Handle::GetSurface(v33)->m_image.m_base.textureId;
        else
          v34 = rgp.blackImage->textureId;
        v65 = (R_RT_Handle *)R_Texture_GetResident(v34);
        R_SetComputeTextures(v19, 8, 1, (const GfxTexture *const *)&v65);
        if ( R_RT_Handle::IsValid(&ioPrepassMomentsRt->R_RT_Handle) )
        {
          v35 = R_RT_Handle::GetSurface(&ioPrepassMomentsRt->R_RT_Handle);
          Resident = (GfxTexture *)R_Texture_GetResident(v35->m_image.m_base.textureId);
        }
        v65 = (R_RT_Handle *)Resident;
        R_SetComputeTextures(v19, 7, 1, (const GfxTexture *const *)&v65);
        if ( v20 )
        {
          v36 = R_RT_Handle::GetSurface(v72);
          v65 = (R_RT_Handle *)R_Texture_GetResident(v36->m_color.m_fmaskImage.m_base.textureId);
          R_SetComputeTextures(v19, 12, 1, (const GfxTexture *const *)&v65);
        }
        v37 = R_RT_Handle::GetSurface(&outAORt->R_RT_Handle);
        v65 = (R_RT_Handle *)R_Texture_GetResident(v37->m_image.m_base.textureId);
        v38 = &v65;
        v39 = 0;
        goto LABEL_43;
      }
    }
    else
    {
      Resident = (GfxTexture *)R_Texture_GetResident(rgp.defaultGtaoImage->textureId);
    }
    v26 = v69;
    Surface = R_RT_Handle::GetSurface(v69);
    goto LABEL_26;
  }
  v20 = 0;
  if ( !isPrepass )
    goto LABEL_5;
  if ( (!floatZMinRt->m_surfaceID || !floatZMaxRt->m_surfaceID || !ioPrepassMomentsRt->m_surfaceID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 192, ASSERT_TYPE_ASSERT, "(!floatZMinRt.IsNull() && !floatZMaxRt.IsNull() && !ioPrepassMomentsRt.IsNull())", (const char *)&queryFormat, "!floatZMinRt.IsNull() && !floatZMaxRt.IsNull() && !ioPrepassMomentsRt.IsNull()") )
    __debugbreak();
  LOWORD(v67) = R_RT_Handle::GetSurface(&ioPrepassMomentsRt->R_RT_Handle)->m_image.m_base.width;
  LOWORD(v66) = R_RT_Handle::GetSurface(&ioPrepassMomentsRt->R_RT_Handle)->m_image.m_base.height;
  R_SetComputeShader(v19, rgp.gtaoPrepassComputeShader);
  v40 = R_RT_Handle::GetSurface(&floatZMinRt->R_RT_Handle);
  v65 = (R_RT_Handle *)R_Texture_GetResident(v40->m_image.m_base.textureId);
  R_SetComputeTextures(v19, 10, 1, (const GfxTexture *const *)&v65);
  v41 = R_RT_Handle::GetSurface((R_RT_Handle *)v71);
  *(_QWORD *)&v71 = R_Texture_GetResident(v41->m_image.m_base.textureId);
  R_SetComputeTextures(v19, 11, 1, (const GfxTexture *const *)&v71);
  v42 = R_RT_Handle::GetSurface(&ioPrepassMomentsRt->R_RT_Handle);
  *(_QWORD *)&v71 = R_Texture_GetResident(v42->m_image.m_base.textureId);
  v38 = (R_RT_Handle **)&v71;
  v39 = 2;
LABEL_43:
  R_SetComputeRWTextures(v19, v39, 1, (const GfxTexture *const *)v38);
  v43 = (unsigned __int16)v66;
  v44 = (unsigned __int16)v67;
  v45 = r_ssaoLowFrequencyBlendParams0->current.vector.v[2];
  value = r_ssaoLowFrequencyBlendParams0->current.value;
  v47 = r_ssaoLowFrequencyBlendParams0->current.vector.v[1];
  v48 = (unsigned int)(((unsigned __int16)v67 >> 1) + 7) >> 3;
  v49 = v73->input.data;
  v50 = (unsigned int)(((unsigned __int16)v66 >> 1) + 7) >> 3;
  v67 = v48;
  v51 = v49->frameCount & 0xFFF;
  v66 = v50;
  v52 = (float)v51;
  v53 = r_ssaoDistanceFade->current.vector.v[1];
  *(float *)&dataa[9] = 1.0 / (float)(r_ssaoDistanceFade->current.value - v53);
  *(float *)&dataa[10] = 0.0;
  *(float *)&dataa[11] = 0.0;
  *(float *)&dataa[7] = v45;
  v54 = (float)v44;
  *(float *)&dataa[4] = v52;
  *(float *)&dataa[5] = value;
  *(float *)&dataa[6] = v47;
  *(float *)&dataa[8] = v53;
  current = r_ssaoLowFrequencyBlendParams0->current;
  v55 = (float)v43;
  *(float *)&dataa[1] = v55;
  *(float *)dataa = v54;
  *(float *)&dataa[3] = 1.0 / v55;
  *(float *)&dataa[2] = 1.0 / v54;
  if ( v20 )
  {
    frameCount = v49->frameCount;
    v57 = 0;
    v58 = 0i64;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v63) = 4;
        LODWORD(v62) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v62, v63) )
          __debugbreak();
      }
      v60 = s_VRSPixelToSampleOrdered_11[unsignedInt][v58];
      v61 = (int)v57;
      ++v58;
      ++v57;
      *((_DWORD *)&v71 + v61) = v60;
    }
    while ( v57 < 4 );
    v19 = v75;
    v48 = v67;
    v50 = v66;
    v78 = v71;
  }
  R_UploadAndSetComputeConstants(v19, 0, dataa, 0x50u, NULL);
  buffers = (ID3D12Resource *)**((_QWORD **)&buffers[1962].IGraphicsUnknown + 1);
  R_SetComputeConstantBuffers(v19, 7, 1, &buffers);
  buffers = (ID3D12Resource *)R_Texture_GetResident(rgp.blueNoiseImage->textureId);
  R_SetComputeTextures(v19, 5, 1, (const GfxTexture *const *)&buffers);
  R_Dispatch(v19, v48, v50, 1u);
}

/*
==============
R_SSAO_RequestPreviousFrameVelocities
==============
*/
__int64 R_SSAO_RequestPreviousFrameVelocities(unsigned int mode)
{
  return mode & 1;
}

/*
==============
R_SSAO_RequestVelocities
==============
*/
__int64 R_SSAO_RequestVelocities(unsigned int mode)
{
  return mode & 1;
}

/*
==============
R_SetSSAOInfo
==============
*/
void R_SetSSAOInfo(GfxViewInfo *viewInfo, unsigned int sceneWidth, unsigned int sceneHeight, const SSAOControls *ssaoControls)
{
  GfxSSAO *p_ssao; 
  __int64 v5; 
  __int64 v6; 
  GfxSSAOMode m_ssaoModeOverride; 
  float strength; 
  float v11; 
  GfxSSAOMode v12; 
  float v13; 
  float v18; 
  __int64 v19; 

  p_ssao = &viewInfo->ssao;
  v5 = sceneHeight;
  v6 = sceneWidth;
  if ( viewInfo == (GfxViewInfo *)-11756i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 131, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  DebugWipe(p_ssao, 0xCui64);
  p_ssao->controls.strength = ssaoControls->strength;
  if ( (*((_DWORD *)&viewInfo->viewportFeatures + 10) & 0x20000) != 0 )
    m_ssaoModeOverride = viewInfo->viewportFeatures.m_ssaoModeOverride;
  else
    m_ssaoModeOverride = rg.ssaoMode;
  if ( (unsigned __int8)m_ssaoModeOverride >= GFX_SSAO_COUNT )
  {
    LODWORD(v19) = (unsigned __int8)m_ssaoModeOverride;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 143, ASSERT_TYPE_ASSERT, "(unsigned)( wantSsaoMode ) < (unsigned)( GFX_SSAO_COUNT )", "wantSsaoMode doesn't index GFX_SSAO_COUNT\n\t%i not in [0, %i)", v19, 4) )
      __debugbreak();
  }
  strength = p_ssao->controls.strength;
  v12 = GFX_SSAO_OFF;
  if ( strength > 0.0 )
    v12 = m_ssaoModeOverride;
  p_ssao->mode = v12;
  p_ssao->splitZones = r_ssaoSplitZones->current.enabled;
  v11 = (float)v6;
  v13 = v11 / (float)(vidConfig.displayAspectRatio * 1080.0);
  viewInfo->input.sceneConstants.ssaoParams.v[0] = strength;
  _XMM0 = v12 & 1;
  __asm { vpcmpeqd xmm3, xmm0, xmm1 }
  _XMM1 = LODWORD(FLOAT_1_8621);
  __asm { vblendvps xmm0, xmm1, xmm2, xmm3 }
  viewInfo->input.sceneConstants.ssaoParams.v[1] = *(float *)&_XMM0;
  v18 = (float)v5;
  viewInfo->input.sceneConstants.ssaoParams.v[3] = v18 * 0.00092592591;
  viewInfo->input.sceneConstants.ssaoParams.v[2] = v13;
}

/*
==============
R_ShutdownSSAO
==============
*/

void __fastcall R_ShutdownSSAO(double _XMM0_8)
{
  R_RT_Handle v2; 

  if ( s_previousAORt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousAORt);
    v2 = (R_RT_Handle)s_previousAORt;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousAORt.m_surfaceID = 0;
    s_previousAORt.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&s_previousAORt.m_tracking.m_name = _XMM0;
  }
  else if ( s_previousAORt.m_tracking.m_allocCounter != s_previousAORt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}


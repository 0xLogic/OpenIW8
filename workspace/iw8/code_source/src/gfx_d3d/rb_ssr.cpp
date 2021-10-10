/*
==============
R_RegisterSSRDvars
==============
*/

void R_RegisterSSRDvars(void)
{
  ?R_RegisterSSRDvars@@YAXXZ();
}

/*
==============
R_SSR_RotateRTs
==============
*/

void __fastcall R_SSR_RotateRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?R_SSR_RotateRTs@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_SSR_DeferredTrace
==============
*/

void __fastcall RB_SSR_DeferredTrace(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_SSR_DeferredTrace@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
RB_SSR_DeferredWaterTrace
==============
*/

void __fastcall RB_SSR_DeferredWaterTrace(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  ?RB_SSR_DeferredWaterTrace@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@@Z(computeState, viewInfo, data);
}

/*
==============
R_ShutdownSSR
==============
*/

void R_ShutdownSSR(void)
{
  ?R_ShutdownSSR@@YAXXZ();
}

/*
==============
R_InitSSR
==============
*/

void R_InitSSR(void)
{
  ?R_InitSSR@@YAXXZ();
}

/*
==============
R_SSR_GetPreviousFrameWaterTraceRt
==============
*/

R_RT_ColorHandle *__fastcall R_SSR_GetPreviousFrameWaterTraceRt(R_RT_ColorHandle *result)
{
  return ?R_SSR_GetPreviousFrameWaterTraceRt@@YA?AVR_RT_ColorHandle@@XZ(result);
}

/*
==============
R_GetSSRMode
==============
*/

GfxSSRMode __fastcall R_GetSSRMode(const GfxViewInfo *viewInfo)
{
  return ?R_GetSSRMode@@YA?AW4GfxSSRMode@@PEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_SSR_FreeTemporalRts
==============
*/

void R_SSR_FreeTemporalRts(void)
{
  ?R_SSR_FreeTemporalRts@@YAXXZ();
}

/*
==============
R_SSR_DeferredTrace
==============
*/

void __fastcall R_SSR_DeferredTrace(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, bool waterTrace, R_RT_ColorHandle *floatZFullRt, R_RT_ColorHandle *waterFloatZFullRt, R_RT_ColorHandle *tangentFrameRt, R_RT_ColorHandle *maskTexture, R_RT_ColorHandle *scopeTexture, R_RT_ColorHandle *outTraceRt)
{
  ?R_SSR_DeferredTrace@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@_NVR_RT_ColorHandle@@44444@Z(computeState, viewInfo, data, waterTrace, floatZFullRt, waterFloatZFullRt, tangentFrameRt, maskTexture, scopeTexture, outTraceRt);
}

/*
==============
RB_SSR_DeferredTrace
==============
*/
void RB_SSR_DeferredTrace(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v10; 
  const GfxTexture *v11; 
  R_RT_ColorHandle v12; 
  R_RT_ColorHandle v13; 
  R_RT_ColorHandle m_ssrRt; 
  R_RT_ColorHandle m_ssrMaskRt; 
  R_RT_ColorHandle m_mainSceneTangentFrameRt; 
  R_RT_ColorHandle m_floatZFullRt; 
  R_RT_Handle v18; 

  if ( viewInfo->ssrMode >= GFX_SSR_DEFERRED_LQ )
  {
    R_GPU_BeginTimer(GPU_TIMER_SSR);
    R_ProfBeginNamedEvent(computeState, "SSR : Deferred Depth Trace");
    m_floatZFullRt = viewInfo->sceneRtInput.m_floatZFullRt;
    m_mainSceneTangentFrameRt = viewInfo->sceneRtInput.m_mainSceneTangentFrameRt;
    m_ssrMaskRt = viewInfo->sceneRtInput.m_ssrMaskRt;
    m_ssrRt = viewInfo->sceneRtInput.m_ssrRt;
    v18 = (R_RT_Handle)m_ssrRt;
    Surface = R_RT_Handle::GetSurface(&v18);
    Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(computeState);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v12.m_tracking.m_name = _XMM0;
    *(_OWORD *)&v13.m_tracking.m_name = _XMM0;
    v12.m_surfaceID = 0;
    v12.m_tracking.m_allocCounter = 0;
    v13.m_surfaceID = 0;
    v13.m_tracking.m_allocCounter = 0;
    R_SSR_DeferredTrace(computeState, viewInfo, data, 0, &m_floatZFullRt, &v13, &m_mainSceneTangentFrameRt, &m_ssrMaskRt, &v12, &m_ssrRt);
    v10 = R_RT_Handle::GetSurface(&v18);
    v11 = R_Texture_GetResident(v10->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v11, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(computeState);
    R_ProfEndNamedEvent(computeState);
    R_GPU_EndTimer();
  }
}

/*
==============
RB_SSR_DeferredWaterTrace
==============
*/
void RB_SSR_DeferredWaterTrace(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data)
{
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  const R_RT_Surface *v10; 
  const GfxTexture *v11; 
  R_RT_ColorHandle v12; 
  R_RT_Handle v13; 
  R_RT_ColorHandle m_ssrWaterRt; 
  R_RT_ColorHandle m_ssrMaskRt; 
  R_RT_ColorHandle m_mainSceneTangentFrameRt; 
  R_RT_ColorHandle m_waterFloatZRt; 
  R_RT_ColorHandle m_floatZFullRt; 

  if ( viewInfo->ssrMode >= GFX_SSR_DEFERRED_LQ )
  {
    R_GPU_BeginTimer(GPU_TIMER_SSR);
    R_ProfBeginNamedEvent(computeState, "SSR : Deferred Water Trace");
    m_floatZFullRt = viewInfo->sceneRtInput.m_floatZFullRt;
    m_waterFloatZRt = viewInfo->sceneRtInput.m_waterFloatZRt;
    m_mainSceneTangentFrameRt = viewInfo->sceneRtInput.m_mainSceneTangentFrameRt;
    m_ssrMaskRt = viewInfo->sceneRtInput.m_ssrMaskRt;
    m_ssrWaterRt = viewInfo->sceneRtInput.m_ssrWaterRt;
    v13 = (R_RT_Handle)m_ssrWaterRt;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v13);
      Surface = R_RT_Handle::GetSurface(&v13);
      Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(computeState);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v12.m_tracking.m_name = _XMM0;
      v12.m_surfaceID = 0;
      v12.m_tracking.m_allocCounter = 0;
      R_SSR_DeferredTrace(computeState, viewInfo, data, 1, &m_floatZFullRt, &m_waterFloatZRt, &m_mainSceneTangentFrameRt, &m_ssrMaskRt, &v12, &m_ssrWaterRt);
      v10 = R_RT_Handle::GetSurface(&v13);
      v11 = R_Texture_GetResident(v10->m_image.m_base.textureId);
      R_HW_AddResourceTransition(computeState, v11, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(computeState);
    }
    else if ( v13.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
    R_ProfEndNamedEvent(computeState);
    R_GPU_EndTimer();
  }
}

/*
==============
R_GetSSRMode
==============
*/
__int64 R_GetSSRMode(const GfxViewInfo *viewInfo)
{
  return (unsigned __int8)viewInfo->ssrMode;
}

/*
==============
R_InitSSR
==============
*/
void R_InitSSR(void)
{
  ;
}

/*
==============
R_RegisterSSRDvars
==============
*/
void R_RegisterSSRDvars(void)
{
  r_ssrMode = Dvar_RegisterEnum("NNTTTQSRN", r_ssrModeNames, 2, 0, "Screen Space Reflection mode");
}

/*
==============
R_SSR_DeferredTrace
==============
*/
void R_SSR_DeferredTrace(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, bool waterTrace, R_RT_ColorHandle *floatZFullRt, R_RT_ColorHandle *waterFloatZFullRt, R_RT_ColorHandle *tangentFrameRt, R_RT_ColorHandle *maskTexture, R_RT_ColorHandle *scopeTexture, R_RT_ColorHandle *outTraceRt)
{
  ComputeCmdBufState *v11; 
  R_RT_ColorHandle *v12; 
  GfxSSRMode ssrMode; 
  __int64 width; 
  __int64 height; 
  bool v17; 
  unsigned __int16 m_surfaceID; 
  float v19; 
  float v20; 
  float v21; 
  unsigned int v22; 
  __int64 v23; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  int v26; 
  __int64 v27; 
  ComputeShader *ssrDeferredWaterTraceHQ; 
  const R_RT_Surface *Surface; 
  GfxTextureId textureId; 
  GfxTextureId v31; 
  R_RT_Handle *v32; 
  GfxTextureId v33; 
  R_RT_Handle *v34; 
  GfxTextureId v35; 
  GfxTextureId v36; 
  const R_RT_Surface *v37; 
  __int64 v38; 
  __int64 v39; 
  GfxSSRMode v40; 
  R_RT_Handle *v42; 
  R_RT_Handle *v43; 
  unsigned int yCount; 
  unsigned int xCount; 
  R_RT_Handle *Resident; 
  R_RT_Handle *v47; 
  R_RT_Handle *v48; 
  ID3D12Resource *buffers; 
  ComputeCmdBufState *v50; 
  R_RT_ColorHandle *v51; 
  __int128 v52; 
  int dataa[12]; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> v55; 
  __int128 v56; 

  v11 = computeState;
  v12 = tangentFrameRt;
  Resident = floatZFullRt;
  v42 = waterFloatZFullRt;
  v47 = maskTexture;
  v43 = scopeTexture;
  ssrMode = viewInfo->ssrMode;
  v50 = computeState;
  v40 = ssrMode;
  buffers = (ID3D12Resource *)data;
  v51 = tangentFrameRt;
  v48 = outTraceRt;
  width = R_RT_Handle::GetSurface(outTraceRt)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(outTraceRt)->m_image.m_base.height;
  xCount = (unsigned int)(width + 7) >> 3;
  yCount = (unsigned int)(height + 7) >> 3;
  v17 = rg.vrs && !waterTrace;
  m_surfaceID = tangentFrameRt->m_surfaceID;
  if ( tangentFrameRt->m_surfaceID )
  {
    R_RT_Handle::GetSurface(tangentFrameRt);
  }
  else if ( tangentFrameRt->m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
  if ( m_surfaceID && v17 != ((R_RT_Handle::GetSurface(tangentFrameRt)->m_rtFlags & 0x8000) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssr.cpp", 76, ASSERT_TYPE_ASSERT, "(!tangentFrameRt.IsValid() || (useMSAA == tangentFrameRt.HasFmask()))", (const char *)&queryFormat, "!tangentFrameRt.IsValid() || (useMSAA == tangentFrameRt.HasFmask())") )
    __debugbreak();
  v19 = 1.0 / (float)(1.0 / viewInfo->viewParmsSet.frames[0].viewParms.camera.tanHalfFovY);
  dataa[4] = LODWORD(viewInfo->input.sceneConstants.temporalSamplingParams.v[2]);
  *(float *)&dataa[5] = 0.0;
  *(float *)&dataa[6] = 0.0;
  *(float *)&dataa[7] = 0.0;
  *(float *)&dataa[9] = v19 * -2.0;
  *(float *)&dataa[8] = (float)(v19 * vidConfig.displayAspectRatio) * 2.0;
  *(float *)&dataa[10] = v19 * vidConfig.displayAspectRatio;
  v20 = (float)width;
  v21 = (float)height;
  dataa[11] = LODWORD(v19) ^ _xmm;
  *(float *)dataa = v20;
  *(float *)&dataa[3] = 1.0 / v21;
  *(float *)&dataa[1] = v21;
  *(float *)&dataa[2] = 1.0 / v20;
  MatrixTranspose44(&viewInfo->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m, &out);
  MatrixTranspose44((const tmat44_t<vec4_t> *)viewInfo, &v55);
  if ( v17 )
  {
    v22 = 0;
    v23 = 0i64;
    frameCount = viewInfo->input.data->frameCount;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v39) = 4;
        LODWORD(v38) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v38, v39) )
          __debugbreak();
      }
      v26 = s_VRSPixelToSampleOrdered[unsignedInt][v23];
      v27 = (int)v22;
      ++v23;
      ++v22;
      dataa[v27 - 4] = v26;
    }
    while ( v22 < 4 );
    v11 = v50;
    v12 = v51;
    v56 = v52;
  }
  R_UploadAndSetComputeConstants(v11, 0, dataa, 0xD0u, NULL);
  if ( waterTrace )
  {
    ssrDeferredWaterTraceHQ = rgp.ssrDeferredWaterTraceHQ;
    if ( v40 == GFX_SSR_DEFERRED_LQ )
      ssrDeferredWaterTraceHQ = rgp.ssrDeferredWaterTrace;
  }
  else if ( v17 )
  {
    ssrDeferredWaterTraceHQ = rgp.ssrDeferredTraceHQMSAA;
    if ( v40 == GFX_SSR_DEFERRED_LQ )
      ssrDeferredWaterTraceHQ = rgp.ssrDeferredTraceMSAA;
  }
  else
  {
    ssrDeferredWaterTraceHQ = rgp.ssrDeferredTraceHQ;
    if ( v40 == GFX_SSR_DEFERRED_LQ )
      ssrDeferredWaterTraceHQ = rgp.ssrDeferredTrace;
  }
  R_SetComputeShader(v11, ssrDeferredWaterTraceHQ);
  Surface = R_RT_Handle::GetSurface(Resident);
  Resident = (R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(v11, 0, 1, (const GfxTexture *const *)&Resident);
  if ( R_RT_Handle::IsValid(v42) )
    textureId = R_RT_Handle::GetSurface(v42)->m_image.m_base.textureId;
  else
    textureId = rgp.blackImage->textureId;
  v42 = (R_RT_Handle *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(v11, 2, 1, (const GfxTexture *const *)&v42);
  if ( R_RT_Handle::IsValid(v12) )
    v31 = R_RT_Handle::GetSurface(v12)->m_image.m_base.textureId;
  else
    v31 = rgp.blackUintImage->textureId;
  v42 = (R_RT_Handle *)R_Texture_GetResident(v31);
  R_SetComputeTextures(v11, 1, 1, (const GfxTexture *const *)&v42);
  v32 = v47;
  if ( R_RT_Handle::IsValid(v47) )
    v33 = R_RT_Handle::GetSurface(v32)->m_image.m_base.textureId;
  else
    v33 = rgp.blackUintImage->textureId;
  v47 = (R_RT_Handle *)R_Texture_GetResident(v33);
  R_SetComputeTextures(v11, 3, 1, (const GfxTexture *const *)&v47);
  v34 = v43;
  if ( R_RT_Handle::IsValid(v43) )
    v35 = R_RT_Handle::GetSurface(v34)->m_image.m_base.textureId;
  else
    v35 = rgp.blackImage->textureId;
  v43 = (R_RT_Handle *)R_Texture_GetResident(v35);
  R_SetComputeTextures(v11, 4, 1, (const GfxTexture *const *)&v43);
  if ( v17 )
  {
    if ( R_RT_Handle::IsValid(v12) )
      v36 = R_RT_Handle::GetSurface(v12)->m_color.m_fmaskImage.m_base.textureId;
    else
      v36 = rgp.blackUintImage->textureId;
    v43 = (R_RT_Handle *)R_Texture_GetResident(v36);
    R_SetComputeTextures(v11, 5, 1, (const GfxTexture *const *)&v43);
  }
  v37 = R_RT_Handle::GetSurface(v48);
  v48 = (R_RT_Handle *)R_Texture_GetResident(v37->m_image.m_base.textureId);
  R_SetComputeRWTextures(v11, 0, 1, (const GfxTexture *const *)&v48);
  buffers = (ID3D12Resource *)**((_QWORD **)&buffers[1962].IGraphicsUnknown + 1);
  R_SetComputeConstantBuffers(v11, 7, 1, &buffers);
  R_Dispatch(v11, xCount, yCount, 1u);
}

/*
==============
R_SSR_FreeTemporalRts
==============
*/

void __fastcall R_SSR_FreeTemporalRts(double _XMM0_8)
{
  R_RT_Handle v2; 

  if ( s_previousWaterSSRRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousWaterSSRRt);
    v2 = (R_RT_Handle)s_previousWaterSSRRt;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousWaterSSRRt.m_surfaceID = 0;
    s_previousWaterSSRRt.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&s_previousWaterSSRRt.m_tracking.m_name = _XMM0;
  }
  else if ( s_previousWaterSSRRt.m_tracking.m_allocCounter != s_previousWaterSSRRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}

/*
==============
R_SSR_GetPreviousFrameWaterTraceRt
==============
*/
R_RT_ColorHandle *R_SSR_GetPreviousFrameWaterTraceRt(R_RT_ColorHandle *result)
{
  *result = s_previousWaterSSRRt;
  return result;
}

/*
==============
R_SSR_RotateRTs
==============
*/
void R_SSR_RotateRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufContext v3; 
  unsigned __int16 m_surfaceID; 
  GfxCmdBufContext v7; 
  R_RT_ColorHandle v8; 

  v3 = *gfxContext;
  v8 = s_previousWaterSSRRt;
  v7 = v3;
  R_RT_Destroy(&v7, &v8);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_previousWaterSSRRt.m_surfaceID = 0;
  s_previousWaterSSRRt.m_tracking.m_allocCounter = 0;
  *(_OWORD *)&s_previousWaterSSRRt.m_tracking.m_name = _XMM0;
  if ( viewInfo->ssrWaterTrace )
  {
    m_surfaceID = viewInfo->sceneRtInput.m_ssrWaterRt.m_surfaceID;
    if ( m_surfaceID )
    {
      R_RT_Handle::GetSurface(&viewInfo->sceneRtInput.m_ssrWaterRt);
    }
    else if ( viewInfo->sceneRtInput.m_ssrWaterRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssr.cpp", 143, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_ssrWaterRt.IsValid())", (const char *)&queryFormat, "viewInfo->sceneRtInput.m_ssrWaterRt.IsValid()") )
      __debugbreak();
    s_previousWaterSSRRt = viewInfo->sceneRtInput.m_ssrWaterRt;
  }
}

/*
==============
R_ShutdownSSR
==============
*/

void __fastcall R_ShutdownSSR(double _XMM0_8)
{
  R_RT_Handle v2; 

  if ( s_previousWaterSSRRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousWaterSSRRt);
    v2 = (R_RT_Handle)s_previousWaterSSRRt;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousWaterSSRRt.m_surfaceID = 0;
    s_previousWaterSSRRt.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&s_previousWaterSSRRt.m_tracking.m_name = _XMM0;
  }
  else if ( s_previousWaterSSRRt.m_tracking.m_allocCounter != s_previousWaterSSRRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}


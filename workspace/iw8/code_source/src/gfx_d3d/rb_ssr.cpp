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
  const R_RT_Surface *v20; 
  const GfxTexture *v21; 
  R_RT_ColorHandle v22; 
  R_RT_ColorHandle v23; 
  R_RT_ColorHandle v24; 
  R_RT_ColorHandle v25; 
  R_RT_ColorHandle v26; 
  R_RT_ColorHandle v27; 
  R_RT_Handle v28; 

  _RBX = viewInfo;
  if ( viewInfo->ssrMode >= GFX_SSR_DEFERRED_LQ )
  {
    R_GPU_BeginTimer(GPU_TIMER_SSR);
    R_ProfBeginNamedEvent(computeState, "SSR : Deferred Depth Trace");
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+3340h]
      vmovups [rsp+138h+var_48], ymm0
      vmovups ymm0, ymmword ptr [rbx+3160h]
      vmovups [rsp+138h+var_68], ymm0
      vmovups ymm0, ymmword ptr [rbx+3448h]
      vmovups [rsp+138h+var_88], ymm0
      vmovups ymm0, ymmword ptr [rbx+3428h]
      vmovups [rsp+138h+var_A8], ymm0
      vmovups ymmword ptr [rsp+138h+var_28.m_surfaceID], ymm0
    }
    Surface = R_RT_Handle::GetSurface(&v28);
    Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(computeState);
    __asm
    {
      vmovups ymm1, [rsp+138h+var_A8]
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+138h+var_E8+10h], xmm0
      vmovdqu xmmword ptr [rsp+138h+var_C8+10h], xmm0
    }
    v22.m_surfaceID = 0;
    v22.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups ymm0, [rsp+138h+var_E8]
      vmovups [rsp+138h+var_A8], ymm1
      vmovups ymm1, [rsp+138h+var_88]
      vmovups [rsp+138h+var_E8], ymm0
      vmovups ymm0, [rsp+138h+var_68]
    }
    v23.m_surfaceID = 0;
    v23.m_tracking.m_allocCounter = 0;
    __asm
    {
      vmovups [rsp+138h+var_88], ymm1
      vmovups ymm1, [rsp+138h+var_48]
      vmovups [rsp+138h+var_68], ymm0
      vmovups ymm0, [rsp+138h+var_C8]
      vmovups [rsp+138h+var_C8], ymm0
      vmovups [rsp+138h+var_48], ymm1
    }
    R_SSR_DeferredTrace(computeState, _RBX, data, 0, &v27, &v23, &v26, &v25, &v22, &v24);
    v20 = R_RT_Handle::GetSurface(&v28);
    v21 = R_Texture_GetResident(v20->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v21, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  const R_RT_Surface *v22; 
  const GfxTexture *v23; 
  R_RT_ColorHandle v24; 
  R_RT_Handle v25; 
  R_RT_ColorHandle v26; 
  R_RT_ColorHandle v27; 
  R_RT_ColorHandle v28; 
  R_RT_ColorHandle v29; 
  R_RT_ColorHandle v30; 

  _RBX = viewInfo;
  if ( viewInfo->ssrMode >= GFX_SSR_DEFERRED_LQ )
  {
    R_GPU_BeginTimer(GPU_TIMER_SSR);
    R_ProfBeginNamedEvent(computeState, "SSR : Deferred Water Trace");
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+3340h]
      vmovups [rsp+138h+var_28], ymm0
      vmovups ymm0, ymmword ptr [rbx+33A0h]
      vmovups [rsp+138h+var_48], ymm0
      vmovups ymm0, ymmword ptr [rbx+3160h]
      vmovups [rsp+138h+var_68], ymm0
      vmovups ymm0, ymmword ptr [rbx+3448h]
      vmovups [rsp+138h+var_88], ymm0
      vmovups ymm0, ymmword ptr [rbx+3468h]
      vmovd   eax, xmm0
      vmovups [rsp+138h+var_A8], ymm0
      vmovups ymmword ptr [rsp+138h+var_C8.m_surfaceID], ymm0
    }
    if ( (_WORD)_EAX )
    {
      R_RT_Handle::GetSurface(&v25);
      Surface = R_RT_Handle::GetSurface(&v25);
      Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
      R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(computeState);
      __asm
      {
        vmovups ymm1, [rsp+138h+var_A8]
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+138h+var_E8+10h], xmm0
      }
      v24.m_surfaceID = 0;
      v24.m_tracking.m_allocCounter = 0;
      __asm
      {
        vmovups ymm0, [rsp+138h+var_E8]
        vmovups [rsp+138h+var_E8], ymm0
        vmovups ymm0, [rsp+138h+var_68]
        vmovups [rsp+138h+var_68], ymm0
        vmovups ymm0, [rsp+138h+var_48]
        vmovups [rsp+138h+var_A8], ymm1
        vmovups ymm1, [rsp+138h+var_88]
        vmovups [rsp+138h+var_48], ymm0
        vmovups ymm0, [rsp+138h+var_28]
        vmovups [rsp+138h+var_88], ymm1
        vmovups [rsp+138h+var_28], ymm0
      }
      R_SSR_DeferredTrace(computeState, _RBX, data, 1, &v30, &v29, &v28, &v27, &v24, &v26);
      v22 = R_RT_Handle::GetSurface(&v25);
      v23 = R_Texture_GetResident(v22->m_image.m_base.textureId);
      R_HW_AddResourceTransition(computeState, v23, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(computeState);
    }
    else if ( v25.m_tracking.m_allocCounter )
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
  int width; 
  int height; 
  bool v17; 
  unsigned __int16 m_surfaceID; 
  unsigned int v34; 
  __int64 v35; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  int v38; 
  __int64 v39; 
  ComputeShader *ssrDeferredWaterTraceHQ; 
  const R_RT_Surface *Surface; 
  GfxTextureId textureId; 
  GfxTextureId v44; 
  R_RT_Handle *v45; 
  GfxTextureId v46; 
  R_RT_Handle *v47; 
  GfxTextureId v48; 
  GfxTextureId v49; 
  const R_RT_Surface *v50; 
  __int64 v51; 
  __int64 v52; 
  GfxSSRMode v53; 
  R_RT_Handle *v55; 
  R_RT_Handle *v56; 
  unsigned int yCount; 
  unsigned int xCount; 
  R_RT_Handle *Resident; 
  R_RT_Handle *v60; 
  R_RT_Handle *v61; 
  ID3D12Resource *buffers; 
  ComputeCmdBufState *v63; 
  R_RT_ColorHandle *v64; 
  int dataa[12]; 
  tmat44_t<vec4_t> out; 
  tmat44_t<vec4_t> v68; 

  v11 = computeState;
  v12 = tangentFrameRt;
  _RDI = viewInfo;
  Resident = floatZFullRt;
  v55 = waterFloatZFullRt;
  v60 = maskTexture;
  v56 = scopeTexture;
  ssrMode = viewInfo->ssrMode;
  v63 = computeState;
  v53 = ssrMode;
  buffers = (ID3D12Resource *)data;
  v64 = tangentFrameRt;
  v61 = outTraceRt;
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
  __asm
  {
    vmovss  xmm4, cs:__real@3f800000
    vdivss  xmm0, xmm4, dword ptr [rdi+134h]
    vmovss  xmm1, dword ptr [rdi+1B88h]
    vdivss  xmm3, xmm4, xmm0
    vmulss  xmm2, xmm3, cs:?vidConfig@@3UvidConfig_t@@A.displayAspectRatio; vidConfig_t vidConfig
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+0B0h+var_100], xmm1
    vmulss  xmm1, xmm3, cs:__real@c0000000
    vmovss  [rbp+0B0h+var_FC], xmm0
    vmovss  [rbp+0B0h+var_F8], xmm0
    vmovss  [rbp+0B0h+var_F4], xmm0
    vmulss  xmm0, xmm2, cs:__real@40000000
    vmovss  [rbp+0B0h+var_EC], xmm1
    vmovss  [rbp+0B0h+var_F0], xmm0
    vxorps  xmm0, xmm3, cs:__xmm@80000000800000008000000080000000
    vmovss  [rbp+0B0h+var_E8], xmm2
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r14
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, r13
    vmovss  [rbp+0B0h+var_E4], xmm0
    vdivss  xmm0, xmm4, xmm1
    vmovss  [rbp+0B0h+data], xmm1
    vdivss  xmm1, xmm4, xmm2
    vmovss  [rbp+0B0h+var_104], xmm1
    vmovss  [rbp+0B0h+var_10C], xmm2
    vmovss  [rbp+0B0h+var_108], xmm0
  }
  MatrixTranspose44(&_RDI->viewParmsSet.frames[0].viewParms.viewProjectionMatrix.m, &out);
  MatrixTranspose44((const tmat44_t<vec4_t> *)_RDI, &v68);
  if ( v17 )
  {
    v34 = 0;
    v35 = 0i64;
    frameCount = _RDI->input.data->frameCount;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v52) = 4;
        LODWORD(v51) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v51, v52) )
          __debugbreak();
      }
      v38 = s_VRSPixelToSampleOrdered[unsignedInt][v35];
      v39 = (int)v34;
      ++v35;
      ++v34;
      dataa[v39 - 4] = v38;
    }
    while ( v34 < 4 );
    __asm { vmovups xmm0, [rbp+0B0h+var_120] }
    v11 = v63;
    v12 = v64;
    __asm { vmovups [rbp+0B0h+var_50], xmm0 }
  }
  R_UploadAndSetComputeConstants(v11, 0, dataa, 0xD0u, NULL);
  if ( waterTrace )
  {
    ssrDeferredWaterTraceHQ = rgp.ssrDeferredWaterTraceHQ;
    if ( v53 == GFX_SSR_DEFERRED_LQ )
      ssrDeferredWaterTraceHQ = rgp.ssrDeferredWaterTrace;
  }
  else if ( v17 )
  {
    ssrDeferredWaterTraceHQ = rgp.ssrDeferredTraceHQMSAA;
    if ( v53 == GFX_SSR_DEFERRED_LQ )
      ssrDeferredWaterTraceHQ = rgp.ssrDeferredTraceMSAA;
  }
  else
  {
    ssrDeferredWaterTraceHQ = rgp.ssrDeferredTraceHQ;
    if ( v53 == GFX_SSR_DEFERRED_LQ )
      ssrDeferredWaterTraceHQ = rgp.ssrDeferredTrace;
  }
  R_SetComputeShader(v11, ssrDeferredWaterTraceHQ);
  Surface = R_RT_Handle::GetSurface(Resident);
  Resident = (R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(v11, 0, 1, (const GfxTexture *const *)&Resident);
  if ( R_RT_Handle::IsValid(v55) )
    textureId = R_RT_Handle::GetSurface(v55)->m_image.m_base.textureId;
  else
    textureId = rgp.blackImage->textureId;
  v55 = (R_RT_Handle *)R_Texture_GetResident(textureId);
  R_SetComputeTextures(v11, 2, 1, (const GfxTexture *const *)&v55);
  if ( R_RT_Handle::IsValid(v12) )
    v44 = R_RT_Handle::GetSurface(v12)->m_image.m_base.textureId;
  else
    v44 = rgp.blackUintImage->textureId;
  v55 = (R_RT_Handle *)R_Texture_GetResident(v44);
  R_SetComputeTextures(v11, 1, 1, (const GfxTexture *const *)&v55);
  v45 = v60;
  if ( R_RT_Handle::IsValid(v60) )
    v46 = R_RT_Handle::GetSurface(v45)->m_image.m_base.textureId;
  else
    v46 = rgp.blackUintImage->textureId;
  v60 = (R_RT_Handle *)R_Texture_GetResident(v46);
  R_SetComputeTextures(v11, 3, 1, (const GfxTexture *const *)&v60);
  v47 = v56;
  if ( R_RT_Handle::IsValid(v56) )
    v48 = R_RT_Handle::GetSurface(v47)->m_image.m_base.textureId;
  else
    v48 = rgp.blackImage->textureId;
  v56 = (R_RT_Handle *)R_Texture_GetResident(v48);
  R_SetComputeTextures(v11, 4, 1, (const GfxTexture *const *)&v56);
  if ( v17 )
  {
    if ( R_RT_Handle::IsValid(v12) )
      v49 = R_RT_Handle::GetSurface(v12)->m_color.m_fmaskImage.m_base.textureId;
    else
      v49 = rgp.blackUintImage->textureId;
    v56 = (R_RT_Handle *)R_Texture_GetResident(v49);
    R_SetComputeTextures(v11, 5, 1, (const GfxTexture *const *)&v56);
  }
  v50 = R_RT_Handle::GetSurface(v61);
  v61 = (R_RT_Handle *)R_Texture_GetResident(v50->m_image.m_base.textureId);
  R_SetComputeRWTextures(v11, 0, 1, (const GfxTexture *const *)&v61);
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
  R_RT_Handle v3; 

  if ( s_previousWaterSSRRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousWaterSSRRt);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_previousWaterSSRRt.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v3);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousWaterSSRRt.m_surfaceID = 0;
    s_previousWaterSSRRt.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr cs:s_previousWaterSSRRt.baseclass_0.m_tracking.m_name, xmm0 }
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
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_previousWaterSSRRt.baseclass_0.m_surfaceID
    vmovups ymmword ptr [rcx], ymm0
  }
  return result;
}

/*
==============
R_SSR_RotateRTs
==============
*/
void R_SSR_RotateRTs(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  unsigned __int16 m_surfaceID; 
  GfxCmdBufContext v9; 
  R_RT_ColorHandle v10; 

  __asm
  {
    vmovups xmm1, xmmword ptr [rcx]
    vmovups ymm0, ymmword ptr cs:s_previousWaterSSRRt.baseclass_0.m_surfaceID
  }
  _RBX = viewInfo;
  __asm
  {
    vmovups ymmword ptr [rsp+68h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups [rsp+68h+var_38], xmm1
  }
  R_RT_Destroy(&v9, &v10);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_previousWaterSSRRt.m_surfaceID = 0;
  s_previousWaterSSRRt.m_tracking.m_allocCounter = 0;
  __asm { vmovdqu xmmword ptr cs:s_previousWaterSSRRt.baseclass_0.m_tracking.m_name, xmm0 }
  if ( _RBX->ssrWaterTrace )
  {
    m_surfaceID = _RBX->sceneRtInput.m_ssrWaterRt.m_surfaceID;
    if ( m_surfaceID )
    {
      R_RT_Handle::GetSurface(&_RBX->sceneRtInput.m_ssrWaterRt);
    }
    else if ( _RBX->sceneRtInput.m_ssrWaterRt.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
    {
      __debugbreak();
    }
    if ( !m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssr.cpp", 143, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_ssrWaterRt.IsValid())", (const char *)&queryFormat, "viewInfo->sceneRtInput.m_ssrWaterRt.IsValid()") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+3468h]
      vmovups ymmword ptr cs:s_previousWaterSSRRt.baseclass_0.m_surfaceID, ymm0
    }
  }
}

/*
==============
R_ShutdownSSR
==============
*/

void __fastcall R_ShutdownSSR(double _XMM0_8)
{
  R_RT_Handle v3; 

  if ( s_previousWaterSSRRt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousWaterSSRRt);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_previousWaterSSRRt.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v3);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousWaterSSRRt.m_surfaceID = 0;
    s_previousWaterSSRRt.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr cs:s_previousWaterSSRRt.baseclass_0.m_tracking.m_name, xmm0 }
  }
  else if ( s_previousWaterSSRRt.m_tracking.m_allocCounter != s_previousWaterSSRRt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}


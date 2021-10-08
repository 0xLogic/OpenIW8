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
  GfxCmdBufContext v6; 
  R_RT_ColorHandle v7; 

  _RDI = gfxContext;
  _RBX = viewInfo;
  if ( (R_GetSSAOMode(viewInfo) & 1) == 0 )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+3408h]
      vmovups xmm1, xmmword ptr [rdi]
      vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
      vmovups [rsp+58h+var_38], xmm1
    }
    R_RT_Destroy(&v6, &v7);
  }
  _RBX->sceneRtInput.m_ssaoRt.m_surfaceID = 0;
  _RBX->sceneRtInput.m_ssaoRt.m_tracking.m_allocCounter = 0;
  _RBX->sceneRtInput.m_ssaoRt.m_tracking.m_name = NULL;
  _RBX->sceneRtInput.m_ssaoRt.m_tracking.m_location = NULL;
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
  const R_RT_Surface *v29; 
  const GfxTexture *v30; 
  R_RT_ColorHandle v31; 
  R_RT_ColorHandle v32; 
  R_RT_ColorHandle v33; 
  R_RT_ColorHandle v34; 
  R_RT_ColorHandle v35; 
  R_RT_ColorHandle v36; 
  R_RT_ColorHandle v37; 
  R_RT_ColorHandle v38; 
  R_RT_ColorHandle v39; 
  R_RT_ColorHandle v40; 
  R_RT_Handle v41; 
  R_RT_ColorHandle v42; 
  R_RT_ColorHandle v43; 
  R_RT_ColorHandle v44; 
  R_RT_ColorHandle result; 

  _RDI = viewInfo;
  R_ProfBeginNamedEvent(computeState, "Generate SSAO");
  R_GPU_BeginTimer(GPU_TIMER_SSAO);
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi+3340h]
    vmovups [rbp+190h+var_F0], ymm0
  }
  RB_GetHalfVelocityRt(&result, _RDI, 0);
  RB_GetHalfVelocityRt(&v44, _RDI, 1u);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_previousAORt.baseclass_0.m_surfaceID
    vmovups [rbp+190h+var_130], ymm0
    vmovups ymm0, ymmword ptr [rdi+3408h]
    vmovups [rbp+190h+var_170], ymm0
    vmovups ymmword ptr [rbp+190h+var_D0.m_surfaceID], ymm0
    vmovups ymm0, ymmword ptr [rdi+3160h]
    vmovups [rbp+190h+var_110], ymm0
    vmovups ymm0, ymmword ptr [rdi+3488h]
    vmovups [rbp+190h+var_150], ymm0
  }
  Surface = R_RT_Handle::GetSurface(&v41);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  __asm
  {
    vmovups ymm1, [rbp+190h+var_170]
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+190h+var_1F0+10h], xmm0
    vmovdqu xmmword ptr [rbp+190h+var_1B0+10h], xmm0
    vmovdqu xmmword ptr [rbp+190h+var_210+10h], xmm0
    vmovdqu xmmword ptr [rbp+190h+var_1D0+10h], xmm0
    vmovdqu xmmword ptr [rbp+190h+var_190+10h], xmm0
    vmovups [rbp+190h+var_170], ymm1
  }
  v31.m_surfaceID = 0;
  v31.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm0, [rbp+190h+var_210]
    vmovups [rbp+190h+var_210], ymm0
  }
  v32.m_surfaceID = 0;
  v32.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm1, [rbp+190h+var_1F0]
    vmovups [rbp+190h+var_1F0], ymm1
  }
  v33.m_surfaceID = 0;
  v33.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm0, [rbp+190h+var_1D0]
    vmovups [rbp+190h+var_1D0], ymm0
  }
  v34.m_surfaceID = 0;
  v34.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm1, [rbp+190h+var_1B0]
    vmovups [rbp+190h+var_1B0], ymm1
    vmovups ymm1, [rbp+190h+var_150]
  }
  v35.m_surfaceID = 0;
  v35.m_tracking.m_allocCounter = 0;
  __asm
  {
    vmovups ymm0, [rbp+190h+var_190]
    vmovups [rbp+190h+var_190], ymm0
    vmovups ymm0, [rbp+190h+var_130]
    vmovups [rbp+190h+var_130], ymm0
    vmovups ymm0, ymmword ptr [rbp+190h+var_70.baseclass_0.m_surfaceID]
    vmovups [rbp+190h+var_150], ymm1
    vmovups ymm1, ymmword ptr [rbp+190h+result.baseclass_0.m_surfaceID]
    vmovups [rbp+190h+var_B0], ymm0
    vmovups ymm0, [rbp+190h+var_110]
    vmovups [rbp+190h+var_90], ymm1
    vmovups ymm1, [rbp+190h+var_F0]
    vmovups [rbp+190h+var_110], ymm0
    vmovups [rbp+190h+var_F0], ymm1
  }
  R_SSAO_Generate(computeState, _RDI, data, &v40, &v39, &v43, &v42, &v38, &v37, &v35, &v34, &v33, &v32, &v31, &v36, zone, 0);
  v29 = R_RT_Handle::GetSurface(&v41);
  v30 = R_Texture_GetResident(v29->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v30, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  GfxCmdBufContext v8; 
  R_RT_ColorHandle v9; 

  __asm
  {
    vmovups xmm1, xmmword ptr [rcx]
    vmovups ymm0, ymmword ptr cs:s_previousAORt.baseclass_0.m_surfaceID
  }
  _RBX = viewInfo;
  __asm
  {
    vmovups ymmword ptr [rsp+68h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups [rsp+68h+var_38], xmm1
  }
  R_RT_Destroy(&v8, &v9);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  s_previousAORt.m_surfaceID = 0;
  s_previousAORt.m_tracking.m_allocCounter = 0;
  __asm { vmovdqu xmmword ptr cs:s_previousAORt.baseclass_0.m_tracking.m_name, xmm0 }
  if ( (R_GetSSAOMode(_RBX) & 1) != 0 )
  {
    if ( !R_RT_Handle::IsValid(&_RBX->sceneRtInput.m_ssaoRt) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 388, ASSERT_TYPE_ASSERT, "(viewInfo->sceneRtInput.m_ssaoRt)", (const char *)&queryFormat, "viewInfo->sceneRtInput.m_ssaoRt") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+3408h]
      vmovups ymmword ptr cs:s_previousAORt.baseclass_0.m_surfaceID, ymm0
    }
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

void __fastcall R_RegisterSSAODvars(__int64 a1, __int64 a2, __int64 a3, double _XMM3_8)
{
  const dvar_t *v14; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 

  __asm
  {
    vmovaps [rsp+78h+var_18], xmm6
    vmovaps [rsp+78h+var_28], xmm7
    vmovss  xmm7, cs:__real@437f0000
    vmovss  xmm2, cs:__real@40800000; y
    vmovss  xmm1, cs:__real@41000000; x
  }
  r_ssao = Dvar_RegisterEnum("MNRQQOMSMM", r_ssaoNames, 1, 0, "Screen Space Ambient Occlusion mode");
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+78h+var_48], xmm7
    vmovss  [rsp+78h+var_50], xmm6
    vxorps  xmm3, xmm3, xmm3; z
    vmovss  dword ptr [rsp+78h+description], xmm6
  }
  r_ssaoDistanceFade = Dvar_RegisterVec4("NSNSNQTRON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, description, v24, v27, 4u, "SSAO distance fade params in screen space texel sampling radius: X - fadeStart Y - fadeEnd");
  __asm
  {
    vmovss  xmm3, cs:__real@3e800000; z
    vmovss  xmm2, cs:__real@3ecccccd; y
    vmovss  xmm1, cs:__real@3d4ccccd; x
  }
  r_ssaoSplitZones = Dvar_RegisterBool("NQTSOQQRKT", 1, 4u, "Splits SSAO computations for better async behavior (console only)");
  __asm
  {
    vmovss  [rsp+78h+var_48], xmm7
    vmovss  [rsp+78h+var_50], xmm6
    vmovss  dword ptr [rsp+78h+description], xmm6
  }
  v14 = Dvar_RegisterVec4("MMLLKRSKMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, descriptiona, v25, v28, 4u, "SSAO moment rejection params ( momentsVarianceSensitivty momentsMeanMin momentsMeanMax )");
  __asm
  {
    vmovss  xmm0, cs:__real@41800000
    vmovss  xmm3, cs:__real@3f800000; z
    vmovss  xmm2, cs:__real@3f2a7efa; y
    vmovss  xmm1, cs:__real@3e000000; x
  }
  r_ssaoLowFrequencyBlendParams0 = v14;
  __asm
  {
    vmovss  [rsp+78h+var_48], xmm7
    vmovss  [rsp+78h+var_50], xmm6
    vmovss  dword ptr [rsp+78h+description], xmm0
    vmovaps xmm6, [rsp+78h+var_18]
    vmovaps xmm7, [rsp+78h+var_28]
  }
  r_ssaoLowFrequencyBlendParams1 = Dvar_RegisterVec4("LNSOPSPTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, descriptionb, v26, v29, 4u, "SSAO cache params ( skipUpdateRate skipMomentThreshold skipAlphaMulThreshold skipConvergenceFrameCount )");
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
  int v13; 
  int height; 
  const R_RT_Surface *Surface; 
  const R_RT_Surface *v36; 
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
  v13 = R_RT_Handle::GetSurface(&outPrepassRt->R_RT_Handle)->m_image.m_base.width;
  _RAX = R_RT_Handle::GetSurface(&outPrepassRt->R_RT_Handle);
  __asm
  {
    vmovss  xmm4, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm3, xmm3, xmm3
  }
  height = _RAX->m_image.m_base.height;
  _ECX = 0;
  __asm
  {
    vmovd   xmm1, ecx
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  [rsp+0D8h+var_88], xmm0
  }
  LODWORD(_RAX) = isHorizontal;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm4, xmm3, xmm2
    vmovss  [rsp+0D8h+var_68], xmm0
    vmovd   xmm1, ecx
  }
  LODWORD(_RAX) = isHorizontal;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm4, xmm2
    vmovss  [rsp+0D8h+var_64], xmm0
    vxorps  xmm0, xmm0, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm0, xmm0, rdi
    vcvtsi2ss xmm1, xmm1, rbx
    vmovss  [rsp+0D8h+data], xmm0
    vmovss  [rsp+0D8h+var_94], xmm1
    vdivss  xmm0, xmm4, xmm0
    vdivss  xmm1, xmm4, xmm1
    vmovss  [rsp+0D8h+var_90], xmm0
    vmovss  [rsp+0D8h+var_84], xmm3
    vmovss  [rsp+0D8h+var_80], xmm3
    vmovss  [rsp+0D8h+var_7C], xmm3
    vmovss  [rsp+0D8h+var_60], xmm3
    vmovss  [rsp+0D8h+var_5C], xmm3
    vmovss  [rsp+0D8h+var_8C], xmm1
  }
  R_UploadAndSetComputeConstants(computeState, 0, dataa, 0x50u, NULL);
  buffers[0] = data->globalSceneConstantBuffer->buffer;
  R_SetComputeConstantBuffers(computeState, 7, 1, buffers);
  Surface = R_RT_Handle::GetSurface(&inPrepassRt->R_RT_Handle);
  buffers[0] = (ID3D12Resource *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_SetComputeTextures(computeState, 8, 1, (const GfxTexture *const *)buffers);
  v36 = R_RT_Handle::GetSurface(&outPrepassRt->R_RT_Handle);
  buffers[0] = (ID3D12Resource *)R_Texture_GetResident(v36->m_image.m_base.textureId);
  R_SetComputeRWTextures(computeState, 2, 1, (const GfxTexture *const *)buffers);
  R_Dispatch(computeState, (unsigned int)(v13 + 7) >> 3, (unsigned int)(height + 7) >> 3, 1u);
}

/*
==============
R_SSAO_FreeTemporalRts
==============
*/

void __fastcall R_SSAO_FreeTemporalRts(double _XMM0_8)
{
  R_RT_Handle v3; 

  if ( s_previousAORt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousAORt);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_previousAORt.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v3);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousAORt.m_surfaceID = 0;
    s_previousAORt.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr cs:s_previousAORt.baseclass_0.m_tracking.m_name, xmm0 }
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
  bool v21; 
  ComputeCmdBufState *v22; 
  char v23; 
  bool v24; 
  ComputeShader *gtaoCinematicQualityMSAAComputeShader; 
  GfxTextureId textureId; 
  GfxTexture *Resident; 
  const R_RT_Surface *Surface; 
  R_RT_Handle *v29; 
  R_RT_Handle *v30; 
  const R_RT_Surface *v31; 
  const R_RT_Surface *v32; 
  const R_RT_Surface *v33; 
  R_RT_Handle *v34; 
  GfxTextureId v35; 
  R_RT_Handle *v36; 
  GfxTextureId v37; 
  const R_RT_Surface *v38; 
  const R_RT_Surface *v39; 
  const R_RT_Surface *v40; 
  R_RT_Handle **v41; 
  int v42; 
  const R_RT_Surface *v43; 
  const R_RT_Surface *v44; 
  const R_RT_Surface *v45; 
  unsigned int v51; 
  const GfxBackEndData *v52; 
  unsigned int v53; 
  unsigned int frameCount; 
  unsigned int v72; 
  __int64 v73; 
  __int64 unsignedInt; 
  unsigned int v75; 
  __int64 v76; 
  __int64 v78; 
  __int64 v79; 
  R_RT_Handle *v80; 
  R_RT_Handle *v81; 
  unsigned int v82; 
  unsigned int v83; 
  ID3D12Resource *buffers; 
  R_RT_Handle *v85; 
  R_RT_ColorHandle *v86; 
  __int128 v87; 
  R_RT_Handle *v88; 
  const GfxViewInfo *v89; 
  R_RT_Handle *v90; 
  ComputeCmdBufState *v91; 
  int dataa[12]; 
  void *retaddr; 

  _R11 = &retaddr;
  v21 = !rg.vrs;
  v22 = computeState;
  v85 = &velocityRt->R_RT_Handle;
  v90 = &previousVelocityRt->R_RT_Handle;
  v86 = (R_RT_ColorHandle *)mdaoRt;
  v89 = viewInfo;
  v91 = computeState;
  v81 = &ioPrepassAORt->R_RT_Handle;
  __asm
  {
    vmovaps xmmword ptr [r11-58h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm7
  }
  v80 = &floatZFullRt->R_RT_Handle;
  buffers = (ID3D12Resource *)data;
  v88 = &tangentBasisRt->R_RT_Handle;
  *(_QWORD *)&v87 = floatZMaxRt;
  if ( !v21 && !isPrepass )
  {
    v23 = 1;
LABEL_5:
    if ( v23 != ((R_RT_Handle::GetSurface(&tangentBasisRt->R_RT_Handle)->m_rtFlags & 0x4000) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 187, ASSERT_TYPE_ASSERT, "(isPrepass || (useMSAA == tangentBasisRt.IsMultisampled()))", (const char *)&queryFormat, "isPrepass || (useMSAA == tangentBasisRt.IsMultisampled())") )
      __debugbreak();
    if ( v89->validFrameCount && (((unsigned __int16)*(_DWORD *)&previousAORt->m_surfaceID ^ (unsigned __int16)*(_DWORD *)&outAORt->m_surfaceID) & 0xFFFF7FFF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 204, ASSERT_TYPE_ASSERT, "(!RB_SSAO_AreTemporalBuffersReady( viewInfo ) || outAORt != previousAORt)", (const char *)&queryFormat, "!RB_SSAO_AreTemporalBuffersReady( viewInfo ) || outAORt != previousAORt") )
      __debugbreak();
    LOWORD(v83) = R_RT_Handle::GetSurface(&outAORt->R_RT_Handle)->m_image.m_base.width;
    LOWORD(v82) = R_RT_Handle::GetSurface(&outAORt->R_RT_Handle)->m_image.m_base.height;
    v24 = R_Screenshot_InProcess();
    if ( v23 )
    {
      if ( v24 )
        gtaoCinematicQualityMSAAComputeShader = rgp.gtaoCinematicQualityMSAAComputeShader;
      else
        gtaoCinematicQualityMSAAComputeShader = rgp.gtaoMSAAComputeShader;
    }
    else
    {
      gtaoCinematicQualityMSAAComputeShader = rgp.gtaoCinematicQualityComputeShader;
      if ( !v24 )
        gtaoCinematicQualityMSAAComputeShader = rgp.gtaoComputeShader;
    }
    R_SetComputeShader(v22, gtaoCinematicQualityMSAAComputeShader);
    if ( v89->validFrameCount )
    {
      if ( R_RT_Handle::IsValid(&previousAORt->R_RT_Handle) )
        textureId = R_RT_Handle::GetSurface(&previousAORt->R_RT_Handle)->m_image.m_base.textureId;
      else
        textureId = rgp.defaultGtaoImage->textureId;
      Resident = (GfxTexture *)R_Texture_GetResident(textureId);
      if ( R_RT_Handle::IsValid(v90) )
      {
        Surface = R_RT_Handle::GetSurface(v90);
        v29 = v85;
LABEL_26:
        v30 = (R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
        v31 = R_RT_Handle::GetSurface(v80);
        v80 = (R_RT_Handle *)R_Texture_GetResident(v31->m_image.m_base.textureId);
        R_SetComputeTextures(v22, 0, 1, (const GfxTexture *const *)&v80);
        v32 = R_RT_Handle::GetSurface(v88);
        v80 = (R_RT_Handle *)R_Texture_GetResident(v32->m_image.m_base.textureId);
        R_SetComputeTextures(v22, 1, 1, (const GfxTexture *const *)&v80);
        v80 = (R_RT_Handle *)Resident;
        R_SetComputeTextures(v22, 2, 1, (const GfxTexture *const *)&v80);
        v33 = R_RT_Handle::GetSurface(v29);
        v80 = (R_RT_Handle *)R_Texture_GetResident(v33->m_image.m_base.textureId);
        R_SetComputeTextures(v22, 3, 1, (const GfxTexture *const *)&v80);
        v80 = v30;
        R_SetComputeTextures(v22, 4, 1, (const GfxTexture *const *)&v80);
        v34 = v86;
        if ( R_RT_Handle::IsValid(v86) )
          v35 = R_RT_Handle::GetSurface(v34)->m_image.m_base.textureId;
        else
          v35 = rgp.whiteImage->textureId;
        v86 = (R_RT_ColorHandle *)R_Texture_GetResident(v35);
        R_SetComputeTextures(v22, 6, 1, (const GfxTexture *const *)&v86);
        v36 = v81;
        if ( R_RT_Handle::IsValid(v81) )
          v37 = R_RT_Handle::GetSurface(v36)->m_image.m_base.textureId;
        else
          v37 = rgp.blackImage->textureId;
        v81 = (R_RT_Handle *)R_Texture_GetResident(v37);
        R_SetComputeTextures(v22, 8, 1, (const GfxTexture *const *)&v81);
        if ( R_RT_Handle::IsValid(&ioPrepassMomentsRt->R_RT_Handle) )
        {
          v38 = R_RT_Handle::GetSurface(&ioPrepassMomentsRt->R_RT_Handle);
          Resident = (GfxTexture *)R_Texture_GetResident(v38->m_image.m_base.textureId);
        }
        v81 = (R_RT_Handle *)Resident;
        R_SetComputeTextures(v22, 7, 1, (const GfxTexture *const *)&v81);
        if ( v23 )
        {
          v39 = R_RT_Handle::GetSurface(v88);
          v81 = (R_RT_Handle *)R_Texture_GetResident(v39->m_color.m_fmaskImage.m_base.textureId);
          R_SetComputeTextures(v22, 12, 1, (const GfxTexture *const *)&v81);
        }
        v40 = R_RT_Handle::GetSurface(&outAORt->R_RT_Handle);
        v81 = (R_RT_Handle *)R_Texture_GetResident(v40->m_image.m_base.textureId);
        v41 = &v81;
        v42 = 0;
        goto LABEL_43;
      }
    }
    else
    {
      Resident = (GfxTexture *)R_Texture_GetResident(rgp.defaultGtaoImage->textureId);
    }
    v29 = v85;
    Surface = R_RT_Handle::GetSurface(v85);
    goto LABEL_26;
  }
  v23 = 0;
  if ( !isPrepass )
    goto LABEL_5;
  if ( (!floatZMinRt->m_surfaceID || !floatZMaxRt->m_surfaceID || !ioPrepassMomentsRt->m_surfaceID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 192, ASSERT_TYPE_ASSERT, "(!floatZMinRt.IsNull() && !floatZMaxRt.IsNull() && !ioPrepassMomentsRt.IsNull())", (const char *)&queryFormat, "!floatZMinRt.IsNull() && !floatZMaxRt.IsNull() && !ioPrepassMomentsRt.IsNull()") )
    __debugbreak();
  LOWORD(v83) = R_RT_Handle::GetSurface(&ioPrepassMomentsRt->R_RT_Handle)->m_image.m_base.width;
  LOWORD(v82) = R_RT_Handle::GetSurface(&ioPrepassMomentsRt->R_RT_Handle)->m_image.m_base.height;
  R_SetComputeShader(v22, rgp.gtaoPrepassComputeShader);
  v43 = R_RT_Handle::GetSurface(&floatZMinRt->R_RT_Handle);
  v81 = (R_RT_Handle *)R_Texture_GetResident(v43->m_image.m_base.textureId);
  R_SetComputeTextures(v22, 10, 1, (const GfxTexture *const *)&v81);
  v44 = R_RT_Handle::GetSurface((R_RT_Handle *)v87);
  *(_QWORD *)&v87 = R_Texture_GetResident(v44->m_image.m_base.textureId);
  R_SetComputeTextures(v22, 11, 1, (const GfxTexture *const *)&v87);
  v45 = R_RT_Handle::GetSurface(&ioPrepassMomentsRt->R_RT_Handle);
  *(_QWORD *)&v87 = R_Texture_GetResident(v45->m_image.m_base.textureId);
  v41 = (R_RT_Handle **)&v87;
  v42 = 2;
LABEL_43:
  R_SetComputeRWTextures(v22, v42, 1, (const GfxTexture *const *)v41);
  _RCX = r_ssaoLowFrequencyBlendParams0;
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm6, dword ptr [rcx+30h]
    vmovss  xmm3, dword ptr [rcx+28h]
    vmovss  xmm4, dword ptr [rcx+2Ch]
  }
  v51 = (unsigned int)(((unsigned __int16)v83 >> 1) + 7) >> 3;
  v52 = v89->input.data;
  v53 = (unsigned int)(((unsigned __int16)v82 >> 1) + 7) >> 3;
  __asm { vxorps  xmm2, xmm2, xmm2 }
  v83 = v51;
  v82 = v53;
  __asm { vcvtsi2ss xmm2, xmm2, rax }
  _RAX = r_ssaoDistanceFade;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+28h]
    vmovss  xmm5, dword ptr [rax+2Ch]
    vsubss  xmm1, xmm0, xmm5
    vdivss  xmm0, xmm7, xmm1
    vmovss  [rbp+60h+var_9C], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+60h+var_98], xmm0
    vmovss  [rbp+60h+var_94], xmm0
    vmovss  [rbp+60h+var_A4], xmm6
    vmovaps xmm6, xmmword ptr [rsp+160h+var_58+8]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmovss  [rbp+60h+var_B0], xmm2
    vmovss  [rbp+60h+var_AC], xmm3
    vmovss  [rbp+60h+var_A8], xmm4
    vmovss  [rbp+60h+var_A0], xmm5
    vmovups xmm1, xmmword ptr [rcx+28h]
    vmovaps [rbp+60h+var_90], xmm1
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, r8
    vmovss  [rbp+60h+var_BC], xmm1
    vdivss  xmm1, xmm7, xmm1
    vmovss  [rbp+60h+data], xmm0
    vdivss  xmm0, xmm7, xmm0
    vmovaps xmm7, [rsp+160h+var_68+8]
    vmovss  [rbp+60h+var_B4], xmm1
    vmovss  [rbp+60h+var_B8], xmm0
  }
  if ( v23 )
  {
    frameCount = v52->frameCount;
    v72 = 0;
    v73 = 0i64;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v79) = 4;
        LODWORD(v78) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v78, v79) )
          __debugbreak();
      }
      v75 = s_VRSPixelToSampleOrdered_11[unsignedInt][v73];
      v76 = (int)v72;
      ++v73;
      ++v72;
      *((_DWORD *)&v87 + v76) = v75;
    }
    while ( v72 < 4 );
    __asm { vmovups xmm0, xmmword ptr [rsp+160h+var_F8+8] }
    v22 = v91;
    v51 = v83;
    v53 = v82;
    __asm { vmovups [rbp+60h+var_80], xmm0 }
  }
  R_UploadAndSetComputeConstants(v22, 0, dataa, 0x50u, NULL);
  buffers = (ID3D12Resource *)**((_QWORD **)&buffers[1962].IGraphicsUnknown + 1);
  R_SetComputeConstantBuffers(v22, 7, 1, &buffers);
  buffers = (ID3D12Resource *)R_Texture_GetResident(rgp.blueNoiseImage->textureId);
  R_SetComputeTextures(v22, 5, 1, (const GfxTexture *const *)&buffers);
  R_Dispatch(v22, v51, v53, 1u);
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
  GfxSSAOMode m_ssaoModeOverride; 
  __int64 v28; 

  _RSI = &viewInfo->ssao;
  _RDI = ssaoControls;
  _RBX = viewInfo;
  if ( viewInfo == (GfxViewInfo *)-11756i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 131, ASSERT_TYPE_ASSERT, "(outInfo)", (const char *)&queryFormat, "outInfo") )
    __debugbreak();
  DebugWipe(_RSI, 0xCui64);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  dword ptr [rsi+4], xmm0
  }
  if ( (*((_DWORD *)&_RBX->viewportFeatures + 10) & 0x20000) != 0 )
    m_ssaoModeOverride = _RBX->viewportFeatures.m_ssaoModeOverride;
  else
    m_ssaoModeOverride = rg.ssaoMode;
  if ( (unsigned __int8)m_ssaoModeOverride >= GFX_SSAO_COUNT )
  {
    LODWORD(v28) = (unsigned __int8)m_ssaoModeOverride;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_ssao.cpp", 143, ASSERT_TYPE_ASSERT, "(unsigned)( wantSsaoMode ) < (unsigned)( GFX_SSAO_COUNT )", "wantSsaoMode doesn't index GFX_SSAO_COUNT\n\t%i not in [0, %i)", v28, 4) )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm3, dword ptr [rsi+4]
    vxorps  xmm0, xmm0, xmm0
  }
  _ER8 = 0;
  __asm
  {
    vcomiss xmm3, xmm0
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, r14
  }
  _RSI->mode = GFX_SSAO_OFF;
  _RSI->splitZones = r_ssaoSplitZones->current.enabled;
  __asm
  {
    vmovss  xmm0, cs:?vidConfig@@3UvidConfig_t@@A.displayAspectRatio; vidConfig_t vidConfig
    vmulss  xmm1, xmm0, cs:__real@44870000
    vdivss  xmm4, xmm2, xmm1
    vmovss  xmm2, cs:__real@3f800000
    vmovd   xmm1, r8d
    vmovss  dword ptr [rbx+1BA0h], xmm3
  }
  _EAX = 0;
  __asm
  {
    vmovd   xmm0, eax
    vpcmpeqd xmm3, xmm0, xmm1
    vmovss  xmm1, cs:__real@3fee594b
    vblendvps xmm0, xmm1, xmm2, xmm3
    vmovss  dword ptr [rbx+1BA4h], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rbp
    vmulss  xmm1, xmm0, cs:__real@3a72b9d6
    vmovss  dword ptr [rbx+1BACh], xmm1
    vmovss  dword ptr [rbx+1BA8h], xmm4
  }
}

/*
==============
R_ShutdownSSAO
==============
*/

void __fastcall R_ShutdownSSAO(double _XMM0_8)
{
  R_RT_Handle v3; 

  if ( s_previousAORt.m_surfaceID )
  {
    R_RT_Handle::GetSurface(&s_previousAORt);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_previousAORt.baseclass_0.m_surfaceID
      vmovups ymmword ptr [rsp+58h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v3);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_previousAORt.m_surfaceID = 0;
    s_previousAORt.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr cs:s_previousAORt.baseclass_0.m_tracking.m_name, xmm0 }
  }
  else if ( s_previousAORt.m_tracking.m_allocCounter != s_previousAORt.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
  {
    __debugbreak();
  }
}


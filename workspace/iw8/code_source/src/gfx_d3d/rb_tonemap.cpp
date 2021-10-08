/*
==============
R_Tonemap_CalculateExposureCS
==============
*/

void __fastcall R_Tonemap_CalculateExposureCS(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *colorRt, const R_RT_ColorHandle *localLumaRt, const R_RT_ColorHandle *ambientLumaRt, const R_RT_ColorHandle *floatZFull, const GfxImage *scopeBuffer, const GfxWrappedRWBuffer *exposureInfoStructuredBuffer, bool allowBlendExposure)
{
  ?R_Tonemap_CalculateExposureCS@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@VR_RT_ColorHandle@@222PEBUGfxImage@@PEBUGfxWrappedRWBuffer@@_N@Z(state, viewInfo, colorRt, localLumaRt, ambientLumaRt, floatZFull, scopeBuffer, exposureInfoStructuredBuffer, allowBlendExposure);
}

/*
==============
R_Tonemap_GetFinalExposureAndRadiometricScale
==============
*/

double __fastcall R_Tonemap_GetFinalExposureAndRadiometricScale(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  double result; 

  *(float *)&result = ?R_Tonemap_GetFinalExposureAndRadiometricScale@@YAMPEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(data, viewInfo);
  return result;
}

/*
==============
R_FlushTonemap
==============
*/

void R_FlushTonemap(void)
{
  ?R_FlushTonemap@@YAXXZ();
}

/*
==============
R_Screenshot_HdrExposedSceneCS
==============
*/

void __fastcall R_Screenshot_HdrExposedSceneCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, bool compositeHudoutline)
{
  ?R_Screenshot_HdrExposedSceneCS@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@_N@Z(computeState, viewInfo, data, compositeHudoutline);
}

/*
==============
R_Tonemap_FilterCS
==============
*/

void __fastcall R_Tonemap_FilterCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, unsigned int dstWidth, unsigned int dstHeight, bool outputLuma, bool compositeHudoutline)
{
  ?R_Tonemap_FilterCS@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@II_N2@Z(computeState, viewInfo, dstWidth, dstHeight, outputLuma, compositeHudoutline);
}

/*
==============
R_Tonemap_GetUniversalExposureAdjust
==============
*/

double __fastcall R_Tonemap_GetUniversalExposureAdjust()
{
  double result; 

  *(float *)&result = ?R_Tonemap_GetUniversalExposureAdjust@@YAMXZ();
  return result;
}

/*
==============
R_Tonemap_Filter
==============
*/

void __fastcall R_Tonemap_Filter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxImage *srcColor, unsigned int dstWidth, unsigned int dstHeight)
{
  ?R_Tonemap_Filter@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxImage@@II@Z(gfxContext, viewInfo, srcColor, dstWidth, dstHeight);
}

/*
==============
R_Tonemap_GetExposureAdjust
==============
*/

double __fastcall R_Tonemap_GetExposureAdjust(const GfxViewInfo *viewInfo)
{
  double result; 

  *(float *)&result = ?R_Tonemap_GetExposureAdjust@@YAMPEBUGfxViewInfo@@@Z(viewInfo);
  return result;
}

/*
==============
R_TonemapToggleFrame
==============
*/

unsigned int __fastcall R_TonemapToggleFrame(LocalClientNum_t localCLientNum)
{
  return ?R_TonemapToggleFrame@@YAIW4LocalClientNum_t@@@Z(localCLientNum);
}

/*
==============
R_Tonemap_GetConstantBuffer
==============
*/

const GfxWrappedBuffer *__fastcall R_Tonemap_GetConstantBuffer(const GfxViewInfo *viewInfo)
{
  return ?R_Tonemap_GetConstantBuffer@@YAPEBUGfxWrappedBuffer@@PEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_Screenshot_HdrExposedScene
==============
*/

void __fastcall R_Screenshot_HdrExposedScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *srcRt)
{
  ?R_Screenshot_HdrExposedScene@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@VR_RT_ColorHandle@@@Z(gfxContext, viewInfo, data, srcRt);
}

/*
==============
R_Tonemap_ReadExposureInfoFromGpu
==============
*/

void __fastcall R_Tonemap_ReadExposureInfoFromGpu(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *exposureInfoConstantBuffer)
{
  ?R_Tonemap_ReadExposureInfoFromGpu@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxWrappedBuffer@@@Z(context, viewInfo, exposureInfoConstantBuffer);
}

/*
==============
RB_Tonemap_GetDownsampleMipIndex
==============
*/

unsigned int __fastcall RB_Tonemap_GetDownsampleMipIndex(const GfxViewInfo *viewInfo)
{
  return ?RB_Tonemap_GetDownsampleMipIndex@@YAIPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
R_ShutdownTonemap
==============
*/

void R_ShutdownTonemap(void)
{
  ?R_ShutdownTonemap@@YAXXZ();
}

/*
==============
R_Tonemap_ReadExposureInfoFromGpu
==============
*/

void __fastcall R_Tonemap_ReadExposureInfoFromGpu(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *exposureInfoConstantBuffer)
{
  ?R_Tonemap_ReadExposureInfoFromGpu@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@PEBUGfxWrappedBuffer@@@Z(computeState, viewInfo, exposureInfoConstantBuffer);
}

/*
==============
R_Tonemap_UpdateRadiometricScale
==============
*/

void __fastcall R_Tonemap_UpdateRadiometricScale(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  ?R_Tonemap_UpdateRadiometricScale@@YAXPEBUGfxBackEndData@@PEBUGfxViewInfo@@@Z(data, viewInfo);
}

/*
==============
R_InitTonemap
==============
*/

void R_InitTonemap(void)
{
  ?R_InitTonemap@@YAXXZ();
}

/*
==============
R_Tonemap_GetSceneDownsampleMipForExposureCalculation
==============
*/

unsigned int __fastcall R_Tonemap_GetSceneDownsampleMipForExposureCalculation(unsigned int width, unsigned int height)
{
  return ?R_Tonemap_GetSceneDownsampleMipForExposureCalculation@@YAIII@Z(width, height);
}

/*
==============
RB_Tonemap_Apply
==============
*/

void __fastcall RB_Tonemap_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_Group *activeGroup)
{
  ?RB_Tonemap_Apply@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@PEBUGfxBackEndData@@AEAUR_RT_Group@@@Z(gfxContext, viewInfo, data, activeGroup);
}

/*
==============
R_Tonemap_GetExposureInfo
==============
*/

void __fastcall R_Tonemap_GetExposureInfo(const GfxBackEndData *data, const GfxViewInfo *viewInfo, float *exposure, float *sceneAvgKiloNits, float *sceneAmbientAvgKiloNits, float *imageKey)
{
  ?R_Tonemap_GetExposureInfo@@YAXPEBUGfxBackEndData@@PEBUGfxViewInfo@@PEAM222@Z(data, viewInfo, exposure, sceneAvgKiloNits, sceneAmbientAvgKiloNits, imageKey);
}

/*
==============
R_Tonemap_GetRadiometricScale
==============
*/

void __fastcall R_Tonemap_GetRadiometricScale(const GfxBackEndData *data, const GfxViewInfo *viewInfo, float *outRadiometricScale, float *outPrevFrameRadiometricScale)
{
  ?R_Tonemap_GetRadiometricScale@@YAXPEBUGfxBackEndData@@PEBUGfxViewInfo@@PEAM2@Z(data, viewInfo, outRadiometricScale, outPrevFrameRadiometricScale);
}

/*
==============
R_Tonemap_UpdateExposure
==============
*/

double __fastcall R_Tonemap_UpdateExposure(GfxViewInfo *viewInfo)
{
  double result; 

  *(float *)&result = ?R_Tonemap_UpdateExposure@@YAMPEAUGfxViewInfo@@@Z(viewInfo);
  return result;
}

/*
==============
RB_Tonemap_Apply
==============
*/
void RB_Tonemap_Apply(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_Group *activeGroup)
{
  bool v4; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  const R_RT_Surface *Surface; 
  unsigned int maxSceneRtWidth; 
  unsigned int maxSceneRtHeight; 
  unsigned int SceneDownsampleVeilMip; 
  __int64 v16; 
  unsigned int SceneDownsampleVeilMipCount; 
  unsigned int SceneDownsampleTotalMipCount; 
  const dvar_t *v19; 
  unsigned int v20; 
  bool enabled; 
  __int64 v26; 
  const char *m_location; 
  __int64 v34; 
  TonemapState *v35; 
  const char *v44; 
  const GfxViewInfo *v45; 
  const dvar_t *v49; 
  R_RT_Flags rtFlags; 
  bool v54; 
  GfxBackEndData *v55; 
  GfxCmdBufState *v56; 
  __int64 v64; 
  const char *v71; 
  __int64 v72; 
  TonemapState *v73; 
  const char *v82; 
  unsigned int v84; 
  unsigned int v87; 
  const R_RT_Surface *v88; 
  __int64 v92; 
  const char *v99; 
  __int64 v100; 
  const char *v109; 
  unsigned int v110; 
  const R_RT_Surface *v111; 
  __int64 v115; 
  const char *v122; 
  __int64 v123; 
  const char *v132; 
  const R_RT_Surface *v136; 
  const char *v137; 
  GfxImage *p_m_base; 
  GfxCmdBufSourceState *v139; 
  R_RT_Handle *colorRts; 
  R_RT_Image *p_m_image; 
  bool v142; 
  GfxCmdBufInput *p_input; 
  bool v144; 
  char v151; 
  const R_RT_Surface *v153; 
  const char *v154; 
  GfxImage *blackImage; 
  __int64 v159; 
  const char *name; 
  unsigned int m_allocCounter; 
  const char *v163; 
  R_RT_FlagsInternal rtFlagsInternal; 
  const GfxBackEndData *v165; 
  const dvar_t *v167; 
  int v168; 
  const dvar_t *v169; 
  const dvar_t *v170; 
  int v171; 
  int v172; 
  unsigned int v173; 
  bool v177; 
  unsigned __int16 m_surfaceID; 
  PostAAMode mode; 
  const dvar_t *v182; 
  const dvar_t *v183; 
  const dvar_t *v184; 
  int v185; 
  int v186; 
  bool v190; 
  unsigned int v202; 
  const R_RT_Surface *v203; 
  GfxCmdBufState *v206; 
  unsigned int v207; 
  unsigned int v209; 
  unsigned int v210; 
  const R_RT_Surface *v211; 
  GfxCmdBufSourceState *v219; 
  GfxCmdBufInput *v220; 
  TonemapState *v223; 
  unsigned int mipEnd; 
  unsigned int mipBegin; 
  unsigned int v229; 
  unsigned int v230; 
  unsigned int v232; 
  unsigned int v233; 
  unsigned int fmt; 
  unsigned int fmta; 
  unsigned int depth; 
  R_RT_Handle v237; 
  GfxCmdBufContext *v238; 
  const GfxViewInfo *v239; 
  unsigned int allocHeight; 
  unsigned int allocWidth; 
  unsigned int height; 
  unsigned int width; 
  GfxBackEndData *dataa; 
  R_RT_Handle v245; 
  ID3D12Resource *buffers[2]; 
  TonemapState *v247; 
  R_RT_Handle v248; 
  R_RT_Handle v249; 
  R_RT_Handle v250; 
  R_RT_Handle v252; 
  R_RT_Handle result; 
  R_RT_Handle v254; 
  R_RT_Group v255; 
  ComputeCmdBufState state; 

  v4 = !viewInfo->tonemap.enabled;
  _R15 = activeGroup;
  dataa = (GfxBackEndData *)data;
  v239 = viewInfo;
  v238 = gfxContext;
  if ( !v4 )
  {
    if ( !activeGroup->m_colorRtCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1119, ASSERT_TYPE_ASSERT, "(activeGroup.m_colorRtCount > 0)", (const char *)&queryFormat, "activeGroup.m_colorRtCount > 0") )
      __debugbreak();
    if ( _R15->m_colorRtCount > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1121, ASSERT_TYPE_ASSERT, "(activeGroup.m_colorRtCount <= ( sizeof( *array_counter( s_tonemapColorNames ) ) + 0 ))", (const char *)&queryFormat, "activeGroup.m_colorRtCount <= ARRAY_COUNT( s_tonemapColorNames )") )
      __debugbreak();
    if ( _R15->m_colorRtCount > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1122, ASSERT_TYPE_ASSERT, "(activeGroup.m_colorRtCount <= ( sizeof( *array_counter( s_tonemapLumaNames ) ) + 0 ))", (const char *)&queryFormat, "activeGroup.m_colorRtCount <= ARRAY_COUNT( s_tonemapLumaNames )") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [r15+8]
      vmovups ymmword ptr [rbp+0CA0h+var_C50.m_surfaceID], ymm0
      vmovups ymmword ptr [rbp+0CA0h+var_C70.m_surfaceID], ymm0
    }
    v9 = R_RT_Handle::GetSurface(&v249)->m_image.m_base.height;
    v10 = R_RT_Handle::GetSurface(&v249)->m_image.m_base.width;
    v11 = 0;
    while ( v10 > 0xA0 || v9 > 0x5A )
    {
      ++v11;
      v10 >>= 1;
      v9 >>= 1;
    }
    if ( v11 )
    {
      Sys_ProfBeginNamedEvent(0xFFFF7F50, "Tone Mapping");
      R_ProfBeginNamedEvent(gfxContext->state, "Tone Mapping");
      R_GPU_BeginTimer(GPU_TIMER_TONEMAP);
      v247 = &s_tonemapStateArray[viewInfo->viewInfoIndex];
      v247->downsampleMipIndex = v11;
      width = R_RT_Handle::GetSurface(&v249)->m_image.m_base.width;
      height = R_RT_Handle::GetSurface(&v249)->m_image.m_base.height;
      allocWidth = R_RT_Handle::GetSurface(&v249)->m_allocWidth;
      Surface = R_RT_Handle::GetSurface(&v249);
      maxSceneRtWidth = viewInfo->sceneRtInput.maxSceneRtWidth;
      maxSceneRtHeight = viewInfo->sceneRtInput.maxSceneRtHeight;
      allocHeight = Surface->m_allocHeight;
      SceneDownsampleVeilMip = R_Perceptual_GetSceneDownsampleVeilMip(v11);
      v16 = SceneDownsampleVeilMip;
      SceneDownsampleVeilMipCount = R_Perceptual_GetSceneDownsampleVeilMipCount(maxSceneRtWidth, maxSceneRtHeight, SceneDownsampleVeilMip);
      SceneDownsampleTotalMipCount = R_Perceptual_GetSceneDownsampleTotalMipCount(v11, v16, SceneDownsampleVeilMipCount);
      v19 = DCONST_DVARBOOL_r_veilTonemap;
      v20 = SceneDownsampleTotalMipCount;
      if ( !DCONST_DVARBOOL_r_veilTonemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilTonemap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      _RAX = v238;
      enabled = v19->current.enabled;
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
      }
      _RAX = RB_Perceptual_CommitMipChain((RB_Perceptual_MipChain *)&state, (GfxCmdBufContext *)&v237, 1u, v20, maxSceneRtWidth, maxSceneRtHeight, GFX_RENDERTARGET_FORMAT_SCENE_MIP, (const char *const (*)[9])s_tonemapSceneMipNames);
      _RCX = &v255;
      v26 = 2i64;
      do
      {
        _RCX = (R_RT_Group *)((char *)_RCX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (RB_Perceptual_MipChain *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v26;
      }
      while ( v26 );
      __asm { vmovups ymm0, ymmword ptr [rax] }
      m_location = _RAX->colorRts[0].m_tracking.m_location;
      v34 = 2i64;
      v35 = v247;
      __asm { vmovups ymmword ptr [rcx], ymm0 }
      _RCX->m_colorRts[0].m_tracking.m_location = m_location;
      _RAX = &v255;
      *(_QWORD *)&v237.m_surfaceID = &v35->sceneMipChain;
      _RCX = &v35->sceneMipChain;
      do
      {
        _RCX = (RB_Perceptual_MipChain *)((char *)_RCX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (R_RT_Group *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v34;
      }
      while ( v34 );
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v44 = _RAX->m_colorRts[0].m_tracking.m_location;
      v45 = v239;
      __asm
      {
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rbp+0CA0h+var_C50.m_surfaceID]
      }
      _RCX->colorRts[0].m_tracking.m_location = v44;
      _RAX = v238;
      __asm
      {
        vmovups ymmword ptr [rbp+0CA0h+var_C50.m_surfaceID], ymm0
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rbp+0CA0h+buffers], xmm0
      }
      RB_Perceptual_DownsampleScene((GfxCmdBufContext *)buffers, &v35->sceneMipChain, v45, (R_RT_ColorHandle *)&v250, (VeilTonemapMode)enabled, v16);
      if ( Dvar_GetBool_Internal(r_deviceDebug) )
        goto LABEL_29;
      v49 = DCONST_DVARBOOL_r_esramPostFX;
      if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
      if ( !v49->current.enabled )
LABEL_29:
        rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
      _RAX = R_RT_CreateInternal(&result, maxSceneRtWidth >> v35->downsampleMipIndex, maxSceneRtHeight >> v35->downsampleMipIndex, maxSceneRtWidth >> v35->downsampleMipIndex, maxSceneRtHeight >> v35->downsampleMipIndex, 1u, 1u, 1u, g_R_RT_renderTargetFmts[20], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Local Luma", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1158)");
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovd   eax, xmm0
        vmovups ymmword ptr [rbp+0CA0h+var_C70.m_surfaceID], ymm0
        vmovups ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID], ymm0
      }
      if ( (_WORD)_RAX )
      {
        R_RT_Handle::GetSurface(&v245);
        if ( (R_RT_Handle::GetSurface(&v245)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID]
            vmovups ymmword ptr [rbp+0CA0h+var_C70.m_surfaceID], ymm0
          }
          __debugbreak();
        }
        else
        {
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID]
            vmovups ymmword ptr [rbp+0CA0h+var_C70.m_surfaceID], ymm0
          }
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v54 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          __asm { vmovups ymm0, ymmword ptr [rbp+0CA0h+var_C70.m_surfaceID] }
          if ( v54 )
            __debugbreak();
        }
      }
      v55 = dataa;
      __asm { vmovups ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID], ymm0 }
      R_InitComputeCmdBufState(&state, dataa, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
      buffers[0] = v55->globalSceneConstantBuffer->buffer;
      R_SetComputeConstantBuffers(&state, 7, 1, buffers);
      v56 = v238->state;
      R_ComputeWaitForGraphics(&state, v56);
      __asm { vmovups ymm0, ymmword ptr [rbp+0CA0h+var_C70.m_surfaceID] }
      _RAX = v238;
      __asm
      {
        vmovups ymmword ptr [rbp+0CA0h+var_C50.m_surfaceID], ymm0
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rbp+0CA0h+buffers], xmm0
      }
      RB_Tonemap_CalculateCurve((GfxCmdBufContext *)buffers, &state, *(const RB_Perceptual_MipChain **)&v237.m_surfaceID, (const R_RT_ColorHandle *)&v250, v239);
      R_ShutdownComputeCmdBufState(&state);
      if ( (_DWORD)v16 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1172, ASSERT_TYPE_ASSERT, "(veilMipIndex > 0)", (const char *)&queryFormat, "veilMipIndex > 0") )
      {
        _RAX = v238;
      }
      else
      {
        __debugbreak();
        _RAX = v238;
        v56 = v238->state;
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
      }
      _RAX = RB_Perceptual_CommitMipChain((RB_Perceptual_MipChain *)&state, (GfxCmdBufContext *)&v237, v16, SceneDownsampleVeilMipCount - 1, maxSceneRtWidth, maxSceneRtHeight, GFX_RENDERTARGET_FORMAT_SCENE_MIP, (const char *const (*)[9])s_tonemapVeilMipNames);
      _RCX = &v255;
      v64 = 2i64;
      do
      {
        _RCX = (R_RT_Group *)((char *)_RCX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (RB_Perceptual_MipChain *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v64;
      }
      while ( v64 );
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v71 = _RAX->colorRts[0].m_tracking.m_location;
      v72 = 2i64;
      v73 = v247;
      __asm { vmovups ymmword ptr [rcx], ymm0 }
      _RCX->m_colorRts[0].m_tracking.m_location = v71;
      _RAX = &v255;
      _RCX = &v73->veilMipChain;
      do
      {
        _RCX = (RB_Perceptual_MipChain *)((char *)_RCX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (R_RT_Group *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v72;
      }
      while ( v72 );
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v82 = _RAX->m_colorRts[0].m_tracking.m_location;
      __asm { vmovups ymmword ptr [rcx], ymm0 }
      _RCX->colorRts[0].m_tracking.m_location = v82;
      R_Perceptual_UpdateVeilWeights(v239->thermalParams.useNightAndThermalVisionCombo);
      _R14 = (__int64)v238;
      v84 = SceneDownsampleVeilMipCount;
      _R13 = v239;
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
      }
      RB_Perceptual_UpsampleScene((GfxCmdBufContext *)&v237, v239, v16, v84, &v73->sceneMipChain, &v73->veilMipChain, s_veilWeights);
      R_WaitAsyncCompute(v56, v55, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND, 0);
      R_Perceptual_UpdateLocalTonemapWeights();
      v87 = R_RT_Handle::GetSurface(&v245)->m_image.m_base.height;
      v88 = R_RT_Handle::GetSurface(&v245);
      __asm { vmovups xmm0, xmmword ptr [r14] }
      fmt = v88->m_image.m_base.width;
      __asm { vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0 }
      _RAX = RB_Perceptual_CommitMipChain((RB_Perceptual_MipChain *)&state, (GfxCmdBufContext *)&v237, 0, 4u, fmt, v87, GFX_RENDERTARGET_FORMAT_HALF_FLOATZ, (const char *const (*)[9])s_tonemapLocalMipNames);
      _RCX = &v255;
      v92 = 2i64;
      do
      {
        _RCX = (R_RT_Group *)((char *)_RCX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (RB_Perceptual_MipChain *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v92;
      }
      while ( v92 );
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v99 = _RAX->colorRts[0].m_tracking.m_location;
      __asm { vmovups ymmword ptr [rcx], ymm0 }
      _RCX->m_colorRts[0].m_tracking.m_location = v99;
      v100 = 2i64;
      _RCX = &v73->localLumaMipChain;
      _RAX = &v255;
      do
      {
        _RCX = (RB_Perceptual_MipChain *)((char *)_RCX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (R_RT_Group *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v100;
      }
      while ( v100 );
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v109 = _RAX->m_colorRts[0].m_tracking.m_location;
      __asm { vmovups ymmword ptr [rcx], ymm0 }
      _RCX->colorRts[0].m_tracking.m_location = v109;
      v110 = R_RT_Handle::GetSurface(&v245)->m_image.m_base.height;
      v111 = R_RT_Handle::GetSurface(&v245);
      __asm { vmovups xmm0, xmmword ptr [r14] }
      fmta = v111->m_image.m_base.width;
      __asm { vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0 }
      _RAX = RB_Perceptual_CommitMipChain((RB_Perceptual_MipChain *)&state, (GfxCmdBufContext *)&v237, 0, 3u, fmta, v110, GFX_RENDERTARGET_FORMAT_HALF_FLOATZ, (const char *const (*)[9])s_tonemapLocalFilterMipNames);
      _RCX = &v255;
      v115 = 2i64;
      do
      {
        _RCX = (R_RT_Group *)((char *)_RCX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (RB_Perceptual_MipChain *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v115;
      }
      while ( v115 );
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v122 = _RAX->colorRts[0].m_tracking.m_location;
      __asm { vmovups ymmword ptr [rcx], ymm0 }
      _RCX->m_colorRts[0].m_tracking.m_location = v122;
      v123 = 2i64;
      _RCX = &v73->filteredLocalLumaMipChain;
      _RAX = &v255;
      do
      {
        _RCX = (RB_Perceptual_MipChain *)((char *)_RCX + 128);
        __asm
        {
          vmovups ymm0, ymmword ptr [rax]
          vmovups xmm1, xmmword ptr [rax+70h]
        }
        _RAX = (R_RT_Group *)((char *)_RAX + 128);
        __asm
        {
          vmovups ymmword ptr [rcx-80h], ymm0
          vmovups ymm0, ymmword ptr [rax-60h]
          vmovups ymmword ptr [rcx-60h], ymm0
          vmovups ymm0, ymmword ptr [rax-40h]
          vmovups ymmword ptr [rcx-40h], ymm0
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v123;
      }
      while ( v123 );
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v132 = _RAX->m_colorRts[0].m_tracking.m_location;
      __asm
      {
        vmovups ymmword ptr [rcx], ymm0
        vmovups ymm0, ymmword ptr [rbp+0CA0h+var_C70.m_surfaceID]
      }
      _RCX->colorRts[0].m_tracking.m_location = v132;
      depth = v73->localLumaMipChain.mipEnd;
      __asm
      {
        vmovups ymmword ptr [rbp+0CA0h+var_C50.m_surfaceID], ymm0
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
      }
      RB_Perceptual_DownsampleScene((GfxCmdBufContext *)&v237, &v73->localLumaMipChain, _R13, (R_RT_ColorHandle *)&v250, R_VEIL_TONEMAP_DISABLED, depth);
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
      }
      RB_Perceptual_UpsampleScene((GfxCmdBufContext *)&v237, _R13, 0, 4u, &v73->localLumaMipChain, &v73->filteredLocalLumaMipChain, s_localTonemapWeights);
      if ( _R13->perceptual.veilEnabled )
      {
        if ( !(_DWORD)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1190, ASSERT_TYPE_ASSERT, "(veilMipIndex > 0)", (const char *)&queryFormat, "veilMipIndex > 0") )
          __debugbreak();
        v136 = R_RT_Handle::GetSurface(&v73->veilMipChain.colorRts[v16]);
        v137 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1191)";
        p_m_base = &v136->m_image.m_base;
      }
      else
      {
        p_m_base = rgp.blackImage;
        v137 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1195)";
      }
      v139 = *(GfxCmdBufSourceState **)_R14;
      R_SetCodeImageTextureInternal(*(GfxCmdBufSourceState **)_R14, 0x15u, p_m_base, v137);
      colorRts = v73->filteredLocalLumaMipChain.colorRts;
      p_m_image = &R_RT_Handle::GetSurface(v73->filteredLocalLumaMipChain.colorRts)->m_image;
      if ( !v139 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      v142 = __CFADD__(v139, 1792i64);
      p_input = &v139->input;
      if ( !p_input )
      {
        v144 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input");
        v142 = 0;
        if ( v144 )
          __debugbreak();
      }
      __asm { vmovss  xmm0, cs:__real@3f800000 }
      p_input->codeImages[22] = &p_m_image->m_base;
      __asm
      {
        vmovss  xmm1, dword ptr [r13+3860h]
        vmovss  xmm3, dword ptr [r13+3840h]
      }
      _RBX = *(GfxCmdBufSourceState **)_R14;
      __asm
      {
        vmovss  xmm2, dword ptr [r13+3844h]
        vmovss  dword ptr [rbx+0EC0h], xmm1
        vsubss  xmm1, xmm0, xmm1
        vmovss  dword ptr [rbx+0EC4h], xmm1
        vmovss  dword ptr [rbx+0EC8h], xmm3
        vmovss  dword ptr [rbx+0ECCh], xmm2
      }
      v151 = v142 | (_RBX->constVersions[124]++ == 0xFFFF);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm3, xmm0
      }
      if ( v151 )
      {
        blackImage = rgp.blackImage;
        v154 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1211)";
      }
      else
      {
        v153 = R_RT_Handle::GetSurface(colorRts);
        v154 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1207)";
        blackImage = &v153->m_image.m_base;
      }
      R_SetCodeImageTextureInternal(_RBX, 0x16u, blackImage, v154);
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
      }
      RB_SetupUIWhiteBalanceParams((GfxCmdBufContext *)&v237, _R13);
      __asm
      {
        vmovups ymm0, ymmword ptr [r15+8]
        vmovups xmm1, xmmword ptr [r14]
        vmovups ymmword ptr [rbp+0CA0h+var_C50.m_surfaceID], ymm0
        vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm1
      }
      R_Screenshot_HdrExposedScene((GfxCmdBufContext *)&v237, _R13, dataa, (R_RT_ColorHandle *)&v250);
      v159 = _R15->m_colorRtCount - 1i64;
      dataa = (GfxBackEndData *)v159;
      if ( v159 >= 0 )
      {
        _RDI = (ID3D12Resource *)&_R15->m_colorRts[v159];
        buffers[0] = _RDI;
        do
        {
          name = "Tonemap Color";
          m_allocCounter = 0;
          v163 = "Tonemap Luma";
          rtFlagsInternal = R_RT_FlagInternal_None;
          if ( R_PostAAHasTemporalSupersampling(_R13->postAA.mode) )
          {
            v165 = _R13->input.data;
            rtFlagsInternal = 2;
            name = s_tonemapColorNames[v165->frameIndex & 1];
            v163 = s_tonemapLumaNames[v159][v165->frameCount & 3];
          }
          __asm { vmovups ymm0, ymmword ptr [rdi] }
          v167 = DCONST_DVARINT_r_dccPostFX;
          __asm
          {
            vmovups ymmword ptr [rbp+0CA0h+result.m_surfaceID], ymm0
            vmovups ymmword ptr [rbp+0CA0h+var_BD0.m_surfaceID], ymm0
          }
          if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v167);
          v168 = 0;
          if ( v167->current.integer == 1 )
            v168 = 8;
          v169 = r_deviceDebug;
          if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v169);
          if ( v169->current.enabled )
            goto LABEL_86;
          v170 = DCONST_DVARBOOL_r_esramPostFX;
          if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v170);
          v171 = 6208;
          if ( !v170->current.enabled )
LABEL_86:
            v171 = 6144;
          v172 = v168 | v171;
          v173 = 0;
          _RAX = R_RT_CreateInternal(&v252, width, height, allocWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)v172, rtFlagsInternal, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, name, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1241)");
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovd   eax, xmm0
            vmovups [rbp+0CA0h+var_C30], ymm0
            vmovups ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID], ymm0
          }
          if ( (_WORD)_RAX )
          {
            R_RT_Handle::GetSurface(&v245);
            if ( (R_RT_Handle::GetSurface(&v245)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
            {
              __asm
              {
                vmovups ymm0, ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID]
                vmovups [rbp+0CA0h+var_C30], ymm0
              }
              __debugbreak();
            }
            else
            {
              __asm
              {
                vmovups ymm0, ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID]
                vmovups [rbp+0CA0h+var_C30], ymm0
              }
            }
          }
          else
          {
            __asm { vpextrd rax, xmm0, 2 }
            if ( (_DWORD)_RAX )
            {
              v177 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
              __asm { vmovups ymm0, [rbp+0CA0h+var_C30] }
              if ( v177 )
                __debugbreak();
            }
          }
          _RSI = v239;
          m_surfaceID = 0;
          __asm
          {
            vmovups ymmword ptr [rbp+0CA0h+var_C50.m_surfaceID], ymm0
            vpxor   xmm0, xmm0, xmm0
          }
          v248.m_surfaceID = 0;
          mode = v239->postAA.mode;
          v248.m_tracking.m_allocCounter = 0;
          __asm { vmovdqu xmmword ptr [rbp+0CA0h+var_C90.m_tracking.m_name], xmm0 }
          if ( R_PostAAIsSMAA(mode) )
          {
            v182 = DCONST_DVARINT_r_dccPostFX;
            if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v182);
            if ( v182->current.integer == 1 )
              v173 = 8;
            v183 = r_deviceDebug;
            if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v183);
            if ( v183->current.enabled )
              goto LABEL_109;
            v184 = DCONST_DVARBOOL_r_esramPostFX;
            if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v184);
            v185 = 6208;
            if ( !v184->current.enabled )
LABEL_109:
              v185 = 6144;
            v186 = v173 | v185;
            v173 = 0;
            _RAX = R_RT_CreateInternal(&v252, width, height, allocWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[36], (R_RT_Flags)v186, rtFlagsInternal, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v163, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1247)");
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovd   eax, xmm0
              vmovups ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID], ymm0
              vmovups ymmword ptr [rbp+0CA0h+var_C90.m_surfaceID], ymm0
            }
            if ( (_WORD)_RAX )
            {
              R_RT_Handle::GetSurface(&v248);
              if ( (R_RT_Handle::GetSurface(&v248)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbp+0CA0h+var_C90.m_surfaceID]
                  vmovups ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID], ymm0
                }
                __debugbreak();
              }
              else
              {
                __asm
                {
                  vmovups ymm0, ymmword ptr [rbp+0CA0h+var_C90.m_surfaceID]
                  vmovups ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID], ymm0
                }
              }
            }
            else
            {
              __asm { vpextrd rax, xmm0, 2 }
              if ( (_DWORD)_RAX )
              {
                v190 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
                __asm { vmovups ymm0, ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID] }
                if ( v190 )
                  __debugbreak();
              }
            }
            _RAX = 32i64 * _RSI->sceneRtInput.m_lumaGroup.m_colorRtCount;
            __asm { vmovups ymmword ptr [rbp+0CA0h+var_C90.m_surfaceID], ymm0 }
            m_allocCounter = v248.m_tracking.m_allocCounter;
            m_surfaceID = v248.m_surfaceID;
            __asm { vmovups ymmword ptr [rax+rsi+3690h], ymm0 }
            ++_RSI->sceneRtInput.m_lumaGroup.m_colorRtCount;
          }
          else
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+0CA0h+var_C90.m_surfaceID]
              vmovups ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID], ymm0
            }
          }
          __asm
          {
            vmovups ymm1, [rbp+0CA0h+var_C30]
            vmovups [rbp+0CA0h+var_70], ymm0
          }
          v237.m_surfaceID = 0;
          v237.m_tracking.m_allocCounter = 0;
          __asm
          {
            vpxor   xmm0, xmm0, xmm0
            vmovdqu xmmword ptr [rbp+0CA0h+var_D20.m_tracking.m_name], xmm0
            vmovups [rbp+0CA0h+var_90], ymm1
          }
          if ( m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v248);
          }
          else if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          {
            __debugbreak();
          }
          v255.m_colorRtCount = (m_surfaceID != 0) + 1;
          do
          {
            _RBX = 32i64 * v173;
            __asm
            {
              vmovups ymm0, [rbp+rbx+0CA0h+var_90]
              vmovd   eax, xmm0
              vmovups ymmword ptr [rbp+0CA0h+var_C10.m_surfaceID], ymm0
            }
            if ( (_WORD)_EAX )
            {
              R_RT_Handle::GetSurface(&v252);
            }
            else
            {
              __asm { vpextrd rax, xmm0, 2 }
              if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
                __debugbreak();
            }
            __asm { vmovups ymm0, [rbp+rbx+0CA0h+var_90] }
            ++v173;
            __asm { vmovups ymmword ptr [rbp+rbx+0CA0h+var_BB0.m_colorRts.baseclass_0.m_surfaceID], ymm0 }
          }
          while ( v173 != (m_surfaceID != 0) + 1 );
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+0CA0h+var_D20.m_surfaceID]
            vmovups ymmword ptr [rbp+0CA0h+var_BB0.m_depthRt.baseclass_0.m_surfaceID], ymm0
          }
          _RAX = R_RT_Group::GetValidRt(&v255, &v252);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups ymmword ptr [rbp+0CA0h+var_D20.m_surfaceID], ymm0
          }
          v202 = R_RT_Handle::GetSurface(&v237)->m_image.m_base.height;
          v203 = R_RT_Handle::GetSurface(&v237);
          _R14 = (__int64)v238;
          R_SetRenderTargetSize(v238->source, v203->m_image.m_base.width, v202, GFX_USE_VIEWPORT_FOR_VIEW);
          __asm
          {
            vmovups xmm0, xmmword ptr [r14]
            vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
          }
          R_SetRenderTargetsInternal((GfxCmdBufContext *)&v237, &v255, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1257)");
          __asm { vmovups ymm0, [rbp+0CA0h+var_C30] }
          v206 = *(GfxCmdBufState **)(_R14 + 8);
          __asm { vmovups ymmword ptr [rbp+0CA0h+var_C10.m_surfaceID], ymm0 }
          R_AddRenderTargetTransition(v206, (R_RT_ColorHandle *)&v252, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          v207 = v248.m_tracking.m_allocCounter;
          if ( m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v248);
          }
          else if ( v248.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          {
            __debugbreak();
          }
          if ( m_surfaceID )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID]
              vmovups ymmword ptr [rbp+0CA0h+var_C10.m_surfaceID], ymm0
            }
            R_AddRenderTargetTransition(v206, (R_RT_ColorHandle *)&v252, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          R_FlushResourceTransitions(v206);
          v209 = R_RT_Handle::GetSurface(&v250)->m_image.m_base.height;
          v210 = R_RT_Handle::GetSurface(&v250)->m_image.m_base.width;
          v211 = R_RT_Handle::GetSurface(&v254);
          __asm
          {
            vmovups xmm0, xmmword ptr [r14]
            vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
          }
          R_Tonemap_Filter((GfxCmdBufContext *)&v237, v239, &v211->m_image.m_base, v210, v209);
          __asm
          {
            vmovups ymm0, [rbp+0CA0h+var_C30]
            vmovups ymmword ptr [rbp+0CA0h+var_BD0.m_surfaceID], ymm0
          }
          R_AddRenderTargetTransition(v206, (R_RT_ColorHandle *)&v254, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          if ( m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v248);
          }
          else if ( v207 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          {
            __debugbreak();
            v206 = *(GfxCmdBufState **)(_R14 + 8);
          }
          if ( m_surfaceID )
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rbp+0CA0h+var_CD0.m_surfaceID]
              vmovups ymmword ptr [rbp+0CA0h+var_BD0.m_surfaceID], ymm0
            }
            R_AddRenderTargetTransition(v206, (R_RT_ColorHandle *)&v254, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          R_FlushResourceTransitions(v206);
          __asm
          {
            vmovups ymm0, ymmword ptr [rbp+0CA0h+result.m_surfaceID]
            vmovups ymmword ptr [rbp+0CA0h+result.m_surfaceID], ymm0
            vmovups xmm0, xmmword ptr [r14]
            vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
          }
          R_RT_Destroy((GfxCmdBufContext *)&v237, (R_RT_ColorHandle *)&result);
          __asm
          {
            vmovups xmm0, xmmword ptr [r14]
            vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
          }
          R_UnbindRenderTarget((GfxCmdBufContext *)&v237);
          _RDI = buffers[0];
          __asm { vmovups ymm0, [rbp+0CA0h+var_C30] }
          _R13 = v239;
          v159 = (__int64)&dataa[-1].rttContext + 559;
          __asm { vmovups ymmword ptr [rdi], ymm0 }
          _RDI = _RDI - 2;
          dataa = (GfxBackEndData *)v159;
          buffers[0] = _RDI;
        }
        while ( v159 >= 0 );
      }
      v219 = *(GfxCmdBufSourceState **)_R14;
      if ( !*(_QWORD *)_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      v220 = &v219->input;
      if ( !v220 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+0CA0h+var_C70.m_surfaceID]
        vmovups ymmword ptr [rbp+0CA0h+result.m_surfaceID], ymm0
        vmovups xmm0, xmmword ptr [r14]
      }
      v220->codeImages[21] = NULL;
      __asm { vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0 }
      R_RT_Destroy((GfxCmdBufContext *)&v237, (R_RT_ColorHandle *)&result);
      v223 = v247;
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0
      }
      RB_Perceptual_DecommitMipChain((GfxCmdBufContext *)&v237, &v247->localLumaMipChain, v247->localLumaMipChain.mipBegin, v247->localLumaMipChain.mipEnd);
      __asm { vmovups xmm0, xmmword ptr [r14] }
      mipEnd = v223->filteredLocalLumaMipChain.mipEnd;
      mipBegin = v223->filteredLocalLumaMipChain.mipBegin;
      __asm { vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0 }
      RB_Perceptual_DecommitMipChain((GfxCmdBufContext *)&v237, &v223->filteredLocalLumaMipChain, mipBegin, mipEnd);
      __asm { vmovups xmm0, xmmword ptr [r14] }
      v229 = v223->veilMipChain.mipEnd;
      v230 = v223->veilMipChain.mipBegin;
      __asm { vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0 }
      RB_Perceptual_DecommitMipChain((GfxCmdBufContext *)&v237, &v223->veilMipChain, v230, v229);
      __asm { vmovups xmm0, xmmword ptr [r14] }
      v232 = v223->sceneMipChain.mipEnd;
      v233 = v223->sceneMipChain.mipBegin;
      __asm { vmovups xmmword ptr [rbp+0CA0h+var_D20.m_surfaceID], xmm0 }
      RB_Perceptual_DecommitMipChain((GfxCmdBufContext *)&v237, &v223->sceneMipChain, v233, v232);
      R_GPU_EndTimer();
      R_ProfEndNamedEvent(*(CmdBufState **)(_R14 + 8));
      Sys_ProfEndNamedEvent();
    }
    else
    {
      R_WarnOncePerFrame(R_WARN_FB_TOO_SMALL_FOR_TONEMAP);
    }
  }
}

/*
==============
RB_Tonemap_CalculateCurve
==============
*/
void RB_Tonemap_CalculateCurve(GfxCmdBufContext *gfxContext, ComputeCmdBufState *computeState, const RB_Perceptual_MipChain *sceneMipChain, const R_RT_ColorHandle *localLuma, const GfxViewInfo *viewInfo)
{
  char *Value; 
  unsigned int *v9; 
  unsigned int v10; 
  _QWORD *v11; 
  char *v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  ThreadContext CurrentThreadContext; 
  __int64 viewInfoIndex; 
  __int64 downsampleMipIndex; 
  GfxWrappedRWBuffer *p_exposureInfoStructuredBuffer; 
  __int64 clientIndex; 
  TonemapState *v28; 
  __int64 tonemapExposureInfoIndex; 
  _DWORD *p_unusedfilmicCrossover; 
  __int64 flag; 
  __int64 flaga; 
  __int64 v33; 
  __int64 v34; 
  R_RT_Handle v35; 
  R_RT_ColorHandle v36; 
  R_RT_ColorHandle v37; 
  R_RT_Handle v38; 

  _R14 = localLuma;
  _R15 = sceneMipChain;
  Value = (char *)Sys_GetValue(0);
  v9 = (unsigned int *)(Value + 6296);
  if ( (unsigned int)(*((_DWORD *)Value + 1574) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1574) + 1, 3) )
    __debugbreak();
  v10 = *v9 + 1;
  *v9 = v10;
  if ( v10 >= 3 )
  {
    LODWORD(v33) = 3;
    LODWORD(flag) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", flag, v33) )
      __debugbreak();
  }
  v11 = Value + 2088;
  v12 = Value + 40;
  if ( *v11 < (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v11 += 8i64;
  if ( *v11 >= (unsigned __int64)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v11 = v9;
  if ( *v11 <= (unsigned __int64)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v13 = (int)*v9;
  v14 = __rdtsc();
  v9[v13 + 2] = v14;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 105, NULL, 0);
  Sys_ProfBeginNamedEvent(0xFF191970, "RB_Tonemap_CalculateCurve");
  R_ProfBeginNamedEvent(computeState, "RB_Tonemap_CalculateCurve");
  _RDI = viewInfo;
  viewInfoIndex = viewInfo->viewInfoIndex;
  downsampleMipIndex = s_tonemapStateArray[viewInfoIndex].downsampleMipIndex;
  if ( !(_DWORD)downsampleMipIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 763, ASSERT_TYPE_ASSERT, "(downsampleMipIndex > 0)", (const char *)&queryFormat, "downsampleMipIndex > 0") )
    __debugbreak();
  p_exposureInfoStructuredBuffer = &s_tonemapStateArray[viewInfoIndex].exposureInfoStructuredBuffer;
  _RAX = 32 * downsampleMipIndex;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+r15+8]
    vmovups [rsp+0F8h+var_88], ymm0
  }
  R_HW_AddResourceTransition(computeState, p_exposureInfoStructuredBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups [rsp+0F8h+var_A8], ymm0
  }
  R_HW_AddResourceTransition(computeState, &v35, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  __asm
  {
    vmovups ymm1, ymmword ptr [r14]
    vmovups ymm0, ymmword ptr [rdi+3340h]
    vmovups [rsp+0F8h+var_68], ymm1
    vmovups [rsp+0F8h+var_48], ymm1
    vmovups ymm1, [rsp+0F8h+var_88]
    vmovups [rsp+0F8h+var_A8], ymm0
    vmovups [rsp+0F8h+var_88], ymm1
  }
  R_Tonemap_CalculateExposureCS(computeState, viewInfo, &v36, (const R_RT_ColorHandle *)&v38, &v37, (const R_RT_ColorHandle *)&v35, rgp.blackImage, p_exposureInfoStructuredBuffer, 1);
  R_HW_AddResourceTransition(computeState, p_exposureInfoStructuredBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  __asm
  {
    vmovups ymm0, ymmword ptr [r14]
    vmovups [rsp+0F8h+var_48], ymm0
  }
  R_HW_AddResourceTransition(computeState, &v38, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  clientIndex = viewInfo->clientIndex;
  if ( (unsigned int)clientIndex >= gfxCfg.maxClientRenderViews )
  {
    LODWORD(v34) = gfxCfg.maxClientRenderViews;
    LODWORD(flaga) = viewInfo->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 684, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( gfxCfg.maxClientRenderViews )", "client doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", flaga, v34) )
      __debugbreak();
  }
  v28 = &s_tonemapStateArray[clientIndex];
  tonemapExposureInfoIndex = viewInfo->input.data->tonemapExposureInfoIndex;
  p_unusedfilmicCrossover = (_DWORD *)&v28->exposureInfo->unusedfilmicCrossover;
  v28->readbackInfo[tonemapExposureInfoIndex].exposure = (float)p_unusedfilmicCrossover[13];
  v28->readbackInfo[tonemapExposureInfoIndex].sceneExposure = (float)p_unusedfilmicCrossover[15];
  v28->readbackInfo[tonemapExposureInfoIndex].sceneAvgKiloNits = (float)p_unusedfilmicCrossover[3];
  v28->readbackInfo[tonemapExposureInfoIndex].sceneAmbientAvgKiloNits = (float)p_unusedfilmicCrossover[16];
  v28->readbackInfo[tonemapExposureInfoIndex].imageKey = (float)p_unusedfilmicCrossover[2];
  v28->readbackInfo[tonemapExposureInfoIndex].exposureAndRadiometricScale = (float)p_unusedfilmicCrossover[14];
  R_ProfEndNamedEvent(computeState);
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
RB_Tonemap_GetDownsampleMipIndex
==============
*/
__int64 RB_Tonemap_GetDownsampleMipIndex(const GfxViewInfo *viewInfo)
{
  int viewInfoIndex; 
  int v4; 

  if ( viewInfo->viewInfoIndex >= 2u )
  {
    v4 = 2;
    viewInfoIndex = viewInfo->viewInfoIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 841, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->viewInfoIndex ) < (unsigned)( 2 )", "viewInfo->viewInfoIndex doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", viewInfoIndex, v4) )
      __debugbreak();
  }
  return s_tonemapStateArray[viewInfo->viewInfoIndex].downsampleMipIndex;
}

/*
==============
RB_Tonemap_RegisterDvars
==============
*/
void RB_Tonemap_RegisterDvars()
{
  const dvar_t *v7; 
  const dvar_t *v13; 
  const dvar_t *v30; 
  const dvar_t *v34; 
  const dvar_t *v38; 
  const dvar_t *v42; 
  const dvar_t *v46; 
  const dvar_t *v54; 
  const dvar_t *v61; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float descriptionc; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 

  __asm
  {
    vmovaps [rsp+88h+var_18], xmm7
    vmovaps [rsp+88h+var_28], xmm9
    vmovaps [rsp+88h+var_38], xmm10
  }
  Dvar_BeginPermanentRegistration();
  DVARBOOL_r_tonemapUseTweaks = Dvar_RegisterBool("LTPMPPQQKK", 0, 0x44u, "Override tone map LightSet settings with tweak dvar values.");
  DVARBOOL_r_tonemap = Dvar_RegisterBool("MQNOKQQTSO", 1, 0x44u, "Tonemap disable");
  DVARBOOL_r_tonemapAuto = Dvar_RegisterBool("LSRSRKPLSR", 0, 0x44u, "HDR Tonemapping performs auto-exposure");
  DVARBOOL_r_tonemapBlend = Dvar_RegisterBool("PSKPSLTQL", 1, 0x44u, "HDR Tonemapping blends between exposures");
  __asm
  {
    vmovss  xmm7, cs:__real@c1200000
    vmovss  xmm3, cs:__real@42000000; max
    vmovss  xmm1, cs:__real@41200000; value
  }
  DVARBOOL_r_tonemapAdaptOnPause = Dvar_RegisterBool("NKQNRTNOTL", 0, 0x44u, "Keep exposure adaption going even while paused");
  __asm { vmovaps xmm2, xmm7; min }
  v7 = Dvar_RegisterFloat("QONSKKTRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "HDR Tonemap exposure (in EV) override (only works in non-auto mode)");
  __asm
  {
    vmovss  xmm10, cs:__real@41a00000
    vmovss  xmm2, cs:__real@c1a00000; min
  }
  DVARFLT_r_tonemapExposure = v7;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm1, xmm1, xmm1; value
    vxorps  xmm9, xmm9, xmm9
  }
  v13 = Dvar_RegisterFloat("PSKPQRRQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "HDR Tonemap exposure adjustment (in EV, 0 is no adjustment, works like a camera where +1 reduces EV by 1)");
  __asm { vmovss  xmm3, cs:__real@42000000; max }
  DVARFLT_r_tonemapExposureAdjust = v13;
  __asm
  {
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm7; value
  }
  DCONST_DVARFLT_r_tonemapMaxExposure = Dvar_RegisterFloat("r_tonemapMaxExposure", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "HDR Tonemap maximum exposure (in EV)");
  __asm { vmovss  xmm2, cs:__real@c1a00000; min }
  DCONST_DVARBOOL_r_tonemapLockAutoExposureAdjust = Dvar_RegisterBool("r_tonemapLockAutoExposureAdjust", 1, 0x40004u, "HDR Tonemapping lock auto exposure adjust");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_r_tonemapAutoExposureAdjust = Dvar_RegisterFloat("r_tonemapAutoExposureAdjust", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "HDR Tonemap Auto Exposure Adjust value (set to 0.0 for automatic adjustment)");
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovss  xmm2, cs:__real@38d1b717; min
    vmovss  xmm1, cs:__real@3ca3d70a; value
    vmovaps xmm3, xmm7; max
  }
  DVARFLT_r_tonemapAdaptSpeed = Dvar_RegisterFloat("MNSNPONNLP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "HDR Tonemap exposure adaptation speed");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_r_tonemapGrainStrength = Dvar_RegisterFloat("MRRSKNSLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40u, "HDR Tonemap Film Grain Strength");
  __asm
  {
    vmovss  xmm2, cs:__real@c1a00000; min
    vmovss  xmm1, cs:__real@3fc00000; value
  }
  DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision = Dvar_RegisterBool("r_tonemapUseRegularTonemapForNightVision", 0, 0x40004u, "Override thermal tonemap with regular tonemap");
  __asm { vmovaps xmm3, xmm10; max }
  v30 = Dvar_RegisterFloat("NNTKQMMSMM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Universal tonemap exposure adjustment (in EV) set so that exposureAdjust 0.0 gets a resonable exposure in HDR Capable mode");
  __asm { vmovss  xmm1, cs:__real@3e800000; value }
  DVARFLT_r_tonemapUniversalBaseExposureAdjust = v30;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v34 = Dvar_RegisterFloat("LKOLMLQRRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Film Grain Attenuation value. Intended for use in UI options to reduce strength of noise vs. TV sharpness settings.");
  __asm
  {
    vmovss  xmm3, cs:__real@42800000; max
    vmovss  xmm1, cs:__real@40000000; value
  }
  DVARFLT_r_filmGrainAtten = v34;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v38 = Dvar_RegisterFloat("NNONKTMKRQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 1u, "Tonemap Central Focus : 0.0 - 64.0 (0.0f = uniform weight for each pixel");
  __asm
  {
    vmovss  xmm3, cs:__real@3f733333; max
    vmovss  xmm1, cs:__real@3ea0c49c; value
  }
  DVARFLT_r_tonemapFocus = v38;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v42 = Dvar_RegisterFloat("LNNNQOSSQQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 1u, "Tonemap Scope Focus : 0.0 - 1.0 (0.0f = use scene weight only 1.0f = use scope weight only when in ADS");
  __asm { vmovss  xmm3, cs:__real@42800000; max }
  DVARFLT_r_tonemapScopeFocus = v42;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v46 = Dvar_RegisterFloat("LTSRTRRSNQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 1u, "Tonemap Local adaptation strength. Specifies local blending between global and local tonemapper.");
  __asm
  {
    vmovss  xmm3, cs:__real@41800000; max
    vmovss  xmm1, cs:__real@40800000; value
  }
  DVARFLT_r_tonemapLocalStrength = v46;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_r_tonemapLocalEvBounds = Dvar_RegisterFloat("MTQNPPMQRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 1u, "Tonemap Local adaptation EV bounds. Specifies EV range in which local tonemapper is switched off (0 means it is on for all pixels, 16 it is on for pixels further away from mean by 16EV.");
  __asm
  {
    vmovss  [rsp+88h+var_58], xmm7
    vmovss  xmm0, cs:__real@3f4ccccd
    vmovss  xmm3, cs:__real@3e4ccccd; z
    vmovss  xmm2, cs:__real@3d4ccccd; y
    vmovss  xmm1, cs:__real@3ccccccd; x
    vmovss  dword ptr [rsp+88h+description], xmm9
    vmovss  [rsp+88h+flags], xmm0
  }
  v54 = Dvar_RegisterVec4("MMNOKOORO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, v82, 1u, "Tonemap Local adaptation kernel weights.");
  __asm
  {
    vmovss  xmm0, cs:__real@3f19999a
    vmovss  xmm1, cs:__real@bf19999a
    vmovss  xmm2, cs:__real@b8d1b717; y
  }
  DVARVEC4_r_tonemapLocalWeights = v54;
  __asm
  {
    vmovss  [rsp+88h+var_58], xmm0
    vmovss  xmm0, cs:__real@bf0ccccd
    vmovss  dword ptr [rsp+88h+description], xmm1
    vxorps  xmm1, xmm1, xmm1; x
    vmovaps xmm3, xmm2; z
    vmovss  [rsp+88h+flags], xmm0
  }
  v61 = Dvar_RegisterVec4("r_nvgColorGradeLift", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, descriptiona, v83, 0x40004u, "NVG color grade lift");
  __asm
  {
    vmovss  xmm0, cs:__real@40400000
    vmovss  xmm1, cs:__real@3f000000
    vmovss  xmm3, cs:__real@3f48b439; z
    vmovss  xmm2, cs:__real@3f420c4a; y
  }
  DCONST_DVARVEC4_r_nvgColorGradeLift = v61;
  __asm
  {
    vmovss  [rsp+88h+var_58], xmm0
    vmovss  xmm0, cs:__real@3f1cac08
    vmovss  dword ptr [rsp+88h+description], xmm1
    vmovss  xmm1, cs:__real@3f8f7cee; x
    vmovss  [rsp+88h+flags], xmm0
  }
  DCONST_DVARVEC4_r_nvgColorGradeGamma = Dvar_RegisterVec4("r_nvgColorGradeGamma", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, descriptionb, v84, 0x40004u, "NVG color grade gamma");
  __asm
  {
    vmovss  [rsp+88h+var_58], xmm10
    vmovss  dword ptr [rsp+88h+description], xmm9
    vmovaps xmm3, xmm7; z
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm7; x
    vmovss  [rsp+88h+flags], xmm10
  }
  DCONST_DVARVEC4_r_nvgColorGradeGain = Dvar_RegisterVec4("r_nvgColorGradeGain", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsc, descriptionc, v85, 0x40004u, "NVG color grade gain");
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_18]
    vmovaps xmm9, [rsp+88h+var_28]
    vmovaps xmm10, [rsp+88h+var_38]
  }
  Dvar_EndPermanentRegistration();
}

/*
==============
R_FlushTonemap
==============
*/
void R_FlushTonemap(void)
{
  float *p_exposureLog; 
  __int64 v1; 
  _DWORD *v2; 

  p_exposureLog = &s_tonemapStateArray[0].exposureLog;
  v1 = 2i64;
  do
  {
    v2 = *(_DWORD **)(p_exposureLog + 29);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 827, ASSERT_TYPE_ASSERT, "(exposureInfo != nullptr)", (const char *)&queryFormat, "exposureInfo != nullptr") )
      __debugbreak();
    memset_0(v2, 0, 0x50ui64);
    v2[12] = 1065353216;
    *((_BYTE *)p_exposureLog - 4) = 0;
    *p_exposureLog = 1.0;
    p_exposureLog[5] = 0.0;
    p_exposureLog += 340;
    --v1;
  }
  while ( v1 );
}

/*
==============
R_InitTonemap
==============
*/
void R_InitTonemap()
{
  float *p_sceneAvgKiloNits; 
  unsigned int *v2; 
  GfxWrappedBuffer *p_exposureInfoConstantBuffer; 
  _QWORD *initialData; 
  bool v6; 
  __int64 v8; 
  bool v9; 
  bool v10; 
  bool v11; 
  unsigned int *v14; 
  float *v15; 
  __int64 v16; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  RB_Tonemap_RegisterDvars();
  p_sceneAvgKiloNits = &s_tonemapStateArray[0].readbackInfo[0].sceneAvgKiloNits;
  v16 = 2i64;
  v2 = s_tonemapFrame;
  v15 = &s_tonemapStateArray[0].readbackInfo[0].sceneAvgKiloNits;
  v14 = s_tonemapFrame;
  p_exposureInfoConstantBuffer = &s_tonemapStateArray[0].exposureInfoConstantBuffer;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  do
  {
    *v2 = 0;
    initialData = PMem_Alloc(0x80ui64, 0x40ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "Tonemapping exposure info");
    *initialData = 0i64;
    initialData[1] = 0i64;
    initialData[2] = 0i64;
    initialData[3] = 0i64;
    initialData[4] = 0i64;
    initialData[5] = 0i64;
    initialData[7] = 0i64;
    initialData[8] = 0i64;
    initialData[9] = 0i64;
    *((_QWORD *)p_sceneAvgKiloNits - 150) = initialData;
    *((_DWORD *)initialData + 13) = 1065353216;
    *((_DWORD *)initialData + 12) = 0;
    R_CreateGfxWrappedBuffer((GfxWrappedRWBuffer *)&p_exposureInfoConstantBuffer[1], GfxWrappedBuffer_Structured, 80, 1u, GFX_DATA_FORMAT_R32_UINT, 1u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "Tonemapping exposure info buffer");
    R_CreateGfxWrappedBuffer(p_exposureInfoConstantBuffer, GfxWrappedBuffer_Const, 80, 1u, GFX_DATA_FORMAT_R32_UINT, 0, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, initialData, "Tonemapping exposure info constant buffer");
    _RBX = p_sceneAvgKiloNits;
    v8 = 2i64;
    do
    {
      __asm { vucomiss xmm6, dword ptr [rbx-8] }
      if ( !v6 )
      {
        v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 468, ASSERT_TYPE_ASSERT, "(info->exposure == 0.0f)", (const char *)&queryFormat, "info->exposure == 0.0f");
        v6 = !v9;
        if ( v9 )
          __debugbreak();
      }
      __asm { vucomiss xmm6, dword ptr [rbx+8] }
      if ( !v6 )
      {
        v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 469, ASSERT_TYPE_ASSERT, "(info->imageKey == 0.0f)", (const char *)&queryFormat, "info->imageKey == 0.0f");
        v6 = !v10;
        if ( v10 )
          __debugbreak();
      }
      __asm { vucomiss xmm6, dword ptr [rbx] }
      if ( !v6 )
      {
        v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 470, ASSERT_TYPE_ASSERT, "(info->sceneAvgKiloNits == 0.0f)", (const char *)&queryFormat, "info->sceneAvgKiloNits == 0.0f");
        v6 = !v11;
        if ( v11 )
          __debugbreak();
      }
      __asm { vucomiss xmm6, dword ptr [rbx+4] }
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 471, ASSERT_TYPE_ASSERT, "(info->sceneAmbientAvgKiloNits == 0.0f)", (const char *)&queryFormat, "info->sceneAmbientAvgKiloNits == 0.0f") )
        __debugbreak();
      _RBX += 6;
      v6 = --v8 == 0;
    }
    while ( v8 );
    v2 = v14 + 1;
    p_sceneAvgKiloNits = v15 + 340;
    ++v14;
    p_exposureInfoConstantBuffer = (GfxWrappedBuffer *)((char *)p_exposureInfoConstantBuffer + 1360);
    v15 += 340;
    --v16;
  }
  while ( v16 );
  R_CreateGfxWrappedBuffer(&s_reductionBuffer, GfxWrappedBuffer_Raw, 4, 0xA00u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "Tonemapping reduction buffer");
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
}

/*
==============
R_Screenshot_HdrExposedScene
==============
*/
void R_Screenshot_HdrExposedScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *srcRt)
{
  int v12; 
  Material *tonemapGradingScreenshotMaterial; 
  const GfxImage *thermalRadiationLut; 
  unsigned int v16; 
  const R_RT_Surface *Surface; 
  const char *v35; 
  const R_RT_Surface *v36; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  CmdBufState *state; 
  float width; 
  float height; 
  float v52; 
  float v53; 
  float v54; 
  float v55; 
  float v56; 
  float v57; 
  R_RT_Handle v58; 
  R_RT_Handle v59; 
  R_RT_Handle v61; 
  char v62; 
  const char *v65; 
  GfxViewport v66; 
  R_RT_ColorHandle result; 
  R_RT_Group v68; 

  _R14 = gfxContext;
  LOBYTE(v12) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v12 == 4 )
  {
    R_Screenshot_CreateDeferredRt(&result, EASE_IN_CUBIC, GFX_RENDERTARGET_FORMAT_SCENEBUFFER, viewInfo->deferredScreenshotIndex, 0x780u, 0x4B0u);
    if ( result.m_surfaceID )
    {
      __asm { vmovaps [rsp+310h+var_40], xmm6 }
      R_RT_Handle::GetSurface(&result);
      tonemapGradingScreenshotMaterial = rgp.tonemapGradingScreenshotMaterial;
      if ( viewInfo->thermalParams.useNightAndThermalVisionCombo )
      {
        thermalRadiationLut = viewInfo->thermalParams.thermalRadiationLut;
        if ( viewInfo->thermalParams.useScopedNVG )
        {
          tonemapGradingScreenshotMaterial = rgp.tonemapGradingScreenshotNightvisionScopeMaterial;
          if ( thermalRadiationLut )
            tonemapGradingScreenshotMaterial = rgp.tonemapGradingScreenshotNightvisionScopeLutMaterial;
        }
        else
        {
          tonemapGradingScreenshotMaterial = rgp.tonemapGradingScreenshotNightvisionMaterial;
          if ( thermalRadiationLut )
            tonemapGradingScreenshotMaterial = rgp.tonemapGradingScreenshotNightvisionLutMaterial;
        }
      }
      __asm { vmovups ymm0, ymmword ptr [rbp+210h+result.baseclass_0.m_surfaceID] }
      v66.width = 1920;
      *(_QWORD *)&v66.x = 0i64;
      __asm { vmovups ymmword ptr [rbp+210h+var_280.m_surfaceID], ymm0 }
      v66.height = 1200;
      v16 = R_RT_Handle::GetSurface(&v59)->m_image.m_base.height;
      Surface = R_RT_Handle::GetSurface(&v59);
      R_SetRenderTargetSize(_R14->source, Surface->m_image.m_base.width, v16, GFX_USE_VIEWPORT_FULL);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+210h+result.baseclass_0.m_surfaceID]
        vmovups xmm6, xmmword ptr [r14]
        vmovd   eax, xmm0
        vmovups [rbp+210h+var_260], ymm0
        vmovups ymmword ptr [rsp+310h+var_2A0.m_surfaceID], ymm0
      }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v58);
        __asm
        {
          vmovups ymm0, ymmword ptr [rsp+310h+var_2A0.m_surfaceID]
          vmovups [rbp+210h+var_260], ymm0
        }
      }
      else
      {
        if ( result.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rbp+210h+var_280.m_tracking.m_name], xmm0
        vmovups ymm0, [rbp+210h+var_260]
        vmovd   eax, xmm0
      }
      v59.m_surfaceID = 0;
      v59.m_tracking.m_allocCounter = 0;
      v62 = 1;
      __asm { vmovups ymmword ptr [rbp+210h+var_240.m_surfaceID], ymm0 }
      if ( (_WORD)_EAX )
      {
        R_RT_Handle::GetSurface(&v61);
      }
      else
      {
        if ( v58.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, [rbp+210h+var_260]
        vmovups [rbp+210h+var_218], ymm0
        vmovups ymm0, ymmword ptr [rbp+210h+var_280.m_surfaceID]
        vmovups [rbp+210h+var_198], ymm0
      }
      _RDX = &v68;
      _RAX = &v62;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymm1, ymmword ptr [rax+80h]
        vmovups ymmword ptr [rdx], ymm0
        vmovups ymm0, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rdx+20h], ymm0
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rdx+40h], ymm0
        vmovups ymm0, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rdx+60h], ymm0
        vmovups ymmword ptr [rdx+80h], ymm1
        vmovups ymm1, ymmword ptr [rax+0A0h]
      }
      v35 = v65;
      __asm { vmovups ymmword ptr [rdx+0A0h], ymm1 }
      v68.m_vrsRt.m_tracking.m_location = v35;
      __asm { vmovdqa xmmword ptr [rsp+310h+var_2A0.m_surfaceID], xmm6 }
      R_SetRenderTargetsInternal((GfxCmdBufContext *)&v58, &v68, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(989)");
      v36 = R_RT_Handle::GetSurface(srcRt);
      source = _R14->source;
      __asm { vmovaps xmm6, [rsp+310h+var_40] }
      p_m_image = &v36->m_image;
      if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      p_input = &source->input;
      if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vxorps  xmm1, xmm1, xmm1
      }
      p_input->codeImages[4] = &p_m_image->m_base;
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, rax
        vxorps  xmm2, xmm2, xmm2
        vcvtsi2ss xmm2, xmm2, rax
        vmovups xmmword ptr [rsp+310h+var_2A0.m_surfaceID], xmm0
        vmovss  xmm0, cs:__real@3f800000
        vmovss  [rsp+310h+var_2B8], xmm0
        vmovss  [rsp+310h+var_2C0], xmm0
        vmovss  [rsp+310h+var_2C8], xmm1
        vmovss  [rsp+310h+var_2D0], xmm1
        vmovss  [rsp+310h+var_2D8], xmm3
        vmovss  [rsp+310h+var_2E0], xmm2
        vmovss  [rsp+310h+height], xmm1
        vmovss  [rsp+310h+width], xmm1
      }
      RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v58, tonemapGradingScreenshotMaterial, 0xFFFFFFFF, &v66, width, height, v52, v53, v54, v55, v56, v57, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(991)");
      __asm { vmovups ymm0, ymmword ptr [rbp+210h+result.baseclass_0.m_surfaceID] }
      state = _R14->state;
      __asm { vmovups ymmword ptr [rbp+210h+var_240.m_surfaceID], ymm0 }
      R_HW_AddResourceTransition(state, &v61, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(_R14->state);
    }
    else if ( result.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", result.m_surfaceID + 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
}

/*
==============
R_Screenshot_HdrExposedSceneCS
==============
*/
void R_Screenshot_HdrExposedSceneCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxBackEndData *data, bool compositeHudoutline)
{
  int v7; 
  const dvar_t *v8; 
  ComputeShader *tonemapScreenshotComputeShader; 
  R_RT_Handle v11; 
  R_RT_ColorHandle result; 

  LOBYTE(v7) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v7 == 4 )
  {
    R_Screenshot_CreateDeferredRt(&result, EASE_IN_CUBIC, GFX_RENDERTARGET_FORMAT_SCENEBUFFER, viewInfo->deferredScreenshotIndex, 0x780u, 0x4B0u);
    if ( result.m_surfaceID )
    {
      R_RT_Handle::GetSurface(&result);
      R_Tonemap_SetConstantCS(computeState, viewInfo, 0, compositeHudoutline);
      v8 = DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision;
      tonemapScreenshotComputeShader = rgp.tonemapScreenshotComputeShader;
      if ( !DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUseRegularTonemapForNightVision") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( !v8->current.enabled && viewInfo->thermalParams.useNightAndThermalVisionCombo )
        tonemapScreenshotComputeShader = rgp.tonemapScreenshotNVGComputeShader[(viewInfo->thermalParams.useScopedNVG ? 2 : 0) | (unsigned __int64)(viewInfo->thermalParams.thermalRadiationLut != NULL)];
      R_SetComputeShader(computeState, tonemapScreenshotComputeShader);
      R_Dispatch(computeState, 0xF0u, 0x96u, 1u);
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+0A8h+result.baseclass_0.m_surfaceID]
        vmovups [rsp+0A8h+var_68], ymm0
      }
      R_HW_AddResourceTransition(computeState, &v11, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(computeState);
    }
    else if ( result.m_tracking.m_allocCounter )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
    }
  }
}

/*
==============
R_ShutdownTonemap
==============
*/
void R_ShutdownTonemap(void)
{
  GfxWrappedRWBuffer *p_exposureInfoStructuredBuffer; 
  __int64 v1; 

  p_exposureInfoStructuredBuffer = &s_tonemapStateArray[0].exposureInfoStructuredBuffer;
  v1 = 2i64;
  do
  {
    R_ShutdownGfxWrappedBuffer((GfxWrappedRWBuffer *)((char *)p_exposureInfoStructuredBuffer - 32));
    R_ShutdownGfxWrappedBuffer(p_exposureInfoStructuredBuffer);
    p_exposureInfoStructuredBuffer = (GfxWrappedRWBuffer *)((char *)p_exposureInfoStructuredBuffer + 1360);
    --v1;
  }
  while ( v1 );
  memset_0(s_tonemapStateArray, 0, sizeof(s_tonemapStateArray));
  R_ShutdownGfxWrappedBuffer(&s_reductionBuffer);
}

/*
==============
R_TonemapToggleFrame
==============
*/
__int64 R_TonemapToggleFrame(LocalClientNum_t localCLientNum)
{
  __int64 v1; 
  unsigned int v2; 

  v1 = localCLientNum;
  v2 = ((unsigned __int8)s_tonemapFrame[localCLientNum] - 1) & 1;
  s_tonemapFrame[v1] = v2;
  return v2;
}

/*
==============
R_Tonemap_CalculateExposureCS
==============
*/
void R_Tonemap_CalculateExposureCS(ComputeCmdBufState *state, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *colorRt, const R_RT_ColorHandle *localLumaRt, const R_RT_ColorHandle *ambientLumaRt, const R_RT_ColorHandle *floatZFull, const GfxImage *scopeBuffer, const GfxWrappedRWBuffer *exposureInfoStructuredBuffer, bool allowBlendExposure)
{
  unsigned int width; 
  unsigned int height; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  bool v19; 
  ComputeShader *logAccumFromTex2dComputeShader; 
  __int64 m_pFunction_high; 
  __int64 v24; 
  const GfxBackEndData *v28; 
  const R_RT_Surface *Surface; 
  R_RT_Handle *v31; 
  GfxTextureId textureId; 
  const R_RT_Surface *v33; 
  const R_RT_Surface *v34; 
  int lockAutoExposureAdjust; 
  int autoExposure; 
  char *fmt; 
  __int64 flag; 
  R_RT_Handle *p_view; 
  R_RT_Handle *p_rwView; 
  ID3D12Resource *buffers; 
  R_RT_Handle *Resident; 
  R_RT_Handle *v55; 
  GfxTexture *textures; 
  GfxShaderBufferRWView *views; 
  __int64 data; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  int v65[10]; 
  int v66; 
  int v67; 
  unsigned int v73[4]; 

  p_rwView = &ambientLumaRt->R_RT_Handle;
  v55 = &floatZFull->R_RT_Handle;
  _RDI = viewInfo;
  textures = (GfxTexture *)scopeBuffer;
  views = (GfxShaderBufferRWView *)exposureInfoStructuredBuffer;
  p_view = &localLumaRt->R_RT_Handle;
  Resident = &colorRt->R_RT_Handle;
  width = R_RT_Handle::GetSurface(&colorRt->R_RT_Handle)->m_image.m_base.width;
  height = R_RT_Handle::GetSurface(&colorRt->R_RT_Handle)->m_image.m_base.height;
  if ( width > 0xA0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 514, ASSERT_TYPE_ASSERT, "(width <= 160)", (const char *)&queryFormat, "width <= DOWNSAMPLE_MAX_WIDTH") )
    __debugbreak();
  if ( height > 0x5A && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 515, ASSERT_TYPE_ASSERT, "(height <= 90)", (const char *)&queryFormat, "height <= DOWNSAMPLE_MAX_HEIGHT") )
    __debugbreak();
  if ( width * height )
  {
    v16 = (height + 7) >> 3;
    v17 = (width + 7) >> 3;
    v18 = v17 * v16;
    __asm
    {
      vmovaps [rsp+180h+var_50], xmm6
      vmovaps [rsp+180h+var_60], xmm7
    }
    if ( v17 * v16 > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 527, ASSERT_TYPE_ASSERT, "(( 4 * 128 ) >= groupsX * groupsY)", (const char *)&queryFormat, "REDUCTION_BUFFER_SIZE >= groupsX * groupsY") )
      __debugbreak();
    v19 = _RDI->thermalParams.useNightAndThermalVisionCombo && !_RDI->thermalParams.useScopedNVG;
    logAccumFromTex2dComputeShader = rgp.logAccumFromTex2dComputeShader;
    if ( v19 )
      logAccumFromTex2dComputeShader = rgp.logAccumFromTex2dNvgComputeShader;
    R_SetComputeShader(state, logAccumFromTex2dComputeShader);
    buffers = (ID3D12Resource *)state->data;
    __asm { vmovss  xmm6, dword ptr [rdi+3854h] }
    if ( !buffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 361, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( _RDI->clientIndex >= gfxCfg.maxClientRenderViews )
    {
      LODWORD(flag) = _RDI->clientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->clientIndex ) < (unsigned)( gfxCfg.maxClientRenderViews )", "viewInfo->clientIndex doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", flag, gfxCfg.maxClientRenderViews) )
        __debugbreak();
    }
    __asm { vmovss  xmm0, cs:__real@3f800000 }
    m_pFunction_high = HIDWORD(buffers[1968].m_pFunction);
    v24 = 340i64 * (int)_RDI->clientIndex;
    __asm { vmovss  [rbp+80h+var_E8], xmm6 }
    _RDX = v24 + m_pFunction_high;
    v61 = (width + 7) >> 3;
    v62 = (height + 7) >> 3;
    _RAX = s_tonemapStateArray[0].radiometricScale;
    __asm { vmovss  xmm7, dword ptr [rax+rdx*4] }
    data = 0i64;
    v59 = width - 1;
    v60 = height - 1;
    v28 = state->data;
    __asm
    {
      vdivss  xmm6, xmm0, xmm7
      vmovss  [rbp+80h+var_E4], xmm6
    }
    buffers = v28->globalSceneConstantBuffer->buffer;
    R_SetComputeConstantBuffers(state, 7, 1, &buffers);
    R_UploadAndSetComputeConstants(state, 0, &data, 0x20u, NULL);
    Surface = R_RT_Handle::GetSurface(Resident);
    Resident = (R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&Resident);
    v31 = v55;
    if ( R_RT_Handle::IsValid(v55) )
      textureId = R_RT_Handle::GetSurface(v31)->m_image.m_base.textureId;
    else
      textureId = rgp.blackImage->textureId;
    v55 = (R_RT_Handle *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(state, 1, 1, (const GfxTexture *const *)&v55);
    textures = (GfxTexture *)R_Texture_GetResident((GfxTextureId)textures->shaderView.view);
    R_SetComputeTextures(state, 2, 1, (const GfxTexture *const *)&textures);
    v33 = R_RT_Handle::GetSurface(p_rwView);
    p_rwView = (R_RT_Handle *)R_Texture_GetResident(v33->m_image.m_base.textureId);
    R_SetComputeTextures(state, 3, 1, (const GfxTexture *const *)&p_rwView);
    R_HW_AddResourceTransition(state, &s_reductionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    p_rwView = (R_RT_Handle *)&s_reductionBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v34 = R_RT_Handle::GetSurface(p_view);
    p_view = (R_RT_Handle *)R_Texture_GetResident(v34->m_image.m_base.textureId);
    R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&p_view);
    R_Dispatch(state, v17, v16, 1u);
    while ( v18 > 0x40 )
    {
      R_HW_AddResourceTransition(state, &s_reductionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(state);
      R_SetComputeShader(state, rgp.logAccumContinueComputeShader);
      v73[0] = v18;
      R_UploadAndSetComputeConstants(state, 0, v73, 0x10u, NULL);
      p_view = (R_RT_Handle *)&s_reductionBuffer.rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_view, NULL);
      v18 = (v18 + 63) >> 6;
      R_Dispatch(state, v18, 1u, 1u);
    }
    R_HW_AddResourceTransition(state, &s_reductionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.logAccumFinishComputeShader);
    lockAutoExposureAdjust = _RDI->tonemap.lockAutoExposureAdjust;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+3804h]
      vmovss  [rbp+80h+var_B0], xmm0
      vmovss  xmm0, dword ptr [rdi+380Ch]
    }
    v67 = lockAutoExposureAdjust;
    autoExposure = _RDI->tonemap.autoExposure;
    __asm
    {
      vmovss  [rbp+80h+var_D0], xmm7
      vmovaps xmm7, [rsp+180h+var_60]
      vmovss  [rbp+80h+var_CC], xmm6
      vmovaps xmm6, [rsp+180h+var_50]
      vmovss  [rbp+80h+var_AC], xmm0
    }
    v65[9] = autoExposure;
    if ( !_RDI->tonemap.blendExposure || (v66 = 1, !allowBlendExposure) )
      v66 = 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+3814h]
      vmovss  xmm2, dword ptr [rdi+3810h]
      vmovss  xmm3, dword ptr [rdi+3808h]
      vmovss  [rbp+80h+var_C0], xmm0
      vmovups ymm0, ymmword ptr [rdi+381Ch]
      vmovups [rbp+80h+var_A0], ymm0
      vmovss  [rbp+80h+var_A8], xmm2
      vmovss  [rbp+80h+var_A4], xmm3
    }
    if ( _RDI->thermalParams.useNightAndThermalVisionCombo )
    {
      __asm { vmovss  xmm0, dword ptr [rdi+5D4h] }
      if ( _RDI->thermalParams.useScopedNVG )
      {
        __asm
        {
          vmovss  [rbp+80h+var_DC], xmm0
          vmovss  xmm0, cs:__real@41700000
          vmovss  [rbp+80h+var_D8], xmm0
        }
      }
      else
      {
        __asm
        {
          vaddss  xmm1, xmm3, dword ptr [rdi+5D8h]
          vaddss  xmm0, xmm2, xmm0
          vmovss  [rbp+80h+var_A8], xmm0
          vmovss  [rbp+80h+var_A4], xmm1
        }
      }
    }
    v65[0] = v18;
    R_UploadAndSetComputeConstants(state, 0, v65, 0x60u, NULL);
    p_view = (R_RT_Handle *)&s_reductionBuffer.view;
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&p_view);
    views = (GfxShaderBufferRWView *)((char *)views + 32);
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    R_Dispatch(state, (v18 + 63) >> 6, 1u, 1u);
  }
  else
  {
    LODWORD(flag) = height;
    LODWORD(fmt) = width;
    Com_PrintWarning(16, "Trying to calculate exposure on empty viewport (X,Y,W,H) = (%u, %u, %u, %u).\n", 0i64, 0i64, fmt, flag);
  }
}

/*
==============
R_Tonemap_Filter
==============
*/
void R_Tonemap_Filter(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxImage *srcColor, unsigned int dstWidth, unsigned int dstHeight)
{
  const dvar_t *v8; 
  Material *tonemapMaterial; 
  const GfxImage *thermalRadiationLut; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *p_input; 
  float fmt; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  vec4_t result; 
  GfxViewport v35; 

  v8 = DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision;
  tonemapMaterial = rgp.tonemapMaterial;
  *(_QWORD *)&v35.x = 0i64;
  _R14 = gfxContext;
  v35.width = dstWidth;
  v35.height = dstHeight;
  if ( !DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUseRegularTonemapForNightVision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled && viewInfo->thermalParams.useNightAndThermalVisionCombo )
  {
    thermalRadiationLut = viewInfo->thermalParams.thermalRadiationLut;
    if ( viewInfo->thermalParams.useScopedNVG )
    {
      tonemapMaterial = rgp.nightvisionScopeMaterial;
      if ( thermalRadiationLut )
        tonemapMaterial = rgp.nightvisionScopeLutMaterial;
    }
    else
    {
      tonemapMaterial = rgp.nightvisionMaterial;
      if ( thermalRadiationLut )
        tonemapMaterial = rgp.nightvisionLutMaterial;
    }
  }
  source = _R14->source;
  if ( !_R14->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = srcColor;
  _RBX = _R14->source;
  if ( R_PostAAIsSMAA(viewInfo->postAA.mode) )
  {
    _RAX = R_GetSMAAColorimetryInfo(&result);
    __asm
    {
      vmovups xmm2, xmmword ptr [rax]
      vmovss  dword ptr [rbx+960h], xmm2
      vextractps dword ptr [rbx+964h], xmm2, 1
      vextractps dword ptr [rbx+968h], xmm2, 2
      vextractps dword ptr [rbx+96Ch], xmm2, 3
    }
  }
  else
  {
    *(_QWORD *)_RBX->input.consts[38].v = 0i64;
    *(_QWORD *)&_RBX->input.consts[38].xyz.z = 0i64;
  }
  __asm { vmovups xmm0, xmmword ptr [r14] }
  ++_RBX->constVersions[38];
  __asm { vmovups xmmword ptr [rsp+0D8h+result], xmm0 }
  RB_SetDisplayMappingParams((GfxCmdBufContext *)&result);
  __asm
  {
    vmovups xmm0, xmmword ptr [r14]
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, rax
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, rax
    vmovups xmmword ptr [rsp+0D8h+result], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+0D8h+var_80], xmm0
    vmovss  [rsp+0D8h+var_88], xmm0
    vmovss  [rsp+0D8h+var_90], xmm1
    vmovss  [rsp+0D8h+var_98], xmm1
    vmovss  [rsp+0D8h+var_A0], xmm3
    vmovss  dword ptr [rsp+0D8h+var_A8], xmm2
    vmovss  dword ptr [rsp+0D8h+var_B0], xmm1
    vmovss  dword ptr [rsp+0D8h+fmt], xmm1
  }
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&result, tonemapMaterial, 0xFFFFFFFF, &v35, fmt, v27, v28, v29, v30, v31, v32, v33, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1109)");
}

/*
==============
R_Tonemap_FilterCS
==============
*/
void R_Tonemap_FilterCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, unsigned int dstWidth, unsigned int dstHeight, bool outputLuma, bool compositeHudoutline)
{
  const dvar_t *v10; 
  ComputeShader *tonemapComputeShader; 

  R_Tonemap_SetConstantCS(computeState, viewInfo, outputLuma, compositeHudoutline);
  v10 = DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision;
  tonemapComputeShader = rgp.tonemapComputeShader;
  if ( !DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUseRegularTonemapForNightVision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled && viewInfo->thermalParams.useNightAndThermalVisionCombo )
    tonemapComputeShader = rgp.tonemapNVGComputeShader[(viewInfo->thermalParams.useScopedNVG ? 2 : 0) | (unsigned __int64)(viewInfo->thermalParams.thermalRadiationLut != NULL)];
  R_SetComputeShader(computeState, tonemapComputeShader);
  R_Dispatch(computeState, (dstWidth + 7) >> 3, (dstHeight + 7) >> 3, 1u);
}

/*
==============
R_Tonemap_GetConstantBuffer
==============
*/
GfxWrappedBuffer *R_Tonemap_GetConstantBuffer(const GfxViewInfo *viewInfo)
{
  int viewInfoIndex; 

  if ( viewInfo )
    viewInfoIndex = viewInfo->viewInfoIndex;
  else
    viewInfoIndex = 0;
  return &s_tonemapStateArray[viewInfoIndex].exposureInfoConstantBuffer;
}

/*
==============
R_Tonemap_GetExposureAdjust
==============
*/
double R_Tonemap_GetExposureAdjust(const GfxViewInfo *viewInfo)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+3818h]; Y
    vmovss  xmm0, cs:__real@40000000; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  return *(double *)&_XMM0;
}

/*
==============
R_Tonemap_GetExposureInfo
==============
*/
void R_Tonemap_GetExposureInfo(const GfxBackEndData *data, const GfxViewInfo *viewInfo, float *exposure, float *sceneAvgKiloNits, float *sceneAmbientAvgKiloNits, float *imageKey)
{
  TonemapReadbackInfo *v10; 
  __int64 v11; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 659, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 660, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( viewInfo->clientIndex >= gfxCfg.maxClientRenderViews )
  {
    LODWORD(v11) = viewInfo->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 661, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->clientIndex ) < (unsigned)( gfxCfg.maxClientRenderViews )", "viewInfo->clientIndex doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", v11, gfxCfg.maxClientRenderViews) )
      __debugbreak();
  }
  if ( !exposure && !sceneAvgKiloNits && !sceneAmbientAvgKiloNits && !imageKey && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 662, ASSERT_TYPE_ASSERT, "(exposure || sceneAvgKiloNits || sceneAmbientAvgKiloNits || imageKey)", (const char *)&queryFormat, "exposure || sceneAvgKiloNits || sceneAmbientAvgKiloNits || imageKey") )
    __debugbreak();
  v10 = &s_tonemapStateArray[viewInfo->clientIndex].readbackInfo[((unsigned __int8)data->tonemapExposureInfoIndex - 1) & 1];
  if ( exposure )
    *exposure = v10->exposure;
  if ( sceneAvgKiloNits )
    *sceneAvgKiloNits = v10->sceneAvgKiloNits;
  if ( sceneAmbientAvgKiloNits )
    *sceneAmbientAvgKiloNits = v10->sceneAmbientAvgKiloNits;
  if ( imageKey )
    *imageKey = v10->imageKey;
}

/*
==============
R_Tonemap_GetFinalExposureAndRadiometricScale
==============
*/
float R_Tonemap_GetFinalExposureAndRadiometricScale(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+3818h]; Y
    vmovss  xmm0, cs:__real@40000000; X
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm { vmulss  xmm0, xmm0, dword ptr [rax+rcx] }
  return *(float *)&_XMM0;
}

/*
==============
R_Tonemap_GetRadiometricScale
==============
*/
void R_Tonemap_GetRadiometricScale(const GfxBackEndData *data, const GfxViewInfo *viewInfo, float *outRadiometricScale, float *outPrevFrameRadiometricScale)
{
  __int64 tonemapExposureInfoIndex; 
  TonemapState *v9; 
  __int64 v10; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 361, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 362, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( viewInfo->clientIndex >= gfxCfg.maxClientRenderViews )
  {
    LODWORD(v10) = viewInfo->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->clientIndex ) < (unsigned)( gfxCfg.maxClientRenderViews )", "viewInfo->clientIndex doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", v10, gfxCfg.maxClientRenderViews) )
      __debugbreak();
  }
  if ( !outRadiometricScale && !outPrevFrameRadiometricScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 364, ASSERT_TYPE_ASSERT, "(outRadiometricScale || outPrevFrameRadiometricScale)", (const char *)&queryFormat, "outRadiometricScale || outPrevFrameRadiometricScale") )
    __debugbreak();
  tonemapExposureInfoIndex = data->tonemapExposureInfoIndex;
  v9 = &s_tonemapStateArray[viewInfo->clientIndex];
  if ( outRadiometricScale )
    *outRadiometricScale = v9->radiometricScale[tonemapExposureInfoIndex];
  if ( outPrevFrameRadiometricScale )
    *outPrevFrameRadiometricScale = v9->prevFrameRadiometricScale[tonemapExposureInfoIndex];
}

/*
==============
R_Tonemap_GetSceneDownsampleMipForExposureCalculation
==============
*/
__int64 R_Tonemap_GetSceneDownsampleMipForExposureCalculation(unsigned int width, unsigned int height)
{
  __int64 result; 

  result = 0i64;
  while ( width > 0xA0 || height > 0x5A )
  {
    result = (unsigned int)(result + 1);
    width >>= 1;
    height >>= 1;
  }
  return result;
}

/*
==============
R_Tonemap_GetUniversalExposureAdjust
==============
*/
float R_Tonemap_GetUniversalExposureAdjust()
{
  _RBX = DVARFLT_r_tonemapUniversalBaseExposureAdjust;
  if ( !DVARFLT_r_tonemapUniversalBaseExposureAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUniversalBaseExposureAdjust") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm0, dword ptr [rbx+28h] }
  return *(float *)&_XMM0;
}

/*
==============
R_Tonemap_ReadExposureInfoFromGpu
==============
*/
void R_Tonemap_ReadExposureInfoFromGpu(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *exposureInfoConstantBuffer)
{
  __int64 clientIndex; 
  TonemapState *v6; 
  _DWORD *p_unusedfilmicCrossover; 
  __int64 tonemapExposureInfoIndex; 

  clientIndex = viewInfo->clientIndex;
  if ( (unsigned int)clientIndex >= gfxCfg.maxClientRenderViews && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 715, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( gfxCfg.maxClientRenderViews )", "client doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", viewInfo->clientIndex, gfxCfg.maxClientRenderViews) )
    __debugbreak();
  v6 = &s_tonemapStateArray[clientIndex];
  p_unusedfilmicCrossover = (_DWORD *)&v6->exposureInfo->unusedfilmicCrossover;
  if ( exposureInfoConstantBuffer )
    p_unusedfilmicCrossover = exposureInfoConstantBuffer->data;
  tonemapExposureInfoIndex = viewInfo->input.data->tonemapExposureInfoIndex;
  v6->readbackInfo[tonemapExposureInfoIndex].exposure = (float)p_unusedfilmicCrossover[13];
  v6->readbackInfo[tonemapExposureInfoIndex].sceneExposure = (float)p_unusedfilmicCrossover[15];
  v6->readbackInfo[tonemapExposureInfoIndex].sceneAvgKiloNits = (float)p_unusedfilmicCrossover[3];
  v6->readbackInfo[tonemapExposureInfoIndex].sceneAmbientAvgKiloNits = (float)p_unusedfilmicCrossover[16];
  v6->readbackInfo[tonemapExposureInfoIndex].imageKey = (float)p_unusedfilmicCrossover[2];
  v6->readbackInfo[tonemapExposureInfoIndex].exposureAndRadiometricScale = (float)p_unusedfilmicCrossover[14];
}

/*
==============
R_Tonemap_ReadExposureInfoFromGpu
==============
*/
void R_Tonemap_ReadExposureInfoFromGpu(GfxCmdBufContext *context, const GfxViewInfo *viewInfo, const GfxWrappedBuffer *exposureInfoConstantBuffer)
{
  __int64 clientIndex; 
  TonemapState *v6; 
  _DWORD *p_unusedfilmicCrossover; 
  __int64 tonemapExposureInfoIndex; 

  clientIndex = viewInfo->clientIndex;
  if ( (unsigned int)clientIndex >= gfxCfg.maxClientRenderViews && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 684, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( gfxCfg.maxClientRenderViews )", "client doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", viewInfo->clientIndex, gfxCfg.maxClientRenderViews) )
    __debugbreak();
  v6 = &s_tonemapStateArray[clientIndex];
  p_unusedfilmicCrossover = (_DWORD *)&v6->exposureInfo->unusedfilmicCrossover;
  if ( exposureInfoConstantBuffer )
    p_unusedfilmicCrossover = exposureInfoConstantBuffer->data;
  tonemapExposureInfoIndex = viewInfo->input.data->tonemapExposureInfoIndex;
  v6->readbackInfo[tonemapExposureInfoIndex].exposure = (float)p_unusedfilmicCrossover[13];
  v6->readbackInfo[tonemapExposureInfoIndex].sceneExposure = (float)p_unusedfilmicCrossover[15];
  v6->readbackInfo[tonemapExposureInfoIndex].sceneAvgKiloNits = (float)p_unusedfilmicCrossover[3];
  v6->readbackInfo[tonemapExposureInfoIndex].sceneAmbientAvgKiloNits = (float)p_unusedfilmicCrossover[16];
  v6->readbackInfo[tonemapExposureInfoIndex].imageKey = (float)p_unusedfilmicCrossover[2];
  v6->readbackInfo[tonemapExposureInfoIndex].exposureAndRadiometricScale = (float)p_unusedfilmicCrossover[14];
}

/*
==============
R_Tonemap_SetConstantCS
==============
*/
void R_Tonemap_SetConstantCS(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, bool outputLuma, bool compositeHudoutline)
{
  GfxColorimetry FramebufferColorimetry; 
  vec4_t result; 
  vec4_t outMatrixR; 
  vec4_t outMatrixG; 
  vec4_t outMatrixB; 
  float outScaleU; 
  float outScaleV; 
  float outScaleW; 
  float outOffsetU; 
  float outOffsetV; 
  float outOffsetW[6]; 
  BOOL v44; 

  _EBX = compositeHudoutline;
  _RDI = viewInfo;
  R_UniversalClut_GetParameters(&outScaleU, &outScaleV, &outScaleW, &outOffsetU, &outOffsetV, outOffsetW);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3860h]
    vmovss  xmm3, cs:__real@3f800000
    vmovss  xmm1, dword ptr [rdi+3840h]
    vmovss  [rbp+57h+var_A0], xmm0
    vsubss  xmm0, xmm3, xmm0
    vmovss  [rbp+57h+var_9C], xmm0
    vmovss  xmm0, dword ptr [rdi+3844h]
    vmovss  [rbp+57h+var_94], xmm0
    vmovss  [rbp+57h+var_98], xmm1
    vmovd   xmm0, ebx
  }
  _ER15 = 0;
  __asm
  {
    vmovd   xmm1, r15d
    vpcmpeqd xmm2, xmm0, xmm1
    vxorps  xmm1, xmm1, xmm1
    vblendvps xmm0, xmm3, xmm1, xmm2
    vmovss  [rbp+57h+var_50], xmm0
  }
  RB_GetUIWhiteBalanceParams(_RDI, &outMatrixR, &outMatrixG, &outMatrixB);
  if ( R_PostAAIsSMAA(_RDI->postAA.mode) )
  {
    _RAX = R_GetSMAAColorimetryInfo(&result);
    __asm
    {
      vmovups xmm2, xmmword ptr [rax]
      vmovss  dword ptr [rbp+57h+var_60], xmm2
      vextractps dword ptr [rbp+57h+var_60+4], xmm2, 1
      vextractps dword ptr [rbp+57h+var_60+8], xmm2, 2
      vextractps dword ptr [rbp+57h+var_60+0Ch], xmm2, 3
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovups [rbp+57h+var_60], xmm0
    }
  }
  FramebufferColorimetry = R_GetFramebufferColorimetry();
  _RAX = R_GetDisplayMappingParams((GfxDisplayMappingParams *)&result);
  __asm
  {
    vmovss  xmm0, [rsp+120h+var_F0]
    vmovsd  xmm1, qword ptr [rax]
  }
  *(float *)&_RAX = _RAX->maxLuminance;
  __asm
  {
    vmovss  [rbp+57h+var_70], xmm0
    vshufps xmm0, xmm1, xmm1, 55h ; 'U'
  }
  LODWORD(result.v[2]) = (_DWORD)_RAX;
  __asm
  {
    vmovss  [rbp+57h+var_68], xmm0
    vmovss  xmm0, dword ptr [rsp+120h+result+8]
    vmovss  [rbp+57h+var_64], xmm0
    vmovss  [rbp+57h+var_6C], xmm1
  }
  v44 = outputLuma;
  R_UploadAndSetComputeConstants(computeState, 0, &outMatrixR, 0x90u, NULL);
}

/*
==============
R_Tonemap_UpdateExposure
==============
*/
float R_Tonemap_UpdateExposure(GfxViewInfo *viewInfo)
{
  _RBX = viewInfo;
  __asm
  {
    vmovss  xmm0, cs:__real@40000000; X
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps [rsp+58h+var_38], xmm9
    vmovss  xmm9, cs:__real@4035c28f
    vsubss  xmm1, xmm9, dword ptr [rcx+380Ch]; Y
  }
  _RDI = &s_tonemapStateArray[viewInfo->viewInfoIndex];
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm7, xmm0, cs:__real@43340000
    vmovaps xmm0, xmm7; X
  }
  *(float *)&_XMM0 = logf_0(*(float *)&_XMM0);
  __asm { vmovaps xmm6, xmm0 }
  if ( !_RDI->valid )
  {
    _RBX->tonemap.blendExposure = 0;
    _RDI->valid = 1;
  }
  if ( _RBX->tonemap.blendExposure )
  {
    __asm
    {
      vsubss  xmm0, xmm0, dword ptr [rdi+4]
      vmulss  xmm1, xmm0, dword ptr [rbx+3814h]
      vaddss  xmm6, xmm1, dword ptr [rdi+4]
      vmovaps xmm0, xmm6; X
    }
    *(float *)&_XMM0 = expf_0(*(float *)&_XMM0);
    __asm { vmovaps xmm7, xmm0 }
  }
  __asm
  {
    vmovss  xmm0, cs:__real@40000000; X
    vmovss  dword ptr [rdi+4], xmm6
    vsubss  xmm1, xmm9, dword ptr [rbx+3808h]; Y
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm6, xmm0, cs:__real@43340000
    vmovss  xmm0, cs:__real@40000000; X
    vmovss  xmm1, dword ptr [rbx+3810h]; Y
  }
  *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmovaps xmm9, [rsp+58h+var_38]
    vmulss  xmm1, xmm0, xmm7
    vmovaps xmm7, [rsp+58h+var_28]
    vminss  xmm0, xmm6, xmm1
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
R_Tonemap_UpdateRadiometricScale
==============
*/
void R_Tonemap_UpdateRadiometricScale(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  __int64 clientIndex; 
  char v11; 
  __int64 v27; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 316, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 317, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( viewInfo->clientIndex >= gfxCfg.maxClientRenderViews )
  {
    LODWORD(v27) = viewInfo->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->clientIndex ) < (unsigned)( gfxCfg.maxClientRenderViews )", "viewInfo->clientIndex doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", v27, gfxCfg.maxClientRenderViews) )
      __debugbreak();
  }
  _RBP = data->tonemapExposureInfoIndex;
  clientIndex = viewInfo->clientIndex;
  _RBX = ((_BYTE)_RBP - 1) & 1;
  _RDI = &s_tonemapStateArray[clientIndex];
  __asm { vmovss  xmm6, dword ptr [rdi+rbx*4+8] }
  if ( !rg.debugShaderEnabled || (v11 = 0, rg.debugShaderLightingData) )
  {
    _RSI = r_radiometricScale;
    if ( !r_radiometricScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm3, dword ptr [rsi+28h] }
  }
  else
  {
    __asm { vmovss  xmm3, cs:__real@3f800000 }
  }
  __asm { vcomiss xmm3, cs:__real@c0200000 }
  if ( v11 )
  {
    __asm { vmovss  xmm1, cs:__real@3d800000 }
    _RAX = 3 * _RBX + 165;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rax*8]
      vmaxss  xmm2, xmm0, cs:__real@322bcc77
      vdivss  xmm3, xmm1, xmm2
    }
  }
  else
  {
    __asm { vcomiss xmm3, cs:__real@bfc00000 }
    if ( v11 )
    {
      _RAX = 3 * _RBX;
      __asm { vmovss  xmm3, dword ptr [rdi+rax*8+520h] }
    }
    else
    {
      __asm { vcomiss xmm3, cs:__real@bf000000 }
      if ( v11 )
      {
        _RAX = 3 * _RBX;
        __asm { vmovss  xmm3, dword ptr [rdi+rax*8+524h] }
      }
    }
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcmpeqss xmm1, xmm6, xmm0
    vmaxss  xmm0, xmm3, cs:__real@3a83126f
    vblendvps xmm4, xmm6, xmm3, xmm1
    vminss  xmm3, xmm0, cs:__real@48000000
    vmaxss  xmm0, xmm4, cs:__real@3a83126f
    vminss  xmm1, xmm0, cs:__real@48000000
    vmovaps xmm6, [rsp+58h+var_18]
    vmovss  dword ptr [rdi+rbp*4+10h], xmm1
    vmovss  dword ptr [rdi+rbp*4+8], xmm3
  }
}


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
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  const R_RT_Surface *Surface; 
  unsigned int maxSceneRtWidth; 
  unsigned int maxSceneRtHeight; 
  unsigned int SceneDownsampleVeilMip; 
  __int64 v15; 
  unsigned int SceneDownsampleVeilMipCount; 
  unsigned int SceneDownsampleTotalMipCount; 
  const dvar_t *v18; 
  unsigned int v19; 
  bool enabled; 
  RB_Perceptual_MipChain *v21; 
  __m256i *v22; 
  __int64 v23; 
  __m256i v24; 
  __int128 v25; 
  __m256i v26; 
  const char *m_location; 
  __int64 v28; 
  TonemapState *v29; 
  R_RT_Group *v30; 
  __m256i *p_sceneMipChain; 
  __m256i v32; 
  __int128 v33; 
  __m256i v34; 
  const char *v35; 
  const GfxViewInfo *v36; 
  R_RT_Handle v37; 
  const dvar_t *v39; 
  R_RT_Flags rtFlags; 
  R_RT_Handle v41; 
  bool v43; 
  GfxBackEndData *v44; 
  GfxCmdBufState *v45; 
  GfxCmdBufContext *v46; 
  RB_Perceptual_MipChain *v47; 
  __m256i *v48; 
  __int64 v49; 
  __m256i v50; 
  __int128 v51; 
  __m256i v52; 
  const char *v53; 
  __int64 v54; 
  TonemapState *v55; 
  R_RT_Group *v56; 
  __m256i *p_veilMipChain; 
  __m256i v58; 
  __int128 v59; 
  __m256i v60; 
  const char *v61; 
  __int64 v62; 
  unsigned int v63; 
  const GfxViewInfo *v64; 
  unsigned int v65; 
  RB_Perceptual_MipChain *v66; 
  __m256i *v67; 
  __int64 v68; 
  __m256i v69; 
  __int128 v70; 
  __m256i v71; 
  const char *v72; 
  __int64 v73; 
  __m256i *p_localLumaMipChain; 
  R_RT_Group *v75; 
  __m256i v76; 
  __int128 v77; 
  __m256i v78; 
  const char *v79; 
  unsigned int v80; 
  RB_Perceptual_MipChain *v81; 
  __m256i *v82; 
  __int64 v83; 
  __m256i v84; 
  __int128 v85; 
  __m256i v86; 
  const char *v87; 
  __int64 v88; 
  __m256i *p_filteredLocalLumaMipChain; 
  R_RT_Group *v90; 
  __m256i v91; 
  __int128 v92; 
  __m256i v93; 
  const char *v94; 
  R_RT_Handle v95; 
  const R_RT_Surface *v96; 
  const char *v97; 
  GfxImage *p_m_base; 
  __int64 v99; 
  R_RT_Handle *colorRts; 
  R_RT_Image *p_m_image; 
  __int64 v102; 
  float veilStrength; 
  float localStrength; 
  GfxCmdBufSourceState *v105; 
  float localEvBounds; 
  const R_RT_Surface *v107; 
  const char *v108; 
  GfxImage *blackImage; 
  __int128 v111; 
  __int64 v112; 
  ID3D12Resource *v113; 
  const char *name; 
  unsigned int m_allocCounter; 
  const char *v116; 
  R_RT_FlagsInternal rtFlagsInternal; 
  const GfxBackEndData *v118; 
  const dvar_t *v119; 
  int v120; 
  const dvar_t *v121; 
  const dvar_t *v122; 
  int v123; 
  int v124; 
  unsigned int v125; 
  R_RT_Handle v126; 
  bool v128; 
  const GfxViewInfo *v129; 
  unsigned __int16 m_surfaceID; 
  PostAAMode mode; 
  const dvar_t *v133; 
  const dvar_t *v134; 
  const dvar_t *v135; 
  int v136; 
  int v137; 
  R_RT_Handle v138; 
  bool v140; 
  __int64 m_colorRtCount; 
  unsigned __int64 v143; 
  unsigned int v145; 
  const R_RT_Surface *v146; 
  GfxCmdBufState *v147; 
  unsigned int v148; 
  unsigned int v149; 
  unsigned int v150; 
  const R_RT_Surface *v151; 
  ID3D12Resource *v152; 
  GfxCmdBufSourceState *v153; 
  GfxCmdBufInput *p_input; 
  __int128 v155; 
  TonemapState *v156; 
  unsigned int mipEnd; 
  unsigned int mipBegin; 
  unsigned int v159; 
  unsigned int v160; 
  unsigned int v161; 
  unsigned int v162; 
  unsigned int fmt; 
  unsigned int fmta; 
  unsigned int depth; 
  R_RT_Handle v166; 
  GfxCmdBufContext *v167; 
  const GfxViewInfo *v168; 
  unsigned int allocHeight; 
  unsigned int allocWidth; 
  unsigned int height; 
  unsigned int width; 
  GfxBackEndData *dataa; 
  R_RT_Handle v174; 
  ID3D12Resource *buffers[2]; 
  TonemapState *v176; 
  R_RT_Handle v177; 
  R_RT_Handle v178; 
  R_RT_Handle v179; 
  R_RT_Handle v180; 
  R_RT_Handle v181; 
  R_RT_Handle result; 
  R_RT_Handle v183; 
  R_RT_Group v184; 
  ComputeCmdBufState state; 
  _BYTE v186[64]; 

  v4 = !viewInfo->tonemap.enabled;
  dataa = (GfxBackEndData *)data;
  v168 = viewInfo;
  v167 = gfxContext;
  if ( !v4 )
  {
    if ( !activeGroup->m_colorRtCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1119, ASSERT_TYPE_ASSERT, "(activeGroup.m_colorRtCount > 0)", (const char *)&queryFormat, "activeGroup.m_colorRtCount > 0") )
      __debugbreak();
    if ( activeGroup->m_colorRtCount > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1121, ASSERT_TYPE_ASSERT, "(activeGroup.m_colorRtCount <= ( sizeof( *array_counter( s_tonemapColorNames ) ) + 0 ))", (const char *)&queryFormat, "activeGroup.m_colorRtCount <= ARRAY_COUNT( s_tonemapColorNames )") )
      __debugbreak();
    if ( activeGroup->m_colorRtCount > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1122, ASSERT_TYPE_ASSERT, "(activeGroup.m_colorRtCount <= ( sizeof( *array_counter( s_tonemapLumaNames ) ) + 0 ))", (const char *)&queryFormat, "activeGroup.m_colorRtCount <= ARRAY_COUNT( s_tonemapLumaNames )") )
      __debugbreak();
    v179 = (R_RT_Handle)activeGroup->m_colorRts[0];
    v178 = v179;
    v8 = R_RT_Handle::GetSurface(&v178)->m_image.m_base.height;
    v9 = R_RT_Handle::GetSurface(&v178)->m_image.m_base.width;
    v10 = 0;
    while ( v9 > 0xA0 || v8 > 0x5A )
    {
      ++v10;
      v9 >>= 1;
      v8 >>= 1;
    }
    if ( v10 )
    {
      Sys_ProfBeginNamedEvent(0xFFFF7F50, "Tone Mapping");
      R_ProfBeginNamedEvent(gfxContext->state, "Tone Mapping");
      R_GPU_BeginTimer(GPU_TIMER_TONEMAP);
      v176 = &s_tonemapStateArray[viewInfo->viewInfoIndex];
      v176->downsampleMipIndex = v10;
      width = R_RT_Handle::GetSurface(&v178)->m_image.m_base.width;
      height = R_RT_Handle::GetSurface(&v178)->m_image.m_base.height;
      allocWidth = R_RT_Handle::GetSurface(&v178)->m_allocWidth;
      Surface = R_RT_Handle::GetSurface(&v178);
      maxSceneRtWidth = viewInfo->sceneRtInput.maxSceneRtWidth;
      maxSceneRtHeight = viewInfo->sceneRtInput.maxSceneRtHeight;
      allocHeight = Surface->m_allocHeight;
      SceneDownsampleVeilMip = R_Perceptual_GetSceneDownsampleVeilMip(v10);
      v15 = SceneDownsampleVeilMip;
      SceneDownsampleVeilMipCount = R_Perceptual_GetSceneDownsampleVeilMipCount(maxSceneRtWidth, maxSceneRtHeight, SceneDownsampleVeilMip);
      SceneDownsampleTotalMipCount = R_Perceptual_GetSceneDownsampleTotalMipCount(v10, v15, SceneDownsampleVeilMipCount);
      v18 = DCONST_DVARBOOL_r_veilTonemap;
      v19 = SceneDownsampleTotalMipCount;
      if ( !DCONST_DVARBOOL_r_veilTonemap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_veilTonemap") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      enabled = v18->current.enabled;
      *(GfxCmdBufContext *)&v166.m_surfaceID = *v167;
      v21 = RB_Perceptual_CommitMipChain((RB_Perceptual_MipChain *)&state, (GfxCmdBufContext *)&v166, 1u, v19, maxSceneRtWidth, maxSceneRtHeight, GFX_RENDERTARGET_FORMAT_SCENE_MIP, (const char *const (*)[9])s_tonemapSceneMipNames);
      v22 = (__m256i *)&v184;
      v23 = 2i64;
      do
      {
        v22 += 4;
        v24 = *(__m256i *)&v21->mipBegin;
        v25 = *(_OWORD *)&v21->colorRts[3].m_tracking.m_allocCounter;
        v21 = (RB_Perceptual_MipChain *)((char *)v21 + 128);
        v22[-4] = v24;
        v22[-3] = (__m256i)v21[-1].colorRts[6];
        v22[-2] = (__m256i)v21[-1].colorRts[7];
        *(_OWORD *)v22[-1].m256i_i8 = *(_OWORD *)&v21[-1].colorRts[8].m_surfaceID;
        *(_OWORD *)&v22[-1].m256i_u64[2] = v25;
        --v23;
      }
      while ( v23 );
      v26 = *(__m256i *)&v21->mipBegin;
      m_location = v21->colorRts[0].m_tracking.m_location;
      v28 = 2i64;
      v29 = v176;
      *v22 = v26;
      v22[1].m256i_i64[0] = (__int64)m_location;
      v30 = &v184;
      *(_QWORD *)&v166.m_surfaceID = &v29->sceneMipChain;
      p_sceneMipChain = (__m256i *)&v29->sceneMipChain;
      do
      {
        p_sceneMipChain += 4;
        v32 = *(__m256i *)&v30->m_colorRtCount;
        v33 = *(_OWORD *)&v30->m_colorRts[3].m_tracking.m_allocCounter;
        v30 = (R_RT_Group *)((char *)v30 + 128);
        p_sceneMipChain[-4] = v32;
        p_sceneMipChain[-3] = (__m256i)v30[-1].m_colorRts[3];
        p_sceneMipChain[-2] = (__m256i)v30[-1].m_depthRt;
        *(_OWORD *)p_sceneMipChain[-1].m256i_i8 = *(_OWORD *)&v30[-1].m_vrsRt.m_surfaceID;
        *(_OWORD *)&p_sceneMipChain[-1].m256i_u64[2] = v33;
        --v28;
      }
      while ( v28 );
      v34 = *(__m256i *)&v30->m_colorRtCount;
      v35 = v30->m_colorRts[0].m_tracking.m_location;
      v36 = v168;
      *p_sceneMipChain = v34;
      v37 = v179;
      p_sceneMipChain[1].m256i_i64[0] = (__int64)v35;
      v179 = v37;
      _XMM0 = *v167;
      *(GfxCmdBufContext *)buffers = *v167;
      RB_Perceptual_DownsampleScene((GfxCmdBufContext *)buffers, &v29->sceneMipChain, v36, (R_RT_ColorHandle *)&v179, (VeilTonemapMode)enabled, v15);
      if ( Dvar_GetBool_Internal(r_deviceDebug) )
        goto LABEL_29;
      v39 = DCONST_DVARBOOL_r_esramPostFX;
      if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v39);
      rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView|R_RT_Flag_PreferESRAM;
      if ( !v39->current.enabled )
LABEL_29:
        rtFlags = R_RT_Flag_RWView|R_RT_Flag_RTView;
      v41 = *R_RT_CreateInternal(&result, maxSceneRtWidth >> v29->downsampleMipIndex, maxSceneRtHeight >> v29->downsampleMipIndex, maxSceneRtWidth >> v29->downsampleMipIndex, maxSceneRtHeight >> v29->downsampleMipIndex, 1u, 1u, 1u, g_R_RT_renderTargetFmts[20], rtFlags, R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "Local Luma", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1158)");
      v178 = v41;
      v174 = v41;
      if ( LOWORD(_XMM0.source) )
      {
        R_RT_Handle::GetSurface(&v174);
        if ( (R_RT_Handle::GetSurface(&v174)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        {
          v41 = v174;
          v178 = v174;
          __debugbreak();
        }
        else
        {
          v41 = v174;
          v178 = v174;
        }
      }
      else
      {
        __asm { vpextrd rax, xmm0, 2 }
        if ( (_DWORD)_RAX )
        {
          v43 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
          v41 = v178;
          if ( v43 )
            __debugbreak();
        }
      }
      v44 = dataa;
      v174 = v41;
      R_InitComputeCmdBufState(&state, dataa, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND);
      buffers[0] = v44->globalSceneConstantBuffer->buffer;
      R_SetComputeConstantBuffers(&state, 7, 1, buffers);
      v45 = v167->state;
      R_ComputeWaitForGraphics(&state, v45);
      v179 = v178;
      *(GfxCmdBufContext *)buffers = *v167;
      RB_Tonemap_CalculateCurve((GfxCmdBufContext *)buffers, &state, *(const RB_Perceptual_MipChain **)&v166.m_surfaceID, (const R_RT_ColorHandle *)&v179, v168);
      R_ShutdownComputeCmdBufState(&state);
      if ( (_DWORD)v15 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1172, ASSERT_TYPE_ASSERT, "(veilMipIndex > 0)", (const char *)&queryFormat, "veilMipIndex > 0") )
      {
        v46 = v167;
      }
      else
      {
        __debugbreak();
        v46 = v167;
        v45 = v167->state;
      }
      *(GfxCmdBufContext *)&v166.m_surfaceID = *v46;
      v47 = RB_Perceptual_CommitMipChain((RB_Perceptual_MipChain *)&state, (GfxCmdBufContext *)&v166, v15, SceneDownsampleVeilMipCount - 1, maxSceneRtWidth, maxSceneRtHeight, GFX_RENDERTARGET_FORMAT_SCENE_MIP, (const char *const (*)[9])s_tonemapVeilMipNames);
      v48 = (__m256i *)&v184;
      v49 = 2i64;
      do
      {
        v48 += 4;
        v50 = *(__m256i *)&v47->mipBegin;
        v51 = *(_OWORD *)&v47->colorRts[3].m_tracking.m_allocCounter;
        v47 = (RB_Perceptual_MipChain *)((char *)v47 + 128);
        v48[-4] = v50;
        v48[-3] = (__m256i)v47[-1].colorRts[6];
        v48[-2] = (__m256i)v47[-1].colorRts[7];
        *(_OWORD *)v48[-1].m256i_i8 = *(_OWORD *)&v47[-1].colorRts[8].m_surfaceID;
        *(_OWORD *)&v48[-1].m256i_u64[2] = v51;
        --v49;
      }
      while ( v49 );
      v52 = *(__m256i *)&v47->mipBegin;
      v53 = v47->colorRts[0].m_tracking.m_location;
      v54 = 2i64;
      v55 = v176;
      *v48 = v52;
      v48[1].m256i_i64[0] = (__int64)v53;
      v56 = &v184;
      p_veilMipChain = (__m256i *)&v55->veilMipChain;
      do
      {
        p_veilMipChain += 4;
        v58 = *(__m256i *)&v56->m_colorRtCount;
        v59 = *(_OWORD *)&v56->m_colorRts[3].m_tracking.m_allocCounter;
        v56 = (R_RT_Group *)((char *)v56 + 128);
        p_veilMipChain[-4] = v58;
        p_veilMipChain[-3] = (__m256i)v56[-1].m_colorRts[3];
        p_veilMipChain[-2] = (__m256i)v56[-1].m_depthRt;
        *(_OWORD *)p_veilMipChain[-1].m256i_i8 = *(_OWORD *)&v56[-1].m_vrsRt.m_surfaceID;
        *(_OWORD *)&p_veilMipChain[-1].m256i_u64[2] = v59;
        --v54;
      }
      while ( v54 );
      v60 = *(__m256i *)&v56->m_colorRtCount;
      v61 = v56->m_colorRts[0].m_tracking.m_location;
      *p_veilMipChain = v60;
      p_veilMipChain[1].m256i_i64[0] = (__int64)v61;
      R_Perceptual_UpdateVeilWeights(v168->thermalParams.useNightAndThermalVisionCombo);
      v62 = (__int64)v167;
      v63 = SceneDownsampleVeilMipCount;
      v64 = v168;
      *(GfxCmdBufContext *)&v166.m_surfaceID = *v167;
      RB_Perceptual_UpsampleScene((GfxCmdBufContext *)&v166, v168, v15, v63, &v55->sceneMipChain, &v55->veilMipChain, s_veilWeights);
      R_WaitAsyncCompute(v45, v44, COMPUTE_CONTEXT_TYPE_ASYNC_BACKEND, 0);
      R_Perceptual_UpdateLocalTonemapWeights();
      v65 = R_RT_Handle::GetSurface(&v174)->m_image.m_base.height;
      fmt = R_RT_Handle::GetSurface(&v174)->m_image.m_base.width;
      *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
      v66 = RB_Perceptual_CommitMipChain((RB_Perceptual_MipChain *)&state, (GfxCmdBufContext *)&v166, 0, 4u, fmt, v65, GFX_RENDERTARGET_FORMAT_HALF_FLOATZ, (const char *const (*)[9])s_tonemapLocalMipNames);
      v67 = (__m256i *)&v184;
      v68 = 2i64;
      do
      {
        v67 += 4;
        v69 = *(__m256i *)&v66->mipBegin;
        v70 = *(_OWORD *)&v66->colorRts[3].m_tracking.m_allocCounter;
        v66 = (RB_Perceptual_MipChain *)((char *)v66 + 128);
        v67[-4] = v69;
        v67[-3] = (__m256i)v66[-1].colorRts[6];
        v67[-2] = (__m256i)v66[-1].colorRts[7];
        *(_OWORD *)v67[-1].m256i_i8 = *(_OWORD *)&v66[-1].colorRts[8].m_surfaceID;
        *(_OWORD *)&v67[-1].m256i_u64[2] = v70;
        --v68;
      }
      while ( v68 );
      v71 = *(__m256i *)&v66->mipBegin;
      v72 = v66->colorRts[0].m_tracking.m_location;
      *v67 = v71;
      v67[1].m256i_i64[0] = (__int64)v72;
      v73 = 2i64;
      p_localLumaMipChain = (__m256i *)&v55->localLumaMipChain;
      v75 = &v184;
      do
      {
        p_localLumaMipChain += 4;
        v76 = *(__m256i *)&v75->m_colorRtCount;
        v77 = *(_OWORD *)&v75->m_colorRts[3].m_tracking.m_allocCounter;
        v75 = (R_RT_Group *)((char *)v75 + 128);
        p_localLumaMipChain[-4] = v76;
        p_localLumaMipChain[-3] = (__m256i)v75[-1].m_colorRts[3];
        p_localLumaMipChain[-2] = (__m256i)v75[-1].m_depthRt;
        *(_OWORD *)p_localLumaMipChain[-1].m256i_i8 = *(_OWORD *)&v75[-1].m_vrsRt.m_surfaceID;
        *(_OWORD *)&p_localLumaMipChain[-1].m256i_u64[2] = v77;
        --v73;
      }
      while ( v73 );
      v78 = *(__m256i *)&v75->m_colorRtCount;
      v79 = v75->m_colorRts[0].m_tracking.m_location;
      *p_localLumaMipChain = v78;
      p_localLumaMipChain[1].m256i_i64[0] = (__int64)v79;
      v80 = R_RT_Handle::GetSurface(&v174)->m_image.m_base.height;
      fmta = R_RT_Handle::GetSurface(&v174)->m_image.m_base.width;
      *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
      v81 = RB_Perceptual_CommitMipChain((RB_Perceptual_MipChain *)&state, (GfxCmdBufContext *)&v166, 0, 3u, fmta, v80, GFX_RENDERTARGET_FORMAT_HALF_FLOATZ, (const char *const (*)[9])s_tonemapLocalFilterMipNames);
      v82 = (__m256i *)&v184;
      v83 = 2i64;
      do
      {
        v82 += 4;
        v84 = *(__m256i *)&v81->mipBegin;
        v85 = *(_OWORD *)&v81->colorRts[3].m_tracking.m_allocCounter;
        v81 = (RB_Perceptual_MipChain *)((char *)v81 + 128);
        v82[-4] = v84;
        v82[-3] = (__m256i)v81[-1].colorRts[6];
        v82[-2] = (__m256i)v81[-1].colorRts[7];
        *(_OWORD *)v82[-1].m256i_i8 = *(_OWORD *)&v81[-1].colorRts[8].m_surfaceID;
        *(_OWORD *)&v82[-1].m256i_u64[2] = v85;
        --v83;
      }
      while ( v83 );
      v86 = *(__m256i *)&v81->mipBegin;
      v87 = v81->colorRts[0].m_tracking.m_location;
      *v82 = v86;
      v82[1].m256i_i64[0] = (__int64)v87;
      v88 = 2i64;
      p_filteredLocalLumaMipChain = (__m256i *)&v55->filteredLocalLumaMipChain;
      v90 = &v184;
      do
      {
        p_filteredLocalLumaMipChain += 4;
        v91 = *(__m256i *)&v90->m_colorRtCount;
        v92 = *(_OWORD *)&v90->m_colorRts[3].m_tracking.m_allocCounter;
        v90 = (R_RT_Group *)((char *)v90 + 128);
        p_filteredLocalLumaMipChain[-4] = v91;
        p_filteredLocalLumaMipChain[-3] = (__m256i)v90[-1].m_colorRts[3];
        p_filteredLocalLumaMipChain[-2] = (__m256i)v90[-1].m_depthRt;
        *(_OWORD *)p_filteredLocalLumaMipChain[-1].m256i_i8 = *(_OWORD *)&v90[-1].m_vrsRt.m_surfaceID;
        *(_OWORD *)&p_filteredLocalLumaMipChain[-1].m256i_u64[2] = v92;
        --v88;
      }
      while ( v88 );
      v93 = *(__m256i *)&v90->m_colorRtCount;
      v94 = v90->m_colorRts[0].m_tracking.m_location;
      *p_filteredLocalLumaMipChain = v93;
      v95 = v178;
      p_filteredLocalLumaMipChain[1].m256i_i64[0] = (__int64)v94;
      depth = v55->localLumaMipChain.mipEnd;
      v179 = v95;
      *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
      RB_Perceptual_DownsampleScene((GfxCmdBufContext *)&v166, &v55->localLumaMipChain, v64, (R_RT_ColorHandle *)&v179, R_VEIL_TONEMAP_DISABLED, depth);
      *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
      RB_Perceptual_UpsampleScene((GfxCmdBufContext *)&v166, v64, 0, 4u, &v55->localLumaMipChain, &v55->filteredLocalLumaMipChain, s_localTonemapWeights);
      if ( v64->perceptual.veilEnabled )
      {
        if ( !(_DWORD)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 1190, ASSERT_TYPE_ASSERT, "(veilMipIndex > 0)", (const char *)&queryFormat, "veilMipIndex > 0") )
          __debugbreak();
        v96 = R_RT_Handle::GetSurface(&v55->veilMipChain.colorRts[v15]);
        v97 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1191)";
        p_m_base = &v96->m_image.m_base;
      }
      else
      {
        p_m_base = rgp.blackImage;
        v97 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1195)";
      }
      v99 = *(_QWORD *)v62;
      R_SetCodeImageTextureInternal(*(GfxCmdBufSourceState **)v62, 0x15u, p_m_base, v97);
      colorRts = v55->filteredLocalLumaMipChain.colorRts;
      p_m_image = &R_RT_Handle::GetSurface(v55->filteredLocalLumaMipChain.colorRts)->m_image;
      if ( !v99 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      v102 = v99 + 1792;
      if ( !v102 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      *(_QWORD *)(v102 + 6320) = p_m_image;
      veilStrength = v64->perceptual.veilStrength;
      localStrength = v64->tonemap.localStrength;
      v105 = *(GfxCmdBufSourceState **)v62;
      localEvBounds = v64->tonemap.localEvBounds;
      v105->input.consts[124].v[0] = veilStrength;
      v105->input.consts[124].v[1] = 1.0 - veilStrength;
      v105->input.consts[124].v[2] = localStrength;
      v105->input.consts[124].v[3] = localEvBounds;
      ++v105->constVersions[124];
      if ( localStrength <= 0.0 )
      {
        blackImage = rgp.blackImage;
        v108 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1211)";
      }
      else
      {
        v107 = R_RT_Handle::GetSurface(colorRts);
        v108 = "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1207)";
        blackImage = &v107->m_image.m_base;
      }
      R_SetCodeImageTextureInternal(v105, 0x16u, blackImage, v108);
      _XMM0 = *(_OWORD *)v62;
      *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
      RB_SetupUIWhiteBalanceParams((GfxCmdBufContext *)&v166, v64);
      v111 = *(_OWORD *)v62;
      v179 = (R_RT_Handle)activeGroup->m_colorRts[0];
      *(_OWORD *)&v166.m_surfaceID = v111;
      R_Screenshot_HdrExposedScene((GfxCmdBufContext *)&v166, v64, dataa, (R_RT_ColorHandle *)&v179);
      v112 = activeGroup->m_colorRtCount - 1i64;
      dataa = (GfxBackEndData *)v112;
      if ( v112 >= 0 )
      {
        v113 = (ID3D12Resource *)&activeGroup->m_colorRts[v112];
        buffers[0] = v113;
        do
        {
          name = "Tonemap Color";
          m_allocCounter = 0;
          v116 = "Tonemap Luma";
          rtFlagsInternal = R_RT_FlagInternal_None;
          if ( R_PostAAHasTemporalSupersampling(v64->postAA.mode) )
          {
            v118 = v64->input.data;
            rtFlagsInternal = 2;
            name = s_tonemapColorNames[v118->frameIndex & 1];
            v116 = s_tonemapLumaNames[v112][v118->frameCount & 3];
          }
          v119 = DCONST_DVARINT_r_dccPostFX;
          result = *(R_RT_Handle *)&v113->m_pFunction;
          v183 = result;
          if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v119);
          v120 = 0;
          if ( v119->current.integer == 1 )
            v120 = 8;
          v121 = r_deviceDebug;
          if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v121);
          if ( v121->current.enabled )
            goto LABEL_86;
          v122 = DCONST_DVARBOOL_r_esramPostFX;
          if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v122);
          v123 = 6208;
          if ( !v122->current.enabled )
LABEL_86:
            v123 = 6144;
          v124 = v120 | v123;
          v125 = 0;
          v126 = *R_RT_CreateInternal(&v181, width, height, allocWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[1], (R_RT_Flags)v124, rtFlagsInternal, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, name, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1241)");
          v180 = v126;
          v174 = v126;
          if ( (_WORD)_XMM0 )
          {
            R_RT_Handle::GetSurface(&v174);
            if ( (R_RT_Handle::GetSurface(&v174)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
            {
              v126 = v174;
              v180 = v174;
              __debugbreak();
            }
            else
            {
              v126 = v174;
              v180 = v174;
            }
          }
          else
          {
            __asm { vpextrd rax, xmm0, 2 }
            if ( (_DWORD)_RAX )
            {
              v128 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
              v126 = v180;
              if ( v128 )
                __debugbreak();
            }
          }
          v129 = v168;
          m_surfaceID = 0;
          v179 = v126;
          __asm { vpxor   xmm0, xmm0, xmm0 }
          v177.m_surfaceID = 0;
          mode = v168->postAA.mode;
          v177.m_tracking.m_allocCounter = 0;
          *(_OWORD *)&v177.m_tracking.m_name = _XMM0;
          if ( R_PostAAIsSMAA(mode) )
          {
            v133 = DCONST_DVARINT_r_dccPostFX;
            if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v133);
            if ( v133->current.integer == 1 )
              v125 = 8;
            v134 = r_deviceDebug;
            if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v134);
            if ( v134->current.enabled )
              goto LABEL_109;
            v135 = DCONST_DVARBOOL_r_esramPostFX;
            if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v135);
            v136 = 6208;
            if ( !v135->current.enabled )
LABEL_109:
              v136 = 6144;
            v137 = v125 | v136;
            v125 = 0;
            v138 = *R_RT_CreateInternal(&v181, width, height, allocWidth, allocHeight, 1u, 1u, 1u, g_R_RT_renderTargetFmts[36], (R_RT_Flags)v137, rtFlagsInternal, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, v116, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1247)");
            v174 = v138;
            v177 = v138;
            if ( (_WORD)_XMM0 )
            {
              R_RT_Handle::GetSurface(&v177);
              if ( (R_RT_Handle::GetSurface(&v177)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
              {
                v138 = v177;
                v174 = v177;
                __debugbreak();
              }
              else
              {
                v138 = v177;
                v174 = v177;
              }
            }
            else
            {
              __asm { vpextrd rax, xmm0, 2 }
              if ( (_DWORD)_RAX )
              {
                v140 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter");
                v138 = v174;
                if ( v140 )
                  __debugbreak();
              }
            }
            m_colorRtCount = v129->sceneRtInput.m_lumaGroup.m_colorRtCount;
            v177 = v138;
            m_allocCounter = v177.m_tracking.m_allocCounter;
            m_surfaceID = v177.m_surfaceID;
            v129->sceneRtInput.m_lumaGroup.m_colorRts[m_colorRtCount] = (R_RT_ColorHandle)v138;
            ++v129->sceneRtInput.m_lumaGroup.m_colorRtCount;
          }
          else
          {
            v138 = v177;
            v174 = v177;
          }
          *(R_RT_Handle *)&v186[32] = v138;
          v166.m_surfaceID = 0;
          v166.m_tracking.m_allocCounter = 0;
          __asm { vpxor   xmm0, xmm0, xmm0 }
          *(_OWORD *)&v166.m_tracking.m_name = _XMM0;
          *(R_RT_Handle *)v186 = v180;
          if ( m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v177);
          }
          else if ( m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          {
            __debugbreak();
          }
          v184.m_colorRtCount = (m_surfaceID != 0) + 1;
          do
          {
            v143 = 32i64 * v125;
            v181 = *(R_RT_Handle *)&v186[v143];
            if ( (_WORD)_XMM0 )
            {
              R_RT_Handle::GetSurface(&v181);
            }
            else
            {
              __asm { vpextrd rax, xmm0, 2 }
              if ( (_DWORD)_RAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
                __debugbreak();
            }
            ++v125;
            v184.m_colorRts[v143 / 0x20] = *(R_RT_ColorHandle *)&v186[v143];
          }
          while ( v125 != (m_surfaceID != 0) + 1 );
          v184.m_depthRt = (R_RT_DepthHandle)v166;
          v166 = *R_RT_Group::GetValidRt(&v184, &v181);
          v145 = R_RT_Handle::GetSurface(&v166)->m_image.m_base.height;
          v146 = R_RT_Handle::GetSurface(&v166);
          v62 = (__int64)v167;
          R_SetRenderTargetSize(v167->source, v146->m_image.m_base.width, v145, GFX_USE_VIEWPORT_FOR_VIEW);
          *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
          R_SetRenderTargetsInternal((GfxCmdBufContext *)&v166, &v184, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1257)");
          v147 = *(GfxCmdBufState **)(v62 + 8);
          v181 = v180;
          R_AddRenderTargetTransition(v147, (R_RT_ColorHandle *)&v181, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          v148 = v177.m_tracking.m_allocCounter;
          if ( m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v177);
          }
          else if ( v177.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          {
            __debugbreak();
          }
          if ( m_surfaceID )
          {
            v181 = v174;
            R_AddRenderTargetTransition(v147, (R_RT_ColorHandle *)&v181, RENDERTARGET_TRANSITION_MODE_WRITE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          R_FlushResourceTransitions(v147);
          v149 = R_RT_Handle::GetSurface(&v179)->m_image.m_base.height;
          v150 = R_RT_Handle::GetSurface(&v179)->m_image.m_base.width;
          v151 = R_RT_Handle::GetSurface(&v183);
          *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
          R_Tonemap_Filter((GfxCmdBufContext *)&v166, v168, &v151->m_image.m_base, v150, v149);
          v183 = v180;
          R_AddRenderTargetTransition(v147, (R_RT_ColorHandle *)&v183, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          if ( m_surfaceID )
          {
            R_RT_Handle::GetSurface(&v177);
          }
          else if ( v148 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          {
            __debugbreak();
            v147 = *(GfxCmdBufState **)(v62 + 8);
          }
          if ( m_surfaceID )
          {
            v183 = v174;
            R_AddRenderTargetTransition(v147, (R_RT_ColorHandle *)&v183, RENDERTARGET_TRANSITION_MODE_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
          }
          R_FlushResourceTransitions(v147);
          *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
          R_RT_Destroy((GfxCmdBufContext *)&v166, (R_RT_ColorHandle *)&result);
          _XMM0 = *(_OWORD *)v62;
          *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
          R_UnbindRenderTarget((GfxCmdBufContext *)&v166);
          v152 = buffers[0];
          v64 = v168;
          v112 = (__int64)&dataa[-1].rttContext + 559;
          *(R_RT_Handle *)buffers[0] = v180;
          v113 = v152 - 2;
          dataa = (GfxBackEndData *)v112;
          buffers[0] = v113;
        }
        while ( v112 >= 0 );
      }
      v153 = *(GfxCmdBufSourceState **)v62;
      if ( !*(_QWORD *)v62 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      p_input = &v153->input;
      if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      result = v178;
      v155 = *(_OWORD *)v62;
      p_input->codeImages[21] = NULL;
      *(_OWORD *)&v166.m_surfaceID = v155;
      R_RT_Destroy((GfxCmdBufContext *)&v166, (R_RT_ColorHandle *)&result);
      v156 = v176;
      *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
      RB_Perceptual_DecommitMipChain((GfxCmdBufContext *)&v166, &v176->localLumaMipChain, v176->localLumaMipChain.mipBegin, v176->localLumaMipChain.mipEnd);
      mipEnd = v156->filteredLocalLumaMipChain.mipEnd;
      mipBegin = v156->filteredLocalLumaMipChain.mipBegin;
      *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
      RB_Perceptual_DecommitMipChain((GfxCmdBufContext *)&v166, &v156->filteredLocalLumaMipChain, mipBegin, mipEnd);
      v159 = v156->veilMipChain.mipEnd;
      v160 = v156->veilMipChain.mipBegin;
      *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
      RB_Perceptual_DecommitMipChain((GfxCmdBufContext *)&v166, &v156->veilMipChain, v160, v159);
      v161 = v156->sceneMipChain.mipEnd;
      v162 = v156->sceneMipChain.mipBegin;
      *(_OWORD *)&v166.m_surfaceID = *(_OWORD *)v62;
      RB_Perceptual_DecommitMipChain((GfxCmdBufContext *)&v166, &v156->sceneMipChain, v162, v161);
      R_GPU_EndTimer();
      R_ProfEndNamedEvent(*(CmdBufState **)(v62 + 8));
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
  __m256i m_floatZFullRt; 
  __int64 clientIndex; 
  TonemapState *v21; 
  __int64 tonemapExposureInfoIndex; 
  _DWORD *p_unusedfilmicCrossover; 
  __int64 flag; 
  __int64 flaga; 
  __int64 v26; 
  __int64 v27; 
  R_RT_Handle v28; 
  R_RT_ColorHandle v29; 
  R_RT_ColorHandle v30; 
  R_RT_Handle v31; 

  Value = (char *)Sys_GetValue(0);
  v9 = (unsigned int *)(Value + 6296);
  if ( (unsigned int)(*((_DWORD *)Value + 1574) + 1) >= 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", *((_DWORD *)Value + 1574) + 1, 3) )
    __debugbreak();
  v10 = *v9 + 1;
  *v9 = v10;
  if ( v10 >= 3 )
  {
    LODWORD(v26) = 3;
    LODWORD(flag) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", flag, v26) )
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
  viewInfoIndex = viewInfo->viewInfoIndex;
  downsampleMipIndex = s_tonemapStateArray[viewInfoIndex].downsampleMipIndex;
  if ( !(_DWORD)downsampleMipIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 763, ASSERT_TYPE_ASSERT, "(downsampleMipIndex > 0)", (const char *)&queryFormat, "downsampleMipIndex > 0") )
    __debugbreak();
  p_exposureInfoStructuredBuffer = &s_tonemapStateArray[viewInfoIndex].exposureInfoStructuredBuffer;
  v29 = sceneMipChain->colorRts[downsampleMipIndex];
  R_HW_AddResourceTransition(computeState, p_exposureInfoStructuredBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v28 = localLuma->R_RT_Handle;
  R_HW_AddResourceTransition(computeState, &v28, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  m_floatZFullRt = (__m256i)viewInfo->sceneRtInput.m_floatZFullRt;
  v30 = *localLuma;
  v31 = (R_RT_Handle)v30;
  v28 = (R_RT_Handle)m_floatZFullRt;
  R_Tonemap_CalculateExposureCS(computeState, viewInfo, &v29, (const R_RT_ColorHandle *)&v31, &v30, (const R_RT_ColorHandle *)&v28, rgp.blackImage, p_exposureInfoStructuredBuffer, 1);
  R_HW_AddResourceTransition(computeState, p_exposureInfoStructuredBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_GENERIC_READ, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  v31 = localLuma->R_RT_Handle;
  R_HW_AddResourceTransition(computeState, &v31, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  R_FlushResourceTransitions(computeState);
  clientIndex = viewInfo->clientIndex;
  if ( (unsigned int)clientIndex >= gfxCfg.maxClientRenderViews )
  {
    LODWORD(v27) = gfxCfg.maxClientRenderViews;
    LODWORD(flaga) = viewInfo->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 684, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( gfxCfg.maxClientRenderViews )", "client doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", flaga, v27) )
      __debugbreak();
  }
  v21 = &s_tonemapStateArray[clientIndex];
  tonemapExposureInfoIndex = viewInfo->input.data->tonemapExposureInfoIndex;
  p_unusedfilmicCrossover = (_DWORD *)&v21->exposureInfo->unusedfilmicCrossover;
  v21->readbackInfo[tonemapExposureInfoIndex].exposure = (float)p_unusedfilmicCrossover[13];
  v21->readbackInfo[tonemapExposureInfoIndex].sceneExposure = (float)p_unusedfilmicCrossover[15];
  v21->readbackInfo[tonemapExposureInfoIndex].sceneAvgKiloNits = (float)p_unusedfilmicCrossover[3];
  v21->readbackInfo[tonemapExposureInfoIndex].sceneAmbientAvgKiloNits = (float)p_unusedfilmicCrossover[16];
  v21->readbackInfo[tonemapExposureInfoIndex].imageKey = (float)p_unusedfilmicCrossover[2];
  v21->readbackInfo[tonemapExposureInfoIndex].exposureAndRadiometricScale = (float)p_unusedfilmicCrossover[14];
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
  Dvar_BeginPermanentRegistration();
  DVARBOOL_r_tonemapUseTweaks = Dvar_RegisterBool("LTPMPPQQKK", 0, 0x44u, "Override tone map LightSet settings with tweak dvar values.");
  DVARBOOL_r_tonemap = Dvar_RegisterBool("MQNOKQQTSO", 1, 0x44u, "Tonemap disable");
  DVARBOOL_r_tonemapAuto = Dvar_RegisterBool("LSRSRKPLSR", 0, 0x44u, "HDR Tonemapping performs auto-exposure");
  DVARBOOL_r_tonemapBlend = Dvar_RegisterBool("PSKPSLTQL", 1, 0x44u, "HDR Tonemapping blends between exposures");
  DVARBOOL_r_tonemapAdaptOnPause = Dvar_RegisterBool("NKQNRTNOTL", 0, 0x44u, "Keep exposure adaption going even while paused");
  DVARFLT_r_tonemapExposure = Dvar_RegisterFloat("QONSKKTRL", 10.0, -10.0, 32.0, 0x40u, "HDR Tonemap exposure (in EV) override (only works in non-auto mode)");
  DVARFLT_r_tonemapExposureAdjust = Dvar_RegisterFloat("PSKPQRRQQ", 0.0, -20.0, 20.0, 0x40u, "HDR Tonemap exposure adjustment (in EV, 0 is no adjustment, works like a camera where +1 reduces EV by 1)");
  DCONST_DVARFLT_r_tonemapMaxExposure = Dvar_RegisterFloat("r_tonemapMaxExposure", -10.0, -10.0, 32.0, 0x40004u, "HDR Tonemap maximum exposure (in EV)");
  DCONST_DVARBOOL_r_tonemapLockAutoExposureAdjust = Dvar_RegisterBool("r_tonemapLockAutoExposureAdjust", 1, 0x40004u, "HDR Tonemapping lock auto exposure adjust");
  DCONST_DVARFLT_r_tonemapAutoExposureAdjust = Dvar_RegisterFloat("r_tonemapAutoExposureAdjust", 0.0, -20.0, 20.0, 0x40004u, "HDR Tonemap Auto Exposure Adjust value (set to 0.0 for automatic adjustment)");
  DVARFLT_r_tonemapAdaptSpeed = Dvar_RegisterFloat("MNSNPONNLP", 0.02, 0.000099999997, 1.0, 0x40u, "HDR Tonemap exposure adaptation speed");
  DVARFLT_r_tonemapGrainStrength = Dvar_RegisterFloat("MRRSKNSLO", 0.0, 0.0, 1.0, 0x40u, "HDR Tonemap Film Grain Strength");
  DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision = Dvar_RegisterBool("r_tonemapUseRegularTonemapForNightVision", 0, 0x40004u, "Override thermal tonemap with regular tonemap");
  DVARFLT_r_tonemapUniversalBaseExposureAdjust = Dvar_RegisterFloat("NNTKQMMSMM", 1.5, -20.0, 20.0, 0, "Universal tonemap exposure adjustment (in EV) set so that exposureAdjust 0.0 gets a resonable exposure in HDR Capable mode");
  DVARFLT_r_filmGrainAtten = Dvar_RegisterFloat("LKOLMLQRRT", 0.25, 0.0, 1.0, 0, "Film Grain Attenuation value. Intended for use in UI options to reduce strength of noise vs. TV sharpness settings.");
  DVARFLT_r_tonemapFocus = Dvar_RegisterFloat("NNONKTMKRQ", 2.0, 0.0, 64.0, 1u, "Tonemap Central Focus : 0.0 - 64.0 (0.0f = uniform weight for each pixel");
  DVARFLT_r_tonemapScopeFocus = Dvar_RegisterFloat("LNNNQOSSQQ", 0.31400001, 0.0, 0.94999999, 1u, "Tonemap Scope Focus : 0.0 - 1.0 (0.0f = use scene weight only 1.0f = use scope weight only when in ADS");
  DVARFLT_r_tonemapLocalStrength = Dvar_RegisterFloat("LTSRTRRSNQ", 0.0, 0.0, 64.0, 1u, "Tonemap Local adaptation strength. Specifies local blending between global and local tonemapper.");
  DVARFLT_r_tonemapLocalEvBounds = Dvar_RegisterFloat("MTQNPPMQRT", 4.0, 0.0, 16.0, 1u, "Tonemap Local adaptation EV bounds. Specifies EV range in which local tonemapper is switched off (0 means it is on for all pixels, 16 it is on for pixels further away from mean by 16EV.");
  DVARVEC4_r_tonemapLocalWeights = Dvar_RegisterVec4("MMNOKOORO", 0.025, 0.050000001, 0.2, 0.80000001, 0.0, 1.0, 1u, "Tonemap Local adaptation kernel weights.");
  DCONST_DVARVEC4_r_nvgColorGradeLift = Dvar_RegisterVec4("r_nvgColorGradeLift", 0.0, -0.000099999997, -0.000099999997, -0.55000001, -0.60000002, 0.60000002, 0x40004u, "NVG color grade lift");
  DCONST_DVARVEC4_r_nvgColorGradeGamma = Dvar_RegisterVec4("r_nvgColorGradeGamma", 1.1210001, 0.75800002, 0.78399998, 0.61199999, 0.5, 3.0, 0x40004u, "NVG color grade gamma");
  DCONST_DVARVEC4_r_nvgColorGradeGain = Dvar_RegisterVec4("r_nvgColorGradeGain", 1.0, 1.0, 1.0, 20.0, 0.0, 20.0, 0x40004u, "NVG color grade gain");
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
void R_InitTonemap(void)
{
  float *p_sceneAvgKiloNits; 
  unsigned int *v1; 
  GfxWrappedBuffer *p_exposureInfoConstantBuffer; 
  _QWORD *initialData; 
  float *v4; 
  __int64 v5; 
  unsigned int *v6; 
  float *v7; 
  __int64 v8; 

  RB_Tonemap_RegisterDvars();
  p_sceneAvgKiloNits = &s_tonemapStateArray[0].readbackInfo[0].sceneAvgKiloNits;
  v8 = 2i64;
  v1 = s_tonemapFrame;
  v7 = &s_tonemapStateArray[0].readbackInfo[0].sceneAvgKiloNits;
  v6 = s_tonemapFrame;
  p_exposureInfoConstantBuffer = &s_tonemapStateArray[0].exposureInfoConstantBuffer;
  do
  {
    *v1 = 0;
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
    v4 = p_sceneAvgKiloNits;
    v5 = 2i64;
    do
    {
      if ( *(v4 - 2) != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 468, ASSERT_TYPE_ASSERT, "(info->exposure == 0.0f)", (const char *)&queryFormat, "info->exposure == 0.0f") )
        __debugbreak();
      if ( v4[2] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 469, ASSERT_TYPE_ASSERT, "(info->imageKey == 0.0f)", (const char *)&queryFormat, "info->imageKey == 0.0f") )
        __debugbreak();
      if ( *v4 != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 470, ASSERT_TYPE_ASSERT, "(info->sceneAvgKiloNits == 0.0f)", (const char *)&queryFormat, "info->sceneAvgKiloNits == 0.0f") )
        __debugbreak();
      if ( v4[1] != 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 471, ASSERT_TYPE_ASSERT, "(info->sceneAmbientAvgKiloNits == 0.0f)", (const char *)&queryFormat, "info->sceneAmbientAvgKiloNits == 0.0f") )
        __debugbreak();
      v4 += 6;
      --v5;
    }
    while ( v5 );
    v1 = v6 + 1;
    p_sceneAvgKiloNits = v7 + 340;
    ++v6;
    p_exposureInfoConstantBuffer = (GfxWrappedBuffer *)((char *)p_exposureInfoConstantBuffer + 1360);
    v7 += 340;
    --v8;
  }
  while ( v8 );
  R_CreateGfxWrappedBuffer(&s_reductionBuffer, GfxWrappedBuffer_Raw, 4, 0xA00u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, NULL, NULL, "Tonemapping reduction buffer");
}

/*
==============
R_Screenshot_HdrExposedScene
==============
*/
void R_Screenshot_HdrExposedScene(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo, const GfxBackEndData *data, R_RT_ColorHandle *srcRt)
{
  __int128 v5; 
  int v9; 
  Material *tonemapGradingScreenshotMaterial; 
  const GfxImage *thermalRadiationLut; 
  unsigned int height; 
  const R_RT_Surface *Surface; 
  GfxCmdBufContext v14; 
  const R_RT_Surface *v16; 
  GfxCmdBufSourceState *source; 
  R_RT_Image *p_m_image; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufContext v20; 
  float v21; 
  float width; 
  GfxCmdBufState *state; 
  R_RT_Handle v24; 
  R_RT_Handle v25; 
  R_RT_Handle v26; 
  R_RT_Handle v27; 
  R_RT_Group v28; 
  GfxViewport v29; 
  R_RT_ColorHandle result; 
  R_RT_Group v31; 
  __int128 v32; 

  LOBYTE(v9) = R_Screenshot_GetDeferredScreenshotPipelineStage(viewInfo->deferredScreenshotIndex);
  if ( v9 == 4 )
  {
    R_Screenshot_CreateDeferredRt(&result, EASE_IN_CUBIC, GFX_RENDERTARGET_FORMAT_SCENEBUFFER, viewInfo->deferredScreenshotIndex, 0x780u, 0x4B0u);
    if ( result.m_surfaceID )
    {
      v32 = v5;
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
      v29.width = 1920;
      *(_QWORD *)&v29.x = 0i64;
      v25 = (R_RT_Handle)result;
      v29.height = 1200;
      height = R_RT_Handle::GetSurface(&v25)->m_image.m_base.height;
      Surface = R_RT_Handle::GetSurface(&v25);
      R_SetRenderTargetSize(gfxContext->source, Surface->m_image.m_base.width, height, GFX_USE_VIEWPORT_FULL);
      v14 = *gfxContext;
      v26 = (R_RT_Handle)result;
      v24 = (R_RT_Handle)result;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v24);
        v26 = v24;
      }
      else
      {
        if ( result.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 453, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v25.m_tracking.m_name = _XMM0;
      v25.m_surfaceID = 0;
      v25.m_tracking.m_allocCounter = 0;
      v28.m_colorRtCount = 1;
      v27 = v26;
      if ( (_WORD)_XMM0 )
      {
        R_RT_Handle::GetSurface(&v27);
      }
      else
      {
        if ( v24.m_tracking.m_allocCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 442, ASSERT_TYPE_ASSERT, "(colorRt)", (const char *)&queryFormat, "colorRt") )
          __debugbreak();
      }
      v28.m_colorRts[0] = (R_RT_ColorHandle)v26;
      v28.m_depthRt = (R_RT_DepthHandle)v25;
      v31 = v28;
      *(GfxCmdBufContext *)&v24.m_surfaceID = v14;
      R_SetRenderTargetsInternal((GfxCmdBufContext *)&v24, &v31, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(989)");
      v16 = R_RT_Handle::GetSurface(srcRt);
      source = gfxContext->source;
      p_m_image = &v16->m_image;
      if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
        __debugbreak();
      p_input = &source->input;
      if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
        __debugbreak();
      v20 = *gfxContext;
      p_input->codeImages[4] = &p_m_image->m_base;
      v21 = (float)v29.height;
      width = (float)v29.width;
      *(GfxCmdBufContext *)&v24.m_surfaceID = v20;
      RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&v24, tonemapGradingScreenshotMaterial, 0xFFFFFFFF, &v29, 0.0, 0.0, width, v21, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(991)");
      state = gfxContext->state;
      v27 = (R_RT_Handle)result;
      R_HW_AddResourceTransition(state, &v27, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(gfxContext->state);
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
  R_RT_Handle v10; 
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
      v10 = (R_RT_Handle)result;
      R_HW_AddResourceTransition(computeState, &v10, D3D12_RESOURCE_STATE_RENDER_TARGET, D3D12_RESOURCE_STATE_COPY_SOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
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
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  bool v17; 
  ComputeShader *logAccumFromTex2dComputeShader; 
  float focus; 
  __int64 m_pFunction_high; 
  __int64 clientIndex; 
  float v22; 
  const GfxBackEndData *v23; 
  const R_RT_Surface *Surface; 
  R_RT_Handle *v25; 
  GfxTextureId textureId; 
  const R_RT_Surface *v27; 
  const R_RT_Surface *v28; 
  BOOL lockAutoExposureAdjust; 
  float userExposure; 
  BOOL autoExposure; 
  float userExposureAdjust; 
  float userMaxExposure; 
  float v34; 
  char *fmt; 
  __int64 flag; 
  R_RT_Handle *p_view; 
  R_RT_Handle *p_rwView; 
  ID3D12Resource *buffers; 
  R_RT_Handle *Resident; 
  R_RT_Handle *v41; 
  GfxTexture *textures; 
  GfxShaderBufferRWView *views; 
  __int64 data; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  float v49; 
  float v50; 
  int v51[10]; 
  int v52; 
  BOOL v53; 
  float userAutoExposureAdjust; 
  float v55; 
  float v56; 
  float v57; 
  __m256i v58; 
  unsigned int v59[4]; 

  p_rwView = &ambientLumaRt->R_RT_Handle;
  v41 = &floatZFull->R_RT_Handle;
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
    v14 = (height + 7) >> 3;
    v15 = (width + 7) >> 3;
    v16 = v15 * v14;
    if ( v15 * v14 > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 527, ASSERT_TYPE_ASSERT, "(( 4 * 128 ) >= groupsX * groupsY)", (const char *)&queryFormat, "REDUCTION_BUFFER_SIZE >= groupsX * groupsY") )
      __debugbreak();
    v17 = viewInfo->thermalParams.useNightAndThermalVisionCombo && !viewInfo->thermalParams.useScopedNVG;
    logAccumFromTex2dComputeShader = rgp.logAccumFromTex2dComputeShader;
    if ( v17 )
      logAccumFromTex2dComputeShader = rgp.logAccumFromTex2dNvgComputeShader;
    R_SetComputeShader(state, logAccumFromTex2dComputeShader);
    buffers = (ID3D12Resource *)state->data;
    focus = viewInfo->tonemap.focus;
    if ( !buffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 361, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( viewInfo->clientIndex >= gfxCfg.maxClientRenderViews )
    {
      LODWORD(flag) = viewInfo->clientIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->clientIndex ) < (unsigned)( gfxCfg.maxClientRenderViews )", "viewInfo->clientIndex doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", flag, gfxCfg.maxClientRenderViews) )
        __debugbreak();
    }
    m_pFunction_high = HIDWORD(buffers[1968].m_pFunction);
    clientIndex = viewInfo->clientIndex;
    v49 = focus;
    v47 = (width + 7) >> 3;
    v48 = (height + 7) >> 3;
    v22 = s_tonemapStateArray[clientIndex].radiometricScale[m_pFunction_high];
    data = 0i64;
    v45 = width - 1;
    v46 = height - 1;
    v23 = state->data;
    v50 = 1.0 / v22;
    buffers = v23->globalSceneConstantBuffer->buffer;
    R_SetComputeConstantBuffers(state, 7, 1, &buffers);
    R_UploadAndSetComputeConstants(state, 0, &data, 0x20u, NULL);
    Surface = R_RT_Handle::GetSurface(Resident);
    Resident = (R_RT_Handle *)R_Texture_GetResident(Surface->m_image.m_base.textureId);
    R_SetComputeTextures(state, 0, 1, (const GfxTexture *const *)&Resident);
    v25 = v41;
    if ( R_RT_Handle::IsValid(v41) )
      textureId = R_RT_Handle::GetSurface(v25)->m_image.m_base.textureId;
    else
      textureId = rgp.blackImage->textureId;
    v41 = (R_RT_Handle *)R_Texture_GetResident(textureId);
    R_SetComputeTextures(state, 1, 1, (const GfxTexture *const *)&v41);
    textures = (GfxTexture *)R_Texture_GetResident((GfxTextureId)textures->shaderView.view);
    R_SetComputeTextures(state, 2, 1, (const GfxTexture *const *)&textures);
    v27 = R_RT_Handle::GetSurface(p_rwView);
    p_rwView = (R_RT_Handle *)R_Texture_GetResident(v27->m_image.m_base.textureId);
    R_SetComputeTextures(state, 3, 1, (const GfxTexture *const *)&p_rwView);
    R_HW_AddResourceTransition(state, &s_reductionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    p_rwView = (R_RT_Handle *)&s_reductionBuffer.rwView;
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_rwView, NULL);
    v28 = R_RT_Handle::GetSurface(p_view);
    p_view = (R_RT_Handle *)R_Texture_GetResident(v28->m_image.m_base.textureId);
    R_SetComputeRWTextures(state, 1, 1, (const GfxTexture *const *)&p_view);
    R_Dispatch(state, v15, v14, 1u);
    while ( v16 > 0x40 )
    {
      R_HW_AddResourceTransition(state, &s_reductionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
      R_FlushResourceTransitions(state);
      R_SetComputeShader(state, rgp.logAccumContinueComputeShader);
      v59[0] = v16;
      R_UploadAndSetComputeConstants(state, 0, v59, 0x10u, NULL);
      p_view = (R_RT_Handle *)&s_reductionBuffer.rwView;
      R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&p_view, NULL);
      v16 = (v16 + 63) >> 6;
      R_Dispatch(state, v16, 1u, 1u);
    }
    R_HW_AddResourceTransition(state, &s_reductionBuffer, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
    R_FlushResourceTransitions(state);
    R_SetComputeShader(state, rgp.logAccumFinishComputeShader);
    lockAutoExposureAdjust = viewInfo->tonemap.lockAutoExposureAdjust;
    userAutoExposureAdjust = viewInfo->tonemap.userAutoExposureAdjust;
    userExposure = viewInfo->tonemap.userExposure;
    v53 = lockAutoExposureAdjust;
    autoExposure = viewInfo->tonemap.autoExposure;
    *(float *)&v51[4] = v22;
    *(float *)&v51[5] = 1.0 / v22;
    v55 = userExposure;
    v51[9] = autoExposure;
    if ( !viewInfo->tonemap.blendExposure || (v52 = 1, !allowBlendExposure) )
      v52 = 0;
    userExposureAdjust = viewInfo->tonemap.userExposureAdjust;
    userMaxExposure = viewInfo->tonemap.userMaxExposure;
    v51[8] = LODWORD(viewInfo->tonemap.adaptSpeed);
    v58 = *(__m256i *)&viewInfo->tonemap.darkEv;
    v56 = userExposureAdjust;
    v57 = userMaxExposure;
    if ( viewInfo->thermalParams.useNightAndThermalVisionCombo )
    {
      if ( viewInfo->thermalParams.useScopedNVG )
      {
        v51[1] = LODWORD(viewInfo->thermalParams.nightVisionExposureAdjustment);
        *(float *)&v51[2] = FLOAT_15_0;
      }
      else
      {
        v34 = userMaxExposure + viewInfo->thermalParams.nightVisionMinExposureBias;
        v56 = userExposureAdjust + viewInfo->thermalParams.nightVisionExposureAdjustment;
        v57 = v34;
      }
    }
    v51[0] = v16;
    R_UploadAndSetComputeConstants(state, 0, v51, 0x60u, NULL);
    p_view = (R_RT_Handle *)&s_reductionBuffer.view;
    R_SetComputeViews(state, 0, 1, (const GfxShaderBufferView *const *)&p_view);
    views = (GfxShaderBufferRWView *)((char *)views + 32);
    R_SetComputeRWViewsWithCounters(state, 0, 1, (const GfxShaderBufferRWView *const *)&views, NULL);
    R_Dispatch(state, (v16 + 63) >> 6, 1u, 1u);
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
  const dvar_t *v5; 
  Material *tonemapMaterial; 
  const GfxImage *thermalRadiationLut; 
  GfxCmdBufSourceState *source; 
  GfxCmdBufInput *p_input; 
  vec4_t *SMAAColorimetryInfo; 
  vec4_t v16; 
  float height; 
  float width; 
  vec4_t result; 
  GfxViewport v20; 

  v5 = DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision;
  tonemapMaterial = rgp.tonemapMaterial;
  *(_QWORD *)&v20.x = 0i64;
  v20.width = dstWidth;
  v20.height = dstHeight;
  if ( !DCONST_DVARBOOL_r_tonemapUseRegularTonemapForNightVision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUseRegularTonemapForNightVision") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled && viewInfo->thermalParams.useNightAndThermalVisionCombo )
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
  source = gfxContext->source;
  if ( !gfxContext->source && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1577, ASSERT_TYPE_ASSERT, "(source)", (const char *)&queryFormat, "source") )
    __debugbreak();
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1470, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeImages[4] = srcColor;
  _RBX = gfxContext->source;
  if ( R_PostAAIsSMAA(viewInfo->postAA.mode) )
  {
    SMAAColorimetryInfo = R_GetSMAAColorimetryInfo(&result);
    _XMM2 = *SMAAColorimetryInfo;
    _RBX->input.consts[38].v[0] = COERCE_FLOAT(*SMAAColorimetryInfo);
    __asm
    {
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
  v16 = *(vec4_t *)gfxContext;
  ++_RBX->constVersions[38];
  result = v16;
  RB_SetDisplayMappingParams((GfxCmdBufContext *)&result);
  height = (float)v20.height;
  width = (float)v20.width;
  result = *(vec4_t *)gfxContext;
  RB_ViewportFilterDirectInternal((GfxCmdBufContext *)&result, tonemapMaterial, 0xFFFFFFFF, &v20, 0.0, 0.0, width, height, 0.0, 0.0, 1.0, 1.0, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp(1109)");
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
  double result; 

  *(_QWORD *)&result = LODWORD(FLOAT_2_0);
  *(float *)&result = powf_0(2.0, viewInfo->tonemap.tonemapModeExposureAdjust);
  return result;
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
  return powf_0(2.0, viewInfo->tonemap.tonemapModeExposureAdjust) * s_tonemapStateArray[viewInfo->clientIndex].readbackInfo[data->tonemapExposureInfoIndex].exposureAndRadiometricScale;
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
  const dvar_t *v0; 

  v0 = DVARFLT_r_tonemapUniversalBaseExposureAdjust;
  if ( !DVARFLT_r_tonemapUniversalBaseExposureAdjust && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_tonemapUniversalBaseExposureAdjust") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.value;
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
  BOOL v4; 
  float localStrength; 
  GfxDisplayMappingParams *DisplayMappingParams; 
  __m128 v15; 
  float v16; 
  vec4_t result; 
  vec4_t outMatrixR; 
  vec4_t outMatrixG; 
  vec4_t outMatrixB; 
  float veilStrength; 
  float v22; 
  float v23; 
  float localEvBounds; 
  float outScaleU; 
  float outScaleV; 
  float outScaleW; 
  float outOffsetU; 
  float outOffsetV; 
  float outOffsetW[6]; 
  __int128 v31; 
  int v32; 
  BOOL v33; 

  v4 = compositeHudoutline;
  R_UniversalClut_GetParameters(&outScaleU, &outScaleV, &outScaleW, &outOffsetU, &outOffsetV, outOffsetW);
  _XMM3 = LODWORD(FLOAT_1_0);
  localStrength = viewInfo->tonemap.localStrength;
  veilStrength = viewInfo->perceptual.veilStrength;
  v22 = 1.0 - veilStrength;
  localEvBounds = viewInfo->tonemap.localEvBounds;
  v23 = localStrength;
  _XMM0 = v4;
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm3, xmm1, xmm2
  }
  v32 = _XMM0;
  RB_GetUIWhiteBalanceParams(viewInfo, &outMatrixR, &outMatrixG, &outMatrixB);
  if ( R_PostAAIsSMAA(viewInfo->postAA.mode) )
  {
    _XMM2 = (__int128)*R_GetSMAAColorimetryInfo(&result);
    LODWORD(v31) = _XMM2;
    __asm
    {
      vextractps dword ptr [rbp+57h+var_60+4], xmm2, 1
      vextractps dword ptr [rbp+57h+var_60+8], xmm2, 2
      vextractps dword ptr [rbp+57h+var_60+0Ch], xmm2, 3
    }
  }
  else
  {
    v31 = 0i64;
  }
  v16 = COERCE_FLOAT(R_GetFramebufferColorimetry());
  DisplayMappingParams = R_GetDisplayMappingParams((GfxDisplayMappingParams *)&result);
  v15 = (__m128)*(unsigned __int64 *)&DisplayMappingParams->gamma;
  *(float *)&DisplayMappingParams = DisplayMappingParams->maxLuminance;
  outOffsetW[2] = v16;
  LODWORD(result.v[2]) = (_DWORD)DisplayMappingParams;
  LODWORD(outOffsetW[4]) = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
  outOffsetW[5] = *(float *)&DisplayMappingParams;
  outOffsetW[3] = v15.m128_f32[0];
  v33 = outputLuma;
  R_UploadAndSetComputeConstants(computeState, 0, &outMatrixR, 0x90u, NULL);
}

/*
==============
R_Tonemap_UpdateExposure
==============
*/
float R_Tonemap_UpdateExposure(GfxViewInfo *viewInfo)
{
  TonemapState *v2; 
  float v3; 
  float v4; 
  float v5; 
  __int128 v6; 
  __int128 v8; 

  v2 = &s_tonemapStateArray[viewInfo->viewInfoIndex];
  v3 = powf_0(2.0, 2.8399999 - viewInfo->tonemap.userExposure) * 180.0;
  v4 = logf_0(v3);
  v5 = v4;
  if ( !v2->valid )
  {
    viewInfo->tonemap.blendExposure = 0;
    v2->valid = 1;
  }
  if ( viewInfo->tonemap.blendExposure )
  {
    v5 = (float)((float)(v4 - v2->exposureLog) * viewInfo->tonemap.adaptSpeed) + v2->exposureLog;
    expf_0(v5);
  }
  v6 = LODWORD(FLOAT_2_0);
  v2->exposureLog = v5;
  *(float *)&v6 = powf_0(2.0, 2.8399999 - viewInfo->tonemap.userMaxExposure);
  v8 = v6;
  *(float *)&v8 = *(float *)&v6 * 180.0;
  _XMM6 = v8;
  powf_0(2.0, viewInfo->tonemap.userExposureAdjust);
  __asm { vminss  xmm0, xmm6, xmm1 }
  return *(float *)&_XMM0;
}

/*
==============
R_Tonemap_UpdateRadiometricScale
==============
*/
void R_Tonemap_UpdateRadiometricScale(const GfxBackEndData *data, const GfxViewInfo *viewInfo)
{
  __int64 tonemapExposureInfoIndex; 
  __int64 clientIndex; 
  __int64 v6; 
  TonemapState *v7; 
  const dvar_t *v10; 
  __int128 v13; 
  __int64 v20; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 316, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( !viewInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 317, ASSERT_TYPE_ASSERT, "(viewInfo)", (const char *)&queryFormat, "viewInfo") )
    __debugbreak();
  if ( viewInfo->clientIndex >= gfxCfg.maxClientRenderViews )
  {
    LODWORD(v20) = viewInfo->clientIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_tonemap.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( viewInfo->clientIndex ) < (unsigned)( gfxCfg.maxClientRenderViews )", "viewInfo->clientIndex doesn't index gfxCfg.maxClientRenderViews\n\t%i not in [0, %i)", v20, gfxCfg.maxClientRenderViews) )
      __debugbreak();
  }
  tonemapExposureInfoIndex = data->tonemapExposureInfoIndex;
  clientIndex = viewInfo->clientIndex;
  v6 = ((_BYTE)tonemapExposureInfoIndex - 1) & 1;
  v7 = &s_tonemapStateArray[clientIndex];
  _XMM6 = LODWORD(v7->radiometricScale[v6]);
  if ( !rg.debugShaderEnabled || rg.debugShaderLightingData )
  {
    v10 = r_radiometricScale;
    if ( !r_radiometricScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 648, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    _XMM3 = v10->current.unsignedInt;
  }
  else
  {
    _XMM3 = LODWORD(FLOAT_1_0);
  }
  if ( *(float *)&_XMM3 >= -2.5 )
  {
    if ( *(float *)&_XMM3 >= -1.5 )
    {
      if ( *(float *)&_XMM3 < -0.5 )
        _XMM3 = LODWORD(v7->readbackInfo[v6].sceneExposure);
    }
    else
    {
      _XMM3 = LODWORD(v7->readbackInfo[v6].exposure);
    }
  }
  else
  {
    _XMM0 = LODWORD(v7->readbackInfo[v6].sceneAvgKiloNits);
    __asm { vmaxss  xmm2, xmm0, cs:__real@322bcc77 }
    v13 = LODWORD(FLOAT_0_0625);
    *(float *)&v13 = 0.0625 / *(float *)&_XMM2;
    _XMM3 = v13;
  }
  __asm
  {
    vcmpeqss xmm1, xmm6, xmm0
    vmaxss  xmm0, xmm3, cs:__real@3a83126f
    vblendvps xmm4, xmm6, xmm3, xmm1
    vminss  xmm3, xmm0, cs:__real@48000000
    vmaxss  xmm0, xmm4, cs:__real@3a83126f
    vminss  xmm1, xmm0, cs:__real@48000000
  }
  v7->prevFrameRadiometricScale[tonemapExposureInfoIndex] = *(float *)&_XMM1;
  v7->radiometricScale[tonemapExposureInfoIndex] = *(float *)&_XMM3;
}


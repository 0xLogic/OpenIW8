/*
==============
RB_CompositeStaticVelocity
==============
*/

void __fastcall RB_CompositeStaticVelocity(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo)
{
  ?RB_CompositeStaticVelocity@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@@Z(computeState, viewInfo);
}

/*
==============
RB_DestroyHalfVelocityRt
==============
*/

void __fastcall RB_DestroyHalfVelocityRt(GfxCmdBufContext *gfxContext)
{
  ?RB_DestroyHalfVelocityRt@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
R_CompositeStaticVelocity
==============
*/

void __fastcall R_CompositeStaticVelocity(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *srcVelocity, const R_RT_ColorHandle *srcFloatzFull, const R_RT_ColorHandle *srcPackedStencil, const R_RT_ColorHandle *dstVelocityAA, const R_RT_ColorHandle *dstVelocityMBlur, bool vrsInlineResolve)
{
  ?R_CompositeStaticVelocity@@YAXPEAUComputeCmdBufState@@PEBUGfxViewInfo@@AEBVR_RT_ColorHandle@@2222_N@Z(computeState, viewInfo, srcVelocity, srcFloatzFull, srcPackedStencil, dstVelocityAA, dstVelocityMBlur, vrsInlineResolve);
}

/*
==============
R_Velocity_FreeTemporalRts
==============
*/

void R_Velocity_FreeTemporalRts(void)
{
  ?R_Velocity_FreeTemporalRts@@YAXXZ();
}

/*
==============
R_ShutdownVelocity
==============
*/

void R_ShutdownVelocity(void)
{
  ?R_ShutdownVelocity@@YAXXZ();
}

/*
==============
RB_RotateHalfVelocityRt
==============
*/

void __fastcall RB_RotateHalfVelocityRt(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  ?RB_RotateHalfVelocityRt@@YAXUGfxCmdBufContext@@PEBUGfxViewInfo@@@Z(gfxContext, viewInfo);
}

/*
==============
RB_GetHalfVelocityRt
==============
*/

R_RT_ColorHandle *__fastcall RB_GetHalfVelocityRt(R_RT_ColorHandle *result, const GfxViewInfo *viewInfo, unsigned int frameIndex)
{
  return ?RB_GetHalfVelocityRt@@YA?AVR_RT_ColorHandle@@PEBUGfxViewInfo@@I@Z(result, viewInfo, frameIndex);
}

/*
==============
RB_CompositeStaticVelocity
==============
*/
void RB_CompositeStaticVelocity(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo)
{
  const char *name; 
  R_RT_FlagsInternal rtFlagsInternal; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v9; 
  int v10; 
  const dvar_t *v11; 
  int v12; 
  R_RT_Handle v13; 
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  unsigned int v18; 
  unsigned int v19; 
  const dvar_t *v20; 
  int v21; 
  const dvar_t *v22; 
  __m256i v23; 
  const R_RT_Surface *v25; 
  R_RT_Image *p_m_image; 
  const R_RT_Surface *v27; 
  unsigned __int16 width; 
  const R_RT_Surface *v29; 
  unsigned __int16 height; 
  const R_RT_Surface *v31; 
  const GfxTexture *v32; 
  const R_RT_Surface *v33; 
  const GfxTexture *v34; 
  const R_RT_Surface *v35; 
  const GfxTexture *v36; 
  __int64 mipLimit; 
  __int64 format; 
  R_RT_Handle v39; 
  R_RT_Handle v40; 
  __int64 v41; 
  __m256i v42; 
  R_RT_Handle result; 
  R_RT_ColorHandle srcPackedStencil; 
  R_RT_ColorHandle srcFloatzFull; 
  R_RT_Handle v46; 
  bool enabled; 
  R_RT_AllocationLockSentry v48; 

  v41 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "R_RT_AllocationLockSentry");
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v48);
  Sys_ProfEndNamedEvent();
  R_LockIfGfxImmediateContext(computeState->device);
  name = "Velocity";
  if ( R_PostAARequestPreviousFrameVelocities(viewInfo->postAA.mode) || R_SSAO_RequestPreviousFrameVelocities((unsigned __int8)viewInfo->ssao.mode) )
  {
    name = "Velocity [0]";
    if ( (viewInfo->input.data->frameIndex & 1) != 0 )
      name = "Velocity [1]";
    rtFlagsInternal = 2;
  }
  else
  {
    rtFlagsInternal = R_RT_FlagInternal_None;
  }
  v7 = DCONST_DVARINT_r_dccPostFX;
  if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = 2048;
  if ( v7->current.integer == 1 )
    v8 = 2056;
  v9 = r_deviceDebug;
  if ( !r_deviceDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 620, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar accessed after deregistration", "dvar") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = 4160;
  if ( v9->current.enabled )
    goto LABEL_20;
  v11 = DCONST_DVARBOOL_r_esramPostFX;
  if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = 4160;
  if ( !v11->current.enabled )
LABEL_20:
    v12 = 4096;
  v13 = *R_RT_CreateInternal(&result, viewInfo->sceneRtInput.maxSceneRtWidth >> 1, viewInfo->sceneRtInput.maxSceneRtHeight >> 1, viewInfo->sceneRtInput.maxSceneRtWidth >> 1, viewInfo->sceneRtInput.maxSceneRtHeight >> 1, 1u, 1u, 1u, g_R_RT_renderTargetFmts[35], (R_RT_Flags)(v12 | v8), rtFlagsInternal, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, name, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp(250)");
  v40 = v13;
  v39 = v13;
  if ( (_WORD)_XMM0 )
  {
    R_RT_Handle::GetSurface(&v39);
    if ( (R_RT_Handle::GetSurface(&v39)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    v13 = v39;
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      v13 = v40;
    }
  }
  s_halfVelocityRt = v13;
  if ( !R_PostAARequestPreviousFrameVelocities(viewInfo->postAA.mode) )
    R_SSAO_RequestPreviousFrameVelocities((unsigned __int8)viewInfo->ssao.mode);
  v40 = s_halfVelocityRt;
  v39.m_surfaceID = 0;
  v39.m_tracking.m_allocCounter = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v39.m_tracking.m_name = _XMM0;
  result = (R_RT_Handle)viewInfo->sceneRtInput.m_mainSceneEntityIDVelocityRt;
  srcPackedStencil = viewInfo->sceneRtInput.m_packedStencilRt;
  srcFloatzFull = viewInfo->sceneRtInput.m_floatZFullRt;
  Surface = R_RT_Handle::GetSurface(&v40);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  enabled = viewInfo->motionBlur.enabled;
  if ( enabled )
  {
    v18 = viewInfo->sceneRtInput.maxSceneRtWidth >> 1;
    v19 = viewInfo->sceneRtInput.maxSceneRtHeight >> 1;
    v20 = DCONST_DVARINT_r_dccPostFX;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = 2048;
    if ( v20->current.integer == 1 )
      v21 = 2056;
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_39;
    v22 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    if ( !v22->current.enabled )
LABEL_39:
      v10 = 4096;
    v23 = *(__m256i *)R_RT_CreateInternal(&v46, v18, v19, viewInfo->sceneRtInput.maxSceneRtWidth >> 1, viewInfo->sceneRtInput.maxSceneRtHeight >> 1, 1u, 1u, 1u, g_R_RT_renderTargetFmts[18], (R_RT_Flags)(v21 | v10), R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "mblur velocity", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp(271)");
    v42 = v23;
    v39 = (R_RT_Handle)v23;
    if ( (_WORD)_XMM0 )
    {
      R_RT_Handle::GetSurface(&v39);
      if ( (R_RT_Handle::GetSurface(&v39)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      v23 = (__m256i)v39;
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        v23 = v42;
      }
    }
    v39 = (R_RT_Handle)v23;
    viewInfo->sceneRtInput.m_halfVelocityMBlurRt = (R_RT_ColorHandle)v23;
    v25 = R_RT_Handle::GetSurface(&v39);
    p_m_image = &v25->m_image;
    if ( v25 == (const R_RT_Surface *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 274, ASSERT_TYPE_ASSERT, "(dstVelocityMBlurImage)", (const char *)&queryFormat, "dstVelocityMBlurImage") )
      __debugbreak();
    v27 = R_RT_Handle::GetSurface(&v40);
    width = p_m_image->m_base.width;
    if ( v27->m_image.m_base.width > width )
    {
      LODWORD(format) = width;
      LODWORD(mipLimit) = R_RT_Handle::GetSurface(&v40)->m_image.m_base.width;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 275, ASSERT_TYPE_ASSERT, "( dstVelocityAA.GetImage()->width ) <= ( dstVelocityMBlurImage->width )", "%s <= %s\n\t%u, %u", "dstVelocityAA.GetImage()->width", "dstVelocityMBlurImage->width", mipLimit, format) )
        __debugbreak();
    }
    v29 = R_RT_Handle::GetSurface(&v40);
    height = p_m_image->m_base.height;
    if ( v29->m_image.m_base.height > height )
    {
      LODWORD(format) = height;
      LODWORD(mipLimit) = R_RT_Handle::GetSurface(&v40)->m_image.m_base.height;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 276, ASSERT_TYPE_ASSERT, "( dstVelocityAA.GetImage()->height ) <= ( dstVelocityMBlurImage->height )", "%s <= %s\n\t%u, %u", "dstVelocityAA.GetImage()->height", "dstVelocityMBlurImage->height", mipLimit, format) )
        __debugbreak();
    }
    v31 = R_RT_Handle::GetSurface(&v39);
    v32 = R_Texture_GetResident(v31->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v32, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  R_FlushResourceTransitions(computeState);
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "velocity composite");
  R_ProfBeginNamedEvent(computeState, "R_CompositeStaticVelocityAndDownsampleCS");
  R_GPU_BeginTimer(GPU_TIMER_VELOCITY_STATIC);
  R_CompositeStaticVelocity_Internal(computeState, viewInfo, (const R_RT_ColorHandle *)&result, &srcFloatzFull, &srcPackedStencil, (const R_RT_ColorHandle *)&v40, (const R_RT_ColorHandle *)&v39, 0);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(computeState);
  Sys_ProfEndNamedEvent();
  v33 = R_RT_Handle::GetSurface(&v40);
  v34 = R_Texture_GetResident(v33->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v34, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  if ( enabled )
  {
    v35 = R_RT_Handle::GetSurface(&v39);
    v36 = R_Texture_GetResident(v35->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v36, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  R_FlushResourceTransitions(computeState);
  R_UnlockIfGfxImmediateContext(computeState->device);
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v48);
}

/*
==============
RB_DestroyHalfVelocityRt
==============
*/
void RB_DestroyHalfVelocityRt(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext v2; 
  GfxCmdBufContext v7; 
  R_RT_ColorHandle v8; 

  v2 = *gfxContext;
  v8 = (R_RT_ColorHandle)s_halfVelocityRt;
  v7 = v2;
  R_RT_Destroy(&v7, &v8);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&s_halfVelocityRt.m_tracking.m_name = _XMM0;
  _XMM0 = *gfxContext;
  s_halfVelocityRt.m_surfaceID = 0;
  v7 = _XMM0;
  s_halfVelocityRt.m_tracking.m_allocCounter = 0;
  v8 = (R_RT_ColorHandle)stru_151A9B090;
  R_RT_Destroy(&v7, &v8);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&stru_151A9B090.m_tracking.m_name = _XMM0;
  stru_151A9B090.m_surfaceID = 0;
  stru_151A9B090.m_tracking.m_allocCounter = 0;
}

/*
==============
RB_GetHalfVelocityRt
==============
*/
R_RT_ColorHandle *RB_GetHalfVelocityRt(R_RT_ColorHandle *result, const GfxViewInfo *viewInfo, unsigned int frameIndex)
{
  __int64 v4; 

  v4 = frameIndex;
  if ( !R_PostAARequestPreviousFrameVelocities(viewInfo->postAA.mode) && !R_SSAO_RequestPreviousFrameVelocities((unsigned __int8)viewInfo->ssao.mode) && (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 30, ASSERT_TYPE_ASSERT, "(RB_PreviousFrameVelocitiesRequested( viewInfo ) || ( frameIndex == 0 ))", (const char *)&queryFormat, "RB_PreviousFrameVelocitiesRequested( viewInfo ) || ( frameIndex == 0 )") )
    __debugbreak();
  *result = *((R_RT_ColorHandle *)&s_halfVelocityRt + v4);
  return result;
}

/*
==============
RB_RotateHalfVelocityRt
==============
*/
void RB_RotateHalfVelocityRt(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufContext v5; 
  GfxCmdBufContext v9; 
  GfxCmdBufContext v11; 
  R_RT_ColorHandle v12; 

  if ( R_PostAARequestPreviousFrameVelocities(viewInfo->postAA.mode) || R_SSAO_RequestPreviousFrameVelocities((unsigned __int8)viewInfo->ssao.mode) )
  {
    v9 = *gfxContext;
    v12 = (R_RT_ColorHandle)stru_151A9B090;
    v11 = v9;
    R_RT_Destroy(&v11, &v12);
    stru_151A9B090 = s_halfVelocityRt;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    s_halfVelocityRt.m_surfaceID = 0;
    s_halfVelocityRt.m_tracking.m_allocCounter = 0;
    *(_OWORD *)&s_halfVelocityRt.m_tracking.m_name = _XMM0;
  }
  else
  {
    v5 = *gfxContext;
    v12 = (R_RT_ColorHandle)s_halfVelocityRt;
    v11 = v5;
    R_RT_Destroy(&v11, &v12);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&s_halfVelocityRt.m_tracking.m_name = _XMM0;
    _XMM0 = *gfxContext;
    s_halfVelocityRt.m_surfaceID = 0;
    v11 = _XMM0;
    s_halfVelocityRt.m_tracking.m_allocCounter = 0;
    v12 = (R_RT_ColorHandle)stru_151A9B090;
    R_RT_Destroy(&v11, &v12);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&stru_151A9B090.m_tracking.m_name = _XMM0;
    stru_151A9B090.m_surfaceID = 0;
    stru_151A9B090.m_tracking.m_allocCounter = 0;
  }
}

/*
==============
R_CompositeStaticVelocity
==============
*/
void R_CompositeStaticVelocity(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *srcVelocity, const R_RT_ColorHandle *srcFloatzFull, const R_RT_ColorHandle *srcPackedStencil, const R_RT_ColorHandle *dstVelocityAA, const R_RT_ColorHandle *dstVelocityMBlur, bool vrsInlineResolve)
{
  R_CompositeStaticVelocity_Internal(computeState, viewInfo, srcVelocity, srcFloatzFull, srcPackedStencil, dstVelocityAA, dstVelocityMBlur, vrsInlineResolve);
}

/*
==============
R_CompositeStaticVelocity_Internal
==============
*/
void R_CompositeStaticVelocity_Internal(ComputeCmdBufState *computeState, const GfxViewInfo *viewInfo, const R_RT_ColorHandle *srcVelocity, const R_RT_ColorHandle *srcFloatzFull, const R_RT_ColorHandle *srcPackedStencil, const R_RT_ColorHandle *dstVelocityAA, const R_RT_ColorHandle *dstVelocityMBlur, bool vrsInlineResolve)
{
  R_RT_Image *p_m_image; 
  R_RT_Image *v11; 
  const R_RT_Surface *Surface; 
  R_RT_Image *v13; 
  int v14; 
  const R_RT_Surface *v15; 
  const R_RT_Surface *v16; 
  const R_RT_Surface *v17; 
  const R_RT_Surface *v18; 
  R_RT_Handle *Resident; 
  bool v20; 
  R_RT_Handle *v21; 
  const R_RT_Surface *v22; 
  ComputeCmdBufState *v23; 
  bool v24; 
  const R_RT_Surface *v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  __m128 v29; 
  vec4_t v30; 
  vec4_t v31; 
  vec4_t v32; 
  __m128 v33; 
  __m128 v34; 
  __m128 v35; 
  __m128 v36; 
  __m128 v37; 
  __int64 v38; 
  unsigned int v39; 
  __int64 v40; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  unsigned int v43; 
  __int64 v44; 
  ComputeShader **motionVectorsStaticVrsInlineResolveComputeShader; 
  __int64 v46; 
  __int64 v47; 
  unsigned int height; 
  unsigned int width; 
  R_RT_Handle *v50; 
  R_RT_Image *v51; 
  ComputeCmdBufState *state; 
  R_RT_Handle *v53[2]; 
  R_RT_Handle *v54[2]; 
  __m128 v55; 
  __m128 v56; 
  __m128 v57; 
  __m128 v58; 
  __int128 data[5]; 
  float v60; 
  int v61; 
  float v62; 
  float v63; 
  float v64; 
  int v65; 
  float v66; 
  float v67; 
  float v68; 
  int v69; 
  float v70; 
  __int128 v71; 
  GfxTexture *textures[3]; 

  state = computeState;
  v53[0] = &srcPackedStencil->R_RT_Handle;
  v50 = &dstVelocityAA->R_RT_Handle;
  v54[0] = &srcFloatzFull->R_RT_Handle;
  p_m_image = &R_RT_Handle::GetSurface(&srcVelocity->R_RT_Handle)->m_image;
  v11 = &R_RT_Handle::GetSurface(&srcPackedStencil->R_RT_Handle)->m_image;
  Surface = R_RT_Handle::GetSurface(&dstVelocityAA->R_RT_Handle);
  if ( dstVelocityMBlur->m_surfaceID )
    v13 = &R_RT_Handle::GetSurface(&dstVelocityMBlur->R_RT_Handle)->m_image;
  else
    v13 = NULL;
  width = Surface->m_image.m_base.width;
  height = Surface->m_image.m_base.height;
  v51 = v13;
  if ( (!p_m_image || !v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 101, ASSERT_TYPE_ASSERT, "(dstVelocityAAImage && srcVelocityImage && srcStencilImage)", (const char *)&queryFormat, "dstVelocityAAImage && srcVelocityImage && srcStencilImage") )
    __debugbreak();
  v14 = vrsInlineResolve + 1;
  if ( (viewInfo->sceneViewport.width > v14 * (unsigned int)p_m_image->m_base.width || viewInfo->sceneViewport.height > v14 * (unsigned int)p_m_image->m_base.height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 103, ASSERT_TYPE_ASSERT, "(srcViewport->width <= srcVelocityImage->width * sizeMult && srcViewport->height <= srcVelocityImage->height * sizeMult)", (const char *)&queryFormat, "srcViewport->width <= srcVelocityImage->width * sizeMult && srcViewport->height <= srcVelocityImage->height * sizeMult") )
    __debugbreak();
  if ( (width > Surface->m_image.m_base.width || height > Surface->m_image.m_base.height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 104, ASSERT_TYPE_ASSERT, "(dstWidth <= dstVelocityAAImage->width && dstHeight <= dstVelocityAAImage->height)", (const char *)&queryFormat, "dstWidth <= dstVelocityAAImage->width && dstHeight <= dstVelocityAAImage->height") )
    __debugbreak();
  v15 = R_RT_Handle::GetSurface(v53[0]);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v15->m_image.m_base.textureId);
  v16 = R_RT_Handle::GetSurface(&srcVelocity->R_RT_Handle);
  textures[1] = (GfxTexture *)R_Texture_GetResident(v16->m_image.m_base.textureId);
  v17 = R_RT_Handle::GetSurface(v54[0]);
  textures[2] = (GfxTexture *)R_Texture_GetResident(v17->m_image.m_base.textureId);
  v18 = R_RT_Handle::GetSurface(v50);
  Resident = (R_RT_Handle *)R_Texture_GetResident(v18->m_image.m_base.textureId);
  v20 = dstVelocityMBlur->m_surfaceID == 0;
  v53[0] = Resident;
  if ( v20 )
  {
    v21 = NULL;
  }
  else
  {
    v22 = R_RT_Handle::GetSurface(&dstVelocityMBlur->R_RT_Handle);
    v21 = (R_RT_Handle *)R_Texture_GetResident(v22->m_image.m_base.textureId);
  }
  v23 = state;
  v53[1] = v21;
  R_SetComputeTextures(state, 0, 3, (const GfxTexture *const *)textures);
  v24 = vrsInlineResolve;
  if ( vrsInlineResolve )
  {
    v25 = R_RT_Handle::GetSurface(&srcVelocity->R_RT_Handle);
    v50 = (R_RT_Handle *)R_Texture_GetResident(v25->m_color.m_fmaskImage.m_base.textureId);
    R_SetComputeTextures(state, 3, 1, (const GfxTexture *const *)&v50);
  }
  R_SetComputeRWTextures(v23, 0, (v13 != NULL) + 1, (const GfxTexture *const *)v53);
  v26 = viewInfo->sceneViewport.width;
  v27 = width;
  v28 = height;
  v29 = (__m128)viewInfo->curToPrevPixelMatrix.m.m[0];
  v30 = viewInfo->curToPrevPixelMatrix.m.m[3];
  v31 = viewInfo->curToPrevPixelMatrix.m.m[1];
  v32 = viewInfo->curToPrevPixelMatrix.m.m[2];
  v33 = _mm_shuffle_ps((__m128)v32, (__m128)v30, 68);
  v34 = _mm_shuffle_ps((__m128)v32, (__m128)v30, 238);
  v35 = _mm_shuffle_ps(v29, (__m128)v31, 68);
  v36 = _mm_shuffle_ps(v35, v33, 136);
  v56 = _mm_shuffle_ps(v35, v33, 221);
  data[1] = (__int128)v56;
  v37 = _mm_shuffle_ps(v29, (__m128)v31, 238);
  v58 = _mm_shuffle_ps(v37, v34, 221);
  data[3] = (__int128)v58;
  data[4] = *(_OWORD *)viewInfo->viewParms.camera.zPlanes;
  v30.v[0] = (float)v26;
  v38 = viewInfo->sceneViewport.height;
  v60 = v30.v[0];
  v33.m128_f32[0] = (float)v38;
  v61 = v33.m128_i32[0];
  v62 = 1.0 / v30.v[0];
  v63 = 1.0 / v33.m128_f32[0];
  v30.v[0] = (float)width;
  v64 = v30.v[0];
  v33.m128_f32[0] = (float)height;
  v65 = v33.m128_i32[0];
  v66 = 1.0 / v30.v[0];
  v30.v[0] = viewInfo->motionBlur.velocityScale;
  v67 = 1.0 / v33.m128_f32[0];
  v33.m128_i32[0] = LODWORD(viewInfo->motionBlur.velocityScaleViewModel);
  v68 = v30.v[0];
  v30.v[0] = viewInfo->motionBlur.velocityFpsCompensationScale;
  v69 = v33.m128_i32[0];
  v70 = v30.v[0];
  v55 = v36;
  v57 = _mm_shuffle_ps(v37, v34, 136);
  data[0] = (__int128)v36;
  data[2] = (__int128)v57;
  if ( vrsInlineResolve )
  {
    v39 = 0;
    v40 = 0i64;
    frameCount = viewInfo->input.data->frameCount;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v47) = 4;
        LODWORD(v46) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
      }
      v43 = s_VRSPixelToSampleOrdered_0[unsignedInt][v40];
      v44 = (int)v39;
      ++v40;
      ++v39;
      *((_DWORD *)v54 + v44) = v43;
    }
    while ( v39 < 4 );
    v13 = v51;
    v23 = state;
    v24 = vrsInlineResolve;
    v28 = height;
    v27 = width;
    v71 = *(_OWORD *)v54;
  }
  R_UploadAndSetComputeConstants(v23, 0, data, 0x90u, NULL);
  if ( v24 )
  {
    if ( !*(ComputeShader **)((char *)rgp.motionVectorsStaticVrsInlineResolveComputeShader + (v13 != NULL ? 8 : 0)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 192, ASSERT_TYPE_ASSERT, "(compositeMtlIndex < VELOCITY_COMPOSITE_COUNT && rgp.motionVectorsStaticVrsInlineResolveComputeShader[compositeMtlIndex])", (const char *)&queryFormat, "compositeMtlIndex < VELOCITY_COMPOSITE_COUNT && rgp.motionVectorsStaticVrsInlineResolveComputeShader[compositeMtlIndex]") )
      __debugbreak();
    motionVectorsStaticVrsInlineResolveComputeShader = rgp.motionVectorsStaticVrsInlineResolveComputeShader;
  }
  else
  {
    if ( !*(ComputeShader **)((char *)rgp.motionVectorsStaticComputeShader + (v13 != NULL ? 8 : 0)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 198, ASSERT_TYPE_ASSERT, "(compositeMtlIndex < VELOCITY_COMPOSITE_COUNT && rgp.motionVectorsStaticComputeShader[compositeMtlIndex])", (const char *)&queryFormat, "compositeMtlIndex < VELOCITY_COMPOSITE_COUNT && rgp.motionVectorsStaticComputeShader[compositeMtlIndex]") )
      __debugbreak();
    motionVectorsStaticVrsInlineResolveComputeShader = rgp.motionVectorsStaticComputeShader;
  }
  R_SetComputeShader(v23, *(ComputeShader **)((char *)motionVectorsStaticVrsInlineResolveComputeShader + (v13 != NULL ? 8 : 0)));
  R_Dispatch(v23, (v27 + 7) >> 3, (v28 + 7) >> 3, 1u);
}

/*
==============
R_ShutdownVelocity
==============
*/

void __fastcall R_ShutdownVelocity(double _XMM0_8)
{
  R_RT_Handle v2; 

  if ( R_RT_Handle::IsValid(&s_halfVelocityRt) )
  {
    v2 = s_halfVelocityRt;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&s_halfVelocityRt.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
    s_halfVelocityRt.m_surfaceID = 0;
    s_halfVelocityRt.m_tracking.m_allocCounter = 0;
  }
  if ( R_RT_Handle::IsValid(&stru_151A9B090) )
  {
    v2 = stru_151A9B090;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&stru_151A9B090.m_tracking.m_name = _XMM0;
    stru_151A9B090.m_surfaceID = 0;
    stru_151A9B090.m_tracking.m_allocCounter = 0;
  }
}

/*
==============
R_Velocity_FreeTemporalRts
==============
*/

void __fastcall R_Velocity_FreeTemporalRts(double _XMM0_8)
{
  R_RT_Handle v2; 

  if ( R_RT_Handle::IsValid(&s_halfVelocityRt) )
  {
    v2 = s_halfVelocityRt;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&s_halfVelocityRt.m_tracking.m_name = *(_OWORD *)&_XMM0_8;
    s_halfVelocityRt.m_surfaceID = 0;
    s_halfVelocityRt.m_tracking.m_allocCounter = 0;
  }
  if ( R_RT_Handle::IsValid(&stru_151A9B090) )
  {
    v2 = stru_151A9B090;
    R_RT_DestroyInternal(&v2);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&stru_151A9B090.m_tracking.m_name = _XMM0;
    stru_151A9B090.m_surfaceID = 0;
    stru_151A9B090.m_tracking.m_allocCounter = 0;
  }
}


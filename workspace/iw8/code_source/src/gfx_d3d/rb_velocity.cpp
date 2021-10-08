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
  const R_RT_Surface *Surface; 
  const GfxTexture *Resident; 
  unsigned int v23; 
  unsigned int v24; 
  const dvar_t *v25; 
  int v26; 
  const dvar_t *v27; 
  const R_RT_Surface *v31; 
  R_RT_Image *p_m_image; 
  const R_RT_Surface *v33; 
  unsigned __int16 width; 
  const R_RT_Surface *v35; 
  unsigned __int16 height; 
  const R_RT_Surface *v37; 
  const GfxTexture *v38; 
  const R_RT_Surface *v39; 
  const GfxTexture *v40; 
  const R_RT_Surface *v41; 
  const GfxTexture *v42; 
  __int64 mipLimit; 
  __int64 format; 
  R_RT_Handle v45; 
  R_RT_Handle v46; 
  __int64 v47; 
  R_RT_Handle result; 
  R_RT_ColorHandle srcPackedStencil; 
  R_RT_ColorHandle srcFloatzFull; 
  R_RT_Handle v52; 
  bool enabled; 
  R_RT_AllocationLockSentry v54; 

  v47 = -2i64;
  _RDI = viewInfo;
  Sys_ProfBeginNamedEvent(0xFF00FFFF, "R_RT_AllocationLockSentry");
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v54);
  Sys_ProfEndNamedEvent();
  R_LockIfGfxImmediateContext(computeState->device);
  name = "Velocity";
  if ( R_PostAARequestPreviousFrameVelocities(_RDI->postAA.mode) || R_SSAO_RequestPreviousFrameVelocities((unsigned __int8)_RDI->ssao.mode) )
  {
    name = "Velocity [0]";
    if ( (_RDI->input.data->frameIndex & 1) != 0 )
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
  _RAX = R_RT_CreateInternal(&result, _RDI->sceneRtInput.maxSceneRtWidth >> 1, _RDI->sceneRtInput.maxSceneRtHeight >> 1, _RDI->sceneRtInput.maxSceneRtWidth >> 1, _RDI->sceneRtInput.maxSceneRtHeight >> 1, 1u, 1u, 1u, g_R_RT_renderTargetFmts[35], (R_RT_Flags)(v12 | v8), rtFlagsInternal, &colorBlack, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, name, 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp(250)");
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbp+0A0h+var_100.m_surfaceID], ymm0
    vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
    vmovd   eax, xmm0
  }
  if ( (_WORD)_RAX )
  {
    R_RT_Handle::GetSurface(&v45);
    if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_120.m_surfaceID] }
  }
  else
  {
    __asm { vpextrd rax, xmm0, 2 }
    if ( (_DWORD)_RAX )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_100.m_surfaceID] }
    }
  }
  __asm { vmovups ymmword ptr cs:s_halfVelocityRt.m_surfaceID, ymm0 }
  if ( !R_PostAARequestPreviousFrameVelocities(_RDI->postAA.mode) )
    R_SSAO_RequestPreviousFrameVelocities((unsigned __int8)_RDI->ssao.mode);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:s_halfVelocityRt.m_surfaceID
    vmovups ymmword ptr [rbp+0A0h+var_100.m_surfaceID], ymm0
  }
  v45.m_surfaceID = 0;
  v45.m_tracking.m_allocCounter = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+0A0h+var_120.m_tracking.m_name], xmm0
    vmovups ymm1, ymmword ptr [rdi+3140h]
    vmovups ymmword ptr [rbp+0A0h+result.m_surfaceID], ymm1
    vmovups ymm0, ymmword ptr [rdi+33C0h]
    vmovups ymmword ptr [rbp+0A0h+srcPackedStencil.baseclass_0.m_surfaceID], ymm0
    vmovups ymm1, ymmword ptr [rdi+3340h]
    vmovups ymmword ptr [rbp+0A0h+srcFloatzFull.baseclass_0.m_surfaceID], ymm1
  }
  Surface = R_RT_Handle::GetSurface(&v46);
  Resident = R_Texture_GetResident(Surface->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, Resident, 0xFFFFFFFF, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  enabled = _RDI->motionBlur.enabled;
  if ( enabled )
  {
    v23 = _RDI->sceneRtInput.maxSceneRtWidth >> 1;
    v24 = _RDI->sceneRtInput.maxSceneRtHeight >> 1;
    v25 = DCONST_DVARINT_r_dccPostFX;
    if ( !DCONST_DVARINT_r_dccPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_dccPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v26 = 2048;
    if ( v25->current.integer == 1 )
      v26 = 2056;
    if ( Dvar_GetBool_Internal(r_deviceDebug) )
      goto LABEL_39;
    v27 = DCONST_DVARBOOL_r_esramPostFX;
    if ( !DCONST_DVARBOOL_r_esramPostFX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_esramPostFX") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    if ( !v27->current.enabled )
LABEL_39:
      v10 = 4096;
    _RAX = R_RT_CreateInternal(&v52, v23, v24, _RDI->sceneRtInput.maxSceneRtWidth >> 1, _RDI->sceneRtInput.maxSceneRtHeight >> 1, 1u, 1u, 1u, g_R_RT_renderTargetFmts[18], (R_RT_Flags)(v26 | v10), R_RT_FlagInternal_None, &colorBlack, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, "mblur velocity", 0, NULL, NULL, NULL, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp(271)");
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups [rbp+0A0h+var_D0], ymm0
      vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
      vmovd   eax, xmm0
    }
    if ( (_WORD)_RAX )
    {
      R_RT_Handle::GetSurface(&v45);
      if ( (R_RT_Handle::GetSurface(&v45)->m_rtFlagsInternal & 0x18) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 217, ASSERT_TYPE_ASSERT, "(!unionHandle.IsValid() || unionHandle.IsColor())", (const char *)&queryFormat, "!unionHandle.IsValid() || unionHandle.IsColor()") )
        __debugbreak();
      __asm { vmovups ymm0, ymmword ptr [rbp+0A0h+var_120.m_surfaceID] }
    }
    else
    {
      __asm { vpextrd rax, xmm0, 2 }
      if ( (_DWORD)_RAX )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_handle.h", 100, ASSERT_TYPE_ASSERT, "(!this->m_tracking.m_allocCounter)", (const char *)&queryFormat, "!this->m_tracking.m_allocCounter") )
          __debugbreak();
        __asm { vmovups ymm0, [rbp+0A0h+var_D0] }
      }
    }
    __asm
    {
      vmovups ymmword ptr [rbp+0A0h+var_120.m_surfaceID], ymm0
      vmovups ymmword ptr [rdi+3648h], ymm0
    }
    v31 = R_RT_Handle::GetSurface(&v45);
    p_m_image = &v31->m_image;
    if ( v31 == (const R_RT_Surface *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 274, ASSERT_TYPE_ASSERT, "(dstVelocityMBlurImage)", (const char *)&queryFormat, "dstVelocityMBlurImage") )
      __debugbreak();
    v33 = R_RT_Handle::GetSurface(&v46);
    width = p_m_image->m_base.width;
    if ( v33->m_image.m_base.width > width )
    {
      LODWORD(format) = width;
      LODWORD(mipLimit) = R_RT_Handle::GetSurface(&v46)->m_image.m_base.width;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 275, ASSERT_TYPE_ASSERT, "( dstVelocityAA.GetImage()->width ) <= ( dstVelocityMBlurImage->width )", "%s <= %s\n\t%u, %u", "dstVelocityAA.GetImage()->width", "dstVelocityMBlurImage->width", mipLimit, format) )
        __debugbreak();
    }
    v35 = R_RT_Handle::GetSurface(&v46);
    height = p_m_image->m_base.height;
    if ( v35->m_image.m_base.height > height )
    {
      LODWORD(format) = height;
      LODWORD(mipLimit) = R_RT_Handle::GetSurface(&v46)->m_image.m_base.height;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 276, ASSERT_TYPE_ASSERT, "( dstVelocityAA.GetImage()->height ) <= ( dstVelocityMBlurImage->height )", "%s <= %s\n\t%u, %u", "dstVelocityAA.GetImage()->height", "dstVelocityMBlurImage->height", mipLimit, format) )
        __debugbreak();
    }
    v37 = R_RT_Handle::GetSurface(&v45);
    v38 = R_Texture_GetResident(v37->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v38, 0xFFFFFFFF, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  R_FlushResourceTransitions(computeState);
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "velocity composite");
  R_ProfBeginNamedEvent(computeState, "R_CompositeStaticVelocityAndDownsampleCS");
  R_GPU_BeginTimer(GPU_TIMER_VELOCITY_STATIC);
  R_CompositeStaticVelocity_Internal(computeState, _RDI, (const R_RT_ColorHandle *)&result, &srcFloatzFull, &srcPackedStencil, (const R_RT_ColorHandle *)&v46, (const R_RT_ColorHandle *)&v45, 0);
  R_GPU_EndTimer();
  R_ProfEndNamedEvent(computeState);
  Sys_ProfEndNamedEvent();
  v39 = R_RT_Handle::GetSurface(&v46);
  v40 = R_Texture_GetResident(v39->m_image.m_base.textureId);
  R_HW_AddResourceTransition(computeState, v40, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  if ( enabled )
  {
    v41 = R_RT_Handle::GetSurface(&v45);
    v42 = R_Texture_GetResident(v41->m_image.m_base.textureId);
    R_HW_AddResourceTransition(computeState, v42, 0xFFFFFFFF, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, D3D12_RESOURCE_STATE_PIXEL_SHADER_RESOURCE|D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE, D3D12_RESOURCE_BARRIER_FLAG_NONE);
  }
  R_FlushResourceTransitions(computeState);
  R_UnlockIfGfxImmediateContext(computeState->device);
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v54);
}

/*
==============
RB_DestroyHalfVelocityRt
==============
*/
void RB_DestroyHalfVelocityRt(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext v9; 
  R_RT_ColorHandle v10; 

  __asm
  {
    vmovups xmm1, xmmword ptr [rcx]
    vmovups ymm0, ymmword ptr cs:s_halfVelocityRt.m_surfaceID
  }
  _RBX = gfxContext;
  __asm
  {
    vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
    vmovups [rsp+58h+var_38], xmm1
  }
  R_RT_Destroy(&v9, &v10);
  __asm
  {
    vmovups ymm1, ymmword ptr cs:stru_151A9B090.m_surfaceID
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:s_halfVelocityRt.m_tracking.m_name, xmm0
    vmovups xmm0, xmmword ptr [rbx]
  }
  s_halfVelocityRt.m_surfaceID = 0;
  __asm { vmovups [rsp+58h+var_38], xmm0 }
  s_halfVelocityRt.m_tracking.m_allocCounter = 0;
  __asm { vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm1 }
  R_RT_Destroy(&v9, &v10);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:stru_151A9B090.m_tracking.m_name, xmm0
  }
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

  _RSI = result;
  v4 = frameIndex;
  if ( !R_PostAARequestPreviousFrameVelocities(viewInfo->postAA.mode) && !R_SSAO_RequestPreviousFrameVelocities((unsigned __int8)viewInfo->ssao.mode) && (_DWORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 30, ASSERT_TYPE_ASSERT, "(RB_PreviousFrameVelocitiesRequested( viewInfo ) || ( frameIndex == 0 ))", (const char *)&queryFormat, "RB_PreviousFrameVelocitiesRequested( viewInfo ) || ( frameIndex == 0 )") )
    __debugbreak();
  _RCX = &s_halfVelocityRt;
  _RAX = 32 * v4;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rcx]
    vmovups ymmword ptr [rsi], ymm0
  }
  return _RSI;
}

/*
==============
RB_RotateHalfVelocityRt
==============
*/
void RB_RotateHalfVelocityRt(GfxCmdBufContext *gfxContext, const GfxViewInfo *viewInfo)
{
  GfxCmdBufContext v15; 
  R_RT_ColorHandle v16; 

  _RDI = gfxContext;
  if ( R_PostAARequestPreviousFrameVelocities(viewInfo->postAA.mode) || R_SSAO_RequestPreviousFrameVelocities((unsigned __int8)viewInfo->ssao.mode) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:stru_151A9B090.m_surfaceID
      vmovups xmm1, xmmword ptr [rdi]
      vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
      vmovups [rsp+58h+var_38], xmm1
    }
    R_RT_Destroy(&v15, &v16);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_halfVelocityRt.m_surfaceID
      vmovups ymmword ptr cs:stru_151A9B090.m_surfaceID, ymm0
      vpxor   xmm0, xmm0, xmm0
    }
    s_halfVelocityRt.m_surfaceID = 0;
    s_halfVelocityRt.m_tracking.m_allocCounter = 0;
    __asm { vmovdqu xmmword ptr cs:s_halfVelocityRt.m_tracking.m_name, xmm0 }
  }
  else
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_halfVelocityRt.m_surfaceID
      vmovups xmm1, xmmword ptr [rdi]
      vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm0
      vmovups [rsp+58h+var_38], xmm1
    }
    R_RT_Destroy(&v15, &v16);
    __asm
    {
      vmovups ymm1, ymmword ptr cs:stru_151A9B090.m_surfaceID
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:s_halfVelocityRt.m_tracking.m_name, xmm0
      vmovups xmm0, xmmword ptr [rdi]
    }
    s_halfVelocityRt.m_surfaceID = 0;
    __asm { vmovups [rsp+58h+var_38], xmm0 }
    s_halfVelocityRt.m_tracking.m_allocCounter = 0;
    __asm { vmovups ymmword ptr [rsp+58h+var_28.baseclass_0.m_surfaceID], ymm1 }
    R_RT_Destroy(&v15, &v16);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:stru_151A9B090.m_tracking.m_name, xmm0
    }
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
  R_RT_Image *v12; 
  const R_RT_Surface *Surface; 
  R_RT_Image *v14; 
  int v15; 
  const R_RT_Surface *v16; 
  const R_RT_Surface *v17; 
  const R_RT_Surface *v18; 
  const R_RT_Surface *v19; 
  R_RT_Handle *Resident; 
  bool v21; 
  R_RT_Handle *v22; 
  const R_RT_Surface *v23; 
  ComputeCmdBufState *v24; 
  bool v25; 
  const R_RT_Surface *v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v58; 
  __int64 v59; 
  unsigned int frameCount; 
  __int64 unsignedInt; 
  unsigned int v62; 
  __int64 v63; 
  ComputeShader **motionVectorsStaticVrsInlineResolveComputeShader; 
  __int64 v67; 
  __int64 v68; 
  unsigned int height; 
  unsigned int width; 
  R_RT_Handle *v71; 
  R_RT_Image *v72; 
  ComputeCmdBufState *state; 
  R_RT_Handle *v74[2]; 
  R_RT_Handle *v75[2]; 
  __int128 data[5]; 
  GfxTexture *textures[3]; 

  __asm { vmovaps [rsp+1C0h+var_50], xmm6 }
  _R15 = viewInfo;
  state = computeState;
  v74[0] = &srcPackedStencil->R_RT_Handle;
  v71 = &dstVelocityAA->R_RT_Handle;
  v75[0] = &srcFloatzFull->R_RT_Handle;
  p_m_image = &R_RT_Handle::GetSurface(&srcVelocity->R_RT_Handle)->m_image;
  v12 = &R_RT_Handle::GetSurface(&srcPackedStencil->R_RT_Handle)->m_image;
  Surface = R_RT_Handle::GetSurface(&dstVelocityAA->R_RT_Handle);
  if ( dstVelocityMBlur->m_surfaceID )
    v14 = &R_RT_Handle::GetSurface(&dstVelocityMBlur->R_RT_Handle)->m_image;
  else
    v14 = NULL;
  width = Surface->m_image.m_base.width;
  height = Surface->m_image.m_base.height;
  v72 = v14;
  if ( (!p_m_image || !v12) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 101, ASSERT_TYPE_ASSERT, "(dstVelocityAAImage && srcVelocityImage && srcStencilImage)", (const char *)&queryFormat, "dstVelocityAAImage && srcVelocityImage && srcStencilImage") )
    __debugbreak();
  v15 = vrsInlineResolve + 1;
  if ( (_R15->sceneViewport.width > v15 * (unsigned int)p_m_image->m_base.width || _R15->sceneViewport.height > v15 * (unsigned int)p_m_image->m_base.height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 103, ASSERT_TYPE_ASSERT, "(srcViewport->width <= srcVelocityImage->width * sizeMult && srcViewport->height <= srcVelocityImage->height * sizeMult)", (const char *)&queryFormat, "srcViewport->width <= srcVelocityImage->width * sizeMult && srcViewport->height <= srcVelocityImage->height * sizeMult") )
    __debugbreak();
  if ( (width > Surface->m_image.m_base.width || height > Surface->m_image.m_base.height) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 104, ASSERT_TYPE_ASSERT, "(dstWidth <= dstVelocityAAImage->width && dstHeight <= dstVelocityAAImage->height)", (const char *)&queryFormat, "dstWidth <= dstVelocityAAImage->width && dstHeight <= dstVelocityAAImage->height") )
    __debugbreak();
  v16 = R_RT_Handle::GetSurface(v74[0]);
  textures[0] = (GfxTexture *)R_Texture_GetResident(v16->m_image.m_base.textureId);
  v17 = R_RT_Handle::GetSurface(&srcVelocity->R_RT_Handle);
  textures[1] = (GfxTexture *)R_Texture_GetResident(v17->m_image.m_base.textureId);
  v18 = R_RT_Handle::GetSurface(v75[0]);
  textures[2] = (GfxTexture *)R_Texture_GetResident(v18->m_image.m_base.textureId);
  v19 = R_RT_Handle::GetSurface(v71);
  Resident = (R_RT_Handle *)R_Texture_GetResident(v19->m_image.m_base.textureId);
  v21 = dstVelocityMBlur->m_surfaceID == 0;
  v74[0] = Resident;
  if ( v21 )
  {
    v22 = NULL;
  }
  else
  {
    v23 = R_RT_Handle::GetSurface(&dstVelocityMBlur->R_RT_Handle);
    v22 = (R_RT_Handle *)R_Texture_GetResident(v23->m_image.m_base.textureId);
  }
  v24 = state;
  v74[1] = v22;
  R_SetComputeTextures(state, 0, 3, (const GfxTexture *const *)textures);
  v25 = vrsInlineResolve;
  if ( vrsInlineResolve )
  {
    v26 = R_RT_Handle::GetSurface(&srcVelocity->R_RT_Handle);
    v71 = (R_RT_Handle *)R_Texture_GetResident(v26->m_color.m_fmaskImage.m_base.textureId);
    R_SetComputeTextures(state, 3, 1, (const GfxTexture *const *)&v71);
  }
  R_SetComputeRWTextures(v24, 0, (v14 != NULL) + 1, (const GfxTexture *const *)v74);
  v27 = width;
  v28 = height;
  __asm
  {
    vmovups xmm5, xmmword ptr [r15+570h]
    vmovups xmm0, xmmword ptr [r15+5A0h]
    vmovups xmm4, xmmword ptr [r15+580h]
    vmovups xmm2, xmmword ptr [r15+590h]
    vshufps xmm1, xmm2, xmm0, 44h ; 'D'
    vshufps xmm2, xmm2, xmm0, 0EEh ; 'î'
    vshufps xmm3, xmm5, xmm4, 44h ; 'D'
    vshufps xmm6, xmm3, xmm1, 88h ; 'ˆ'
    vshufps xmm1, xmm3, xmm1, 0DDh ; 'Ý'
    vmovups [rbp+0C0h+var_130], xmm1
    vmovaps [rbp+0C0h+var_F0], xmm1
    vxorps  xmm1, xmm1, xmm1
    vshufps xmm4, xmm5, xmm4, 0EEh ; 'î'
    vshufps xmm0, xmm4, xmm2, 0DDh ; 'Ý'
    vmovups [rbp+0C0h+var_110], xmm0
    vmovaps [rbp+0C0h+var_D0], xmm0
    vmovups xmm0, xmmword ptr [r15+140h]
    vmovaps [rbp+0C0h+var_C0], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmovss  [rbp+0C0h+var_B0], xmm0
    vcvtsi2ss xmm1, xmm1, rax
    vmovss  [rbp+0C0h+var_AC], xmm1
    vshufps xmm5, xmm4, xmm2, 88h ; 'ˆ'
    vmovss  xmm2, cs:__real@3f800000
    vdivss  xmm0, xmm2, xmm0
    vmovss  [rbp+0C0h+var_A8], xmm0
    vdivss  xmm1, xmm2, xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+0C0h+var_A4], xmm1
    vcvtsi2ss xmm0, xmm0, rsi
    vxorps  xmm1, xmm1, xmm1
    vmovss  [rbp+0C0h+var_A0], xmm0
    vcvtsi2ss xmm1, xmm1, rbx
    vdivss  xmm0, xmm2, xmm0
    vmovss  [rbp+0C0h+var_9C], xmm1
    vmovss  [rbp+0C0h+var_98], xmm0
    vmovss  xmm0, dword ptr [r15+37E8h]
    vdivss  xmm1, xmm2, xmm1
    vmovss  [rbp+0C0h+var_94], xmm1
    vmovss  xmm1, dword ptr [r15+37ECh]
    vmovss  [rbp+0C0h+var_90], xmm0
    vmovss  xmm0, dword ptr [r15+37F0h]
    vmovss  [rbp+0C0h+var_8C], xmm1
    vmovss  [rbp+0C0h+var_88], xmm0
    vmovups [rbp+0C0h+var_140], xmm6
    vmovups [rbp+0C0h+var_120], xmm5
    vmovaps [rbp+0C0h+data], xmm6
    vmovaps [rbp+0C0h+var_E0], xmm5
  }
  if ( vrsInlineResolve )
  {
    v58 = 0;
    v59 = 0i64;
    frameCount = _R15->input.data->frameCount;
    do
    {
      unsignedInt = frameCount & 3;
      if ( r_vrsDebugFrameSamplePattern->current.integer != -1 )
        unsignedInt = r_vrsDebugFrameSamplePattern->current.unsignedInt;
      if ( (unsigned int)unsignedInt >= 4 )
      {
        LODWORD(v68) = 4;
        LODWORD(v67) = unsignedInt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_variable_rate_shading.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( samplePattern ) < (unsigned)( 4 )", "samplePattern doesn't index VRS_MAX_SAMPLES\n\t%i not in [0, %i)", v67, v68) )
          __debugbreak();
      }
      v62 = s_VRSPixelToSampleOrdered_0[unsignedInt][v59];
      v63 = (int)v58;
      ++v59;
      ++v58;
      *((_DWORD *)v75 + v63) = v62;
    }
    while ( v58 < 4 );
    __asm { vmovups xmm0, xmmword ptr [rsp+1C0h+var_150] }
    v14 = v72;
    v24 = state;
    v25 = vrsInlineResolve;
    v28 = height;
    v27 = width;
    __asm { vmovups [rbp+0C0h+var_80], xmm0 }
  }
  R_UploadAndSetComputeConstants(v24, 0, data, 0x90u, NULL);
  if ( v25 )
  {
    if ( !*(ComputeShader **)((char *)rgp.motionVectorsStaticVrsInlineResolveComputeShader + (v14 != NULL ? 8 : 0)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 192, ASSERT_TYPE_ASSERT, "(compositeMtlIndex < VELOCITY_COMPOSITE_COUNT && rgp.motionVectorsStaticVrsInlineResolveComputeShader[compositeMtlIndex])", (const char *)&queryFormat, "compositeMtlIndex < VELOCITY_COMPOSITE_COUNT && rgp.motionVectorsStaticVrsInlineResolveComputeShader[compositeMtlIndex]") )
      __debugbreak();
    motionVectorsStaticVrsInlineResolveComputeShader = rgp.motionVectorsStaticVrsInlineResolveComputeShader;
  }
  else
  {
    if ( !*(ComputeShader **)((char *)rgp.motionVectorsStaticComputeShader + (v14 != NULL ? 8 : 0)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_velocity.cpp", 198, ASSERT_TYPE_ASSERT, "(compositeMtlIndex < VELOCITY_COMPOSITE_COUNT && rgp.motionVectorsStaticComputeShader[compositeMtlIndex])", (const char *)&queryFormat, "compositeMtlIndex < VELOCITY_COMPOSITE_COUNT && rgp.motionVectorsStaticComputeShader[compositeMtlIndex]") )
      __debugbreak();
    motionVectorsStaticVrsInlineResolveComputeShader = rgp.motionVectorsStaticComputeShader;
  }
  R_SetComputeShader(v24, *(ComputeShader **)((char *)motionVectorsStaticVrsInlineResolveComputeShader + (v14 != NULL ? 8 : 0)));
  R_Dispatch(v24, (v27 + 7) >> 3, (v28 + 7) >> 3, 1u);
  __asm { vmovaps xmm6, [rsp+1C0h+var_50] }
}

/*
==============
R_ShutdownVelocity
==============
*/

void __fastcall R_ShutdownVelocity(double _XMM0_8)
{
  R_RT_Handle v4; 

  if ( R_RT_Handle::IsValid(&s_halfVelocityRt) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_halfVelocityRt.m_surfaceID
      vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v4);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:s_halfVelocityRt.m_tracking.m_name, xmm0
    }
    s_halfVelocityRt.m_surfaceID = 0;
    s_halfVelocityRt.m_tracking.m_allocCounter = 0;
  }
  if ( R_RT_Handle::IsValid(&stru_151A9B090) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:stru_151A9B090.m_surfaceID
      vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v4);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:stru_151A9B090.m_tracking.m_name, xmm0
    }
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
  R_RT_Handle v4; 

  if ( R_RT_Handle::IsValid(&s_halfVelocityRt) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:s_halfVelocityRt.m_surfaceID
      vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v4);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:s_halfVelocityRt.m_tracking.m_name, xmm0
    }
    s_halfVelocityRt.m_surfaceID = 0;
    s_halfVelocityRt.m_tracking.m_allocCounter = 0;
  }
  if ( R_RT_Handle::IsValid(&stru_151A9B090) )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:stru_151A9B090.m_surfaceID
      vmovups ymmword ptr [rsp+48h+var_28.m_surfaceID], ymm0
    }
    R_RT_DestroyInternal(&v4);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:stru_151A9B090.m_tracking.m_name, xmm0
    }
    stru_151A9B090.m_surfaceID = 0;
    stru_151A9B090.m_tracking.m_allocCounter = 0;
  }
}

